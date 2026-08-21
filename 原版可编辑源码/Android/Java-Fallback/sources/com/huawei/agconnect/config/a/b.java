package com.huawei.agconnect.config.a;

public class b implements com.huawei.agconnect.AGConnectOptions {
    private final java.lang.String a;
    private final android.content.Context b;
    private final java.lang.String c;
    private final com.huawei.agconnect.AGCRoutePolicy d;
    private final com.huawei.agconnect.config.a.d e;
    private final java.util.Map<java.lang.String, java.lang.String> f;
    private final java.util.List<com.huawei.agconnect.core.Service> g;
    private final java.util.Map<java.lang.String, java.lang.String> h;

    public b(android.content.Context r2, java.lang.String r3, com.huawei.agconnect.AGCRoutePolicy r4, java.io.InputStream r5, java.util.Map<java.lang.String, java.lang.String> r6, java.util.List<com.huawei.agconnect.core.Service> r7, java.lang.String r8) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.h = r0
            r1.b = r2
            if (r3 != 0) goto L12
            java.lang.String r3 = r2.getPackageName()
        L12:
            r1.c = r3
            if (r5 == 0) goto L21
            com.huawei.agconnect.config.a.f r2 = new com.huawei.agconnect.config.a.f
            r2.<init>(r5)
            r1.e = r2
            com.huawei.agconnect.config.a.j.a(r5)
            goto L28
        L21:
            com.huawei.agconnect.config.a.i r5 = new com.huawei.agconnect.config.a.i
            r5.<init>(r2, r3)
            r1.e = r5
        L28:
            com.huawei.agconnect.config.a.d r2 = r1.e
            r3 = 0
            java.lang.String r5 = "/configuration_version"
            java.lang.String r2 = r2.a(r5, r3)
            java.lang.String r5 = "1.0"
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L40
            java.lang.String r2 = "AGConnectOptionsImpl"
            java.lang.String r5 = "The file version does not match, please download the latest agconnect-services.json from the AGC website."
            android.util.Log.e(r2, r5)
        L40:
            com.huawei.agconnect.AGCRoutePolicy r2 = com.huawei.agconnect.AGCRoutePolicy.UNKNOWN
            if (r4 != r2) goto L58
            com.huawei.agconnect.config.a.d r2 = r1.e
            java.lang.String r4 = "/region"
            java.lang.String r2 = r2.a(r4, r3)
            com.huawei.agconnect.config.a.d r4 = r1.e
            java.lang.String r5 = "/agcgw/url"
            java.lang.String r3 = r4.a(r5, r3)
            com.huawei.agconnect.AGCRoutePolicy r4 = com.huawei.agconnect.config.a.j.a(r2, r3)
        L58:
            r1.d = r4
            java.util.Map r2 = com.huawei.agconnect.config.a.j.a(r6)
            r1.f = r2
            r1.g = r7
            if (r8 == 0) goto L65
            goto L69
        L65:
            java.lang.String r8 = r1.b()
        L69:
            r1.a = r8
            return
    }

    private java.lang.String a(java.lang.String r4) {
            r3 = this;
            java.util.Map r0 = com.huawei.agconnect.JsonProcessingFactory.getProcessors()
            boolean r1 = r0.containsKey(r4)
            r2 = 0
            if (r1 != 0) goto Lc
            return r2
        Lc:
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.h
            boolean r1 = r1.containsKey(r4)
            if (r1 == 0) goto L1d
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.h
            java.lang.Object r4 = r0.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            return r4
        L1d:
            java.lang.Object r0 = r0.get(r4)
            com.huawei.agconnect.JsonProcessingFactory$JsonProcessor r0 = (com.huawei.agconnect.JsonProcessingFactory.JsonProcessor) r0
            if (r0 != 0) goto L26
            return r2
        L26:
            java.lang.String r0 = r0.processOption(r3)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.h
            r1.put(r4, r0)
            return r0
    }

    private java.lang.String b() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{packageName='"
            r0.append(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", routePolicy="
            r0.append(r1)
            com.huawei.agconnect.AGCRoutePolicy r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = ", reader="
            r0.append(r1)
            com.huawei.agconnect.config.a.d r1 = r3.e
            java.lang.String r1 = r1.toString()
            int r1 = r1.hashCode()
            r0.append(r1)
            java.lang.String r1 = ", customConfigMap="
            r0.append(r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            java.util.Map<java.lang.String, java.lang.String> r2 = r3.f
            r1.<init>(r2)
            java.lang.String r1 = r1.toString()
            int r1 = r1.hashCode()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            int r0 = r0.hashCode()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.util.List<com.huawei.agconnect.core.Service> a() {
            r1 = this;
            java.util.List<com.huawei.agconnect.core.Service> r0 = r1.g
            return r0
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
            android.content.Context r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String getIdentifier() {
            r1 = this;
            java.lang.String r0 = r1.a
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
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public com.huawei.agconnect.AGCRoutePolicy getRoutePolicy() {
            r1 = this;
            com.huawei.agconnect.AGCRoutePolicy r0 = r1.d
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
            if (r2 != 0) goto L3
            return r3
        L3:
            java.lang.String r2 = com.huawei.agconnect.config.a.j.a(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.f
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L12
            return r0
        L12:
            java.lang.String r0 = r1.a(r2)
            if (r0 == 0) goto L19
            return r0
        L19:
            com.huawei.agconnect.config.a.d r0 = r1.e
            java.lang.String r2 = r0.a(r2, r3)
            return r2
    }
}
