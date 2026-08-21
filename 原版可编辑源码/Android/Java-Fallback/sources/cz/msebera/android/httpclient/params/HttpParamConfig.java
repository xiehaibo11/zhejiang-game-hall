package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public final class HttpParamConfig {
    private HttpParamConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.config.ConnectionConfig getConnectionConfig(cz.msebera.android.httpclient.params.HttpParams r3) {
            cz.msebera.android.httpclient.config.MessageConstraints r0 = getMessageConstraints(r3)
            java.lang.String r1 = "http.protocol.element-charset"
            java.lang.Object r1 = r3.getParameter(r1)
            java.lang.String r1 = (java.lang.String) r1
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r2 = cz.msebera.android.httpclient.config.ConnectionConfig.custom()
            if (r1 == 0) goto L17
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            goto L18
        L17:
            r1 = 0
        L18:
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r1 = r2.setCharset(r1)
            java.lang.String r2 = "http.malformed.input.action"
            java.lang.Object r2 = r3.getParameter(r2)
            java.nio.charset.CodingErrorAction r2 = (java.nio.charset.CodingErrorAction) r2
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r1 = r1.setMalformedInputAction(r2)
            java.lang.String r2 = "http.unmappable.input.action"
            java.lang.Object r3 = r3.getParameter(r2)
            java.nio.charset.CodingErrorAction r3 = (java.nio.charset.CodingErrorAction) r3
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r3 = r1.setMalformedInputAction(r3)
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r3 = r3.setMessageConstraints(r0)
            cz.msebera.android.httpclient.config.ConnectionConfig r3 = r3.build()
            return r3
    }

    public static cz.msebera.android.httpclient.config.MessageConstraints getMessageConstraints(cz.msebera.android.httpclient.params.HttpParams r3) {
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = cz.msebera.android.httpclient.config.MessageConstraints.custom()
            r1 = -1
            java.lang.String r2 = "http.connection.max-header-count"
            int r2 = r3.getIntParameter(r2, r1)
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = r0.setMaxHeaderCount(r2)
            java.lang.String r2 = "http.connection.max-line-length"
            int r3 = r3.getIntParameter(r2, r1)
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r3 = r0.setMaxLineLength(r3)
            cz.msebera.android.httpclient.config.MessageConstraints r3 = r3.build()
            return r3
    }

    public static cz.msebera.android.httpclient.config.SocketConfig getSocketConfig(cz.msebera.android.httpclient.params.HttpParams r3) {
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = cz.msebera.android.httpclient.config.SocketConfig.custom()
            r1 = 0
            java.lang.String r2 = "http.socket.timeout"
            int r2 = r3.getIntParameter(r2, r1)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoTimeout(r2)
            java.lang.String r2 = "http.socket.reuseaddr"
            boolean r2 = r3.getBooleanParameter(r2, r1)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoReuseAddress(r2)
            java.lang.String r2 = "http.socket.keepalive"
            boolean r1 = r3.getBooleanParameter(r2, r1)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoKeepAlive(r1)
            java.lang.String r1 = "http.socket.linger"
            r2 = -1
            int r1 = r3.getIntParameter(r1, r2)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoLinger(r1)
            java.lang.String r1 = "http.tcp.nodelay"
            r2 = 1
            boolean r3 = r3.getBooleanParameter(r1, r2)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r3 = r0.setTcpNoDelay(r3)
            cz.msebera.android.httpclient.config.SocketConfig r3 = r3.build()
            return r3
    }
}
