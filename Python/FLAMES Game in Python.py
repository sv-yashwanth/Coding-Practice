"""
FLAMES Game

F = Friends
L = Lovers
A = Affection
M = Marriage
E = Enemies
S = Siblings
"""

from collections import Counter


class FlamesGame:
    FLAMES = ["Friends", "Lovers", "Affection", "Marriage", "Enemies", "Siblings"]

    @staticmethod
    def clean_name(name):
        """Remove spaces and convert to lowercase."""
        return "".join(name.lower().split())

    @staticmethod
    def calculate_remaining_letters(name1, name2):
        """
        Cancel common letters and return count of remaining letters.
        """
        counter1 = Counter(name1)
        counter2 = Counter(name2)

        common = counter1 & counter2

        for char in common:
            counter1[char] -= common[char]
            counter2[char] -= common[char]

        return sum(counter1.values()) + sum(counter2.values())

    @staticmethod
    def get_relationship(count):
        """
        Apply FLAMES elimination logic.
        """
        flames = FlamesGame.FLAMES.copy()

        while len(flames) > 1:
            index = (count - 1) % len(flames)

            flames.pop(index)

            if flames:
                flames = flames[index:] + flames[:index]

        return flames[0]

    def play(self, name1, name2):
        name1 = self.clean_name(name1)
        name2 = self.clean_name(name2)

        if not name1 or not name2:
            raise ValueError("Names cannot be empty.")

        remaining_count = self.calculate_remaining_letters(name1, name2)

        if remaining_count == 0:
            relationship = "Perfect Match"
        else:
            relationship = self.get_relationship(remaining_count)

        return remaining_count, relationship


def display_banner():
    print("=" * 40)
    print("FLAMES GAME")
    print("=" * 40)
    print("F - Friends")
    print("L - Lovers")
    print("A - Affection")
    print("M - Marriage")
    print("E - Enemies")
    print("S - Siblings")
    print("=" * 40)


def main():
    game = FlamesGame()

    display_banner()

    while True:
        try:
            name1 = input("\nEnter First Name: ").strip()
            name2 = input("Enter Second Name: ").strip()

            remaining_count, relationship = game.play(name1, name2)

            print("\nResult")
            print("-" * 30)
            print(f"Remaining Letters: {remaining_count}")
            print(f"Relationship: {relationship}")
            print("-" * 30)

        except ValueError as e:
            print(f"\nError: {e}")

        choice = input("\nPlay Again? (Y/N): ").strip().lower()

        if choice != "y":
            print("\nThank you for playing FLAMES!")
            break


if __name__ == "__main__":
    main()