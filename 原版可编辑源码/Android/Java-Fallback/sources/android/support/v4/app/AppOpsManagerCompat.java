package android.support.v4.app;

public final class AppOpsManagerCompat {
    public static final int MODE_ALLOWED = 0;
    public static final int MODE_DEFAULT = 3;
    public static final int MODE_ERRORED = 2;
    public static final int MODE_IGNORED = 1;

    private AppOpsManagerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int noteOp(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L13
            java.lang.String r0 = "appops"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.AppOpsManager r2 = (android.app.AppOpsManager) r2
            int r2 = r2.noteOp(r3, r4, r5)
            return r2
        L13:
            r2 = 1
            return r2
    }

    public static int noteOpNoThrow(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L13
            java.lang.String r0 = "appops"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.AppOpsManager r2 = (android.app.AppOpsManager) r2
            int r2 = r2.noteOpNoThrow(r3, r4, r5)
            return r2
        L13:
            r2 = 1
            return r2
    }

    public static int noteProxyOp(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L13
            java.lang.Class<android.app.AppOpsManager> r0 = android.app.AppOpsManager.class
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.AppOpsManager r2 = (android.app.AppOpsManager) r2
            int r2 = r2.noteProxyOp(r3, r4)
            return r2
        L13:
            r2 = 1
            return r2
    }

    public static int noteProxyOpNoThrow(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L13
            java.lang.Class<android.app.AppOpsManager> r0 = android.app.AppOpsManager.class
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.AppOpsManager r2 = (android.app.AppOpsManager) r2
            int r2 = r2.noteProxyOpNoThrow(r3, r4)
            return r2
        L13:
            r2 = 1
            return r2
    }

    public static java.lang.String permissionToOp(java.lang.String r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            java.lang.String r2 = android.app.AppOpsManager.permissionToOp(r2)
            return r2
        Lb:
            r2 = 0
            return r2
    }
}
