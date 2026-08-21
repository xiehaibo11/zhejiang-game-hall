package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2109SpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final boolean oneHeader;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;

    public RFC2109SpecProvider() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public RFC2109SpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RFC2109SpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.oneHeader = r2
            r0.publicSuffixMatcher = r1
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r6) {
            r5 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r6 = r5.cookieSpec
            if (r6 != 0) goto L50
            monitor-enter(r5)
            cz.msebera.android.httpclient.cookie.CookieSpec r6 = r5.cookieSpec     // Catch: java.lang.Throwable -> L4d
            if (r6 != 0) goto L4b
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r6 = new cz.msebera.android.httpclient.impl.cookie.RFC2109Spec     // Catch: java.lang.Throwable -> L4d
            boolean r0 = r5.oneHeader     // Catch: java.lang.Throwable -> L4d
            r1 = 6
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r1 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r1]     // Catch: java.lang.Throwable -> L4d
            r2 = 0
            cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r2 = 1
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r2 = 2
            cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r4 = r5.publicSuffixMatcher     // Catch: java.lang.Throwable -> L4d
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r3 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r3, r4)     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r2 = 3
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r2 = 4
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r2 = 5
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            r1[r2] = r3     // Catch: java.lang.Throwable -> L4d
            r6.<init>(r0, r1)     // Catch: java.lang.Throwable -> L4d
            r5.cookieSpec = r6     // Catch: java.lang.Throwable -> L4d
        L4b:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L4d
            goto L50
        L4d:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L4d
            throw r6
        L50:
            cz.msebera.android.httpclient.cookie.CookieSpec r6 = r5.cookieSpec
            return r6
    }
}
