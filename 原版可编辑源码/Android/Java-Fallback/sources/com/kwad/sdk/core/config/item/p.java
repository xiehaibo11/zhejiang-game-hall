package com.kwad.sdk.core.config.item;

public final class p extends com.kwad.sdk.core.config.item.a<java.lang.String> {
    public p(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r3.getString(r0, r1)
            java.lang.String r3 = cx(r3)
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getValue()
            java.lang.String r0 = cw(r0)
            java.lang.String r1 = r2.getKey()
            r3.putString(r1, r0)
            return
    }

    @Override
    public final void g(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L11
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r3.optString(r0, r1)
            goto L12
        L11:
            r3 = 0
        L12:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L20
            java.lang.Object r3 = r2.zZ()
            r2.setValue(r3)
            return
        L20:
            r2.setValue(r3)
            return
    }

    @Override
    public final java.lang.Object getValue() {
            r1 = this;
            java.lang.String r0 = r1.getValue()
            return r0
    }

    @Override
    public final java.lang.String getValue() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }
}
