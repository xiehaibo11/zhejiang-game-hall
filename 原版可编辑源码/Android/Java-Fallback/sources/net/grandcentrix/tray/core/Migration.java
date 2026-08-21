package net.grandcentrix.tray.core;

public interface Migration<T> {
    @android.support.annotation.Nullable
    java.lang.Object getData();

    @android.support.annotation.NonNull
    java.lang.String getPreviousKey();

    @android.support.annotation.NonNull
    java.lang.String getTrayKey();

    void onPostMigrate(@android.support.annotation.Nullable T r1);

    boolean shouldMigrate();
}
