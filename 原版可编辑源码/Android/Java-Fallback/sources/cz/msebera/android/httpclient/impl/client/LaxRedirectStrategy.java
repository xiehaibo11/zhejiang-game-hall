package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class LaxRedirectStrategy extends cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy {
    private static final java.lang.String[] REDIRECT_METHODS = null;

    static {
            java.lang.String r0 = "GET"
            java.lang.String r1 = "POST"
            java.lang.String r2 = "HEAD"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            cz.msebera.android.httpclient.impl.client.LaxRedirectStrategy.REDIRECT_METHODS = r0
            return
    }

    public LaxRedirectStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected boolean isRedirectable(java.lang.String r6) {
            r5 = this;
            java.lang.String[] r0 = cz.msebera.android.httpclient.impl.client.LaxRedirectStrategy.REDIRECT_METHODS
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r4.equalsIgnoreCase(r6)
            if (r4 == 0) goto L11
            r6 = 1
            return r6
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }
}
