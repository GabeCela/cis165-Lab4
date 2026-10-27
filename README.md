# cis165-Lab4

# Average.cpp
# Plan for code:
        Set 5 double variables named num1, num2, num3. num4 and num5
        Set a double variable named sum that stores the sum of all 5 variables
        Set a double variable named average that stores sum/5
        Display results with clear labels.

# Test 
# Program and test	            Values used	         Expected results	    Actual results	  Match or correction
Average — assigned values	  28, 32, 37, 24, 33	        154  - 30.8	       154  - 30.8               Match
Average — changed values	  27.3, 16, 22.4, -14, 25    76.7 -  15.34      76.7  -  15.34             Match

The values were restored to assigned value in the code.

# Code Explanation:

# 1. Why should the five values and the average use the double data type?
The `double` data type is necessary because the average of any group of numbers often results in a fractional value with a decimal point. If we used the `int` data type, C++ would perform integer division, truncating the decimal part and losing precision. Using `double` for the five initial values ensures that the entire mathematical pipeline maintains floating-point precision from start to finish.

# 2. Trace the assigned values through sum and average.
Step 1 (Setting variables): Five variables are allocated in memory with their respective literal values: num1 = 28`, num2 = 32, num3 = 37, num4 = 24, and num5 = 33.
Step 2 (Sum): The program evaluates the right side of the assignment operator: 28 + 32 + 37 + 24 + 33. The calculations result in 154. This value is then stored in the memory location allocated for sum.
Step 3 (Average): The program retrieves the value of sum 154.0 and divides it by 5. The calculation results in 30.8. This final value is stored in the memory location allocated for average.

# 3. Why should the average calculation divide the completed sum rather than only the final value?
According to the mathematical order of operations, division takes precedence over addition. If you write num1 + num2 + num3 + num4 + num5 / 5.0, the compiler will only divide num5 by 5 and then add the remaining numbers to that result. Storing the total in a combined sum variable first guarantees that the entire collection of values is fully totaled before the division is executed.

# Ocean_levels.cpp

# Plan for code:

        Set constant ANNUAL_RISE_MM: A named `double` constant initialized to a fixed value of 1.5. This represents   the yearly linear rise of the ocean level in millimeters.
        Set contants: TIME_FRAME_5_YEARS, TIME_FRAME_7_YEARS and TIME_FRAME_10_YEARS each constant initialized 5, 7, 10, representing the milestones timeframe.

        5-Year Calculation: Multiply ANNUAL_RISE_MM`by TIME_FRAME_5_YEARS. Store the result in rise_after_5_years.
        7-Year Calculation: Multiply ANNUAL_RISE_MM by TIME_FRAME_7_YEARS. Store the result in rise_after_7_years.
        10-Year Calculation: Multiply ANNUAL_RISE_MM by TIME_FRAME_10_YEARS. Store the result in rise_after_10_years.

        Display descriptive labels matching the projections timeline, followed by the value and the unit " mm"`.

# Test 
# Program and test	            Values used	         Expected results	    Actual results	  Match or correction
Ocean — assigned rates	             1.5	             7.5, 10.5, 15       7.5, 10.5, 15             Match
Ocean — assigned rates	             2.1	             10.5, 14.7, 21      10.5, 14.7, 21            Match

The values were restored to assigned value in the code.

# Code Explanation:
# Explain how the ocean-level calculations use the annual rate and number of years.
The program defines a constant linear growth rate over time. To find the cumulative rise for any given timeframe, the program multiplies the fixed annual rate of change by the specific duration of time. 
Total Rise = Annual Rate (1.5 mm) * Time Frame (5, 7, or 10 years)

# Why is the annual ocean-level rate a good candidate for a named constant?
The annual rate of 1.5 mm is a fixed constant that does not change during the execution of the program. Making it a named constant (const) protects the integrity of the data by preventing accidental modifications later in the code. 

# Why does the assignment require calculations to be stored before using cout?
Separating the calculation logic from the display logic is a fundamental practice in software engineering. Storing calculations in independent variables first makes the code easier to read, test, and debug. If a calculation error occurs, a programmer can inspect the variable directly in memory rather than sorting through complex formatting inside a std::cout stream expression.

