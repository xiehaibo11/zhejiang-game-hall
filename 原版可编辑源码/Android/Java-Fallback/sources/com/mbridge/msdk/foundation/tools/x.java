package com.mbridge.msdk.foundation.tools;

public final class x extends com.mbridge.msdk.foundation.tools.f {





    public static java.lang.String a(java.io.File r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L4a
            r4.<init>()     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L4a
        L13:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            if (r2 == 0) goto L2e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r3.<init>()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r3.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            java.lang.String r2 = r3.toString()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r4.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            goto L13
        L2e:
            r1.close()     // Catch: java.io.IOException -> L42
            goto L42
        L32:
            r2 = move-exception
            goto L3c
        L34:
            r2 = move-exception
            r4 = r0
            goto L3c
        L37:
            r4 = move-exception
            goto L4c
        L39:
            r2 = move-exception
            r4 = r0
            r1 = r4
        L3c:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L42
            goto L2e
        L42:
            if (r4 == 0) goto L49
            java.lang.String r4 = r4.toString()
            return r4
        L49:
            return r0
        L4a:
            r4 = move-exception
            r0 = r1
        L4c:
            if (r0 == 0) goto L51
            r0.close()     // Catch: java.io.IOException -> L51
        L51:
            throw r4
    }

    public static java.lang.String a(java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "../"
            java.lang.String r1 = ".."
            if (r10 == 0) goto L16e
            if (r11 != 0) goto La
            goto L16e
        La:
            java.lang.String r2 = "/"
            boolean r3 = r11.endsWith(r2)
            if (r3 != 0) goto L21
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            r3.append(r2)
            java.lang.String r11 = r3.toString()
        L21:
            java.io.File r2 = new java.io.File
            r2.<init>(r10)
            boolean r10 = r2.exists()
            if (r10 != 0) goto L2f
            java.lang.String r10 = "unzip file not exists"
            return r10
        L2f:
            r10 = 0
            java.util.zip.ZipFile r3 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L133 java.io.IOException -> L136
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L133 java.io.IOException -> L136
            java.util.Enumeration r2 = r3.entries()     // Catch: java.lang.Throwable -> L133 java.io.IOException -> L136
            r4 = r10
        L3a:
            boolean r5 = r2.hasMoreElements()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.lang.String r6 = ""
            if (r5 == 0) goto L119
            java.lang.Object r5 = r2.nextElement()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.util.zip.ZipEntry r5 = (java.util.zip.ZipEntry) r5     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r5 != 0) goto L61
            java.lang.String r11 = "unzip zipEntry is null"
            if (r10 == 0) goto L56
            r10.close()     // Catch: java.io.IOException -> L52
            goto L56
        L52:
            r10 = move-exception
            r10.printStackTrace()
        L56:
            if (r4 == 0) goto L60
            r4.close()     // Catch: java.io.IOException -> L5c
            goto L60
        L5c:
            r10 = move-exception
            r10.printStackTrace()
        L60:
            return r11
        L61:
            java.lang.String r7 = r5.getName()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r8 != 0) goto L102
            boolean r8 = r7.startsWith(r1)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r8 != 0) goto L102
            boolean r8 = r7.startsWith(r0)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r8 == 0) goto L79
            goto L102
        L79:
            java.io.File r8 = new java.io.File     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r9.<init>()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r9.append(r11)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r9.append(r7)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.lang.String r7 = r9.toString()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r8.<init>(r7)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.lang.String r6 = r8.getCanonicalPath()     // Catch: java.io.IOException -> L91 java.lang.Throwable -> L158
        L91:
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r7 != 0) goto Leb
            boolean r7 = r6.startsWith(r11)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r7 == 0) goto Leb
            boolean r7 = r6.startsWith(r1)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r7 != 0) goto Leb
            boolean r6 = r6.startsWith(r0)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r6 == 0) goto Laa
            goto Leb
        Laa:
            boolean r6 = r5.isDirectory()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r6 == 0) goto Lb4
            r8.mkdirs()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            goto L3a
        Lb4:
            java.io.File r6 = r8.getParentFile()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            boolean r6 = r6.exists()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r6 != 0) goto Lc5
            java.io.File r6 = r8.getParentFile()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r6.mkdirs()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
        Lc5:
            java.io.FileOutputStream r6 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            r6.<init>(r8)     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            java.io.InputStream r10 = r3.getInputStream(r5)     // Catch: java.lang.Throwable -> Le4 java.io.IOException -> Le8
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r4]     // Catch: java.lang.Throwable -> Le4 java.io.IOException -> Le8
        Ld2:
            r7 = 0
            int r8 = r10.read(r5, r7, r4)     // Catch: java.lang.Throwable -> Le4 java.io.IOException -> Le8
            r9 = -1
            if (r8 == r9) goto Le1
            r6.write(r5, r7, r8)     // Catch: java.lang.Throwable -> Le4 java.io.IOException -> Le8
            r6.flush()     // Catch: java.lang.Throwable -> Le4 java.io.IOException -> Le8
            goto Ld2
        Le1:
            r4 = r6
            goto L3a
        Le4:
            r11 = move-exception
            r4 = r6
            goto L159
        Le8:
            r11 = move-exception
            r4 = r6
            goto L138
        Leb:
            java.lang.String r11 = "unzip zipEntry canonicalPath is not available"
            if (r10 == 0) goto Lf7
            r10.close()     // Catch: java.io.IOException -> Lf3
            goto Lf7
        Lf3:
            r10 = move-exception
            r10.printStackTrace()
        Lf7:
            if (r4 == 0) goto L101
            r4.close()     // Catch: java.io.IOException -> Lfd
            goto L101
        Lfd:
            r10 = move-exception
            r10.printStackTrace()
        L101:
            return r11
        L102:
            java.lang.String r11 = "unzip zipEntry name is not available"
            if (r10 == 0) goto L10e
            r10.close()     // Catch: java.io.IOException -> L10a
            goto L10e
        L10a:
            r10 = move-exception
            r10.printStackTrace()
        L10e:
            if (r4 == 0) goto L118
            r4.close()     // Catch: java.io.IOException -> L114
            goto L118
        L114:
            r10 = move-exception
            r10.printStackTrace()
        L118:
            return r11
        L119:
            r3.close()     // Catch: java.io.IOException -> L131 java.lang.Throwable -> L158
            if (r10 == 0) goto L126
            r10.close()     // Catch: java.io.IOException -> L122
            goto L126
        L122:
            r10 = move-exception
            r10.printStackTrace()
        L126:
            if (r4 == 0) goto L130
            r4.close()     // Catch: java.io.IOException -> L12c
            goto L130
        L12c:
            r10 = move-exception
            r10.printStackTrace()
        L130:
            return r6
        L131:
            r11 = move-exception
            goto L138
        L133:
            r11 = move-exception
            r4 = r10
            goto L159
        L136:
            r11 = move-exception
            r4 = r10
        L138:
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L158
            if (r0 == 0) goto L13f
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L158
        L13f:
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L158
            if (r10 == 0) goto L14d
            r10.close()     // Catch: java.io.IOException -> L149
            goto L14d
        L149:
            r10 = move-exception
            r10.printStackTrace()
        L14d:
            if (r4 == 0) goto L157
            r4.close()     // Catch: java.io.IOException -> L153
            goto L157
        L153:
            r10 = move-exception
            r10.printStackTrace()
        L157:
            return r11
        L158:
            r11 = move-exception
        L159:
            if (r10 == 0) goto L163
            r10.close()     // Catch: java.io.IOException -> L15f
            goto L163
        L15f:
            r10 = move-exception
            r10.printStackTrace()
        L163:
            if (r4 == 0) goto L16d
            r4.close()     // Catch: java.io.IOException -> L169
            goto L16d
        L169:
            r10 = move-exception
            r10.printStackTrace()
        L16d:
            throw r11
        L16e:
            java.lang.String r10 = "unzip srcFile or destDir is null "
            return r10
    }

    public static void a() {
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.foundation.tools.x$1 r1 = new com.mbridge.msdk.foundation.tools.x$1
            r1.<init>()
            r0.<init>(r1)
            r0.start()
            return
    }

    public static void a(long r4) {
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.k     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)     // Catch: java.lang.Throwable -> L37
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L37
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L37
            java.util.ArrayList r0 = e(r1)     // Catch: java.lang.Throwable -> L37
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L37
        L13:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto L41
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L37
            java.io.File r1 = (java.io.File) r1     // Catch: java.lang.Throwable -> L37
            long r2 = r1.lastModified()     // Catch: java.lang.Throwable -> L37
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L13
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L13
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L13
            r1.delete()     // Catch: java.lang.Throwable -> L37
            goto L13
        L37:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            java.lang.String r0 = "SameFileTool"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L41:
            return
    }

    static void a(java.lang.String r4, int r5) {
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            long r0 = d(r0)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d
            r2 = 1048576(0x100000, float:1.469368E-39)
            int r5 = r5 * r2
            long r2 = (long) r5     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L21
            e(r4)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d
            goto L21
        L15:
            java.lang.String r4 = "SameFileTool"
            java.lang.String r5 = "clean memory failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r5)
            goto L21
        L1d:
            r4 = move-exception
            r4.printStackTrace()
        L21:
            return
    }

    public static boolean a(java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.same.c.e.a(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L1a
            boolean r2 = r0.isFile()
            if (r2 == 0) goto L1a
            r1 = 1
        L1a:
            return r1
    }

    protected static boolean a(java.lang.String r9, int r10, int r11, int r12) {
            java.lang.String r11 = "error when set permissions:"
            java.lang.String r12 = "SameFileTool"
            r0 = 0
            java.lang.String r1 = "android.os.FileUtils"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.String r2 = "setPermissions"
            r3 = 4
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r7 = 2
            r4[r7] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r8 = 3
            r4[r8] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r3[r0] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Integer r9 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r3[r6] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r9 = -1
            java.lang.Integer r10 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r3[r7] = r10     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r3[r8] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4d java.lang.NoSuchMethodException -> L52 java.lang.ClassNotFoundException -> L57
            return r6
        L43:
            r9 = move-exception
            com.mbridge.msdk.foundation.tools.z.a(r12, r11, r9)
            goto L5b
        L48:
            r9 = move-exception
            com.mbridge.msdk.foundation.tools.z.a(r12, r11, r9)
            goto L5b
        L4d:
            r9 = move-exception
            com.mbridge.msdk.foundation.tools.z.a(r12, r11, r9)
            goto L5b
        L52:
            r9 = move-exception
            com.mbridge.msdk.foundation.tools.z.a(r12, r11, r9)
            goto L5b
        L57:
            r9 = move-exception
            com.mbridge.msdk.foundation.tools.z.a(r12, r11, r9)
        L5b:
            return r0
    }

    public static boolean a(byte[] r2, java.io.File r3) {
            r0 = 0
            java.io.File r1 = r3.getParentFile()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            if (r1 == 0) goto L14
            boolean r1 = r3.exists()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            if (r1 != 0) goto L14
            java.io.File r1 = r3.getParentFile()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r1.mkdirs()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
        L14:
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r1.write(r2)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L29
            r1.close()     // Catch: java.io.IOException -> L20
            goto L24
        L20:
            r2 = move-exception
            r2.printStackTrace()
        L24:
            r2 = 1
            return r2
        L26:
            r2 = move-exception
            r0 = r1
            goto L3e
        L29:
            r2 = move-exception
            r0 = r1
            goto L2f
        L2c:
            r2 = move-exception
            goto L3e
        L2e:
            r2 = move-exception
        L2f:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L2c
            r2 = 0
            if (r0 == 0) goto L3d
            r0.close()     // Catch: java.io.IOException -> L39
            goto L3d
        L39:
            r3 = move-exception
            r3.printStackTrace()
        L3d:
            return r2
        L3e:
            if (r0 == 0) goto L48
            r0.close()     // Catch: java.io.IOException -> L44
            goto L48
        L44:
            r3 = move-exception
            r3.printStackTrace()
        L48:
            throw r2
    }

    public static java.lang.String b(java.io.File r5) {
            java.lang.String r0 = ""
            boolean r1 = r5.isFile()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto Lc
            r5.delete()     // Catch: java.lang.Exception -> L30
            return r0
        Lc:
            boolean r1 = r5.isDirectory()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L35
            java.io.File[] r1 = r5.listFiles()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L2c
            int r2 = r1.length     // Catch: java.lang.Exception -> L30
            if (r2 != 0) goto L1c
            goto L2c
        L1c:
            int r2 = r1.length     // Catch: java.lang.Exception -> L30
            r3 = 0
        L1e:
            if (r3 >= r2) goto L28
            r4 = r1[r3]     // Catch: java.lang.Exception -> L30
            b(r4)     // Catch: java.lang.Exception -> L30
            int r3 = r3 + 1
            goto L1e
        L28:
            r5.delete()     // Catch: java.lang.Exception -> L30
            goto L35
        L2c:
            r5.delete()     // Catch: java.lang.Exception -> L30
            return r0
        L30:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
        L35:
            return r0
    }

    public static java.util.List<java.lang.String> b(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "SameFileTool"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> La8
            if (r2 != 0) goto La7
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> La8
            if (r2 == 0) goto L15
            goto La7
        L15:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> La8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La8
            r3.<init>()     // Catch: java.lang.Exception -> La8
            r3.append(r7)     // Catch: java.lang.Exception -> La8
            java.lang.String r4 = java.io.File.separator     // Catch: java.lang.Exception -> La8
            r3.append(r4)     // Catch: java.lang.Exception -> La8
            java.lang.String r4 = "template_config.json"
            r3.append(r4)     // Catch: java.lang.Exception -> La8
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La8
            r2.<init>(r3)     // Catch: java.lang.Exception -> La8
            boolean r3 = r2.isFile()     // Catch: java.lang.Exception -> La8
            if (r3 == 0) goto La4
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> La8
            if (r3 != 0) goto L3d
            goto La4
        L3d:
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> La8
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> La8
            if (r3 == 0) goto L48
            return r1
        L48:
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r3.<init>(r2)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r2 = 0
        L4e:
            int r4 = r3.length()     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            if (r2 >= r4) goto Lb0
            org.json.JSONObject r4 = r3.getJSONObject(r2)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            if (r4 != 0) goto L5b
            goto L98
        L5b:
            java.lang.String r5 = "xml_type"
            java.lang.String r5 = r4.optString(r5)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            boolean r5 = r8.equals(r5)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            if (r5 == 0) goto L98
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r5.<init>()     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r5.append(r7)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            java.lang.String r6 = java.io.File.separator     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r5.append(r6)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            java.lang.String r6 = "name"
            java.lang.String r6 = r4.optString(r6)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r5.append(r6)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            java.lang.String r5 = r5.toString()     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r1.add(r5)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            java.lang.String r5 = "ext_template"
            boolean r5 = r4.has(r5)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            if (r5 == 0) goto L98
            java.lang.String r5 = "folder_dir"
            r4.put(r5, r7)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            java.lang.String r4 = r4.toString()     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
            r1.add(r4)     // Catch: org.json.JSONException -> L9b java.lang.Exception -> La8
        L98:
            int r2 = r2 + 1
            goto L4e
        L9b:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Exception -> La8
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)     // Catch: java.lang.Exception -> La8
            return r1
        La4:
            r1.add(r7)     // Catch: java.lang.Exception -> La8
        La7:
            return r1
        La8:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        Lb0:
            return r1
    }

    public static void b() {
            com.mbridge.msdk.foundation.tools.x$2 r0 = new com.mbridge.msdk.foundation.tools.x$2
            r0.<init>()
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r1 = r1.d()
            if (r1 == 0) goto L17
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()
            r1.execute(r0)
            goto L1a
        L17:
            r0.run()
        L1a:
            return
    }

    public static java.io.File[] b(java.lang.String r2) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L11
            r1.<init>(r2)     // Catch: java.lang.Exception -> L11
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L11
            if (r2 == 0) goto L11
            java.io.File[] r2 = r1.listFiles()     // Catch: java.lang.Exception -> L11
            r0 = r2
        L11:
            return r0
    }

    private static long c(java.io.File r4) throws java.lang.Exception {
            r0 = 0
            r2 = 0
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            if (r3 == 0) goto L1b
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            int r4 = r3.available()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            long r0 = (long) r4
            r2 = r3
            goto L25
        L15:
            r4 = move-exception
            r2 = r3
            goto L3c
        L18:
            r4 = move-exception
            r2 = r3
            goto L33
        L1b:
            r4.createNewFile()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.lang.String r4 = "获取文件大小"
            java.lang.String r3 = "文件不存在!"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
        L25:
            if (r2 == 0) goto L3b
            r2.close()     // Catch: java.lang.Exception -> L2b
            goto L3b
        L2b:
            r4 = move-exception
            r4.printStackTrace()
            goto L3b
        L30:
            r4 = move-exception
            goto L3c
        L32:
            r4 = move-exception
        L33:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L3b
            r2.close()     // Catch: java.lang.Exception -> L2b
        L3b:
            return r0
        L3c:
            if (r2 == 0) goto L46
            r2.close()     // Catch: java.lang.Exception -> L42
            goto L46
        L42:
            r0 = move-exception
            r0.printStackTrace()
        L46:
            throw r4
    }

    public static void c(java.lang.String r10) {
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L82
            if (r0 == 0) goto L7
            return
        L7:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L82
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L82
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L82
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L82
            if (r0 != 0) goto L21
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L82
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L82
        L21:
            int r0 = r0.X()     // Catch: java.lang.Exception -> L82
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L82
            int r0 = r0 * 1000
            long r3 = (long) r0     // Catch: java.lang.Exception -> L82
            long r1 = r1 - r3
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L82
            r0.<init>(r10)     // Catch: java.lang.Exception -> L82
            boolean r3 = r0.exists()     // Catch: java.lang.Exception -> L82
            if (r3 == 0) goto L82
            boolean r3 = r0.isDirectory()     // Catch: java.lang.Exception -> L82
            if (r3 == 0) goto L82
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L82
            java.io.File[] r0 = r0.listFiles()     // Catch: java.lang.Exception -> L82
            if (r0 == 0) goto L82
            int r5 = r0.length     // Catch: java.lang.Exception -> L82
            r6 = 0
        L4a:
            if (r6 >= r5) goto L82
            r7 = r0[r6]     // Catch: java.lang.Exception -> L82
            long r8 = r7.lastModified()     // Catch: java.lang.Exception -> L82
            long r8 = r8 + r1
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r8 >= 0) goto L7f
            b(r7)     // Catch: java.lang.Exception -> L82
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L7f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7f
            r8.<init>()     // Catch: java.lang.Exception -> L7f
            r8.append(r10)     // Catch: java.lang.Exception -> L7f
            java.lang.String r9 = ".zip"
            r8.append(r9)     // Catch: java.lang.Exception -> L7f
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L7f
            r7.<init>(r8)     // Catch: java.lang.Exception -> L7f
            boolean r8 = r7.exists()     // Catch: java.lang.Exception -> L7f
            if (r8 == 0) goto L7f
            boolean r8 = r7.isFile()     // Catch: java.lang.Exception -> L7f
            if (r8 == 0) goto L7f
            b(r7)     // Catch: java.lang.Exception -> L7f
        L7f:
            int r6 = r6 + 1
            goto L4a
        L82:
            return
    }

    private static long d(java.io.File r5) throws java.lang.Exception {
            java.io.File[] r5 = r5.listFiles()
            r0 = 0
            if (r5 == 0) goto L25
            r2 = 0
        L9:
            int r3 = r5.length
            if (r2 >= r3) goto L25
            r3 = r5[r2]
            boolean r3 = r3.isDirectory()
            if (r3 == 0) goto L1b
            r3 = r5[r2]
            long r3 = d(r3)
            goto L21
        L1b:
            r3 = r5[r2]
            long r3 = c(r3)
        L21:
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L9
        L25:
            return r0
    }

    public static java.lang.String d(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L13
            java.lang.String r1 = r1.trim()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r1)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            goto L15
        L13:
            java.lang.String r1 = ""
        L15:
            return r1
    }

    private static java.util.ArrayList<java.io.File> e(java.io.File r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.foundation.tools.x$3 r1 = new com.mbridge.msdk.foundation.tools.x$3
            r1.<init>()
            java.io.File[] r5 = r5.listFiles(r1)
            int r1 = r5.length
            r2 = 0
        L10:
            if (r2 >= r1) goto L28
            r3 = r5[r2]
            boolean r4 = r3.isDirectory()
            if (r4 != 0) goto L1e
            r0.add(r3)
            goto L25
        L1e:
            java.util.ArrayList r3 = e(r3)
            r0.addAll(r3)
        L25:
            int r2 = r2 + 1
            goto L10
        L28:
            return r0
    }

    private static void e(java.lang.String r4) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L34
            r0.<init>(r4)     // Catch: java.lang.Exception -> L34
            java.util.ArrayList r4 = e(r0)     // Catch: java.lang.Exception -> L34
            com.mbridge.msdk.foundation.tools.x$4 r0 = new com.mbridge.msdk.foundation.tools.x$4     // Catch: java.lang.Exception -> L34
            r0.<init>()     // Catch: java.lang.Exception -> L34
            java.util.Collections.sort(r4, r0)     // Catch: java.lang.Exception -> L34
            int r0 = r4.size()     // Catch: java.lang.Exception -> L34
            int r0 = r0 + (-1)
            int r0 = r0 / 2
            r1 = 0
        L1a:
            if (r1 >= r0) goto L3b
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Exception -> L34
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Exception -> L34
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> L34
            if (r3 == 0) goto L31
            boolean r3 = r2.isFile()     // Catch: java.lang.Exception -> L34
            if (r3 == 0) goto L31
            r2.delete()     // Catch: java.lang.Exception -> L34
        L31:
            int r1 = r1 + 1
            goto L1a
        L34:
            java.lang.String r4 = "SameFileTool"
            java.lang.String r0 = "del memory failed"
            com.mbridge.msdk.foundation.tools.z.d(r4, r0)
        L3b:
            return
    }
}
