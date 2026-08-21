package com.kwad.sdk.core.config.item;

public final class g extends com.kwad.sdk.core.config.item.a<java.lang.Float> {
    public g(java.lang.String r1, float r2) {
            r0 = this;
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r0.<init>(r1, r2)
            return
    }

    public final java.lang.Float Ad() {
            r1 = this;
            java.lang.Object r0 = super.getValue()
            java.lang.Float r0 = (java.lang.Float) r0
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.zZ()
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            float r3 = r3.getFloat(r0, r1)
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            r2.setValue(r3)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.String r0 = r2.getKey()
            java.lang.Float r1 = r2.Ad()
            float r1 = r1.floatValue()
            r3.putFloat(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r4) {
            r3 = this;
            if (r4 == 0) goto L1e
            java.lang.String r0 = r3.getKey()
            java.lang.Object r1 = r3.zZ()
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            double r1 = (double) r1
            double r0 = r4.optDouble(r0, r1)
            float r4 = (float) r0
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
        L1a:
            r3.setValue(r4)
            return
        L1e:
            java.lang.Object r4 = r3.zZ()
            goto L1a
    }

    @Override
    public final java.lang.Object getValue() {
            r1 = this;
            java.lang.Float r0 = r1.Ad()
            return r0
    }
}
