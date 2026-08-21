package android.support.v4.app;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;

public final class NavUtils {
    public static final String PARENT_ACTIVITY = "android.support.PARENT_ACTIVITY";
    private static final String TAG = "NavUtils";

    public static boolean shouldUpRecreateTask(@NonNull Activity r2, @NonNull Intent r3) {
        if (Build.VERSION.SDK_INT >= 16) goto L5;
        String r22 = r2.getIntent().getAction();
        if (r22 != null) goto L9;
    L11:
        return false;
    L9:
        if (r22.equals("android.intent.action.MAIN") == true) goto L11;
        return true;
    L5:
        return r2.shouldUpRecreateTask(r3);
    }

    public static void navigateUpFromSameTask(@NonNull Activity r3) {
        Intent r0 = getParentActivityIntent(r3);
        if (r0 == null) goto L7;
        navigateUpTo(r3, r0);
        return;
    L7:
        throw new IllegalArgumentException("Activity " + r3.getClass().getSimpleName() + " does not have a parent activity name specified. (Did you forget to add the android.support.PARENT_ACTIVITY <meta-data>  element in your manifest?)");
    }

    public static void navigateUpTo(@NonNull Activity r2, @NonNull Intent r3) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.navigateUpTo(r3);
        return;
    L5:
        r3.addFlags(67108864);
        r2.startActivity(r3);
        r2.finish();
    }

    @Nullable
    public static Intent getParentActivityIntent(@NonNull Activity r3) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        Intent r0 = r3.getParentActivityIntent();
        if (r0 == null) goto L7;
        return r0;
    L7:
        String r02 = getParentActivityName(r3);
        if (r02 != null) goto L10;
        return null;
    L10:
        ComponentName r2 = new ComponentName(r3, r02);
    L16:
        Log.e(TAG, "getParentActivityIntent: bad parentActivityName '" + r02 + "' in manifest");
        return null;
    L12:
        if (getParentActivityName(r3, r2) != null) goto L15;
        return Intent.makeMainActivity(r2);
    L15:
        return new Intent().setComponent(r2);
    }

    @Nullable
    public static Intent getParentActivityIntent(@NonNull Context r1, @NonNull Class<?> r2) throws PackageManager.NameNotFoundException {
        String r22 = getParentActivityName(r1, new ComponentName(r1, r2));
        if (r22 != null) goto L6;
        return null;
    L6:
        ComponentName r0 = new ComponentName(r1, r22);
        if (getParentActivityName(r1, r0) != null) goto L10;
        return Intent.makeMainActivity(r0);
    L10:
        return new Intent().setComponent(r0);
    }

    @Nullable
    public static Intent getParentActivityIntent(@NonNull Context r2, @NonNull ComponentName r3) throws PackageManager.NameNotFoundException {
        String r0 = getParentActivityName(r2, r3);
        if (r0 != null) goto L6;
        return null;
    L6:
        ComponentName r1 = new ComponentName(r3.getPackageName(), r0);
        if (getParentActivityName(r2, r1) != null) goto L10;
        return Intent.makeMainActivity(r1);
    L10:
        return new Intent().setComponent(r1);
    }

    @Nullable
    public static String getParentActivityName(@NonNull Activity r1) {
        return getParentActivityName(r1, r1.getComponentName());
    L4:
        e = move-exception;
        throw new IllegalArgumentException(e);
    }

    @Nullable
    public static String getParentActivityName(@NonNull Context r2, @NonNull ComponentName r3) throws PackageManager.NameNotFoundException {
        ActivityInfo r32 = r2.getPackageManager().getActivityInfo(r3, 128);
        if (Build.VERSION.SDK_INT < 16) goto L8;
        String r0 = r32.parentActivityName;
        if (r0 == null) goto L8;
        return r0;
    L8:
        if (r32.metaData != null) goto L10;
        return null;
    L10:
        String r33 = r32.metaData.getString(PARENT_ACTIVITY);
        if (r33 != null) goto L14;
        return null;
    L14:
        if (r33.charAt(0) == '.') goto L16;
        return r33;
    L16:
        return r2.getPackageName() + r33;
    }

    private NavUtils() {
    }
}
