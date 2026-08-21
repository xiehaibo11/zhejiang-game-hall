package android.support.v4.app;

public final class NavUtils {
    public static final java.lang.String PARENT_ACTIVITY = "android.support.PARENT_ACTIVITY";
    private static final java.lang.String TAG = "NavUtils";

    private NavUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent getParentActivityIntent(android.app.Activity r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Ld
            android.content.Intent r0 = r3.getParentActivityIntent()
            if (r0 == 0) goto Ld
            return r0
        Ld:
            java.lang.String r0 = getParentActivityName(r3)
            r1 = 0
            if (r0 != 0) goto L15
            return r1
        L15:
            android.content.ComponentName r2 = new android.content.ComponentName
            r2.<init>(r3, r0)
            java.lang.String r3 = getParentActivityName(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            if (r3 != 0) goto L25
            android.content.Intent r3 = android.content.Intent.makeMainActivity(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            goto L2e
        L25:
            android.content.Intent r3 = new android.content.Intent     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            r3.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            android.content.Intent r3 = r3.setComponent(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
        L2e:
            return r3
        L2f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r2 = "getParentActivityIntent: bad parentActivityName '"
            r3.append(r2)
            r3.append(r0)
            java.lang.String r0 = "' in manifest"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "NavUtils"
            android.util.Log.e(r0, r3)
            return r1
    }

    public static android.content.Intent getParentActivityIntent(android.content.Context r2, android.content.ComponentName r3) throws android.content.pm.PackageManager.NameNotFoundException {
            java.lang.String r0 = getParentActivityName(r2, r3)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r3 = r3.getPackageName()
            r1.<init>(r3, r0)
            java.lang.String r2 = getParentActivityName(r2, r1)
            if (r2 != 0) goto L1c
            android.content.Intent r2 = android.content.Intent.makeMainActivity(r1)
            goto L25
        L1c:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            android.content.Intent r2 = r2.setComponent(r1)
        L25:
            return r2
    }

    public static android.content.Intent getParentActivityIntent(android.content.Context r1, java.lang.Class<?> r2) throws android.content.pm.PackageManager.NameNotFoundException {
            android.content.ComponentName r0 = new android.content.ComponentName
            r0.<init>(r1, r2)
            java.lang.String r2 = getParentActivityName(r1, r0)
            if (r2 != 0) goto Ld
            r1 = 0
            return r1
        Ld:
            android.content.ComponentName r0 = new android.content.ComponentName
            r0.<init>(r1, r2)
            java.lang.String r1 = getParentActivityName(r1, r0)
            if (r1 != 0) goto L1d
            android.content.Intent r1 = android.content.Intent.makeMainActivity(r0)
            goto L26
        L1d:
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            android.content.Intent r1 = r1.setComponent(r0)
        L26:
            return r1
    }

    public static java.lang.String getParentActivityName(android.app.Activity r1) {
            android.content.ComponentName r0 = r1.getComponentName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L9
            java.lang.String r1 = getParentActivityName(r1, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L9
            return r1
        L9:
            r1 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static java.lang.String getParentActivityName(android.content.Context r2, android.content.ComponentName r3) throws android.content.pm.PackageManager.NameNotFoundException {
            android.content.pm.PackageManager r0 = r2.getPackageManager()
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r3 = r0.getActivityInfo(r3, r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L15
            java.lang.String r0 = r3.parentActivityName
            if (r0 == 0) goto L15
            return r0
        L15:
            android.os.Bundle r0 = r3.metaData
            r1 = 0
            if (r0 != 0) goto L1b
            return r1
        L1b:
            android.os.Bundle r3 = r3.metaData
            java.lang.String r0 = "android.support.PARENT_ACTIVITY"
            java.lang.String r3 = r3.getString(r0)
            if (r3 != 0) goto L26
            return r1
        L26:
            r0 = 0
            char r0 = r3.charAt(r0)
            r1 = 46
            if (r0 != r1) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
        L42:
            return r3
    }

    public static void navigateUpFromSameTask(android.app.Activity r3) {
            android.content.Intent r0 = getParentActivityIntent(r3)
            if (r0 == 0) goto La
            navigateUpTo(r3, r0)
            return
        La:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Activity "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r1.append(r3)
            java.lang.String r3 = " does not have a parent activity name specified."
            r1.append(r3)
            java.lang.String r3 = " (Did you forget to add the android.support.PARENT_ACTIVITY <meta-data> "
            r1.append(r3)
            java.lang.String r3 = " element in your manifest?)"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static void navigateUpTo(android.app.Activity r2, android.content.Intent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.navigateUpTo(r3)
            goto L15
        La:
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r3.addFlags(r0)
            r2.startActivity(r3)
            r2.finish()
        L15:
            return
    }

    public static boolean shouldUpRecreateTask(android.app.Activity r2, android.content.Intent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lb
            boolean r2 = r2.shouldUpRecreateTask(r3)
            return r2
        Lb:
            android.content.Intent r2 = r2.getIntent()
            java.lang.String r2 = r2.getAction()
            if (r2 == 0) goto L1f
            java.lang.String r3 = "android.intent.action.MAIN"
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L1f
            r2 = 1
            goto L20
        L1f:
            r2 = 0
        L20:
            return r2
    }
}
