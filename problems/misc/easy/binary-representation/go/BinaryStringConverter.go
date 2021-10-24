package BinaryStringConverter

func GetBinaryRepresentation(n int) string {
    binaryString := ""

    for i := (1 << 31); i > 0; i /= 2 {
        if n & i == 0 {
            binaryString += "0"
        } else {
            binaryString += "1"
        }
    }

    return binaryString
}
