package org.bouncycastle.util.encoders;

public class HexEncoder implements org.bouncycastle.util.encoders.Encoder {
    protected final byte[] decodingTable;
    protected final byte[] encodingTable;

    public HexEncoder() {
            r1 = this;
            r1.<init>()
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x0016: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            r1.encodingTable = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r1.decodingTable = r0
            r1.initialiseDecodingTable()
            return
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

    @Override
    public int decode(java.lang.String r7, java.io.OutputStream r8) throws java.io.IOException {
            r6 = this;
            int r0 = r7.length()
        L4:
            if (r0 <= 0) goto L16
            int r1 = r0 + (-1)
            char r1 = r7.charAt(r1)
            boolean r1 = r6.ignore(r1)
            if (r1 != 0) goto L13
            goto L16
        L13:
            int r0 = r0 + (-1)
            goto L4
        L16:
            r1 = 0
            r2 = 0
        L18:
            if (r1 >= r0) goto L56
        L1a:
            if (r1 >= r0) goto L29
            char r3 = r7.charAt(r1)
            boolean r3 = r6.ignore(r3)
            if (r3 == 0) goto L29
            int r1 = r1 + 1
            goto L1a
        L29:
            byte[] r3 = r6.decodingTable
            int r4 = r1 + 1
            char r1 = r7.charAt(r1)
            r1 = r3[r1]
        L33:
            if (r4 >= r0) goto L42
            char r3 = r7.charAt(r4)
            boolean r3 = r6.ignore(r3)
            if (r3 == 0) goto L42
            int r4 = r4 + 1
            goto L33
        L42:
            byte[] r3 = r6.decodingTable
            int r5 = r4 + 1
            char r4 = r7.charAt(r4)
            r3 = r3[r4]
            int r1 = r1 << 4
            r1 = r1 | r3
            r8.write(r1)
            int r2 = r2 + 1
            r1 = r5
            goto L18
        L56:
            return r2
    }

    @Override
    public int decode(byte[] r5, int r6, int r7, java.io.OutputStream r8) throws java.io.IOException {
            r4 = this;
            int r7 = r7 + r6
        L1:
            if (r7 <= r6) goto L12
            int r0 = r7 + (-1)
            r0 = r5[r0]
            char r0 = (char) r0
            boolean r0 = r4.ignore(r0)
            if (r0 != 0) goto Lf
            goto L12
        Lf:
            int r7 = r7 + (-1)
            goto L1
        L12:
            r0 = 0
        L13:
            if (r6 >= r7) goto L4b
        L15:
            if (r6 >= r7) goto L23
            r1 = r5[r6]
            char r1 = (char) r1
            boolean r1 = r4.ignore(r1)
            if (r1 == 0) goto L23
            int r6 = r6 + 1
            goto L15
        L23:
            byte[] r1 = r4.decodingTable
            int r2 = r6 + 1
            r6 = r5[r6]
            r6 = r1[r6]
        L2b:
            if (r2 >= r7) goto L39
            r1 = r5[r2]
            char r1 = (char) r1
            boolean r1 = r4.ignore(r1)
            if (r1 == 0) goto L39
            int r2 = r2 + 1
            goto L2b
        L39:
            byte[] r1 = r4.decodingTable
            int r3 = r2 + 1
            r2 = r5[r2]
            r1 = r1[r2]
            int r6 = r6 << 4
            r6 = r6 | r1
            r8.write(r6)
            int r0 = r0 + 1
            r6 = r3
            goto L13
        L4b:
            return r0
    }

    @Override
    public int encode(byte[] r5, int r6, int r7, java.io.OutputStream r8) throws java.io.IOException {
            r4 = this;
            r0 = r6
        L1:
            int r1 = r6 + r7
            if (r0 >= r1) goto L1e
            r1 = r5[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r2 = r4.encodingTable
            int r3 = r1 >>> 4
            r2 = r2[r3]
            r8.write(r2)
            byte[] r2 = r4.encodingTable
            r1 = r1 & 15
            r1 = r2[r1]
            r8.write(r1)
            int r0 = r0 + 1
            goto L1
        L1e:
            int r7 = r7 * 2
            return r7
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
            byte[] r0 = r4.decodingTable
            r1 = 65
            r2 = 97
            r2 = r0[r2]
            r0[r1] = r2
            r1 = 66
            r2 = 98
            r2 = r0[r2]
            r0[r1] = r2
            r1 = 67
            r2 = 99
            r2 = r0[r2]
            r0[r1] = r2
            r1 = 68
            r2 = 100
            r2 = r0[r2]
            r0[r1] = r2
            r1 = 69
            r2 = 101(0x65, float:1.42E-43)
            r2 = r0[r2]
            r0[r1] = r2
            r1 = 70
            r2 = 102(0x66, float:1.43E-43)
            r2 = r0[r2]
            r0[r1] = r2
            return
    }
}
