package cz.msebera.android.httpclient.util;

public final class EntityUtils {
    private EntityUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void consume(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = r1.isStreaming()
            if (r0 == 0) goto L12
            java.io.InputStream r1 = r1.getContent()
            if (r1 == 0) goto L12
            r1.close()
        L12:
            return
    }

    public static void consumeQuietly(cz.msebera.android.httpclient.HttpEntity r0) {
            consume(r0)     // Catch: java.io.IOException -> L3
        L3:
            return
    }

    @java.lang.Deprecated
    public static java.lang.String getContentCharSet(cz.msebera.android.httpclient.HttpEntity r1) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Entity"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            cz.msebera.android.httpclient.Header r0 = r1.getContentType()
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.Header r1 = r1.getContentType()
            cz.msebera.android.httpclient.HeaderElement[] r1 = r1.getElements()
            int r0 = r1.length
            if (r0 <= 0) goto L26
            r0 = 0
            r1 = r1[r0]
            java.lang.String r0 = "charset"
            cz.msebera.android.httpclient.NameValuePair r1 = r1.getParameterByName(r0)
            if (r1 == 0) goto L26
            java.lang.String r1 = r1.getValue()
            goto L27
        L26:
            r1 = 0
        L27:
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String getContentMimeType(cz.msebera.android.httpclient.HttpEntity r1) throws cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Entity"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            cz.msebera.android.httpclient.Header r0 = r1.getContentType()
            if (r0 == 0) goto L1e
            cz.msebera.android.httpclient.Header r1 = r1.getContentType()
            cz.msebera.android.httpclient.HeaderElement[] r1 = r1.getElements()
            int r0 = r1.length
            if (r0 <= 0) goto L1e
            r0 = 0
            r1 = r1[r0]
            java.lang.String r1 = r1.getName()
            goto L1f
        L1e:
            r1 = 0
        L1f:
            return r1
    }

    public static byte[] toByteArray(cz.msebera.android.httpclient.HttpEntity r7) throws java.io.IOException {
            java.lang.String r0 = "Entity"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.io.InputStream r0 = r7.getContent()
            if (r0 != 0) goto Ld
            r7 = 0
            return r7
        Ld:
            long r1 = r7.getContentLength()     // Catch: java.lang.Throwable -> L46
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r5 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 > 0) goto L1b
            r1 = 1
            goto L1c
        L1b:
            r1 = 0
        L1c:
            java.lang.String r2 = "HTTP entity too large to be buffered in memory"
            cz.msebera.android.httpclient.util.Args.check(r1, r2)     // Catch: java.lang.Throwable -> L46
            long r1 = r7.getContentLength()     // Catch: java.lang.Throwable -> L46
            int r7 = (int) r1     // Catch: java.lang.Throwable -> L46
            r1 = 4096(0x1000, float:5.74E-42)
            if (r7 >= 0) goto L2c
            r7 = 4096(0x1000, float:5.74E-42)
        L2c:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer     // Catch: java.lang.Throwable -> L46
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L46
            byte[] r7 = new byte[r1]     // Catch: java.lang.Throwable -> L46
        L33:
            int r1 = r0.read(r7)     // Catch: java.lang.Throwable -> L46
            r3 = -1
            if (r1 == r3) goto L3e
            r2.append(r7, r5, r1)     // Catch: java.lang.Throwable -> L46
            goto L33
        L3e:
            byte[] r7 = r2.toByteArray()     // Catch: java.lang.Throwable -> L46
            r0.close()
            return r7
        L46:
            r7 = move-exception
            r0.close()
            throw r7
    }

    public static java.lang.String toString(cz.msebera.android.httpclient.HttpEntity r1) throws java.io.IOException, cz.msebera.android.httpclient.ParseException {
            r0 = 0
            java.nio.charset.Charset r0 = (java.nio.charset.Charset) r0
            java.lang.String r1 = toString(r1, r0)
            return r1
    }

    public static java.lang.String toString(cz.msebera.android.httpclient.HttpEntity r0, java.lang.String r1) throws java.io.IOException, cz.msebera.android.httpclient.ParseException {
            if (r1 == 0) goto L7
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            goto L8
        L7:
            r1 = 0
        L8:
            java.lang.String r0 = toString(r0, r1)
            return r0
    }

    public static java.lang.String toString(cz.msebera.android.httpclient.HttpEntity r8, java.nio.charset.Charset r9) throws java.io.IOException, cz.msebera.android.httpclient.ParseException {
            java.lang.String r0 = "Entity"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.io.InputStream r0 = r8.getContent()
            r1 = 0
            if (r0 != 0) goto Ld
            return r1
        Ld:
            long r2 = r8.getContentLength()     // Catch: java.lang.Throwable -> L6b
            r4 = 2147483647(0x7fffffff, double:1.060997895E-314)
            r6 = 0
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 > 0) goto L1b
            r2 = 1
            goto L1c
        L1b:
            r2 = 0
        L1c:
            java.lang.String r3 = "HTTP entity too large to be buffered in memory"
            cz.msebera.android.httpclient.util.Args.check(r2, r3)     // Catch: java.lang.Throwable -> L6b
            long r2 = r8.getContentLength()     // Catch: java.lang.Throwable -> L6b
            int r3 = (int) r2
            if (r3 >= 0) goto L2a
            r3 = 4096(0x1000, float:5.74E-42)
        L2a:
            cz.msebera.android.httpclient.entity.ContentType r8 = cz.msebera.android.httpclient.entity.ContentType.get(r8)     // Catch: java.nio.charset.UnsupportedCharsetException -> L35 java.lang.Throwable -> L6b
            if (r8 == 0) goto L38
            java.nio.charset.Charset r1 = r8.getCharset()     // Catch: java.nio.charset.UnsupportedCharsetException -> L35 java.lang.Throwable -> L6b
            goto L38
        L35:
            r8 = move-exception
            if (r9 == 0) goto L61
        L38:
            if (r1 != 0) goto L3b
            goto L3c
        L3b:
            r9 = r1
        L3c:
            if (r9 != 0) goto L40
            java.nio.charset.Charset r9 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET     // Catch: java.lang.Throwable -> L6b
        L40:
            java.io.InputStreamReader r8 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L6b
            r8.<init>(r0, r9)     // Catch: java.lang.Throwable -> L6b
            cz.msebera.android.httpclient.util.CharArrayBuffer r9 = new cz.msebera.android.httpclient.util.CharArrayBuffer     // Catch: java.lang.Throwable -> L6b
            r9.<init>(r3)     // Catch: java.lang.Throwable -> L6b
            r1 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r1]     // Catch: java.lang.Throwable -> L6b
        L4e:
            int r2 = r8.read(r1)     // Catch: java.lang.Throwable -> L6b
            r3 = -1
            if (r2 == r3) goto L59
            r9.append(r1, r6, r2)     // Catch: java.lang.Throwable -> L6b
            goto L4e
        L59:
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L6b
            r0.close()
            return r8
        L61:
            java.io.UnsupportedEncodingException r9 = new java.io.UnsupportedEncodingException     // Catch: java.lang.Throwable -> L6b
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L6b
            r9.<init>(r8)     // Catch: java.lang.Throwable -> L6b
            throw r9     // Catch: java.lang.Throwable -> L6b
        L6b:
            r8 = move-exception
            r0.close()
            throw r8
    }

    public static void updateEntity(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.HttpEntity r2) throws java.io.IOException {
            java.lang.String r0 = "Response"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            cz.msebera.android.httpclient.HttpEntity r0 = r1.getEntity()
            consume(r0)
            r1.setEntity(r2)
            return
    }
}
