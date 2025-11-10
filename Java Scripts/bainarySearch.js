function binarySearch(arr, terget) {
  let left = 0;
  let right = arr.length - 1;

  while (left <= right) {
    const mid = Math.floor((left + right) / 2);

    if (arr[mid] === terget) {
      return mid;
    } else if (arr[mid] < terget) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}
const arr = [10, 20, 30, 40, 50, 60, 60];
const terget = 60;
const result = binarySearch(arr, terget);
if (result !== -1) {
  console.log(`Element found at index ${result}`);
} else {
  console.log("Element not found");
}
