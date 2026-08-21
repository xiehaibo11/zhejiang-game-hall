package com.kuaishou.weapon.p0;

public class au {
    private org.json.JSONObject a;
    private boolean b;

    public au(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L2b
            com.kuaishou.weapon.p0.jni.Engine r5 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r5)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.g     // Catch: java.lang.Throwable -> L2b
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L2b
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L2b
            r1 = 0
            r2 = 200(0xc8, float:2.8E-43)
            java.lang.String r3 = ""
            java.lang.String r5 = r5.pqr(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L2b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2b
            r4.a = r0     // Catch: java.lang.Throwable -> L2b
        L2b:
            return
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public java.util.List b(java.lang.String r6) {
            r5 = this;
            org.json.JSONObject r0 = r5.a
            if (r0 == 0) goto L49
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Exception -> L49
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L49
            if (r0 != 0) goto L49
            int r0 = r6.length()     // Catch: java.lang.Exception -> L49
            r1 = 3
            if (r0 <= r1) goto L49
            java.lang.String r0 = "0805"
            java.lang.String r1 = "98bb0a15913e0654348b"
            java.lang.String r0 = com.kuaishou.weapon.p0.i.a(r1, r0)     // Catch: java.lang.Exception -> L49
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L49
            r1.<init>(r6)     // Catch: java.lang.Exception -> L49
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Exception -> L49
            r6.<init>()     // Catch: java.lang.Exception -> L49
            r2 = 0
        L28:
            int r3 = r1.length()     // Catch: java.lang.Exception -> L49
            if (r2 >= r3) goto L42
            java.lang.String r3 = r1.getString(r2)     // Catch: java.lang.Exception -> L49
            boolean r4 = r3.contains(r0)     // Catch: java.lang.Exception -> L49
            if (r4 == 0) goto L3c
            r3 = 1
            r5.b = r3     // Catch: java.lang.Exception -> L49
            goto L3f
        L3c:
            r6.add(r3)     // Catch: java.lang.Exception -> L49
        L3f:
            int r2 = r2 + 1
            goto L28
        L42:
            int r0 = r6.size()     // Catch: java.lang.Exception -> L49
            if (r0 <= 0) goto L49
            return r6
        L49:
            r6 = 0
            return r6
    }
}
