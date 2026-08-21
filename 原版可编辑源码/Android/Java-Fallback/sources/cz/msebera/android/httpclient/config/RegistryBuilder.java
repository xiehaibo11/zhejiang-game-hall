package cz.msebera.android.httpclient.config;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public final class RegistryBuilder<I> {
    private final java.util.Map<java.lang.String, I> items;

    RegistryBuilder() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.items = r0
            return
    }

    public static <I> cz.msebera.android.httpclient.config.RegistryBuilder<I> create() {
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = new cz.msebera.android.httpclient.config.RegistryBuilder
            r0.<init>()
            return r0
    }

    public cz.msebera.android.httpclient.config.Registry<I> build() {
            r2 = this;
            cz.msebera.android.httpclient.config.Registry r0 = new cz.msebera.android.httpclient.config.Registry
            java.util.Map<java.lang.String, I> r1 = r2.items
            r0.<init>(r1)
            return r0
    }

    public cz.msebera.android.httpclient.config.RegistryBuilder<I> register(java.lang.String r3, I r4) {
            r2 = this;
            java.lang.String r0 = "ID"
            cz.msebera.android.httpclient.util.Args.notEmpty(r3, r0)
            java.lang.String r0 = "Item"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.Map<java.lang.String, I> r0 = r2.items
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r1)
            r0.put(r3, r4)
            return r2
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<java.lang.String, I> r0 = r1.items
            java.lang.String r0 = r0.toString()
            return r0
    }
}
