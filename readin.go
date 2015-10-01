package main

import "fmt"

func main() {
	var usrin string

	for n := 0; n != 1; {
		fmt.Print("Type: ")
		fmt.Scan(&usrin)
		fmt.Printf("%s\n", usrin)
	}
	fmt.Print("Bye!\n")
}
