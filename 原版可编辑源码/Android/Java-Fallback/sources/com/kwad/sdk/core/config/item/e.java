package com.kwad.sdk.core.config.item;

public final class e extends com.kwad.sdk.core.config.item.b<org.json.JSONObject> {
    public e() {
            r2 = this;
            java.lang.String r0 = Ab()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r2.<init>(r0, r1)
            return
    }

    private static java.lang.String Ab() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto L13
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L13
            java.lang.String r0 = "commercialExternalReportConf"
            return r0
        L13:
            java.lang.String r0 = "commercialReportConf"
            return r0
    }

    @Override
    public final void a(android.content.SharedPreferences r6) {
            r5 = this;
            java.lang.Object r0 = r5.getValue()
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            if (r0 != 0) goto Ld
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        Ld:
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = r5.getKey()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = ""
            java.lang.String r6 = r6.getString(r3, r4)     // Catch: java.lang.Throwable -> L1e
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L1e
            r1 = r2
        L1e:
            if (r1 == 0) goto L21
            r0 = r1
        L21:
            r5.setValue(r0)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            if (r0 == 0) goto L18
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.getValue()
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            java.lang.String r1 = r1.toString()
        L14:
            r3.putString(r0, r1)
            return
        L18:
            java.lang.String r0 = r2.getKey()
            java.lang.String r1 = ""
            goto L14
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            if (r2 == 0) goto L10
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 == 0) goto L10
            r1.setValue(r2)
            return
        L10:
            java.lang.Object r2 = r1.zZ()
            r1.setValue(r2)
            return
    }
}
