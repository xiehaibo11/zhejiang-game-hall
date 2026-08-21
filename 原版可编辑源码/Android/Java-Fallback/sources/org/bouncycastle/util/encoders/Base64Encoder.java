package org.bouncycastle.util.encoders;

public class Base64Encoder implements org.bouncycastle.util.encoders.Encoder {
    protected final byte[] decodingTable;
    protected final byte[] encodingTable;
    protected byte padding;

    public Base64Encoder() {
            r1 = this;
            r1.<init>()
            r0 = 64
            byte[] r0 = new byte[r0]
            r0 = {x001a: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            r1.encodingTable = r0
            r0 = 61
            r1.padding = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r1.decodingTable = r0
            r1.initialiseDecodingTable()
            return
    }

    private int decodeLastBlock(java.io.OutputStream r3, char r4, char r5, char r6, char r7) throws java.io.IOException {
            r2 = this;
            byte r0 = r2.padding
            r1 = 2
            if (r6 != r0) goto L14
            byte[] r6 = r2.decodingTable
            r4 = r6[r4]
            r5 = r6[r5]
            int r4 = r4 << r1
            int r5 = r5 >> 4
            r4 = r4 | r5
            r3.write(r4)
            r3 = 1
            return r3
        L14:
            if (r7 != r0) goto L2e
            byte[] r7 = r2.decodingTable
            r4 = r7[r4]
            r5 = r7[r5]
            r6 = r7[r6]
            int r4 = r4 << r1
            int r7 = r5 >> 4
            r4 = r4 | r7
            r3.write(r4)
            int r4 = r5 << 4
            int r5 = r6 >> 2
            r4 = r4 | r5
            r3.write(r4)
            return r1
        L2e:
            byte[] r0 = r2.decodingTable
            r4 = r0[r4]
            r5 = r0[r5]
            r6 = r0[r6]
            r7 = r0[r7]
            int r4 = r4 << r1
            int r0 = r5 >> 4
            r4 = r4 | r0
            r3.write(r4)
            int r4 = r5 << 4
            int r5 = r6 >> 2
            r4 = r4 | r5
            r3.write(r4)
            int r4 = r6 << 6
            r4 = r4 | r7
            r3.write(r4)
            r3 = 3
            return r3
    }

    private boolean ignore(char r2) {
            r1 = this;
            r0 = 10
            if (r2 == r0) goto L13
            r0 = 13
            if (r2 == r0) goto L13
            r0 = 9
            if (r2 == r0) goto L13
            r0 = 32
            if (r2 != r0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    private int nextI(java.lang.String r2, int r3, int r4) {
            r1 = this;
        L0:
            if (r3 >= r4) goto Lf
            char r0 = r2.charAt(r3)
            boolean r0 = r1.ignore(r0)
            if (r0 == 0) goto Lf
            int r3 = r3 + 1
            goto L0
        Lf:
            return r3
    }

    private int nextI(byte[] r2, int r3, int r4) {
            r1 = this;
        L0:
            if (r3 >= r4) goto Le
            r0 = r2[r3]
            char r0 = (char) r0
            boolean r0 = r1.ignore(r0)
            if (r0 == 0) goto Le
            int r3 = r3 + 1
            goto L0
        Le:
            return r3
    }

    @Override
    public int decode(java.lang.String r11, java.io.OutputStream r12) throws java.io.IOException {
            r10 = this;
            int r0 = r11.length()
        L4:
            if (r0 <= 0) goto L16
            int r1 = r0 + (-1)
            char r1 = r11.charAt(r1)
            boolean r1 = r10.ignore(r1)
            if (r1 != 0) goto L13
            goto L16
        L13:
            int r0 = r0 + (-1)
            goto L4
        L16:
            int r1 = r0 + (-4)
            r2 = 0
            int r3 = r10.nextI(r11, r2, r1)
        L1d:
            if (r3 >= r1) goto L70
            byte[] r4 = r10.decodingTable
            int r5 = r3 + 1
            char r3 = r11.charAt(r3)
            r3 = r4[r3]
            int r4 = r10.nextI(r11, r5, r1)
            byte[] r5 = r10.decodingTable
            int r6 = r4 + 1
            char r4 = r11.charAt(r4)
            r4 = r5[r4]
            int r5 = r10.nextI(r11, r6, r1)
            byte[] r6 = r10.decodingTable
            int r7 = r5 + 1
            char r5 = r11.charAt(r5)
            r5 = r6[r5]
            int r6 = r10.nextI(r11, r7, r1)
            byte[] r7 = r10.decodingTable
            int r8 = r6 + 1
            char r6 = r11.charAt(r6)
            r6 = r7[r6]
            int r3 = r3 << 2
            int r7 = r4 >> 4
            r3 = r3 | r7
            r12.write(r3)
            int r3 = r4 << 4
            int r4 = r5 >> 2
            r3 = r3 | r4
            r12.write(r3)
            int r3 = r5 << 6
            r3 = r3 | r6
            r12.write(r3)
            int r2 = r2 + 3
            int r3 = r10.nextI(r11, r8, r1)
            goto L1d
        L70:
            char r6 = r11.charAt(r1)
            int r1 = r0 + (-3)
            char r7 = r11.charAt(r1)
            int r1 = r0 + (-2)
            char r8 = r11.charAt(r1)
            int r0 = r0 + (-1)
            char r9 = r11.charAt(r0)
            r4 = r10
            r5 = r12
            int r11 = r4.decodeLastBlock(r5, r6, r7, r8, r9)
            int r2 = r2 + r11
            return r2
    }

    @Override
    public int decode(byte[] r9, int r10, int r11, java.io.OutputStream r12) throws java.io.IOException {
            r8 = this;
            int r11 = r11 + r10
        L1:
            if (r11 <= r10) goto L12
            int r0 = r11 + (-1)
            r0 = r9[r0]
            char r0 = (char) r0
            boolean r0 = r8.ignore(r0)
            if (r0 != 0) goto Lf
            goto L12
        Lf:
            int r11 = r11 + (-1)
            goto L1
        L12:
            int r0 = r11 + (-4)
            int r10 = r8.nextI(r9, r10, r0)
            r1 = 0
        L19:
            if (r10 >= r0) goto L64
            byte[] r2 = r8.decodingTable
            int r3 = r10 + 1
            r10 = r9[r10]
            r10 = r2[r10]
            int r2 = r8.nextI(r9, r3, r0)
            byte[] r3 = r8.decodingTable
            int r4 = r2 + 1
            r2 = r9[r2]
            r2 = r3[r2]
            int r3 = r8.nextI(r9, r4, r0)
            byte[] r4 = r8.decodingTable
            int r5 = r3 + 1
            r3 = r9[r3]
            r3 = r4[r3]
            int r4 = r8.nextI(r9, r5, r0)
            byte[] r5 = r8.decodingTable
            int r6 = r4 + 1
            r4 = r9[r4]
            r4 = r5[r4]
            int r10 = r10 << 2
            int r5 = r2 >> 4
            r10 = r10 | r5
            r12.write(r10)
            int r10 = r2 << 4
            int r2 = r3 >> 2
            r10 = r10 | r2
            r12.write(r10)
            int r10 = r3 << 6
            r10 = r10 | r4
            r12.write(r10)
            int r1 = r1 + 3
            int r10 = r8.nextI(r9, r6, r0)
            goto L19
        L64:
            r10 = r9[r0]
            char r4 = (char) r10
            int r10 = r11 + (-3)
            r10 = r9[r10]
            char r5 = (char) r10
            int r10 = r11 + (-2)
            r10 = r9[r10]
            char r6 = (char) r10
            int r11 = r11 + (-1)
            r9 = r9[r11]
            char r7 = (char) r9
            r2 = r8
            r3 = r12
            int r9 = r2.decodeLastBlock(r3, r4, r5, r6, r7)
            int r1 = r1 + r9
            return r1
    }

    @Override
    public int encode(byte[] r10, int r11, int r12, java.io.OutputStream r13) throws java.io.IOException {
            r9 = this;
            int r0 = r12 % 3
            int r12 = r12 - r0
            r1 = r11
        L4:
            int r2 = r11 + r12
            r3 = 4
            r4 = 2
            if (r1 >= r2) goto L4c
            r2 = r10[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r5 = r1 + 1
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r6 = r1 + 2
            r6 = r10[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte[] r7 = r9.encodingTable
            int r8 = r2 >>> 2
            r8 = r8 & 63
            r7 = r7[r8]
            r13.write(r7)
            byte[] r7 = r9.encodingTable
            int r2 = r2 << r3
            int r3 = r5 >>> 4
            r2 = r2 | r3
            r2 = r2 & 63
            r2 = r7[r2]
            r13.write(r2)
            byte[] r2 = r9.encodingTable
            int r3 = r5 << 2
            int r4 = r6 >>> 6
            r3 = r3 | r4
            r3 = r3 & 63
            r2 = r2[r3]
            r13.write(r2)
            byte[] r2 = r9.encodingTable
            r3 = r6 & 63
            r2 = r2[r3]
            r13.write(r2)
            int r1 = r1 + 3
            goto L4
        L4c:
            r11 = 1
            if (r0 == r11) goto L7b
            if (r0 == r4) goto L52
            goto L9e
        L52:
            r1 = r10[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r11
            r10 = r10[r2]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r11 = r1 >>> 2
            r11 = r11 & 63
            int r1 = r1 << r3
            int r2 = r10 >>> 4
            r1 = r1 | r2
            r1 = r1 & 63
            int r10 = r10 << r4
            r10 = r10 & 63
            byte[] r2 = r9.encodingTable
            r11 = r2[r11]
            r13.write(r11)
            byte[] r11 = r9.encodingTable
            r11 = r11[r1]
            r13.write(r11)
            byte[] r11 = r9.encodingTable
            r10 = r11[r10]
            goto L96
        L7b:
            r10 = r10[r2]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r11 = r10 >>> 2
            r11 = r11 & 63
            int r10 = r10 << r3
            r10 = r10 & 63
            byte[] r1 = r9.encodingTable
            r11 = r1[r11]
            r13.write(r11)
            byte[] r11 = r9.encodingTable
            r10 = r11[r10]
            r13.write(r10)
            byte r10 = r9.padding
        L96:
            r13.write(r10)
            byte r10 = r9.padding
            r13.write(r10)
        L9e:
            int r12 = r12 / 3
            int r12 = r12 * 4
            if (r0 != 0) goto La5
            r3 = 0
        La5:
            int r12 = r12 + r3
            return r12
    }

    protected void initialiseDecodingTable() {
            r4 = this;
            r0 = 0
        L1:
            byte[] r1 = r4.encodingTable
            int r2 = r1.length
            if (r0 >= r2) goto L10
            byte[] r2 = r4.decodingTable
            r1 = r1[r0]
            byte r3 = (byte) r0
            r2[r1] = r3
            int r0 = r0 + 1
            goto L1
        L10:
            return
    }
}
