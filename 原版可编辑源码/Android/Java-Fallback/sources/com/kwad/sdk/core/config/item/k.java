package com.kwad.sdk.core.config.item;

public final class k extends com.kwad.sdk.core.config.item.a<java.lang.Integer> {
    public k(java.lang.String r1, java.lang.Integer r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public final boolean Ae() {
            r2 = this;
            java.lang.Integer r0 = r2.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Lc
            return r1
        Lc:
            r0 = 0
            return r0
    }

    public final java.lang.Integer Af() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.Integer r0 = (java.lang.Integer) r0
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            int r3 = r3.getInt(r0, r1)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Integer r1 = r2.Af()
            int r1 = r1.intValue()
            r3.putInt(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L1c
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            int r3 = r3.optInt(r0, r1)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
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
            java.lang.Integer r0 = r1.Af()
            return r0
    }
}
