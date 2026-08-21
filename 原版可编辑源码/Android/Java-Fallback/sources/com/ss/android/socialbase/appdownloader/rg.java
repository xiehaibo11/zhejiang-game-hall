package com.ss.android.socialbase.appdownloader;

public class rg {
    public int df;
    public java.lang.String pp;
    public java.lang.String pt;
    public java.lang.String q;
    public java.lang.String rg;

    public rg() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.df = r0
            return
    }

    public static com.ss.android.socialbase.appdownloader.rg rg(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.ss.android.socialbase.appdownloader.rg r0 = new com.ss.android.socialbase.appdownloader.rg
            r0.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L49
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "device_plans"
            java.lang.String r3 = r2.optString(r3, r1)     // Catch: java.lang.Throwable -> L49
            r0.pp = r3     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "real_device_plan"
            java.lang.String r3 = r2.optString(r3, r1)     // Catch: java.lang.Throwable -> L49
            r0.pt = r3     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "error_msg"
            java.lang.String r3 = r2.optString(r3, r1)     // Catch: java.lang.Throwable -> L49
            r0.q = r3     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "ah_plan_type"
            java.lang.String r3 = r2.optString(r3, r1)     // Catch: java.lang.Throwable -> L49
            r0.rg = r3     // Catch: java.lang.Throwable -> L49
            java.lang.String r3 = "error_code"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Throwable -> L49
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L49
            if (r1 == 0) goto L42
            r3 = -1
            r0.df = r3     // Catch: java.lang.Throwable -> L49
            goto L4d
        L42:
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L49
            r0.df = r3     // Catch: java.lang.Throwable -> L49
            goto L4d
        L49:
            r3 = move-exception
            r3.printStackTrace()
        L4d:
            return r0
    }

    public org.json.JSONObject df() {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1.rg(r0)
            return r0
    }

    public java.lang.String rg() {
            r1 = this;
            org.json.JSONObject r0 = r1.df()
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void rg(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "ah_plan_type"
            java.lang.String r1 = r2.rg     // Catch: java.lang.Throwable -> L2a
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "error_code"
            int r1 = r2.df     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L2a
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "error_msg"
            java.lang.String r1 = r2.q     // Catch: java.lang.Throwable -> L2a
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "real_device_plan"
            java.lang.String r1 = r2.pt     // Catch: java.lang.Throwable -> L2a
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "device_plans"
            java.lang.String r1 = r2.pp     // Catch: java.lang.Throwable -> L2a
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }
}
