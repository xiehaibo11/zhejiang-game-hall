package com.kuaishou.weapon.p0;

public class cb {
    private org.json.JSONObject a;

    public cb(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L22
            com.kuaishou.weapon.p0.jni.Engine.getInstance(r3)
            java.lang.String r3 = com.kuaishou.weapon.p0.jni.Engine.bcd()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L22
            int r0 = r3.length()
            r1 = 2
            if (r0 <= r1) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            r0.<init>(r3)     // Catch: java.lang.Exception -> L22
            r2.a = r0     // Catch: java.lang.Exception -> L22
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
