# Linear Search
"""
Time Complexity: O(n)
Space Complexity: O(1)
"""

arr = list(map(int, input("Enter array elements separated by space: ").split()))
target = int(input("Enter element to search: "))

position = -1

for i in range(len(arr)):
    if arr[i] == target:
        position = i
        break

if position != -1:
    print("Element found at index", position)
else:
    print("Element not found")