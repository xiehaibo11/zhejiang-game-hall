package com.bianfeng.seppellita.utils;

public class CheckKeyUtils {
    private static java.lang.String[] keys;

    static {
            java.lang.String r0 = "act"
            java.lang.String r1 = "pg"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.bianfeng.seppellita.utils.CheckKeyUtils.keys = r0
            return
    }

    public CheckKeyUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean check(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.Map r6 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.getMap(r6)     // Catch: java.lang.Exception -> L3a
            java.lang.String[] r0 = com.bianfeng.seppellita.utils.CheckKeyUtils.keys     // Catch: java.lang.Exception -> L3a
            int r2 = r0.length     // Catch: java.lang.Exception -> L3a
            r3 = r1
        L10:
            if (r3 >= r2) goto L38
            r4 = r0[r3]     // Catch: java.lang.Exception -> L3a
            java.lang.Object r5 = r6.get(r4)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L3a
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L3a
            if (r5 == 0) goto L35
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            r6.<init>()     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = "key--->"
            r6.append(r0)     // Catch: java.lang.Exception -> L3a
            r6.append(r4)     // Catch: java.lang.Exception -> L3a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L3a
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r6)     // Catch: java.lang.Exception -> L3a
            return r1
        L35:
            int r3 = r3 + 1
            goto L10
        L38:
            r6 = 1
            return r6
        L3a:
            r6 = move-exception
            r6.printStackTrace()
            return r1
    }

    public static boolean check(java.util.Map<java.lang.String, java.lang.String> r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.String[] r1 = com.bianfeng.seppellita.utils.CheckKeyUtils.keys     // Catch: java.lang.Exception -> L32
            int r2 = r1.length     // Catch: java.lang.Exception -> L32
            r3 = r0
        L8:
            if (r3 >= r2) goto L30
            r4 = r1[r3]     // Catch: java.lang.Exception -> L32
            java.lang.Object r5 = r6.get(r4)     // Catch: java.lang.Exception -> L32
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L32
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L32
            if (r5 == 0) goto L2d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L32
            r6.<init>()     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "缺失的字段--->"
            r6.append(r1)     // Catch: java.lang.Exception -> L32
            r6.append(r4)     // Catch: java.lang.Exception -> L32
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L32
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r6)     // Catch: java.lang.Exception -> L32
            return r0
        L2d:
            int r3 = r3 + 1
            goto L8
        L30:
            r6 = 1
            return r6
        L32:
            return r0
    }
}
