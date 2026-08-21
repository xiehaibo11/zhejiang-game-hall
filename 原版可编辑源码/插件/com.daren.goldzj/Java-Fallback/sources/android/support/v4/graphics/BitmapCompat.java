package android.support.v4.graphics;

import android.graphics.Bitmap;
import android.os.Build;
import android.support.annotation.NonNull;

public final class BitmapCompat {
    public static boolean hasMipMap(@NonNull Bitmap r2) {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return false;
    L5:
        return r2.hasMipMap();
    }

    public static void setHasMipMap(@NonNull Bitmap r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setHasMipMap(r3);
        return;
    }

    public static int getAllocationByteCount(@NonNull Bitmap r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.getAllocationByteCount();
    L7:
        return r2.getByteCount();
    }

    private BitmapCompat() {
    }
}
