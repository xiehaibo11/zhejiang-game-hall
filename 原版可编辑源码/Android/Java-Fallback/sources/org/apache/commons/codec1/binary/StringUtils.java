package org.apache.commons.codec1.binary;

public class StringUtils {
    public StringUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean equals(java.lang.CharSequence r6, java.lang.CharSequence r7) {
            if (r6 != r7) goto L4
            r6 = 1
            return r6
        L4:
            if (r6 == 0) goto L2c
            if (r7 != 0) goto L9
            goto L2c
        L9:
            boolean r0 = r6 instanceof java.lang.String
            if (r0 == 0) goto L16
            boolean r0 = r7 instanceof java.lang.String
            if (r0 == 0) goto L16
            boolean r6 = r6.equals(r7)
            return r6
        L16:
            r1 = 0
            r2 = 0
            r4 = 0
            int r0 = r6.length()
            int r3 = r7.length()
            int r5 = java.lang.Math.max(r0, r3)
            r0 = r6
            r3 = r7
            boolean r6 = org.apache.commons.codec1.binary.CharSequenceUtils.regionMatches(r0, r1, r2, r3, r4, r5)
            return r6
        L2c:
            r6 = 0
            return r6
    }

    private static byte[] getBytes(java.lang.String r0, java.nio.charset.Charset r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            byte[] r0 = r0.getBytes(r1)
            return r0
    }

    public static byte[] getBytesIso8859_1(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.ISO_8859_1
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    public static byte[] getBytesUnchecked(java.lang.String r0, java.lang.String r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            byte[] r0 = r0.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalStateException r0 = newIllegalStateException(r1, r0)
            throw r0
    }

    public static byte[] getBytesUsAscii(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.US_ASCII
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_16
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16Be(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_16BE
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16Le(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_16LE
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf8(java.lang.String r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            byte[] r1 = getBytes(r1, r0)
            return r1
    }

    private static java.lang.IllegalStateException newIllegalStateException(java.lang.String r2, java.io.UnsupportedEncodingException r3) {
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            java.lang.String r2 = ": "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            return r0
    }

    public static java.lang.String newString(byte[] r1, java.lang.String r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> La
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> La
            return r0
        La:
            r1 = move-exception
            java.lang.IllegalStateException r1 = newIllegalStateException(r2, r1)
            throw r1
    }

    private static java.lang.String newString(byte[] r1, java.nio.charset.Charset r2) {
            if (r1 != 0) goto L4
            r1 = 0
            goto La
        L4:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2)
            r1 = r0
        La:
            return r1
    }

    public static java.lang.String newStringIso8859_1(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.ISO_8859_1
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String newStringUsAscii(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.US_ASCII
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String newStringUtf16(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.UTF_16
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String newStringUtf16Be(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.UTF_16BE
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String newStringUtf16Le(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = org.apache.commons.codec1.Charsets.UTF_16LE
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String newStringUtf8(byte[] r1) {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            java.lang.String r1 = newString(r1, r0)
            return r1
    }
}
