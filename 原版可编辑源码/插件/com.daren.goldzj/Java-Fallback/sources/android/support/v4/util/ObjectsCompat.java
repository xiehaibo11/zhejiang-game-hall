package android.support.v4.util;

import android.os.Build;
import android.support.annotation.Nullable;
import java.util.Arrays;
import java.util.Objects;

public class ObjectsCompat {
    private ObjectsCompat() {
    }

    public static boolean equals(@Nullable Object r2, @Nullable Object r3) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        if (r2 == r3) goto L12;
        if (r2 != null) goto L9;
    L11:
        return false;
    L9:
        if (r2.equals(r3) == false) goto L11;
    L12:
        return true;
    L5:
        return Objects.equals(r2, r3);
    }

    public static int hashCode(@Nullable Object r0) {
        if (r0 != null) goto L6;
        return 0;
    L6:
        return r0.hashCode();
    }

    public static int hash(@Nullable Object... r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return Objects.hash(r2);
    L7:
        return Arrays.hashCode(r2);
    }
}
