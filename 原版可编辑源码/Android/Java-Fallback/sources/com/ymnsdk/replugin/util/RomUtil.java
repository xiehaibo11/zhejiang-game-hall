package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RomUtil {
    private static final java.lang.String KEY_VERSION_EMUI = "ro.build.version.emui";
    private static final java.lang.String KEY_VERSION_MIUI = "ro.miui.ui.version.name";
    private static final java.lang.String KEY_VERSION_OPPO = "ro.build.version.opporom";
    private static final java.lang.String KEY_VERSION_SMARTISAN = "ro.smartisan.version";
    private static final java.lang.String KEY_VERSION_VIVO = "ro.vivo.os.version";
    public static final java.lang.String ROM_EMUI = "EMUI";
    public static final java.lang.String ROM_FLYME = "FLYME";
    public static final java.lang.String ROM_MIUI = "MIUI";
    public static final java.lang.String ROM_OPPO = "OPPO";
    public static final java.lang.String ROM_QIKU = "QIKU";
    public static final java.lang.String ROM_SMARTISAN = "SMARTISAN";
    public static final java.lang.String ROM_VIVO = "VIVO";
    private static final java.lang.String TAG = "Rom";
    private static java.lang.String sName;
    private static java.lang.String sVersion;

    public RomUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean check(java.lang.String r2) {
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sName
            if (r0 == 0) goto L9
            boolean r2 = r0.equals(r2)
            return r2
        L9:
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = getProp(r0)
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.lang.String r0 = "MIUI"
            com.ymnsdk.replugin.util.RomUtil.sName = r0
            goto L87
        L1c:
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r0 = getProp(r0)
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            java.lang.String r0 = "EMUI"
            com.ymnsdk.replugin.util.RomUtil.sName = r0
            goto L87
        L2f:
            java.lang.String r0 = "ro.build.version.opporom"
            java.lang.String r0 = getProp(r0)
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = "OPPO"
            com.ymnsdk.replugin.util.RomUtil.sName = r0
            goto L87
        L42:
            java.lang.String r0 = "ro.vivo.os.version"
            java.lang.String r0 = getProp(r0)
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L55
            java.lang.String r0 = "VIVO"
            com.ymnsdk.replugin.util.RomUtil.sName = r0
            goto L87
        L55:
            java.lang.String r0 = "ro.smartisan.version"
            java.lang.String r0 = getProp(r0)
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L68
            java.lang.String r0 = "SMARTISAN"
            com.ymnsdk.replugin.util.RomUtil.sName = r0
            goto L87
        L68:
            java.lang.String r0 = android.os.Build.DISPLAY
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r1 = "FLYME"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L7b
            com.ymnsdk.replugin.util.RomUtil.sName = r1
            goto L87
        L7b:
            java.lang.String r0 = "unknown"
            com.ymnsdk.replugin.util.RomUtil.sVersion = r0
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toUpperCase()
            com.ymnsdk.replugin.util.RomUtil.sName = r0
        L87:
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sName
            boolean r2 = r0.equals(r2)
            return r2
    }

    public static java.lang.String getName() {
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sName
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            check(r0)
        L9:
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sName
            return r0
    }

    public static java.lang.String getProp(java.lang.String r6) {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.lang.String r3 = "getprop "
            r2.append(r3)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            r2.append(r6)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            r1 = 1024(0x400, float:1.435E-42)
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3e
            java.lang.String r1 = r2.readLine()     // Catch: java.io.IOException -> L3a java.lang.Throwable -> L61
            r2.close()     // Catch: java.io.IOException -> L3a java.lang.Throwable -> L61
            r2.close()     // Catch: java.io.IOException -> L35
            goto L39
        L35:
            r6 = move-exception
            r6.printStackTrace()
        L39:
            return r1
        L3a:
            r1 = move-exception
            goto L40
        L3c:
            r6 = move-exception
            goto L63
        L3e:
            r1 = move-exception
            r2 = r0
        L40:
            java.lang.String r3 = "Rom"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            r4.<init>()     // Catch: java.lang.Throwable -> L61
            java.lang.String r5 = "Unable to read prop "
            r4.append(r5)     // Catch: java.lang.Throwable -> L61
            r4.append(r6)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Throwable -> L61
            android.util.Log.d(r3, r6, r1)     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L60
            r2.close()     // Catch: java.io.IOException -> L5c
            goto L60
        L5c:
            r6 = move-exception
            r6.printStackTrace()
        L60:
            return r0
        L61:
            r6 = move-exception
            r0 = r2
        L63:
            if (r0 == 0) goto L6d
            r0.close()     // Catch: java.io.IOException -> L69
            goto L6d
        L69:
            r0 = move-exception
            r0.printStackTrace()
        L6d:
            throw r6
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sVersion
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            check(r0)
        L9:
            java.lang.String r0 = com.ymnsdk.replugin.util.RomUtil.sVersion
            return r0
    }

    public static boolean is360() {
            java.lang.String r0 = "QIKU"
            boolean r0 = check(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "360"
            boolean r0 = check(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    public static boolean isEmui() {
            java.lang.String r0 = "EMUI"
            boolean r0 = check(r0)
            return r0
    }

    public static boolean isFlyme() {
            java.lang.String r0 = "FLYME"
            boolean r0 = check(r0)
            return r0
    }

    public static boolean isMiui() {
            java.lang.String r0 = "MIUI"
            boolean r0 = check(r0)
            return r0
    }

    public static boolean isOppo() {
            java.lang.String r0 = "OPPO"
            boolean r0 = check(r0)
            return r0
    }

    public static boolean isSmartisan() {
            java.lang.String r0 = "SMARTISAN"
            boolean r0 = check(r0)
            return r0
    }

    public static boolean isVivo() {
            java.lang.String r0 = "VIVO"
            boolean r0 = check(r0)
            return r0
    }
}
