package cz.msebera.android.httpclient.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class ConnectTimeoutException extends java.io.InterruptedIOException {
    private static final long serialVersionUID = -4816682903149535989L;
    private final cz.msebera.android.httpclient.HttpHost host;

    public ConnectTimeoutException() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.host = r0
            return
    }

    public ConnectTimeoutException(java.io.IOException r4, cz.msebera.android.httpclient.HttpHost r5, java.net.InetAddress... r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Connect to "
            r0.append(r1)
            if (r5 == 0) goto L11
            java.lang.String r1 = r5.toHostString()
            goto L13
        L11:
            java.lang.String r1 = "remote host"
        L13:
            r0.append(r1)
            if (r6 == 0) goto L31
            int r1 = r6.length
            if (r1 <= 0) goto L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " "
            r1.append(r2)
            java.util.List r6 = java.util.Arrays.asList(r6)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            goto L33
        L31:
            java.lang.String r6 = ""
        L33:
            r0.append(r6)
            if (r4 == 0) goto L54
            java.lang.String r6 = r4.getMessage()
            if (r6 == 0) goto L54
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = " failed: "
            r6.append(r1)
            java.lang.String r1 = r4.getMessage()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            goto L56
        L54:
            java.lang.String r6 = " timed out"
        L56:
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r3.<init>(r6)
            r3.host = r5
            r3.initCause(r4)
            return
    }

    public ConnectTimeoutException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.host = r1
            return
    }

    public cz.msebera.android.httpclient.HttpHost getHost() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.host
            return r0
    }
}
