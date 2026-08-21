package com.kwad.sdk.utils;

public final class ak {
    public static boolean ak(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Ld
            r1 = 1
            return r1
        Ld:
            return r0
    }

    public static int al(android.content.Context r2, java.lang.String r3) {
            r0 = -1
            if (r2 == 0) goto L47
            if (r3 != 0) goto L6
            goto L47
        L6:
            boolean r1 = com.kwad.sdk.utils.c.bF(r2)
            if (r1 == 0) goto Ld
            return r0
        Ld:
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            int r2 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r1)
            if (r2 == 0) goto L16
            return r0
        L16:
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getAbsolutePath()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "/Android/data/"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L45
            boolean r2 = r0.isDirectory()
            if (r2 == 0) goto L45
            r2 = 1
            return r2
        L45:
            r2 = 0
            return r2
        L47:
            return r0
    }

    public static boolean am(android.content.Context r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L32
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto La
            goto L32
        La:
            r1 = 1
            android.content.pm.PackageManager r2 = r5.getPackageManager()     // Catch: java.lang.Exception -> L32
            android.content.Intent r6 = r2.getLaunchIntentForPackage(r6)     // Catch: java.lang.Exception -> L32
            if (r6 != 0) goto L16
            return r0
        L16:
            java.lang.String r2 = "PackageUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L32
            java.lang.String r4 = "openApp context: "
            r3.<init>(r4)     // Catch: java.lang.Exception -> L32
            r3.append(r5)     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L32
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Exception -> L32
            r2 = 337641472(0x14200000, float:8.077936E-27)
            r6.setFlags(r2)     // Catch: java.lang.Exception -> L32
            r5.startActivity(r6)     // Catch: java.lang.Exception -> L32
            r0 = r1
        L32:
            return r0
    }

    public static boolean an(android.content.Context r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L73
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto La
            goto L73
        La:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L6f
            r1.<init>(r6)     // Catch: java.lang.Exception -> L6f
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> L6f
            java.lang.String r2 = "android.intent.action.VIEW"
            r6.<init>(r2)     // Catch: java.lang.Exception -> L6f
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r6.addFlags(r2)     // Catch: java.lang.Exception -> L6f
            r2 = 3
            r6.addFlags(r2)     // Catch: java.lang.Exception -> L6f
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L6f
            r4 = 24
            if (r3 < r4) goto L3f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6f
            r3.<init>()     // Catch: java.lang.Exception -> L6f
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Exception -> L6f
            r3.append(r4)     // Catch: java.lang.Exception -> L6f
            java.lang.String r4 = ".adFileProvider"
            r3.append(r4)     // Catch: java.lang.Exception -> L6f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L6f
            android.net.Uri r1 = com.kwad.sdk.api.core.fragment.FileProvider.getUriForFile(r5, r3, r1)     // Catch: java.lang.Exception -> L6f
            goto L43
        L3f:
            android.net.Uri r1 = android.net.Uri.fromFile(r1)     // Catch: java.lang.Exception -> L6f
        L43:
            java.lang.String r3 = "application/vnd.android.package-archive"
            r6.setDataAndType(r1, r3)     // Catch: java.lang.Exception -> L6f
            android.content.pm.PackageManager r3 = r5.getPackageManager()     // Catch: java.lang.Exception -> L6f
            r4 = 65536(0x10000, float:9.1835E-41)
            java.util.List r3 = r3.queryIntentActivities(r6, r4)     // Catch: java.lang.Exception -> L6f
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L6f
        L56:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L6f
            if (r4 == 0) goto L6a
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L6f
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4     // Catch: java.lang.Exception -> L6f
            android.content.pm.ActivityInfo r4 = r4.activityInfo     // Catch: java.lang.Exception -> L6f
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Exception -> L6f
            r5.grantUriPermission(r4, r1, r2)     // Catch: java.lang.Exception -> L6f
            goto L56
        L6a:
            r5.startActivity(r6)     // Catch: java.lang.Exception -> L6f
            r5 = 1
            return r5
        L6f:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)
        L73:
            return r0
    }

    public static void as(java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "saveDownloadFile "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PackageUtil"
            com.kwad.sdk.core.e.c.w(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L54
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L20
            goto L54
        L20:
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            if (r3 != 0) goto L31
            java.lang.String r3 = "cannot save package, download apk is not exists."
        L2d:
            com.kwad.sdk.core.e.c.w(r1, r3)
            return
        L31:
            java.lang.Class<com.kwad.sdk.service.a.e> r3 = com.kwad.sdk.service.a.e.class
            java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
            com.kwad.sdk.service.a.e r3 = (com.kwad.sdk.service.a.e) r3
            android.content.Context r3 = r3.getContext()
            if (r3 != 0) goto L40
            return
        L40:
            long r1 = r0.length()
            com.kwad.sdk.utils.y.f(r3, r4, r1)
            java.lang.String r0 = com.kwad.sdk.utils.a.getFileMD5(r0)     // Catch: java.lang.Exception -> L4f
            com.kwad.sdk.utils.y.g(r3, r4, r0)     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            return
        L54:
            java.lang.String r3 = "cannot save package, has no download apk info."
            goto L2d
    }

    public static int at(java.lang.String r7, java.lang.String r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "isPackageChanged "
            r0.<init>(r1)
            r0.append(r7)
            java.lang.String r1 = " packageName "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PackageUtil"
            com.kwad.sdk.core.e.c.w(r1, r0)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r2 = 0
            if (r0 != 0) goto L2b
            return r2
        L2b:
            long r3 = com.kwad.sdk.utils.y.R(r0, r7)
            java.lang.String r7 = com.kwad.sdk.utils.y.S(r0, r7)
            boolean r5 = android.text.TextUtils.isEmpty(r7)
            if (r5 != 0) goto La9
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 > 0) goto L40
            goto La9
        L40:
            android.content.Context r0 = r0.getApplicationContext()
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r8, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> La4
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto La1
            if (r0 == 0) goto La1
            android.content.pm.ApplicationInfo r8 = r0.applicationInfo
            if (r8 == 0) goto La1
            android.content.pm.ApplicationInfo r8 = r0.applicationInfo
            java.lang.String r8 = r8.publicSourceDir
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L63
            goto La1
        L63:
            java.io.File r8 = new java.io.File
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo
            java.lang.String r0 = r0.publicSourceDir
            r8.<init>(r0)
            boolean r0 = r8.exists()
            if (r0 != 0) goto L78
            java.lang.String r7 = "cannot judge package, insgtalled apk is not exists."
        L74:
            com.kwad.sdk.core.e.c.w(r1, r7)
            return r2
        L78:
            long r5 = r8.length()
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r3 = 1
            if (r0 == 0) goto L82
            return r3
        L82:
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L8b
            java.lang.String r7 = "cannot judge package, cannot calculate md5 of download file."
            goto L74
        L8b:
            java.lang.String r8 = com.kwad.sdk.utils.a.getFileMD5(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L98
            java.lang.String r7 = "cannot judge package, cannot calculate md5 of installed file."
            goto L74
        L98:
            boolean r7 = r7.equalsIgnoreCase(r8)
            if (r7 == 0) goto La0
            r7 = 2
            return r7
        La0:
            return r3
        La1:
            java.lang.String r7 = "cannot judge package, cannot get installed apk info."
            goto L74
        La4:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r7)
            return r2
        La9:
            java.lang.String r7 = "cannot judge package, has no download apk info."
            goto L74
    }

    public static java.lang.String fC(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r0 = r0.exists()
            r1 = 0
            if (r0 != 0) goto L14
            java.lang.String r3 = "PackageUtil"
            java.lang.String r0 = "cannot save package, download apk is not exists."
            com.kwad.sdk.core.e.c.w(r3, r0)
            return r1
        L14:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto L23
            return r1
        L23:
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r2 = 1
            android.content.pm.PackageInfo r3 = r0.getPackageArchiveInfo(r3, r2)
            if (r3 == 0) goto L33
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo
            java.lang.String r3 = r3.packageName
            return r3
        L33:
            return r1
    }
}
