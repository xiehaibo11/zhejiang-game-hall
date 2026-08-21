package android.support.v4.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.support.annotation.NonNull;
import android.support.v4.content.IntentCompat;

public class AppLaunchChecker {
    private static final String KEY_STARTED_FROM_LAUNCHER = "startedFromLauncher";
    private static final String SHARED_PREFS_NAME = "android.support.AppLaunchChecker";

    public static boolean hasStartedFromLauncher(@NonNull Context r2) {
        return r2.getSharedPreferences(SHARED_PREFS_NAME, 0).getBoolean(KEY_STARTED_FROM_LAUNCHER, false);
    }

    public static void onActivityCreate(@NonNull Activity r4) {
        SharedPreferences r1 = r4.getSharedPreferences(SHARED_PREFS_NAME, 0);
        if (r1.getBoolean(KEY_STARTED_FROM_LAUNCHER, false) == false) goto L5;
        return;
    L5:
        Intent r42 = r4.getIntent();
        if (r42 != null) goto L9;
        return;
    L9:
        if ("android.intent.action.MAIN".equals(r42.getAction()) == true) goto L11;
        return;
    L11:
        if (r42.hasCategory("android.intent.category.LAUNCHER") == false) goto L13;
    L14:
        r1.edit().putBoolean(KEY_STARTED_FROM_LAUNCHER, true).apply();
        return;
    L13:
        if (r42.hasCategory(IntentCompat.CATEGORY_LEANBACK_LAUNCHER) == true) goto L14;
    }

    @Deprecated
    public AppLaunchChecker() {
    }
}
