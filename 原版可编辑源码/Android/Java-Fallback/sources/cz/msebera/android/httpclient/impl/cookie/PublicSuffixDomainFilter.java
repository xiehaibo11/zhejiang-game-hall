package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class PublicSuffixDomainFilter implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    private final cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler handler;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;

    public PublicSuffixDomainFilter(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2, cz.msebera.android.httpclient.conn.util.PublicSuffixList r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Cookie handler"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Public suffix list"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.handler = r2
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2 = new cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher
            java.util.List r0 = r3.getRules()
            java.util.List r3 = r3.getExceptions()
            r2.<init>(r0, r3)
            r1.publicSuffixMatcher = r2
            return
    }

    public PublicSuffixDomainFilter(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Cookie handler"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r2 = (cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler) r2
            r1.handler = r2
            java.lang.String r2 = "Public suffix matcher"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2 = (cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher) r2
            r1.publicSuffixMatcher = r2
            return
    }

    public static cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler decorate(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r1, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r2) {
            java.lang.String r0 = "Cookie attribute handler"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            if (r2 == 0) goto Ld
            cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter r0 = new cz.msebera.android.httpclient.impl.cookie.PublicSuffixDomainFilter
            r0.<init>(r1, r2)
            r1 = r0
        Ld:
            return r1
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r0 = r1.handler
            java.lang.String r0 = r0.getAttributeName()
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) {
            r2 = this;
            java.lang.String r0 = r3.getDomain()
            java.lang.String r1 = "localhost"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto L16
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = r2.publicSuffixMatcher
            boolean r0 = r1.matches(r0)
            if (r0 == 0) goto L16
            r3 = 0
            return r3
        L16:
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r0 = r2.handler
            boolean r3 = r0.match(r3, r4)
            return r3
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r0 = r1.handler
            r0.parse(r2, r3)
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler r0 = r1.handler
            r0.validate(r2, r3)
            return
    }
}
