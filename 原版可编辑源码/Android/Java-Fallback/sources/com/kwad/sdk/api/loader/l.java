package com.kwad.sdk.api.loader;

final class l {
    public static void putValue(org.json.JSONObject r0, java.lang.String r1, int r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r0, java.lang.String r1, java.lang.String r2) {
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static void putValue(org.json.JSONObject r1, java.lang.String r2, org.json.JSONObject r3) {
            if (r3 == 0) goto Lc
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto Lc
        L9:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }
}
