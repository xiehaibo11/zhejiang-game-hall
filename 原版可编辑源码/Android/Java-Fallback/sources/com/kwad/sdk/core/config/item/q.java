package com.kwad.sdk.core.config.item;

public final class q extends com.kwad.sdk.core.config.item.b<java.util.List<java.lang.String>> {
    public q(java.lang.String r1, java.util.List<java.lang.String> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public final java.util.List<java.lang.String> Ah() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.util.List r0 = (java.util.List) r0
            if (r0 != 0) goto Ld
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        Ld:
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.String r1 = ""
            java.lang.String r3 = r3.getString(r0, r1)
            java.lang.String r3 = cx(r3)
            java.util.List r3 = com.kwad.sdk.utils.t.fw(r3)
            boolean r0 = com.kwad.sdk.utils.ah.J(r3)
            if (r0 == 0) goto L1c
            r2.setValue(r3)
            return
        L1c:
            java.lang.Object r3 = r2.zZ()
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.util.List r0 = r2.Ah()
            boolean r0 = com.kwad.sdk.utils.ah.J(r0)
            if (r0 == 0) goto L21
            java.util.List r0 = r2.Ah()
            org.json.JSONArray r0 = com.kwad.sdk.utils.t.toJsonArray(r0)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = cw(r0)
            java.lang.String r1 = r2.getKey()
            r3.putString(r1, r0)
        L21:
            return
    }

    @Override
    public final void g(org.json.JSONObject r5) {
            r4 = this;
            if (r5 == 0) goto L3a
            java.lang.String r0 = r4.getKey()
            org.json.JSONArray r5 = r5.optJSONArray(r0)
            if (r5 == 0) goto L3a
            int r0 = r5.length()
            if (r0 <= 0) goto L3a
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1 = 0
        L18:
            int r2 = r5.length()
            if (r1 >= r2) goto L30
            java.lang.String r2 = r5.optString(r1)
            if (r2 == 0) goto L2d
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto L2d
            r0.add(r2)
        L2d:
            int r1 = r1 + 1
            goto L18
        L30:
            int r5 = r0.size()
            if (r5 <= 0) goto L3a
            r4.setValue(r0)
            return
        L3a:
            java.lang.Object r5 = r4.zZ()
            r4.setValue(r5)
            return
    }

    @Override
    public final java.util.List<java.lang.String> getValue() {
            r1 = this;
            java.util.List r0 = r1.Ah()
            return r0
    }
}
