package com.ss.android.socialbase.appdownloader.c;

public class pt {
    private static java.lang.String c = null;
    public static java.lang.String df = "";
    private static java.lang.String fw = null;
    private static java.lang.String pp = null;
    private static java.lang.String pt = "";
    public static java.lang.String q;
    public static java.lang.String rg;

    static {
            return
    }

    public static java.lang.String b() {
            java.lang.String r0 = android.os.Build.DISPLAY
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            goto Ld
        L7:
            java.lang.String r0 = android.os.Build.DISPLAY
            java.lang.String r0 = r0.trim()
        Ld:
            return r0
    }

    public static java.lang.String bm() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            goto Ld
        L7:
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.trim()
        Ld:
            return r0
    }

    public static boolean c() {
            java.lang.String r0 = "SAMSUNG"
            boolean r0 = rg(r0)
            return r0
    }

    public static java.lang.String df(java.lang.String r6) {
            r0 = 0
            r1 = 1
            r2 = 0
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L3b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            r4.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r5 = "getprop "
            r4.append(r5)     // Catch: java.lang.Throwable -> L3b
            r4.append(r6)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Throwable -> L3b
            java.lang.Process r6 = r3.exec(r6)     // Catch: java.lang.Throwable -> L3b
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3b
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L3b
            java.io.InputStream r6 = r6.getInputStream()     // Catch: java.lang.Throwable -> L3b
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L3b
            r6 = 1024(0x400, float:1.435E-42)
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r6 = r3.readLine()     // Catch: java.lang.Throwable -> L3c
            r3.close()     // Catch: java.lang.Throwable -> L3c
            java.io.Closeable[] r1 = new java.io.Closeable[r1]
            r1[r0] = r3
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r1)
            return r6
        L3b:
            r3 = r2
        L3c:
            java.io.Closeable[] r6 = new java.io.Closeable[r1]
            r6[r0] = r3
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r6)
            return r2
    }

    public static boolean df() {
            java.lang.String r0 = "MIUI"
            boolean r0 = rg(r0)
            return r0
    }

    public static boolean f() {
            un()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.fw
            java.lang.String r1 = "V12"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public static java.lang.String fw() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.pp
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            rg(r0)
        L9:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.pp
            return r0
    }

    public static boolean hq() {
            un()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.fw
            java.lang.String r1 = "V10"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public static boolean oh() {
            un()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.fw
            java.lang.String r1 = "V11"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public static boolean pp() {
            java.lang.String r0 = "FLYME"
            boolean r0 = rg(r0)
            return r0
    }

    public static java.lang.String pt(java.lang.String r3) {
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            java.lang.String r1 = "enable_reflect_system_properties"
            r2 = 1
            boolean r0 = r0.optBoolean(r1, r2)
            if (r0 == 0) goto L1b
            java.lang.String r3 = q(r3)     // Catch: java.lang.Throwable -> L12
            goto L1f
        L12:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r3 = df(r3)
            goto L1f
        L1b:
            java.lang.String r3 = df(r3)
        L1f:
            return r3
    }

    public static boolean pt() {
            v()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.rg
            boolean r0 = rg(r0)
            return r0
    }

    public static java.lang.String q(java.lang.String r5) throws java.lang.Throwable {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "get"
            java.lang.reflect.Method r0 = r0.getMethod(r3, r2)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r4] = r5
            r5 = 0
            java.lang.Object r5 = r0.invoke(r5, r1)
            java.lang.String r5 = (java.lang.String) r5
            return r5
    }

    public static boolean q() {
            java.lang.String r0 = "VIVO"
            boolean r0 = rg(r0)
            return r0
    }

    public static boolean rg() {
            java.lang.String r0 = "EMUI"
            boolean r0 = rg(r0)
            return r0
    }

    public static boolean rg(java.lang.String r4) {
            v()
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.pp
            if (r0 == 0) goto Lc
            boolean r4 = r0.equals(r4)
            return r4
        Lc:
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L28
            java.lang.String r0 = "MIUI"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.xiaomi.market"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.c
            com.ss.android.socialbase.appdownloader.c.pt.fw = r0
            goto L164
        L28:
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L40
            java.lang.String r0 = "EMUI"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.huawei.appmarket"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L40:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.pt
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "com.heytap.market"
            r2 = -1
            if (r0 != 0) goto L67
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.rg
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.df
            int r0 = com.ss.android.socialbase.appdownloader.fw.rg(r0)
            if (r0 <= r2) goto L63
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.df
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L63:
            com.ss.android.socialbase.appdownloader.c.pt.q = r1
            goto L164
        L67:
            java.lang.String r0 = "ro.vivo.os.version"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L7f
            java.lang.String r0 = "VIVO"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.bbk.appstore"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L7f:
            java.lang.String r0 = "ro.smartisan.version"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L97
            java.lang.String r0 = "SMARTISAN"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.smartisanos.appstore"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L97:
            java.lang.String r0 = "ro.gn.sv.version"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Laf
            java.lang.String r0 = "QIONEE"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.gionee.aora.market"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        Laf:
            java.lang.String r0 = "ro.lenovo.lvp.version"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc7
            java.lang.String r0 = "LENOVO"
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = "com.lenovo.leos.appstore"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        Lc7:
            java.lang.String r0 = bm()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r3 = "SAMSUNG"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto Ldf
            com.ss.android.socialbase.appdownloader.c.pt.pp = r3
            java.lang.String r0 = "com.sec.android.app.samsungapps"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        Ldf:
            java.lang.String r0 = bm()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r3 = "ZTE"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto Lf6
            com.ss.android.socialbase.appdownloader.c.pt.pp = r3
            java.lang.String r0 = "zte.com.market"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        Lf6:
            java.lang.String r0 = bm()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r3 = "NUBIA"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L10d
            com.ss.android.socialbase.appdownloader.c.pt.pp = r3
            java.lang.String r0 = "cn.nubia.neostore"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L10d:
            java.lang.String r0 = b()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r3 = "FLYME"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L12a
            com.ss.android.socialbase.appdownloader.c.pt.pp = r3
            java.lang.String r0 = "com.meizu.mstore"
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            java.lang.String r0 = b()
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            goto L164
        L12a:
            java.lang.String r0 = bm()
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r3 = "ONEPLUS"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L154
            com.ss.android.socialbase.appdownloader.c.pt.pp = r3
            java.lang.String r0 = "ro.rom.version"
            java.lang.String r0 = pt(r0)
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.df
            int r0 = com.ss.android.socialbase.appdownloader.fw.rg(r0)
            if (r0 <= r2) goto L151
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.df
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            goto L164
        L151:
            com.ss.android.socialbase.appdownloader.c.pt.q = r1
            goto L164
        L154:
            java.lang.String r0 = bm()
            java.lang.String r0 = r0.toUpperCase()
            com.ss.android.socialbase.appdownloader.c.pt.pp = r0
            java.lang.String r0 = ""
            com.ss.android.socialbase.appdownloader.c.pt.q = r0
            com.ss.android.socialbase.appdownloader.c.pt.c = r0
        L164:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.pp
            boolean r4 = r0.equals(r4)
            return r4
    }

    public static java.lang.String rz() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.q
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            rg(r0)
        L9:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.q
            return r0
    }

    private static void un() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.fw
            if (r0 != 0) goto L19
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = pt(r0)     // Catch: java.lang.Exception -> Ld
            com.ss.android.socialbase.appdownloader.c.pt.fw = r0     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r0 = move-exception
            r0.printStackTrace()
        L11:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.fw
            if (r0 != 0) goto L17
            java.lang.String r0 = ""
        L17:
            com.ss.android.socialbase.appdownloader.c.pt.fw = r0
        L19:
            return
    }

    public static java.lang.String ux() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.c
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            rg(r0)
        L9:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.c
            return r0
    }

    private static void v() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.pt.rg
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L43
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.ensureOPPO()
            java.lang.String r0 = com.ss.android.socialbase.downloader.constants.DownloadConstants.UPPER_OPPO
            com.ss.android.socialbase.appdownloader.c.pt.rg = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ro.build.version."
            r0.append(r1)
            java.lang.String r1 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r0.append(r1)
            java.lang.String r1 = "rom"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.appdownloader.c.pt.pt = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "com."
            r0.append(r1)
            java.lang.String r1 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r0.append(r1)
            java.lang.String r1 = ".market"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.appdownloader.c.pt.df = r0
        L43:
            return
    }
}
