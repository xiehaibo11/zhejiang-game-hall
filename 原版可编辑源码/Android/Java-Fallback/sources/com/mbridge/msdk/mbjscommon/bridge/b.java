package com.mbridge.msdk.mbjscommon.bridge;

public class b {
    public static final java.lang.String a = null;
    public static int b;
    public static int c;


    static {
            java.lang.Class<com.mbridge.msdk.mbjscommon.bridge.b> r0 = com.mbridge.msdk.mbjscommon.bridge.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbjscommon.bridge.b.a = r0
            r0 = 0
            com.mbridge.msdk.mbjscommon.bridge.b.b = r0
            r0 = 1
            com.mbridge.msdk.mbjscommon.bridge.b.c = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(float r4, float r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L61
            r1.<init>()     // Catch: java.lang.Exception -> L61
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.n     // Catch: java.lang.Exception -> L61
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L61
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L61
            int r4 = com.mbridge.msdk.foundation.tools.ae.a(r3, r4)     // Catch: java.lang.Exception -> L61
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.o     // Catch: java.lang.Exception -> L61
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L61
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L61
            int r5 = com.mbridge.msdk.foundation.tools.ae.a(r2, r5)     // Catch: java.lang.Exception -> L61
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.q     // Catch: java.lang.Exception -> L61
            r5 = 0
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L61
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L61
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L61
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L61
            android.content.res.Configuration r4 = r4.getConfiguration()     // Catch: java.lang.Exception -> L61
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L61
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.r     // Catch: java.lang.Exception -> L61
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.s     // Catch: java.lang.Exception -> L61
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L61
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L61
            float r5 = com.mbridge.msdk.foundation.tools.ae.d(r5)     // Catch: java.lang.Exception -> L61
            double r2 = (double) r5     // Catch: java.lang.Exception -> L61
            r1.put(r4, r2)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.p     // Catch: java.lang.Exception -> L61
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L61
            goto L65
        L61:
            r4 = move-exception
            r4.printStackTrace()
        L65:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String a(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L28
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L21
            r0 = r3
            goto L28
        L21:
            java.lang.String r3 = com.mbridge.msdk.mbjscommon.bridge.b.a
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
        L28:
            return r0
    }

    public static void a(java.lang.Object r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.bridge.b.c     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L30
            goto L3a
        L30:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.mbjscommon.bridge.b.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L3a:
            return
    }

    public static void a(java.lang.Object r4, org.json.JSONObject r5) {
            java.lang.String r0 = "data"
            org.json.JSONObject r5 = r5.optJSONObject(r0)     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto Le
            java.lang.String r5 = "data is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L69
            return
        Le:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r5)     // Catch: java.lang.Throwable -> L69
            if (r5 != 0) goto L1a
            java.lang.String r5 = "data camapign is empty"
            a(r4, r5)     // Catch: java.lang.Throwable -> L69
            return
        L1a:
            java.lang.Thread r1 = new java.lang.Thread     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.mbjscommon.bridge.b$1 r2 = new com.mbridge.msdk.mbjscommon.bridge.b$1     // Catch: java.lang.Throwable -> L69
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L69
            r1.start()     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r2 = "code"
            int r3 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r2.<init>()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r3 = "id"
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L57 java.lang.Throwable -> L69
            goto L71
        L57:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()     // Catch: java.lang.Throwable -> L69
            a(r4, r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a     // Catch: java.lang.Throwable -> L69
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L69
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)     // Catch: java.lang.Throwable -> L69
            goto L71
        L69:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            a(r4, r5)
        L71:
            return
    }

    static void a(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r0 = com.mbridge.msdk.foundation.same.a.d.h
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.getId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "banner"
            com.mbridge.msdk.foundation.same.a.d.a(r1, r2, r0)
        L13:
            return
    }
}
