package cz.msebera.android.httpclient.util;

public final class EncodingUtils {
    private EncodingUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] getAsciiBytes(java.lang.String r1) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            byte[] r1 = r1.getBytes(r0)
            return r1
    }

    public static java.lang.String getAsciiString(byte[] r2) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            int r0 = r2.length
            r1 = 0
            java.lang.String r2 = getAsciiString(r2, r1, r0)
            return r2
    }

    public static java.lang.String getAsciiString(byte[] r2, int r3, int r4) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static byte[] getBytes(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "Charset"
            cz.msebera.android.httpclient.util.Args.notEmpty(r2, r0)
            byte[] r1 = r1.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> Lf
            return r1
        Lf:
            byte[] r1 = r1.getBytes()
            return r1
    }

    public static java.lang.String getString(byte[] r1, int r2, int r3, java.lang.String r4) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "Charset"
            cz.msebera.android.httpclient.util.Args.notEmpty(r4, r0)
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L10
            r0.<init>(r1, r2, r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r0
        L10:
            java.lang.String r4 = new java.lang.String
            r4.<init>(r1, r2, r3)
            return r4
    }

    public static java.lang.String getString(byte[] r2, java.lang.String r3) {
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            int r0 = r2.length
            r1 = 0
            java.lang.String r2 = getString(r2, r1, r0, r3)
            return r2
    }
}
