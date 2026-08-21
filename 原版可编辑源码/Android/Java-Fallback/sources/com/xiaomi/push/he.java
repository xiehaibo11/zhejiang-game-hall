package com.xiaomi.push;

public class he {
    private static boolean a;

    class a implements java.lang.Runnable {
        private android.content.Context a;
        private com.xiaomi.push.hh a;

        public a(android.content.Context r1, com.xiaomi.push.hh r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.a = r1
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.content.Context r0 = r2.a
                com.xiaomi.push.hh r1 = r2.a
                com.xiaomi.push.he.b(r0, r1)
                return
        }
    }

    static {
            return
    }

    private static void a(android.content.Context r2) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = r2.getFilesDir()
            r1.append(r2)
            java.lang.String r2 = "/tdReadTemp"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L23
            r0.mkdirs()
        L23:
            return
    }

    public static void a(android.content.Context r2, com.xiaomi.push.hh r3) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.push.he$a r1 = new com.xiaomi.push.he$a
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    private static void a(android.content.Context r12, com.xiaomi.push.hh r13, java.io.File r14, byte[] r15) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 4
            byte[] r2 = new byte[r1]
            r3 = 0
            java.io.BufferedInputStream r4 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> Lcf java.lang.Exception -> Ld1
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lcf java.lang.Exception -> Ld1
            r5.<init>(r14)     // Catch: java.lang.Throwable -> Lcf java.lang.Exception -> Ld1
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lcf java.lang.Exception -> Ld1
            r3 = 0
        L14:
            r5 = r3
            r6 = r5
        L16:
            int r7 = r4.read(r2)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r8 = -1
            if (r7 != r8) goto L1f
            goto Laf
        L1f:
            if (r7 == r1) goto L37
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.<init>()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r1 = "TinyData read from cache file failed cause lengthBuffer error. size:"
            r15.append(r1)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.append(r7)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
        L32:
            com.xiaomi.channel.commonutils.logger.b.d(r15)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            goto Laf
        L37:
            int r7 = com.xiaomi.push.af.a(r2)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r8 = 1
            if (r7 < r8) goto L9d
            r8 = 10240(0x2800, float:1.4349E-41)
            if (r7 <= r8) goto L43
            goto L9d
        L43:
            byte[] r9 = new byte[r7]     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            int r10 = r4.read(r9)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r10 == r7) goto L65
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.<init>()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r1 = "TinyData read from cache file failed cause buffer size not equal length. size:"
            r15.append(r1)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.append(r10)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r1 = "__length:"
            r15.append(r1)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.append(r7)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            goto L32
        L65:
            byte[] r7 = com.xiaomi.push.i.a(r15, r9)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r7 == 0) goto L96
            int r9 = r7.length     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r9 != 0) goto L6f
            goto L96
        L6f:
            com.xiaomi.push.hn r9 = new com.xiaomi.push.hn     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r9.<init>()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            com.xiaomi.push.it.a(r9, r7)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r10 = "item_size"
            int r11 = r7.length     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r9.a(r10, r11)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r0.add(r9)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            int r5 = r5 + 1
            int r7 = r7.length     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            int r6 = r6 + r7
            r7 = 8
            if (r5 >= r7) goto L8e
            if (r6 < r8) goto L16
        L8e:
            com.xiaomi.push.hf.a(r12, r13, r0)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r0.clear()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            goto L14
        L96:
            java.lang.String r7 = "TinyData read from cache file failed cause decrypt fail"
            com.xiaomi.channel.commonutils.logger.b.d(r7)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            goto L16
        L9d:
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.<init>()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r1 = "TinyData read from cache file failed cause lengthBuffer < 1 || too big. length:"
            r15.append(r1)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            r15.append(r7)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            goto L32
        Laf:
            com.xiaomi.push.hf.a(r12, r13, r0)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r14 == 0) goto Lc5
            boolean r12 = r14.exists()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r12 == 0) goto Lc5
            boolean r12 = r14.delete()     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
            if (r12 != 0) goto Lc5
            java.lang.String r12 = "TinyData delete reading temp file failed"
            com.xiaomi.channel.commonutils.logger.b.a(r12)     // Catch: java.lang.Throwable -> Lc9 java.lang.Exception -> Lcc
        Lc5:
            com.xiaomi.push.ab.a(r4)
            goto Ld8
        Lc9:
            r12 = move-exception
            r3 = r4
            goto Ld9
        Lcc:
            r12 = move-exception
            r3 = r4
            goto Ld2
        Lcf:
            r12 = move-exception
            goto Ld9
        Ld1:
            r12 = move-exception
        Ld2:
            com.xiaomi.channel.commonutils.logger.b.a(r12)     // Catch: java.lang.Throwable -> Lcf
            com.xiaomi.push.ab.a(r3)
        Ld8:
            return
        Ld9:
            com.xiaomi.push.ab.a(r3)
            throw r12
    }

    private static void b(android.content.Context r4) {
            java.lang.String r0 = "mipush_extra"
            r1 = 4
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r4 = r4.edit()
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.String r2 = "last_tiny_data_upload_timestamp"
            r4.putLong(r2, r0)
            r4.commit()
            return
    }

    static void b(android.content.Context r0, com.xiaomi.push.hh r1) {
            c(r0, r1)
            return
    }

    private static void c(android.content.Context r11, com.xiaomi.push.hh r12) {
            java.lang.String r0 = "/"
            java.lang.String r1 = "/tdReadTemp"
            boolean r2 = com.xiaomi.push.he.a
            if (r2 != 0) goto Ldd
            r2 = 1
            com.xiaomi.push.he.a = r2
            java.io.File r2 = new java.io.File
            java.io.File r3 = r11.getFilesDir()
            java.lang.String r4 = "tiny_data.data"
            r2.<init>(r3, r4)
            boolean r3 = r2.exists()
            java.lang.String r5 = "TinyData no ready file to get data."
            if (r3 != 0) goto L22
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            return
        L22:
            a(r11)
            byte[] r3 = com.xiaomi.push.service.ca.a(r11)
            r6 = 0
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            java.io.File r8 = r11.getFilesDir()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            java.lang.String r9 = "tiny_data.lock"
            r7.<init>(r8, r9)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            java.io.RandomAccessFile r8 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            java.lang.String r9 = "rw"
            r8.<init>(r7, r9)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            java.nio.channels.FileChannel r7 = r8.getChannel()     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            java.nio.channels.FileLock r6 = r7.lock()     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r9.<init>()     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            java.io.File r10 = r11.getFilesDir()     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r9.append(r10)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r9.append(r1)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r9.append(r0)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r9.append(r4)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r7.<init>(r9)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            r2.renameTo(r7)     // Catch: java.lang.Exception -> L76 java.lang.Throwable -> Lc8
            if (r6 == 0) goto L90
            boolean r2 = r6.isValid()
            if (r2 == 0) goto L90
            r6.release()     // Catch: java.io.IOException -> L74
            goto L90
        L74:
            r2 = move-exception
            goto L8d
        L76:
            r2 = move-exception
            goto L7d
        L78:
            r11 = move-exception
            r8 = r6
            goto Lc9
        L7b:
            r2 = move-exception
            r8 = r6
        L7d:
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> Lc8
            if (r6 == 0) goto L90
            boolean r2 = r6.isValid()
            if (r2 == 0) goto L90
            r6.release()     // Catch: java.io.IOException -> L8c
            goto L90
        L8c:
            r2 = move-exception
        L8d:
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L90:
            com.xiaomi.push.ab.a(r8)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.io.File r7 = r11.getFilesDir()
            r6.append(r7)
            r6.append(r1)
            r6.append(r0)
            r6.append(r4)
            java.lang.String r0 = r6.toString()
            r2.<init>(r0)
            boolean r0 = r2.exists()
            if (r0 != 0) goto Lbb
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            return
        Lbb:
            a(r11, r12, r2, r3)
            r12 = 0
            com.xiaomi.push.hd.a(r12)
            b(r11)
            com.xiaomi.push.he.a = r12
            return
        Lc8:
            r11 = move-exception
        Lc9:
            if (r6 == 0) goto Ld9
            boolean r12 = r6.isValid()
            if (r12 == 0) goto Ld9
            r6.release()     // Catch: java.io.IOException -> Ld5
            goto Ld9
        Ld5:
            r12 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r12)
        Ld9:
            com.xiaomi.push.ab.a(r8)
            throw r11
        Ldd:
            java.lang.String r11 = "TinyData extractTinyData is running"
            com.xiaomi.channel.commonutils.logger.b.a(r11)
            return
    }
}
