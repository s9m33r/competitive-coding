package BinaryStringConverter

import (
    "testing"
)

func TestBinaryStringConversion(t *testing.T) {
    number := 15
    expected := "00000000000000000000000000001111"
    actual := GetBinaryRepresentation(number);

    if actual != expected {
        t.Fatalf(`Expected binary representation of %d to be %v but got %v`, number, expected, actual)
    }
}
