package com.ss.android.downloadlib.utils;

public class b {
    private static java.lang.Object[] df;
    private static java.lang.String pt;
    private static java.lang.Object[] q;
    static final char[] rg = null;

    static {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.ss.android.downloadlib.utils.b.df = r0
            r0 = 73
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.ss.android.downloadlib.utils.b.q = r0
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0018: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.ss.android.downloadlib.utils.b.rg = r0
            r0 = 0
            com.ss.android.downloadlib.utils.b.pt = r0
            return
    }

    public static android.content.Intent c(android.content.Context r2, java.lang.String r3) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            android.content.Intent r2 = r2.getLaunchIntentForPackage(r3)
            r3 = 0
            if (r2 != 0) goto Lc
            return r3
        Lc:
            java.lang.String r0 = "android.intent.category.LAUNCHER"
            boolean r1 = r2.hasCategory(r0)
            if (r1 != 0) goto L17
            r2.addCategory(r0)
        L17:
            r2.setPackage(r3)
            r3 = 2097152(0x200000, float:2.938736E-39)
            r2.addFlags(r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r3)
            return r2
    }

    public static int df(android.content.Context r1, java.lang.String r2) {
            if (r1 == 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r0 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            if (r1 == 0) goto L16
            int r1 = r1.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            return r1
        L16:
            r1 = -1
            return r1
    }

    public static java.util.HashMap<java.lang.String, java.lang.String> df(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 == 0) goto L24
            java.util.Iterator r1 = r4.keys()     // Catch: java.lang.Exception -> L20
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L20
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L20
            java.lang.String r3 = r4.optString(r2)     // Catch: java.lang.Exception -> L20
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L20
            goto Lb
        L1f:
            return r0
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            return r0
    }

    public static void df() {
            com.ss.android.download.api.config.rz r0 = com.ss.android.downloadlib.addownload.bm.pp()     // Catch: java.lang.Exception -> L4e
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L4e
            java.lang.String r2 = "android.permission.REORDER_TASKS"
            boolean r0 = r0.rg(r1, r2)     // Catch: java.lang.Exception -> L4e
            if (r0 != 0) goto L11
            return
        L11:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L4e
            java.lang.String r1 = "activity"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.Exception -> L4e
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0     // Catch: java.lang.Exception -> L4e
            r1 = 20
            java.util.List r1 = r0.getRunningTasks(r1)     // Catch: java.lang.Exception -> L4e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L4e
        L27:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L4e
            if (r2 == 0) goto L52
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L4e
            android.app.ActivityManager$RunningTaskInfo r2 = (android.app.ActivityManager.RunningTaskInfo) r2     // Catch: java.lang.Exception -> L4e
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L4e
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L4e
            android.content.ComponentName r4 = r2.topActivity     // Catch: java.lang.Exception -> L4e
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L4e
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L4e
            if (r3 == 0) goto L27
            int r1 = r2.id     // Catch: java.lang.Exception -> L4e
            r2 = 1
            r0.moveTaskToFront(r1, r2)     // Catch: java.lang.Exception -> L4e
            goto L52
        L4e:
            r0 = move-exception
            r0.printStackTrace()
        L52:
            return
    }

    public static boolean df(android.content.Context r2, android.content.Intent r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            if (r2 != 0) goto La
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
        La:
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r1 = 65536(0x10000, float:9.1835E-41)
            java.util.List r2 = r2.queryIntentActivities(r3, r1)
            if (r2 == 0) goto L1d
            int r2 = r2.size()
            if (r2 <= 0) goto L1d
            r0 = 1
        L1d:
            return r0
    }

    public static boolean df(com.ss.android.downloadad.api.rg.df r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = r2.pp()
            int r1 = r2.g()
            java.lang.String r2 = r2.oy()
            com.ss.android.downloadlib.addownload.model.q r2 = rg(r0, r1, r2)
            boolean r2 = r2.rg()
            return r2
    }

    public static boolean df(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L15
            r2 = 1
            return r2
        L15:
            return r1
    }

    public static android.content.pm.Signature[] fw(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Lf
            r0 = 64
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto L13
            android.content.pm.Signature[] r1 = r1.signatures     // Catch: java.lang.Throwable -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
        L13:
            r1 = 0
            return r1
    }

    public static boolean pp(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L42
            if (r3 == 0) goto L42
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto Lc
            goto L42
        Lc:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3e
            r1.<init>(r3)     // Catch: java.lang.Exception -> L3e
            boolean r3 = r1.exists()     // Catch: java.lang.Exception -> L3e
            if (r3 == 0) goto L42
            android.content.pm.PackageManager r3 = r2.getPackageManager()     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> L3e
            android.content.pm.PackageInfo r3 = r3.getPackageArchiveInfo(r1, r0)     // Catch: java.lang.Exception -> L3e
            if (r3 != 0) goto L26
            return r0
        L26:
            java.lang.String r1 = r3.packageName     // Catch: java.lang.Exception -> L3e
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L3e
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33 java.lang.Exception -> L3e
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r1, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33 java.lang.Exception -> L3e
            goto L34
        L33:
            r2 = 0
        L34:
            if (r2 != 0) goto L37
            goto L42
        L37:
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L3e
            if (r3 > r2) goto L42
            r2 = 1
            r0 = r2
            goto L42
        L3e:
            r2 = move-exception
            r2.printStackTrace()
        L42:
            return r0
    }

    public static boolean pt(android.content.Context r2, java.lang.String r3) {
            if (r2 != 0) goto L6
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
        L6:
            r0 = 0
            if (r2 == 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L1b
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> L1b
            if (r2 == 0) goto L1b
            r2 = 1
            r0 = r2
        L1b:
            return r0
    }

    public static android.graphics.drawable.Drawable q(android.content.Context r1, java.lang.String r2) {
            if (r1 == 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r0 = 0
            android.content.pm.ApplicationInfo r2 = r1.getApplicationInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            android.graphics.drawable.Drawable r1 = r2.loadIcon(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            goto L17
        L16:
            r1 = 0
        L17:
            return r1
    }

    public static boolean q(java.lang.String r7) {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            boolean r1 = pt(r0, r7)
            if (r1 != 0) goto L13
            return r2
        L13:
            android.content.pm.ApplicationInfo r1 = r0.getApplicationInfo()
            int r1 = r1.targetSdkVersion
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r4 = "get_ext_dir_mode"
            int r3 = r3.optInt(r4)
            r5 = 1
            r6 = 29
            if (r3 != 0) goto L37
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 < r6) goto L37
            if (r1 != r6) goto L34
            boolean r3 = android.os.Environment.isExternalStorageLegacy()
            if (r3 == 0) goto L36
        L34:
            if (r1 <= r6) goto L37
        L36:
            return r5
        L37:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L8d
            if (r1 < r6) goto L52
            android.content.pm.ApplicationInfo r1 = r0.getApplicationInfo()     // Catch: java.lang.Exception -> L8d
            int r1 = r1.targetSdkVersion     // Catch: java.lang.Exception -> L8d
            if (r1 < r6) goto L52
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> L8d
            int r1 = r1.optInt(r4)     // Catch: java.lang.Exception -> L8d
            if (r1 != r5) goto L52
            java.io.File r1 = rz(r0, r7)     // Catch: java.lang.Exception -> L8d
            goto L70
        L52:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L8d
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L8d
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Exception -> L8d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8d
            r4.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.String r6 = "android/data/"
            r4.append(r6)     // Catch: java.lang.Exception -> L8d
            r4.append(r7)     // Catch: java.lang.Exception -> L8d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L8d
            r1.<init>(r3, r4)     // Catch: java.lang.Exception -> L8d
        L70:
            boolean r3 = r1.exists()     // Catch: java.lang.Exception -> L8d
            if (r3 != 0) goto L77
            return r2
        L77:
            long r3 = com.ss.android.downloadlib.utils.c.rg(r1)     // Catch: java.lang.Exception -> L8d
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L8d
            android.content.pm.PackageInfo r7 = r0.getPackageInfo(r7, r2)     // Catch: java.lang.Exception -> L8d
            if (r7 == 0) goto L8c
            long r0 = r7.lastUpdateTime     // Catch: java.lang.Exception -> L8d
            int r7 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r7 >= 0) goto L8c
            return r5
        L8c:
            return r2
        L8d:
            r7 = move-exception
            r7.printStackTrace()
            return r5
    }

    public static int rg(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public static int rg(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "\\."
            r1 = -2
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L64
            if (r2 != 0) goto L64
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L64
            if (r2 == 0) goto L10
            goto L64
        L10:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Exception -> L64
            r3 = 0
            if (r2 == 0) goto L18
            return r3
        L18:
            java.lang.String[] r7 = r7.split(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String[] r8 = r8.split(r0)     // Catch: java.lang.Exception -> L64
            int r0 = r7.length     // Catch: java.lang.Exception -> L64
            int r2 = r8.length     // Catch: java.lang.Exception -> L64
            int r0 = java.lang.Math.min(r0, r2)     // Catch: java.lang.Exception -> L64
            r2 = r3
            r4 = r2
        L28:
            if (r2 >= r0) goto L3c
            r4 = r7[r2]     // Catch: java.lang.Exception -> L64
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Exception -> L64
            r5 = r8[r2]     // Catch: java.lang.Exception -> L64
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L64
            int r4 = r4 - r5
            if (r4 != 0) goto L3c
            int r2 = r2 + 1
            goto L28
        L3c:
            r0 = -1
            r5 = 1
            if (r4 != 0) goto L60
            r4 = r2
        L41:
            int r6 = r7.length     // Catch: java.lang.Exception -> L64
            if (r4 >= r6) goto L50
            r6 = r7[r4]     // Catch: java.lang.Exception -> L64
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L64
            if (r6 <= 0) goto L4d
            return r5
        L4d:
            int r4 = r4 + 1
            goto L41
        L50:
            int r7 = r8.length     // Catch: java.lang.Exception -> L64
            if (r2 >= r7) goto L5f
            r7 = r8[r2]     // Catch: java.lang.Exception -> L64
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L64
            if (r7 <= 0) goto L5c
            return r0
        L5c:
            int r2 = r2 + 1
            goto L50
        L5f:
            return r3
        L60:
            if (r4 <= 0) goto L63
            r0 = r5
        L63:
            return r0
        L64:
            return r1
    }

    public static long rg(long r1) {
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L9
            long r1 = rg(r0, r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    public static long rg(java.io.File r4) {
            r0 = -1
            if (r4 != 0) goto L5
            return r0
        L5:
            android.os.StatFs r2 = new android.os.StatFs     // Catch: java.lang.Throwable -> L19
            java.lang.String r4 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L19
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L19
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L19
            r3 = 18
            if (r4 < r3) goto L1d
            long r0 = r2.getTotalBytes()     // Catch: java.lang.Throwable -> L19
            goto L1d
        L19:
            r4 = move-exception
            r4.printStackTrace()
        L1d:
            return r0
    }

    public static long rg(java.io.File r0, long r1) {
            if (r0 != 0) goto L3
            return r1
        L3:
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Exception -> Lc
            long r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getAvailableSpaceBytes(r0)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return r1
    }

    public static long rg(org.json.JSONObject r0, java.lang.String r1) {
            long r0 = com.ss.android.download.api.q.df.rg(r0, r1)
            return r0
    }

    public static android.content.pm.PackageInfo rg(com.ss.android.downloadad.api.rg.df r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)
            int r4 = r4.qx()
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r1.getDownloadInfo(r4)
            if (r4 != 0) goto L17
            return r0
        L17:
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r4.getSavePath()     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = r4.getName()     // Catch: java.lang.Throwable -> L28
            android.content.pm.PackageInfo r4 = com.ss.android.socialbase.appdownloader.q.rg(r1, r4, r2, r3)     // Catch: java.lang.Throwable -> L28
            return r4
        L28:
            return r0
    }

    public static android.graphics.drawable.Drawable rg(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L24
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L24
        La:
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r1 = 0
            android.content.pm.PackageInfo r1 = r2.getPackageArchiveInfo(r3, r1)
            if (r1 == 0) goto L24
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo
            r1.sourceDir = r3
            r1.publicSourceDir = r3
            android.graphics.drawable.Drawable r2 = r1.loadIcon(r2)     // Catch: java.lang.Exception -> L20
            return r2
        L20:
            r2 = move-exception
            r2.printStackTrace()
        L24:
            return r0
    }

    public static com.ss.android.downloadlib.addownload.model.q rg(java.lang.String r3, int r4, java.lang.String r5) {
            com.ss.android.downloadlib.addownload.model.q r0 = new com.ss.android.downloadlib.addownload.model.q
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L41
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L41
            r2 = 0
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L45
            int r1 = r3.versionCode     // Catch: java.lang.Exception -> L41
            r0.df(r1)     // Catch: java.lang.Exception -> L41
            int r1 = com.ss.android.downloadlib.addownload.model.q.df     // Catch: java.lang.Exception -> L41
            r0.rg(r1)     // Catch: java.lang.Exception -> L41
            com.ss.android.download.api.config.v r1 = com.ss.android.downloadlib.addownload.bm.fw()     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L45
            boolean r1 = r1.rg()     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L45
            int r1 = r3.versionCode     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L41
            boolean r3 = rg(r1, r4, r3, r5)     // Catch: java.lang.Exception -> L41
            if (r3 != 0) goto L45
            int r3 = com.ss.android.downloadlib.addownload.model.q.q     // Catch: java.lang.Exception -> L41
            r0.rg(r3)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r3 = move-exception
            r3.printStackTrace()
        L45:
            return r0
    }

    public static <T> T rg(T... r4) {
            java.lang.String r0 = "args is null"
            if (r4 == 0) goto L16
            int r1 = r4.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L10
            r3 = r4[r2]
            if (r3 == 0) goto Ld
            return r3
        Ld:
            int r2 = r2 + 1
            goto L6
        L10:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>(r0)
            throw r4
        L16:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>(r0)
            throw r4
    }

    public static java.lang.String rg(java.lang.String r1, int r2) {
            if (r2 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            int r0 = r1.length()
            if (r0 > r2) goto L12
            goto L17
        L12:
            r0 = 0
            java.lang.String r1 = r1.substring(r0, r2)
        L17:
            return r1
    }

    public static java.lang.String rg(java.lang.String... r0) {
            java.lang.String r0 = com.ss.android.download.api.q.df.rg(r0)
            return r0
    }

    public static org.json.JSONObject rg(org.json.JSONObject r0) {
            org.json.JSONObject r0 = com.ss.android.download.api.q.df.rg(r0)
            return r0
    }

    public static org.json.JSONObject rg(org.json.JSONObject r0, org.json.JSONObject r1) {
            org.json.JSONObject r0 = com.ss.android.download.api.q.df.rg(r0, r1)
            return r0
    }

    public static org.json.JSONObject rg(org.json.JSONObject... r0) {
            org.json.JSONObject r0 = com.ss.android.download.api.q.df.rg(r0)
            return r0
    }

    public static void rg(org.json.JSONObject r1, java.lang.String r2, java.lang.Object r3) {
            if (r1 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto L11
        L9:
            r1.putOpt(r2, r3)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static boolean rg() {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private static boolean rg(int r2, int r3, java.lang.String r4, java.lang.String r5) {
            r0 = 1
            if (r3 != 0) goto La
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto La
            return r0
        La:
            if (r3 <= 0) goto Lf
            if (r2 < r3) goto Lf
            return r0
        Lf:
            int r2 = rg(r4, r5)
            if (r2 < 0) goto L16
            return r0
        L16:
            r2 = 0
            return r2
    }

    public static boolean rg(android.content.Context r2, android.content.Intent r3) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L14
            r1 = 65536(0x10000, float:9.1835E-41)
            java.util.List r2 = r2.queryIntentActivities(r3, r1)     // Catch: java.lang.Exception -> L14
            if (r2 == 0) goto L14
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Exception -> L14
            if (r2 != 0) goto L14
            r0 = 1
        L14:
            return r0
    }

    public static boolean rg(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            if (r2 == 0) goto L4d
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L4d
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L10
            goto L4d
        L10:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L49
            r1.<init>(r3)     // Catch: java.lang.Exception -> L49
            boolean r3 = r1.exists()     // Catch: java.lang.Exception -> L49
            if (r3 == 0) goto L4d
            android.content.pm.PackageManager r3 = r2.getPackageManager()     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> L49
            android.content.pm.PackageInfo r3 = r3.getPackageArchiveInfo(r1, r0)     // Catch: java.lang.Exception -> L49
            if (r3 != 0) goto L2a
            return r0
        L2a:
            java.lang.String r1 = r3.packageName     // Catch: java.lang.Exception -> L49
            boolean r1 = r1.equals(r4)     // Catch: java.lang.Exception -> L49
            if (r1 != 0) goto L33
            return r0
        L33:
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L49
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3e java.lang.Exception -> L49
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r4, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3e java.lang.Exception -> L49
            goto L3f
        L3e:
            r2 = 0
        L3f:
            if (r2 != 0) goto L42
            goto L4d
        L42:
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L49
            if (r3 != r2) goto L4d
            r2 = 1
            r0 = r2
            goto L4d
        L49:
            r2 = move-exception
            r2.printStackTrace()
        L4d:
            return r0
    }

    public static boolean rg(com.ss.android.download.api.download.DownloadModel r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = r2.getPackageName()
            int r1 = r2.getVersionCode()
            java.lang.String r2 = r2.getVersionName()
            com.ss.android.downloadlib.addownload.model.q r2 = rg(r0, r1, r2)
            boolean r2 = r2.rg()
            return r2
    }

    public static boolean rg(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static boolean rg(android.content.pm.Signature[] r5, android.content.pm.Signature[] r6) {
            r0 = 1
            if (r5 != r6) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2e
            if (r6 != 0) goto La
            goto L2e
        La:
            int r2 = r5.length
            int r3 = r6.length
            if (r2 == r3) goto Lf
            return r1
        Lf:
            r2 = r1
        L10:
            int r3 = r5.length
            if (r2 >= r3) goto L2d
            r3 = r5[r2]
            if (r3 != 0) goto L1b
            r3 = r6[r2]
            if (r3 != 0) goto L29
        L1b:
            r3 = r5[r2]
            if (r3 == 0) goto L2a
            r3 = r5[r2]
            r4 = r6[r2]
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L2a
        L29:
            return r1
        L2a:
            int r2 = r2 + 1
            goto L10
        L2d:
            return r0
        L2e:
            return r1
    }

    public static java.io.File rz(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            java.io.File r2 = r2.getExternalFilesDir(r0)
            java.io.File r2 = r2.getParentFile()
            if (r2 == 0) goto Lf
            java.lang.String r0 = r2.getParent()
        Lf:
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r2.<init>(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "getExtDir: file.toString()-->"
            r3.append(r0)
            java.lang.String r0 = r2.toString()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "ToolUtils"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r3)
            return r2
    }

    public static android.content.pm.Signature[] ux(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Lf
            r0 = 64
            android.content.pm.PackageInfo r1 = r1.getPackageArchiveInfo(r2, r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto L13
            android.content.pm.Signature[] r1 = r1.signatures     // Catch: java.lang.Throwable -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
        L13:
            r1 = 0
            return r1
    }
}
