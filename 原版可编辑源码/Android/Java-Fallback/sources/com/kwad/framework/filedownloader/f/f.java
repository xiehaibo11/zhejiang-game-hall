package com.kwad.framework.filedownloader.f;

public class f {
    private static int aeR = 65536;
    private static long aeS = 2000;
    private static java.lang.String aeT;
    private static java.lang.Boolean aeU;
    private static java.lang.Boolean aeV;
    private static final java.util.regex.Pattern aeW = null;

    static {
            java.lang.String r0 = "attachment;\\s*filename\\s*=\\s*\"([^\"]*)\""
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.framework.filedownloader.f.f.aeW = r0
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void O(long r1) {
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            boolean r0 = aq(r0)
            if (r0 == 0) goto Ld
            com.kwad.framework.filedownloader.f.f.aeS = r1
            return
        Ld:
            java.lang.IllegalAccessException r1 = new java.lang.IllegalAccessException
            java.lang.String r2 = "This value is used in the :filedownloader process, so set this value in your process is without effect. You can add 'process.non-separate=true' in 'filedownloader.properties' to share the main process to FileDownloadService. Or you can configure this value in 'filedownloader.properties' by 'download.min-progress-time'."
            r1.<init>(r2)
            throw r1
    }

    public static java.lang.String a(int r3, com.kwad.framework.filedownloader.a.b r4) {
            if (r4 == 0) goto L21
            java.lang.String r0 = "Etag"
            java.lang.String r4 = r4.aY(r0)
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L20
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r0 = com.kwad.framework.filedownloader.f.f.class
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r4
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r3 = "etag find %s for task(%d)"
            com.kwad.framework.filedownloader.f.d.c(r0, r3, r1)
        L20:
            return r4
        L21:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r4 = "connection is null when findEtag"
            r3.<init>(r4)
            throw r3
    }

    public static java.lang.String a(com.kwad.framework.filedownloader.a.b r1, java.lang.String r2) {
            java.lang.String r0 = "Content-Disposition"
            java.lang.String r1 = r1.aY(r0)
            java.lang.String r1 = bq(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L14
            java.lang.String r1 = bn(r2)
        L14:
            java.lang.String r2 = "\\/"
            java.lang.String r0 = "_"
            java.lang.String r1 = r1.replaceAll(r2, r0)
            return r1
    }

    public static java.lang.String a(java.lang.String r1, boolean r2, java.lang.String r3) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            if (r2 == 0) goto Ld
            if (r3 != 0) goto L9
            return r0
        L9:
            java.lang.String r1 = q(r1, r3)
        Ld:
            return r1
    }

    private static boolean a(int r3, com.kwad.framework.filedownloader.d.c r4, java.lang.Boolean r5) {
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r5 = com.kwad.framework.filedownloader.f.f.class
            r0 = 1
            r1 = 0
            if (r4 != 0) goto L18
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L17
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4[r1] = r3
            java.lang.String r3 = "can't continue %d model == null"
            com.kwad.framework.filedownloader.f.d.c(r5, r3, r4)
        L17:
            return r1
        L18:
            java.lang.String r2 = r4.uE()
            if (r2 != 0) goto L30
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L2f
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4[r1] = r3
            java.lang.String r3 = "can't continue %d temp path == null"
            com.kwad.framework.filedownloader.f.d.c(r5, r3, r4)
        L2f:
            return r1
        L30:
            java.lang.String r5 = r4.uE()
            r0 = 0
            boolean r3 = a(r3, r4, r5, r0)
            return r3
    }

    public static boolean a(int r11, com.kwad.framework.filedownloader.d.c r12, java.lang.String r13, java.lang.Boolean r14) {
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r0 = com.kwad.framework.filedownloader.f.f.class
            r1 = 0
            r2 = 1
            if (r13 != 0) goto L19
            boolean r12 = com.kwad.framework.filedownloader.f.d.aeI
            if (r12 == 0) goto Lce
            java.lang.Object[] r12 = new java.lang.Object[r2]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12[r1] = r11
            java.lang.String r11 = "can't continue %d path = null"
            com.kwad.framework.filedownloader.f.d.c(r0, r11, r12)
            goto Lce
        L19:
            java.io.File r3 = new java.io.File
            r3.<init>(r13)
            boolean r13 = r3.exists()
            boolean r4 = r3.isDirectory()
            r5 = 2
            r6 = 3
            if (r13 == 0) goto Lb1
            if (r4 == 0) goto L2e
            goto Lb1
        L2e:
            long r3 = r3.length()
            long r7 = r12.vm()
            int r13 = r12.vp()
            if (r13 > r2) goto L55
            r9 = 0
            int r13 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r13 != 0) goto L55
            boolean r12 = com.kwad.framework.filedownloader.f.d.aeI
            if (r12 == 0) goto Lce
            java.lang.Object[] r12 = new java.lang.Object[r2]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12[r1] = r11
            java.lang.String r11 = "can't continue %d the downloaded-record is zero."
            com.kwad.framework.filedownloader.f.d.c(r0, r11, r12)
            goto Lce
        L55:
            long r12 = r12.getTotal()
            int r9 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r9 < 0) goto L8c
            r9 = -1
            int r9 = (r12 > r9 ? 1 : (r12 == r9 ? 0 : -1))
            if (r9 == 0) goto L6c
            int r9 = (r3 > r12 ? 1 : (r3 == r12 ? 0 : -1))
            if (r9 > 0) goto L8c
            int r9 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r9 < 0) goto L6c
            goto L8c
        L6c:
            if (r14 == 0) goto L8a
            boolean r14 = r14.booleanValue()
            if (r14 != 0) goto L8a
            int r12 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r12 != 0) goto L8a
            boolean r12 = com.kwad.framework.filedownloader.f.d.aeI
            if (r12 == 0) goto Lce
            java.lang.Object[] r12 = new java.lang.Object[r2]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12[r1] = r11
            java.lang.String r11 = "can't continue %d, because of the output stream doesn't support seek, but the task has already pre-allocated, so we only can download it from the very beginning."
            com.kwad.framework.filedownloader.f.d.c(r0, r11, r12)
            goto Lce
        L8a:
            r1 = r2
            goto Lce
        L8c:
            boolean r14 = com.kwad.framework.filedownloader.f.d.aeI
            if (r14 == 0) goto Lce
            r14 = 4
            java.lang.Object[] r14 = new java.lang.Object[r14]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r14[r1] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r3)
            r14[r2] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r7)
            r14[r5] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r12)
            r14[r6] = r11
            java.lang.String r11 = "can't continue %d dirty data fileLength[%d] sofar[%d] total[%d]"
            com.kwad.framework.filedownloader.f.d.c(r0, r11, r14)
            goto Lce
        Lb1:
            boolean r12 = com.kwad.framework.filedownloader.f.d.aeI
            if (r12 == 0) goto Lce
            java.lang.Object[] r12 = new java.lang.Object[r6]
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12[r1] = r11
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r13)
            r12[r2] = r11
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r4)
            r12[r5] = r11
            java.lang.String r11 = "can't continue %d file not suit, exists[%B], directory[%B]"
            com.kwad.framework.filedownloader.f.d.c(r0, r11, r12)
        Lce:
            return r1
    }

    public static boolean aq(android.content.Context r3) {
            java.lang.Boolean r0 = com.kwad.framework.filedownloader.f.f.aeU
            if (r0 == 0) goto L9
            boolean r3 = r0.booleanValue()
            return r3
        L9:
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r0 = r0.aeM
            if (r0 == 0) goto L13
            r3 = 1
            goto L32
        L13:
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r3.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            if (r0 != 0) goto L28
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r3 = com.kwad.framework.filedownloader.f.f.class
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "fail to get the activity manager!"
            com.kwad.framework.filedownloader.f.d.d(r3, r2, r1)
            return r0
        L28:
            java.lang.String r3 = com.kwad.sdk.utils.ap.getProcessName(r3)
            java.lang.String r0 = ":filedownloader"
            boolean r3 = r3.endsWith(r0)
        L32:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            com.kwad.framework.filedownloader.f.f.aeU = r3
            boolean r3 = r3.booleanValue()
            return r3
    }

    public static void ar(android.content.Context r1) {
            java.io.File r1 = as(r1)
            java.io.File r0 = r1.getParentFile()     // Catch: java.io.IOException -> Lf
            r0.mkdirs()     // Catch: java.io.IOException -> Lf
            r1.createNewFile()     // Catch: java.io.IOException -> Lf
            return
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private static java.io.File as(android.content.Context r2) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "filedownloader"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            java.lang.String r1 = ".old_file_converted"
            r0.<init>(r2, r1)
            return r0
    }

    public static long b(int r5, com.kwad.framework.filedownloader.a.b r6) {
            java.lang.String r0 = "Content-Length"
            java.lang.String r0 = r6.aY(r0)
            long r0 = bu(r0)
            java.lang.String r2 = "Transfer-Encoding"
            java.lang.String r6 = r6.aY(r2)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = -1
            if (r2 >= 0) goto L4e
            r0 = 1
            r1 = 0
            if (r6 == 0) goto L26
            java.lang.String r2 = "chunked"
            boolean r6 = r6.equals(r2)
            if (r6 == 0) goto L26
            r6 = r0
            goto L27
        L26:
            r6 = r1
        L27:
            if (r6 != 0) goto L4d
            com.kwad.framework.filedownloader.f.e r6 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r6 = r6.aeL
            if (r6 == 0) goto L45
            boolean r6 = com.kwad.framework.filedownloader.f.d.aeI
            if (r6 == 0) goto L4d
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r6 = com.kwad.framework.filedownloader.f.f.class
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r0[r1] = r5
            java.lang.String r5 = "%d response header is not legal but HTTP lenient is true, so handle as the case of transfer encoding chunk"
            com.kwad.framework.filedownloader.f.d.c(r6, r5, r0)
            goto L4d
        L45:
            com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException r5 = new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException
            java.lang.String r6 = "can't know the size of the download file, and its Transfer-Encoding is not Chunked either.\nyou can ignore such exception by add http.lenient=true to the filedownloader.properties"
            r5.<init>(r6)
            throw r5
        L4d:
            r0 = r3
        L4e:
            return r0
    }

    public static java.lang.String b(java.lang.String r1, java.lang.Object... r2) {
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r1 = java.lang.String.format(r0, r1, r2)
            return r1
    }

    public static boolean b(int r1, com.kwad.framework.filedownloader.d.c r2) {
            r0 = 0
            boolean r1 = a(r1, r2, r0)
            return r1
    }

    public static void bH(int r1) {
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            boolean r0 = aq(r0)
            if (r0 == 0) goto Ld
            com.kwad.framework.filedownloader.f.f.aeR = r1
            return
        Ld:
            java.lang.IllegalAccessException r1 = new java.lang.IllegalAccessException
            java.lang.String r0 = "This value is used in the :filedownloader process, so set this value in your process is without effect. You can add 'process.non-separate=true' in 'filedownloader.properties' to share the main process to FileDownloadService. Or you can configure this value in 'filedownloader.properties' by 'download.min-progress-step'."
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String bm(java.lang.String r1) {
            java.lang.String r0 = vS()
            java.lang.String r1 = bn(r1)
            java.lang.String r1 = q(r0, r1)
            return r1
    }

    private static java.lang.String bn(java.lang.String r0) {
            java.lang.String r0 = bp(r0)
            return r0
    }

    public static java.lang.String bo(java.lang.String r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "%s.temp"
            java.lang.String r2 = b(r2, r0)
            return r2
    }

    public static java.lang.String bp(java.lang.String r5) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.io.UnsupportedEncodingException -> L38 java.security.NoSuchAlgorithmException -> L41
            java.lang.String r1 = "UTF-8"
            byte[] r5 = r5.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L38 java.security.NoSuchAlgorithmException -> L41
            byte[] r5 = r0.digest(r5)     // Catch: java.io.UnsupportedEncodingException -> L38 java.security.NoSuchAlgorithmException -> L41
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        L1a:
            if (r2 >= r1) goto L33
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 16
            if (r3 >= r4) goto L29
            java.lang.String r4 = "0"
            r0.append(r4)
        L29:
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r0.append(r3)
            int r2 = r2 + 1
            goto L1a
        L33:
            java.lang.String r5 = r0.toString()
            return r5
        L38:
            r5 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Huh, UTF-8 should be supported?"
            r0.<init>(r1, r5)
            throw r0
        L41:
            r5 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Huh, MD5 should be supported?"
            r0.<init>(r1, r5)
            throw r0
    }

    public static java.lang.String bq(java.lang.String r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.util.regex.Pattern r1 = com.kwad.framework.filedownloader.f.f.aeW     // Catch: java.lang.IllegalStateException -> L16
            java.util.regex.Matcher r2 = r1.matcher(r2)     // Catch: java.lang.IllegalStateException -> L16
            boolean r1 = r2.find()     // Catch: java.lang.IllegalStateException -> L16
            if (r1 == 0) goto L16
            r1 = 1
            java.lang.String r2 = r2.group(r1)     // Catch: java.lang.IllegalStateException -> L16
            return r2
        L16:
            return r0
    }

    public static java.lang.String br(java.lang.String r7) {
            int r0 = r7.length()
            char r1 = java.io.File.separatorChar
            r2 = 1
            r3 = 2
            r4 = 0
            r5 = 92
            if (r1 != r5) goto L19
            if (r0 <= r3) goto L19
            char r1 = r7.charAt(r2)
            r5 = 58
            if (r1 != r5) goto L19
            r1 = r3
            goto L1a
        L19:
            r1 = r4
        L1a:
            char r5 = java.io.File.separatorChar
            int r5 = r7.lastIndexOf(r5)
            r6 = -1
            if (r5 != r6) goto L26
            if (r1 <= 0) goto L26
            goto L27
        L26:
            r3 = r5
        L27:
            if (r3 == r6) goto L4e
            int r0 = r0 - r2
            char r0 = r7.charAt(r0)
            char r5 = java.io.File.separatorChar
            if (r0 != r5) goto L33
            goto L4e
        L33:
            char r0 = java.io.File.separatorChar
            int r0 = r7.indexOf(r0)
            if (r0 != r3) goto L49
            char r0 = r7.charAt(r1)
            char r1 = java.io.File.separatorChar
            if (r0 != r1) goto L49
            int r3 = r3 + r2
            java.lang.String r7 = r7.substring(r4, r3)
            return r7
        L49:
            java.lang.String r7 = r7.substring(r4, r3)
            return r7
        L4e:
            r7 = 0
            return r7
    }

    public static java.lang.String bs(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "FileDownloader-"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static boolean bt(java.lang.String r1) {
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            int r1 = r0.checkCallingOrSelfPermission(r1)
            if (r1 != 0) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }

    private static long bu(java.lang.String r2) {
            r0 = -1
            if (r2 != 0) goto L5
            return r0
        L5:
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L9
        L9:
            return r0
    }

    public static com.kwad.framework.filedownloader.e.a bv(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L68
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r1 = r0.exists()
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L3e
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L3e
            r0.delete()
            boolean r1 = r0.createNewFile()
            if (r1 == 0) goto L23
            goto L3e
        L23:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r2] = r5
            boolean r5 = r0.isDirectory()
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            r4[r3] = r5
            java.lang.String r5 = "found invalid internal destination path[%s], & path is directory[%B]"
            java.lang.String r5 = b(r5, r4)
            r1.<init>(r5)
            throw r1
        L3e:
            boolean r5 = r0.exists()
            if (r5 != 0) goto L5f
            boolean r5 = r0.createNewFile()
            if (r5 == 0) goto L4b
            goto L5f
        L4b:
            java.io.IOException r5 = new java.io.IOException
            java.lang.Object[] r1 = new java.lang.Object[r3]
            java.lang.String r0 = r0.getAbsolutePath()
            r1[r2] = r0
            java.lang.String r0 = "create new file error  %s"
            java.lang.String r0 = b(r0, r1)
            r5.<init>(r0)
            throw r5
        L5f:
            com.kwad.framework.filedownloader.download.b r5 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.e.a r5 = r5.b(r0)
            return r5
        L68:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r0 = "found invalid internal destination path, empty"
            r5.<init>(r0)
            throw r5
    }

    private static void bw(java.lang.String r1) {
            if (r1 == 0) goto L10
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L10
            r0.delete()
        L10:
            return
    }

    public static void bx(java.lang.String r1) {
            if (r1 == 0) goto L10
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L10
            r0.delete()
        L10:
            return
    }

    public static int g(java.lang.String r1, java.lang.String r2, boolean r3) {
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.f.c$d r0 = r0.uq()
            int r1 = r0.g(r1, r2, r3)
            return r1
    }

    public static boolean g(long r2, long r4) {
            int r0 = vQ()
            long r0 = (long) r0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L13
            long r2 = vR()
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 <= 0) goto L13
            r2 = 1
            return r2
        L13:
            r2 = 0
            return r2
    }

    private static java.lang.String q(java.lang.String r2, java.lang.String r3) {
            if (r3 == 0) goto L21
            if (r2 == 0) goto L19
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            r2 = 1
            java.lang.String r1 = java.io.File.separator
            r0[r2] = r1
            r2 = 2
            r0[r2] = r3
            java.lang.String r2 = "%s%s%s"
            java.lang.String r2 = b(r2, r0)
            return r2
        L19:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "can't generate real path, the directory is null"
            r2.<init>(r3)
            throw r2
        L21:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "can't generate real path, the file name is null"
            r2.<init>(r3)
            throw r2
    }

    public static int r(java.lang.String r2, java.lang.String r3) {
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.f.c$d r0 = r0.uq()
            r1 = 0
            int r2 = r0.g(r2, r3, r1)
            return r2
    }

    public static void s(java.lang.String r0, java.lang.String r1) {
            bw(r1)
            bx(r0)
            return
    }

    private static int vQ() {
            int r0 = com.kwad.framework.filedownloader.f.f.aeR
            return r0
    }

    private static long vR() {
            long r0 = com.kwad.framework.filedownloader.f.f.aeS
            return r0
    }

    private static java.lang.String vS() {
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.aeT
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.aeT
            return r0
        Lb:
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            java.io.File r0 = r0.getExternalCacheDir()
            if (r0 != 0) goto L1e
            java.io.File r0 = android.os.Environment.getDownloadCacheDirectory()
        L19:
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        L1e:
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            java.io.File r0 = r0.getExternalCacheDir()
            goto L19
    }

    public static boolean vT() {
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L1a
            java.lang.Class<com.kwad.framework.filedownloader.f.f> r0 = com.kwad.framework.filedownloader.f.f.class
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r3 = "failed to get connectivity manager!"
            com.kwad.framework.filedownloader.f.d.d(r0, r3, r1)
            return r2
        L1a:
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
            if (r0 == 0) goto L28
            int r0 = r0.getType()
            if (r0 == r2) goto L27
            goto L28
        L27:
            return r1
        L28:
            return r2
    }

    public static java.lang.String vU() {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "3.3.42"
            r0[r1] = r2
            java.lang.String r1 = "FileDownloader/%s"
            java.lang.String r0 = b(r1, r0)
            return r0
    }
}
