package com.kwad.sdk.core.webview.b.c;

public final class a {
    public static java.lang.String B(android.content.Context r1, java.lang.String r2) {
            java.lang.String r1 = br(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String C(android.content.Context r1, java.lang.String r2) {
            java.lang.String r1 = br(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ".zip"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String D(android.content.Context r1, java.lang.String r2) {
            java.lang.String r1 = br(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String E(android.content.Context r1, java.lang.String r2) {
            java.lang.String r1 = br(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "_manifest_.json"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private static java.io.File bq(android.content.Context r2) {
            java.io.File r0 = r2.getFilesDir()
            if (r0 != 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "/data/data/"
            r0.<init>(r1)
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            java.lang.String r2 = "/file/"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
        L22:
            return r0
    }

    private static java.lang.String br(android.content.Context r2) {
            java.io.File r2 = bq(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "offlinepackage"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L28
            r0.mkdirs()
        L28:
            return r2
    }

    public static java.io.File bs(android.content.Context r2) {
            java.lang.String r2 = br(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ef(r2)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "packageIndex.json"
            r0.<init>(r2, r1)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L1f
            r0.createNewFile()
        L1f:
            return r0
    }

    public static void e(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            java.util.zip.ZipInputStream r0 = new java.util.zip.ZipInputStream
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r6)
            r0.<init>(r1)
        La:
            java.util.zip.ZipEntry r6 = r0.getNextEntry()
            if (r6 == 0) goto La2
            java.lang.String r1 = r6.getName()
            java.lang.String r2 = br(r5)
            java.io.File r3 = new java.io.File
            r3.<init>(r2, r1)
            java.lang.String r3 = r3.getAbsolutePath()
            boolean r2 = r3.startsWith(r2)
            if (r2 == 0) goto La2
            boolean r6 = r6.isDirectory()
            r2 = 0
            if (r6 == 0) goto L5d
            java.lang.String r6 = "../"
            boolean r6 = r1.contains(r6)
            if (r6 != 0) goto La
            int r6 = r1.length()
            int r6 = r6 + (-1)
            java.lang.String r6 = r1.substring(r2, r6)
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r1.<init>(r6)
            r1.mkdirs()
            goto La
        L5d:
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r7)
            java.lang.String r4 = java.io.File.separator
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r6.<init>(r1)
            boolean r1 = r6.exists()
            if (r1 != 0) goto L86
            java.io.File r1 = r6.getParentFile()
            r1.mkdirs()
            r6.createNewFile()
        L86:
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            r1.<init>(r6)
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]
        L8f:
            int r3 = r0.read(r6)
            r4 = -1
            if (r3 == r4) goto L9d
            r1.write(r6, r2, r3)
            r1.flush()
            goto L8f
        L9d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            goto La
        La2:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
    }

    public static java.lang.String ed(java.lang.String r2) {
            android.net.Uri r0 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r1 = "sceneId"
            java.lang.String r2 = r0.getQueryParameter(r1)     // Catch: java.lang.Throwable -> Lb
            goto L20
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getSceneId This isn't a hierarchical URI url is "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "HybridFileUtils"
            com.kwad.sdk.core.e.c.e(r0, r2)
            java.lang.String r2 = ""
        L20:
            return r2
    }

    public static java.lang.String ee(java.lang.String r5) {
            java.lang.String r0 = ".zip"
            java.lang.String r1 = ""
            android.net.Uri r2 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L39
            java.util.List r2 = r2.getPathSegments()     // Catch: java.lang.Throwable -> L39
            r3 = 0
            if (r2 == 0) goto L22
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L39
            if (r4 <= 0) goto L22
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L39
            int r3 = r3 + (-1)
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L39
            r3 = r2
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L39
        L22:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L39
            if (r2 != 0) goto L4c
            boolean r2 = r3.contains(r0)     // Catch: java.lang.Throwable -> L39
            if (r2 == 0) goto L4c
            r2 = 0
            int r0 = r3.indexOf(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = r3.substring(r2, r0)     // Catch: java.lang.Throwable -> L39
            r1 = r5
            goto L4c
        L39:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "getZipName This isn't a hierarchical URI url is "
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "HybridFileUtils"
            com.kwad.sdk.core.e.c.e(r0, r5)
        L4c:
            return r1
    }

    private static boolean ef(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L10
            boolean r1 = r0.mkdirs()
            return r1
        L10:
            r1 = 1
            return r1
    }
}
