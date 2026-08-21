package android.support.v4.view;

import android.os.Build;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.view.View;
import android.view.Window;

public final class WindowCompat {
    public static final int FEATURE_ACTION_BAR = 8;
    public static final int FEATURE_ACTION_BAR_OVERLAY = 9;
    public static final int FEATURE_ACTION_MODE_OVERLAY = 10;

    private WindowCompat() {
    }

    @NonNull
    public static <T extends View> T requireViewById(@NonNull Window r2, @IdRes int r3) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        T r22 = (T) r2.findViewById(r3);
        if (r22 == null) goto L10;
        return r22;
    L10:
        throw new IllegalArgumentException("ID does not reference a View inside this Window");
    L5:
        return (T) r2.requireViewById(r3);
    }
}
