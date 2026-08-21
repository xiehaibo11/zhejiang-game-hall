package com.bianfeng.utilslib;

public class SharedPreferencesUtils {
    private static volatile com.bianfeng.utilslib.SharedPreferencesUtils utils;
    private java.lang.String delBD;
    private android.content.SharedPreferences sp;

    private SharedPreferencesUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ymnh5gamesdk_sp"
            r1.delBD = r0
            return
    }

    public static com.bianfeng.utilslib.SharedPreferencesUtils getInstance() {
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.SharedPreferencesUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.utilslib.SharedPreferencesUtils> r0 = com.bianfeng.utilslib.SharedPreferencesUtils.class
            monitor-enter(r0)
            com.bianfeng.utilslib.SharedPreferencesUtils r1 = com.bianfeng.utilslib.SharedPreferencesUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.utilslib.SharedPreferencesUtils r1 = new com.bianfeng.utilslib.SharedPreferencesUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.utilslib.SharedPreferencesUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.SharedPreferencesUtils.utils
            return r0
    }

    private boolean isCheckNull() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean getBoolean(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isCheckNull()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.SharedPreferences r0 = r2.sp
            boolean r3 = r0.getBoolean(r3, r1)
            return r3
    }

    public int getInt(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isCheckNull()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.SharedPreferences r0 = r2.sp
            int r3 = r0.getInt(r3, r1)
            return r3
    }

    public java.lang.String getString(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isCheckNull()
            java.lang.String r1 = "0"
            if (r0 == 0) goto L9
            return r1
        L9:
            android.content.SharedPreferences r0 = r2.sp
            java.lang.String r3 = r0.getString(r3, r1)
            return r3
    }

    public void init(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = r2.delBD
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.sp = r3
            return
    }

    public void putBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putBoolean(r2, r3)     // Catch: java.lang.Exception -> Ld
            r0.commit()     // Catch: java.lang.Exception -> Ld
            goto L16
        Ld:
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r3 = "SharedPreferencesUtils"
            r2.i(r3)
        L16:
            return
    }

    public void putInt(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putInt(r2, r3)     // Catch: java.lang.Exception -> Ld
            r0.commit()     // Catch: java.lang.Exception -> Ld
            goto L16
        Ld:
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r3 = "SharedPreferencesUtils"
            r2.i(r3)
        L16:
            return
    }

    public void putString(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.sp     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putString(r3, r4)     // Catch: java.lang.Exception -> Ld
            r0.commit()     // Catch: java.lang.Exception -> Ld
            goto L2a
        Ld:
            r3 = move-exception
            com.bianfeng.utilslib.Logger r4 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SharedPreferencesUtils"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.i(r3)
        L2a:
            return
    }
}
