package com.kwad.sdk.core.config.item;

public final class j extends com.kwad.sdk.core.config.item.b<com.kwad.sdk.core.config.item.j.a> {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int amF;
        public int amG;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 180000(0x2bf20, float:2.52234E-40)
                r1.amF = r0
                r0 = 90000(0x15f90, float:1.26117E-40)
                r1.amG = r0
                return
        }
    }

    public j(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.config.item.j$a r0 = new com.kwad.sdk.core.config.item.j$a
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    @Override
    public final void a(android.content.SharedPreferences r6) {
            r5 = this;
            java.lang.Object r0 = r5.getValue()
            com.kwad.sdk.core.config.item.j$a r0 = (com.kwad.sdk.core.config.item.j.a) r0
            if (r0 != 0) goto Ld
            com.kwad.sdk.core.config.item.j$a r0 = new com.kwad.sdk.core.config.item.j$a
            r0.<init>()
        Ld:
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            java.lang.String r3 = r5.getKey()     // Catch: org.json.JSONException -> L1f
            java.lang.String r4 = ""
            java.lang.String r6 = r6.getString(r3, r4)     // Catch: org.json.JSONException -> L1f
            r2.<init>(r6)     // Catch: org.json.JSONException -> L1f
            r1 = r2
            goto L23
        L1f:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
        L23:
            if (r1 == 0) goto L28
            r0.parseJson(r1)
        L28:
            r5.setValue(r0)
            return
    }

    @Override
    public final void b(android.content.SharedPreferences.Editor r3) {
            r2 = this;
            java.lang.Object r0 = r2.getValue()
            if (r0 == 0) goto L28
            java.lang.Object r0 = r2.getValue()
            com.kwad.sdk.core.config.item.j$a r0 = (com.kwad.sdk.core.config.item.j.a) r0
            org.json.JSONObject r0 = r0.toJson()
            if (r0 == 0) goto L28
            java.lang.String r0 = r2.getKey()
            java.lang.Object r1 = r2.getValue()
            com.kwad.sdk.core.config.item.j$a r1 = (com.kwad.sdk.core.config.item.j.a) r1
            org.json.JSONObject r1 = r1.toJson()
            java.lang.String r1 = r1.toString()
        L24:
            r3.putString(r0, r1)
            return
        L28:
            java.lang.String r0 = r2.getKey()
            java.lang.String r1 = ""
            goto L24
    }

    @Override
    public final void g(org.json.JSONObject r2) {
            r1 = this;
            if (r2 == 0) goto L18
            java.lang.String r0 = r1.getKey()
            org.json.JSONObject r2 = r2.optJSONObject(r0)
            if (r2 == 0) goto L18
            com.kwad.sdk.core.config.item.j$a r0 = new com.kwad.sdk.core.config.item.j$a
            r0.<init>()
            r0.parseJson(r2)
            r1.setValue(r0)
            return
        L18:
            java.lang.Object r2 = r1.zZ()
            r1.setValue(r2)
            return
    }
}
