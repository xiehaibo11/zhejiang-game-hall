package com.ss.android.socialbase.appdownloader.c;

public class rg {
    private static final java.util.HashMap<java.lang.String, com.ss.android.socialbase.appdownloader.fw.rg> rg = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.ss.android.socialbase.appdownloader.c.rg.rg = r0
            return
    }

    private static com.ss.android.socialbase.appdownloader.fw.rg df(java.lang.String r3) {
            java.util.HashMap<java.lang.String, com.ss.android.socialbase.appdownloader.fw$rg> r0 = com.ss.android.socialbase.appdownloader.c.rg.rg
            boolean r0 = r0.containsKey(r3)
            r1 = 0
            if (r0 == 0) goto L15
            java.util.HashMap<java.lang.String, com.ss.android.socialbase.appdownloader.fw$rg> r0 = com.ss.android.socialbase.appdownloader.c.rg.rg
            java.lang.Object r3 = r0.get(r3)
            com.ss.android.socialbase.appdownloader.fw$rg r3 = (com.ss.android.socialbase.appdownloader.fw.rg) r3
            if (r3 == 0) goto L21
            r1 = r3
            goto L21
        L15:
            com.ss.android.socialbase.appdownloader.fw$rg r0 = com.ss.android.socialbase.appdownloader.fw.df(r3)
            java.util.HashMap<java.lang.String, com.ss.android.socialbase.appdownloader.fw$rg> r2 = com.ss.android.socialbase.appdownloader.c.rg.rg
            r2.put(r3, r0)
            if (r0 == 0) goto L21
            r1 = r0
        L21:
            return r1
    }

    private static boolean df(org.json.JSONArray r4, java.lang.String r5) {
            r0 = 0
            if (r4 == 0) goto L20
            if (r5 != 0) goto L6
            goto L20
        L6:
            int r1 = r4.length()
            r2 = r0
        Lb:
            if (r2 >= r1) goto L20
            java.lang.String r3 = r4.optString(r2)
            java.lang.String r3 = r3.trim()
            boolean r3 = r5.equalsIgnoreCase(r3)
            if (r3 == 0) goto L1d
            r4 = 1
            return r4
        L1d:
            int r2 = r2 + 1
            goto Lb
        L20:
            return r0
    }

    public static boolean df(org.json.JSONObject r6) {
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = "allow_os_api_range"
            java.lang.String r2 = r6.optString(r2)
            r3 = -1
            java.lang.String r4 = "min_os_api"
            int r6 = r6.optInt(r4, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            if (r3 != 0) goto L3f
            java.lang.String r6 = "[-,]"
            java.lang.String[] r6 = r2.split(r6)     // Catch: java.lang.Exception -> L3a
            r2 = r4
        L21:
            int r3 = r6.length     // Catch: java.lang.Exception -> L3a
            if (r2 >= r3) goto L3e
            r3 = r6[r2]     // Catch: java.lang.Exception -> L3a
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L3a
            int r5 = r2 + 1
            r5 = r6[r5]     // Catch: java.lang.Exception -> L3a
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L3a
            if (r1 < r3) goto L37
            if (r1 > r5) goto L37
            return r0
        L37:
            int r2 = r2 + 2
            goto L21
        L3a:
            r6 = move-exception
            r6.printStackTrace()
        L3e:
            return r4
        L3f:
            if (r6 <= 0) goto L45
            if (r1 < r6) goto L44
            goto L45
        L44:
            r0 = r4
        L45:
            return r0
    }

    public static boolean q(org.json.JSONObject r2) {
            r0 = 1
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = com.ss.android.socialbase.appdownloader.c.pp.rg()
            if (r1 == 0) goto Lb
            return r0
        Lb:
            java.lang.String r1 = "scy_mode"
            int r2 = r2.optInt(r1)
            if (r2 == r0) goto L14
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    public static com.ss.android.socialbase.appdownloader.fw.rg rg(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L15
            com.ss.android.socialbase.appdownloader.fw$rg r2 = df(r2)     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L15
            return r2
        L15:
            return r1
    }

    public static boolean rg(org.json.JSONArray r12) {
            r0 = 1
            if (r12 != 0) goto L4
            return r0
        L4:
            int r1 = r12.length()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            r0 = 0
            r2 = r0
            r3 = r2
        Le:
            if (r2 >= r1) goto L60
            org.json.JSONObject r4 = r12.optJSONObject(r2)
            if (r4 == 0) goto L5d
            java.lang.String r5 = "package_names"
            java.lang.String r5 = r4.optString(r5)
            java.lang.String r6 = "version_allow"
            org.json.JSONArray r6 = r4.optJSONArray(r6)
            java.lang.String r7 = "version_block"
            org.json.JSONArray r7 = r4.optJSONArray(r7)
            java.lang.String r8 = "allow_version_range"
            java.lang.String r4 = r4.optString(r8)
            boolean r8 = android.text.TextUtils.isEmpty(r5)
            if (r8 == 0) goto L35
            return r0
        L35:
            java.lang.String r8 = ","
            java.lang.String[] r5 = r5.split(r8)
            int r8 = r5.length
            r9 = r0
        L3d:
            if (r9 >= r8) goto L5d
            r10 = r5[r9]
            java.lang.String r11 = "market"
            boolean r11 = r11.equals(r10)
            if (r11 == 0) goto L4d
            java.lang.String r10 = com.ss.android.socialbase.appdownloader.c.pt.rz()
        L4d:
            com.ss.android.socialbase.appdownloader.fw$rg r10 = df(r10)
            if (r10 == 0) goto L5a
            boolean r3 = rg(r6, r7, r4, r10)
            if (r3 != 0) goto L5a
            return r0
        L5a:
            int r9 = r9 + 1
            goto L3d
        L5d:
            int r2 = r2 + 1
            goto Le
        L60:
            return r3
    }

    public static boolean rg(org.json.JSONArray r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L2e
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto La
            goto L2e
        La:
            int r1 = r5.length()
            r2 = r0
        Lf:
            if (r2 >= r1) goto L2e
            org.json.JSONObject r3 = r5.optJSONObject(r2)
            if (r3 == 0) goto L2b
            java.lang.String r4 = "type"
            java.lang.String r4 = r3.optString(r4)
            boolean r4 = r6.equals(r4)
            if (r4 == 0) goto L2b
            boolean r3 = rg(r3)
            if (r3 == 0) goto L2b
            r5 = 1
            return r5
        L2b:
            int r2 = r2 + 1
            goto Lf
        L2e:
            return r0
    }

    private static boolean rg(org.json.JSONArray r4, org.json.JSONArray r5, java.lang.String r6, com.ss.android.socialbase.appdownloader.fw.rg r7) {
            java.lang.String r0 = r7.fw()
            int r7 = r7.c()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            java.lang.String r2 = "_"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L49
            java.lang.String r4 = "[-,]"
            java.lang.String[] r4 = r6.split(r4)     // Catch: java.lang.Exception -> L44
            r5 = r2
        L2b:
            int r6 = r4.length     // Catch: java.lang.Exception -> L44
            if (r5 >= r6) goto L67
            r6 = r4[r5]     // Catch: java.lang.Exception -> L44
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L44
            int r0 = r5 + 1
            r0 = r4[r0]     // Catch: java.lang.Exception -> L44
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L44
            if (r7 < r6) goto L41
            if (r7 > r0) goto L41
            return r3
        L41:
            int r5 = r5 + 2
            goto L2b
        L44:
            r4 = move-exception
            r4.printStackTrace()
            goto L67
        L49:
            if (r4 == 0) goto L58
            int r6 = r4.length()
            if (r6 <= 0) goto L58
            boolean r4 = df(r4, r0)
            if (r4 == 0) goto L67
            return r3
        L58:
            if (r5 == 0) goto L67
            int r4 = r5.length()
            if (r4 <= 0) goto L67
            boolean r4 = df(r5, r0)
            if (r4 != 0) goto L67
            return r3
        L67:
            return r2
    }

    public static boolean rg(org.json.JSONObject r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "device_requirements"
            org.json.JSONArray r1 = r3.optJSONArray(r1)
            boolean r2 = df(r3)
            if (r2 == 0) goto L1d
            boolean r1 = rg(r1)
            if (r1 == 0) goto L1d
            boolean r3 = q(r3)
            if (r3 == 0) goto L1d
            r0 = 1
        L1d:
            return r0
    }

    public static boolean rg(org.json.JSONObject r4, android.content.Context r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L43
            if (r5 == 0) goto L43
            if (r4 != 0) goto Lc
            goto L43
        Lc:
            java.lang.String r0 = "s"
            java.lang.String r0 = r4.optString(r0)
            java.lang.String r2 = "az"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.q.rg(r2, r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "ba"
            java.lang.String r4 = r4.optString(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r4 = com.ss.android.socialbase.appdownloader.c.q.rg(r4, r0)     // Catch: java.lang.Exception -> L43
            java.lang.Class<android.content.ContextWrapper> r0 = android.content.ContextWrapper.class
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)     // Catch: java.lang.Exception -> L43
            r2 = 1
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L43
            java.lang.Object r5 = r0.get(r5)     // Catch: java.lang.Exception -> L43
            java.lang.Class r0 = r5.getClass()     // Catch: java.lang.Exception -> L43
            java.lang.reflect.Field r4 = r0.getDeclaredField(r4)     // Catch: java.lang.Exception -> L43
            r4.setAccessible(r2)     // Catch: java.lang.Exception -> L43
            r4.set(r5, r6)     // Catch: java.lang.Exception -> L43
            return r2
        L43:
            return r1
    }
}
