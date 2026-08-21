package cz.msebera.android.httpclient.impl.conn;

public class SystemDefaultDnsResolver implements cz.msebera.android.httpclient.conn.DnsResolver {
    public static final cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver r0 = new cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver.INSTANCE = r0
            return
    }

    public SystemDefaultDnsResolver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.net.InetAddress[] resolve(java.lang.String r1) throws java.net.UnknownHostException {
            r0 = this;
            java.net.InetAddress[] r1 = java.net.InetAddress.getAllByName(r1)
            return r1
    }
}
