package org.apache.commons.codec.binary;

public class StringUtils {
    public StringUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] getBytesIso8859_1(java.lang.String r1) {
            java.lang.String r0 = "ISO-8859-1"
            byte[] r1 = getBytesUnchecked(r1, r0)
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
            java.lang.String r0 = "US-ASCII"
            byte[] r1 = getBytesUnchecked(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16(java.lang.String r1) {
            java.lang.String r0 = "UTF-16"
            byte[] r1 = getBytesUnchecked(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16Be(java.lang.String r1) {
            java.lang.String r0 = "UTF-16BE"
            byte[] r1 = getBytesUnchecked(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf16Le(java.lang.String r1) {
            java.lang.String r0 = "UTF-16LE"
            byte[] r1 = getBytesUnchecked(r1, r0)
            return r1
    }

    public static byte[] getBytesUtf8(java.lang.String r1) {
            java.lang.String r0 = "UTF-8"
            byte[] r1 = getBytesUnchecked(r1, r0)
            return r1
    }

    private static java.lang.IllegalStateException newIllegalStateException(java.lang.String r2, java.io.UnsupportedEncodingException r3) {
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
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

    public static java.lang.String newStringIso8859_1(byte[] r1) {
            java.lang.String r0 = "ISO-8859-1"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }

    public static java.lang.String newStringUsAscii(byte[] r1) {
            java.lang.String r0 = "US-ASCII"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }

    public static java.lang.String newStringUtf16(byte[] r1) {
            java.lang.String r0 = "UTF-16"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }

    public static java.lang.String newStringUtf16Be(byte[] r1) {
            java.lang.String r0 = "UTF-16BE"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }

    public static java.lang.String newStringUtf16Le(byte[] r1) {
            java.lang.String r0 = "UTF-16LE"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }

    public static java.lang.String newStringUtf8(byte[] r1) {
            java.lang.String r0 = "UTF-8"
            java.lang.String r1 = newString(r1, r0)
            return r1
    }
}
