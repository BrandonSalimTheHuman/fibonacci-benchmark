# fibonacci-benchmark
How to run code:

In run.bat, change the file name in the second line after -c into the name of the file that you want to run.

Currently, it will run main_test.c

To run the code, open run.bat

# Test result
![image](https://user-images.githubusercontent.com/114371928/205105771-55ce9198-a144-4c25-b464-4cbc63cc622a.png)
![image](https://user-images.githubusercontent.com/114371928/205105894-69195926-6c4f-487e-8b66-1b8e8122e497.png)

# Time benchmark
Iterative:

![image](https://user-images.githubusercontent.com/114371928/205095473-b82d8e7d-c578-4624-85e4-4ea900c63d39.png)

Recursive:

![image](https://user-images.githubusercontent.com/114371928/205096025-738214b1-151c-47e5-8874-19cfc9a0c460.png)

# Space benchmark
Iterative:

![image](https://user-images.githubusercontent.com/114371928/205097596-f3376223-39fc-4c78-aa15-ad5466647233.png)

Recursive:

![image](https://user-images.githubusercontent.com/114371928/205098533-3cc14359-2f56-411a-b581-2da3b2a216f2.png)

Conclusion:

Based on the results I've gotten from the benchmark tests, the recursive code takes astronomically (> 200,000%) longer than the iterative code.

Moreover, both codes take similar amounts of storage.
