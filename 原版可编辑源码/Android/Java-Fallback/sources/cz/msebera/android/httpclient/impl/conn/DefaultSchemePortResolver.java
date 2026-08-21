package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultSchemePortResolver implements cz.msebera.android.httpclient.conn.SchemePortResolver {
    public static final cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver r0 = new cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver.INSTANCE = r0
            return
    }

    public DefaultSchemePortResolver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int resolve(cz.msebera.android.httpclient.HttpHost r3) throws cz.msebera.android.httpclient.conn.UnsupportedSchemeException {
            r2 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            int r0 = r3.getPort()
            if (r0 <= 0) goto Lc
            return r0
        Lc:
            java.lang.String r3 = r3.getSchemeName()
            java.lang.String r0 = "http"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L1b
            r3 = 80
            return r3
        L1b:
            java.lang.String r0 = "https"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L26
            r3 = 443(0x1bb, float:6.21E-43)
            return r3
        L26:
            cz.msebera.android.httpclient.conn.UnsupportedSchemeException r0 = new cz.msebera.android.httpclient.conn.UnsupportedSchemeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " protocol is not supported"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
