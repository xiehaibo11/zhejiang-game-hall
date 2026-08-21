package com.huawei.secure.android.common.encrypt.utils;

public final class HexUtil {
    private static final java.lang.String a = "";
    private static final java.lang.String b = "HexUtil";

    private HexUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String byteArray2HexStr(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "UTF-8"
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L14
            java.lang.String r1 = byteArray2HexStr(r3)     // Catch: java.io.UnsupportedEncodingException -> L14
            goto L2f
        L14:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "byte array 2 hex string exception : "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "HexUtil"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r3)
        L2f:
            return r1
    }

    public static java.lang.String byteArray2HexStr(byte[] r5) {
            if (r5 == 0) goto L2e
            int r0 = r5.length
            if (r0 != 0) goto L6
            goto L2e
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        Lc:
            int r2 = r5.length
            if (r1 >= r2) goto L29
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L23
            r3 = 48
            r0.append(r3)
        L23:
            r0.append(r2)
            int r1 = r1 + 1
            goto Lc
        L29:
            java.lang.String r5 = r0.toString()
            return r5
        L2e:
            java.lang.String r5 = ""
            return r5
    }

    public static byte[] hexStr2ByteArray(java.lang.String r12) {
            java.lang.String r0 = "0x"
            java.lang.String r1 = "UTF-8"
            boolean r2 = android.text.TextUtils.isEmpty(r12)
            r3 = 0
            if (r2 == 0) goto Le
            byte[] r12 = new byte[r3]
            return r12
        Le:
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r12 = r12.toUpperCase(r2)
            int r2 = r12.length()
            int r2 = r2 / 2
            byte[] r4 = new byte[r2]
            byte[] r12 = r12.getBytes(r1)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r5 = r3
        L21:
            if (r5 >= r2) goto L93
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r6.<init>()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r6.append(r0)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.String r7 = new java.lang.String     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r8 = 1
            byte[] r9 = new byte[r8]     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            int r10 = r5 * 2
            r11 = r12[r10]     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r9[r3] = r11     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r7.<init>(r9, r1)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r6.append(r7)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.String r6 = r6.toString()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.Byte r6 = java.lang.Byte.decode(r6)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            byte r6 = r6.byteValue()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            int r6 = r6 << 4
            byte r6 = (byte) r6     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r7.<init>()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r7.append(r0)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            byte[] r8 = new byte[r8]     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            int r10 = r10 + 1
            r10 = r12[r10]     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r8[r3] = r10     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r9.<init>(r8, r1)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r7.append(r9)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.String r7 = r7.toString()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            java.lang.Byte r7 = java.lang.Byte.decode(r7)     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            byte r7 = r7.byteValue()     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r6 = r6 ^ r7
            byte r6 = (byte) r6     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            r4[r5] = r6     // Catch: java.lang.NumberFormatException -> L76 java.io.UnsupportedEncodingException -> L78
            int r5 = r5 + 1
            goto L21
        L76:
            r12 = move-exception
            goto L79
        L78:
            r12 = move-exception
        L79:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hex string 2 byte array exception : "
            r0.append(r1)
            java.lang.String r12 = r12.getMessage()
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            java.lang.String r0 = "HexUtil"
            com.huawei.secure.android.common.encrypt.utils.b.b(r0, r12)
        L93:
            return r4
    }
}
