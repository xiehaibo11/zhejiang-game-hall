package cz.msebera.android.httpclient.conn.scheme;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public final class SchemeRegistry {
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> registeredSchemes;

    public SchemeRegistry() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.registeredSchemes = r0
            return
    }

    public final cz.msebera.android.httpclient.conn.scheme.Scheme get(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Scheme name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r0 = r1.registeredSchemes
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.conn.scheme.Scheme r2 = (cz.msebera.android.httpclient.conn.scheme.Scheme) r2
            return r2
    }

    public final cz.msebera.android.httpclient.conn.scheme.Scheme getScheme(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = r2.getSchemeName()
            cz.msebera.android.httpclient.conn.scheme.Scheme r2 = r1.getScheme(r2)
            return r2
    }

    public final cz.msebera.android.httpclient.conn.scheme.Scheme getScheme(java.lang.String r4) {
            r3 = this;
            cz.msebera.android.httpclient.conn.scheme.Scheme r0 = r3.get(r4)
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Scheme '"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "' not registered."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public final java.util.List<java.lang.String> getSchemeNames() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r1 = r2.registeredSchemes
            java.util.Set r1 = r1.keySet()
            r0.<init>(r1)
            return r0
    }

    public final cz.msebera.android.httpclient.conn.scheme.Scheme register(cz.msebera.android.httpclient.conn.scheme.Scheme r3) {
            r2 = this;
            java.lang.String r0 = "Scheme"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r0 = r2.registeredSchemes
            java.lang.String r1 = r3.getName()
            java.lang.Object r3 = r0.put(r1, r3)
            cz.msebera.android.httpclient.conn.scheme.Scheme r3 = (cz.msebera.android.httpclient.conn.scheme.Scheme) r3
            return r3
    }

    public void setItems(java.util.Map<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r0 = r1.registeredSchemes
            r0.clear()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r0 = r1.registeredSchemes
            r0.putAll(r2)
            return
    }

    public final cz.msebera.android.httpclient.conn.scheme.Scheme unregister(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Scheme name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.conn.scheme.Scheme> r0 = r1.registeredSchemes
            java.lang.Object r2 = r0.remove(r2)
            cz.msebera.android.httpclient.conn.scheme.Scheme r2 = (cz.msebera.android.httpclient.conn.scheme.Scheme) r2
            return r2
    }
}
