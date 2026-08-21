package cz.msebera.android.httpclient.impl.cookie;

@java.lang.Deprecated
public class PublicSuffixFilter implements cz.msebera.android.httpclient.cookie.CookieAttributeHandler {
    private java.util.Collection<java.lang.String> exceptions;
    private cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher matcher;
    private java.util.Collection<java.lang.String> suffixes;
    private final cz.msebera.android.httpclient.cookie.CookieAttributeHandler wrapped;

    public PublicSuffixFilter(cz.msebera.android.httpclient.cookie.CookieAttributeHandler r1) {
            r0 = this;
            r0.<init>()
            r0.wrapped = r1
            return
    }

    private boolean isForPublicSuffix(cz.msebera.android.httpclient.cookie.Cookie r4) {
            r3 = this;
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = r3.matcher
            if (r0 != 0) goto Lf
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = new cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher
            java.util.Collection<java.lang.String> r1 = r3.suffixes
            java.util.Collection<java.lang.String> r2 = r3.exceptions
            r0.<init>(r1, r2)
            r3.matcher = r0
        Lf:
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = r3.matcher
            java.lang.String r4 = r4.getDomain()
            boolean r4 = r0.matches(r4)
            return r4
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            boolean r0 = r1.isForPublicSuffix(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r0 = r1.wrapped
            boolean r2 = r0.match(r2, r3)
            return r2
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r0 = r1.wrapped
            r0.parse(r2, r3)
            return
    }

    public void setExceptions(java.util.Collection<java.lang.String> r1) {
            r0 = this;
            r0.exceptions = r1
            r1 = 0
            r0.matcher = r1
            return
    }

    public void setPublicSuffixes(java.util.Collection<java.lang.String> r1) {
            r0 = this;
            r0.suffixes = r1
            r1 = 0
            r0.matcher = r1
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r0 = r1.wrapped
            r0.validate(r2, r3)
            return
    }
}
