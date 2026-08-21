package com.kwad.sdk.utils;

public final class q {
    private static final char aIA = 0;
    public static final java.math.BigInteger aIp = null;
    public static final java.math.BigInteger aIq = null;
    public static final java.math.BigInteger aIr = null;
    public static final java.math.BigInteger aIs = null;
    public static final java.math.BigInteger aIt = null;
    public static final java.math.BigInteger aIu = null;
    public static final char aIv = 0;
    public static final java.math.BigInteger aIw = null;
    public static final java.math.BigInteger aIx = null;
    public static final java.io.File[] aIy = null;
    public static final java.lang.String aIz = null;

    static {
            r0 = 1024(0x400, double:5.06E-321)
            java.math.BigInteger r2 = java.math.BigInteger.valueOf(r0)
            com.kwad.sdk.utils.q.aIp = r2
            java.math.BigInteger r2 = r2.multiply(r2)
            com.kwad.sdk.utils.q.aIq = r2
            java.math.BigInteger r3 = com.kwad.sdk.utils.q.aIp
            java.math.BigInteger r2 = r3.multiply(r2)
            com.kwad.sdk.utils.q.aIr = r2
            java.math.BigInteger r3 = com.kwad.sdk.utils.q.aIp
            java.math.BigInteger r2 = r3.multiply(r2)
            com.kwad.sdk.utils.q.aIs = r2
            java.math.BigInteger r3 = com.kwad.sdk.utils.q.aIp
            java.math.BigInteger r2 = r3.multiply(r2)
            com.kwad.sdk.utils.q.aIt = r2
            java.math.BigInteger r3 = com.kwad.sdk.utils.q.aIp
            java.math.BigInteger r2 = r3.multiply(r2)
            com.kwad.sdk.utils.q.aIu = r2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            r1 = 1152921504606846976(0x1000000000000000, double:1.2882297539194267E-231)
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            java.math.BigInteger r0 = r0.multiply(r1)
            com.kwad.sdk.utils.q.aIw = r0
            java.math.BigInteger r1 = com.kwad.sdk.utils.q.aIp
            java.math.BigInteger r0 = r1.multiply(r0)
            com.kwad.sdk.utils.q.aIx = r0
            r0 = 0
            java.io.File[] r0 = new java.io.File[r0]
            com.kwad.sdk.utils.q.aIy = r0
            r0 = 46
            java.lang.String r0 = java.lang.Character.toString(r0)
            com.kwad.sdk.utils.q.aIz = r0
            char r0 = java.io.File.separatorChar
            com.kwad.sdk.utils.q.aIA = r0
            boolean r0 = If()
            if (r0 == 0) goto L62
            r0 = 47
        L5f:
            com.kwad.sdk.utils.q.aIv = r0
            return
        L62:
            r0 = 92
            goto L5f
    }

    private static boolean If() {
            char r0 = com.kwad.sdk.utils.q.aIA
            r1 = 92
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static java.lang.String K(android.content.Context r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "/data/data/"
            r0.<init>(r1)
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            java.lang.String r2 = "/"
            r0.append(r2)
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static boolean L(java.io.File r4) {
            if (r4 == 0) goto L14
            boolean r0 = r4.exists()
            if (r0 == 0) goto L14
            long r0 = r4.length()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L14
            r4 = 1
            return r4
        L14:
            r4 = 0
            return r4
    }

    public static boolean M(java.io.File r0) {
            boolean r0 = r0.exists()
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private static java.io.FileInputStream N(java.io.File r3) {
            boolean r0 = r3.exists()
            java.lang.String r1 = "File '"
            if (r0 == 0) goto L48
            boolean r0 = r3.isDirectory()
            if (r0 != 0) goto L31
            boolean r0 = r3.canRead()
            if (r0 == 0) goto L1a
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r3)
            return r0
        L1a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' cannot be read"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L31:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L48:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' does not exist"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
    }

    private static java.io.FileOutputStream O(java.io.File r1) {
            r0 = 0
            java.io.FileOutputStream r1 = a(r1, r0)
            return r1
    }

    public static void P(java.io.File r3) {
            boolean r0 = r3.exists()
            if (r0 == 0) goto L26
            boolean r0 = r3.isDirectory()
            if (r0 != 0) goto Ld
            return
        Ld:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "File '"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L26:
            java.io.File r0 = r3.getParentFile()
            if (r0 == 0) goto L56
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L52
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L39
            goto L52
        L39:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Directory '"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = "' could not be created"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
        L52:
            r3.createNewFile()
            return
        L56:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r0 = "Could not find parent directory"
            r3.<init>(r0)
            throw r3
    }

    private static void Q(java.io.File r2) {
            boolean r0 = r2.exists()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = Z(r2)
            if (r0 != 0) goto L10
            T(r2)
        L10:
            boolean r0 = r2.delete()
            if (r0 == 0) goto L17
            return
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Unable to delete directory "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = "."
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
    }

    public static boolean R(java.io.File r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.isDirectory()     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Ld
            T(r2)     // Catch: java.lang.Exception -> Ld
        Ld:
            boolean r2 = r2.delete()     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            return r0
    }

    public static boolean S(java.io.File r0) {
            boolean r0 = R(r0)
            return r0
    }

    public static void T(java.io.File r4) {
            boolean r0 = r4.exists()
            if (r0 == 0) goto L50
            boolean r0 = r4.isDirectory()
            if (r0 == 0) goto L39
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L25
            r4 = 0
            int r1 = r0.length
            r2 = 0
        L15:
            if (r2 >= r1) goto L21
            r3 = r0[r2]
            W(r3)     // Catch: java.io.IOException -> L1d
            goto L1e
        L1d:
            r4 = move-exception
        L1e:
            int r2 = r2 + 1
            goto L15
        L21:
            if (r4 != 0) goto L24
            return
        L24:
            throw r4
        L25:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Failed to list contents of "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L39:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = " is not a directory"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r4)
            throw r0
        L50:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = " does not exist"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r4)
            throw r0
    }

    public static byte[] U(java.io.File r0) {
            java.lang.String r0 = V(r0)
            byte[] r0 = r0.getBytes()
            return r0
    }

    public static java.lang.String V(java.io.File r1) {
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    private static void W(java.io.File r3) {
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto La
            Q(r3)
            return
        La:
            boolean r0 = r3.exists()
            boolean r1 = r3.delete()
            if (r1 != 0) goto L3e
            if (r0 != 0) goto L2a
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "File does not exist: "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L2a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Unable to delete file: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r3)
            throw r0
        L3e:
            return
    }

    public static void X(java.io.File r3) {
            if (r3 == 0) goto L59
            boolean r0 = r3.exists()
            if (r0 == 0) goto L31
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto Lf
            return
        Lf:
            boolean r0 = R(r3)
            if (r0 == 0) goto L19
            r3.mkdir()
            goto L34
        L19:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Fail to delete existing file, file = "
            r1.<init>(r2)
            java.lang.String r3 = r3.getAbsolutePath()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L31:
            r3.mkdirs()
        L34:
            boolean r0 = r3.exists()
            if (r0 == 0) goto L41
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L41
            return
        L41:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Fail to create dir, dir = "
            r1.<init>(r2)
            java.lang.String r3 = r3.getAbsolutePath()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L59:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r0 = "Dir is null."
            r3.<init>(r0)
            throw r3
    }

    public static void Y(java.io.File r1) {
            R(r1)
            s(r1)
            boolean r1 = r1.exists()
            if (r1 == 0) goto Ld
            return
        Ld:
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r0 = "Create file fail"
            r1.<init>(r0)
            throw r1
    }

    private static boolean Z(java.io.File r3) {
            com.kwad.sdk.utils.ao.checkNotNull(r3)
            boolean r0 = If()
            r1 = 0
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = r3.getParent()
            if (r0 != 0) goto L12
            goto L24
        L12:
            java.io.File r0 = r3.getParentFile()
            java.io.File r0 = r0.getCanonicalFile()
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r3.getName()
            r2.<init>(r0, r3)
            r3 = r2
        L24:
            java.io.File r0 = r3.getCanonicalFile()
            java.io.File r3 = r3.getAbsoluteFile()
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L34
            r3 = 1
            return r3
        L34:
            return r1
    }

    public static java.io.FileOutputStream a(java.io.File r1, boolean r2) {
            P(r1)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1, r2)
            return r0
    }

    public static java.lang.String a(java.io.File r0, java.nio.charset.Charset r1) {
            java.io.FileInputStream r0 = N(r0)     // Catch: java.lang.Throwable -> L12
            java.nio.charset.Charset r1 = com.kwad.sdk.crash.utils.a.a(r1)     // Catch: java.lang.Throwable -> L10
            java.lang.String r1 = com.kwad.sdk.crash.utils.h.a(r0, r1)     // Catch: java.lang.Throwable -> L10
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r1
        L10:
            r1 = move-exception
            goto L14
        L12:
            r1 = move-exception
            r0 = 0
        L14:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.io.File r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1b
            r0 = 0
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Throwable -> L16
            java.io.InputStream r0 = r1.open(r2)     // Catch: java.lang.Throwable -> L16
            b(r0, r3)     // Catch: java.lang.Throwable -> L16
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        L16:
            r1 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
        L1b:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Asset path is empty."
            r1.<init>(r2)
            throw r1
    }

    private static void a(java.io.File r6, java.io.File r7, java.io.FileFilter r8, boolean r9) {
            java.lang.String r8 = "Source"
            com.kwad.sdk.utils.ao.h(r6, r8)
            java.lang.String r8 = "Destination"
            com.kwad.sdk.utils.ao.h(r7, r8)
            boolean r8 = r6.exists()
            java.lang.String r0 = "Source '"
            if (r8 == 0) goto L98
            boolean r8 = r6.isDirectory()
            if (r8 == 0) goto L81
            java.lang.String r8 = r6.getCanonicalPath()
            java.lang.String r1 = r7.getCanonicalPath()
            boolean r8 = r8.equals(r1)
            if (r8 != 0) goto L62
            java.lang.String r8 = r7.getCanonicalPath()
            java.lang.String r0 = r6.getCanonicalPath()
            boolean r8 = r8.startsWith(r0)
            r0 = 0
            if (r8 == 0) goto L5d
            java.io.File[] r8 = r6.listFiles()
            if (r8 == 0) goto L5d
            int r1 = r8.length
            if (r1 <= 0) goto L5d
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r8.length
            r1.<init>(r2)
            int r2 = r8.length
            r3 = 0
        L46:
            if (r3 >= r2) goto L5e
            r4 = r8[r3]
            java.io.File r5 = new java.io.File
            java.lang.String r4 = r4.getName()
            r5.<init>(r7, r4)
            java.lang.String r4 = r5.getCanonicalPath()
            r1.add(r4)
            int r3 = r3 + 1
            goto L46
        L5d:
            r1 = r0
        L5e:
            a(r6, r7, r0, r9, r1)
            return
        L62:
            java.io.IOException r8 = new java.io.IOException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>(r0)
            r9.append(r6)
            java.lang.String r6 = "' and destination '"
            r9.append(r6)
            r9.append(r7)
            java.lang.String r6 = "' are the same"
            r9.append(r6)
            java.lang.String r6 = r9.toString()
            r8.<init>(r6)
            throw r8
        L81:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r0)
            r8.append(r6)
            java.lang.String r6 = "' exists but is not a directory"
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
        L98:
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r0)
            r8.append(r6)
            java.lang.String r6 = "' does not exist"
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
    }

    private static void a(java.io.File r6, java.io.File r7, java.io.FileFilter r8, boolean r9, java.util.List<java.lang.String> r10) {
            if (r8 != 0) goto L7
            java.io.File[] r0 = r6.listFiles()
            goto Lb
        L7:
            java.io.File[] r0 = r6.listFiles(r8)
        Lb:
            if (r0 == 0) goto La9
            boolean r1 = r7.exists()
            java.lang.String r2 = "Destination '"
            if (r1 == 0) goto L33
            boolean r1 = r7.isDirectory()
            if (r1 == 0) goto L1c
            goto L57
        L1c:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r2)
            r8.append(r7)
            java.lang.String r7 = "' exists but is not a directory"
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            r6.<init>(r7)
            throw r6
        L33:
            boolean r1 = r7.mkdirs()
            if (r1 != 0) goto L57
            boolean r1 = r7.isDirectory()
            if (r1 == 0) goto L40
            goto L57
        L40:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r2)
            r8.append(r7)
            java.lang.String r7 = "' directory cannot be created"
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            r6.<init>(r7)
            throw r6
        L57:
            boolean r1 = r7.canWrite()
            if (r1 == 0) goto L92
            int r1 = r0.length
            r2 = 0
        L5f:
            if (r2 >= r1) goto L88
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            java.lang.String r5 = r3.getName()
            r4.<init>(r7, r5)
            if (r10 == 0) goto L78
            java.lang.String r5 = r3.getCanonicalPath()
            boolean r5 = r10.contains(r5)
            if (r5 != 0) goto L85
        L78:
            boolean r5 = r3.isDirectory()
            if (r5 == 0) goto L82
            a(r3, r4, r8, r9, r10)
            goto L85
        L82:
            c(r3, r4, r9)
        L85:
            int r2 = r2 + 1
            goto L5f
        L88:
            if (r9 == 0) goto L91
            long r8 = r6.lastModified()
            r7.setLastModified(r8)
        L91:
            return
        L92:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r2)
            r8.append(r7)
            java.lang.String r7 = "' cannot be written to"
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            r6.<init>(r7)
            throw r6
        La9:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "Failed to list contents of "
            r8.<init>(r9)
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
    }

    public static void a(java.io.File r0, java.lang.String r1, java.nio.charset.Charset r2, boolean r3) {
            r3 = 0
            java.io.FileOutputStream r0 = a(r0, r3)     // Catch: java.lang.Throwable -> Le
            com.kwad.sdk.crash.utils.h.a(r1, r0, r2)     // Catch: java.lang.Throwable -> Lc
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
        Lc:
            r1 = move-exception
            goto L10
        Le:
            r1 = move-exception
            r0 = 0
        L10:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
    }

    public static boolean aa(java.io.File r4) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.getAbsolutePath()
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            e(r4, r0)
            boolean r4 = R(r0)
            return r4
    }

    private static void b(java.io.File r2, java.io.File r3, boolean r4) {
            java.lang.String r4 = "Source"
            com.kwad.sdk.utils.ao.h(r2, r4)
            java.lang.String r4 = "Destination"
            com.kwad.sdk.utils.ao.h(r3, r4)
            boolean r4 = r2.exists()
            java.lang.String r0 = "Source '"
            if (r4 == 0) goto Lb1
            boolean r4 = r2.isDirectory()
            if (r4 != 0) goto L9a
            java.lang.String r4 = r2.getCanonicalPath()
            java.lang.String r1 = r3.getCanonicalPath()
            boolean r4 = r4.equals(r1)
            if (r4 != 0) goto L7b
            java.io.File r4 = r3.getParentFile()
            java.lang.String r0 = "Destination '"
            if (r4 == 0) goto L52
            boolean r1 = r4.mkdirs()
            if (r1 != 0) goto L52
            boolean r1 = r4.isDirectory()
            if (r1 == 0) goto L3b
            goto L52
        L3b:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r0)
            r3.append(r4)
            java.lang.String r4 = "' directory cannot be created"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L52:
            boolean r4 = r3.exists()
            if (r4 == 0) goto L76
            boolean r4 = r3.canWrite()
            if (r4 == 0) goto L5f
            goto L76
        L5f:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            r4.append(r3)
            java.lang.String r3 = "' exists but is read-only"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
        L76:
            r4 = 1
            c(r2, r3, r4)
            return
        L7b:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r1.append(r2)
            java.lang.String r2 = "' and destination '"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = "' are the same"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r4.<init>(r2)
            throw r4
        L9a:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = "' exists but is a directory"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
        Lb1:
            java.io.FileNotFoundException r3 = new java.io.FileNotFoundException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = "' does not exist"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
    }

    private static void b(java.io.InputStream r1, java.io.File r2) {
            java.io.FileOutputStream r2 = O(r2)     // Catch: java.lang.Throwable -> L10
            com.kwad.sdk.crash.utils.h.g(r1, r2)     // Catch: java.lang.Throwable -> Le
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        Le:
            r0 = move-exception
            goto L12
        L10:
            r0 = move-exception
            r2 = 0
        L12:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    private static void c(java.io.File r16, java.io.File r17, boolean r18) {
            r0 = r16
            r1 = r17
            boolean r2 = r17.exists()
            if (r2 == 0) goto L2a
            boolean r2 = r17.isDirectory()
            if (r2 != 0) goto L11
            goto L2a
        L11:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Destination '"
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r1 = "' exists but is a directory"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L2a:
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> La8
            r3.<init>(r0)     // Catch: java.lang.Throwable -> La8
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> La5
            r4.<init>(r1)     // Catch: java.lang.Throwable -> La5
            java.nio.channels.FileChannel r11 = r3.getChannel()     // Catch: java.lang.Throwable -> La2
            java.nio.channels.FileChannel r2 = r4.getChannel()     // Catch: java.lang.Throwable -> La0
            long r12 = r11.size()     // Catch: java.lang.Throwable -> La0
            r5 = 0
            r14 = r5
        L44:
            int r5 = (r14 > r12 ? 1 : (r14 == r12 ? 0 : -1))
            if (r5 >= 0) goto L5d
            long r5 = r12 - r14
            r7 = 31457280(0x1e00000, double:1.55419614E-316)
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 <= 0) goto L53
            r9 = r7
            goto L54
        L53:
            r9 = r5
        L54:
            r5 = r2
            r6 = r11
            r7 = r14
            long r5 = r5.transferFrom(r6, r7, r9)     // Catch: java.lang.Throwable -> La0
            long r14 = r14 + r5
            goto L44
        L5d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            long r2 = r16.length()
            long r4 = r17.length()
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L7f
            if (r18 == 0) goto L7e
            long r2 = r16.lastModified()
            r1.setLastModified(r2)
        L7e:
            return
        L7f:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Failed to copy full contents from '"
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r0 = "' to '"
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = "'"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
        La0:
            r0 = move-exception
            goto Lac
        La2:
            r0 = move-exception
            r11 = r2
            goto Lac
        La5:
            r0 = move-exception
            r4 = r2
            goto Lab
        La8:
            r0 = move-exception
            r3 = r2
            r4 = r3
        Lab:
            r11 = r4
        Lac:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r0
    }

    private static void d(java.io.File r1, java.io.File r2, boolean r3) {
            r3 = 0
            r0 = 1
            a(r1, r2, r3, r0)
            return
    }

    public static boolean delete(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = R(r0)
            return r1
    }

    public static void deleteContents(java.io.File r4) {
            boolean r0 = r4.exists()
            if (r0 != 0) goto L7
            return
        L7:
            java.io.File[] r4 = r4.listFiles()
            if (r4 != 0) goto Le
            return
        Le:
            int r0 = r4.length
            r1 = 0
        L10:
            if (r1 >= r0) goto L23
            r2 = r4[r1]
            boolean r3 = r2.isDirectory()
            if (r3 == 0) goto L1d
            deleteContents(r2)
        L1d:
            r2.delete()
            int r1 = r1 + 1
            goto L10
        L23:
            return
    }

    private static boolean e(java.io.File r2, java.io.File r3) {
            boolean r0 = r2.renameTo(r3)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            f(r2, r3)     // Catch: java.lang.Exception -> L14
            r2.delete()     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)     // Catch: java.lang.Exception -> L14
        L13:
            return r1
        L14:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            r2 = 0
            return r2
    }

    public static void f(java.io.File r1, java.io.File r2) {
            r0 = 1
            b(r1, r2, r0)
            return
    }

    public static java.io.BufferedInputStream fp(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L14
            return r1
        L14:
            boolean r2 = r0.isDirectory()
            if (r2 == 0) goto L1b
            return r1
        L1b:
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L21
            r2.<init>(r0)     // Catch: java.lang.Exception -> L21
            goto L22
        L21:
            r2 = r1
        L22:
            if (r2 != 0) goto L25
            return r1
        L25:
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream
            r0.<init>(r2)
            return r0
    }

    public static boolean fq(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L13
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L13
            r1 = 1
            return r1
        L13:
            r1 = 0
            return r1
    }

    public static boolean fr(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L13
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = L(r0)
            if (r1 == 0) goto L13
            r1 = 1
            return r1
        L13:
            r1 = 0
            return r1
    }

    private static int fs(java.lang.String r2) {
            if (r2 != 0) goto L4
            r2 = -1
            return r2
        L4:
            r0 = 47
            int r0 = r2.lastIndexOf(r0)
            r1 = 92
            int r2 = r2.lastIndexOf(r1)
            int r2 = java.lang.Math.max(r0, r2)
            return r2
    }

    private static int ft(java.lang.String r2) {
            r0 = -1
            if (r2 != 0) goto L4
            return r0
        L4:
            r1 = 46
            int r1 = r2.lastIndexOf(r1)
            int r2 = fs(r2)
            if (r2 <= r1) goto L11
            return r0
        L11:
            return r1
    }

    public static void g(java.io.File r1, java.io.File r2) {
            r0 = 1
            d(r1, r2, r0)
            return
    }

    public static java.lang.String getExtension(java.lang.String r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            int r0 = ft(r2)
            r1 = -1
            if (r0 != r1) goto Le
            java.lang.String r2 = ""
            return r2
        Le:
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)
            return r2
    }

    private static void s(java.io.File r3) {
            boolean r0 = r3.exists()
            if (r0 != 0) goto Ld
            java.io.FileOutputStream r0 = O(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
        Ld:
            long r0 = java.lang.System.currentTimeMillis()
            boolean r0 = r3.setLastModified(r0)
            if (r0 == 0) goto L18
            return
        L18:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unable to set the last modification time for "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
