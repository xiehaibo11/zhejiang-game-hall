package com.ss.android.socialbase.appdownloader.c.rg;

public class pp {
    private static android.content.pm.PackageInfo df(android.content.Context r2, java.io.File r3, int r4) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r0 = 0
            java.lang.String r1 = "unzip_getpackagearchiveinfo"
            if (r2 != 0) goto Lf
            java.lang.String r2 = "packageManager == null"
            rg(r1, r2)
            return r0
        Lf:
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Throwable -> L18
            android.content.pm.PackageInfo r2 = r2.getPackageArchiveInfo(r3, r4)     // Catch: java.lang.Throwable -> L18
            return r2
        L18:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "pm.getPackageArchiveInfo failed: "
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            rg(r1, r2)
            return r0
    }

    public static android.content.pm.PackageInfo rg(android.content.Context r2, java.io.File r3, int r4) {
            r0 = 268435456(0x10000000, float:2.524355E-29)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto L28
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L28
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L28
            android.content.pm.PackageInfo r2 = rg(r3)     // Catch: java.lang.Throwable -> L19
            goto L2c
        L19:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "getPackageInfo::unzip_getpackagearchiveinfo"
            rg(r1, r0)
            android.content.pm.PackageInfo r2 = df(r2, r3, r4)
            goto L2c
        L28:
            android.content.pm.PackageInfo r2 = df(r2, r3, r4)
        L2c:
            return r2
    }

    public static android.content.pm.PackageInfo rg(java.io.File r13) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L13a
            r2 = 24
            java.lang.String r3 = "AndroidManifest.xml"
            if (r1 < r2) goto L42
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L13a
            r1.<init>(r13)     // Catch: java.lang.Throwable -> L13a
            java.util.zip.ZipInputStream r13 = new java.util.zip.ZipInputStream     // Catch: java.lang.Throwable -> L3c
            r13.<init>(r1)     // Catch: java.lang.Throwable -> L3c
        L13:
            java.util.zip.ZipEntry r2 = r13.getNextEntry()     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L36
            boolean r4 = r2.isDirectory()     // Catch: java.lang.Throwable -> L3c
            if (r4 == 0) goto L23
            r13.closeEntry()     // Catch: java.lang.Throwable -> L13
            goto L13
        L23:
            java.lang.String r4 = r2.getName()     // Catch: java.lang.Throwable -> L3c
            boolean r4 = r3.equals(r4)     // Catch: java.lang.Throwable -> L3c
            if (r4 != 0) goto L31
            r13.closeEntry()     // Catch: java.lang.Throwable -> L13
            goto L13
        L31:
            r4 = r0
            r5 = r2
            r2 = r1
            r1 = r13
            goto L77
        L36:
            r4 = r0
            r5 = r2
            r2 = r1
            r1 = r13
            r13 = r4
            goto L77
        L3c:
            r13 = move-exception
            r4 = r0
            r2 = r1
            r1 = r4
            goto L13e
        L42:
            java.util.zip.ZipFile r1 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L13a
            r1.<init>(r13)     // Catch: java.lang.Throwable -> L13a
            java.util.Enumeration r13 = r1.entries()     // Catch: java.lang.Throwable -> L135
            r2 = r0
        L4c:
            boolean r4 = r13.hasMoreElements()     // Catch: java.lang.Throwable -> L135
            if (r4 == 0) goto L72
            java.lang.Object r2 = r13.nextElement()     // Catch: java.lang.Throwable -> L135
            java.util.zip.ZipEntry r2 = (java.util.zip.ZipEntry) r2     // Catch: java.lang.Throwable -> L135
            boolean r4 = r2.isDirectory()     // Catch: java.lang.Throwable -> L135
            if (r4 == 0) goto L5f
            goto L4c
        L5f:
            java.lang.String r4 = r2.getName()     // Catch: java.lang.Throwable -> L135
            boolean r4 = r3.equals(r4)     // Catch: java.lang.Throwable -> L135
            if (r4 != 0) goto L6a
            goto L4c
        L6a:
            java.io.InputStream r13 = r1.getInputStream(r2)     // Catch: java.lang.Throwable -> L135
            r4 = r1
            r5 = r2
            r1 = r0
            goto L76
        L72:
            r13 = r0
            r4 = r1
            r5 = r2
            r1 = r13
        L76:
            r2 = r1
        L77:
            if (r5 == 0) goto L128
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L130
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L130
            if (r3 == 0) goto L128
            com.ss.android.socialbase.appdownloader.c.rg.rg r3 = new com.ss.android.socialbase.appdownloader.c.rg.rg     // Catch: java.lang.Throwable -> L130
            r3.<init>()     // Catch: java.lang.Throwable -> L130
            r3.rg(r13)     // Catch: java.lang.Throwable -> L123
        L8b:
            int r5 = r3.df()     // Catch: java.lang.Throwable -> L123
            r6 = 1
            if (r5 == r6) goto L11b
            r6 = 2
            if (r5 != r6) goto L8b
            int r5 = r3.pp()     // Catch: java.lang.Throwable -> L123
            r6 = 0
            r7 = r0
            r8 = r6
            r6 = r7
        L9d:
            if (r8 == r5) goto Ld4
            java.lang.String r9 = "versionName"
            java.lang.String r10 = r3.rg(r8)     // Catch: java.lang.Throwable -> L123
            boolean r9 = r9.equals(r10)     // Catch: java.lang.Throwable -> L123
            if (r9 == 0) goto Lb0
            java.lang.String r6 = rg(r3, r8)     // Catch: java.lang.Throwable -> L123
            goto Ld1
        Lb0:
            java.lang.String r9 = "versionCode"
            java.lang.String r10 = r3.rg(r8)     // Catch: java.lang.Throwable -> L123
            boolean r9 = r9.equals(r10)     // Catch: java.lang.Throwable -> L123
            if (r9 == 0) goto Lc1
            java.lang.String r0 = rg(r3, r8)     // Catch: java.lang.Throwable -> L123
            goto Ld1
        Lc1:
            java.lang.String r9 = "package"
            java.lang.String r10 = r3.rg(r8)     // Catch: java.lang.Throwable -> L123
            boolean r9 = r9.equals(r10)     // Catch: java.lang.Throwable -> L123
            if (r9 == 0) goto Ld1
            java.lang.String r7 = rg(r3, r8)     // Catch: java.lang.Throwable -> L123
        Ld1:
            int r8 = r8 + 1
            goto L9d
        Ld4:
            r8 = -1
            long r10 = java.lang.Long.parseLong(r0)     // Catch: com.ss.android.socialbase.appdownloader.c.rg.q -> Ldb java.lang.Throwable -> L123
            goto Ldc
        Ldb:
            r10 = r8
        Ldc:
            int r5 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r5 == 0) goto L104
            android.content.pm.PackageInfo r0 = new android.content.pm.PackageInfo     // Catch: java.lang.Throwable -> L123
            r0.<init>()     // Catch: java.lang.Throwable -> L123
            r0.versionName = r6     // Catch: java.lang.Throwable -> L123
            int r5 = (int) r10     // Catch: java.lang.Throwable -> L123
            r0.versionCode = r5     // Catch: java.lang.Throwable -> L123
            r0.packageName = r7     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto Lf1
            r1.closeEntry()     // Catch: java.lang.Throwable -> Lf1
        Lf1:
            r3.rg()     // Catch: java.lang.Throwable -> Lf4
        Lf4:
            if (r13 == 0) goto Lf9
            r13.close()     // Catch: java.lang.Throwable -> Lf9
        Lf9:
            if (r4 == 0) goto Lfe
            r4.close()     // Catch: java.lang.Throwable -> Lfe
        Lfe:
            if (r2 == 0) goto L103
            r2.close()     // Catch: java.lang.Throwable -> L103
        L103:
            return r0
        L104:
            com.ss.android.socialbase.appdownloader.c.rg.q r1 = new com.ss.android.socialbase.appdownloader.c.rg.q     // Catch: java.lang.Throwable -> L123
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L123
            r5.<init>()     // Catch: java.lang.Throwable -> L123
            java.lang.String r6 = "versionCode获取失败: "
            r5.append(r6)     // Catch: java.lang.Throwable -> L123
            r5.append(r0)     // Catch: java.lang.Throwable -> L123
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L123
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L123
            throw r1     // Catch: java.lang.Throwable -> L123
        L11b:
            com.ss.android.socialbase.appdownloader.c.rg.q r0 = new com.ss.android.socialbase.appdownloader.c.rg.q     // Catch: java.lang.Throwable -> L123
            java.lang.String r1 = "已达到END_DOCUMENT"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L123
            throw r0     // Catch: java.lang.Throwable -> L123
        L123:
            r0 = move-exception
            r1 = r13
            r13 = r0
            r0 = r3
            goto L13e
        L128:
            com.ss.android.socialbase.appdownloader.c.rg.q r1 = new com.ss.android.socialbase.appdownloader.c.rg.q     // Catch: java.lang.Throwable -> L130
            java.lang.String r3 = "没有找到AndroidManifest.xml entry"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L130
            throw r1     // Catch: java.lang.Throwable -> L130
        L130:
            r1 = move-exception
            r12 = r1
            r1 = r13
            r13 = r12
            goto L13e
        L135:
            r13 = move-exception
            r2 = r0
            r4 = r1
            r1 = r2
            goto L13e
        L13a:
            r13 = move-exception
            r1 = r0
            r2 = r1
            r4 = r2
        L13e:
            com.ss.android.socialbase.appdownloader.c.rg.q r3 = new com.ss.android.socialbase.appdownloader.c.rg.q     // Catch: java.lang.Throwable -> L160
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L160
            r5.<init>()     // Catch: java.lang.Throwable -> L160
            java.lang.String r6 = "throwable: "
            r5.append(r6)     // Catch: java.lang.Throwable -> L160
            java.lang.String r6 = r13.getMessage()     // Catch: java.lang.Throwable -> L160
            r5.append(r6)     // Catch: java.lang.Throwable -> L160
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L160
            r5.append(r13)     // Catch: java.lang.Throwable -> L160
            java.lang.String r13 = r5.toString()     // Catch: java.lang.Throwable -> L160
            r3.<init>(r13)     // Catch: java.lang.Throwable -> L160
            throw r3     // Catch: java.lang.Throwable -> L160
        L160:
            r13 = move-exception
            if (r0 == 0) goto L166
            r0.rg()     // Catch: java.lang.Throwable -> L166
        L166:
            if (r1 == 0) goto L16b
            r1.close()     // Catch: java.lang.Throwable -> L16b
        L16b:
            if (r4 == 0) goto L170
            r4.close()     // Catch: java.lang.Throwable -> L170
        L170:
            if (r2 == 0) goto L175
            r2.close()     // Catch: java.lang.Throwable -> L175
        L175:
            throw r13
    }

    private static java.lang.String rg(int r1) {
            int r1 = r1 >>> 24
            r0 = 1
            if (r1 != r0) goto L8
            java.lang.String r1 = "android:"
            return r1
        L8:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String rg(android.content.Context r1, android.content.pm.PackageInfo r2, java.lang.String r3) {
            if (r2 == 0) goto L23
            android.content.pm.ApplicationInfo r0 = r2.applicationInfo
            if (r0 == 0) goto L23
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo
            r2.sourceDir = r3
            r2.publicSourceDir = r3
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.OutOfMemoryError -> L19
            java.lang.CharSequence r1 = r2.loadLabel(r1)     // Catch: java.lang.OutOfMemoryError -> L19
            java.lang.String r1 = r1.toString()     // Catch: java.lang.OutOfMemoryError -> L19
            return r1
        L19:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "getPackageInfo::fail_load_label"
            rg(r2, r1)
        L23:
            r1 = 0
            return r1
    }

    private static java.lang.String rg(com.ss.android.socialbase.appdownloader.c.rg.rg r4, int r5) {
            int r0 = r4.df(r5)
            int r1 = r4.q(r5)
            r2 = 3
            if (r0 != r2) goto L10
            java.lang.String r4 = r4.pt(r5)
            return r4
        L10:
            r4 = 1
            r5 = 0
            r2 = 2
            if (r0 != r2) goto L2a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = rg(r1)
            r0[r5] = r2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)
            r0[r4] = r5
            java.lang.String r4 = "?%s%08X"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            return r4
        L2a:
            r3 = 16
            if (r0 < r3) goto L37
            r3 = 31
            if (r0 > r3) goto L37
            java.lang.String r4 = java.lang.String.valueOf(r1)
            return r4
        L37:
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2[r5] = r1
            java.lang.Integer r5 = java.lang.Integer.valueOf(r0)
            r2[r4] = r5
            java.lang.String r4 = "<0x%X, type 0x%02X>"
            java.lang.String r4 = java.lang.String.format(r4, r2)
            return r4
    }

    private static void rg(java.lang.String r3, java.lang.String r4) {
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadMonitorListener()
            if (r0 != 0) goto L7
            return
        L7:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "message"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L11
        L11:
            r4 = 0
            r0.monitorEvent(r3, r1, r4, r4)
            return
    }
}
