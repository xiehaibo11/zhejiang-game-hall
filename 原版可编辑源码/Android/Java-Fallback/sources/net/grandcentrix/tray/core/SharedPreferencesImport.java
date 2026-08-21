package net.grandcentrix.tray.core;

public class SharedPreferencesImport implements net.grandcentrix.tray.core.TrayMigration {
    private final android.content.SharedPreferences mPreferences;
    private final java.lang.String mSharedPrefsKey;
    private final java.lang.String mSharedPrefsName;
    private final java.lang.String mTrayKey;

    public SharedPreferencesImport(android.content.Context r2, @android.support.annotation.NonNull java.lang.String r3, @android.support.annotation.NonNull java.lang.String r4, @android.support.annotation.NonNull java.lang.String r5) {
            r1 = this;
            r1.<init>()
            r1.mSharedPrefsKey = r4
            r1.mSharedPrefsName = r3
            r1.mTrayKey = r5
            r0 = 4
            android.content.SharedPreferences r0 = r2.getSharedPreferences(r3, r0)
            r1.mPreferences = r0
            return
    }

    static boolean equals(java.lang.Object r1, java.lang.Object r2) {
            if (r1 != 0) goto L8
            if (r2 != 0) goto L6
            r0 = 1
            goto Lc
        L6:
            r0 = 0
            goto Lc
        L8:
            boolean r0 = r1.equals(r2)
        Lc:
            return r0
    }

    @Override
    public java.lang.Object getData() {
            r2 = this;
            android.content.SharedPreferences r0 = r2.mPreferences
            java.util.Map r0 = r0.getAll()
            java.lang.String r1 = r2.mSharedPrefsKey
            java.lang.Object r0 = r0.get(r1)
            return r0
    }

    @Override
    @android.support.annotation.NonNull
    public java.lang.String getPreviousKey() {
            r1 = this;
            java.lang.String r0 = r1.mSharedPrefsKey
            return r0
    }

    @Override
    @android.support.annotation.NonNull
    public java.lang.String getTrayKey() {
            r1 = this;
            java.lang.String r0 = r1.mTrayKey
            return r0
    }

    @Override
    public void onPostMigrate(net.grandcentrix.tray.core.TrayItem r1) {
            r0 = this;
            net.grandcentrix.tray.core.TrayItem r1 = (net.grandcentrix.tray.core.TrayItem) r1
            r0.onPostMigrate(r1)
            return
    }

    public void onPostMigrate(net.grandcentrix.tray.core.TrayItem r3) {
            r2 = this;
            if (r3 != 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "migration "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " failed, saved data in tray is null"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.wtf(r0)
            return
        L1c:
            java.lang.String r0 = r3.value()
            java.lang.Object r1 = r2.getData()
            java.lang.String r1 = r1.toString()
            boolean r0 = equals(r0, r1)
            if (r0 == 0) goto L62
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "removing key '"
            r0.append(r1)
            java.lang.String r1 = r2.mSharedPrefsKey
            r0.append(r1)
            java.lang.String r1 = "' from SharedPreferences '"
            r0.append(r1)
            java.lang.String r1 = r2.mSharedPrefsName
            r0.append(r1)
            java.lang.String r1 = "'"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            android.content.SharedPreferences r0 = r2.mPreferences
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = r2.mSharedPrefsKey
            android.content.SharedPreferences$Editor r0 = r0.remove(r1)
            r0.apply()
        L62:
            return
    }

    @Override
    public boolean shouldMigrate() {
            r2 = this;
            android.content.SharedPreferences r0 = r2.mPreferences
            java.lang.String r1 = r2.mSharedPrefsKey
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key '"
            r0.append(r1)
            java.lang.String r1 = r2.mSharedPrefsKey
            r0.append(r1)
            java.lang.String r1 = "' in SharedPreferences '"
            r0.append(r1)
            java.lang.String r1 = r2.mSharedPrefsName
            r0.append(r1)
            java.lang.String r1 = "' not found. skipped import"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SharedPreferencesImport(@"
            r0.append(r1)
            int r1 = r3.hashCode()
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = "){sharedPrefsName='"
            r0.append(r1)
            java.lang.String r1 = r3.mSharedPrefsName
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", sharedPrefsKey='"
            r0.append(r2)
            java.lang.String r2 = r3.mSharedPrefsKey
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", trayKey='"
            r0.append(r2)
            java.lang.String r2 = r3.mTrayKey
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
