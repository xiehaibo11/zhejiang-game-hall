package com.kuaishou.weapon.p0.jni;

public class A {
    private static int flag;
    private static org.json.JSONArray jsonObject;

    public A(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>()
            com.kuaishou.weapon.p0.jni.A.flag = r2
            boolean r2 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r2 == 0) goto L11
            com.kuaishou.weapon.p0.jni.Engine r1 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r1)
            r1.qrs()
            return
        L11:
            setA(r1)
            return
    }

    public static java.lang.String getE(java.lang.String r2) {
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a()     // Catch: java.lang.Exception -> Ld
            if (r0 == 0) goto Ld
            java.lang.String r1 = ""
            java.lang.String r2 = r0.a(r2, r1)     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            r2 = 0
            return r2
    }

    public static org.json.JSONArray getJsonObject() {
            org.json.JSONArray r0 = com.kuaishou.weapon.p0.jni.A.jsonObject
            return r0
    }

    public static void setA(android.content.Context r1) {
            if (r1 == 0) goto Lf
            com.kuaishou.weapon.p0.w r0 = new com.kuaishou.weapon.p0.w
            r0.<init>(r1)
            int r1 = com.kuaishou.weapon.p0.jni.A.flag
            org.json.JSONArray r1 = r0.b(r1)
            com.kuaishou.weapon.p0.jni.A.jsonObject = r1
        Lf:
            return
    }

    public static void setE(java.lang.String r1, java.lang.String r2) {
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a()     // Catch: java.lang.Exception -> L9
            if (r0 == 0) goto L9
            r0.b(r1, r2)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }

    public static void setJsonObject(org.json.JSONArray r0) {
            com.kuaishou.weapon.p0.jni.A.jsonObject = r0
            return
    }
}
