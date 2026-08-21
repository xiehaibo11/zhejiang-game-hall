package com.ss.android.downloadlib.rg.rg;

public class df {
    public static java.lang.String df(android.content.Context r1) {
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = "android_id"
            java.lang.String r1 = android.provider.Settings.Secure.getString(r1, r0)     // Catch: java.lang.Exception -> Lb
            goto L10
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
        L10:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L18
            java.lang.String r1 = "normal"
        L18:
            return r1
    }

    public static java.lang.String rg() {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r0 = df(r0)
            return r0
    }

    public static java.lang.String rg(android.content.Context r1) {
            java.lang.String r1 = rg()     // Catch: java.lang.Exception -> Lf
            java.lang.String r0 = "MD5"
            byte[] r1 = com.ss.android.downloadlib.rg.rg.q.rg(r1, r0)     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = rg(r1)     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static java.lang.String rg(byte[] r0) {
            java.lang.String r0 = com.ss.android.downloadlib.rg.rg.rg.rg(r0)
            return r0
    }
}
