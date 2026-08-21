package org.bouncycastle.crypto.engines;

public class SerpentEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int BLOCK_SIZE = 16;
    static final int PHI = -1640531527;
    static final int ROUNDS = 32;
    private int X0;
    private int X1;
    private int X2;
    private int X3;
    private boolean encrypting;
    private int[] wKey;

    public SerpentEngine() {
            r0 = this;
            r0.<init>()
            return
    }

    private void LT() {
            r5 = this;
            int r0 = r5.X0
            r1 = 13
            int r0 = r5.rotateLeft(r0, r1)
            int r1 = r5.X2
            r2 = 3
            int r1 = r5.rotateLeft(r1, r2)
            int r2 = r5.X1
            r2 = r2 ^ r0
            r2 = r2 ^ r1
            int r3 = r5.X3
            r3 = r3 ^ r1
            int r4 = r0 << 3
            r3 = r3 ^ r4
            r4 = 1
            int r2 = r5.rotateLeft(r2, r4)
            r5.X1 = r2
            r2 = 7
            int r3 = r5.rotateLeft(r3, r2)
            r5.X3 = r3
            int r4 = r5.X1
            r0 = r0 ^ r4
            r0 = r0 ^ r3
            r3 = 5
            int r0 = r5.rotateLeft(r0, r3)
            r5.X0 = r0
            int r0 = r5.X3
            r0 = r0 ^ r1
            int r1 = r5.X1
            int r1 = r1 << r2
            r0 = r0 ^ r1
            r1 = 22
            int r0 = r5.rotateLeft(r0, r1)
            r5.X2 = r0
            return
    }

    private int bytesToWord(byte[] r3, int r4) {
            r2 = this;
            r0 = r3[r4]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            int r1 = r4 + 1
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r4 + 2
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r4 = r4 + 3
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r3 | r0
            return r3
    }

    private void decryptBlock(byte[] r4, int r5, byte[] r6, int r7) {
            r3 = this;
            int[] r0 = r3.wKey
            r1 = 131(0x83, float:1.84E-43)
            r0 = r0[r1]
            int r1 = r3.bytesToWord(r4, r5)
            r0 = r0 ^ r1
            r3.X3 = r0
            int[] r0 = r3.wKey
            r1 = 130(0x82, float:1.82E-43)
            r0 = r0[r1]
            int r1 = r5 + 4
            int r1 = r3.bytesToWord(r4, r1)
            r0 = r0 ^ r1
            r3.X2 = r0
            int[] r0 = r3.wKey
            r1 = 129(0x81, float:1.81E-43)
            r0 = r0[r1]
            int r1 = r5 + 8
            int r1 = r3.bytesToWord(r4, r1)
            r0 = r0 ^ r1
            r3.X1 = r0
            int[] r0 = r3.wKey
            r1 = 128(0x80, float:1.8E-43)
            r0 = r0[r1]
            r1 = 12
            int r5 = r5 + r1
            int r4 = r3.bytesToWord(r4, r5)
            r4 = r4 ^ r0
            r3.X0 = r4
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib7(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 124(0x7c, float:1.74E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 125(0x7d, float:1.75E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 126(0x7e, float:1.77E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 127(0x7f, float:1.78E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib6(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 120(0x78, float:1.68E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 121(0x79, float:1.7E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 122(0x7a, float:1.71E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 123(0x7b, float:1.72E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib5(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 116(0x74, float:1.63E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 117(0x75, float:1.64E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 118(0x76, float:1.65E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 119(0x77, float:1.67E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib4(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 112(0x70, float:1.57E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 113(0x71, float:1.58E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 114(0x72, float:1.6E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 115(0x73, float:1.61E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib3(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 108(0x6c, float:1.51E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 109(0x6d, float:1.53E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 110(0x6e, float:1.54E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 111(0x6f, float:1.56E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib2(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 104(0x68, float:1.46E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 105(0x69, float:1.47E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 106(0x6a, float:1.49E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 107(0x6b, float:1.5E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib1(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 100
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 101(0x65, float:1.42E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 102(0x66, float:1.43E-43)
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 103(0x67, float:1.44E-43)
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib0(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 96
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 97
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 98
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 99
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib7(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 92
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 93
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 94
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 95
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib6(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 88
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 89
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 90
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 91
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib5(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 84
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 85
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 86
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 87
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib4(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 80
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 81
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 82
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 83
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib3(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 76
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 77
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 78
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 79
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib2(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 72
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 73
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 74
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 75
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib1(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 68
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 69
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 70
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 71
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib0(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 64
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 65
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 66
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 67
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib7(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 60
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 61
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 62
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 63
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib6(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 56
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 57
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 58
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 59
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib5(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 52
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 53
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 54
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 55
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib4(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 48
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 49
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 50
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 51
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib3(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 44
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 45
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 46
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 47
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib2(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 40
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 41
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 42
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 43
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib1(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 36
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 37
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 38
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 39
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib0(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 32
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 33
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 34
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 35
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib7(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 28
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 29
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 30
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 31
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib6(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 24
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 25
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 26
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 27
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib5(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 20
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 21
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 22
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 23
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib4(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 16
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 17
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 18
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 19
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib3(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = r5[r1]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 13
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 14
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 15
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib2(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 8
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 9
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 10
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 11
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib1(r4, r5, r0, r2)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 4
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X0 = r4
            int r4 = r3.X1
            r0 = 5
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X1 = r4
            int r4 = r3.X2
            r0 = 6
            r0 = r5[r0]
            r4 = r4 ^ r0
            r3.X2 = r4
            int r4 = r3.X3
            r0 = 7
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.X3 = r4
            r3.inverseLT()
            int r4 = r3.X0
            int r5 = r3.X1
            int r0 = r3.X2
            int r2 = r3.X3
            r3.ib0(r4, r5, r0, r2)
            int r4 = r3.X3
            int[] r5 = r3.wKey
            r0 = 3
            r5 = r5[r0]
            r4 = r4 ^ r5
            r3.wordToBytes(r4, r6, r7)
            int r4 = r3.X2
            int[] r5 = r3.wKey
            r0 = 2
            r5 = r5[r0]
            r4 = r4 ^ r5
            int r5 = r7 + 4
            r3.wordToBytes(r4, r6, r5)
            int r4 = r3.X1
            int[] r5 = r3.wKey
            r0 = 1
            r5 = r5[r0]
            r4 = r4 ^ r5
            int r5 = r7 + 8
            r3.wordToBytes(r4, r6, r5)
            int r4 = r3.X0
            int[] r5 = r3.wKey
            r0 = 0
            r5 = r5[r0]
            r4 = r4 ^ r5
            int r7 = r7 + r1
            r3.wordToBytes(r4, r6, r7)
            return
    }

    private void encryptBlock(byte[] r5, int r6, byte[] r7, int r8) {
            r4 = this;
            int r0 = r4.bytesToWord(r5, r6)
            r4.X3 = r0
            int r0 = r6 + 4
            int r0 = r4.bytesToWord(r5, r0)
            r4.X2 = r0
            int r0 = r6 + 8
            int r0 = r4.bytesToWord(r5, r0)
            r4.X1 = r0
            r0 = 12
            int r6 = r6 + r0
            int r5 = r4.bytesToWord(r5, r6)
            r4.X0 = r5
            int[] r6 = r4.wKey
            r1 = 0
            r1 = r6[r1]
            r5 = r5 ^ r1
            r1 = 1
            r1 = r6[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 2
            r2 = r6[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 3
            r6 = r6[r3]
            int r3 = r4.X3
            r6 = r6 ^ r3
            r4.sb0(r5, r1, r2, r6)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 4
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 5
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 6
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 7
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb1(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 8
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 9
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 10
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 11
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb2(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = r5[r0]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 13
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 14
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 15
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb3(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 16
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 17
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 18
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 19
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb4(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 20
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 21
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 22
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 23
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb5(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 24
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 25
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 26
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 27
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb6(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 28
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 29
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 30
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 31
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb7(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 32
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 33
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 34
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 35
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb0(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 36
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 37
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 38
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 39
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb1(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 40
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 41
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 42
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 43
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb2(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 44
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 45
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 46
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 47
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb3(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 48
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 49
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 50
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 51
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb4(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 52
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 53
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 54
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 55
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb5(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 56
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 57
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 58
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 59
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb6(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 60
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 61
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 62
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 63
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb7(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 64
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 65
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 66
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 67
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb0(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 68
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 69
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 70
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 71
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb1(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 72
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 73
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 74
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 75
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb2(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 76
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 77
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 78
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 79
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb3(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 80
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 81
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 82
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 83
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb4(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 84
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 85
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 86
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 87
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb5(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 88
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 89
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 90
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 91
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb6(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 92
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 93
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 94
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 95
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb7(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 96
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 97
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 98
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 99
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb0(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 100
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 101(0x65, float:1.42E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 102(0x66, float:1.43E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 103(0x67, float:1.44E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb1(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 104(0x68, float:1.46E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 105(0x69, float:1.47E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 106(0x6a, float:1.49E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 107(0x6b, float:1.5E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb2(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 108(0x6c, float:1.51E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 109(0x6d, float:1.53E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 110(0x6e, float:1.54E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 111(0x6f, float:1.56E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb3(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 112(0x70, float:1.57E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 113(0x71, float:1.58E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 114(0x72, float:1.6E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 115(0x73, float:1.61E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb4(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 116(0x74, float:1.63E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 117(0x75, float:1.64E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 118(0x76, float:1.65E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 119(0x77, float:1.67E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb5(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 120(0x78, float:1.68E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 121(0x79, float:1.7E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 122(0x7a, float:1.71E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 123(0x7b, float:1.72E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb6(r6, r1, r2, r5)
            r4.LT()
            int[] r5 = r4.wKey
            r6 = 124(0x7c, float:1.74E-43)
            r6 = r5[r6]
            int r1 = r4.X0
            r6 = r6 ^ r1
            r1 = 125(0x7d, float:1.75E-43)
            r1 = r5[r1]
            int r2 = r4.X1
            r1 = r1 ^ r2
            r2 = 126(0x7e, float:1.77E-43)
            r2 = r5[r2]
            int r3 = r4.X2
            r2 = r2 ^ r3
            r3 = 127(0x7f, float:1.78E-43)
            r5 = r5[r3]
            int r3 = r4.X3
            r5 = r5 ^ r3
            r4.sb7(r6, r1, r2, r5)
            int[] r5 = r4.wKey
            r6 = 131(0x83, float:1.84E-43)
            r5 = r5[r6]
            int r6 = r4.X3
            r5 = r5 ^ r6
            r4.wordToBytes(r5, r7, r8)
            int[] r5 = r4.wKey
            r6 = 130(0x82, float:1.82E-43)
            r5 = r5[r6]
            int r6 = r4.X2
            r5 = r5 ^ r6
            int r6 = r8 + 4
            r4.wordToBytes(r5, r7, r6)
            int[] r5 = r4.wKey
            r6 = 129(0x81, float:1.81E-43)
            r5 = r5[r6]
            int r6 = r4.X1
            r5 = r5 ^ r6
            int r6 = r8 + 8
            r4.wordToBytes(r5, r7, r6)
            int[] r5 = r4.wKey
            r6 = 128(0x80, float:1.8E-43)
            r5 = r5[r6]
            int r6 = r4.X0
            r5 = r5 ^ r6
            int r8 = r8 + r0
            r4.wordToBytes(r5, r7, r8)
            return
    }

    private void ib0(int r4, int r5, int r6, int r7) {
            r3 = this;
            int r0 = ~r4
            r5 = r5 ^ r4
            r1 = r0 | r5
            r1 = r1 ^ r7
            r6 = r6 ^ r1
            r2 = r5 ^ r6
            r3.X2 = r2
            r5 = r5 & r7
            r5 = r5 ^ r0
            r7 = r2 & r5
            r7 = r7 ^ r1
            r3.X1 = r7
            r4 = r4 & r1
            r7 = r7 | r6
            r4 = r4 ^ r7
            r3.X3 = r4
            r5 = r5 ^ r6
            r4 = r4 ^ r5
            r3.X0 = r4
            return
    }

    private void ib1(int r2, int r3, int r4, int r5) {
            r1 = this;
            r5 = r5 ^ r3
            r0 = r3 & r5
            r2 = r2 ^ r0
            r0 = r5 ^ r2
            r4 = r4 ^ r0
            r1.X3 = r4
            r5 = r5 & r2
            r3 = r3 ^ r5
            r5 = r4 | r3
            r2 = r2 ^ r5
            r1.X1 = r2
            int r2 = ~r2
            r3 = r3 ^ r4
            r4 = r2 ^ r3
            r1.X0 = r4
            r2 = r2 | r3
            r2 = r2 ^ r0
            r1.X2 = r2
            return
    }

    private void ib2(int r4, int r5, int r6, int r7) {
            r3 = this;
            r0 = r5 ^ r7
            int r1 = ~r0
            r2 = r4 ^ r6
            r6 = r6 ^ r0
            r5 = r5 & r6
            r5 = r5 ^ r2
            r3.X0 = r5
            r4 = r4 | r1
            r4 = r4 ^ r7
            r4 = r4 | r2
            r4 = r4 ^ r0
            r3.X3 = r4
            int r6 = ~r6
            r4 = r4 | r5
            r5 = r6 ^ r4
            r3.X1 = r5
            r5 = r7 & r6
            r4 = r4 ^ r2
            r4 = r4 ^ r5
            r3.X2 = r4
            return
    }

    private void ib3(int r4, int r5, int r6, int r7) {
            r3 = this;
            r0 = r4 | r5
            r1 = r5 ^ r6
            r5 = r5 & r1
            r4 = r4 ^ r5
            r5 = r6 ^ r4
            r6 = r7 | r4
            r2 = r1 ^ r6
            r3.X0 = r2
            r6 = r6 | r1
            r6 = r6 ^ r7
            r5 = r5 ^ r6
            r3.X2 = r5
            r5 = r0 ^ r6
            r6 = r2 & r5
            r4 = r4 ^ r6
            r3.X3 = r4
            r5 = r5 ^ r2
            r4 = r4 ^ r5
            r3.X1 = r4
            return
    }

    private void ib4(int r3, int r4, int r5, int r6) {
            r2 = this;
            r0 = r5 | r6
            r0 = r0 & r3
            r4 = r4 ^ r0
            r0 = r3 & r4
            r5 = r5 ^ r0
            r0 = r6 ^ r5
            r2.X1 = r0
            int r3 = ~r3
            r5 = r5 & r0
            r5 = r5 ^ r4
            r2.X3 = r5
            r1 = r0 | r3
            r6 = r6 ^ r1
            r5 = r5 ^ r6
            r2.X0 = r5
            r4 = r4 & r6
            r3 = r3 ^ r0
            r3 = r3 ^ r4
            r2.X2 = r3
            return
    }

    private void ib5(int r6, int r7, int r8, int r9) {
            r5 = this;
            int r0 = ~r8
            r1 = r7 & r0
            r1 = r1 ^ r9
            r2 = r6 & r1
            r3 = r7 ^ r0
            r3 = r3 ^ r2
            r5.X3 = r3
            r3 = r3 | r7
            r4 = r6 & r3
            r1 = r1 ^ r4
            r5.X1 = r1
            r9 = r9 | r6
            r0 = r0 ^ r3
            r0 = r0 ^ r9
            r5.X0 = r0
            r7 = r7 & r9
            r6 = r6 ^ r8
            r6 = r6 | r2
            r6 = r6 ^ r7
            r5.X2 = r6
            return
    }

    private void ib6(int r4, int r5, int r6, int r7) {
            r3 = this;
            int r0 = ~r4
            r4 = r4 ^ r5
            r1 = r6 ^ r4
            r6 = r6 | r0
            r6 = r6 ^ r7
            r2 = r1 ^ r6
            r3.X1 = r2
            r2 = r1 & r6
            r4 = r4 ^ r2
            r2 = r5 | r4
            r6 = r6 ^ r2
            r3.X3 = r6
            r5 = r5 | r6
            r4 = r4 ^ r5
            r3.X0 = r4
            r4 = r7 & r0
            r5 = r5 ^ r1
            r4 = r4 ^ r5
            r3.X2 = r4
            return
    }

    private void ib7(int r5, int r6, int r7, int r8) {
            r4 = this;
            r0 = r5 & r6
            r0 = r0 | r7
            r1 = r5 | r6
            r1 = r1 & r8
            r2 = r0 ^ r1
            r4.X3 = r2
            int r3 = ~r8
            r6 = r6 ^ r1
            r1 = r2 ^ r3
            r1 = r1 | r6
            r1 = r1 ^ r5
            r4.X1 = r1
            r6 = r6 ^ r7
            r7 = r8 | r1
            r6 = r6 ^ r7
            r4.X0 = r6
            r7 = r0 ^ r1
            r5 = r5 & r2
            r5 = r5 ^ r6
            r5 = r5 ^ r7
            r4.X2 = r5
            return
    }

    private void inverseLT() {
            r5 = this;
            int r0 = r5.X2
            r1 = 22
            int r0 = r5.rotateRight(r0, r1)
            int r1 = r5.X3
            r0 = r0 ^ r1
            int r1 = r5.X1
            r2 = 7
            int r1 = r1 << r2
            r0 = r0 ^ r1
            int r1 = r5.X0
            r3 = 5
            int r1 = r5.rotateRight(r1, r3)
            int r3 = r5.X1
            r1 = r1 ^ r3
            int r3 = r5.X3
            r1 = r1 ^ r3
            int r2 = r5.rotateRight(r3, r2)
            int r3 = r5.X1
            r4 = 1
            int r3 = r5.rotateRight(r3, r4)
            r2 = r2 ^ r0
            int r4 = r1 << 3
            r2 = r2 ^ r4
            r5.X3 = r2
            r2 = r3 ^ r1
            r2 = r2 ^ r0
            r5.X1 = r2
            r2 = 3
            int r0 = r5.rotateRight(r0, r2)
            r5.X2 = r0
            r0 = 13
            int r0 = r5.rotateRight(r1, r0)
            r5.X0 = r0
            return
    }

    private int[] makeWorkingKey(byte[] r14) throws java.lang.IllegalArgumentException {
            r13 = this;
            r0 = 16
            int[] r1 = new int[r0]
            int r2 = r14.length
            r3 = 4
            int r2 = r2 - r3
            r4 = 0
            r5 = 0
        L9:
            if (r2 <= 0) goto L17
            int r6 = r5 + 1
            int r7 = r13.bytesToWord(r14, r2)
            r1[r5] = r7
            int r2 = r2 + (-4)
            r5 = r6
            goto L9
        L17:
            if (r2 != 0) goto L5c9
            int r2 = r5 + 1
            int r14 = r13.bytesToWord(r14, r4)
            r1[r5] = r14
            r14 = 8
            r5 = 1
            if (r2 >= r14) goto L28
            r1[r2] = r5
        L28:
            r2 = 132(0x84, float:1.85E-43)
            int[] r6 = new int[r2]
            r7 = 8
        L2e:
            r8 = -1640531527(0xffffffff9e3779b9, float:-9.713111E-21)
            r9 = 11
            if (r7 >= r0) goto L53
            int r10 = r7 + (-8)
            r11 = r1[r10]
            int r12 = r7 + (-5)
            r12 = r1[r12]
            r11 = r11 ^ r12
            int r12 = r7 + (-3)
            r12 = r1[r12]
            r11 = r11 ^ r12
            int r12 = r7 + (-1)
            r12 = r1[r12]
            r11 = r11 ^ r12
            r8 = r8 ^ r11
            r8 = r8 ^ r10
            int r8 = r13.rotateLeft(r8, r9)
            r1[r7] = r8
            int r7 = r7 + 1
            goto L2e
        L53:
            java.lang.System.arraycopy(r1, r14, r6, r4, r14)
            r1 = 8
        L58:
            if (r1 >= r2) goto L78
            int r7 = r1 + (-8)
            r7 = r6[r7]
            int r10 = r1 + (-5)
            r10 = r6[r10]
            r7 = r7 ^ r10
            int r10 = r1 + (-3)
            r10 = r6[r10]
            r7 = r7 ^ r10
            int r10 = r1 + (-1)
            r10 = r6[r10]
            r7 = r7 ^ r10
            r7 = r7 ^ r8
            r7 = r7 ^ r1
            int r7 = r13.rotateLeft(r7, r9)
            r6[r1] = r7
            int r1 = r1 + 1
            goto L58
        L78:
            r1 = r6[r4]
            r2 = r6[r5]
            r7 = 2
            r8 = r6[r7]
            r10 = 3
            r11 = r6[r10]
            r13.sb3(r1, r2, r8, r11)
            int r1 = r13.X0
            r6[r4] = r1
            int r1 = r13.X1
            r6[r5] = r1
            int r1 = r13.X2
            r6[r7] = r1
            int r1 = r13.X3
            r6[r10] = r1
            r1 = r6[r3]
            r2 = 5
            r4 = r6[r2]
            r5 = 6
            r7 = r6[r5]
            r8 = 7
            r10 = r6[r8]
            r13.sb2(r1, r4, r7, r10)
            int r1 = r13.X0
            r6[r3] = r1
            int r1 = r13.X1
            r6[r2] = r1
            int r1 = r13.X2
            r6[r5] = r1
            int r1 = r13.X3
            r6[r8] = r1
            r1 = r6[r14]
            r2 = 9
            r3 = r6[r2]
            r4 = 10
            r5 = r6[r4]
            r7 = r6[r9]
            r13.sb1(r1, r3, r5, r7)
            int r1 = r13.X0
            r6[r14] = r1
            int r14 = r13.X1
            r6[r2] = r14
            int r14 = r13.X2
            r6[r4] = r14
            int r14 = r13.X3
            r6[r9] = r14
            r14 = 12
            r1 = r6[r14]
            r2 = 13
            r3 = r6[r2]
            r4 = 14
            r5 = r6[r4]
            r7 = 15
            r8 = r6[r7]
            r13.sb0(r1, r3, r5, r8)
            int r1 = r13.X0
            r6[r14] = r1
            int r14 = r13.X1
            r6[r2] = r14
            int r14 = r13.X2
            r6[r4] = r14
            int r14 = r13.X3
            r6[r7] = r14
            r14 = r6[r0]
            r1 = 17
            r2 = r6[r1]
            r3 = 18
            r4 = r6[r3]
            r5 = 19
            r7 = r6[r5]
            r13.sb7(r14, r2, r4, r7)
            int r14 = r13.X0
            r6[r0] = r14
            int r14 = r13.X1
            r6[r1] = r14
            int r14 = r13.X2
            r6[r3] = r14
            int r14 = r13.X3
            r6[r5] = r14
            r14 = 20
            r0 = r6[r14]
            r1 = 21
            r1 = r6[r1]
            r2 = 22
            r2 = r6[r2]
            r3 = 23
            r3 = r6[r3]
            r13.sb6(r0, r1, r2, r3)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 21
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 22
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 23
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 24
            r14 = r6[r14]
            r0 = 25
            r0 = r6[r0]
            r1 = 26
            r1 = r6[r1]
            r2 = 27
            r2 = r6[r2]
            r13.sb5(r14, r0, r1, r2)
            r14 = 24
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 25
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 26
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 27
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 28
            r14 = r6[r14]
            r0 = 29
            r0 = r6[r0]
            r1 = 30
            r1 = r6[r1]
            r2 = 31
            r2 = r6[r2]
            r13.sb4(r14, r0, r1, r2)
            r14 = 28
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 29
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 30
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 31
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 32
            r14 = r6[r14]
            r0 = 33
            r0 = r6[r0]
            r1 = 34
            r1 = r6[r1]
            r2 = 35
            r2 = r6[r2]
            r13.sb3(r14, r0, r1, r2)
            r14 = 32
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 33
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 34
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 35
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 36
            r14 = r6[r14]
            r0 = 37
            r0 = r6[r0]
            r1 = 38
            r1 = r6[r1]
            r2 = 39
            r2 = r6[r2]
            r13.sb2(r14, r0, r1, r2)
            r14 = 36
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 37
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 38
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 39
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 40
            r14 = r6[r14]
            r0 = 41
            r0 = r6[r0]
            r1 = 42
            r1 = r6[r1]
            r2 = 43
            r2 = r6[r2]
            r13.sb1(r14, r0, r1, r2)
            r14 = 40
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 41
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 42
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 43
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 44
            r14 = r6[r14]
            r0 = 45
            r0 = r6[r0]
            r1 = 46
            r1 = r6[r1]
            r2 = 47
            r2 = r6[r2]
            r13.sb0(r14, r0, r1, r2)
            r14 = 44
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 45
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 46
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 47
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 48
            r14 = r6[r14]
            r0 = 49
            r0 = r6[r0]
            r1 = 50
            r1 = r6[r1]
            r2 = 51
            r2 = r6[r2]
            r13.sb7(r14, r0, r1, r2)
            r14 = 48
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 49
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 50
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 51
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 52
            r14 = r6[r14]
            r0 = 53
            r0 = r6[r0]
            r1 = 54
            r1 = r6[r1]
            r2 = 55
            r2 = r6[r2]
            r13.sb6(r14, r0, r1, r2)
            r14 = 52
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 53
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 54
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 55
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 56
            r14 = r6[r14]
            r0 = 57
            r0 = r6[r0]
            r1 = 58
            r1 = r6[r1]
            r2 = 59
            r2 = r6[r2]
            r13.sb5(r14, r0, r1, r2)
            r14 = 56
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 57
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 58
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 59
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 60
            r14 = r6[r14]
            r0 = 61
            r0 = r6[r0]
            r1 = 62
            r1 = r6[r1]
            r2 = 63
            r2 = r6[r2]
            r13.sb4(r14, r0, r1, r2)
            r14 = 60
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 61
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 62
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 63
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 64
            r14 = r6[r14]
            r0 = 65
            r0 = r6[r0]
            r1 = 66
            r1 = r6[r1]
            r2 = 67
            r2 = r6[r2]
            r13.sb3(r14, r0, r1, r2)
            r14 = 64
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 65
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 66
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 67
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 68
            r14 = r6[r14]
            r0 = 69
            r0 = r6[r0]
            r1 = 70
            r1 = r6[r1]
            r2 = 71
            r2 = r6[r2]
            r13.sb2(r14, r0, r1, r2)
            r14 = 68
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 69
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 70
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 71
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 72
            r14 = r6[r14]
            r0 = 73
            r0 = r6[r0]
            r1 = 74
            r1 = r6[r1]
            r2 = 75
            r2 = r6[r2]
            r13.sb1(r14, r0, r1, r2)
            r14 = 72
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 73
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 74
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 75
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 76
            r14 = r6[r14]
            r0 = 77
            r0 = r6[r0]
            r1 = 78
            r1 = r6[r1]
            r2 = 79
            r2 = r6[r2]
            r13.sb0(r14, r0, r1, r2)
            r14 = 76
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 77
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 78
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 79
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 80
            r14 = r6[r14]
            r0 = 81
            r0 = r6[r0]
            r1 = 82
            r1 = r6[r1]
            r2 = 83
            r2 = r6[r2]
            r13.sb7(r14, r0, r1, r2)
            r14 = 80
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 81
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 82
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 83
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 84
            r14 = r6[r14]
            r0 = 85
            r0 = r6[r0]
            r1 = 86
            r1 = r6[r1]
            r2 = 87
            r2 = r6[r2]
            r13.sb6(r14, r0, r1, r2)
            r14 = 84
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 85
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 86
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 87
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 88
            r14 = r6[r14]
            r0 = 89
            r0 = r6[r0]
            r1 = 90
            r1 = r6[r1]
            r2 = 91
            r2 = r6[r2]
            r13.sb5(r14, r0, r1, r2)
            r14 = 88
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 89
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 90
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 91
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 92
            r14 = r6[r14]
            r0 = 93
            r0 = r6[r0]
            r1 = 94
            r1 = r6[r1]
            r2 = 95
            r2 = r6[r2]
            r13.sb4(r14, r0, r1, r2)
            r14 = 92
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 93
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 94
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 95
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 96
            r14 = r6[r14]
            r0 = 97
            r0 = r6[r0]
            r1 = 98
            r1 = r6[r1]
            r2 = 99
            r2 = r6[r2]
            r13.sb3(r14, r0, r1, r2)
            r14 = 96
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 97
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 98
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 99
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 100
            r14 = r6[r14]
            r0 = 101(0x65, float:1.42E-43)
            r0 = r6[r0]
            r1 = 102(0x66, float:1.43E-43)
            r1 = r6[r1]
            r2 = 103(0x67, float:1.44E-43)
            r2 = r6[r2]
            r13.sb2(r14, r0, r1, r2)
            r14 = 100
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 101(0x65, float:1.42E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 102(0x66, float:1.43E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 103(0x67, float:1.44E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 104(0x68, float:1.46E-43)
            r14 = r6[r14]
            r0 = 105(0x69, float:1.47E-43)
            r0 = r6[r0]
            r1 = 106(0x6a, float:1.49E-43)
            r1 = r6[r1]
            r2 = 107(0x6b, float:1.5E-43)
            r2 = r6[r2]
            r13.sb1(r14, r0, r1, r2)
            r14 = 104(0x68, float:1.46E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 105(0x69, float:1.47E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 106(0x6a, float:1.49E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 107(0x6b, float:1.5E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 108(0x6c, float:1.51E-43)
            r14 = r6[r14]
            r0 = 109(0x6d, float:1.53E-43)
            r0 = r6[r0]
            r1 = 110(0x6e, float:1.54E-43)
            r1 = r6[r1]
            r2 = 111(0x6f, float:1.56E-43)
            r2 = r6[r2]
            r13.sb0(r14, r0, r1, r2)
            r14 = 108(0x6c, float:1.51E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 109(0x6d, float:1.53E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 110(0x6e, float:1.54E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 111(0x6f, float:1.56E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 112(0x70, float:1.57E-43)
            r14 = r6[r14]
            r0 = 113(0x71, float:1.58E-43)
            r0 = r6[r0]
            r1 = 114(0x72, float:1.6E-43)
            r1 = r6[r1]
            r2 = 115(0x73, float:1.61E-43)
            r2 = r6[r2]
            r13.sb7(r14, r0, r1, r2)
            r14 = 112(0x70, float:1.57E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 113(0x71, float:1.58E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 114(0x72, float:1.6E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 115(0x73, float:1.61E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 116(0x74, float:1.63E-43)
            r14 = r6[r14]
            r0 = 117(0x75, float:1.64E-43)
            r0 = r6[r0]
            r1 = 118(0x76, float:1.65E-43)
            r1 = r6[r1]
            r2 = 119(0x77, float:1.67E-43)
            r2 = r6[r2]
            r13.sb6(r14, r0, r1, r2)
            r14 = 116(0x74, float:1.63E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 117(0x75, float:1.64E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 118(0x76, float:1.65E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 119(0x77, float:1.67E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 120(0x78, float:1.68E-43)
            r14 = r6[r14]
            r0 = 121(0x79, float:1.7E-43)
            r0 = r6[r0]
            r1 = 122(0x7a, float:1.71E-43)
            r1 = r6[r1]
            r2 = 123(0x7b, float:1.72E-43)
            r2 = r6[r2]
            r13.sb5(r14, r0, r1, r2)
            r14 = 120(0x78, float:1.68E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 121(0x79, float:1.7E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 122(0x7a, float:1.71E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 123(0x7b, float:1.72E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 124(0x7c, float:1.74E-43)
            r14 = r6[r14]
            r0 = 125(0x7d, float:1.75E-43)
            r0 = r6[r0]
            r1 = 126(0x7e, float:1.77E-43)
            r1 = r6[r1]
            r2 = 127(0x7f, float:1.78E-43)
            r2 = r6[r2]
            r13.sb4(r14, r0, r1, r2)
            r14 = 124(0x7c, float:1.74E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 125(0x7d, float:1.75E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 126(0x7e, float:1.77E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 127(0x7f, float:1.78E-43)
            int r0 = r13.X3
            r6[r14] = r0
            r14 = 128(0x80, float:1.8E-43)
            r14 = r6[r14]
            r0 = 129(0x81, float:1.81E-43)
            r0 = r6[r0]
            r1 = 130(0x82, float:1.82E-43)
            r1 = r6[r1]
            r2 = 131(0x83, float:1.84E-43)
            r2 = r6[r2]
            r13.sb3(r14, r0, r1, r2)
            r14 = 128(0x80, float:1.8E-43)
            int r0 = r13.X0
            r6[r14] = r0
            r14 = 129(0x81, float:1.81E-43)
            int r0 = r13.X1
            r6[r14] = r0
            r14 = 130(0x82, float:1.82E-43)
            int r0 = r13.X2
            r6[r14] = r0
            r14 = 131(0x83, float:1.84E-43)
            int r0 = r13.X3
            r6[r14] = r0
            return r6
        L5c9:
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "key must be a multiple of 4 bytes"
            r14.<init>(r0)
            throw r14
    }

    private int rotateLeft(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = -r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private int rotateRight(int r2, int r3) {
            r1 = this;
            int r0 = r2 >>> r3
            int r3 = -r3
            int r2 = r2 << r3
            r2 = r2 | r0
            return r2
    }

    private void sb0(int r4, int r5, int r6, int r7) {
            r3 = this;
            r0 = r4 ^ r7
            r1 = r6 ^ r0
            r2 = r5 ^ r1
            r7 = r7 & r4
            r7 = r7 ^ r2
            r3.X3 = r7
            r5 = r5 & r0
            r4 = r4 ^ r5
            r5 = r6 | r4
            r5 = r5 ^ r2
            r3.X2 = r5
            r5 = r1 ^ r4
            r5 = r5 & r7
            int r6 = ~r1
            r6 = r6 ^ r5
            r3.X1 = r6
            int r4 = ~r4
            r4 = r4 ^ r5
            r3.X0 = r4
            return
    }

    private void sb1(int r2, int r3, int r4, int r5) {
            r1 = this;
            int r0 = ~r2
            r0 = r0 ^ r3
            r2 = r2 | r0
            r2 = r2 ^ r4
            r4 = r5 ^ r2
            r1.X2 = r4
            r5 = r5 | r0
            r3 = r3 ^ r5
            r4 = r4 ^ r0
            r5 = r2 & r3
            r5 = r5 ^ r4
            r1.X3 = r5
            r3 = r3 ^ r2
            r5 = r5 ^ r3
            r1.X1 = r5
            r3 = r3 & r4
            r2 = r2 ^ r3
            r1.X0 = r2
            return
    }

    private void sb2(int r5, int r6, int r7, int r8) {
            r4 = this;
            int r0 = ~r5
            r1 = r6 ^ r8
            r2 = r7 & r0
            r2 = r2 ^ r1
            r4.X0 = r2
            r3 = r7 ^ r0
            r7 = r7 ^ r2
            r6 = r6 & r7
            r7 = r3 ^ r6
            r4.X3 = r7
            r6 = r6 | r8
            r2 = r2 | r3
            r6 = r6 & r2
            r5 = r5 ^ r6
            r4.X2 = r5
            r6 = r1 ^ r7
            r7 = r8 | r0
            r5 = r5 ^ r7
            r5 = r5 ^ r6
            r4.X1 = r5
            return
    }

    private void sb3(int r4, int r5, int r6, int r7) {
            r3 = this;
            r0 = r4 ^ r5
            r1 = r4 & r6
            r4 = r4 | r7
            r6 = r6 ^ r7
            r2 = r0 & r4
            r1 = r1 | r2
            r2 = r6 ^ r1
            r3.X2 = r2
            r4 = r4 ^ r5
            r4 = r4 ^ r1
            r1 = r6 & r4
            r0 = r0 ^ r1
            r3.X0 = r0
            r0 = r0 & r2
            r4 = r4 ^ r0
            r3.X1 = r4
            r4 = r5 | r7
            r5 = r6 ^ r0
            r4 = r4 ^ r5
            r3.X3 = r4
            return
    }

    private void sb4(int r3, int r4, int r5, int r6) {
            r2 = this;
            r0 = r3 ^ r6
            r6 = r6 & r0
            r5 = r5 ^ r6
            r6 = r4 | r5
            r1 = r0 ^ r6
            r2.X3 = r1
            int r4 = ~r4
            r1 = r0 | r4
            r1 = r1 ^ r5
            r2.X0 = r1
            r1 = r1 & r3
            r4 = r4 ^ r0
            r6 = r6 & r4
            r6 = r6 ^ r1
            r2.X2 = r6
            r3 = r3 ^ r5
            r4 = r4 & r6
            r3 = r3 ^ r4
            r2.X1 = r3
            return
    }

    private void sb5(int r4, int r5, int r6, int r7) {
            r3 = this;
            int r0 = ~r4
            r1 = r4 ^ r5
            r4 = r4 ^ r7
            r6 = r6 ^ r0
            r2 = r1 | r4
            r6 = r6 ^ r2
            r3.X0 = r6
            r7 = r7 & r6
            r2 = r1 ^ r6
            r2 = r2 ^ r7
            r3.X1 = r2
            r6 = r6 | r0
            r0 = r1 | r7
            r4 = r4 ^ r6
            r6 = r0 ^ r4
            r3.X2 = r6
            r5 = r5 ^ r7
            r4 = r4 & r2
            r4 = r4 ^ r5
            r3.X3 = r4
            return
    }

    private void sb6(int r3, int r4, int r5, int r6) {
            r2 = this;
            int r0 = ~r3
            r3 = r3 ^ r6
            r1 = r4 ^ r3
            r0 = r0 | r3
            r5 = r5 ^ r0
            r4 = r4 ^ r5
            r2.X1 = r4
            r3 = r3 | r4
            r3 = r3 ^ r6
            r4 = r5 & r3
            r4 = r4 ^ r1
            r2.X2 = r4
            r3 = r3 ^ r5
            r4 = r4 ^ r3
            r2.X0 = r4
            int r4 = ~r5
            r3 = r3 & r1
            r3 = r3 ^ r4
            r2.X3 = r3
            return
    }

    private void sb7(int r3, int r4, int r5, int r6) {
            r2 = this;
            r0 = r4 ^ r5
            r5 = r5 & r0
            r5 = r5 ^ r6
            r1 = r3 ^ r5
            r6 = r6 | r0
            r6 = r6 & r1
            r4 = r4 ^ r6
            r2.X1 = r4
            r4 = r4 | r5
            r3 = r3 & r1
            r3 = r3 ^ r0
            r2.X3 = r3
            r4 = r4 ^ r1
            r6 = r3 & r4
            r5 = r5 ^ r6
            r2.X2 = r5
            int r4 = ~r4
            r3 = r3 & r5
            r3 = r3 ^ r4
            r2.X0 = r3
            return
    }

    private void wordToBytes(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r5 + 3
            byte r1 = (byte) r3
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 1
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r3 = r3 >>> 24
            byte r3 = (byte) r3
            r4[r5] = r3
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Serpent"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L13
            r2.encrypting = r3
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            int[] r3 = r2.makeWorkingKey(r3)
            r2.wKey = r3
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to Serpent init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public final int processBlock(byte[] r3, int r4, byte[] r5, int r6) {
            r2 = this;
            int[] r0 = r2.wKey
            if (r0 == 0) goto L2c
            int r0 = r4 + 16
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 16
            int r1 = r5.length
            if (r0 > r1) goto L1c
            boolean r0 = r2.encrypting
            if (r0 == 0) goto L16
            r2.encryptBlock(r3, r4, r5, r6)
            goto L19
        L16:
            r2.decryptBlock(r3, r4, r5, r6)
        L19:
            r3 = 16
            return r3
        L1c:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "output buffer too short"
            r3.<init>(r4)
            throw r3
        L24:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "input buffer too short"
            r3.<init>(r4)
            throw r3
        L2c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Serpent not initialised"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
