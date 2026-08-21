package com.kwad.sdk.core.config.item;

public final class m extends com.kwad.sdk.core.config.item.a<java.lang.Long> {
    public m(java.lang.String r3) {
            r2 = this;
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.<init>(r3, r0)
            return
    }

    public m(java.lang.String r1, java.lang.Long r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public final java.lang.Long Ag() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.Long r0 = (java.lang.Long) r0
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r4) {
            r3 = this;
            java.lang.String r0 = r3.getKey()
            java.lang.Object r1 = r3.zZ()
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            long r0 = r4.getLong(r0, r1)
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            r3.setValue(r4)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r4) {
            r3 = this;
            java.lang.String r0 = r3.getKey()
            java.lang.Long r1 = r3.Ag()
            long r1 = r1.longValue()
            r4.putLong(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r4) {
            r3 = this;
            if (r4 == 0) goto L1c
            java.lang.String r0 = r3.getKey()
            java.lang.Object r1 = r3.zZ()
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            long r0 = r4.optLong(r0, r1)
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
        L18:
            r3.setValue(r4)
            return
        L1c:
            java.lang.Object r4 = r3.zZ()
            goto L18
    }

    @Override
    public final java.lang.Object getValue() {
            r1 = this;
            java.lang.Long r0 = r1.Ag()
            return r0
    }
}
