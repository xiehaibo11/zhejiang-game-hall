package com.czhj.sdk.common.utils;

public final class SharedPreferencesUtil {
    private static java.lang.String a = "com.sigmob.Settings";

    static {
            return
    }

    private SharedPreferencesUtil(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            com.czhj.sdk.common.utils.SharedPreferencesUtil.a = r1
            return
    }

    public static android.content.SharedPreferences getSharedPreferences(android.content.Context r2) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            java.lang.String r0 = com.czhj.sdk.common.utils.SharedPreferencesUtil.a
            r1 = 4
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }

    public static android.content.SharedPreferences getSharedPreferences(android.content.Context r1, java.lang.String r2) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            r0 = 4
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            return r1
    }
}
