package org.bouncycastle.crypto.engines;

public final class CAST6Engine extends org.bouncycastle.crypto.engines.CAST5Engine {
    protected static final int BLOCK_SIZE = 16;
    protected static final int ROUNDS = 12;
    protected int[] _Km;
    protected int[] _Kr;
    protected int[] _Tm;
    protected int[] _Tr;
    private int[] _workingKey;

    public CAST6Engine() {
            r2 = this;
            r2.<init>()
            r0 = 48
            int[] r1 = new int[r0]
            r2._Kr = r1
            int[] r0 = new int[r0]
            r2._Km = r0
            r0 = 192(0xc0, float:2.69E-43)
            int[] r1 = new int[r0]
            r2._Tr = r1
            int[] r0 = new int[r0]
            r2._Tm = r0
            r0 = 8
            int[] r0 = new int[r0]
            r2._workingKey = r0
            return
    }

    protected final void CAST_Decipher(int r8, int r9, int r10, int r11, int[] r12) {
            r7 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 6
            r3 = 3
            if (r1 >= r2) goto L46
            int r2 = 11 - r1
            int r2 = r2 * 4
            int[] r4 = r7._Km
            r4 = r4[r2]
            int[] r5 = r7._Kr
            r5 = r5[r2]
            int r4 = r7.F1(r11, r4, r5)
            r10 = r10 ^ r4
            int[] r4 = r7._Km
            int r5 = r2 + 1
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F2(r10, r4, r5)
            r9 = r9 ^ r4
            int[] r4 = r7._Km
            int r5 = r2 + 2
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F3(r9, r4, r5)
            r8 = r8 ^ r4
            int[] r4 = r7._Km
            int r2 = r2 + r3
            r3 = r4[r2]
            int[] r4 = r7._Kr
            r2 = r4[r2]
            int r2 = r7.F1(r8, r3, r2)
            r11 = r11 ^ r2
            int r1 = r1 + 1
            goto L2
        L46:
            r1 = 12
            if (r2 >= r1) goto L8b
            int r1 = 11 - r2
            int r1 = r1 * 4
            int[] r4 = r7._Km
            int r5 = r1 + 3
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F1(r8, r4, r5)
            r11 = r11 ^ r4
            int[] r4 = r7._Km
            int r5 = r1 + 2
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F3(r9, r4, r5)
            r8 = r8 ^ r4
            int[] r4 = r7._Km
            int r5 = r1 + 1
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F2(r10, r4, r5)
            r9 = r9 ^ r4
            int[] r4 = r7._Km
            r4 = r4[r1]
            int[] r5 = r7._Kr
            r1 = r5[r1]
            int r1 = r7.F1(r11, r4, r1)
            r10 = r10 ^ r1
            int r2 = r2 + 1
            goto L46
        L8b:
            r12[r0] = r8
            r8 = 1
            r12[r8] = r9
            r8 = 2
            r12[r8] = r10
            r12[r3] = r11
            return
    }

    protected final void CAST_Encipher(int r8, int r9, int r10, int r11, int[] r12) {
            r7 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 6
            r3 = 3
            if (r1 >= r2) goto L44
            int r2 = r1 * 4
            int[] r4 = r7._Km
            r4 = r4[r2]
            int[] r5 = r7._Kr
            r5 = r5[r2]
            int r4 = r7.F1(r11, r4, r5)
            r10 = r10 ^ r4
            int[] r4 = r7._Km
            int r5 = r2 + 1
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F2(r10, r4, r5)
            r9 = r9 ^ r4
            int[] r4 = r7._Km
            int r5 = r2 + 2
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F3(r9, r4, r5)
            r8 = r8 ^ r4
            int[] r4 = r7._Km
            int r2 = r2 + r3
            r3 = r4[r2]
            int[] r4 = r7._Kr
            r2 = r4[r2]
            int r2 = r7.F1(r8, r3, r2)
            r11 = r11 ^ r2
            int r1 = r1 + 1
            goto L2
        L44:
            r1 = 12
            if (r2 >= r1) goto L87
            int r1 = r2 * 4
            int[] r4 = r7._Km
            int r5 = r1 + 3
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F1(r8, r4, r5)
            r11 = r11 ^ r4
            int[] r4 = r7._Km
            int r5 = r1 + 2
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F3(r9, r4, r5)
            r8 = r8 ^ r4
            int[] r4 = r7._Km
            int r5 = r1 + 1
            r4 = r4[r5]
            int[] r6 = r7._Kr
            r5 = r6[r5]
            int r4 = r7.F2(r10, r4, r5)
            r9 = r9 ^ r4
            int[] r4 = r7._Km
            r4 = r4[r1]
            int[] r5 = r7._Kr
            r1 = r5[r1]
            int r1 = r7.F1(r11, r4, r1)
            r10 = r10 ^ r1
            int r2 = r2 + 1
            goto L44
        L87:
            r12[r0] = r8
            r8 = 1
            r12[r8] = r9
            r8 = 2
            r12[r8] = r10
            r12[r3] = r11
            return
    }

    @Override
    protected int decryptBlock(byte[] r8, int r9, byte[] r10, int r11) {
            r7 = this;
            r0 = 4
            int[] r0 = new int[r0]
            int r2 = r7.BytesTo32bits(r8, r9)
            int r1 = r9 + 4
            int r3 = r7.BytesTo32bits(r8, r1)
            int r1 = r9 + 8
            int r4 = r7.BytesTo32bits(r8, r1)
            int r9 = r9 + 12
            int r5 = r7.BytesTo32bits(r8, r9)
            r1 = r7
            r6 = r0
            r1.CAST_Decipher(r2, r3, r4, r5, r6)
            r8 = 0
            r8 = r0[r8]
            r7.Bits32ToBytes(r8, r10, r11)
            r8 = 1
            r8 = r0[r8]
            int r9 = r11 + 4
            r7.Bits32ToBytes(r8, r10, r9)
            r8 = 2
            r8 = r0[r8]
            int r9 = r11 + 8
            r7.Bits32ToBytes(r8, r10, r9)
            r8 = 3
            r8 = r0[r8]
            int r11 = r11 + 12
            r7.Bits32ToBytes(r8, r10, r11)
            r8 = 16
            return r8
    }

    @Override
    protected int encryptBlock(byte[] r8, int r9, byte[] r10, int r11) {
            r7 = this;
            r0 = 4
            int[] r0 = new int[r0]
            int r2 = r7.BytesTo32bits(r8, r9)
            int r1 = r9 + 4
            int r3 = r7.BytesTo32bits(r8, r1)
            int r1 = r9 + 8
            int r4 = r7.BytesTo32bits(r8, r1)
            int r9 = r9 + 12
            int r5 = r7.BytesTo32bits(r8, r9)
            r1 = r7
            r6 = r0
            r1.CAST_Encipher(r2, r3, r4, r5, r6)
            r8 = 0
            r8 = r0[r8]
            r7.Bits32ToBytes(r8, r10, r11)
            r8 = 1
            r8 = r0[r8]
            int r9 = r11 + 4
            r7.Bits32ToBytes(r8, r10, r9)
            r8 = 2
            r8 = r0[r8]
            int r9 = r11 + 8
            r7.Bits32ToBytes(r8, r10, r9)
            r8 = 3
            r8 = r0[r8]
            int r11 = r11 + 12
            r7.Bits32ToBytes(r8, r10, r11)
            r8 = 16
            return r8
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "CAST6"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }

    @Override
    protected void setKey(byte[] r17) {
            r16 = this;
            r0 = r16
            r1 = r17
            r2 = 0
            r3 = 1518500249(0x5a827999, float:1.8362723E16)
            r4 = 19
            r5 = 0
        Lb:
            r6 = 24
            r7 = 8
            if (r5 >= r6) goto L2d
            r6 = 0
        L12:
            if (r6 >= r7) goto L2a
            int[] r8 = r0._Tm
            int r9 = r5 * 8
            int r9 = r9 + r6
            r8[r9] = r3
            r8 = 1859775393(0x6ed9eba1, float:3.3721552E28)
            int r3 = r3 + r8
            int[] r8 = r0._Tr
            r8[r9] = r4
            int r4 = r4 + 17
            r4 = r4 & 31
            int r6 = r6 + 1
            goto L12
        L2a:
            int r5 = r5 + 1
            goto Lb
        L2d:
            r3 = 64
            byte[] r3 = new byte[r3]
            int r4 = r1.length
            java.lang.System.arraycopy(r1, r2, r3, r2, r4)
            r1 = 0
        L36:
            if (r1 >= r7) goto L45
            int[] r4 = r0._workingKey
            int r5 = r1 * 4
            int r5 = r0.BytesTo32bits(r3, r5)
            r4[r1] = r5
            int r1 = r1 + 1
            goto L36
        L45:
            r1 = 0
        L46:
            r3 = 12
            if (r1 >= r3) goto L202
            int r3 = r1 * 2
            int r4 = r3 * 8
            int[] r5 = r0._workingKey
            r6 = 6
            r8 = r5[r6]
            r9 = 7
            r10 = r5[r9]
            int[] r11 = r0._Tm
            r11 = r11[r4]
            int[] r12 = r0._Tr
            r12 = r12[r4]
            int r10 = r0.F1(r10, r11, r12)
            r8 = r8 ^ r10
            r5[r6] = r8
            int[] r5 = r0._workingKey
            r8 = 5
            r10 = r5[r8]
            r11 = r5[r6]
            int[] r12 = r0._Tm
            int r13 = r4 + 1
            r12 = r12[r13]
            int[] r14 = r0._Tr
            r13 = r14[r13]
            int r11 = r0.F2(r11, r12, r13)
            r10 = r10 ^ r11
            r5[r8] = r10
            int[] r5 = r0._workingKey
            r10 = 4
            r11 = r5[r10]
            r12 = r5[r8]
            int[] r13 = r0._Tm
            int r14 = r4 + 2
            r13 = r13[r14]
            int[] r15 = r0._Tr
            r14 = r15[r14]
            int r12 = r0.F3(r12, r13, r14)
            r11 = r11 ^ r12
            r5[r10] = r11
            int[] r5 = r0._workingKey
            r11 = 3
            r12 = r5[r11]
            r13 = r5[r10]
            int[] r14 = r0._Tm
            int r15 = r4 + 3
            r14 = r14[r15]
            int[] r10 = r0._Tr
            r10 = r10[r15]
            int r10 = r0.F1(r13, r14, r10)
            r10 = r10 ^ r12
            r5[r11] = r10
            int[] r5 = r0._workingKey
            r10 = 2
            r12 = r5[r10]
            r13 = r5[r11]
            int[] r14 = r0._Tm
            int r15 = r4 + 4
            r14 = r14[r15]
            int[] r11 = r0._Tr
            r11 = r11[r15]
            int r11 = r0.F2(r13, r14, r11)
            r11 = r11 ^ r12
            r5[r10] = r11
            int[] r5 = r0._workingKey
            r11 = 1
            r12 = r5[r11]
            r13 = r5[r10]
            int[] r14 = r0._Tm
            int r15 = r4 + 5
            r14 = r14[r15]
            int[] r10 = r0._Tr
            r10 = r10[r15]
            int r10 = r0.F3(r13, r14, r10)
            r10 = r10 ^ r12
            r5[r11] = r10
            int[] r5 = r0._workingKey
            r10 = r5[r2]
            r12 = r5[r11]
            int[] r13 = r0._Tm
            int r14 = r4 + 6
            r13 = r13[r14]
            int[] r15 = r0._Tr
            r14 = r15[r14]
            int r12 = r0.F1(r12, r13, r14)
            r10 = r10 ^ r12
            r5[r2] = r10
            int[] r5 = r0._workingKey
            r10 = r5[r9]
            r12 = r5[r2]
            int[] r13 = r0._Tm
            int r4 = r4 + r9
            r13 = r13[r4]
            int[] r14 = r0._Tr
            r4 = r14[r4]
            int r4 = r0.F2(r12, r13, r4)
            r4 = r4 ^ r10
            r5[r9] = r4
            int r3 = r3 + r11
            int r3 = r3 * 8
            int[] r4 = r0._workingKey
            r5 = r4[r6]
            r10 = r4[r9]
            int[] r12 = r0._Tm
            r12 = r12[r3]
            int[] r13 = r0._Tr
            r13 = r13[r3]
            int r10 = r0.F1(r10, r12, r13)
            r5 = r5 ^ r10
            r4[r6] = r5
            int[] r4 = r0._workingKey
            r5 = r4[r8]
            r10 = r4[r6]
            int[] r12 = r0._Tm
            int r13 = r3 + 1
            r12 = r12[r13]
            int[] r14 = r0._Tr
            r13 = r14[r13]
            int r10 = r0.F2(r10, r12, r13)
            r5 = r5 ^ r10
            r4[r8] = r5
            int[] r4 = r0._workingKey
            r5 = 4
            r10 = r4[r5]
            r12 = r4[r8]
            int[] r13 = r0._Tm
            int r14 = r3 + 2
            r13 = r13[r14]
            int[] r15 = r0._Tr
            r14 = r15[r14]
            int r12 = r0.F3(r12, r13, r14)
            r10 = r10 ^ r12
            r4[r5] = r10
            int[] r4 = r0._workingKey
            r10 = 3
            r12 = r4[r10]
            r13 = r4[r5]
            int[] r5 = r0._Tm
            int r14 = r3 + 3
            r5 = r5[r14]
            int[] r15 = r0._Tr
            r14 = r15[r14]
            int r5 = r0.F1(r13, r5, r14)
            r5 = r5 ^ r12
            r4[r10] = r5
            int[] r4 = r0._workingKey
            r5 = 2
            r12 = r4[r5]
            r13 = r4[r10]
            int[] r10 = r0._Tm
            int r14 = r3 + 4
            r10 = r10[r14]
            int[] r15 = r0._Tr
            r14 = r15[r14]
            int r10 = r0.F2(r13, r10, r14)
            r10 = r10 ^ r12
            r4[r5] = r10
            int[] r4 = r0._workingKey
            r10 = r4[r11]
            r12 = r4[r5]
            int[] r5 = r0._Tm
            int r13 = r3 + 5
            r5 = r5[r13]
            int[] r14 = r0._Tr
            r13 = r14[r13]
            int r5 = r0.F3(r12, r5, r13)
            r5 = r5 ^ r10
            r4[r11] = r5
            int[] r4 = r0._workingKey
            r5 = r4[r2]
            r10 = r4[r11]
            int[] r12 = r0._Tm
            int r13 = r3 + 6
            r12 = r12[r13]
            int[] r14 = r0._Tr
            r13 = r14[r13]
            int r10 = r0.F1(r10, r12, r13)
            r5 = r5 ^ r10
            r4[r2] = r5
            int[] r4 = r0._workingKey
            r5 = r4[r9]
            r10 = r4[r2]
            int[] r12 = r0._Tm
            int r3 = r3 + r9
            r12 = r12[r3]
            int[] r13 = r0._Tr
            r3 = r13[r3]
            int r3 = r0.F2(r10, r12, r3)
            r3 = r3 ^ r5
            r4[r9] = r3
            int[] r3 = r0._Kr
            int r4 = r1 * 4
            int[] r5 = r0._workingKey
            r10 = r5[r2]
            r10 = r10 & 31
            r3[r4] = r10
            int r10 = r4 + 1
            r12 = 2
            r12 = r5[r12]
            r12 = r12 & 31
            r3[r10] = r12
            int r12 = r4 + 2
            r13 = 4
            r13 = r5[r13]
            r13 = r13 & 31
            r3[r12] = r13
            int r13 = r4 + 3
            r6 = r5[r6]
            r6 = r6 & 31
            r3[r13] = r6
            int[] r3 = r0._Km
            r6 = r5[r9]
            r3[r4] = r6
            r4 = r5[r8]
            r3[r10] = r4
            r4 = 3
            r4 = r5[r4]
            r3[r12] = r4
            r4 = r5[r11]
            r3[r13] = r4
            int r1 = r1 + 1
            goto L46
        L202:
            return
    }
}
