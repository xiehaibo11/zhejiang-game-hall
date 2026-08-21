package com.alibaba.sdk.android.oss.common.utils;

public class OSSSharedPreferences {
    private static com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences sInstance;
    private android.content.SharedPreferences mSp;

    private OSSSharedPreferences(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "oss_android_sdk_sp"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.mSp = r3
            return
    }

    public static com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences instance(android.content.Context r2) {
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r0 = com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences> r0 = com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.class
            monitor-enter(r0)
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r1 = com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r1 = new com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences r2 = com.alibaba.sdk.android.oss.common.utils.OSSSharedPreferences.sInstance
            return r2
    }

    public boolean contains(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.mSp
            boolean r2 = r0.contains(r2)
            return r2
    }

    public java.lang.String getStringValue(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.mSp
            java.lang.String r1 = ""
            java.lang.String r3 = r0.getString(r3, r1)
            return r3
    }

    public void removeKey(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.mSp
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r2)
            r0.commit()
            return
    }

    public void setStringValue(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.mSp
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putString(r2, r3)
            r0.commit()
            return
    }
}
