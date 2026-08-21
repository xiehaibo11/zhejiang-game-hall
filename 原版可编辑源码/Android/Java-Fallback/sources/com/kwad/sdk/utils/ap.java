package com.kwad.sdk.utils;

public final class ap {
    private static java.lang.String aJa = "";
    private static volatile java.lang.Boolean aJb;

    static {
            return
    }

    private static java.lang.String IQ() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            java.lang.String r0 = android.app.Application.getProcessName()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    private static java.lang.String IR() {
            java.lang.String r0 = ""
            java.lang.String r1 = "android.app.ActivityThread"
            java.lang.Class<android.app.Application> r2 = android.app.Application.class
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Throwable -> L1f
            r3 = 0
            java.lang.Class r1 = java.lang.Class.forName(r1, r3, r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r2 = "currentProcessName"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L1f
            java.lang.Object r1 = com.kwad.sdk.utils.s.b(r1, r2, r3)     // Catch: java.lang.Throwable -> L1f
            boolean r2 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L1f
            if (r2 == 0) goto L23
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L1f
            r0 = r1
            goto L23
        L1f:
            r1 = move-exception
            r1.printStackTrace()
        L23:
            return r0
    }

    private static java.lang.String cs(android.content.Context r4) {
            java.lang.String r0 = ""
            if (r4 != 0) goto L5
            return r0
        L5:
            int r1 = android.os.Process.myPid()
            java.lang.String r2 = "activity"
            java.lang.Object r4 = r4.getSystemService(r2)
            android.app.ActivityManager r4 = (android.app.ActivityManager) r4
            if (r4 == 0) goto L30
            java.util.List r4 = r4.getRunningAppProcesses()
            if (r4 == 0) goto L30
            java.util.Iterator r4 = r4.iterator()
        L1d:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L30
            java.lang.Object r2 = r4.next()
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2
            int r3 = r2.pid
            if (r3 != r1) goto L1d
            java.lang.String r4 = r2.processName
            return r4
        L30:
            return r0
    }

    public static java.lang.String getProcessName(android.content.Context r1) {
            java.lang.String r0 = com.kwad.sdk.utils.ap.aJa
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r1 = com.kwad.sdk.utils.ap.aJa
            return r1
        Lb:
            java.lang.String r0 = IQ()
            com.kwad.sdk.utils.ap.aJa = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r1 = com.kwad.sdk.utils.ap.aJa
            return r1
        L1a:
            java.lang.String r0 = IR()
            com.kwad.sdk.utils.ap.aJa = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            java.lang.String r1 = com.kwad.sdk.utils.ap.aJa
            return r1
        L29:
            java.lang.String r1 = cs(r1)
            com.kwad.sdk.utils.ap.aJa = r1
            return r1
    }

    public static boolean isInMainProcess(android.content.Context r2) {
            java.lang.Boolean r0 = com.kwad.sdk.utils.ap.aJb
            if (r0 != 0) goto L21
            java.lang.String r0 = getProcessName(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1a
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1a
            r2 = 1
            goto L1b
        L1a:
            r2 = 0
        L1b:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            com.kwad.sdk.utils.ap.aJb = r2
        L21:
            java.lang.Boolean r2 = com.kwad.sdk.utils.ap.aJb
            boolean r2 = r2.booleanValue()
            return r2
    }
}
