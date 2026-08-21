package com.kwai.adclient.kscommerciallogger;

public final class b {
    private static final java.lang.String[] aMV = null;

    static {
            java.lang.String r0 = "cache_limit"
            java.lang.String r1 = "cache_num"
            java.lang.String r2 = "segment_name_top1"
            java.lang.String r3 = "segment_count_top1"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.kwai.adclient.kscommerciallogger.b.aMV = r0
            return
    }

    public static java.lang.String O(org.json.JSONObject r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static boolean fY(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r0 = "^[a-z][a-z0-9]*(_{1}[a-z0-9]+)+$"
            boolean r1 = java.util.regex.Pattern.matches(r0, r1)
            return r1
    }
}
