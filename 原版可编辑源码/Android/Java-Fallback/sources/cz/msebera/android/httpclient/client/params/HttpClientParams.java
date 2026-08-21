package cz.msebera.android.httpclient.client.params;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class HttpClientParams {
    private HttpClientParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getConnectionManagerTimeout(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.conn-manager.timeout"
            java.lang.Object r0 = r2.getParameter(r0)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 == 0) goto L14
            long r0 = r0.longValue()
            return r0
        L14:
            int r2 = cz.msebera.android.httpclient.params.HttpConnectionParams.getConnectionTimeout(r2)
            long r0 = (long) r2
            return r0
    }

    public static java.lang.String getCookiePolicy(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.cookie-policy"
            java.lang.Object r1 = r1.getParameter(r0)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L11
            java.lang.String r1 = "best-match"
        L11:
            return r1
    }

    public static boolean isAuthenticating(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.protocol.handle-authentication"
            r1 = 1
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static boolean isRedirecting(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.protocol.handle-redirects"
            r1 = 1
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static void setAuthenticating(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.handle-authentication"
            r1.setBooleanParameter(r0, r2)
            return
    }

    public static void setConnectionManagerTimeout(cz.msebera.android.httpclient.params.HttpParams r1, long r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.conn-manager.timeout"
            r1.setLongParameter(r0, r2)
            return
    }

    public static void setCookiePolicy(cz.msebera.android.httpclient.params.HttpParams r1, java.lang.String r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.cookie-policy"
            r1.setParameter(r0, r2)
            return
    }

    public static void setRedirecting(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.handle-redirects"
            r1.setBooleanParameter(r0, r2)
            return
    }
}
