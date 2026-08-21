package net.grandcentrix.tray.core;

import android.content.Context;
import android.content.SharedPreferences;
import android.support.annotation.NonNull;

/* JADX INFO: loaded from: classes4.dex */
public class SharedPreferencesImport implements TrayMigration {
    private final SharedPreferences mPreferences;
    private final String mSharedPrefsKey;
    private final String mSharedPrefsName;
    private final String mTrayKey;

    public SharedPreferencesImport(Context context, @NonNull String sharedPrefsName, @NonNull String sharedPrefsKey, @NonNull String trayKey) {
        this.mSharedPrefsKey = sharedPrefsKey;
        this.mSharedPrefsName = sharedPrefsName;
        this.mTrayKey = trayKey;
        this.mPreferences = context.getSharedPreferences(sharedPrefsName, 4);
    }

    @Override // net.grandcentrix.tray.core.Migration
    public Object getData() {
        return this.mPreferences.getAll().get(this.mSharedPrefsKey);
    }

    @Override // net.grandcentrix.tray.core.Migration
    @NonNull
    public String getPreviousKey() {
        return this.mSharedPrefsKey;
    }

    @Override // net.grandcentrix.tray.core.Migration
    @NonNull
    public String getTrayKey() {
        return this.mTrayKey;
    }

    @Override // net.grandcentrix.tray.core.Migration
    public void onPostMigrate(TrayItem trayItem) {
        if (trayItem == null) {
            TrayLog.wtf("migration " + this + " failed, saved data in tray is null");
            return;
        }
        if (equals(trayItem.value(), getData().toString())) {
            TrayLog.v("removing key '" + this.mSharedPrefsKey + "' from SharedPreferences '" + this.mSharedPrefsName + "'");
            this.mPreferences.edit().remove(this.mSharedPrefsKey).apply();
        }
    }

    @Override // net.grandcentrix.tray.core.Migration
    public boolean shouldMigrate() {
        if (this.mPreferences.contains(this.mSharedPrefsKey)) {
            return true;
        }
        TrayLog.v("key '" + this.mSharedPrefsKey + "' in SharedPreferences '" + this.mSharedPrefsName + "' not found. skipped import");
        return false;
    }

    public String toString() {
        return "SharedPreferencesImport(@" + Integer.toHexString(hashCode()) + "){sharedPrefsName='" + this.mSharedPrefsName + "', sharedPrefsKey='" + this.mSharedPrefsKey + "', trayKey='" + this.mTrayKey + "'}";
    }

    static boolean equals(Object a2, Object b) {
        return a2 == null ? b == null : a2.equals(b);
    }
}
