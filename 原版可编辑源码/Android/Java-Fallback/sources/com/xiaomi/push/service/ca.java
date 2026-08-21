package com.xiaomi.push.service;

public class ca {
    public static final java.lang.Object a = null;
    public static java.util.ArrayList<com.xiaomi.push.hn> a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.push.service.ca.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.push.service.ca.a = r0
            return
    }

    public static void a() {
            java.util.ArrayList<com.xiaomi.push.hn> r0 = com.xiaomi.push.service.ca.a
            r0.clear()
            return
    }

    public static void a(android.content.Context r2, com.xiaomi.push.hn r3) {
            java.lang.String r0 = r3.e()
            boolean r0 = com.xiaomi.push.service.bz.a(r0)
            if (r0 != 0) goto Lb
            return
        Lb:
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.push.service.cb r1 = new com.xiaomi.push.service.cb
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public static void a(com.xiaomi.push.hn r2) {
            java.util.ArrayList<com.xiaomi.push.hn> r0 = com.xiaomi.push.service.ca.a
            int r0 = r0.size()
            r1 = 10
            if (r0 <= r1) goto L10
            java.util.ArrayList<com.xiaomi.push.hn> r0 = com.xiaomi.push.service.ca.a
            r1 = 0
            r0.remove(r1)
        L10:
            java.util.ArrayList<com.xiaomi.push.hn> r0 = com.xiaomi.push.service.ca.a
            r0.add(r2)
            return
    }

    public static byte[] a(android.content.Context r4) {
            com.xiaomi.push.r r0 = com.xiaomi.push.r.a(r4)
            java.lang.String r1 = "td_key"
            java.lang.String r2 = "mipush"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.a(r2, r1, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L21
            r0 = 20
            java.lang.String r0 = com.xiaomi.push.bp.a(r0)
            com.xiaomi.push.r r4 = com.xiaomi.push.r.a(r4)
            r4.a(r2, r1, r0)
        L21:
            byte[] r4 = a(r0)
            return r4
    }

    private static byte[] a(java.lang.String r2) {
            byte[] r2 = com.xiaomi.push.bm.a(r2)
            r0 = 16
            byte[] r2 = java.util.Arrays.copyOf(r2, r0)
            r0 = 0
            r1 = 68
            r2[r0] = r1
            r0 = 15
            r1 = 84
            r2[r0] = r1
            return r2
    }

    static void b(android.content.Context r0, com.xiaomi.push.hn r1) {
            c(r0, r1)
            return
    }

    private static void c(android.content.Context r7, com.xiaomi.push.hn r8) {
            byte[] r0 = a(r7)
            r1 = 0
            byte[] r2 = com.xiaomi.push.it.a(r8)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            byte[] r0 = com.xiaomi.push.i.b(r0, r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r2 = "  ts:"
            if (r0 == 0) goto L7f
            int r3 = r0.length     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r4 = 1
            if (r3 >= r4) goto L17
            goto L7f
        L17:
            int r3 = r0.length     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r5 = 10240(0x2800, float:1.4349E-41)
            if (r3 <= r5) goto L45
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.<init>()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r0 = "TinyData write to cache file failed case too much data content item:"
            r7.append(r0)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r0 = r8.d()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r0)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
        L3b:
            com.xiaomi.channel.commonutils.logger.b.a(r7)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r1)
            return
        L45:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.io.File r7 = r7.getFilesDir()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r3 = "tiny_data.data"
            r2.<init>(r7, r3)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.io.BufferedOutputStream r7 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            int r2 = r0.length     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L75 java.io.IOException -> L7a
            byte[] r2 = com.xiaomi.push.af.a(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L75 java.io.IOException -> L7a
            r7.write(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L75 java.io.IOException -> L7a
            r7.write(r0)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L75 java.io.IOException -> L7a
            r7.flush()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L75 java.io.IOException -> L7a
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r7)
            goto Lda
        L70:
            r8 = move-exception
            r0 = r7
            r7 = r8
            goto Ldc
        L75:
            r0 = move-exception
            r6 = r0
            r0 = r7
            r7 = r6
            goto La4
        L7a:
            r0 = move-exception
            r6 = r0
            r0 = r7
            r7 = r6
            goto Lbc
        L7f:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.<init>()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r0 = "TinyData write to cache file failed case encryption fail item:"
            r7.append(r0)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r0 = r8.d()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r0)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            r7.append(r2)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La2 java.io.IOException -> Lba
            goto L3b
        L9f:
            r7 = move-exception
            r0 = r1
            goto Ldc
        La2:
            r7 = move-exception
            r0 = r1
        La4:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldb
            r2.<init>()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r3 = "TinyData write to cache file  failed item:"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r8 = r8.d()     // Catch: java.lang.Throwable -> Ldb
            r2.append(r8)     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Ldb
            goto Ld1
        Lba:
            r7 = move-exception
            r0 = r1
        Lbc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldb
            r2.<init>()     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r3 = "TinyData write to cache file failed cause io exception item:"
            r2.append(r3)     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r8 = r8.d()     // Catch: java.lang.Throwable -> Ldb
            r2.append(r8)     // Catch: java.lang.Throwable -> Ldb
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Ldb
        Ld1:
            com.xiaomi.channel.commonutils.logger.b.a(r8, r7)     // Catch: java.lang.Throwable -> Ldb
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r0)
        Lda:
            return
        Ldb:
            r7 = move-exception
        Ldc:
            com.xiaomi.push.ab.a(r1)
            com.xiaomi.push.ab.a(r0)
            throw r7
    }
}
