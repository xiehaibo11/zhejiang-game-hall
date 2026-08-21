package android.support.v4.content.pm;

import android.content.pm.PackageInfo;
import android.os.Build;
import android.support.annotation.NonNull;

public final class PackageInfoCompat {
    public static long getLongVersionCode(@NonNull PackageInfo r2) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return r2.getLongVersionCode();
    L7:
        return r2.versionCode;
    }

    private PackageInfoCompat() {
    }
}
