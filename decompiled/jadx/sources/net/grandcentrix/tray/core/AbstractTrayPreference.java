package net.grandcentrix.tray.core;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import net.grandcentrix.tray.core.TrayStorage;

/* JADX INFO: loaded from: classes4.dex */
public abstract class AbstractTrayPreference<T extends TrayStorage> extends Preferences<TrayItem, T> {
    protected AbstractTrayPreference(@NonNull T storage, int version) {
        super(storage, version);
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean getBoolean(@NonNull String key, boolean defaultValue) {
        try {
            return getBoolean(key);
        } catch (ItemNotFoundException e) {
            return defaultValue;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public boolean getBoolean(@NonNull String key) throws ItemNotFoundException {
        String value = getString(key);
        return Boolean.parseBoolean(value);
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public float getFloat(@NonNull String key, float defaultValue) {
        try {
            return getFloat(key);
        } catch (ItemNotFoundException e) {
            return defaultValue;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public float getFloat(@NonNull String key) throws ItemNotFoundException {
        String value = getString(key);
        throwForNullValue(value, Float.class, key);
        try {
            return Float.parseFloat(value);
        } catch (NumberFormatException e) {
            throw new WrongTypeException(e);
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public int getInt(@NonNull String key, int defaultValue) {
        try {
            return getInt(key);
        } catch (ItemNotFoundException e) {
            return defaultValue;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public int getInt(@NonNull String key) throws ItemNotFoundException {
        String value = getString(key);
        throwForNullValue(value, Integer.class, key);
        try {
            return Integer.parseInt(value);
        } catch (NumberFormatException e) {
            throw new WrongTypeException(e);
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public long getLong(@NonNull String key, long defaultValue) {
        try {
            return getLong(key);
        } catch (ItemNotFoundException e) {
            return defaultValue;
        }
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public long getLong(@NonNull String key) throws ItemNotFoundException {
        String value = getString(key);
        throwForNullValue(value, Long.class, key);
        try {
            return Long.parseLong(value);
        } catch (NumberFormatException e) {
            throw new WrongTypeException(e);
        }
    }

    public String getName() {
        return getStorage().getModuleName();
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    public String getString(@NonNull String key) throws ItemNotFoundException {
        TrayItem pref = getPref(key);
        if (pref == null) {
            throw new ItemNotFoundException("Value for Key <%s> not found", key);
        }
        return pref.value();
    }

    @Override // net.grandcentrix.tray.core.PreferenceAccessor
    @Nullable
    public String getString(@NonNull String key, String defaultValue) {
        try {
            return getString(key);
        } catch (ItemNotFoundException e) {
            return defaultValue;
        }
    }

    public void registerOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener listener) {
        getStorage().registerOnTrayPreferenceChangeListener(listener);
    }

    public String toString() {
        return getClass().getSimpleName() + "(@" + Integer.toHexString(hashCode()) + "){name=" + getName() + "}";
    }

    public void unregisterOnTrayPreferenceChangeListener(@NonNull OnTrayPreferenceChangeListener listener) {
        getStorage().unregisterOnTrayPreferenceChangeListener(listener);
    }

    protected void annex(T oldStorage) {
        getStorage().annex(oldStorage);
        TrayLog.v("annexed " + oldStorage + " to " + this);
    }

    private void throwForNullValue(@Nullable String value, Class<?> clazz, @NonNull String key) throws WrongTypeException {
        if (value == null) {
            throw new WrongTypeException("The value for key <" + key + "> is null. You obviously saved this value as String and try to access it with type " + clazz.getSimpleName() + " which cannot be null.  Always use getString(key, defaultValue) when accessing data you saved with put(String).");
        }
    }
}
