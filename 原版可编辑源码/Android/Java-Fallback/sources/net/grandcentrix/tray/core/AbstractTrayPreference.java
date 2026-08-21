package net.grandcentrix.tray.core;

import net.grandcentrix.tray.core.TrayStorage;

public abstract class AbstractTrayPreference<T extends net.grandcentrix.tray.core.TrayStorage> extends net.grandcentrix.tray.core.Preferences<net.grandcentrix.tray.core.TrayItem, T> {
    protected AbstractTrayPreference(@android.support.annotation.NonNull T r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void throwForNullValue(@android.support.annotation.Nullable java.lang.String r4, java.lang.Class<?> r5, @android.support.annotation.NonNull java.lang.String r6) throws net.grandcentrix.tray.core.WrongTypeException {
            r3 = this;
            if (r4 == 0) goto L3
            return
        L3:
            net.grandcentrix.tray.core.WrongTypeException r0 = new net.grandcentrix.tray.core.WrongTypeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "The value for key <"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = "> is null. You obviously saved this value as String and try to access it with type "
            r1.append(r2)
            java.lang.String r2 = r5.getSimpleName()
            r1.append(r2)
            java.lang.String r2 = " which cannot be null.  Always use getString(key, defaultValue) when accessing data you saved with put(String)."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    protected void annex(T r3) {
            r2 = this;
            net.grandcentrix.tray.core.PreferenceStorage r0 = r2.getStorage()
            net.grandcentrix.tray.core.TrayStorage r0 = (net.grandcentrix.tray.core.TrayStorage) r0
            r0.annex(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "annexed "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " to "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            net.grandcentrix.tray.core.TrayLog.v(r0)
            return
    }

    @Override
    public boolean getBoolean(@android.support.annotation.NonNull java.lang.String r3) throws net.grandcentrix.tray.core.ItemNotFoundException {
            r2 = this;
            java.lang.String r0 = r2.getString(r3)
            boolean r1 = java.lang.Boolean.parseBoolean(r0)
            return r1
    }

    @Override
    public boolean getBoolean(@android.support.annotation.NonNull java.lang.String r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.getBoolean(r2)     // Catch: net.grandcentrix.tray.core.ItemNotFoundException -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    @Override
    public float getFloat(@android.support.annotation.NonNull java.lang.String r4) throws net.grandcentrix.tray.core.ItemNotFoundException {
            r3 = this;
            java.lang.String r0 = r3.getString(r4)
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            r3.throwForNullValue(r0, r1, r4)
            float r1 = java.lang.Float.parseFloat(r0)     // Catch: java.lang.NumberFormatException -> Le
            return r1
        Le:
            r1 = move-exception
            net.grandcentrix.tray.core.WrongTypeException r2 = new net.grandcentrix.tray.core.WrongTypeException
            r2.<init>(r1)
            throw r2
    }

    @Override
    public float getFloat(@android.support.annotation.NonNull java.lang.String r2, float r3) {
            r1 = this;
            float r0 = r1.getFloat(r2)     // Catch: net.grandcentrix.tray.core.ItemNotFoundException -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    @Override
    public int getInt(@android.support.annotation.NonNull java.lang.String r4) throws net.grandcentrix.tray.core.ItemNotFoundException {
            r3 = this;
            java.lang.String r0 = r3.getString(r4)
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            r3.throwForNullValue(r0, r1, r4)
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> Le
            return r1
        Le:
            r1 = move-exception
            net.grandcentrix.tray.core.WrongTypeException r2 = new net.grandcentrix.tray.core.WrongTypeException
            r2.<init>(r1)
            throw r2
    }

    @Override
    public int getInt(@android.support.annotation.NonNull java.lang.String r2, int r3) {
            r1 = this;
            int r0 = r1.getInt(r2)     // Catch: net.grandcentrix.tray.core.ItemNotFoundException -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    @Override
    public long getLong(@android.support.annotation.NonNull java.lang.String r4) throws net.grandcentrix.tray.core.ItemNotFoundException {
            r3 = this;
            java.lang.String r0 = r3.getString(r4)
            java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
            r3.throwForNullValue(r0, r1, r4)
            long r1 = java.lang.Long.parseLong(r0)     // Catch: java.lang.NumberFormatException -> Le
            return r1
        Le:
            r1 = move-exception
            net.grandcentrix.tray.core.WrongTypeException r2 = new net.grandcentrix.tray.core.WrongTypeException
            r2.<init>(r1)
            throw r2
    }

    @Override
    public long getLong(@android.support.annotation.NonNull java.lang.String r3, long r4) {
            r2 = this;
            long r0 = r2.getLong(r3)     // Catch: net.grandcentrix.tray.core.ItemNotFoundException -> L5
            return r0
        L5:
            r0 = move-exception
            return r4
    }

    public java.lang.String getName() {
            r1 = this;
            net.grandcentrix.tray.core.PreferenceStorage r0 = r1.getStorage()
            net.grandcentrix.tray.core.TrayStorage r0 = (net.grandcentrix.tray.core.TrayStorage) r0
            java.lang.String r0 = r0.getModuleName()
            return r0
    }

    @Override
    public java.lang.String getString(@android.support.annotation.NonNull java.lang.String r5) throws net.grandcentrix.tray.core.ItemNotFoundException {
            r4 = this;
            java.lang.Object r0 = r4.getPref(r5)
            net.grandcentrix.tray.core.TrayItem r0 = (net.grandcentrix.tray.core.TrayItem) r0
            if (r0 == 0) goto Ld
            java.lang.String r1 = r0.value()
            return r1
        Ld:
            net.grandcentrix.tray.core.ItemNotFoundException r1 = new net.grandcentrix.tray.core.ItemNotFoundException
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            java.lang.String r3 = "Value for Key <%s> not found"
            r1.<init>(r3, r2)
            throw r1
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.String getString(@android.support.annotation.NonNull java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = r1.getString(r2)     // Catch: net.grandcentrix.tray.core.ItemNotFoundException -> L5
            return r0
        L5:
            r0 = move-exception
            return r3
    }

    public void registerOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r2) {
            r1 = this;
            net.grandcentrix.tray.core.PreferenceStorage r0 = r1.getStorage()
            net.grandcentrix.tray.core.TrayStorage r0 = (net.grandcentrix.tray.core.TrayStorage) r0
            r0.registerOnTrayPreferenceChangeListener(r2)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = "(@"
            r0.append(r1)
            int r1 = r2.hashCode()
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = "){name="
            r0.append(r1)
            java.lang.String r1 = r2.getName()
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void unregisterOnTrayPreferenceChangeListener(@android.support.annotation.NonNull net.grandcentrix.tray.core.OnTrayPreferenceChangeListener r2) {
            r1 = this;
            net.grandcentrix.tray.core.PreferenceStorage r0 = r1.getStorage()
            net.grandcentrix.tray.core.TrayStorage r0 = (net.grandcentrix.tray.core.TrayStorage) r0
            r0.unregisterOnTrayPreferenceChangeListener(r2)
            return
    }
}
