package android.support.v4.os;

import android.os.Build;

public class BuildCompat {
    private BuildCompat() {
    }

    @Deprecated
    public static boolean isAtLeastN() {
        if (Build.VERSION.SDK_INT < 24) goto L5;
        return true;
    L5:
        return false;
    }

    @Deprecated
    public static boolean isAtLeastNMR1() {
        if (Build.VERSION.SDK_INT < 25) goto L5;
        return true;
    L5:
        return false;
    }

    @Deprecated
    public static boolean isAtLeastO() {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        return true;
    L5:
        return false;
    }

    @Deprecated
    public static boolean isAtLeastOMR1() {
        if (Build.VERSION.SDK_INT < 27) goto L5;
        return true;
    L5:
        return false;
    }

    @Deprecated
    public static boolean isAtLeastP() {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        return true;
    L5:
        return false;
    }

    public static boolean isAtLeastQ() {
        if (Build.VERSION.CODENAME.length() == 1) goto L5;
    L9:
        return false;
    L5:
        if (Build.VERSION.CODENAME.charAt(0) < 'Q') goto L9;
        if (Build.VERSION.CODENAME.charAt(0) > 'Z') goto L9;
        return true;
    }
}
