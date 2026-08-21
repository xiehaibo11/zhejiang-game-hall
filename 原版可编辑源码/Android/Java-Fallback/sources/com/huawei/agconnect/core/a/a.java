package com.huawei.agconnect.core.a;

public class a extends com.huawei.agconnect.AGConnectInstance {
    private static java.util.List<com.huawei.agconnect.core.Service> a;
    private static final java.lang.Object b = null;
    private static final java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectInstance> c = null;
    private final com.huawei.agconnect.AGConnectOptions d;
    private final com.huawei.agconnect.core.a.c e;
    private final com.huawei.agconnect.core.a.c f;





    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.agconnect.core.a.a.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.agconnect.core.a.a.c = r0
            return
    }

    public a(com.huawei.agconnect.AGConnectOptions r3) {
            r2 = this;
            r2.<init>()
            r2.d = r3
            java.util.List<com.huawei.agconnect.core.Service> r0 = com.huawei.agconnect.core.a.a.a
            if (r0 != 0) goto L10
            java.lang.String r0 = "AGConnectInstance"
            java.lang.String r1 = "please call `initialize()` first"
            android.util.Log.e(r0, r1)
        L10:
            com.huawei.agconnect.core.a.c r0 = new com.huawei.agconnect.core.a.c
            java.util.List<com.huawei.agconnect.core.Service> r1 = com.huawei.agconnect.core.a.a.a
            r0.<init>(r1)
            r2.e = r0
            com.huawei.agconnect.core.a.c r0 = new com.huawei.agconnect.core.a.c
            r1 = 0
            r0.<init>(r1)
            r2.f = r0
            boolean r1 = r3 instanceof com.huawei.agconnect.config.a.b
            if (r1 == 0) goto L2e
            com.huawei.agconnect.config.a.b r3 = (com.huawei.agconnect.config.a.b) r3
            java.util.List r3 = r3.a()
            r0.a(r3)
        L2e:
            return
    }

    public static com.huawei.agconnect.AGConnectInstance a() {
            java.lang.String r0 = "DEFAULT_INSTANCE"
            com.huawei.agconnect.AGConnectInstance r0 = a(r0)
            return r0
    }

    public static com.huawei.agconnect.AGConnectInstance a(com.huawei.agconnect.AGConnectOptions r1) {
            r0 = 0
            com.huawei.agconnect.AGConnectInstance r1 = a(r1, r0)
            return r1
    }

    private static com.huawei.agconnect.AGConnectInstance a(com.huawei.agconnect.AGConnectOptions r3, boolean r4) {
            java.lang.Object r0 = com.huawei.agconnect.core.a.a.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectInstance> r1 = com.huawei.agconnect.core.a.a.c     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = r3.getIdentifier()     // Catch: java.lang.Throwable -> L23
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L23
            com.huawei.agconnect.AGConnectInstance r1 = (com.huawei.agconnect.AGConnectInstance) r1     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L13
            if (r4 == 0) goto L21
        L13:
            com.huawei.agconnect.core.a.a r1 = new com.huawei.agconnect.core.a.a     // Catch: java.lang.Throwable -> L23
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L23
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectInstance> r4 = com.huawei.agconnect.core.a.a.c     // Catch: java.lang.Throwable -> L23
            java.lang.String r3 = r3.getIdentifier()     // Catch: java.lang.Throwable -> L23
            r4.put(r3, r1)     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return r1
        L23:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r3
    }

    public static com.huawei.agconnect.AGConnectInstance a(java.lang.String r5) {
            java.lang.Object r0 = com.huawei.agconnect.core.a.a.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectInstance> r1 = com.huawei.agconnect.core.a.a.c     // Catch: java.lang.Throwable -> L35
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L35
            com.huawei.agconnect.AGConnectInstance r1 = (com.huawei.agconnect.AGConnectInstance) r1     // Catch: java.lang.Throwable -> L35
            if (r1 != 0) goto L33
            java.lang.String r2 = "DEFAULT_INSTANCE"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L1d
            java.lang.String r5 = "AGConnectInstance"
            java.lang.String r2 = "please call `initialize()` first"
            android.util.Log.w(r5, r2)     // Catch: java.lang.Throwable -> L35
            goto L33
        L1d:
            java.lang.String r2 = "AGConnectInstance"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r3.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "not find instance for : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L35
            r3.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L35
            android.util.Log.w(r2, r5)     // Catch: java.lang.Throwable -> L35
        L33:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r1
        L35:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r5
    }

    public static synchronized void a(android.content.Context r3) {
            java.lang.Class<com.huawei.agconnect.core.a.a> r0 = com.huawei.agconnect.core.a.a.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.agconnect.AGConnectInstance> r1 = com.huawei.agconnect.core.a.a.c     // Catch: java.lang.Throwable -> L1f
            java.lang.String r2 = "DEFAULT_INSTANCE"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L16
            java.lang.String r3 = "AGConnectInstance"
            java.lang.String r1 = "Repeated invoking initialize"
            android.util.Log.w(r3, r1)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return
        L16:
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r3)     // Catch: java.lang.Throwable -> L1f
            a(r3, r1)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return
        L1f:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static synchronized void a(android.content.Context r3, com.huawei.agconnect.AGConnectOptions r4) {
            java.lang.Class<com.huawei.agconnect.core.a.a> r0 = com.huawei.agconnect.core.a.a.class
            monitor-enter(r0)
            android.content.Context r1 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L11
            java.lang.String r1 = "AGConnectInstance"
            java.lang.String r2 = "context.getApplicationContext null"
            android.util.Log.w(r1, r2)     // Catch: java.lang.Throwable -> L2d
            goto L12
        L11:
            r3 = r1
        L12:
            com.huawei.agconnect.config.a.a.a(r3)     // Catch: java.lang.Throwable -> L2d
            java.util.List<com.huawei.agconnect.core.Service> r1 = com.huawei.agconnect.core.a.a.a     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L24
            com.huawei.agconnect.core.a.b r1 = new com.huawei.agconnect.core.a.b     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2d
            java.util.List r3 = r1.a()     // Catch: java.lang.Throwable -> L2d
            com.huawei.agconnect.core.a.a.a = r3     // Catch: java.lang.Throwable -> L2d
        L24:
            b()     // Catch: java.lang.Throwable -> L2d
            r3 = 1
            a(r4, r3)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r0)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void a(android.content.Context r2, com.huawei.agconnect.AGConnectOptionsBuilder r3) {
            java.lang.Class<com.huawei.agconnect.core.a.a> r0 = com.huawei.agconnect.core.a.a.class
            monitor-enter(r0)
            java.lang.String r1 = "DEFAULT_INSTANCE"
            com.huawei.agconnect.AGConnectOptions r3 = r3.build(r2, r1)     // Catch: java.lang.Throwable -> Le
            a(r2, r3)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)
            return
        Le:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static void b() {
            com.huawei.agconnect.core.a.a$1 r0 = new com.huawei.agconnect.core.a.a$1
            r0.<init>()
            java.lang.String r1 = "/agcgw/url"
            com.huawei.agconnect.JsonProcessingFactory.registerProcessor(r1, r0)
            com.huawei.agconnect.core.a.a$2 r0 = new com.huawei.agconnect.core.a.a$2
            r0.<init>()
            java.lang.String r1 = "/agcgw/backurl"
            com.huawei.agconnect.JsonProcessingFactory.registerProcessor(r1, r0)
            return
    }

    public void a(com.huawei.agconnect.CustomAuthProvider r3) {
            r2 = this;
            java.lang.Class<com.huawei.agconnect.core.service.auth.AuthProvider> r0 = com.huawei.agconnect.core.service.auth.AuthProvider.class
            com.huawei.agconnect.core.a.a$4 r1 = new com.huawei.agconnect.core.a.a$4
            r1.<init>(r2, r3)
            com.huawei.agconnect.core.Service$Builder r3 = com.huawei.agconnect.core.Service.builder(r0, r1)
            com.huawei.agconnect.core.Service r3 = r3.build()
            com.huawei.agconnect.core.a.c r0 = r2.f
            java.util.List r3 = java.util.Collections.singletonList(r3)
            r0.a(r3)
            return
    }

    public void a(com.huawei.agconnect.CustomCredentialsProvider r3) {
            r2 = this;
            java.lang.Class<com.huawei.agconnect.core.service.auth.CredentialsProvider> r0 = com.huawei.agconnect.core.service.auth.CredentialsProvider.class
            com.huawei.agconnect.core.a.a$3 r1 = new com.huawei.agconnect.core.a.a$3
            r1.<init>(r2, r3)
            com.huawei.agconnect.core.Service$Builder r3 = com.huawei.agconnect.core.Service.builder(r0, r1)
            com.huawei.agconnect.core.Service r3 = r3.build()
            com.huawei.agconnect.core.a.c r0 = r2.f
            java.util.List r3 = java.util.Collections.singletonList(r3)
            r0.a(r3)
            return
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            com.huawei.agconnect.AGConnectOptions r0 = r1.d
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    public java.lang.String getIdentifier() {
            r1 = this;
            com.huawei.agconnect.AGConnectOptions r0 = r1.d
            java.lang.String r0 = r0.getIdentifier()
            return r0
    }

    @Override
    public com.huawei.agconnect.AGConnectOptions getOptions() {
            r1 = this;
            com.huawei.agconnect.AGConnectOptions r0 = r1.d
            return r0
    }

    @Override
    public <T> T getService(java.lang.Class<? super T> r2) {
            r1 = this;
            com.huawei.agconnect.core.a.c r0 = r1.f
            java.lang.Object r0 = r0.a(r1, r2)
            if (r0 == 0) goto L9
            return r0
        L9:
            com.huawei.agconnect.core.a.c r0 = r1.e
            java.lang.Object r2 = r0.a(r1, r2)
            return r2
    }
}
