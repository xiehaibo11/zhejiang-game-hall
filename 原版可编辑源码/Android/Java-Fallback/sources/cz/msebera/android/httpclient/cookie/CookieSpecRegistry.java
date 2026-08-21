package cz.msebera.android.httpclient.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public final class CookieSpecRegistry implements cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> {
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> registeredSpecs;


    public CookieSpecRegistry() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.registeredSpecs = r0
            return
    }

    public cz.msebera.android.httpclient.cookie.CookieSpec getCookieSpec(java.lang.String r2) throws java.lang.IllegalStateException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.cookie.CookieSpec r2 = r1.getCookieSpec(r2, r0)
            return r2
    }

    public cz.msebera.android.httpclient.cookie.CookieSpec getCookieSpec(java.lang.String r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.lang.IllegalStateException {
            r2 = this;
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r0 = r2.registeredSpecs
            java.util.Locale r1 = java.util.Locale.ENGLISH
            java.lang.String r1 = r3.toLowerCase(r1)
            java.lang.Object r0 = r0.get(r1)
            cz.msebera.android.httpclient.cookie.CookieSpecFactory r0 = (cz.msebera.android.httpclient.cookie.CookieSpecFactory) r0
            if (r0 == 0) goto L1a
            cz.msebera.android.httpclient.cookie.CookieSpec r3 = r0.newInstance(r4)
            return r3
        L1a:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported cookie spec: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    public java.util.List<java.lang.String> getSpecNames() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r1 = r2.registeredSpecs
            java.util.Set r1 = r1.keySet()
            r0.<init>(r1)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpecProvider lookup(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry$1 r0 = new cz.msebera.android.httpclient.cookie.CookieSpecRegistry$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpecProvider lookup(java.lang.String r1) {
            r0 = this;
            cz.msebera.android.httpclient.cookie.CookieSpecProvider r1 = r0.lookup(r1)
            return r1
    }

    public void register(java.lang.String r3, cz.msebera.android.httpclient.cookie.CookieSpecFactory r4) {
            r2 = this;
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie spec factory"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r0 = r2.registeredSpecs
            java.util.Locale r1 = java.util.Locale.ENGLISH
            java.lang.String r3 = r3.toLowerCase(r1)
            r0.put(r3, r4)
            return
    }

    public void setItems(java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r0 = r1.registeredSpecs
            r0.clear()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r0 = r1.registeredSpecs
            r0.putAll(r2)
            return
    }

    public void unregister(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "Id"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieSpecFactory> r0 = r2.registeredSpecs
            java.util.Locale r1 = java.util.Locale.ENGLISH
            java.lang.String r3 = r3.toLowerCase(r1)
            r0.remove(r3)
            return
    }
}
