package com.kwad.sdk.core.config.item;

public final class l extends com.kwad.sdk.core.config.item.b<java.lang.String> {
    private boolean amH;

    public l(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.amH = r1
            return
    }

    public l(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.amH = r1
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            boolean r0 = r2.amH
            if (r0 == 0) goto L15
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r3.getString(r0, r1)
            r2.setValue(r3)
        L15:
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            boolean r0 = r2.amH
            if (r0 == 0) goto Lf
            java.lang.String r0 = r2.getKey()
            java.lang.String r1 = r2.getValue()
            r3.putString(r0, r1)
        Lf:
            return
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            if (r2 == 0) goto L14
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 == 0) goto L14
            java.lang.String r2 = r2.toString()
        L10:
            r1.setValue(r2)
            return
        L14:
            java.lang.Object r2 = r1.zZ()
            goto L10
    }

    @Override
    public final java.lang.String getValue() {
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
