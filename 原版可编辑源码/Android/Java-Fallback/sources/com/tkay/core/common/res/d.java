package com.tkay.core.common.res;

public class d {
    public static final java.lang.String a = "about:blank";
    private static final java.lang.String e = "tkay_internal_resouce";
    private static final java.lang.String f = "tkay_custom_resouce";
    private static final java.lang.String g = "tkay_internal_extra_resource";
    private static final java.lang.String h = "tkay_internal_video_resource";
    private static final java.lang.String i = "tkay_internal_html_resouce";
    private static volatile com.tkay.core.common.res.d j;
    java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.core.common.res.a> b;
    final long c;
    private final java.lang.String d;
    private android.content.Context k;
    private java.io.File l;


    private d(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.b = r0
            r0 = 172800000(0xa4cb800, double:8.53745436E-316)
            r2.c = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.k = r3
            java.io.File r3 = com.tkay.core.common.l.j.a(r3)
            r2.l = r3
            return
    }

    private synchronized com.tkay.core.common.res.a a(int r4, java.io.File r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.core.common.res.a> r0 = r3.b     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L3c
            com.tkay.core.common.res.a r0 = (com.tkay.core.common.res.a) r0     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L3a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L25
            long r1 = r1.d(r4)     // Catch: java.lang.Throwable -> L25
            com.tkay.core.common.res.a r0 = com.tkay.core.common.res.a.a(r5, r1)     // Catch: java.lang.Throwable -> L25
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.tkay.core.common.res.a> r5 = r3.b     // Catch: java.lang.Throwable -> L25
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L25
            r5.put(r4, r0)     // Catch: java.lang.Throwable -> L25
            goto L3a
        L25:
            r4 = move-exception
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L3c
            boolean r5 = r5.z()     // Catch: java.lang.Throwable -> L3c
            if (r5 == 0) goto L3a
            java.lang.String r5 = r3.d     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "Create DiskCache error."
            android.util.Log.e(r5, r1)     // Catch: java.lang.Throwable -> L3c
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L3c
        L3a:
            monitor-exit(r3)
            return r0
        L3c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public static com.tkay.core.common.res.d a(android.content.Context r2) {
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.j
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.res.d> r0 = com.tkay.core.common.res.d.class
            monitor-enter(r0)
            com.tkay.core.common.res.d r1 = com.tkay.core.common.res.d.j     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.res.d r1 = new com.tkay.core.common.res.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.res.d.j = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.res.d r2 = com.tkay.core.common.res.d.j
            return r2
    }

    private boolean a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            r4 = 0
            return r4
        L8:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 1
            java.lang.String r2 = r3.a(r2)
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ".0"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            boolean r4 = r0.exists()
            return r4
    }

    public final java.io.FileInputStream a(int r4, java.lang.String r5) {
            r3 = this;
            r0 = 4
            r1 = 0
            if (r4 == r0) goto L37
            java.lang.String r0 = r3.a(r4)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto Lf
            return r1
        Lf:
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r0 = r2.exists()
            if (r0 != 0) goto L1d
            r2.mkdirs()
        L1d:
            com.tkay.core.common.res.a r4 = r3.a(r4, r2)
            if (r4 == 0) goto L36
            com.tkay.core.common.res.a$c r4 = r4.a(r5)     // Catch: java.lang.Exception -> L32
            if (r4 == 0) goto L36
            java.io.InputStream r4 = r4.a()     // Catch: java.lang.Exception -> L32
            if (r4 == 0) goto L36
            java.io.FileInputStream r4 = (java.io.FileInputStream) r4     // Catch: java.lang.Exception -> L32
            return r4
        L32:
            r4 = move-exception
            r4.printStackTrace()
        L36:
            return r1
        L37:
            java.lang.String r4 = r3.b(r0, r5)     // Catch: java.lang.Throwable -> L46
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L46
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L46
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L46
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L46
            return r4
        L46:
            return r1
    }

    public final java.lang.String a() {
            r1 = this;
            java.io.File r0 = r1.l
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public final java.lang.String a(int r3) {
            r2 = this;
            r0 = 1
            if (r3 == r0) goto L12
            r0 = 3
            if (r3 == r0) goto Lf
            r0 = 4
            if (r3 == r0) goto Lc
            java.lang.String r3 = "tkay_custom_resouce"
            goto L14
        Lc:
            java.lang.String r3 = "tkay_internal_video_resource"
            goto L14
        Lf:
            java.lang.String r3 = "tkay_internal_extra_resource"
            goto L14
        L12:
            java.lang.String r3 = "tkay_internal_resouce"
        L14:
            java.io.File r0 = new java.io.File
            java.io.File r1 = r2.l
            r0.<init>(r1, r3)
            java.lang.String r3 = r0.getAbsolutePath()
            return r3
    }

    public final java.lang.String a(java.lang.String r4, com.tkay.core.common.f.i r5, com.tkay.core.common.f.h r6) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.io.File r1 = r3.l
            java.lang.String r2 = "tkay_internal_html_resouce"
            r0.<init>(r1, r2)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L12
            r0.mkdirs()
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = r5.d
            r1.append(r5)
            java.lang.String r5 = "_"
            r1.append(r5)
            java.lang.String r5 = r6.p()
            r1.append(r5)
            java.lang.String r5 = ".html"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.io.File r6 = new java.io.File
            r6.<init>(r0, r5)
            r5 = 0
            java.lang.String r0 = "utf-8"
            byte[] r4 = r4.getBytes(r0)     // Catch: java.lang.Throwable -> L54
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L54
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L54
            r5 = 0
            int r1 = r4.length     // Catch: java.lang.Throwable -> L53
            r0.write(r4, r5, r1)     // Catch: java.lang.Throwable -> L53
            java.net.URL r4 = r6.toURL()     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L53
            r0.close()     // Catch: java.lang.Throwable -> L5b
            goto L5b
        L53:
            r5 = r0
        L54:
            if (r5 == 0) goto L59
            r5.close()     // Catch: java.lang.Throwable -> L59
        L59:
            java.lang.String r4 = ""
        L5b:
            return r4
    }

    public final void a(com.tkay.core.common.f.i r3, com.tkay.core.common.f.h r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r0.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = r3.d     // Catch: java.lang.Throwable -> L36
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "_"
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = r4.p()     // Catch: java.lang.Throwable -> L36
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = ".html"
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L36
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L36
            java.io.File r0 = r2.l     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "tkay_internal_html_resouce"
            r4.<init>(r0, r1)     // Catch: java.lang.Throwable -> L36
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L36
            r0.<init>(r4, r3)     // Catch: java.lang.Throwable -> L36
            boolean r3 = r0.exists()     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L36
            r0.delete()     // Catch: java.lang.Throwable -> L36
        L36:
            return
    }

    public final boolean a(int r6, java.lang.String r7, java.io.InputStream r8) {
            r5 = this;
            r0 = 0
            if (r7 == 0) goto L87
            if (r8 != 0) goto L7
            goto L87
        L7:
            java.lang.String r1 = r5.a(r6)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L12
            return r0
        L12:
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 != 0) goto L20
            r2.mkdirs()
        L20:
            com.tkay.core.common.res.a r6 = r5.a(r6, r2)
            if (r6 == 0) goto L87
            r1 = 0
            com.tkay.core.common.res.a$c r2 = r6.a(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r2 != 0) goto L52
            com.tkay.core.common.res.a$a r6 = r6.b(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            if (r6 == 0) goto L59
            java.io.OutputStream r1 = r6.a(r0)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r7 = 2048(0x800, float:2.87E-42)
            byte[] r7 = new byte[r7]     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
        L3b:
            int r2 = r8.read(r7)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r3 = -1
            if (r2 == r3) goto L46
            r1.write(r7, r0, r2)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            goto L3b
        L46:
            r6.a()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            r1.close()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L60
            goto L59
        L4d:
            r7 = move-exception
            r4 = r1
            r1 = r6
            r6 = r4
            goto L64
        L52:
            java.io.InputStream r6 = r2.a()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
            r6.close()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L62
        L59:
            r0 = 1
            if (r1 == 0) goto L87
            r1.close()     // Catch: java.io.IOException -> L87
            goto L87
        L60:
            r6 = move-exception
            goto L81
        L62:
            r7 = move-exception
            r6 = r1
        L64:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = "writeToDiskLruCache - "
            r8.<init>(r2)     // Catch: java.lang.Throwable -> L7e
            r8.append(r7)     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L78
            r1.b()     // Catch: java.lang.Exception -> L74 java.lang.Throwable -> L7e
            goto L78
        L74:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L7e
        L78:
            if (r6 == 0) goto L87
            r6.close()     // Catch: java.io.IOException -> L87
            goto L87
        L7e:
            r7 = move-exception
            r1 = r6
            r6 = r7
        L81:
            if (r1 == 0) goto L86
            r1.close()     // Catch: java.io.IOException -> L86
        L86:
            throw r6
        L87:
            return r0
    }

    public final java.io.File b(com.tkay.core.common.f.i r3, com.tkay.core.common.f.h r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r3.d
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            java.lang.String r3 = r4.p()
            r0.append(r3)
            java.lang.String r3 = ".html"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.File r4 = new java.io.File
            java.io.File r0 = r2.l
            java.lang.String r1 = "tkay_internal_html_resouce"
            r4.<init>(r0, r1)
            java.io.File r0 = new java.io.File
            r0.<init>(r4, r3)
            boolean r3 = r0.exists()
            if (r3 == 0) goto L34
            return r0
        L34:
            r3 = 0
            return r3
    }

    public final java.lang.String b(int r2, java.lang.String r3) {
            r1 = this;
            r0 = 4
            if (r2 == r0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r1.a(r2)
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = ".0"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L21:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r1.a(r2)
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public final void b() {
            r8 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L3a
            java.io.File r1 = r8.l     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "tkay_internal_html_resouce"
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L3a
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L3a
            java.io.File[] r0 = r0.listFiles()     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L3a
            int r1 = r0.length     // Catch: java.lang.Throwable -> L3a
            if (r1 <= 0) goto L3a
            int r1 = r0.length     // Catch: java.lang.Throwable -> L3a
            r2 = 0
        L1a:
            if (r2 >= r1) goto L3a
            r3 = r0[r2]     // Catch: java.lang.Throwable -> L3a
            boolean r4 = r3.isFile()     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L37
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L37
            long r6 = r3.lastModified()     // Catch: java.lang.Throwable -> L37
            long r4 = r4 - r6
            r6 = 86400000(0x5265c00, double:4.2687272E-316)
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L37
            r3.delete()     // Catch: java.lang.Throwable -> L37
        L37:
            int r2 = r2 + 1
            goto L1a
        L3a:
            return
    }

    public final void c() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.res.d$1 r1 = new com.tkay.core.common.res.d$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }
}
