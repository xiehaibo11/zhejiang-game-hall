package com.kuaishou.weapon.p0;

public class dg {
    public dg() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.json.JSONArray a(org.json.JSONArray r3, org.json.JSONArray r4) {
            r2 = this;
            if (r3 == 0) goto L2d
            r0 = 0
            int r1 = r3.length()     // Catch: java.lang.Exception -> L2c
            if (r1 <= 0) goto L2d
            if (r4 == 0) goto L2d
            int r1 = r4.length()     // Catch: java.lang.Exception -> L2c
            if (r1 <= 0) goto L2d
            java.util.Set r1 = com.kuaishou.weapon.p0.dl.a(r3)     // Catch: java.lang.Exception -> L2c
            java.util.Set r4 = com.kuaishou.weapon.p0.dl.a(r4)     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L2d
            if (r4 == 0) goto L2d
            r1.removeAll(r4)     // Catch: java.lang.Exception -> L2c
            int r3 = r1.size()     // Catch: java.lang.Exception -> L2c
            if (r3 <= 0) goto L2c
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L2c
            r3.<init>(r1)     // Catch: java.lang.Exception -> L2c
            return r3
        L2c:
            return r0
        L2d:
            return r3
    }

    public org.json.JSONArray a(org.json.JSONObject r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L3c
            java.lang.String r3 = r3.getString(r4)     // Catch: java.lang.Exception -> L3c
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L3c
            if (r4 != 0) goto L3c
            int r4 = r3.length()     // Catch: java.lang.Exception -> L3c
            r0 = 2
            if (r4 <= r0) goto L3c
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3c
            r4.<init>(r3)     // Catch: java.lang.Exception -> L3c
            java.util.HashSet r3 = new java.util.HashSet     // Catch: java.lang.Exception -> L3c
            r3.<init>()     // Catch: java.lang.Exception -> L3c
            r0 = 0
        L1e:
            int r1 = r4.length()     // Catch: java.lang.Exception -> L3c
            if (r0 >= r1) goto L30
            java.lang.Object r1 = r4.get(r0)     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3c
            r3.add(r1)     // Catch: java.lang.Exception -> L3c
            int r0 = r0 + 1
            goto L1e
        L30:
            int r4 = r3.size()     // Catch: java.lang.Exception -> L3c
            if (r4 <= 0) goto L3c
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3c
            r4.<init>(r3)     // Catch: java.lang.Exception -> L3c
            return r4
        L3c:
            r3 = 0
            return r3
    }

    public org.json.JSONArray b(org.json.JSONObject r4, java.lang.String r5) {
            r3 = this;
            if (r4 == 0) goto L3d
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Exception -> L3d
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L3d
            if (r5 != 0) goto L3d
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3d
            r5.<init>(r4)     // Catch: java.lang.Exception -> L3d
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Exception -> L3d
            r4.<init>()     // Catch: java.lang.Exception -> L3d
            r0 = 0
        L17:
            int r1 = r5.length()     // Catch: java.lang.Exception -> L3d
            if (r0 >= r1) goto L31
            java.lang.Object r1 = r5.get(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = "frida"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L3d
            if (r2 == 0) goto L2e
            r4.add(r1)     // Catch: java.lang.Exception -> L3d
        L2e:
            int r0 = r0 + 1
            goto L17
        L31:
            int r5 = r4.size()     // Catch: java.lang.Exception -> L3d
            if (r5 <= 0) goto L3d
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3d
            r5.<init>(r4)     // Catch: java.lang.Exception -> L3d
            return r5
        L3d:
            r4 = 0
            return r4
    }

    public org.json.JSONArray c(org.json.JSONObject r4, java.lang.String r5) {
            r3 = this;
            if (r4 == 0) goto L4d
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Exception -> L4d
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L4d
            if (r5 != 0) goto L4d
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4d
            r5.<init>(r4)     // Catch: java.lang.Exception -> L4d
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Exception -> L4d
            r4.<init>()     // Catch: java.lang.Exception -> L4d
            r0 = 0
        L17:
            int r1 = r5.length()     // Catch: java.lang.Exception -> L4d
            if (r0 >= r1) goto L41
            java.lang.Object r1 = r5.get(r0)     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L4d
            java.lang.String r2 = "substrate"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L4d
            if (r2 != 0) goto L3b
            java.lang.String r2 = ".jar"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L4d
            if (r2 != 0) goto L3b
            java.lang.String r2 = "xposed"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L4d
            if (r2 == 0) goto L3e
        L3b:
            r4.add(r1)     // Catch: java.lang.Exception -> L4d
        L3e:
            int r0 = r0 + 1
            goto L17
        L41:
            int r5 = r4.size()     // Catch: java.lang.Exception -> L4d
            if (r5 <= 0) goto L4d
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4d
            r5.<init>(r4)     // Catch: java.lang.Exception -> L4d
            return r5
        L4d:
            r4 = 0
            return r4
    }
}
