def binary_search(arr,terget):
    left ,right = 0,len(arr)-1
    while left <= right:
        mid =(left + right)//2
        
        if arr[mid] == terget:
            return mid
        elif arr[mid] < terget:
            left = mid +1
        else: 
            right = mid -1
    
    return -1

arr = [10, 20, 30, 40, 50, 60, 70]
print(binary_search(arr, 40))       
            
        
            
