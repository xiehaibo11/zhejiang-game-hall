package com.ss.android.download.api.q;

public class df {
    public static long rg(org.json.JSONObject r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = r2.optString(r3)
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.NumberFormatException -> L11
            long r0 = r2.longValue()     // Catch: java.lang.NumberFormatException -> L11
        L11:
            return r0
    }

    public static java.lang.String rg(java.lang.String... r4) {
            int r0 = r4.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L10
            r2 = r4[r1]
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Ld
            return r2
        Ld:
            int r1 = r1 + 1
            goto L2
        L10:
            java.lang.String r4 = ""
            return r4
    }

    public static org.json.JSONObject rg(org.json.JSONObject r1) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = rg(r1, r0)
            return r1
    }

    public static org.json.JSONObject rg(org.json.JSONObject r3, org.json.JSONObject r4) {
            if (r3 == 0) goto L20
            if (r4 == 0) goto L20
            java.util.Iterator r0 = r3.keys()     // Catch: org.json.JSONException -> L1c
        L8:
            boolean r1 = r0.hasNext()     // Catch: org.json.JSONException -> L1c
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()     // Catch: org.json.JSONException -> L1c
            java.lang.String r1 = (java.lang.String) r1     // Catch: org.json.JSONException -> L1c
            java.lang.Object r2 = r3.get(r1)     // Catch: org.json.JSONException -> L1c
            r4.put(r1, r2)     // Catch: org.json.JSONException -> L1c
            goto L8
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            return r4
    }

    public static org.json.JSONObject rg(org.json.JSONObject... r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r4 == 0) goto L19
            int r1 = r4.length
            if (r1 != 0) goto Lb
            goto L19
        Lb:
            int r1 = r4.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L19
            r3 = r4[r2]
            if (r3 == 0) goto L16
            rg(r3, r0)
        L16:
            int r2 = r2 + 1
            goto Ld
        L19:
            return r0
    }

    public static boolean rg(com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            if (r2 == 0) goto L12
            r0 = 1
            java.lang.String r1 = "apk_update_handler_enable"
            int r2 = r2.optInt(r1, r0)
            if (r2 != r0) goto L12
            java.lang.String r2 = "application/ttpatch"
            boolean r2 = r2.equals(r3)
            return r2
        L12:
            r2 = 0
            return r2
    }
}
