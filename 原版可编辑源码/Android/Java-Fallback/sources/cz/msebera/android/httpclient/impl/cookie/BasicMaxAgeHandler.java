package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicMaxAgeHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public BasicMaxAgeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "max-age"
            return r0
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r8, java.lang.String r9) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r7 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            if (r9 == 0) goto L4e
            int r0 = java.lang.Integer.parseInt(r9)     // Catch: java.lang.NumberFormatException -> L37
            if (r0 < 0) goto L20
            java.util.Date r9 = new java.util.Date
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = (long) r0
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            long r1 = r1 + r3
            r9.<init>(r1)
            r8.setExpiryDate(r9)
            return
        L20:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r8 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Negative 'max-age' attribute: "
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L37:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r8 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid 'max-age' attribute: "
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L4e:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r8 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r9 = "Missing value for 'max-age' attribute"
            r8.<init>(r9)
            throw r8
    }
}
