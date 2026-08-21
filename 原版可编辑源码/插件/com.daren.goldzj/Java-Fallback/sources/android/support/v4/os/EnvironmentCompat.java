package android.support.v4.os;

import android.os.Build;
import android.os.Environment;
import android.util.Log;
import java.io.File;

public final class EnvironmentCompat {
    public static final String MEDIA_UNKNOWN = "unknown";
    private static final String TAG = "EnvironmentCompat";

    public static String getStorageState(File r2) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
    L10:
        e = move-exception;
        Log.w(TAG, "Failed to resolve canonical path: " + e);
        return MEDIA_UNKNOWN;
    L7:
        if (r2.getCanonicalPath().startsWith(Environment.getExternalStorageDirectory().getCanonicalPath()) == false) goto L16;
        return Environment.getExternalStorageState();
    L16:
        return MEDIA_UNKNOWN;
    L5:
        return Environment.getStorageState(r2);
    }

    private EnvironmentCompat() {
    }
}
