package com.xiaomi.push;

class de {
    private static java.lang.String a = "/MiPushLog";
    private int a;
    private final java.text.SimpleDateFormat a;
    private java.util.ArrayList<java.io.File> a;
    private boolean a;
    private int b;
    private java.lang.String b;
    private java.lang.String c;

    static {
            return
    }

    de() {
            r2 = this;
            r2.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            r2.a = r0
            r0 = 2097152(0x200000, float:2.938736E-39)
            r2.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.a = r0
            return
    }

    private void a(java.io.BufferedReader r13, java.io.BufferedWriter r14, java.util.regex.Pattern r15) {
            r12 = this;
            r0 = 4096(0x1000, float:5.74E-42)
            char[] r0 = new char[r0]
            int r1 = r13.read(r0)
            r2 = 0
            r3 = r2
        La:
            r4 = -1
            if (r1 == r4) goto L7a
            r5 = 1
            if (r3 == r5) goto L7a
            java.lang.String r6 = new java.lang.String
            r6.<init>(r0, r2, r1)
            java.util.regex.Matcher r7 = r15.matcher(r6)
            r8 = r2
            r9 = r8
        L1b:
            if (r8 >= r1) goto L5e
            boolean r8 = r7.find(r8)
            if (r8 == 0) goto L5e
            int r8 = r7.start()
            java.lang.String r10 = r12.b
            int r10 = r10.length()
            int r10 = r10 + r8
            java.lang.String r10 = r6.substring(r8, r10)
            boolean r11 = r12.a
            if (r11 != 0) goto L42
            java.lang.String r11 = r12.b
            int r10 = r10.compareTo(r11)
            if (r10 < 0) goto L4d
            r12.a = r5
            r9 = r8
            goto L4d
        L42:
            java.lang.String r11 = r12.c
            int r10 = r10.compareTo(r11)
            if (r10 <= 0) goto L4d
            r3 = r5
            r1 = r8
            goto L5e
        L4d:
            r10 = 10
            int r10 = r6.indexOf(r10, r8)
            if (r10 == r4) goto L56
            goto L5c
        L56:
            java.lang.String r10 = r12.b
            int r10 = r10.length()
        L5c:
            int r8 = r8 + r10
            goto L1b
        L5e:
            boolean r4 = r12.a
            if (r4 == 0) goto L75
            int r1 = r1 - r9
            int r4 = r12.a
            int r4 = r4 + r1
            r12.a = r4
            r14.write(r0, r9, r1)
            if (r3 == 0) goto L6e
            goto L7a
        L6e:
            int r1 = r12.a
            int r4 = r12.b
            if (r1 <= r4) goto L75
            goto L7a
        L75:
            int r1 = r13.read(r0)
            goto La
        L7a:
            return
    }

    private void a(java.io.File r9) {
            r8 = this;
            java.lang.String r0 = "LOG: filter error = "
            java.lang.String r1 = "\\d{4}-\\d{2}-\\d{2} \\d{2}:\\d{2}:\\d{2}"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)
            r2 = 0
            java.io.BufferedWriter r3 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            java.io.OutputStreamWriter r4 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            r5.<init>(r9)     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lbd java.io.IOException -> Lc0 java.io.FileNotFoundException -> Ld6
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.<init>()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "model :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "; os :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = android.os.Build.VERSION.INCREMENTAL     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "; uid :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = com.xiaomi.push.service.bv.a()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "; lng :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.util.Locale r4 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "; sdk :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r4 = 48
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "; andver :"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r4 = "\n"
            r9.append(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r3.write(r9)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r9 = 0
            r8.a = r9     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.util.ArrayList<java.io.File> r9 = r8.a     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
        L76:
            boolean r4 = r9.hasNext()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            if (r4 == 0) goto L9f
            java.lang.Object r4 = r9.next()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.io.File r4 = (java.io.File) r4     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.io.InputStreamReader r6 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.io.FileInputStream r7 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r7.<init>(r4)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r8.a(r5, r3, r1)     // Catch: java.lang.Throwable -> L99 java.io.IOException -> L9b java.io.FileNotFoundException -> L9d
            r5.close()     // Catch: java.lang.Throwable -> L99 java.io.IOException -> L9b java.io.FileNotFoundException -> L9d
            r2 = r5
            goto L76
        L99:
            r9 = move-exception
            goto Lb3
        L9b:
            r9 = move-exception
            goto Lb7
        L9d:
            r9 = move-exception
            goto Lbb
        L9f:
            com.xiaomi.push.cv r9 = com.xiaomi.push.cv.a()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            java.lang.String r9 = r9.c()     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            r3.write(r9)     // Catch: java.lang.Throwable -> Lb1 java.io.IOException -> Lb5 java.io.FileNotFoundException -> Lb9
            com.xiaomi.push.ab.a(r3)
            com.xiaomi.push.ab.a(r2)
            goto Lf4
        Lb1:
            r9 = move-exception
            r5 = r2
        Lb3:
            r2 = r3
            goto Lf6
        Lb5:
            r9 = move-exception
            r5 = r2
        Lb7:
            r2 = r3
            goto Lc2
        Lb9:
            r9 = move-exception
            r5 = r2
        Lbb:
            r2 = r3
            goto Ld8
        Lbd:
            r9 = move-exception
            r5 = r2
            goto Lf6
        Lc0:
            r9 = move-exception
            r5 = r2
        Lc2:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r1.<init>()     // Catch: java.lang.Throwable -> Lf5
            r1.append(r0)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> Lf5
            r1.append(r9)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> Lf5
            goto Leb
        Ld6:
            r9 = move-exception
            r5 = r2
        Ld8:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r1.<init>()     // Catch: java.lang.Throwable -> Lf5
            r1.append(r0)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> Lf5
            r1.append(r9)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> Lf5
        Leb:
            com.xiaomi.channel.commonutils.logger.b.c(r9)     // Catch: java.lang.Throwable -> Lf5
            com.xiaomi.push.ab.a(r2)
            com.xiaomi.push.ab.a(r5)
        Lf4:
            return
        Lf5:
            r9 = move-exception
        Lf6:
            com.xiaomi.push.ab.a(r2)
            com.xiaomi.push.ab.a(r5)
            throw r9
    }

    com.xiaomi.push.de a(java.io.File r2) {
            r1 = this;
            boolean r0 = r2.exists()
            if (r0 == 0) goto Lb
            java.util.ArrayList<java.io.File> r0 = r1.a
            r0.add(r2)
        Lb:
            return r1
    }

    com.xiaomi.push.de a(java.util.Date r2, java.util.Date r3) {
            r1 = this;
            boolean r0 = r2.after(r3)
            if (r0 == 0) goto L15
            java.text.SimpleDateFormat r0 = r1.a
            java.lang.String r3 = r0.format(r3)
            r1.b = r3
            java.text.SimpleDateFormat r3 = r1.a
            java.lang.String r2 = r3.format(r2)
            goto L23
        L15:
            java.text.SimpleDateFormat r0 = r1.a
            java.lang.String r2 = r0.format(r2)
            r1.b = r2
            java.text.SimpleDateFormat r2 = r1.a
            java.lang.String r2 = r2.format(r3)
        L23:
            r1.c = r2
            return r1
    }

    java.io.File a(android.content.Context r5, java.util.Date r6, java.util.Date r7, java.io.File r8) {
            r4 = this;
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equalsIgnoreCase(r0)
            r1 = 0
            if (r0 == 0) goto L45
            java.io.File r0 = new java.io.File
            java.io.File r2 = r5.getExternalFilesDir(r1)
            java.lang.String r3 = com.xiaomi.push.service.bk.N
            r0.<init>(r2, r3)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L29
            java.io.File r0 = new java.io.File
            java.io.File r2 = r5.getFilesDir()
            java.lang.String r3 = com.xiaomi.push.service.bk.N
            r0.<init>(r2, r3)
        L29:
            boolean r2 = r0.exists()
            if (r2 != 0) goto L33
            java.io.File r0 = r5.getFilesDir()
        L33:
            java.io.File r5 = new java.io.File
            java.lang.String r2 = "xmsf.log.1"
            r5.<init>(r0, r2)
            r4.a(r5)
            java.io.File r5 = new java.io.File
            java.lang.String r2 = "xmsf.log"
            r5.<init>(r0, r2)
            goto L70
        L45:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.io.File r5 = r5.getExternalFilesDir(r1)
            r2.append(r5)
            java.lang.String r5 = com.xiaomi.push.de.a
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            java.io.File r5 = new java.io.File
            java.lang.String r2 = "log0.txt"
            r5.<init>(r0, r2)
            r4.a(r5)
            java.io.File r5 = new java.io.File
            java.lang.String r2 = "log1.txt"
            r5.<init>(r0, r2)
        L70:
            r4.a(r5)
            boolean r5 = r0.isDirectory()
            if (r5 != 0) goto L7a
            return r1
        L7a:
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r6.getTime()
            r0.append(r2)
            java.lang.String r2 = "-"
            r0.append(r2)
            long r2 = r7.getTime()
            r0.append(r2)
            java.lang.String r2 = ".zip"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.<init>(r8, r0)
            boolean r0 = r5.exists()
            if (r0 == 0) goto La7
            return r1
        La7:
            r4.a(r6, r7)
            long r6 = java.lang.System.currentTimeMillis()
            java.io.File r0 = new java.io.File
            java.lang.String r2 = "log.txt"
            r0.<init>(r8, r2)
            r4.a(r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r2 = "LOG: filter cost = "
            r8.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r6
            r8.append(r2)
            java.lang.String r6 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r6)
            boolean r6 = r0.exists()
            if (r6 == 0) goto L101
            long r6 = java.lang.System.currentTimeMillis()
            com.xiaomi.push.ab.a(r5, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r2 = "LOG: zip cost = "
            r8.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r6
            r8.append(r2)
            java.lang.String r6 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r6)
            r0.delete()
            boolean r6 = r5.exists()
            if (r6 == 0) goto L101
            return r5
        L101:
            return r1
    }

    void a(int r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.b = r1
        L4:
            return
    }
}
