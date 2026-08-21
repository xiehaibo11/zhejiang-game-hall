package net.grandcentrix.tray.core;

import android.support.annotation.NonNull;

/* JADX INFO: loaded from: classes4.dex */
public abstract class TrayStorage implements PreferenceStorage<TrayItem> {
    private String mModuleName;
    private a mType;

    public enum a {
        UNDEFINED,
        USER,
        DEVICE
    }

    public abstract void annex(TrayStorage trayStorage);

    public abstract void registerOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener onTrayPreferenceChangeListener);

    public abstract void unregisterOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener onTrayPreferenceChangeListener);

    public TrayStorage(String moduleName, a type) {
        this.mModuleName = moduleName;
        this.mType = type;
    }

    public String getModuleName() {
        return this.mModuleName;
    }

    public a getType() {
        return this.mType;
    }
}
