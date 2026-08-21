package com.huawei.hms.framework.common;

public class SettingUtil {
    private static final java.lang.String TAG = "SettingUtil";

    public SettingUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getSecureInt(android.content.ContentResolver r1, java.lang.String r2, int r3) {
            int r3 = android.provider.Settings.Secure.getInt(r1, r2, r3)     // Catch: java.lang.RuntimeException -> L5
            goto Ld
        L5:
            r1 = move-exception
            java.lang.String r2 = "SettingUtil"
            java.lang.String r0 = "Settings Secure getInt throwFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r2, r0, r1)
        Ld:
            return r3
    }

    public static int getSystemInt(android.content.ContentResolver r1, java.lang.String r2, int r3) {
            int r3 = android.provider.Settings.System.getInt(r1, r2, r3)     // Catch: java.lang.RuntimeException -> L5
            goto Ld
        L5:
            r1 = move-exception
            java.lang.String r2 = "SettingUtil"
            java.lang.String r0 = "Settings System getInt throwFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r2, r0, r1)
        Ld:
            return r3
    }
}
