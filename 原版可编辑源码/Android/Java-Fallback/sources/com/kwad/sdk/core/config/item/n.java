package com.kwad.sdk.core.config.item;

public final class n extends com.kwad.sdk.core.config.item.b<java.lang.String> {
    private static volatile java.lang.String[] amI;

    public n(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            com.kwad.sdk.core.config.item.n.amI = r1
            return
    }

    public static boolean Q(long r6) {
            java.lang.String[] r0 = com.kwad.sdk.core.config.item.n.amI
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String[] r0 = com.kwad.sdk.core.config.item.n.amI
            int r2 = r0.length
            r3 = r1
        La:
            if (r3 >= r2) goto L23
            r4 = r0[r3]
            if (r4 == 0) goto L20
            java.lang.String r5 = java.lang.String.valueOf(r6)
            java.lang.String r4 = r4.trim()
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L20
            r6 = 1
            return r6
        L20:
            int r3 = r3 + 1
            goto La
        L23:
            return r1
    }

    private static void cy(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Le
            java.lang.String r0 = ","
            java.lang.String[] r1 = r1.split(r0)
            com.kwad.sdk.core.config.item.n.amI = r1
        Le:
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r3.getString(r0, r1)
            r2.setValue(r3)
            cy(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r3.putString(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L17
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r3.optString(r0, r1)
            r2.setValue(r3)
            cy(r3)
            return
        L17:
            java.lang.Object r3 = r2.zZ()
            r2.setValue(r3)
            return
    }
}
