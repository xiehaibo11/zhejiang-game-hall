package com.huawei.agconnect.config.a;

public class c extends com.huawei.agconnect.config.AGConnectServicesConfig {
    private final android.content.Context a;
    private final java.lang.String b;
    private com.huawei.agconnect.config.LazyInputStream c;
    private volatile com.huawei.agconnect.config.a.d d;
    private final java.lang.Object e;
    private com.huawei.agconnect.AGCRoutePolicy f;
    private final java.util.Map<java.lang.String, java.lang.String> g;


    public c(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.e = r0
            com.huawei.agconnect.AGCRoutePolicy r0 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            r1.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            r1.a = r2
            r1.b = r3
            return
    }

    private static com.huawei.agconnect.config.LazyInputStream a(android.content.Context r1, java.io.InputStream r2) {
            com.huawei.agconnect.config.a.c$1 r0 = new com.huawei.agconnect.config.a.c$1
            r0.<init>(r1, r2)
            return r0
    }

    private static java.lang.String a(java.lang.String r3) {
            int r0 = r3.length()
            r1 = 47
            r2 = 0
            if (r0 <= 0) goto L12
        L9:
            char r0 = r3.charAt(r2)
            if (r0 != r1) goto L12
            int r2 = r2 + 1
            goto L9
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r3 = r3.substring(r2)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private void a() {
            r4 = this;
            com.huawei.agconnect.config.a.d r0 = r4.d
            if (r0 != 0) goto L38
            java.lang.Object r0 = r4.e
            monitor-enter(r0)
            com.huawei.agconnect.config.a.d r1 = r4.d     // Catch: java.lang.Throwable -> L35
            if (r1 != 0) goto L30
            com.huawei.agconnect.config.LazyInputStream r1 = r4.c     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L25
            com.huawei.agconnect.config.LazyInputStream r1 = r4.c     // Catch: java.lang.Throwable -> L35
            java.io.InputStream r1 = r1.loadInputStream()     // Catch: java.lang.Throwable -> L35
            com.huawei.agconnect.config.a.f r2 = new com.huawei.agconnect.config.a.f     // Catch: java.lang.Throwable -> L35
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L35
            r4.d = r2     // Catch: java.lang.Throwable -> L35
            com.huawei.agconnect.config.LazyInputStream r1 = r4.c     // Catch: java.lang.Throwable -> L35
            r1.close()     // Catch: java.lang.Throwable -> L35
            r1 = 0
            r4.c = r1     // Catch: java.lang.Throwable -> L35
            goto L30
        L25:
            com.huawei.agconnect.config.a.i r1 = new com.huawei.agconnect.config.a.i     // Catch: java.lang.Throwable -> L35
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L35
            java.lang.String r3 = r4.b     // Catch: java.lang.Throwable -> L35
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L35
            r4.d = r1     // Catch: java.lang.Throwable -> L35
        L30:
            r4.b()     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            goto L38
        L35:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r1
        L38:
            return
    }

    private java.lang.String b(java.lang.String r4) {
            r3 = this;
            java.util.Map r0 = com.huawei.agconnect.JsonProcessingFactory.getProcessors()
            boolean r1 = r0.containsKey(r4)
            r2 = 0
            if (r1 != 0) goto Lc
            return r2
        Lc:
            java.lang.Object r4 = r0.get(r4)
            com.huawei.agconnect.JsonProcessingFactory$JsonProcessor r4 = (com.huawei.agconnect.JsonProcessingFactory.JsonProcessor) r4
            if (r4 == 0) goto L19
            java.lang.String r4 = r4.processOption(r3)
            return r4
        L19:
            return r2
    }

    private void b() {
            r4 = this;
            com.huawei.agconnect.AGCRoutePolicy r0 = r4.f
            com.huawei.agconnect.AGCRoutePolicy r1 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            if (r0 != r1) goto L29
            com.huawei.agconnect.config.a.d r0 = r4.d
            if (r0 == 0) goto L22
            com.huawei.agconnect.config.a.d r0 = r4.d
            r1 = 0
            java.lang.String r2 = "/region"
            java.lang.String r0 = r0.a(r2, r1)
            com.huawei.agconnect.config.a.d r2 = r4.d
            java.lang.String r3 = "/agcgw/url"
            java.lang.String r1 = r2.a(r3, r1)
            com.huawei.agconnect.AGCRoutePolicy r0 = com.huawei.agconnect.config.a.j.a(r0, r1)
            r4.f = r0
            goto L29
        L22:
            java.lang.String r0 = "AGConnectServiceConfig"
            java.lang.String r1 = "get route fail , config not ready"
            android.util.Log.w(r0, r1)
        L29:
            return
    }

    @Override
    public boolean getBoolean(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.getBoolean(r2, r0)
            return r2
    }

    @Override
    public boolean getBoolean(java.lang.String r1, boolean r2) {
            r0 = this;
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = r0.getString(r1, r2)
            boolean r1 = java.lang.Boolean.parseBoolean(r1)
            return r1
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getIdentifier() {
            r1 = this;
            java.lang.String r0 = "DEFAULT_INSTANCE"
            return r0
    }

    @Override
    public int getInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.getInt(r2, r0)
            return r2
    }

    @Override
    public int getInt(java.lang.String r2, int r3) {
            r1 = this;
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.NumberFormatException -> Ld
            java.lang.String r2 = r1.getString(r2, r0)     // Catch: java.lang.NumberFormatException -> Ld
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> Ld
            return r2
        Ld:
            return r3
    }

    @Override
    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public com.huawei.agconnect.AGCRoutePolicy getRoutePolicy() {
            r2 = this;
            com.huawei.agconnect.AGCRoutePolicy r0 = r2.f
            com.huawei.agconnect.AGCRoutePolicy r1 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            if (r0 != r1) goto Ld
            com.huawei.agconnect.config.a.d r0 = r2.d
            if (r0 != 0) goto Ld
            r2.a()
        Ld:
            com.huawei.agconnect.AGCRoutePolicy r0 = r2.f
            return r0
    }

    @Override
    public java.lang.String getString(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = r1.getString(r2, r0)
            return r2
    }

    @Override
    public java.lang.String getString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L26
            com.huawei.agconnect.config.a.d r0 = r1.d
            if (r0 != 0) goto L9
            r1.a()
        L9:
            java.lang.String r2 = a(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.g
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L18
            return r0
        L18:
            java.lang.String r0 = r1.b(r2)
            if (r0 == 0) goto L1f
            return r0
        L1f:
            com.huawei.agconnect.config.a.d r0 = r1.d
            java.lang.String r2 = r0.a(r2, r3)
            return r2
        L26:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "path must not be null."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void overlayWith(com.huawei.agconnect.config.LazyInputStream r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public void overlayWith(java.io.InputStream r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            com.huawei.agconnect.config.LazyInputStream r2 = a(r0, r2)
            r1.overlayWith(r2)
            return
    }

    @Override
    public void setParam(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.g
            java.lang.String r2 = com.huawei.agconnect.config.a.j.a(r2)
            r0.put(r2, r3)
            return
    }

    @Override
    public void setRoutePolicy(com.huawei.agconnect.AGCRoutePolicy r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
