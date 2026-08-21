package org.bouncycastle.util;

public final class Strings {
    public Strings() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String fromUTF8ByteArray(byte[] r9) {
            r0 = 0
            r1 = 0
            r2 = 0
        L3:
            int r3 = r9.length
            r4 = 192(0xc0, float:2.69E-43)
            r5 = 224(0xe0, float:3.14E-43)
            r6 = 240(0xf0, float:3.36E-43)
            if (r1 >= r3) goto L2b
            int r2 = r2 + 1
            r3 = r9[r1]
            r3 = r3 & r6
            if (r3 != r6) goto L18
            int r2 = r2 + 1
            int r1 = r1 + 4
            goto L3
        L18:
            r3 = r9[r1]
            r3 = r3 & r5
            if (r3 != r5) goto L20
            int r1 = r1 + 3
            goto L3
        L20:
            r3 = r9[r1]
            r3 = r3 & r4
            if (r3 != r4) goto L28
            int r1 = r1 + 2
            goto L3
        L28:
            int r1 = r1 + 1
            goto L3
        L2b:
            char[] r1 = new char[r2]
            r2 = 0
        L2e:
            int r3 = r9.length
            if (r0 >= r3) goto Lc3
            r3 = r9[r0]
            r3 = r3 & r6
            if (r3 != r6) goto L6e
            r3 = r9[r0]
            r3 = r3 & 3
            int r3 = r3 << 18
            int r7 = r0 + 1
            r7 = r9[r7]
            r7 = r7 & 63
            int r7 = r7 << 12
            r3 = r3 | r7
            int r7 = r0 + 2
            r7 = r9[r7]
            r7 = r7 & 63
            int r7 = r7 << 6
            r3 = r3 | r7
            int r7 = r0 + 3
            r7 = r9[r7]
            r7 = r7 & 63
            r3 = r3 | r7
            r7 = 65536(0x10000, float:9.1835E-41)
            int r3 = r3 - r7
            r7 = 55296(0xd800, float:7.7486E-41)
            int r8 = r3 >> 10
            r7 = r7 | r8
            char r7 = (char) r7
            r8 = 56320(0xdc00, float:7.8921E-41)
            r3 = r3 & 1023(0x3ff, float:1.434E-42)
            r3 = r3 | r8
            char r3 = (char) r3
            int r8 = r2 + 1
            r1[r2] = r7
            int r0 = r0 + 4
            r2 = r8
            goto Lbc
        L6e:
            r3 = r9[r0]
            r3 = r3 & r5
            if (r3 != r5) goto L8d
            r3 = r9[r0]
            r3 = r3 & 15
            int r3 = r3 << 12
            int r7 = r0 + 1
            r7 = r9[r7]
            r7 = r7 & 63
            int r7 = r7 << 6
            r3 = r3 | r7
            int r7 = r0 + 2
            r7 = r9[r7]
            r7 = r7 & 63
            r3 = r3 | r7
            char r3 = (char) r3
            int r0 = r0 + 3
            goto Lbc
        L8d:
            r3 = r9[r0]
            r7 = 208(0xd0, float:2.91E-43)
            r3 = r3 & r7
            if (r3 != r7) goto La5
            r3 = r9[r0]
            r3 = r3 & 31
            int r3 = r3 << 6
            int r7 = r0 + 1
            r7 = r9[r7]
        L9e:
            r7 = r7 & 63
            r3 = r3 | r7
            char r3 = (char) r3
            int r0 = r0 + 2
            goto Lbc
        La5:
            r3 = r9[r0]
            r3 = r3 & r4
            if (r3 != r4) goto Lb5
            r3 = r9[r0]
            r3 = r3 & 31
            int r3 = r3 << 6
            int r7 = r0 + 1
            r7 = r9[r7]
            goto L9e
        Lb5:
            r3 = r9[r0]
            r3 = r3 & 255(0xff, float:3.57E-43)
            char r3 = (char) r3
            int r0 = r0 + 1
        Lbc:
            int r7 = r2 + 1
            r1[r2] = r3
            r2 = r7
            goto L2e
        Lc3:
            java.lang.String r9 = new java.lang.String
            r9.<init>(r1)
            return r9
    }

    public static java.lang.String[] split(java.lang.String r4, char r5) {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1 = 1
        L6:
            r2 = 0
            if (r1 == 0) goto L22
            int r3 = r4.indexOf(r5)
            if (r3 <= 0) goto L1d
            java.lang.String r2 = r4.substring(r2, r3)
            r0.addElement(r2)
            int r3 = r3 + 1
            java.lang.String r4 = r4.substring(r3)
            goto L6
        L1d:
            r0.addElement(r4)
            r1 = 0
            goto L6
        L22:
            int r4 = r0.size()
            java.lang.String[] r5 = new java.lang.String[r4]
        L28:
            if (r2 == r4) goto L35
            java.lang.Object r1 = r0.elementAt(r2)
            java.lang.String r1 = (java.lang.String) r1
            r5[r2] = r1
            int r2 = r2 + 1
            goto L28
        L35:
            return r5
    }

    public static byte[] toByteArray(java.lang.String r4) {
            int r0 = r4.length()
            byte[] r1 = new byte[r0]
            r2 = 0
        L7:
            if (r2 == r0) goto L13
            char r3 = r4.charAt(r2)
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L7
        L13:
            return r1
    }

    public static java.lang.String toLowerCase(java.lang.String r5) {
            char[] r0 = r5.toCharArray()
            r1 = 0
            r2 = 0
        L6:
            int r3 = r0.length
            if (r1 == r3) goto L1e
            char r3 = r0[r1]
            r4 = 65
            if (r4 > r3) goto L1b
            r4 = 90
            if (r4 < r3) goto L1b
            int r3 = r3 + (-65)
            int r3 = r3 + 97
            char r2 = (char) r3
            r0[r1] = r2
            r2 = 1
        L1b:
            int r1 = r1 + 1
            goto L6
        L1e:
            if (r2 == 0) goto L25
            java.lang.String r5 = new java.lang.String
            r5.<init>(r0)
        L25:
            return r5
    }

    public static byte[] toUTF8ByteArray(java.lang.String r7) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            char[] r7 = r7.toCharArray()
            r1 = 0
        La:
            int r2 = r7.length
            if (r1 >= r2) goto L7c
            char r2 = r7[r1]
            r3 = 128(0x80, float:1.8E-43)
            if (r2 >= r3) goto L14
            goto L5c
        L14:
            r4 = 2048(0x800, float:2.87E-42)
            if (r2 >= r4) goto L20
            int r4 = r2 >> 6
            r4 = r4 | 192(0xc0, float:2.69E-43)
        L1c:
            r0.write(r4)
            goto L59
        L20:
            r4 = 55296(0xd800, float:7.7486E-41)
            if (r2 < r4) goto L6c
            r4 = 57343(0xdfff, float:8.0355E-41)
            if (r2 > r4) goto L6c
            int r1 = r1 + 1
            int r4 = r7.length
            java.lang.String r5 = "invalid UTF-16 codepoint"
            if (r1 >= r4) goto L66
            char r4 = r7[r1]
            r6 = 56319(0xdbff, float:7.892E-41)
            if (r2 > r6) goto L60
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 << 10
            r4 = r4 & 1023(0x3ff, float:1.434E-42)
            r2 = r2 | r4
            r4 = 65536(0x10000, float:9.1835E-41)
            int r2 = r2 + r4
            int r4 = r2 >> 18
            r4 = r4 | 240(0xf0, float:3.36E-43)
            r0.write(r4)
            int r4 = r2 >> 12
            r4 = r4 & 63
            r4 = r4 | r3
            r0.write(r4)
            int r4 = r2 >> 6
            r4 = r4 & 63
            r4 = r4 | r3
            r0.write(r4)
        L59:
            r2 = r2 & 63
            r2 = r2 | r3
        L5c:
            r0.write(r2)
            goto L79
        L60:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>(r5)
            throw r7
        L66:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>(r5)
            throw r7
        L6c:
            int r4 = r2 >> 12
            r4 = r4 | 224(0xe0, float:3.14E-43)
            r0.write(r4)
            int r4 = r2 >> 6
            r4 = r4 & 63
            r4 = r4 | r3
            goto L1c
        L79:
            int r1 = r1 + 1
            goto La
        L7c:
            byte[] r7 = r0.toByteArray()
            return r7
    }

    public static java.lang.String toUpperCase(java.lang.String r5) {
            char[] r0 = r5.toCharArray()
            r1 = 0
            r2 = 0
        L6:
            int r3 = r0.length
            if (r1 == r3) goto L1e
            char r3 = r0[r1]
            r4 = 97
            if (r4 > r3) goto L1b
            r4 = 122(0x7a, float:1.71E-43)
            if (r4 < r3) goto L1b
            int r3 = r3 + (-97)
            int r3 = r3 + 65
            char r2 = (char) r3
            r0[r1] = r2
            r2 = 1
        L1b:
            int r1 = r1 + 1
            goto L6
        L1e:
            if (r2 == 0) goto L25
            java.lang.String r5 = new java.lang.String
            r5.<init>(r0)
        L25:
            return r5
    }
}
