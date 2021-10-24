package main

import (
    "fmt"
    b "problems.misc.easy/BinaryStringConverter"
)

type Node struct {
    data int
    left *Node
    right *Node
    parent *Node
}

type Heap struct {
    Root Node
}

func main() {
    heap := Heap{}

    heap.Root = Node{}

    fmt.Println(b.GetBinaryRepresentation(15))
}
