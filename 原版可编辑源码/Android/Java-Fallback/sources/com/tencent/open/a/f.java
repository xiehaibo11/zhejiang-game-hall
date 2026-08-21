package com.tencent.open.a;

public class f {
    private static com.tencent.open.a.f a;
    private com.tencent.open.utils.i b;
    private com.tencent.open.a.a c;

    protected f() {
            r0 = this;
            r0.<init>()
            r0.b()
            return
    }

    public static com.tencent.open.a.f a() {
            com.tencent.open.a.f r0 = com.tencent.open.a.f.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tencent.open.a.f> r0 = com.tencent.open.a.f.class
            monitor-enter(r0)
            com.tencent.open.a.f r1 = com.tencent.open.a.f.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tencent.open.a.f r1 = new com.tencent.open.a.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tencent.open.a.f.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.tencent.open.a.f r0 = com.tencent.open.a.f.a
            r0.c()
            com.tencent.open.a.f r0 = com.tencent.open.a.f.a
            return r0
    }

    private void b() {
            r5 = this;
            java.lang.String r0 = "openSDK_LOG.OpenHttpService"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "AndroidSDK_"
            r1.append(r2)
            java.lang.String r2 = android.os.Build.VERSION.SDK
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            com.tencent.open.utils.f r3 = com.tencent.open.utils.f.a()
            android.content.Context r4 = com.tencent.open.utils.g.a()
            java.lang.String r3 = r3.b(r4)
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tencent.open.a.e r2 = new com.tencent.open.a.e     // Catch: java.lang.Throwable -> L39 java.lang.NoClassDefFoundError -> L40
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L39 java.lang.NoClassDefFoundError -> L40
            r5.c = r2     // Catch: java.lang.Throwable -> L39 java.lang.NoClassDefFoundError -> L40
            goto L46
        L39:
            r2 = move-exception
            java.lang.String r3 = "initClient okHttp catch throwable"
            com.tencent.open.log.SLog.e(r0, r3, r2)
            goto L46
        L40:
            r2 = move-exception
            java.lang.String r3 = "initClient okHttp catch error"
            com.tencent.open.log.SLog.e(r0, r3, r2)
        L46:
            com.tencent.open.a.a r0 = r5.c
            if (r0 != 0) goto L51
            com.tencent.open.a.b r0 = new com.tencent.open.a.b
            r0.<init>(r1)
            r5.c = r0
        L51:
            return
    }

    private void c() {
            r4 = this;
            com.tencent.open.utils.i r0 = r4.b
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = "Common_HttpConnectionTimeout"
            int r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            r0 = 15000(0x3a98, float:2.102E-41)
        Lf:
            com.tencent.open.utils.i r1 = r4.b
            java.lang.String r2 = "Common_SocketConnectionTimeout"
            int r1 = r1.a(r2)
            if (r1 != 0) goto L1b
            r1 = 30000(0x7530, float:4.2039E-41)
        L1b:
            long r2 = (long) r0
            long r0 = (long) r1
            r4.a(r2, r0)
            return
    }

    public com.tencent.open.a.g a(java.lang.String r3, java.lang.String r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.OpenHttpService"
            java.lang.String r1 = "get."
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.open.a.a r0 = r2.c
            com.tencent.open.a.g r3 = r0.a(r3, r4)
            return r3
    }

    public com.tencent.open.a.g a(java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = ""
            if (r7 == 0) goto L5f
            boolean r1 = r7.isEmpty()
            if (r1 == 0) goto Lb
            goto L5f
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.util.Set r0 = r7.keySet()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L47
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r7.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L18
            java.lang.String r4 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r4)
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r3, r4)
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            goto L18
        L47:
            int r7 = r1.length()
            if (r7 <= 0) goto L56
            int r7 = r1.length()
            int r7 = r7 + (-1)
            r1.deleteCharAt(r7)
        L56:
            java.lang.String r7 = r1.toString()
            com.tencent.open.a.g r6 = r5.a(r6, r7)
            return r6
        L5f:
            com.tencent.open.a.g r6 = r5.a(r6, r0)
            return r6
    }

    public com.tencent.open.a.g a(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, java.util.Map<java.lang.String, byte[]> r4) throws java.io.IOException {
            r1 = this;
            if (r4 == 0) goto L10
            int r0 = r4.size()
            if (r0 != 0) goto L9
            goto L10
        L9:
            com.tencent.open.a.a r0 = r1.c
            com.tencent.open.a.g r2 = r0.a(r2, r3, r4)
            return r2
        L10:
            com.tencent.open.a.g r2 = r1.b(r2, r3)
            return r2
    }

    public void a(long r2, long r4) {
            r1 = this;
            com.tencent.open.a.a r0 = r1.c
            if (r0 == 0) goto L7
            r0.a(r2, r4)
        L7:
            return
    }

    public void a(com.tencent.open.utils.i r1) {
            r0 = this;
            r0.b = r1
            r0.c()
            return
    }

    public com.tencent.open.a.g b(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.OpenHttpService"
            java.lang.String r1 = "post data"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.open.a.a r0 = r2.c
            com.tencent.open.a.g r3 = r0.a(r3, r4)
            return r3
    }
}
