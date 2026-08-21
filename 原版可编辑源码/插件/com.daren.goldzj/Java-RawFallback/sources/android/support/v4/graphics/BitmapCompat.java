package android.support.v4.graphics;

public final class BitmapCompat {
    private BitmapCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getAllocationByteCount(@android.support.annotation.NonNull android.graphics.Bitmap r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = r2.getAllocationByteCount()
            return r2
        Lb:
            int r2 = r2.getByteCount()
            return r2
    }

    public static boolean hasMipMap(@android.support.annotation.NonNull android.graphics.Bitmap r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            boolean r2 = r2.hasMipMap()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void setHasMipMap(@android.support.annotation.NonNull android.graphics.Bitmap r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L9
            r2.setHasMipMap(r3)
        L9:
            return
    }
}
