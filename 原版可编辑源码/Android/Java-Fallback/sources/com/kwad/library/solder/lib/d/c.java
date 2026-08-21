package com.kwad.library.solder.lib.d;

public final class c {
    public static java.io.File a(java.io.File r4, java.lang.String r5, java.io.File r6) {
            java.lang.String r0 = com.kwad.library.solder.lib.d.a.wO()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L6a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "Try install soLib, supported abi = "
            r1.<init>(r3)
            r1.append(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "lib"
            r1.<init>(r3)
            java.lang.String r3 = java.io.File.separator
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            r1.append(r5)
            java.lang.String r0 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r4, r0)
            boolean r4 = r1.exists()
            if (r4 == 0) goto L71
            java.io.File r4 = new java.io.File
            r4.<init>(r6, r5)
            boolean r6 = r1.renameTo(r4)
            if (r6 == 0) goto L62
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "Rename soLib, from = "
            r6.<init>(r0)
            java.lang.String r0 = r1.getAbsolutePath()
            r6.append(r0)
            java.lang.String r0 = ", to = "
            r6.append(r0)
            java.lang.String r0 = r4.getAbsolutePath()
            r6.append(r0)
            r2 = r4
            goto L71
        L62:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Rename soLib fail."
            r4.<init>(r5)
            throw r4
        L6a:
            java.lang.String r4 = "plugin.so"
            java.lang.String r6 = "Cpu abis is null."
            com.kwad.library.solder.lib.a.w(r4, r6)
        L71:
            if (r2 != 0) goto L82
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r6 = "Can not install "
            r4.<init>(r6)
            r4.append(r5)
            java.lang.String r5 = ", NO_MATCHING_ABIS"
            r4.append(r5)
        L82:
            return r2
    }

    public static java.util.Set<java.lang.String> b(java.io.File r9, java.io.File r10) {
            if (r9 == 0) goto L140
            boolean r0 = r9.exists()
            if (r0 == 0) goto L140
            java.util.HashSet r0 = new java.util.HashSet
            r1 = 4
            r0.<init>(r1)
            com.kwad.sdk.utils.q.X(r10)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "copy so file to "
            r1.<init>(r2)
            java.lang.String r2 = r10.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = ", apk = "
            r1.append(r2)
            java.lang.String r2 = r9.getName()
            r1.append(r2)
            r1 = 0
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L10f java.io.IOException -> L113
            r2.<init>(r9)     // Catch: java.lang.Throwable -> L10f java.io.IOException -> L113
            java.util.Enumeration r9 = r2.entries()     // Catch: java.lang.Throwable -> L107 java.io.IOException -> L10a
            r3 = r1
        L36:
            boolean r4 = r9.hasMoreElements()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            if (r4 == 0) goto Lf8
            java.lang.Object r4 = r9.nextElement()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.util.zip.ZipEntry r4 = (java.util.zip.ZipEntry) r4     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            if (r5 == 0) goto L36
            java.lang.String r6 = "../"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            if (r6 != 0) goto L36
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r7 = "lib"
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r7 = java.io.File.separator     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r6.append(r7)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            if (r6 != 0) goto L71
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r6 = "not lib dir entry, skip "
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r4.append(r5)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            goto L36
        L71:
            boolean r6 = r4.isDirectory()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            if (r6 == 0) goto L8e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r4.<init>(r10, r5)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r6 = "create dir "
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r6 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r5.append(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            com.kwad.sdk.utils.q.X(r4)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            goto L36
        L8e:
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r6.<init>(r10, r5)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r7 = "unzip soLib file "
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.lang.String r7 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r5.append(r7)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            com.kwad.sdk.utils.q.Y(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r5 = 4096(0x1000, float:5.74E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            java.io.FileOutputStream r7 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L102 java.io.IOException -> L104
            r3 = r7
            java.io.FileOutputStream r3 = (java.io.FileOutputStream) r3     // Catch: java.lang.Throwable -> Lf2 java.io.IOException -> Lf5
            java.io.FileDescriptor r3 = r3.getFD()     // Catch: java.lang.Throwable -> Lf2 java.io.IOException -> Lf5
            java.io.BufferedOutputStream r8 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> Lf2 java.io.IOException -> Lf5
            r8.<init>(r7)     // Catch: java.lang.Throwable -> Lf2 java.io.IOException -> Lf5
            java.io.BufferedInputStream r7 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> Lea java.io.IOException -> Led
            java.io.InputStream r4 = r2.getInputStream(r4)     // Catch: java.lang.Throwable -> Lea java.io.IOException -> Led
            r7.<init>(r4)     // Catch: java.lang.Throwable -> Lea java.io.IOException -> Led
        Lc2:
            int r1 = r7.read(r5)     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            r4 = -1
            if (r1 == r4) goto Lce
            r4 = 0
            r8.write(r5, r4, r1)     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            goto Lc2
        Lce:
            r8.flush()     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            r3.sync()     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            com.kwad.sdk.crash.utils.b.closeQuietly(r7)     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            java.lang.String r1 = r6.getName()     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            r0.add(r1)     // Catch: java.lang.Throwable -> Le5 java.io.IOException -> Le8
            r1 = r7
            r3 = r8
            goto L36
        Le5:
            r9 = move-exception
            r1 = r7
            goto Leb
        Le8:
            r9 = move-exception
            goto Lef
        Lea:
            r9 = move-exception
        Leb:
            r3 = r8
            goto L136
        Led:
            r9 = move-exception
            r7 = r1
        Lef:
            r1 = r2
            r3 = r8
            goto L116
        Lf2:
            r9 = move-exception
            r3 = r7
            goto L136
        Lf5:
            r9 = move-exception
            r3 = r7
            goto L105
        Lf8:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r0
        L102:
            r9 = move-exception
            goto L136
        L104:
            r9 = move-exception
        L105:
            r7 = r1
            goto L10d
        L107:
            r9 = move-exception
            r3 = r1
            goto L136
        L10a:
            r9 = move-exception
            r3 = r1
            r7 = r3
        L10d:
            r1 = r2
            goto L116
        L10f:
            r9 = move-exception
            r2 = r1
            r3 = r2
            goto L136
        L113:
            r9 = move-exception
            r3 = r1
            r7 = r3
        L116:
            java.lang.String r10 = "plugin.so"
            com.kwad.library.solder.lib.a.e(r10, r9)     // Catch: java.lang.Throwable -> L133
            java.io.IOException r10 = new java.io.IOException     // Catch: java.lang.Throwable -> L133
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = "Unzip soLibs fail:"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = r9.getMessage()     // Catch: java.lang.Throwable -> L133
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L133
            r10.<init>(r0, r9)     // Catch: java.lang.Throwable -> L133
            throw r10     // Catch: java.lang.Throwable -> L133
        L133:
            r9 = move-exception
            r2 = r1
            r1 = r7
        L136:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r9
        L140:
            java.io.IOException r9 = new java.io.IOException
            java.lang.String r10 = "Apk file not found."
            r9.<init>(r10)
            throw r9
    }
}
