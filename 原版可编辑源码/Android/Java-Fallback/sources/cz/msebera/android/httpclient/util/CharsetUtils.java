package cz.msebera.android.httpclient.util;

public class CharsetUtils {
    public CharsetUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.nio.charset.Charset get(java.lang.String r1) throws java.io.UnsupportedEncodingException {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)     // Catch: java.nio.charset.UnsupportedCharsetException -> L9
            return r1
        L9:
            java.io.UnsupportedEncodingException r0 = new java.io.UnsupportedEncodingException
            r0.<init>(r1)
            throw r0
    }

    public static java.nio.charset.Charset lookup(java.lang.String r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)     // Catch: java.nio.charset.UnsupportedCharsetException -> L9
            return r1
        L9:
            return r0
    }
}
