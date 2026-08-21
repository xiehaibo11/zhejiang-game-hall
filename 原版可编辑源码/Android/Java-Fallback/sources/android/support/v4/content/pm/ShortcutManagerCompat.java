package android.support.v4.content.pm;

public class ShortcutManagerCompat {
    static final java.lang.String ACTION_INSTALL_SHORTCUT = "com.android.launcher.action.INSTALL_SHORTCUT";
    static final java.lang.String INSTALL_SHORTCUT_PERMISSION = "com.android.launcher.permission.INSTALL_SHORTCUT";


    private ShortcutManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent createShortcutResultIntent(android.content.Context r2, android.support.v4.content.pm.ShortcutInfoCompat r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L17
            java.lang.Class<android.content.pm.ShortcutManager> r0 = android.content.pm.ShortcutManager.class
            java.lang.Object r2 = r2.getSystemService(r0)
            android.content.pm.ShortcutManager r2 = (android.content.pm.ShortcutManager) r2
            android.content.pm.ShortcutInfo r0 = r3.toShortcutInfo()
            android.content.Intent r2 = r2.createShortcutResultIntent(r0)
            goto L18
        L17:
            r2 = 0
        L18:
            if (r2 != 0) goto L1f
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
        L1f:
            android.content.Intent r2 = r3.addToIntent(r2)
            return r2
    }

    public static boolean isRequestPinShortcutSupported(android.content.Context r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L13
            java.lang.Class<android.content.pm.ShortcutManager> r0 = android.content.pm.ShortcutManager.class
            java.lang.Object r4 = r4.getSystemService(r0)
            android.content.pm.ShortcutManager r4 = (android.content.pm.ShortcutManager) r4
            boolean r4 = r4.isRequestPinShortcutSupported()
            return r4
        L13:
            java.lang.String r0 = "com.android.launcher.permission.INSTALL_SHORTCUT"
            int r1 = android.support.v4.content.ContextCompat.checkSelfPermission(r4, r0)
            r2 = 0
            if (r1 == 0) goto L1d
            return r2
        L1d:
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.android.launcher.action.INSTALL_SHORTCUT"
            r1.<init>(r3)
            java.util.List r4 = r4.queryBroadcastReceivers(r1, r2)
            java.util.Iterator r4 = r4.iterator()
        L30:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L4e
            java.lang.Object r1 = r4.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ActivityInfo r1 = r1.activityInfo
            java.lang.String r1 = r1.permission
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L4c
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L30
        L4c:
            r4 = 1
            return r4
        L4e:
            return r2
    }

    public static boolean requestPinShortcut(android.content.Context r10, android.support.v4.content.pm.ShortcutInfoCompat r11, android.content.IntentSender r12) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L17
            java.lang.Class<android.content.pm.ShortcutManager> r0 = android.content.pm.ShortcutManager.class
            java.lang.Object r10 = r10.getSystemService(r0)
            android.content.pm.ShortcutManager r10 = (android.content.pm.ShortcutManager) r10
            android.content.pm.ShortcutInfo r11 = r11.toShortcutInfo()
            boolean r10 = r10.requestPinShortcut(r11, r12)
            return r10
        L17:
            boolean r0 = isRequestPinShortcutSupported(r10)
            if (r0 != 0) goto L1f
            r10 = 0
            return r10
        L1f:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.android.launcher.action.INSTALL_SHORTCUT"
            r0.<init>(r1)
            android.content.Intent r3 = r11.addToIntent(r0)
            r11 = 1
            if (r12 != 0) goto L31
            r10.sendBroadcast(r3)
            return r11
        L31:
            r4 = 0
            android.support.v4.content.pm.ShortcutManagerCompat$1 r5 = new android.support.v4.content.pm.ShortcutManagerCompat$1
            r5.<init>(r12)
            r6 = 0
            r7 = -1
            r8 = 0
            r9 = 0
            r2 = r10
            r2.sendOrderedBroadcast(r3, r4, r5, r6, r7, r8, r9)
            return r11
    }
}
