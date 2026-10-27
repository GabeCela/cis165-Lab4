# AI Reflection

# Tools Used
I utilized google AI collaborator to help accelerate my workflow for this assignment. Specifically, I used the AI to review my logic layout and help me write the code.

# One Decision
The AI initially provided a solution for `ocean_levels.cpp` that calculated values directly inside the output stream expressions (std::cout). 
Placing mathematical formulas directly within cout is not an acceptable practise so, I made the explicit design decision to reject that structure. 
I separated the calculation from the display by forcing the program to evaluate calculations and store them in distinct variables (rise_after_5_years, etc.) before showing them in output screen.

# Verification
I verified both programs by cross-checking the terminal output against hand-calculated values. 
For average.cpp, the calculation correctly totaled the values to 154 and divided by 5 to display of 30.8. Same with replaced values.
For ocean_levels.cpp, output confirmed my manual calculations: 7.5 mm for 5 years, 10.5 mm for 7 years, and 15.0 mm for 10 years. 
Both programs compiled with zero warnings or errors.

# Learning
I can structure a clean C++ program that enforces data integrity using named constants (const) for fixed values. 
I still need to practice manual variable tracing for more complex formulas to ensure I completely understand how the compiler handles mixed data-type expressions.
