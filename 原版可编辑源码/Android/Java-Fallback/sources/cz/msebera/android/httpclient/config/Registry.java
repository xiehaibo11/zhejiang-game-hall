package cz.msebera.android.httpclient.config;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public final class Registry<I> implements cz.msebera.android.httpclient.config.Lookup<I> {
    private final java.util.Map<java.lang.String, I> map;

    Registry(java.util.Map<java.lang.String, I> r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r2)
            r1.map = r0
            return
    }

    @Override
    public I lookup(java.lang.String r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.util.Map<java.lang.String, I> r0 = r2.map
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r1)
            java.lang.Object r3 = r0.get(r3)
            return r3
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<java.lang.String, I> r0 = r1.map
            java.lang.String r0 = r0.toString()
            return r0
    }
}
