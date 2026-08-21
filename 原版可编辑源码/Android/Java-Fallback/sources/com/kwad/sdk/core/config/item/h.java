package com.kwad.sdk.core.config.item;

public final class h extends com.kwad.sdk.core.config.item.b<com.kwad.sdk.core.config.item.h.a> {

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String amD;
        public java.lang.String amE;

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.amD = r0
                r1.amE = r0
                return
        }
    }

    public h() {
            r2 = this;
            com.kwad.sdk.core.config.item.h$a r0 = new com.kwad.sdk.core.config.item.h$a
            r0.<init>()
            java.lang.String r1 = "idMapping"
            r2.<init>(r1, r0)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r4) {
            r3 = this;
            java.lang.Object r0 = r3.getValue()
            com.kwad.sdk.core.config.item.h$a r0 = (com.kwad.sdk.core.config.item.h.a) r0
            if (r0 != 0) goto Ld
            com.kwad.sdk.core.config.item.h$a r0 = new com.kwad.sdk.core.config.item.h$a
            r0.<init>()
        Ld:
            java.lang.String r1 = r3.getKey()
            java.lang.String r2 = ""
            java.lang.String r4 = r4.getString(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L2e
            java.lang.String r4 = cx(r4)     // Catch: org.json.JSONException -> L2a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2a
            r1.<init>(r4)     // Catch: org.json.JSONException -> L2a
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L2a
            goto L2e
        L2a:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L2e:
            r3.setValue(r0)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.h$a r0 = (com.kwad.sdk.core.config.item.h.a) r0
            org.json.JSONObject r0 = r0.toJson()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.h$a r0 = (com.kwad.sdk.core.config.item.h.a) r0
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = cw(r0)
            java.lang.String r1 = r2.getKey()
            r3.putString(r1, r0)
            return
        L2c:
            java.lang.String r0 = r2.getKey()
            java.lang.String r1 = ""
            r3.putString(r0, r1)
            return
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.config.item.h$a r0 = new com.kwad.sdk.core.config.item.h$a
            r0.<init>()
            r0.parseJson(r2)
            r1.setValue(r0)
            return
    }

    public final java.lang.String getImei() {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.h$a r0 = (com.kwad.sdk.core.config.item.h.a) r0
            if (r0 == 0) goto L13
            java.lang.String r1 = r0.amD
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L13
            java.lang.String r0 = r0.amD
            return r0
        L13:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String getOaid() {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.h$a r0 = (com.kwad.sdk.core.config.item.h.a) r0
            if (r0 == 0) goto L13
            java.lang.String r1 = r0.amE
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L13
            java.lang.String r0 = r0.amE
            return r0
        L13:
            java.lang.String r0 = ""
            return r0
    }
}
