package com.kwad.sdk.core.config.item;

public final class d extends com.kwad.sdk.core.config.item.a<java.lang.Boolean> {
    public d(java.lang.String r1, boolean r2) {
            r0 = this;
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r0.<init>(r1, r2)
            return
    }

    public final java.lang.Boolean Aa() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            boolean r3 = r3.getBoolean(r0, r1)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Boolean r1 = r2.Aa()
            boolean r1 = r1.booleanValue()
            r3.putBoolean(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L1c
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            boolean r3 = r3.optBoolean(r0, r1)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
        L18:
            r2.setValue(r3)
            return
        L1c:
            java.lang.Object r3 = r2.zZ()
            goto L18
    }

    @Override
    public final java.lang.Object getValue() {
            r1 = this;
            java.lang.Boolean r0 = r1.Aa()
            return r0
    }
}
