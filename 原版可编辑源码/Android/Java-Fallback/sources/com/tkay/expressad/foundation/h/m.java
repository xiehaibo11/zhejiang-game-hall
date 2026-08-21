package com.tkay.expressad.foundation.h;

public final class m extends com.tkay.expressad.foundation.h.e {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final java.lang.String e = "/download/.at";
    public static final java.lang.String f = "/atdownload";
    private static final java.lang.String g = "SameFileTool";





    static class a {
        public static final int a = 448;
        public static final int b = 256;
        public static final int c = 128;
        public static final int d = 64;
        public static final int e = 56;
        public static final int f = 32;
        public static final int g = 16;
        public static final int h = 8;
        public static final int i = 7;
        public static final int j = 4;
        public static final int k = 2;
        public static final int l = 1;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    private static double a(long r3, int r5) {
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r1 = "#.00"
            r0.<init>(r1)
            r1 = 1
            if (r5 == r1) goto L49
            r1 = 2
            if (r5 == r1) goto L38
            r1 = 3
            if (r5 == r1) goto L27
            r1 = 4
            if (r5 == r1) goto L16
            r3 = 0
            goto L56
        L16:
            double r3 = (double) r3
            r1 = 4742290407621132288(0x41d0000000000000, double:1.073741824E9)
            double r3 = r3 / r1
            java.lang.String r3 = r0.format(r3)
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            double r3 = r3.doubleValue()
            goto L56
        L27:
            double r3 = (double) r3
            r1 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r3 = r3 / r1
            java.lang.String r3 = r0.format(r3)
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            double r3 = r3.doubleValue()
            goto L56
        L38:
            double r3 = (double) r3
            r1 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r3 = r3 / r1
            java.lang.String r3 = r0.format(r3)
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            double r3 = r3.doubleValue()
            goto L56
        L49:
            double r3 = (double) r3
            java.lang.String r3 = r0.format(r3)
            java.lang.Double r3 = java.lang.Double.valueOf(r3)
            double r3 = r3.doubleValue()
        L56:
            return r3
    }

    public static java.lang.String a(java.io.File r4) {
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L47
            r4.<init>()     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L47
        L10:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            if (r2 == 0) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r3.<init>()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r3.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            java.lang.String r2 = r3.toString()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r4.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            goto L10
        L2b:
            r1.close()     // Catch: java.io.IOException -> L3f
            goto L3f
        L2f:
            r2 = move-exception
            goto L39
        L31:
            r2 = move-exception
            r4 = r0
            goto L39
        L34:
            r4 = move-exception
            goto L49
        L36:
            r2 = move-exception
            r4 = r0
            r1 = r4
        L39:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L3f
            goto L2b
        L3f:
            if (r4 == 0) goto L46
            java.lang.String r4 = r4.toString()
            return r4
        L46:
            return r0
        L47:
            r4 = move-exception
            r0 = r1
        L49:
            if (r0 == 0) goto L4e
            r0.close()     // Catch: java.io.IOException -> L4e
        L4e:
            throw r4
    }

    public static java.lang.String a(java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "../"
            if (r9 == 0) goto L156
            if (r10 != 0) goto L8
            goto L156
        L8:
            java.lang.String r1 = "/"
            boolean r2 = r10.endsWith(r1)
            if (r2 != 0) goto L1f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            r2.append(r1)
            java.lang.String r10 = r2.toString()
        L1f:
            java.io.File r1 = new java.io.File
            r1.<init>(r9)
            boolean r9 = r1.exists()
            if (r9 != 0) goto L2d
            java.lang.String r9 = "unzip file not exists"
            return r9
        L2d:
            r9 = 0
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L11e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L11e
            java.util.Enumeration r1 = r2.entries()     // Catch: java.lang.Throwable -> L11e
            r3 = r9
        L38:
            boolean r4 = r1.hasMoreElements()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = ""
            if (r4 == 0) goto L104
            java.lang.Object r4 = r1.nextElement()     // Catch: java.lang.Throwable -> L11c
            java.util.zip.ZipEntry r4 = (java.util.zip.ZipEntry) r4     // Catch: java.lang.Throwable -> L11c
            if (r4 != 0) goto L5f
            java.lang.String r10 = "unzip zipEntry is null"
            if (r9 == 0) goto L54
            r9.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r9 = move-exception
            r9.printStackTrace()
        L54:
            if (r3 == 0) goto L5e
            r3.close()     // Catch: java.io.IOException -> L5a
            goto L5e
        L5a:
            r9 = move-exception
            r9.printStackTrace()
        L5e:
            return r10
        L5f:
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L11c
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L11c
            if (r7 != 0) goto Lfc
            boolean r7 = r6.contains(r0)     // Catch: java.lang.Throwable -> L11c
            if (r7 != 0) goto Lfc
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L11c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r8.<init>()     // Catch: java.lang.Throwable -> L11c
            r8.append(r10)     // Catch: java.lang.Throwable -> L11c
            r8.append(r6)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> L11c
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = r7.getCanonicalPath()     // Catch: java.io.IOException -> L87 java.lang.Throwable -> L11c
        L87:
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto Le5
            boolean r6 = r5.startsWith(r10)     // Catch: java.lang.Throwable -> L11c
            if (r6 == 0) goto Le5
            java.lang.String r6 = ".."
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto Le5
            boolean r6 = r5.startsWith(r0)     // Catch: java.lang.Throwable -> L11c
            if (r6 != 0) goto Le5
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L11c
            if (r5 == 0) goto La8
            goto Le5
        La8:
            boolean r5 = r4.isDirectory()     // Catch: java.lang.Throwable -> L11c
            if (r5 == 0) goto Lb2
            r7.mkdirs()     // Catch: java.lang.Throwable -> L11c
            goto L38
        Lb2:
            java.io.File r5 = r7.getParentFile()     // Catch: java.lang.Throwable -> L11c
            boolean r5 = r5.exists()     // Catch: java.lang.Throwable -> L11c
            if (r5 != 0) goto Lc3
            java.io.File r5 = r7.getParentFile()     // Catch: java.lang.Throwable -> L11c
            r5.mkdirs()     // Catch: java.lang.Throwable -> L11c
        Lc3:
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L11c
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L11c
            java.io.InputStream r9 = r2.getInputStream(r4)     // Catch: java.lang.Throwable -> Le2
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r3]     // Catch: java.lang.Throwable -> Le2
        Ld0:
            r6 = 0
            int r7 = r9.read(r4, r6, r3)     // Catch: java.lang.Throwable -> Le2
            r8 = -1
            if (r7 == r8) goto Ldf
            r5.write(r4, r6, r7)     // Catch: java.lang.Throwable -> Le2
            r5.flush()     // Catch: java.lang.Throwable -> Le2
            goto Ld0
        Ldf:
            r3 = r5
            goto L38
        Le2:
            r10 = move-exception
            r3 = r5
            goto L120
        Le5:
            java.lang.String r10 = "unzip zipEntry canonicalPath is not available"
            if (r9 == 0) goto Lf1
            r9.close()     // Catch: java.io.IOException -> Led
            goto Lf1
        Led:
            r9 = move-exception
            r9.printStackTrace()
        Lf1:
            if (r3 == 0) goto Lfb
            r3.close()     // Catch: java.io.IOException -> Lf7
            goto Lfb
        Lf7:
            r9 = move-exception
            r9.printStackTrace()
        Lfb:
            return r10
        Lfc:
            java.lang.Exception r10 = new java.lang.Exception     // Catch: java.lang.Throwable -> L11c
            java.lang.String r0 = "zipEntry's name is unsafe!"
            r10.<init>(r0)     // Catch: java.lang.Throwable -> L11c
            throw r10     // Catch: java.lang.Throwable -> L11c
        L104:
            r2.close()     // Catch: java.lang.Throwable -> L11c
            if (r9 == 0) goto L111
            r9.close()     // Catch: java.io.IOException -> L10d
            goto L111
        L10d:
            r9 = move-exception
            r9.printStackTrace()
        L111:
            if (r3 == 0) goto L11b
            r3.close()     // Catch: java.io.IOException -> L117
            goto L11b
        L117:
            r9 = move-exception
            r9.printStackTrace()
        L11b:
            return r5
        L11c:
            r10 = move-exception
            goto L120
        L11e:
            r10 = move-exception
            r3 = r9
        L120:
            boolean r0 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L140
            if (r0 == 0) goto L127
            r10.printStackTrace()     // Catch: java.lang.Throwable -> L140
        L127:
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L140
            if (r9 == 0) goto L135
            r9.close()     // Catch: java.io.IOException -> L131
            goto L135
        L131:
            r9 = move-exception
            r9.printStackTrace()
        L135:
            if (r3 == 0) goto L13f
            r3.close()     // Catch: java.io.IOException -> L13b
            goto L13f
        L13b:
            r9 = move-exception
            r9.printStackTrace()
        L13f:
            return r10
        L140:
            r10 = move-exception
            if (r9 == 0) goto L14b
            r9.close()     // Catch: java.io.IOException -> L147
            goto L14b
        L147:
            r9 = move-exception
            r9.printStackTrace()
        L14b:
            if (r3 == 0) goto L155
            r3.close()     // Catch: java.io.IOException -> L151
            goto L155
        L151:
            r9 = move-exception
            r9.printStackTrace()
        L155:
            throw r10
        L156:
            java.lang.String r9 = "unzip srcFile or destDir is null "
            return r9
    }

    public static void a() {
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.expressad.foundation.h.m$1 r1 = new com.tkay.expressad.foundation.h.m$1
            r1.<init>()
            r0.<init>(r1)
            r0.start()
            return
    }

    public static void a(long r4) {
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.l     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)     // Catch: java.lang.Throwable -> L38
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L38
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L38
            java.util.ArrayList r0 = e(r1)     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L38
        L13:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L38
            java.io.File r1 = (java.io.File) r1     // Catch: java.lang.Throwable -> L38
            long r2 = r1.lastModified()     // Catch: java.lang.Throwable -> L38
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L13
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L38
            if (r2 == 0) goto L13
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L38
            if (r2 == 0) goto L13
            r1.delete()     // Catch: java.lang.Throwable -> L38
            goto L13
        L37:
            return
        L38:
            r4 = move-exception
            r4.getMessage()
            return
    }

    static void a(java.lang.String r4, int r5) {
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            long r0 = d(r0)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
            r2 = 1048576(0x100000, float:1.469368E-39)
            int r5 = r5 * r2
            long r2 = (long) r5     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L14
            f(r4)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
        L14:
            return
        L15:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public static boolean a(java.lang.String r6) {
            boolean r0 = com.tkay.expressad.foundation.g.d.e.a(r6)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            long r2 = r0.length()
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1f
            boolean r6 = r0.isFile()
            if (r6 == 0) goto L1f
            r6 = 1
            return r6
        L1f:
            return r1
    }

    private static boolean a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = 0
            boolean r1 = com.tkay.expressad.foundation.h.r.b()     // Catch: java.lang.Exception -> L6b
            if (r1 == 0) goto L6f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r1.<init>()     // Catch: java.lang.Exception -> L6b
            r1.append(r4)     // Catch: java.lang.Exception -> L6b
            java.lang.String r4 = java.io.File.separator     // Catch: java.lang.Exception -> L6b
            r1.append(r4)     // Catch: java.lang.Exception -> L6b
            r1.append(r6)     // Catch: java.lang.Exception -> L6b
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L6b
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L6b
            r1.<init>(r4)     // Catch: java.lang.Exception -> L6b
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L6b
            if (r2 == 0) goto L6a
            boolean r2 = r1.isFile()     // Catch: java.lang.Exception -> L6b
            if (r2 != 0) goto L2d
            goto L6a
        L2d:
            long r2 = r1.length()     // Catch: java.lang.Exception -> L6b
            boolean r2 = com.tkay.expressad.foundation.h.r.a(r2)     // Catch: java.lang.Exception -> L6b
            if (r2 == 0) goto L6f
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L6b
            r2.<init>(r5)     // Catch: java.lang.Exception -> L6b
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> L6b
            if (r3 != 0) goto L45
            r2.mkdirs()     // Catch: java.lang.Exception -> L6b
        L45:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r2.<init>()     // Catch: java.lang.Exception -> L6b
            r2.append(r5)     // Catch: java.lang.Exception -> L6b
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Exception -> L6b
            r2.append(r5)     // Catch: java.lang.Exception -> L6b
            r2.append(r6)     // Catch: java.lang.Exception -> L6b
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L6b
            int r4 = b(r4, r5)     // Catch: java.lang.Exception -> L6b
            boolean r5 = r1.exists()     // Catch: java.lang.Exception -> L6b
            if (r5 == 0) goto L6f
            if (r4 != 0) goto L6f
            r1.delete()     // Catch: java.lang.Exception -> L6b
            r4 = 1
            return r4
        L6a:
            return r0
        L6b:
            r4 = move-exception
            r4.printStackTrace()
        L6f:
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
            if (r0 == 0) goto L3c
            r0.close()     // Catch: java.io.IOException -> L38
            goto L3c
        L38:
            r2 = move-exception
            r2.printStackTrace()
        L3c:
            r2 = 0
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

    private static double b(java.lang.String r5, int r6) {
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r5 = r0.isDirectory()     // Catch: java.lang.Exception -> L15
            if (r5 == 0) goto L10
            long r0 = d(r0)     // Catch: java.lang.Exception -> L15
            goto L1b
        L10:
            long r0 = c(r0)     // Catch: java.lang.Exception -> L15
            goto L1b
        L15:
            r5 = move-exception
            r5.printStackTrace()
            r0 = 0
        L1b:
            java.text.DecimalFormat r5 = new java.text.DecimalFormat
            java.lang.String r2 = "#.00"
            r5.<init>(r2)
            r2 = 0
            r4 = 1
            if (r6 == r4) goto L64
            r4 = 2
            if (r6 == r4) goto L53
            r4 = 3
            if (r6 == r4) goto L42
            r4 = 4
            if (r6 == r4) goto L31
            goto L71
        L31:
            double r0 = (double) r0
            r2 = 4742290407621132288(0x41d0000000000000, double:1.073741824E9)
            double r0 = r0 / r2
            java.lang.String r5 = r5.format(r0)
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            double r2 = r5.doubleValue()
            goto L71
        L42:
            double r0 = (double) r0
            r2 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r0 = r0 / r2
            java.lang.String r5 = r5.format(r0)
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            double r2 = r5.doubleValue()
            goto L71
        L53:
            double r0 = (double) r0
            r2 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r0 = r0 / r2
            java.lang.String r5 = r5.format(r0)
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            double r2 = r5.doubleValue()
            goto L71
        L64:
            double r0 = (double) r0
            java.lang.String r5 = r5.format(r0)
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            double r2 = r5.doubleValue()
        L71:
            return r2
    }

    private static int b(java.lang.String r5, java.lang.String r6) {
            r0 = 0
            r1 = -1
            boolean r2 = com.tkay.expressad.foundation.h.r.a     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            if (r2 != 0) goto L7
            return r1
        L7:
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5a
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5a
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
        L15:
            int r3 = r2.read(r0)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r4 = 0
            if (r3 <= 0) goto L20
            r5.write(r0, r4, r3)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L15
        L20:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            boolean r6 = r0.exists()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            if (r6 == 0) goto L43
            boolean r6 = r0.isFile()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            if (r6 != 0) goto L32
            goto L43
        L32:
            r2.close()     // Catch: java.io.IOException -> L36
            goto L3a
        L36:
            r6 = move-exception
            r6.printStackTrace()
        L3a:
            r5.close()     // Catch: java.io.IOException -> L3e
            goto L42
        L3e:
            r5 = move-exception
            r5.printStackTrace()
        L42:
            return r4
        L43:
            r2.close()     // Catch: java.io.IOException -> L47
            goto L4b
        L47:
            r6 = move-exception
            r6.printStackTrace()
        L4b:
            r5.close()     // Catch: java.io.IOException -> L4f
            goto L53
        L4f:
            r5 = move-exception
            r5.printStackTrace()
        L53:
            return r1
        L54:
            r6 = move-exception
            goto L58
        L56:
            r6 = move-exception
            r5 = r0
        L58:
            r0 = r2
            goto L5f
        L5a:
            r5 = r0
        L5b:
            r0 = r2
            goto L75
        L5d:
            r6 = move-exception
            r5 = r0
        L5f:
            if (r0 == 0) goto L69
            r0.close()     // Catch: java.io.IOException -> L65
            goto L69
        L65:
            r0 = move-exception
            r0.printStackTrace()
        L69:
            if (r5 == 0) goto L73
            r5.close()     // Catch: java.io.IOException -> L6f
            goto L73
        L6f:
            r5 = move-exception
            r5.printStackTrace()
        L73:
            throw r6
        L74:
            r5 = r0
        L75:
            if (r0 == 0) goto L7f
            r0.close()     // Catch: java.io.IOException -> L7b
            goto L7f
        L7b:
            r6 = move-exception
            r6.printStackTrace()
        L7f:
            if (r5 == 0) goto L89
            r5.close()     // Catch: java.io.IOException -> L85
            goto L89
        L85:
            r5 = move-exception
            r5.printStackTrace()
        L89:
            return r1
    }

    private static java.lang.String b(long r4) {
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r1 = "#.00"
            r0.<init>(r1)
            r1 = 0
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 != 0) goto L10
            java.lang.String r4 = "0B"
            return r4
        L10:
            r1 = 1024(0x400, double:5.06E-321)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 >= 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            double r4 = (double) r4
            java.lang.String r4 = r0.format(r4)
            r1.append(r4)
            java.lang.String r4 = "B"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            goto L88
        L2d:
            r1 = 1048576(0x100000, double:5.180654E-318)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 >= 0) goto L4e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            double r4 = (double) r4
            r2 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r4 = r4 / r2
            java.lang.String r4 = r0.format(r4)
            r1.append(r4)
            java.lang.String r4 = "KB"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            goto L88
        L4e:
            r1 = 1073741824(0x40000000, double:5.304989477E-315)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 >= 0) goto L6f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            double r4 = (double) r4
            r2 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r4 = r4 / r2
            java.lang.String r4 = r0.format(r4)
            r1.append(r4)
            java.lang.String r4 = "AT"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            goto L88
        L6f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            double r4 = (double) r4
            r2 = 4742290407621132288(0x41d0000000000000, double:1.073741824E9)
            double r4 = r4 / r2
            java.lang.String r4 = r0.format(r4)
            r1.append(r4)
            java.lang.String r4 = "GB"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
        L88:
            return r4
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

    public static void b() {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.foundation.h.m$2 r1 = new com.tkay.expressad.foundation.h.m$2
            r1.<init>()
            r0.a(r1)
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

    private static long c(java.io.File r4) {
            r0 = 0
            r2 = 0
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            if (r3 == 0) goto L1b
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            int r4 = r3.available()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            long r0 = (long) r4
            r2 = r3
            goto L1e
        L15:
            r4 = move-exception
            r2 = r3
            goto L35
        L18:
            r4 = move-exception
            r2 = r3
            goto L2c
        L1b:
            r4.createNewFile()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
        L1e:
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L24
            goto L34
        L24:
            r4 = move-exception
            r4.printStackTrace()
            goto L34
        L29:
            r4 = move-exception
            goto L35
        L2b:
            r4 = move-exception
        L2c:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L24
        L34:
            return r0
        L35:
            if (r2 == 0) goto L3f
            r2.close()     // Catch: java.lang.Exception -> L3b
            goto L3f
        L3b:
            r0 = move-exception
            r0.printStackTrace()
        L3f:
            throw r4
    }

    public static void c(java.lang.String r10) {
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L64
            if (r0 == 0) goto L7
            return
        L7:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L64
            r2 = 1440000(0x15f900, double:7.114545E-318)
            long r0 = r0 - r2
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L64
            r2.<init>(r10)     // Catch: java.lang.Exception -> L64
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> L64
            if (r3 == 0) goto L64
            boolean r3 = r2.isDirectory()     // Catch: java.lang.Exception -> L64
            if (r3 == 0) goto L64
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L64
            java.io.File[] r2 = r2.listFiles()     // Catch: java.lang.Exception -> L64
            if (r2 == 0) goto L64
            int r5 = r2.length     // Catch: java.lang.Exception -> L64
            r6 = 0
        L2c:
            if (r6 >= r5) goto L64
            r7 = r2[r6]     // Catch: java.lang.Exception -> L64
            long r8 = r7.lastModified()     // Catch: java.lang.Exception -> L64
            long r8 = r8 + r0
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r8 >= 0) goto L61
            b(r7)     // Catch: java.lang.Exception -> L64
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r8.<init>()     // Catch: java.lang.Exception -> L61
            r8.append(r10)     // Catch: java.lang.Exception -> L61
            java.lang.String r9 = ".zip"
            r8.append(r9)     // Catch: java.lang.Exception -> L61
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L61
            r7.<init>(r8)     // Catch: java.lang.Exception -> L61
            boolean r8 = r7.exists()     // Catch: java.lang.Exception -> L61
            if (r8 == 0) goto L61
            boolean r8 = r7.isFile()     // Catch: java.lang.Exception -> L61
            if (r8 == 0) goto L61
            b(r7)     // Catch: java.lang.Exception -> L61
        L61:
            int r6 = r6 + 1
            goto L2c
        L64:
            return
    }

    private static void c(java.lang.String r4, int r5) {
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            long r0 = d(r0)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
            r2 = 1048576(0x100000, float:1.469368E-39)
            int r5 = r5 * r2
            long r2 = (long) r5     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L14
            f(r4)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L15
        L14:
            return
        L15:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private static boolean c(java.lang.String r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L58
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L54
            if (r1 != 0) goto L58
            if (r6 == 0) goto L58
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L54
            if (r1 == 0) goto L12
            goto L58
        L12:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L54
            r1.<init>(r5)     // Catch: java.lang.Exception -> L54
            boolean r5 = r1.isDirectory()     // Catch: java.lang.Exception -> L54
            if (r5 == 0) goto L53
            java.io.File[] r5 = r1.listFiles()     // Catch: java.lang.Exception -> L54
            if (r5 == 0) goto L53
            java.io.File[] r5 = r1.listFiles()     // Catch: java.lang.Exception -> L54
            int r5 = r5.length     // Catch: java.lang.Exception -> L54
            if (r5 > 0) goto L2b
            goto L53
        L2b:
            java.io.File[] r5 = r1.listFiles()     // Catch: java.lang.Exception -> L54
            if (r5 == 0) goto L58
            int r1 = r5.length     // Catch: java.lang.Exception -> L54
            r2 = r0
        L33:
            if (r2 >= r1) goto L58
            r3 = r5[r2]     // Catch: java.lang.Exception -> L54
            boolean r4 = r3.isFile()     // Catch: java.lang.Exception -> L54
            if (r4 == 0) goto L49
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L54
            boolean r3 = r6.equals(r3)     // Catch: java.lang.Exception -> L54
            if (r3 == 0) goto L50
            r5 = 1
            return r5
        L49:
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Exception -> L54
            c(r3, r6)     // Catch: java.lang.Exception -> L54
        L50:
            int r2 = r2 + 1
            goto L33
        L53:
            return r0
        L54:
            r5 = move-exception
            r5.printStackTrace()
        L58:
            return r0
    }

    private static long d(java.io.File r5) {
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
            java.lang.String r1 = com.tkay.expressad.foundation.h.x.a(r1)
            java.lang.String r1 = com.tkay.expressad.foundation.h.p.a(r1)
            goto L15
        L13:
            java.lang.String r1 = ""
        L15:
            return r1
    }

    private static boolean d(java.lang.String r9, int r10) {
            r0 = 0
            java.lang.String r1 = "android.os.FileUtils"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "setPermissions"
            r3 = 4
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3f
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3f
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L3f
            r6 = 1
            r4[r6] = r5     // Catch: java.lang.Throwable -> L3f
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L3f
            r7 = 2
            r4[r7] = r5     // Catch: java.lang.Throwable -> L3f
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L3f
            r8 = 3
            r4[r8] = r5     // Catch: java.lang.Throwable -> L3f
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L3f
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3f
            r3[r0] = r9     // Catch: java.lang.Throwable -> L3f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> L3f
            r3[r6] = r9     // Catch: java.lang.Throwable -> L3f
            r9 = -1
            java.lang.Integer r10 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L3f
            r3[r7] = r10     // Catch: java.lang.Throwable -> L3f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L3f
            r3[r8] = r9     // Catch: java.lang.Throwable -> L3f
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L3f
            return r6
        L3f:
            return r0
    }

    private static java.lang.String e(java.lang.String r5) {
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            r1 = 0
            boolean r5 = r0.isDirectory()     // Catch: java.lang.Exception -> L17
            if (r5 == 0) goto L12
            long r3 = d(r0)     // Catch: java.lang.Exception -> L17
            goto L1c
        L12:
            long r3 = c(r0)     // Catch: java.lang.Exception -> L17
            goto L1c
        L17:
            r5 = move-exception
            r5.printStackTrace()
            r3 = r1
        L1c:
            java.text.DecimalFormat r5 = new java.text.DecimalFormat
            java.lang.String r0 = "#.00"
            r5.<init>(r0)
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L2a
            java.lang.String r5 = "0B"
            return r5
        L2a:
            r0 = 1024(0x400, double:5.06E-321)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            double r1 = (double) r3
            java.lang.String r5 = r5.format(r1)
            r0.append(r5)
            java.lang.String r5 = "B"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto La2
        L47:
            r0 = 1048576(0x100000, double:5.180654E-318)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L68
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            double r1 = (double) r3
            r3 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r1 = r1 / r3
            java.lang.String r5 = r5.format(r1)
            r0.append(r5)
            java.lang.String r5 = "KB"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto La2
        L68:
            r0 = 1073741824(0x40000000, double:5.304989477E-315)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L89
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            double r1 = (double) r3
            r3 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r1 = r1 / r3
            java.lang.String r5 = r5.format(r1)
            r0.append(r5)
            java.lang.String r5 = "AT"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto La2
        L89:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            double r1 = (double) r3
            r3 = 4742290407621132288(0x41d0000000000000, double:1.073741824E9)
            double r1 = r1 / r3
            java.lang.String r5 = r5.format(r1)
            r0.append(r5)
            java.lang.String r5 = "GB"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
        La2:
            return r5
    }

    private static java.util.ArrayList<java.io.File> e(java.io.File r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.foundation.h.m$3 r1 = new com.tkay.expressad.foundation.h.m$3
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

    private static void f(java.lang.String r4) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L34
            r0.<init>(r4)     // Catch: java.lang.Exception -> L34
            java.util.ArrayList r4 = e(r0)     // Catch: java.lang.Exception -> L34
            com.tkay.expressad.foundation.h.m$4 r0 = new com.tkay.expressad.foundation.h.m$4     // Catch: java.lang.Exception -> L34
            r0.<init>()     // Catch: java.lang.Exception -> L34
            java.util.Collections.sort(r4, r0)     // Catch: java.lang.Exception -> L34
            int r0 = r4.size()     // Catch: java.lang.Exception -> L34
            int r0 = r0 + (-1)
            int r0 = r0 / 2
            r1 = 0
        L1a:
            if (r1 >= r0) goto L34
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
            return
    }

    private static void g(java.lang.String r4) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L2e
            r0.<init>(r4)     // Catch: java.lang.Exception -> L2e
            boolean r1 = r0.exists()     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L2d
            boolean r0 = r0.isDirectory()     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L2d
            java.io.File[] r4 = b(r4)     // Catch: java.lang.Exception -> L2e
            int r0 = r4.length     // Catch: java.lang.Exception -> L2e
            r1 = 0
        L17:
            if (r1 >= r0) goto L2d
            r2 = r4[r1]     // Catch: java.lang.Exception -> L2e
            boolean r3 = r2.exists()     // Catch: java.lang.Exception -> L2e
            if (r3 == 0) goto L2a
            boolean r3 = r2.isFile()     // Catch: java.lang.Exception -> L2e
            if (r3 == 0) goto L2a
            r2.delete()     // Catch: java.lang.Exception -> L2e
        L2a:
            int r1 = r1 + 1
            goto L17
        L2d:
            return
        L2e:
            r4 = move-exception
            r4.printStackTrace()
            return
    }
}
