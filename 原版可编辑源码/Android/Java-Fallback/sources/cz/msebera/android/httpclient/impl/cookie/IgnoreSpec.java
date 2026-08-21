package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class IgnoreSpec extends cz.msebera.android.httpclient.impl.cookie.CookieSpecBase {
    public IgnoreSpec() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r1) {
            r0 = this;
            java.util.List r1 = java.util.Collections.emptyList()
            return r1
    }

    @Override
    public int getVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getVersionHeader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            java.util.List r1 = java.util.Collections.emptyList()
            return r1
    }
}
