package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965SpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final boolean oneHeader;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;

    public RFC2965SpecProvider() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public RFC2965SpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RFC2965SpecProvider(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1, boolean r2) {
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
            if (r6 != 0) goto L6a
            monitor-enter(r5)
            cz.msebera.android.httpclient.cookie.CookieSpec r6 = r5.cookieSpec     // Catch: java.lang.Throwable -> L67
            if (r6 != 0) goto L65
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r6 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec     // Catch: java.lang.Throwable -> L67
            boolean r0 = r5.oneHeader     // Catch: java.lang.Throwable -> L67
            r1 = 9
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r1 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r1]     // Catch: java.lang.Throwable -> L67
            r2 = 0
            cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 1
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 2
            cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r4 = r5.publicSuffixMatcher     // Catch: java.lang.Throwable -> L67
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r3 = cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter.decorate(r3, r4)     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 3
            cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 4
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 5
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 6
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r3 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 7
            cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r2 = 8
            cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler r3 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r1[r2] = r3     // Catch: java.lang.Throwable -> L67
            r6.<init>(r0, r1)     // Catch: java.lang.Throwable -> L67
            r5.cookieSpec = r6     // Catch: java.lang.Throwable -> L67
        L65:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L67
            goto L6a
        L67:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L67
            throw r6
        L6a:
            cz.msebera.android.httpclient.cookie.CookieSpec r6 = r5.cookieSpec
            return r6
    }
}
