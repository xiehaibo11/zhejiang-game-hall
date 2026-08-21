package android.support.v4.app;

public class AppLaunchChecker {
    private static final java.lang.String KEY_STARTED_FROM_LAUNCHER = "startedFromLauncher";
    private static final java.lang.String SHARED_PREFS_NAME = "android.support.AppLaunchChecker";

    @java.lang.Deprecated
    public AppLaunchChecker() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean hasStartedFromLauncher(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "android.support.AppLaunchChecker"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            java.lang.String r1 = "startedFromLauncher"
            boolean r2 = r2.getBoolean(r1, r0)
            return r2
    }

    public static void onActivityCreate(android.app.Activity r4) {
            r0 = 0
            java.lang.String r1 = "android.support.AppLaunchChecker"
            android.content.SharedPreferences r1 = r4.getSharedPreferences(r1, r0)
            java.lang.String r2 = "startedFromLauncher"
            boolean r0 = r1.getBoolean(r2, r0)
            if (r0 == 0) goto L10
            return
        L10:
            android.content.Intent r4 = r4.getIntent()
            if (r4 != 0) goto L17
            return
        L17:
            java.lang.String r0 = r4.getAction()
            java.lang.String r3 = "android.intent.action.MAIN"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L3f
            java.lang.String r0 = "android.intent.category.LAUNCHER"
            boolean r0 = r4.hasCategory(r0)
            if (r0 != 0) goto L33
            java.lang.String r0 = "android.intent.category.LEANBACK_LAUNCHER"
            boolean r4 = r4.hasCategory(r0)
            if (r4 == 0) goto L3f
        L33:
            android.content.SharedPreferences$Editor r4 = r1.edit()
            r0 = 1
            android.content.SharedPreferences$Editor r4 = r4.putBoolean(r2, r0)
            r4.apply()
        L3f:
            return
    }
}
