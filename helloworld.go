package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Print("Type an integer: ")
	fmt.Scan(&c)
	a = 1
	b = 3
	fmt.Printf("Integers: %d, %d", (a+b), c)

}
