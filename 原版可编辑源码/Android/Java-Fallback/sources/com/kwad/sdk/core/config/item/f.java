package com.kwad.sdk.core.config.item;

public final class f extends com.kwad.sdk.core.config.item.a<java.lang.Double> {
    public f(java.lang.String r1, java.lang.Double r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private java.lang.Double Ac() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.Double r0 = (java.lang.Double) r0
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Double r1 = (java.lang.Double) r1
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = r3.getString(r0, r1)
            double r0 = java.lang.Double.parseDouble(r3)
            java.lang.Double r3 = java.lang.Double.valueOf(r0)
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Double r1 = r2.Ac()
            java.lang.String r1 = r1.toString()
            r3.putString(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r4) {
            r3 = this;
            if (r4 == 0) goto L1c
            java.lang.String r0 = r3.getKey()
            java.lang.Object r1 = r3.zZ()
            java.lang.Double r1 = (java.lang.Double) r1
            double r1 = r1.doubleValue()
            double r0 = r4.optDouble(r0, r1)
            java.lang.Double r4 = java.lang.Double.valueOf(r0)
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
            java.lang.Double r0 = r1.Ac()
            return r0
    }
}
