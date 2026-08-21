package com.bykv.vk.openvk.api.plugin.df;

public class df {
    public static java.lang.String df() {
            r0 = 8
            java.lang.String r0 = rg(r0)
            if (r0 == 0) goto L10
            int r1 = r0.length()
            r2 = 16
            if (r1 == r2) goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    private static java.security.SecureRandom q() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L11
            java.security.SecureRandom r0 = java.security.SecureRandom.getInstanceStrong()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            return r0
        L11:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            return r0
    }

    public static java.lang.String rg() {
            r0 = 16
            java.lang.String r0 = rg(r0)
            if (r0 == 0) goto L10
            int r1 = r0.length()
            r2 = 32
            if (r1 == r2) goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public static java.lang.String rg(int r1) {
            java.security.SecureRandom r0 = q()
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> Le
            r0.nextBytes(r1)     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = com.bykv.vk.openvk.api.plugin.df.q.rg(r1)     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = 0
            return r1
    }

    @com.bytedance.JProtect
    public static java.lang.String rg(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return r4
        L7:
            java.lang.String r0 = rg()
            r1 = 32
            java.lang.String r1 = rg(r0, r1)
            java.lang.String r2 = df()
            r3 = 0
            if (r1 == 0) goto L1e
            if (r2 == 0) goto L1e
            java.lang.String r3 = com.bykv.vk.openvk.api.plugin.df.rg.rg(r4, r2, r1)
        L1e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r1 = 3
            r4.append(r1)
            r4.append(r0)
            r4.append(r2)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            return r4
    }

    public static java.lang.String rg(java.lang.String r2, int r3) {
            if (r2 == 0) goto L24
            int r0 = r2.length()
            if (r0 == r3) goto L9
            goto L24
        L9:
            int r0 = r3 / 2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r2.substring(r0, r3)
            r1.append(r3)
            r3 = 0
            java.lang.String r2 = r2.substring(r3, r0)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            return r2
        L24:
            r2 = 0
            return r2
    }

    @com.bytedance.JProtect
    public static org.json.JSONObject rg(org.json.JSONObject r6) {
            java.lang.String r0 = "cypher"
            java.lang.String r1 = "message"
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            if (r6 != 0) goto Lc
            return r2
        Lc:
            r3 = 0
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = rg(r4)     // Catch: java.lang.Throwable -> L2e
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2e
            if (r5 != 0) goto L23
            r2.put(r1, r4)     // Catch: java.lang.Throwable -> L2e
            r4 = 3
            r2.put(r0, r4)     // Catch: java.lang.Throwable -> L2e
            goto L38
        L23:
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L2e
            r2.put(r1, r4)     // Catch: java.lang.Throwable -> L2e
            r2.put(r0, r3)     // Catch: java.lang.Throwable -> L2e
            goto L38
        L2e:
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L38
            r2.put(r1, r6)     // Catch: java.lang.Throwable -> L38
            r2.put(r0, r3)     // Catch: java.lang.Throwable -> L38
        L38:
            return r2
    }
}
