package net.grandcentrix.tray.core;

public interface PreferenceAccessor<T> {
    boolean clear();

    boolean contains(java.lang.String r1);

    java.util.Collection<T> getAll();

    boolean getBoolean(@android.support.annotation.NonNull java.lang.String r1) throws net.grandcentrix.tray.core.ItemNotFoundException;

    boolean getBoolean(@android.support.annotation.NonNull java.lang.String r1, boolean r2);

    float getFloat(@android.support.annotation.NonNull java.lang.String r1) throws net.grandcentrix.tray.core.ItemNotFoundException, net.grandcentrix.tray.core.WrongTypeException;

    float getFloat(@android.support.annotation.NonNull java.lang.String r1, float r2) throws net.grandcentrix.tray.core.WrongTypeException;

    int getInt(@android.support.annotation.NonNull java.lang.String r1) throws net.grandcentrix.tray.core.ItemNotFoundException, net.grandcentrix.tray.core.WrongTypeException;

    int getInt(@android.support.annotation.NonNull java.lang.String r1, int r2) throws net.grandcentrix.tray.core.WrongTypeException;

    long getLong(@android.support.annotation.NonNull java.lang.String r1) throws net.grandcentrix.tray.core.ItemNotFoundException, net.grandcentrix.tray.core.WrongTypeException;

    long getLong(@android.support.annotation.NonNull java.lang.String r1, long r2) throws net.grandcentrix.tray.core.WrongTypeException;

    @android.support.annotation.Nullable
    T getPref(@android.support.annotation.NonNull java.lang.String r1);

    @android.support.annotation.Nullable
    java.lang.String getString(@android.support.annotation.NonNull java.lang.String r1) throws net.grandcentrix.tray.core.ItemNotFoundException;

    @android.support.annotation.Nullable
    java.lang.String getString(@android.support.annotation.NonNull java.lang.String r1, @android.support.annotation.Nullable java.lang.String r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, float r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, int r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, long r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, @android.support.annotation.Nullable java.lang.String r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, boolean r2);

    boolean remove(@android.support.annotation.NonNull java.lang.String r1);

    boolean wipe();
}
