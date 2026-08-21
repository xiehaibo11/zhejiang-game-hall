package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class LaxMaxAgeHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    private static final java.util.regex.Pattern MAX_AGE_PATTERN = null;

    static {
            java.lang.String r0 = "^\\-?[0-9]+$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.cookie.LaxMaxAgeHandler.MAX_AGE_PATTERN = r0
            return
    }

    public LaxMaxAgeHandler() {
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
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r9)
            if (r0 == 0) goto Lc
            return
        Lc:
            java.util.regex.Pattern r0 = cz.msebera.android.httpclient.impl.cookie.LaxMaxAgeHandler.MAX_AGE_PATTERN
            java.util.regex.Matcher r0 = r0.matcher(r9)
            boolean r0 = r0.matches()
            if (r0 == 0) goto L39
            int r9 = java.lang.Integer.parseInt(r9)     // Catch: java.lang.NumberFormatException -> L39
            if (r9 < 0) goto L2e
            java.util.Date r0 = new java.util.Date
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = (long) r9
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            long r1 = r1 + r3
            r0.<init>(r1)
            goto L35
        L2e:
            java.util.Date r0 = new java.util.Date
            r1 = -9223372036854775808
            r0.<init>(r1)
        L35:
            r8.setExpiryDate(r0)
        L39:
            return
    }
}
