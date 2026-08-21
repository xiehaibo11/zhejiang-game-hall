package net.grandcentrix.tray.core;

public interface PreferenceStorage<T> {
    boolean clear();

    @android.support.annotation.Nullable
    T get(@android.support.annotation.NonNull java.lang.String r1);

    @android.support.annotation.NonNull
    java.util.Collection<T> getAll();

    int getVersion() throws net.grandcentrix.tray.core.TrayException;

    boolean put(T r1);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, @android.support.annotation.Nullable java.lang.Object r2);

    boolean put(@android.support.annotation.NonNull java.lang.String r1, @android.support.annotation.Nullable java.lang.String r2, @android.support.annotation.Nullable java.lang.Object r3);

    boolean remove(@android.support.annotation.NonNull java.lang.String r1);

    boolean setVersion(int r1);

    boolean wipe();
}
