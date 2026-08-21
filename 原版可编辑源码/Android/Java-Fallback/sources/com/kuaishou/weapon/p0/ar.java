package com.kuaishou.weapon.p0;

public class ar {
    private org.json.JSONObject a;

    public ar(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L22
            com.kuaishou.weapon.p0.jni.Engine r0 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r3)     // Catch: java.lang.Throwable -> L22
            r1 = 56
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = r0.klm(r1, r3)     // Catch: java.lang.Throwable -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L22
            r2.a = r0     // Catch: java.lang.Throwable -> L22
        L22:
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
}
