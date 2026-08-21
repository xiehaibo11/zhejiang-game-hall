package cz.msebera.android.httpclient.impl.conn;

public class InMemoryDnsResolver implements cz.msebera.android.httpclient.conn.DnsResolver {
    private final java.util.Map<java.lang.String, java.net.InetAddress[]> dnsMap;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public InMemoryDnsResolver() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class<cz.msebera.android.httpclient.impl.conn.InMemoryDnsResolver> r1 = cz.msebera.android.httpclient.impl.conn.InMemoryDnsResolver.class
            r0.<init>(r1)
            r2.log = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.dnsMap = r0
            return
    }

    public void add(java.lang.String r2, java.net.InetAddress... r3) {
            r1 = this;
            java.lang.String r0 = "Host name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Array of IP addresses"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.Map<java.lang.String, java.net.InetAddress[]> r0 = r1.dnsMap
            r0.put(r2, r3)
            return
    }

    @Override
    public java.net.InetAddress[] resolve(java.lang.String r5) throws java.net.UnknownHostException {
            r4 = this;
            java.util.Map<java.lang.String, java.net.InetAddress[]> r0 = r4.dnsMap
            java.lang.Object r0 = r0.get(r5)
            java.net.InetAddress[] r0 = (java.net.InetAddress[]) r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            boolean r1 = r1.isInfoEnabled()
            if (r1 == 0) goto L32
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Resolving "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = " to "
            r2.append(r3)
            java.lang.String r3 = java.util.Arrays.deepToString(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.info(r2)
        L32:
            if (r0 == 0) goto L35
            return r0
        L35:
            java.net.UnknownHostException r0 = new java.net.UnknownHostException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = " cannot be resolved"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }
}
