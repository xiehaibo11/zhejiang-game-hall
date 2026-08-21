package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class RFC6265StrictSpec extends cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecBase {
    static final java.lang.String[] DATE_PATTERNS = null;

    static {
            java.lang.String r0 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r1 = "EEE, dd-MMM-yy HH:mm:ss zzz"
            java.lang.String r2 = "EEE MMM d HH:mm:ss yyyy"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec.DATE_PATTERNS = r0
            return
    }

    public RFC6265StrictSpec() {
            r3 = this;
            r0 = 5
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r0]
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler
            r1.<init>()
            r2 = 1
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r1.<init>()
            r2 = 2
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r2 = 3
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            java.lang.String[] r2 = cz.msebera.android.httpclient.impl.cookie.RFC6265StrictSpec.DATE_PATTERNS
            r1.<init>(r2)
            r2 = 4
            r0[r2] = r1
            r3.<init>(r0)
            return
    }

    RFC6265StrictSpec(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public java.util.List formatCookies(java.util.List r1) {
            r0 = this;
            java.util.List r1 = super.formatCookies(r1)
            return r1
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "rfc6265-strict"
            return r0
    }
}
