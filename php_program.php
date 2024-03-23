<?php
// Function to calculate factorial
function factorial($n) {
    if ($n == 0 || $n == 1) {
        return 1;
    } else {
        return $n * factorial($n - 1);
    }
}

// Input number
$num = 5; // Change this number to calculate factorial for a different number

// Calculate factorial
$result = factorial($num);

// Display result
echo "Factorial of $num is $result";
?>