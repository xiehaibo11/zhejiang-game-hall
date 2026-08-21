package com.huawei.hms.framework.common;

public class PLSharedPreferences {
    private static final java.lang.String MOVE_TO_DE_RECORDS = "grs_move2DE_records";
    private static final java.lang.String TAG = "PLSharedPreferences";
    private android.content.SharedPreferences sp;

    public PLSharedPreferences(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            r0.sp = r1
            return
    }

    private android.content.SharedPreferences getSharedPreferences(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            if (r5 != 0) goto Lb
            java.lang.String r5 = "PLSharedPreferences"
            java.lang.String r6 = "context is null, must call init method to set context"
            com.huawei.hms.framework.common.Logger.e(r5, r6)
            r5 = 0
            return r5
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            r2 = 0
            if (r0 < r1) goto L35
            android.content.Context r0 = r5.createDeviceProtectedStorageContext()
            java.lang.String r1 = "grs_move2DE_records"
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            boolean r3 = r1.getBoolean(r6, r2)
            if (r3 != 0) goto L34
            boolean r3 = r0.moveSharedPreferencesFrom(r5, r6)
            if (r3 != 0) goto L29
            goto L35
        L29:
            android.content.SharedPreferences$Editor r5 = r1.edit()
            r1 = 1
            r5.putBoolean(r6, r1)
            r5.apply()
        L34:
            r5 = r0
        L35:
            android.content.SharedPreferences r5 = r5.getSharedPreferences(r6, r2)
            return r5
    }

    public void clear() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.clear()
            r0.apply()
            return
    }

    public android.content.SharedPreferences.Editor edit() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            return r0
    }

    public java.util.Map<java.lang.String, ?> getAll() {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.Map r0 = r0.getAll()
            return r0
    }

    public long getLong(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return r3
        L5:
            long r2 = r0.getLong(r2, r3)
            return r2
    }

    public java.lang.String getString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.getString(r2, r0)
            return r2
    }

    public java.lang.String getString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return r3
        L5:
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    public void putLong(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r2 = r0.putLong(r2, r3)
            r2.apply()
            return
    }

    public void putString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r2 = r0.putString(r2, r3)
            r2.apply()
            return
    }

    public void remove(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r2 = r0.remove(r2)
            r2.apply()
            return
    }

    public void removeKeyValue(java.lang.String r2) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.sp
            if (r0 != 0) goto L5
            return
        L5:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r2 = r0.remove(r2)
            r2.apply()
            return
    }
}
