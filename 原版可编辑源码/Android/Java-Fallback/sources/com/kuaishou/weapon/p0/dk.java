package com.kuaishou.weapon.p0;

public class dk {
    public dk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a() {
            java.lang.String r0 = "LD_PRELOAD"
            java.lang.String r0 = java.lang.System.getenv(r0)     // Catch: java.lang.Exception -> L2e
            java.lang.String r1 = "LD_LIBRARY_PATH"
            java.lang.String r1 = java.lang.System.getenv(r1)     // Catch: java.lang.Exception -> L2e
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2e
            r2.<init>()     // Catch: java.lang.Exception -> L2e
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2e
            if (r3 != 0) goto L1c
            java.lang.String r3 = "0"
            r2.put(r3, r0)     // Catch: java.lang.Exception -> L2e
        L1c:
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2e
            if (r0 != 0) goto L27
            java.lang.String r0 = "1"
            r2.put(r0, r1)     // Catch: java.lang.Exception -> L2e
        L27:
            int r0 = r2.length()     // Catch: java.lang.Exception -> L2e
            if (r0 <= 0) goto L2e
            return r2
        L2e:
            r0 = 0
            return r0
    }

    public static int b() {
            java.lang.String r0 = com.kuaishou.weapon.p0.bj.a()     // Catch: java.lang.Exception -> L1c
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L1c
            if (r1 != 0) goto L1c
            java.lang.String r1 = "arm64"
            boolean r1 = r0.contains(r1)     // Catch: java.lang.Exception -> L1c
            if (r1 != 0) goto L1c
            java.lang.String r1 = "64"
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L1c
            if (r0 != 0) goto L1c
            r0 = 1
            return r0
        L1c:
            r0 = 0
            return r0
    }
}
