package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultConnectionKeepAliveStrategy implements cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy {
    public static final cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy r0 = new cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy.INSTANCE = r0
            return
    }

    public DefaultConnectionKeepAliveStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public long getKeepAliveDuration(cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r2 = this;
            java.lang.String r4 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r4)
            cz.msebera.android.httpclient.message.BasicHeaderElementIterator r4 = new cz.msebera.android.httpclient.message.BasicHeaderElementIterator
            java.lang.String r0 = "Keep-Alive"
            cz.msebera.android.httpclient.HeaderIterator r3 = r3.headerIterator(r0)
            r4.<init>(r3)
        L10:
            boolean r3 = r4.hasNext()
            if (r3 == 0) goto L35
            cz.msebera.android.httpclient.HeaderElement r3 = r4.nextElement()
            java.lang.String r0 = r3.getName()
            java.lang.String r3 = r3.getValue()
            if (r3 == 0) goto L10
            java.lang.String r1 = "timeout"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L10
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.NumberFormatException -> L10
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r0
            return r3
        L35:
            r3 = -1
            return r3
    }
}
