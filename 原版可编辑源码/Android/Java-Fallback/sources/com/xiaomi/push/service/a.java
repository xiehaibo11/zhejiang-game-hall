package com.xiaomi.push.service;

public class a {
    private static volatile com.xiaomi.push.service.a a;
    private android.content.Context a;
    private final java.lang.Object a;
    private final java.lang.String a;
    private final java.lang.Object b;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private volatile java.lang.String e;
    private volatile java.lang.String f;

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.b = r0
            java.lang.String r0 = "mipush_region"
            r1.a = r0
            java.lang.String r0 = "mipush_country_code"
            r1.b = r0
            java.lang.String r0 = "mipush_region.lock"
            r1.c = r0
            java.lang.String r0 = "mipush_country_code.lock"
            r1.d = r0
            r1.a = r2
            return
    }

    public static com.xiaomi.push.service.a a(android.content.Context r2) {
            com.xiaomi.push.service.a r0 = com.xiaomi.push.service.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.service.a> r0 = com.xiaomi.push.service.a.class
            monitor-enter(r0)
            com.xiaomi.push.service.a r1 = com.xiaomi.push.service.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.service.a r1 = new com.xiaomi.push.service.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.service.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.service.a r2 = com.xiaomi.push.service.a.a
            return r2
    }

    private java.lang.String a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.Object r7) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.io.File r1 = r4.getFilesDir()
            r0.<init>(r1, r5)
            boolean r1 = r0.exists()
            r2 = 0
            if (r1 != 0) goto L25
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "No ready file to get data from "
            r4.append(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return r2
        L25:
            monitor-enter(r7)
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.io.File r4 = r4.getFilesDir()     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            r5.<init>(r4, r6)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            com.xiaomi.push.ab.a(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.lang.String r6 = "rw"
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L61 java.lang.Exception -> L64
            java.nio.channels.FileChannel r5 = r4.getChannel()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.nio.channels.FileLock r5 = r5.lock()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.lang.String r6 = com.xiaomi.push.ab.a(r0)     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> L7f
            if (r5 == 0) goto L55
            boolean r0 = r5.isValid()     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L55
            r5.release()     // Catch: java.io.IOException -> L51 java.lang.Throwable -> L95
            goto L55
        L51:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L95
        L55:
            com.xiaomi.push.ab.a(r4)     // Catch: java.lang.Throwable -> L95
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L95
            return r6
        L5a:
            r6 = move-exception
            goto L67
        L5c:
            r6 = move-exception
            goto L81
        L5e:
            r6 = move-exception
            r5 = r2
            goto L67
        L61:
            r6 = move-exception
            r4 = r2
            goto L81
        L64:
            r6 = move-exception
            r4 = r2
            r5 = r4
        L67:
            com.xiaomi.channel.commonutils.logger.b.a(r6)     // Catch: java.lang.Throwable -> L7f
            if (r5 == 0) goto L7a
            boolean r6 = r5.isValid()     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            r5.release()     // Catch: java.io.IOException -> L76 java.lang.Throwable -> L95
            goto L7a
        L76:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L95
        L7a:
            com.xiaomi.push.ab.a(r4)     // Catch: java.lang.Throwable -> L95
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L95
            return r2
        L7f:
            r6 = move-exception
            r2 = r5
        L81:
            if (r2 == 0) goto L91
            boolean r5 = r2.isValid()     // Catch: java.lang.Throwable -> L95
            if (r5 == 0) goto L91
            r2.release()     // Catch: java.io.IOException -> L8d java.lang.Throwable -> L95
            goto L91
        L8d:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L95
        L91:
            com.xiaomi.push.ab.a(r4)     // Catch: java.lang.Throwable -> L95
            throw r6     // Catch: java.lang.Throwable -> L95
        L95:
            r4 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L95
            throw r4
    }

    private void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.Object r8) {
            r3 = this;
            monitor-enter(r8)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            java.io.File r2 = r4.getFilesDir()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            r1.<init>(r2, r7)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            com.xiaomi.push.ab.a(r1)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            java.io.RandomAccessFile r7 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            java.lang.String r2 = "rw"
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L42
            java.nio.channels.FileChannel r1 = r7.getChannel()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            java.nio.channels.FileLock r0 = r1.lock()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            java.io.File r4 = r4.getFilesDir()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            r1.<init>(r4, r6)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            com.xiaomi.push.ab.a(r1, r5)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L5c
            if (r0 == 0) goto L39
            boolean r4 = r0.isValid()     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L39
            r0.release()     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L5a
            goto L39
        L35:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L5a
        L39:
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> L5a
            goto L58
        L3d:
            r4 = move-exception
            goto L44
        L3f:
            r4 = move-exception
            r7 = r0
            goto L5d
        L42:
            r4 = move-exception
            r7 = r0
        L44:
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L39
            boolean r4 = r0.isValid()     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L39
            r0.release()     // Catch: java.io.IOException -> L53 java.lang.Throwable -> L5a
            goto L39
        L53:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L5a
            goto L39
        L58:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            return
        L5a:
            r4 = move-exception
            goto L71
        L5c:
            r4 = move-exception
        L5d:
            if (r0 == 0) goto L6d
            boolean r5 = r0.isValid()     // Catch: java.lang.Throwable -> L5a
            if (r5 == 0) goto L6d
            r0.release()     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L69
            goto L6d
        L69:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L5a
        L6d:
            com.xiaomi.push.ab.a(r7)     // Catch: java.lang.Throwable -> L5a
            throw r4     // Catch: java.lang.Throwable -> L5a
        L71:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            throw r4
    }

    public java.lang.String a() {
            r4 = this;
            java.lang.String r0 = r4.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.a
            java.lang.Object r1 = r4.a
            java.lang.String r2 = "mipush_region"
            java.lang.String r3 = "mipush_region.lock"
            java.lang.String r0 = r4.a(r0, r2, r3, r1)
            r4.e = r0
        L16:
            java.lang.String r0 = r4.e
            return r0
    }

    public void a(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = r7.e
            boolean r0 = android.text.TextUtils.equals(r8, r0)
            if (r0 != 0) goto L18
            r7.e = r8
            android.content.Context r2 = r7.a
            java.lang.String r3 = r7.e
            java.lang.Object r6 = r7.a
            java.lang.String r4 = "mipush_region"
            java.lang.String r5 = "mipush_region.lock"
            r1 = r7
            r1.a(r2, r3, r4, r5, r6)
        L18:
            return
    }

    public java.lang.String b() {
            r4 = this;
            java.lang.String r0 = r4.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.a
            java.lang.Object r1 = r4.b
            java.lang.String r2 = "mipush_country_code"
            java.lang.String r3 = "mipush_country_code.lock"
            java.lang.String r0 = r4.a(r0, r2, r3, r1)
            r4.f = r0
        L16:
            java.lang.String r0 = r4.f
            return r0
    }

    public void b(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = r7.f
            boolean r0 = android.text.TextUtils.equals(r8, r0)
            if (r0 != 0) goto L18
            r7.f = r8
            android.content.Context r2 = r7.a
            java.lang.String r3 = r7.f
            java.lang.Object r6 = r7.b
            java.lang.String r4 = "mipush_country_code"
            java.lang.String r5 = "mipush_country_code.lock"
            r1 = r7
            r1.a(r2, r3, r4, r5, r6)
        L18:
            return
    }
}
