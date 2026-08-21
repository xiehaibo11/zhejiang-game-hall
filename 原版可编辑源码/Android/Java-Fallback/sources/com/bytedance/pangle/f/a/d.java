package com.bytedance.pangle.f.a;

public final class d {
    public static com.bytedance.pangle.f.a.e a(java.io.File r13) {
            java.lang.String r0 = "Zeus/install_pangle"
            r1 = 0
            r2 = 0
            boolean r3 = r13.exists()     // Catch: java.lang.Throwable -> Lcc
            if (r3 != 0) goto L26
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcc
            r3.<init>()     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r4 = r13.getAbsolutePath()     // Catch: java.lang.Throwable -> Lcc
            r3.append(r4)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r4 = " not exists!"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lcc
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3)     // Catch: java.lang.Throwable -> Lcc
            com.bytedance.pangle.util.g.a(r2)
            return r2
        L26:
            java.util.zip.ZipFile r3 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> Lcc
            r3.<init>(r13)     // Catch: java.lang.Throwable -> Lcc
            java.lang.String r4 = "AndroidManifest.xml"
            java.util.zip.ZipEntry r4 = r3.getEntry(r4)     // Catch: java.lang.Throwable -> Lc6
            if (r4 != 0) goto L3c
            java.lang.String r4 = "没有找到AndroidManifest.xml entry"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r4)     // Catch: java.lang.Throwable -> Lc6
            com.bytedance.pangle.util.g.a(r3)
            return r2
        L3c:
            com.bytedance.pangle.f.a.a r5 = new com.bytedance.pangle.f.a.a     // Catch: java.lang.Throwable -> Lc6
            r5.<init>()     // Catch: java.lang.Throwable -> Lc6
            java.io.InputStream r4 = r3.getInputStream(r4)     // Catch: java.lang.Throwable -> Lc4
            r5.a()     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto L51
            com.bytedance.pangle.f.a.b r6 = new com.bytedance.pangle.f.a.b     // Catch: java.lang.Throwable -> Lc4
            r6.<init>(r4)     // Catch: java.lang.Throwable -> Lc4
            r5.b = r6     // Catch: java.lang.Throwable -> Lc4
        L51:
            int r4 = r5.b()     // Catch: java.lang.Throwable -> Lc4
            r6 = 1
            if (r4 != r6) goto L64
            java.lang.String r4 = "已达到END_DOCUMENT"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r4)     // Catch: java.lang.Throwable -> Lc4
            r5.a()     // Catch: java.lang.Throwable -> L60
        L60:
            com.bytedance.pangle.util.g.a(r3)
            return r2
        L64:
            r6 = 2
            if (r4 != r6) goto L51
            int r4 = r5.a     // Catch: java.lang.Throwable -> Lc4
            r7 = -1
            if (r4 == r6) goto L6e
            r4 = r7
            goto L73
        L6e:
            int[] r4 = r5.c     // Catch: java.lang.Throwable -> Lc4
            int r4 = r4.length     // Catch: java.lang.Throwable -> Lc4
            int r4 = r4 / 5
        L73:
            r6 = r1
            r8 = r2
            r9 = r8
        L76:
            if (r6 == r4) goto L9c
            java.lang.String r10 = "versionCode"
            java.lang.String r11 = r5.a(r6)     // Catch: java.lang.Throwable -> Lc4
            boolean r10 = r10.equals(r11)     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto L89
            java.lang.String r8 = a(r5, r6)     // Catch: java.lang.Throwable -> Lc4
            goto L99
        L89:
            java.lang.String r10 = "package"
            java.lang.String r11 = r5.a(r6)     // Catch: java.lang.Throwable -> Lc4
            boolean r10 = r10.equals(r11)     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto L99
            java.lang.String r9 = a(r5, r6)     // Catch: java.lang.Throwable -> Lc4
        L99:
            int r6 = r6 + 1
            goto L76
        L9c:
            int r4 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> La1
            goto La2
        La1:
            r4 = r7
        La2:
            if (r4 != r7) goto Lb8
            java.lang.String r4 = "versionCode获取失败:"
            java.lang.String r6 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r4.concat(r6)     // Catch: java.lang.Throwable -> Lc4
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r4)     // Catch: java.lang.Throwable -> Lc4
            r5.a()     // Catch: java.lang.Throwable -> Lb4
        Lb4:
            com.bytedance.pangle.util.g.a(r3)
            return r2
        Lb8:
            com.bytedance.pangle.f.a.e r6 = new com.bytedance.pangle.f.a.e     // Catch: java.lang.Throwable -> Lc4
            r6.<init>(r9, r4)     // Catch: java.lang.Throwable -> Lc4
            r5.a()     // Catch: java.lang.Throwable -> Lc0
        Lc0:
            com.bytedance.pangle.util.g.a(r3)
            return r6
        Lc4:
            r4 = move-exception
            goto Lc8
        Lc6:
            r4 = move-exception
            r5 = r2
        Lc8:
            r12 = r4
            r4 = r3
            r3 = r12
            goto Lcf
        Lcc:
            r3 = move-exception
            r4 = r2
            r5 = r4
        Lcf:
            android.app.Application r6 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L101
            android.content.pm.PackageManager r6 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L101
            java.lang.String r13 = r13.getPath()     // Catch: java.lang.Throwable -> L101
            android.content.pm.PackageInfo r13 = r6.getPackageArchiveInfo(r13, r1)     // Catch: java.lang.Throwable -> L101
            if (r13 != 0) goto Lef
            java.lang.String r13 = "packageArchiveInfo == null"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r13, r3)     // Catch: java.lang.Throwable -> L101
            if (r5 == 0) goto Leb
            r5.a()     // Catch: java.lang.Throwable -> Leb
        Leb:
            com.bytedance.pangle.util.g.a(r4)
            return r2
        Lef:
            com.bytedance.pangle.f.a.e r0 = new com.bytedance.pangle.f.a.e     // Catch: java.lang.Throwable -> L101
            java.lang.String r1 = r13.packageName     // Catch: java.lang.Throwable -> L101
            int r13 = r13.versionCode     // Catch: java.lang.Throwable -> L101
            r0.<init>(r1, r13)     // Catch: java.lang.Throwable -> L101
            if (r5 == 0) goto Lfd
            r5.a()     // Catch: java.lang.Throwable -> Lfd
        Lfd:
            com.bytedance.pangle.util.g.a(r4)
            return r0
        L101:
            r13 = move-exception
            if (r5 == 0) goto L107
            r5.a()     // Catch: java.lang.Throwable -> L107
        L107:
            com.bytedance.pangle.util.g.a(r4)
            throw r13
    }

    private static java.lang.String a(int r1) {
            int r1 = r1 >>> 24
            r0 = 1
            if (r1 != r0) goto L8
            java.lang.String r1 = "android:"
            return r1
        L8:
            java.lang.String r1 = ""
            return r1
    }

    private static java.lang.String a(com.bytedance.pangle.f.a.a r4, int r5) {
            int r0 = r4.b(r5)
            int r1 = r4.c(r5)
            r2 = 3
            if (r0 != r2) goto L10
            java.lang.String r4 = r4.d(r5)
            return r4
        L10:
            r4 = 1
            r5 = 0
            r2 = 2
            if (r0 != r2) goto L2a
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = a(r1)
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
}
