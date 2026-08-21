package android.support.v4.database;

import android.database.CursorWindow;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;

public final class CursorWindowCompat {
    private CursorWindowCompat() {
    }

    @NonNull
    public static CursorWindow create(@Nullable String r2, long r3) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return new CursorWindow(r2, r3);
    L7:
        if (Build.VERSION.SDK_INT < 15) goto L11;
        return new CursorWindow(r2);
    L11:
        return new CursorWindow(false);
    }
}
