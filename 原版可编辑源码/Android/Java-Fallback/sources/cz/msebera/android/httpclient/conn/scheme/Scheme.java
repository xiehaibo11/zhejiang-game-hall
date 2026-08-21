package cz.msebera.android.httpclient.conn.scheme;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public final class Scheme {
    private final int defaultPort;
    private final boolean layered;
    private final java.lang.String name;
    private final cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory socketFactory;
    private java.lang.String stringRep;

    public Scheme(java.lang.String r5, int r6, cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r7) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "Scheme name"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r0 = 0
            r1 = 1
            if (r6 <= 0) goto L13
            r2 = 65535(0xffff, float:9.1834E-41)
            if (r6 > r2) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            java.lang.String r3 = "Port is invalid"
            cz.msebera.android.httpclient.util.Args.check(r2, r3)
            java.lang.String r2 = "Socket factory"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r2)
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r5 = r5.toLowerCase(r2)
            r4.name = r5
            r4.defaultPort = r6
            boolean r5 = r7 instanceof cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory
            if (r5 == 0) goto L31
            r4.layered = r1
            r4.socketFactory = r7
            goto L45
        L31:
            boolean r5 = r7 instanceof cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory
            if (r5 == 0) goto L41
            r4.layered = r1
            cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactoryAdaptor2 r5 = new cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactoryAdaptor2
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r7 = (cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory) r7
            r5.<init>(r7)
            r4.socketFactory = r5
            goto L45
        L41:
            r4.layered = r0
            r4.socketFactory = r7
        L45:
            return
    }

    @java.lang.Deprecated
    public Scheme(java.lang.String r5, cz.msebera.android.httpclient.conn.scheme.SocketFactory r6, int r7) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "Scheme name"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Socket factory"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            r0 = 1
            r1 = 0
            if (r7 <= 0) goto L18
            r2 = 65535(0xffff, float:9.1834E-41)
            if (r7 > r2) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            java.lang.String r3 = "Port is invalid"
            cz.msebera.android.httpclient.util.Args.check(r2, r3)
            java.util.Locale r2 = java.util.Locale.ENGLISH
            java.lang.String r5 = r5.toLowerCase(r2)
            r4.name = r5
            boolean r5 = r6 instanceof cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory
            if (r5 == 0) goto L36
            cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactoryAdaptor r5 = new cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactoryAdaptor
            cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory r6 = (cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory) r6
            r5.<init>(r6)
            r4.socketFactory = r5
            r4.layered = r0
            goto L3f
        L36:
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor r5 = new cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor
            r5.<init>(r6)
            r4.socketFactory = r5
            r4.layered = r1
        L3f:
            r4.defaultPort = r7
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.conn.scheme.Scheme
            r2 = 0
            if (r1 == 0) goto L24
            cz.msebera.android.httpclient.conn.scheme.Scheme r5 = (cz.msebera.android.httpclient.conn.scheme.Scheme) r5
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L22
            int r1 = r4.defaultPort
            int r3 = r5.defaultPort
            if (r1 != r3) goto L22
            boolean r1 = r4.layered
            boolean r5 = r5.layered
            if (r1 != r5) goto L22
            goto L23
        L22:
            r0 = 0
        L23:
            return r0
        L24:
            return r2
    }

    public final int getDefaultPort() {
            r1 = this;
            int r0 = r1.defaultPort
            return r0
    }

    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public final cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory getSchemeSocketFactory() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.socketFactory
            return r0
    }

    @java.lang.Deprecated
    public final cz.msebera.android.httpclient.conn.scheme.SocketFactory getSocketFactory() {
            r2 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r2.socketFactory
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor
            if (r1 == 0) goto Ld
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor r0 = (cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor) r0
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r0.getFactory()
            return r0
        Ld:
            boolean r1 = r2.layered
            if (r1 == 0) goto L19
            cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactoryAdaptor r1 = new cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactoryAdaptor
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r0 = (cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory) r0
            r1.<init>(r0)
            return r1
        L19:
            cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor r1 = new cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor
            r1.<init>(r0)
            return r1
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.defaultPort
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.lang.String r1 = r2.name
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            boolean r1 = r2.layered
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    public final boolean isLayered() {
            r1 = this;
            boolean r0 = r1.layered
            return r0
    }

    public final int resolvePort(int r1) {
            r0 = this;
            if (r1 > 0) goto L4
            int r1 = r0.defaultPort
        L4:
            return r1
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.String r0 = r2.stringRep
            if (r0 != 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.name
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            int r1 = r2.defaultPort
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.stringRep = r0
        L22:
            java.lang.String r0 = r2.stringRep
            return r0
    }
}
