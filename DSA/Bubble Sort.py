# Bubble Sort
"""
Time Complexity: O(n²)
Space Complexity: O(1)
"""

arr = list(map(int, input("Enter array elements separated by space: ").split()))

n = len(arr)

for i in range(n - 1):
    for j in range(n - i - 1):
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print("Sorted array:", arr)