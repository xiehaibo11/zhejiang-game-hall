package cz.msebera.android.httpclient.util;

public final class NetUtils {
    public NetUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void formatAddress(java.lang.StringBuilder r1, java.net.SocketAddress r2) {
            java.lang.String r0 = "Buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "Socket address"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r0 = r2 instanceof java.net.InetSocketAddress
            if (r0 == 0) goto L2a
            java.net.InetSocketAddress r2 = (java.net.InetSocketAddress) r2
            java.net.InetAddress r0 = r2.getAddress()
            if (r0 == 0) goto L1a
            java.lang.String r0 = r0.getHostAddress()
        L1a:
            r1.append(r0)
            r0 = 58
            r1.append(r0)
            int r2 = r2.getPort()
            r1.append(r2)
            goto L2d
        L2a:
            r1.append(r2)
        L2d:
            return
    }
}
