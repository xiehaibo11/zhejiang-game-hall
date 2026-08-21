package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public final class HttpConnectionParams implements cz.msebera.android.httpclient.params.CoreConnectionPNames {
    private HttpConnectionParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getConnectionTimeout(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.connection.timeout"
            r1 = 0
            int r2 = r2.getIntParameter(r0, r1)
            return r2
    }

    public static int getLinger(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.socket.linger"
            r1 = -1
            int r2 = r2.getIntParameter(r0, r1)
            return r2
    }

    public static boolean getSoKeepalive(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.socket.keepalive"
            r1 = 0
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static boolean getSoReuseaddr(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.socket.reuseaddr"
            r1 = 0
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static int getSoTimeout(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.socket.timeout"
            r1 = 0
            int r2 = r2.getIntParameter(r0, r1)
            return r2
    }

    public static int getSocketBufferSize(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.socket.buffer-size"
            r1 = -1
            int r2 = r2.getIntParameter(r0, r1)
            return r2
    }

    public static boolean getTcpNoDelay(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.tcp.nodelay"
            r1 = 1
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static boolean isStaleCheckingEnabled(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.connection.stalecheck"
            r1 = 1
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }

    public static void setConnectionTimeout(cz.msebera.android.httpclient.params.HttpParams r1, int r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.connection.timeout"
            r1.setIntParameter(r0, r2)
            return
    }

    public static void setLinger(cz.msebera.android.httpclient.params.HttpParams r1, int r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.socket.linger"
            r1.setIntParameter(r0, r2)
            return
    }

    public static void setSoKeepalive(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.socket.keepalive"
            r1.setBooleanParameter(r0, r2)
            return
    }

    public static void setSoReuseaddr(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.socket.reuseaddr"
            r1.setBooleanParameter(r0, r2)
            return
    }

    public static void setSoTimeout(cz.msebera.android.httpclient.params.HttpParams r1, int r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.socket.timeout"
            r1.setIntParameter(r0, r2)
            return
    }

    public static void setSocketBufferSize(cz.msebera.android.httpclient.params.HttpParams r1, int r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.socket.buffer-size"
            r1.setIntParameter(r0, r2)
            return
    }

    public static void setStaleCheckingEnabled(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.connection.stalecheck"
            r1.setBooleanParameter(r0, r2)
            return
    }

    public static void setTcpNoDelay(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.tcp.nodelay"
            r1.setBooleanParameter(r0, r2)
            return
    }
}
