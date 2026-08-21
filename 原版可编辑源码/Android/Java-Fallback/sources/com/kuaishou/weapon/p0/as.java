package com.kuaishou.weapon.p0;

public class as extends com.kuaishou.weapon.p0.dg {
    private org.json.JSONObject a;

    public as(android.content.Context r4, int r5) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L31
            com.kuaishou.weapon.p0.jni.Engine r0 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = com.kuaishou.weapon.p0.cj.c     // Catch: java.lang.Throwable -> L31
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L31
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L31
            java.lang.String r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L31
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L31
            if (r2 != 0) goto L31
            r2 = 0
            java.lang.String r4 = r0.eopq(r1, r2, r5, r4)     // Catch: java.lang.Throwable -> L31
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L31
            if (r5 != 0) goto L31
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L31
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L31
            r3.a = r5     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    private java.lang.String a(android.content.Context r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L74
            r0.<init>()     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r4 = com.kuaishou.weapon.p0.h.a(r4, r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_da"
            r2 = 1
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_dv"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_fr"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_li"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_em"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_vp"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_rcd"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_re"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_ud"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_sc"
            int r1 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r1)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "plc001_r_rcl_mc"
            int r4 = r4.b(r1, r2)     // Catch: java.lang.Exception -> L74
            r0.append(r4)     // Catch: java.lang.Exception -> L74
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L74
            return r4
        L74:
            java.lang.String r4 = ""
            return r4
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

    public org.json.JSONObject a() {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            return r0
    }

    public java.lang.String b(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L1f
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L1f
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L1f
            if (r0 != 0) goto L1e
            java.lang.String r0 = "\n"
            java.lang.String r1 = ""
            java.lang.String r3 = r3.replace(r0, r1)     // Catch: java.lang.Exception -> L1f
            java.lang.String r0 = "\t"
            java.lang.String r1 = " "
            java.lang.String r3 = r3.replace(r0, r1)     // Catch: java.lang.Exception -> L1f
        L1e:
            return r3
        L1f:
            r3 = 0
            return r3
    }

    public org.json.JSONArray c(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L31
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L31
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L31
            if (r0 != 0) goto L31
            int r0 = r3.length()     // Catch: java.lang.Exception -> L31
            r1 = 3
            if (r0 <= r1) goto L31
            java.lang.String r0 = "\\n"
            java.lang.String r1 = ""
            java.lang.String r0 = r3.replaceAll(r0, r1)     // Catch: java.lang.Exception -> L31
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L31
            if (r1 != 0) goto L24
            r3 = r0
        L24:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L31
            r0.<init>(r3)     // Catch: java.lang.Exception -> L31
            int r3 = r0.length()     // Catch: java.lang.Exception -> L31
            r1 = 1
            if (r3 <= r1) goto L31
            return r0
        L31:
            r3 = 0
            return r3
    }

    public org.json.JSONObject d(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L22
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L22
            if (r0 != 0) goto L22
            int r0 = r3.length()     // Catch: java.lang.Exception -> L22
            r1 = 2
            if (r0 <= r1) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L22
            r0.<init>(r3)     // Catch: java.lang.Exception -> L22
            int r3 = r0.length()     // Catch: java.lang.Exception -> L22
            r1 = 1
            if (r3 <= r1) goto L22
            return r0
        L22:
            r3 = 0
            return r3
    }

    public java.lang.String e(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L16
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L16
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L16
            int r0 = r3.length()     // Catch: java.lang.Exception -> L16
            r1 = 2
            if (r0 <= r1) goto L16
            return r3
        L16:
            r3 = 0
            return r3
    }
}
