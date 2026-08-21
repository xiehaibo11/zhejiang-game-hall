package com.mbridge.msdk.splash.a.a;

public class a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.splash.a.a.a> r0 = com.mbridge.msdk.splash.a.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.splash.a.a.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx a(java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10) {
            java.lang.String r0 = "deep_link"
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L9
            return r10
        L9:
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L15
            if (r10 == 0) goto L12
            goto L15
        L12:
            r10 = 0
            goto L15f
        L15:
            java.lang.String r1 = "notice"
            boolean r1 = r9.contains(r1)
            java.lang.String r2 = "unitId"
            if (r1 != 0) goto L11c
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r10)     // Catch: java.lang.Throwable -> L15f
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: java.lang.Throwable -> L15f
            if (r1 != 0) goto L2a
            r1 = r10
        L2a:
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L15f
            if (r3 != 0) goto L11a
            java.lang.String r0 = r0.optString(r2)     // Catch: java.lang.Throwable -> L15f
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L15f
            if (r2 != 0) goto L3d
            r1.setCampaignUnitId(r0)     // Catch: java.lang.Throwable -> L15f
        L3d:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L15f
            r0.<init>(r9)     // Catch: java.lang.Throwable -> L15f
            java.lang.String r9 = com.mbridge.msdk.foundation.same.a.p     // Catch: java.lang.Throwable -> L15f
            org.json.JSONObject r9 = r0.optJSONObject(r9)     // Catch: java.lang.Throwable -> L15f
            r0 = -999(0xfffffffffffffc19, float:NaN)
            java.lang.String r2 = "-999"
            if (r9 == 0) goto L9b
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.n
            java.lang.String r3 = r9.getString(r3)
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.o
            java.lang.String r4 = r9.getString(r4)
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 == 0) goto L61
            r3 = r2
        L61:
            int r3 = java.lang.Integer.parseInt(r3)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L6c
            r4 = r2
        L6c:
            int r4 = java.lang.Integer.parseInt(r4)
            if (r3 == r0) goto L84
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            float r3 = (float) r3
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r5, r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            goto L85
        L84:
            r3 = r2
        L85:
            if (r4 == r0) goto L99
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            float r4 = (float) r4
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            goto L9d
        L99:
            r4 = r2
            goto L9d
        L9b:
            r3 = r2
            r4 = r3
        L9d:
            java.lang.String r5 = r1.getClickURL()
            java.lang.String r3 = com.mbridge.msdk.click.c.a(r5, r3, r4)
            r1.setClickURL(r3)
            java.lang.String r3 = r1.getNoticeUrl()
            if (r9 == 0) goto L11a
            java.util.Iterator r4 = r9.keys()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
        Lb7:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L108
            java.lang.String r6 = "&"
            r5.append(r6)
            java.lang.Object r6 = r4.next()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r7 = r9.optString(r6)
            java.lang.String r8 = com.mbridge.msdk.foundation.same.a.n
            boolean r8 = r8.equals(r6)
            if (r8 != 0) goto Ldc
            java.lang.String r8 = com.mbridge.msdk.foundation.same.a.o
            boolean r8 = r8.equals(r6)
            if (r8 == 0) goto Lfc
        Ldc:
            boolean r8 = android.text.TextUtils.isEmpty(r7)
            if (r8 == 0) goto Le3
            r7 = r2
        Le3:
            int r7 = java.lang.Integer.parseInt(r7)
            if (r7 == r0) goto Lfb
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            float r7 = (float) r7
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r8, r7)
            java.lang.String r7 = java.lang.String.valueOf(r7)
            goto Lfc
        Lfb:
            r7 = r2
        Lfc:
            r5.append(r6)
            java.lang.String r6 = "="
            r5.append(r6)
            r5.append(r7)
            goto Lb7
        L108:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r3)
            r9.append(r5)
            java.lang.String r9 = r9.toString()
            r1.setNoticeUrl(r9)
        L11a:
            r10 = r1
            goto L15f
        L11c:
            org.json.JSONObject r1 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r10)     // Catch: org.json.JSONException -> L15b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15b
            r3.<init>(r9)     // Catch: org.json.JSONException -> L15b
            boolean r9 = r3.has(r0)     // Catch: java.lang.Exception -> L130 org.json.JSONException -> L15b
            if (r9 != 0) goto L130
            java.lang.String r9 = ""
            r1.put(r0, r9)     // Catch: java.lang.Exception -> L130 org.json.JSONException -> L15b
        L130:
            java.util.Iterator r9 = r3.keys()     // Catch: org.json.JSONException -> L15b
        L134:
            boolean r0 = r9.hasNext()     // Catch: org.json.JSONException -> L15b
            if (r0 == 0) goto L148
            java.lang.Object r0 = r9.next()     // Catch: org.json.JSONException -> L15b
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L15b
            java.lang.String r4 = r3.getString(r0)     // Catch: org.json.JSONException -> L15b
            r1.put(r0, r4)     // Catch: org.json.JSONException -> L15b
            goto L134
        L148:
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r1)     // Catch: org.json.JSONException -> L15b
            java.lang.String r0 = r1.optString(r2)     // Catch: org.json.JSONException -> L15b
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L15b
            if (r1 != 0) goto L159
            r9.setCampaignUnitId(r0)     // Catch: org.json.JSONException -> L15b
        L159:
            r10 = r9
            goto L15f
        L15b:
            r9 = move-exception
            r9.printStackTrace()
        L15f:
            return r10
    }

    public static java.lang.String a() {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            java.util.List r2 = r2.i()     // Catch: java.lang.Exception -> L3a
            if (r2 == 0) goto L2f
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3a
            if (r3 <= 0) goto L2f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L3a
        L1b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L3a
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L3a
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L3a
            r1.put(r3)     // Catch: java.lang.Exception -> L3a
            goto L1b
        L2f:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L3a
            if (r2 <= 0) goto L3e
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            return r0
    }

    public static java.lang.String a(int r4, float r5, float r6) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L70
            r1.<init>()     // Catch: java.lang.Exception -> L70
            r2 = 4
            if (r4 != r2) goto L1a
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.n     // Catch: java.lang.Exception -> L70
            r6 = -999(0xfffffffffffffc19, float:NaN)
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.o     // Catch: java.lang.Exception -> L70
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
            goto L3c
        L1a:
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.n     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L70
            int r5 = com.mbridge.msdk.foundation.tools.ae.a(r3, r5)     // Catch: java.lang.Exception -> L70
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.o     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L70
            int r6 = com.mbridge.msdk.foundation.tools.ae.a(r2, r6)     // Catch: java.lang.Exception -> L70
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L70
        L3c:
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.q     // Catch: java.lang.Exception -> L70
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L70
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L70
            android.content.res.Configuration r4 = r4.getConfiguration()     // Catch: java.lang.Exception -> L70
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.r     // Catch: java.lang.Exception -> L70
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.s     // Catch: java.lang.Exception -> L70
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L70
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L70
            float r5 = com.mbridge.msdk.foundation.tools.ae.d(r5)     // Catch: java.lang.Exception -> L70
            double r5 = (double) r5     // Catch: java.lang.Exception -> L70
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.p     // Catch: java.lang.Exception -> L70
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L70
            goto L74
        L70:
            r4 = move-exception
            r4.printStackTrace()
        L74:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = ""
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L17
            r1.a()     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = r1.a(r2)     // Catch: java.lang.Exception -> L17
            r0 = r1
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()
        L1b:
            return r0
    }
}
