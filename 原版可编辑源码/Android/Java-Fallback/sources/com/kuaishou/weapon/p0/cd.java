package com.kuaishou.weapon.p0;

public class cd {
    private org.json.JSONObject a;

    public cd(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L1b
            com.kuaishou.weapon.p0.jni.Engine.getInstance(r2)
            java.lang.String r2 = com.kuaishou.weapon.p0.jni.Engine.abc()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b
            r1.a = r0     // Catch: java.lang.Exception -> L1b
        L1b:
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
