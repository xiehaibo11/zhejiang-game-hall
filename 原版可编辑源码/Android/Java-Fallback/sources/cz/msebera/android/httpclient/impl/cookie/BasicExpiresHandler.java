package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicExpiresHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    private final java.lang.String[] datepatterns;

    public BasicExpiresHandler(java.lang.String[] r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Array of date patterns"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.datepatterns = r2
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "expires"
            return r0
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r3, java.lang.String r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 == 0) goto L2a
            java.lang.String[] r0 = r2.datepatterns
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r4, r0)
            if (r0 == 0) goto L13
            r3.setExpiryDate(r0)
            return
        L13:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid 'expires' attribute: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L2a:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Missing value for 'expires' attribute"
            r3.<init>(r4)
            throw r3
    }
}
