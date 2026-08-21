package com.xiaomi.push;

public class aj {
    public static boolean a(android.content.Context r5, java.lang.String r6, long r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 23
            if (r0 < r2) goto L10
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r0 = com.xiaomi.push.h.c(r5, r0)
            if (r0 != 0) goto L10
            return r1
        L10:
            r0 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.io.File r3 = r5.getExternalFilesDir(r0)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.lang.String r4 = "/.vdevdir/"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.lang.String r4 = "lcfp.lock"
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            com.xiaomi.push.ab.a(r3)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.lang.String r4 = "rw"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.nio.channels.FileChannel r3 = r2.getChannel()     // Catch: java.io.IOException -> L48 java.lang.Throwable -> L61
            java.nio.channels.FileLock r0 = r3.lock()     // Catch: java.io.IOException -> L48 java.lang.Throwable -> L61
            boolean r5 = b(r5, r6, r7)     // Catch: java.io.IOException -> L48 java.lang.Throwable -> L61
            if (r0 == 0) goto L44
            boolean r6 = r0.isValid()
            if (r6 == 0) goto L44
            r0.release()     // Catch: java.io.IOException -> L44
        L44:
            com.xiaomi.push.ab.a(r2)
            return r5
        L48:
            r5 = move-exception
            goto L4f
        L4a:
            r5 = move-exception
            r2 = r0
            goto L62
        L4d:
            r5 = move-exception
            r2 = r0
        L4f:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5d
            boolean r5 = r0.isValid()
            if (r5 == 0) goto L5d
            r0.release()     // Catch: java.io.IOException -> L5d
        L5d:
            com.xiaomi.push.ab.a(r2)
            return r1
        L61:
            r5 = move-exception
        L62:
            if (r0 == 0) goto L6d
            boolean r6 = r0.isValid()
            if (r6 == 0) goto L6d
            r0.release()     // Catch: java.io.IOException -> L6d
        L6d:
            com.xiaomi.push.ab.a(r2)
            throw r5
    }

    private static boolean b(android.content.Context r16, java.lang.String r17, long r18) {
            java.io.File r0 = new java.io.File
            r1 = 0
            r2 = r16
            java.io.File r3 = r2.getExternalFilesDir(r1)
            java.lang.String r4 = "/.vdevdir/"
            r0.<init>(r3, r4)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = "lcfp"
            r3.<init>(r0, r4)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r7 = r17
            r6.append(r7)
            java.lang.String r8 = ":"
            r6.append(r8)
            java.lang.String r9 = r16.getPackageName()
            r6.append(r9)
            java.lang.String r9 = ","
            r6.append(r9)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            boolean r10 = r3.exists()
            r11 = 1
            if (r10 == 0) goto Lb9
            java.io.BufferedReader r10 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Lab
            java.io.FileReader r12 = new java.io.FileReader     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Lab
            r12.<init>(r3)     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Lab
            r10.<init>(r12)     // Catch: java.lang.Throwable -> La8 java.lang.Exception -> Lab
        L51:
            java.lang.String r12 = r10.readLine()     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            if (r12 == 0) goto Laf
            java.lang.String[] r13 = r12.split(r8)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            int r14 = r13.length     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            r15 = 2
            if (r14 == r15) goto L60
            goto L51
        L60:
            r14 = 0
            r1 = r13[r14]     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            java.lang.String r14 = java.lang.String.valueOf(r17)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            boolean r1 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            if (r1 == 0) goto La3
            r1 = r13[r11]     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            java.lang.String[] r1 = r1.split(r9)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            int r12 = r1.length     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            if (r12 == r15) goto L77
            goto La6
        L77:
            r12 = r1[r11]     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            long r12 = java.lang.Long.parseLong(r12)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            r14 = 0
            r1 = r1[r14]     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            java.lang.String r14 = r16.getPackageName()     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            boolean r1 = android.text.TextUtils.equals(r1, r14)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            if (r1 != 0) goto La6
            long r12 = r4 - r12
            long r12 = java.lang.Math.abs(r12)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
            float r1 = (float) r12
            r12 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r18
            float r12 = (float) r12
            r13 = 1063675494(0x3f666666, float:0.9)
            float r12 = r12 * r13
            int r1 = (r1 > r12 ? 1 : (r1 == r12 ? 0 : -1))
            if (r1 >= 0) goto La6
            com.xiaomi.push.ab.a(r10)
            r0 = 0
            return r0
        La3:
            r0.add(r12)     // Catch: java.lang.Exception -> Lac java.lang.Throwable -> Lb3
        La6:
            r1 = 0
            goto L51
        La8:
            r0 = move-exception
            r1 = 0
            goto Lb5
        Lab:
            r10 = 0
        Lac:
            r0.clear()     // Catch: java.lang.Throwable -> Lb3
        Laf:
            com.xiaomi.push.ab.a(r10)
            goto Lc0
        Lb3:
            r0 = move-exception
            r1 = r10
        Lb5:
            com.xiaomi.push.ab.a(r1)
            throw r0
        Lb9:
            boolean r1 = com.xiaomi.push.ab.a(r3)
            if (r1 != 0) goto Lc0
            return r11
        Lc0:
            r0.add(r6)
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Le9 java.io.IOException -> Lec
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.lang.Throwable -> Le9 java.io.IOException -> Lec
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Le9 java.io.IOException -> Lec
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Le9 java.io.IOException -> Lec
            java.util.Iterator r0 = r0.iterator()     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
        Ld1:
            boolean r2 = r0.hasNext()     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            if (r2 == 0) goto Lf5
            java.lang.Object r2 = r0.next()     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            r1.write(r2)     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            r1.newLine()     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            r1.flush()     // Catch: java.io.IOException -> Le7 java.lang.Throwable -> Lf9
            goto Ld1
        Le7:
            r0 = move-exception
            goto Lee
        Le9:
            r0 = move-exception
            r1 = 0
            goto Lfa
        Lec:
            r0 = move-exception
            r1 = 0
        Lee:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lf9
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Throwable -> Lf9
        Lf5:
            com.xiaomi.push.ab.a(r1)
            return r11
        Lf9:
            r0 = move-exception
        Lfa:
            com.xiaomi.push.ab.a(r1)
            throw r0
    }
}
