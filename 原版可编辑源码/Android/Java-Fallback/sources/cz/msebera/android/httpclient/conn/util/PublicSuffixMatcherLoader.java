package cz.msebera.android.httpclient.conn.util;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public final class PublicSuffixMatcherLoader {
    private static volatile cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher DEFAULT_INSTANCE;

    public PublicSuffixMatcherLoader() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher getDefault() {
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.DEFAULT_INSTANCE
            if (r0 != 0) goto L47
            java.lang.Class<cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader> r0 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.class
            monitor-enter(r0)
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.DEFAULT_INSTANCE     // Catch: java.lang.Throwable -> L44
            if (r1 != 0) goto L42
            java.lang.Class<cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader> r1 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.class
            java.lang.String r2 = "/mozilla/public-suffix-list.txt"
            java.net.URL r1 = r1.getResource(r2)     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L30
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = load(r1)     // Catch: java.io.IOException -> L1c java.lang.Throwable -> L44
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.DEFAULT_INSTANCE = r1     // Catch: java.io.IOException -> L1c java.lang.Throwable -> L44
            goto L42
        L1c:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog     // Catch: java.lang.Throwable -> L44
            java.lang.Class<cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader> r3 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.class
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L44
            boolean r3 = r2.isWarnEnabled()     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L42
            java.lang.String r3 = "Failure loading public suffix list from default resource"
            r2.warn(r3, r1)     // Catch: java.lang.Throwable -> L44
            goto L42
        L30:
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = new cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "com"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L44
            java.util.List r2 = java.util.Arrays.asList(r2)     // Catch: java.lang.Throwable -> L44
            r3 = 0
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L44
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.DEFAULT_INSTANCE = r1     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            goto L47
        L44:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            throw r1
        L47:
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.DEFAULT_INSTANCE
            return r0
    }

    public static cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher load(java.io.File r1) throws java.io.IOException {
            java.lang.String r0 = "File"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = load(r0)     // Catch: java.lang.Throwable -> L12
            r0.close()
            return r1
        L12:
            r1 = move-exception
            r0.close()
            throw r1
    }

    private static cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher load(java.io.InputStream r3) throws java.io.IOException {
            cz.msebera.android.httpclient.conn.util.PublicSuffixListParser r0 = new cz.msebera.android.httpclient.conn.util.PublicSuffixListParser
            r0.<init>()
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.UTF_8
            r1.<init>(r3, r2)
            cz.msebera.android.httpclient.conn.util.PublicSuffixList r3 = r0.parse(r1)
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = new cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher
            java.util.List r1 = r3.getRules()
            java.util.List r3 = r3.getExceptions()
            r0.<init>(r1, r3)
            return r0
    }

    public static cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher load(java.net.URL r1) throws java.io.IOException {
            java.lang.String r0 = "URL"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.io.InputStream r1 = r1.openStream()
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = load(r1)     // Catch: java.lang.Throwable -> L11
            r1.close()
            return r0
        L11:
            r0 = move-exception
            r1.close()
            throw r0
    }
}
