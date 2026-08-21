package com.kwad.sdk.core.config.item;

public abstract class b<T> {
    private T amB;
    private T amC;
    private java.lang.String mKey;

    public b(java.lang.String r1, T r2) {
            r0 = this;
            r0.<init>(r1, r2, r2)
            return
    }

    private b(java.lang.String r1, T r2, T r3) {
            r0 = this;
            r0.<init>()
            r0.mKey = r1
            r0.amC = r2
            r0.amB = r3
            com.kwad.sdk.core.config.b.a(r0)
            return
    }

    public static java.lang.String cw(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La
            java.lang.String r1 = com.kwad.sdk.core.a.c.cR(r1)
        La:
            return r1
    }

    public static java.lang.String cx(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            boolean r0 = com.kwad.sdk.core.a.c.cT(r1)
            if (r0 == 0) goto L10
            java.lang.String r1 = com.kwad.sdk.core.a.c.cS(r1)
        L10:
            return r1
    }

    public abstract void a(android.content.SharedPreferences r1);

    public abstract void b(android.content.SharedPreferences.Editor r1);

    public abstract void g(org.json.JSONObject r1);

    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.mKey
            return r0
    }

    public T getValue() {
            r1 = this;
            T r0 = r1.amC
            return r0
    }

    public final void setValue(T r1) {
            r0 = this;
            r0.amC = r1
            return
    }

    public final T zZ() {
            r1 = this;
            T r0 = r1.amB
            return r0
    }
}
