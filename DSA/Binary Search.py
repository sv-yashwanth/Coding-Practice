# Binary Search
"""
Time Complexity: O(log n)
Space Complexity: O(1)
"""

arr = list(map(int, input("Enter sorted array elements separated by space: ").split()))
target = int(input("Enter element to search: "))

left = 0
right = len(arr) - 1
position = -1

while left <= right:
    mid = (left + right) // 2

    if arr[mid] == target:
        position = mid
        break
    elif arr[mid] < target:
        left = mid + 1
    else:
        right = mid - 1

if position != -1:
    print("Element found at index", position)
else:
    print("Element not found")