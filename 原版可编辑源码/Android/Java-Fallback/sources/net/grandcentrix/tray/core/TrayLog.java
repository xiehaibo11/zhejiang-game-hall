package net.grandcentrix.tray.core;

public class TrayLog {
    public static boolean DEBUG;
    private static java.lang.String TAG;

    static {
            java.lang.String r0 = "Tray"
            net.grandcentrix.tray.core.TrayLog.TAG = r0
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            r1 = 2
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            net.grandcentrix.tray.core.TrayLog.DEBUG = r0
            return
    }

    TrayLog() {
            r2 = this;
            r2.<init>()
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "no instances"
            r0.<init>(r1)
            throw r0
    }

    public static void d(java.lang.String r1) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.d(r0, r1)
            return
    }

    public static void e(java.lang.String r1) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.e(r0, r1)
            return
    }

    public static void e(java.lang.Throwable r1, java.lang.String r2) {
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.e(r0, r2, r1)
            return
    }

    public static void setTag(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Changing log tag to "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            d(r0)
            net.grandcentrix.tray.core.TrayLog.TAG = r2
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            r1 = 2
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            net.grandcentrix.tray.core.TrayLog.DEBUG = r0
            return
    }

    public static void v(java.lang.String r1) {
            boolean r0 = net.grandcentrix.tray.core.TrayLog.DEBUG
            if (r0 == 0) goto Ld
            if (r1 != 0) goto L8
            java.lang.String r1 = ""
        L8:
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.v(r0, r1)
        Ld:
            return
    }

    public static void w(java.lang.String r1) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.w(r0, r1)
            return
    }

    public static void wtf(java.lang.String r1) {
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.wtf(r0, r1)
            return
    }

    public static void wtf(java.lang.Throwable r1, java.lang.String r2) {
            java.lang.String r0 = net.grandcentrix.tray.core.TrayLog.TAG
            android.util.Log.wtf(r0, r2, r1)
            return
    }
}
