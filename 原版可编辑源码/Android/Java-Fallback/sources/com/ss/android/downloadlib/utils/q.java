package com.ss.android.downloadlib.utils;

public class q {
    public static java.lang.String rg(java.lang.String r2, java.lang.String r3, boolean r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "extra"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L20
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L20
            if (r2 != 0) goto L15
            java.lang.String r2 = "notification_jump_url"
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L20
        L15:
            java.lang.String r2 = "show_toast"
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L20
            java.lang.String r2 = "business_type"
            r0.put(r2, r5)     // Catch: org.json.JSONException -> L20
            goto L24
        L20:
            r2 = move-exception
            r2.printStackTrace()
        L24:
            java.lang.String r2 = r0.toString()
            return r2
    }
}
