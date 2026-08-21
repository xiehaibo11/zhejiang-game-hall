package com.kwad.sdk.utils;

public final class br {

    public static class a extends java.util.zip.ZipOutputStream {
        private java.util.Map<java.lang.String, java.lang.Integer> aKC;

        public a(java.io.OutputStream r1) {
                r0 = this;
                r0.<init>(r1)
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                r0.aKC = r1
                return
        }

        @Override
        public final void putNextEntry(java.util.zip.ZipEntry r7) {
                r6 = this;
                java.lang.String r0 = r7.getName()
                java.util.Map<java.lang.String, java.lang.Integer> r1 = r6.aKC
                java.lang.Object r1 = r1.get(r0)
                java.lang.Integer r1 = (java.lang.Integer) r1
                r2 = 1
                if (r1 == 0) goto L41
                int r3 = r1.intValue()
                if (r3 <= 0) goto L41
                java.util.zip.ZipEntry r3 = new java.util.zip.ZipEntry
                java.lang.String r7 = r7.getName()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "("
                r4.<init>(r5)
                r4.append(r1)
                java.lang.String r5 = ")."
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                java.lang.String r5 = "\\."
                java.lang.String r7 = r7.replaceFirst(r5, r4)
                r3.<init>(r7)
                int r7 = r1.intValue()
                int r7 = r7 + r2
                java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
                goto L47
            L41:
                java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
                r3 = r7
                r7 = r1
            L47:
                java.util.Map<java.lang.String, java.lang.Integer> r1 = r6.aKC
                r1.put(r0, r7)
                super.putNextEntry(r3)
                return
        }
    }

    private static void a(java.util.zip.ZipOutputStream r5, java.io.File r6, java.lang.String r7, byte[] r8) {
            java.lang.String r0 = "ZipUtils"
            if (r5 == 0) goto L96
            if (r6 == 0) goto L96
            boolean r1 = r6.exists()
            if (r1 != 0) goto L1b
            java.lang.String r5 = r6.toString()
            java.io.FileNotFoundException r6 = new java.io.FileNotFoundException
            java.lang.String r7 = "(doZip:142)Target File is missing"
            r6.<init>(r7)
            com.kwad.sdk.core.e.c.e(r0, r5, r6)
            return
        L1b:
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r7)
            if (r2 == 0) goto L2b
            java.lang.String r7 = r6.getName()
            java.lang.String r7 = fQ(r7)
            goto L47
        L2b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = java.io.File.separator
            r2.append(r7)
            java.lang.String r7 = r6.getName()
            java.lang.String r7 = fQ(r7)
            r2.append(r7)
            java.lang.String r7 = r2.toString()
        L47:
            boolean r2 = r6.isFile()
            r3 = 0
            if (r2 == 0) goto L7d
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.io.IOException -> L73
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.io.IOException -> L73
            r4.<init>(r6)     // Catch: java.io.IOException -> L73
            r2.<init>(r4)     // Catch: java.io.IOException -> L73
            java.util.zip.ZipEntry r6 = new java.util.zip.ZipEntry     // Catch: java.io.IOException -> L70
            r6.<init>(r7)     // Catch: java.io.IOException -> L70
            r5.putNextEntry(r6)     // Catch: java.io.IOException -> L70
        L60:
            r6 = -1
            int r7 = r8.length     // Catch: java.io.IOException -> L70
            int r7 = r2.read(r8, r3, r7)     // Catch: java.io.IOException -> L70
            if (r6 == r7) goto L6c
            r5.write(r8, r3, r7)     // Catch: java.io.IOException -> L70
            goto L60
        L6c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.io.IOException -> L70
            goto La2
        L70:
            r5 = move-exception
            r1 = r2
            goto L74
        L73:
            r5 = move-exception
        L74:
            java.lang.String r6 = "error doZip"
            com.kwad.sdk.core.e.c.e(r0, r6, r5)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r5
        L7d:
            boolean r0 = r6.isDirectory()
            if (r0 == 0) goto L95
            java.io.File[] r6 = r6.listFiles()
            if (r6 != 0) goto L8a
            return
        L8a:
            int r0 = r6.length
        L8b:
            if (r3 >= r0) goto L95
            r1 = r6[r3]
            a(r5, r1, r7, r8)
            int r3 = r3 + 1
            goto L8b
        L95:
            return
        L96:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r6 = "(dozip:179) I/O Object got NullPointerException"
            r5.<init>(r6)
            java.lang.String r6 = ""
            com.kwad.sdk.core.e.c.e(r0, r6, r5)
        La2:
            return
    }

    private static boolean a(java.io.File[] r6, java.io.File r7) {
            r0 = 0
            if (r7 == 0) goto L41
            r1 = 4096(0x1000, float:5.74E-42)
            r2 = 0
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.utils.br$a r3 = new com.kwad.sdk.utils.br$a     // Catch: java.lang.Throwable -> L30
            java.io.BufferedOutputStream r4 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L30
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L30
            r5.<init>(r7, r0)     // Catch: java.lang.Throwable -> L30
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L30
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L30
            r7 = r0
        L18:
            if (r7 > 0) goto L22
            r4 = r6[r0]     // Catch: java.lang.Throwable -> L2d
            a(r3, r4, r2, r1)     // Catch: java.lang.Throwable -> L2d
            int r7 = r7 + 1
            goto L18
        L22:
            r3.flush()     // Catch: java.lang.Throwable -> L2d
            r3.closeEntry()     // Catch: java.lang.Throwable -> L2d
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            r0 = 1
            goto L3b
        L2d:
            r6 = move-exception
            r2 = r3
            goto L31
        L30:
            r6 = move-exception
        L31:
            java.lang.String r7 = "ZipUtils"
            java.lang.String r1 = "error zip"
            com.kwad.sdk.core.e.c.e(r7, r1, r6)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
        L3b:
            return r0
        L3c:
            r6 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r6
        L41:
            return r0
    }

    private static java.lang.String fQ(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 1
            if (r0 == 0) goto Le
            int r0 = r3.length()
            if (r0 <= r1) goto Le
            return r3
        Le:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L21
            r0 = 0
            char r0 = r3.charAt(r0)
            r2 = 46
            if (r0 != r2) goto L21
            java.lang.String r3 = r3.substring(r1)
        L21:
            return r3
    }

    public static boolean unZip(java.io.InputStream r9, java.lang.String r10) {
            java.lang.String r0 = "ZipUtils"
            java.io.File r1 = new java.io.File
            r1.<init>(r10)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L10
            r1.mkdirs()
        L10:
            r1 = 0
            r2 = 0
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> Lc4 java.io.IOException -> Lc7
            r3.<init>(r9)     // Catch: java.lang.Throwable -> Lc4 java.io.IOException -> Lc7
            java.util.zip.ZipInputStream r9 = new java.util.zip.ZipInputStream     // Catch: java.lang.Throwable -> Lc0 java.io.IOException -> Lc2
            r9.<init>(r3)     // Catch: java.lang.Throwable -> Lc0 java.io.IOException -> Lc2
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
        L20:
            java.util.zip.ZipEntry r5 = r9.getNextEntry()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            if (r5 == 0) goto Lb2
            java.lang.String r6 = r5.getName()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.String r7 = "../"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            if (r7 != 0) goto L20
            boolean r5 = r5.isDirectory()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.String r7 = "/"
            if (r5 == 0) goto L55
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.<init>()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r10)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r7)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r6)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r5.mkdirs()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            goto L20
        L55:
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.<init>()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r10)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r7)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r8.append(r6)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            java.io.File r6 = r5.getParentFile()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            boolean r6 = r6.exists()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            if (r6 != 0) goto L7d
            java.io.File r6 = r5.getParentFile()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            r6.mkdirs()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
        L7d:
            java.io.FileOutputStream r6 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L9d java.io.IOException -> L9f
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L9d java.io.IOException -> L9f
        L82:
            int r5 = r9.read(r4)     // Catch: java.io.IOException -> L9b java.lang.Throwable -> Lac
            r7 = -1
            if (r5 == r7) goto L8d
            r6.write(r4, r1, r5)     // Catch: java.io.IOException -> L9b java.lang.Throwable -> Lac
            goto L82
        L8d:
            r6.flush()     // Catch: java.io.IOException -> L9b java.lang.Throwable -> Lac
            java.io.FileDescriptor r5 = r6.getFD()     // Catch: java.io.IOException -> L9b java.lang.Throwable -> Lac
            r5.sync()     // Catch: java.io.IOException -> L9b java.lang.Throwable -> Lac
        L97:
            com.kwad.sdk.crash.utils.b.closeQuietly(r6)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            goto La7
        L9b:
            r5 = move-exception
            goto La1
        L9d:
            r10 = move-exception
            goto Lae
        L9f:
            r5 = move-exception
            r6 = r2
        La1:
            java.lang.String r7 = "error unZip when write"
            com.kwad.sdk.core.e.c.e(r0, r7, r5)     // Catch: java.lang.Throwable -> Lac
            goto L97
        La7:
            r9.closeEntry()     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            goto L20
        Lac:
            r10 = move-exception
            r2 = r6
        Lae:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
            throw r10     // Catch: java.lang.Throwable -> Lba java.io.IOException -> Lbd
        Lb2:
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            r9 = 1
            return r9
        Lba:
            r10 = move-exception
            r2 = r9
            goto Ld5
        Lbd:
            r10 = move-exception
            r2 = r9
            goto Lc9
        Lc0:
            r10 = move-exception
            goto Ld5
        Lc2:
            r10 = move-exception
            goto Lc9
        Lc4:
            r10 = move-exception
            r3 = r2
            goto Ld5
        Lc7:
            r10 = move-exception
            r3 = r2
        Lc9:
            java.lang.String r9 = "error unZip"
            com.kwad.sdk.core.e.c.e(r0, r9, r10)     // Catch: java.lang.Throwable -> Lc0
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return r1
        Ld5:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r10
    }

    public static boolean zip(java.io.File r2, java.io.File r3) {
            r0 = 1
            java.io.File[] r0 = new java.io.File[r0]
            r1 = 0
            r0[r1] = r2
            boolean r2 = a(r0, r3)
            return r2
    }

    public static void zipFile(java.io.File r4) {
            if (r4 == 0) goto L32
            boolean r0 = r4.exists()
            if (r0 != 0) goto L9
            goto L32
        L9:
            java.lang.String r0 = r4.getAbsolutePath()
            java.lang.String r1 = ".zip"
            boolean r2 = r0.endsWith(r1)
            if (r2 != 0) goto L32
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            boolean r0 = zip(r4, r2)
            if (r0 == 0) goto L32
            r4.delete()
        L32:
            return
    }
}
