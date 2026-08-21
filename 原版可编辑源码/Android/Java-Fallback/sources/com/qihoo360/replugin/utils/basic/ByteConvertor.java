package com.qihoo360.replugin.utils.basic;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ByteConvertor {
    private static final java.lang.String HEX = "0123456789ABCDEF";

    public ByteConvertor() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void appendHex(java.lang.StringBuilder r2, byte r3) {
            int r0 = r3 >> 4
            r0 = r0 & 15
            java.lang.String r1 = "0123456789ABCDEF"
            char r0 = r1.charAt(r0)
            r2.append(r0)
            r3 = r3 & 15
            char r3 = r1.charAt(r3)
            r2.append(r3)
            return
    }

    public static java.lang.String bytesToHexString(byte[] r6) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.lang.String r0 = "0123456789abcdef"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            int r2 = r6.length
            int r2 = r2 * 2
            r1.<init>(r2)
            int r2 = r6.length
            r3 = 0
        L10:
            if (r3 >= r2) goto L2b
            r4 = r6[r3]
            int r5 = r4 >> 4
            r5 = r5 & 15
            char r5 = r0.charAt(r5)
            r1.append(r5)
            r4 = r4 & 15
            char r4 = r0.charAt(r4)
            r1.append(r4)
            int r3 = r3 + 1
            goto L10
        L2b:
            java.lang.String r6 = r1.toString()
            return r6
    }

    public static int hexCharToInt(char r3) {
            r0 = 48
            if (r3 < r0) goto La
            r1 = 57
            if (r3 > r1) goto La
            int r3 = r3 - r0
            return r3
        La:
            r0 = 65
            if (r3 < r0) goto L16
            r1 = 70
            if (r3 > r1) goto L16
        L12:
            int r3 = r3 - r0
            int r3 = r3 + 10
            return r3
        L16:
            r0 = 97
            if (r3 < r0) goto L1f
            r1 = 102(0x66, float:1.43E-43)
            if (r3 > r1) goto L1f
            goto L12
        L1f:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid hex char '"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = "'"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static byte[] hexStringToBytes(java.lang.String r6) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            int r0 = r6.length()
            int r1 = r0 / 2
            byte[] r1 = new byte[r1]
            r2 = 0
        Ld:
            if (r2 >= r0) goto L2c
            int r3 = r2 / 2
            char r4 = r6.charAt(r2)
            int r4 = hexCharToInt(r4)
            int r4 = r4 << 4
            int r5 = r2 + 1
            char r5 = r6.charAt(r5)
            int r5 = hexCharToInt(r5)
            r4 = r4 | r5
            byte r4 = (byte) r4
            r1[r3] = r4
            int r2 = r2 + 2
            goto Ld
        L2c:
            return r1
    }

    public static byte[] subBytes(byte[] r3, int r4, int r5) {
            byte[] r0 = new byte[r5]
            r1 = 0
        L3:
            if (r1 >= r5) goto Le
            int r2 = r4 + r1
            r2 = r3[r2]
            r0[r1] = r2
            int r1 = r1 + 1
            goto L3
        Le:
            return r0
    }

    public static byte[] toBytes(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            r1 = r3 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            r1 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r3
            int r1 = r1 >> 8
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            r1 = 16711680(0xff0000, float:2.3418052E-38)
            r1 = r1 & r3
            int r1 = r1 >> 16
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3 = r3 & r1
            int r3 = r3 >> 24
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }

    public static byte[] toBytes(long r4) {
            r0 = 8
            byte[] r1 = new byte[r0]
            r2 = 255(0xff, double:1.26E-321)
            long r2 = r2 & r4
            int r2 = (int) r2
            byte r2 = (byte) r2
            r3 = 0
            r1[r3] = r2
            r2 = 65280(0xff00, double:3.22526E-319)
            long r2 = r2 & r4
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 1
            r1[r2] = r0
            r2 = 16711680(0xff0000, double:8.256667E-317)
            long r2 = r2 & r4
            r0 = 16
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 2
            r1[r2] = r0
            r2 = 4278190080(0xff000000, double:2.113706745E-314)
            long r2 = r2 & r4
            r0 = 24
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 3
            r1[r2] = r0
            r2 = 1095216660480(0xff00000000, double:5.41108926696E-312)
            long r2 = r2 & r4
            r0 = 32
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 4
            r1[r2] = r0
            r2 = 280375465082880(0xff0000000000, double:1.38523885234213E-309)
            long r2 = r2 & r4
            r0 = 40
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 5
            r1[r2] = r0
            r2 = 71776119061217280(0xff000000000000, double:7.06327445644526E-304)
            long r2 = r2 & r4
            r0 = 48
            long r2 = r2 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 6
            r1[r2] = r0
            r2 = -72057594037927936(0xff00000000000000, double:-5.486124068793689E303)
            long r4 = r4 & r2
            r0 = 56
            long r4 = r4 >> r0
            int r4 = (int) r4
            byte r4 = (byte) r4
            r5 = 7
            r1[r5] = r4
            return r1
    }

    public static java.lang.String toHex(byte[] r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r4.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r4.length
            r2 = 0
        Lf:
            if (r2 >= r1) goto L19
            r3 = r4[r2]
            appendHex(r0, r3)
            int r2 = r2 + 1
            goto Lf
        L19:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static int toInt(byte[] r3) {
            r0 = 3
            r0 = r3[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = 0
            r0 = r0 | r1
            int r0 = r0 << 8
            r2 = 2
            r2 = r3[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r0 = r0 | r2
            int r0 = r0 << 8
            r2 = 1
            r2 = r3[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r0 = r0 | r2
            int r0 = r0 << 8
            r3 = r3[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r3 | r0
            return r3
    }

    public static long toLong(byte[] r5) {
            r0 = 7
            r0 = r5[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            long r0 = (long) r0
            r2 = 0
            long r0 = r0 | r2
            r2 = 8
            long r0 = r0 << r2
            r3 = 6
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r3 = 5
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r3 = 4
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r3 = 3
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r3 = 2
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r3 = 1
            r3 = r5[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            long r0 = r0 | r3
            long r0 = r0 << r2
            r2 = 0
            r5 = r5[r2]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r2 = (long) r5
            long r0 = r0 | r2
            return r0
    }
}
