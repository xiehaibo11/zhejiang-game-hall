package com.huawei.updatesdk.a.b.c.c;

public class c {
    public static final java.lang.String CLIENT_API = "clientApi";
    private static final java.lang.String END_FLAG = "_";
    private static java.lang.String url;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String method;

    @com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission
    private java.lang.String ver;

    public c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "1.1"
            r1.ver = r0
            return
    }

    private java.lang.String a(java.lang.reflect.Field r2) {
            r1 = this;
            java.lang.Object r2 = r2.get(r1)
            boolean r0 = r2 instanceof com.huawei.updatesdk.a.b.c.c.b
            if (r0 == 0) goto Lf
            com.huawei.updatesdk.a.b.c.c.b r2 = (com.huawei.updatesdk.a.b.c.c.b) r2
            java.lang.String r2 = r2.toJson()
            return r2
        Lf:
            if (r2 == 0) goto L16
            java.lang.String r2 = java.lang.String.valueOf(r2)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static void c(java.lang.String r0) {
            com.huawei.updatesdk.a.b.c.c.c.url = r0
            return
    }

    public java.lang.String a() {
            r7 = this;
            r7.e()
            java.util.Map r0 = r7.c()
            int r1 = r0.size()
            java.lang.String[] r2 = new java.lang.String[r1]
            java.util.Set r3 = r0.keySet()
            r3.toArray(r2)
            java.util.Arrays.sort(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = 0
        L1d:
            r5 = r2[r4]
            java.lang.Object r5 = r0.get(r5)
            java.lang.reflect.Field r5 = (java.lang.reflect.Field) r5
            java.lang.String r5 = r7.a(r5)
            if (r5 == 0) goto L41
            java.lang.String r5 = com.huawei.updatesdk.a.a.d.g.a(r5)
            r6 = r2[r4]
            r3.append(r6)
            java.lang.String r6 = "="
            r3.append(r6)
            r3.append(r5)
            java.lang.String r5 = "&"
            r3.append(r5)
        L41:
            int r4 = r4 + 1
            if (r4 < r1) goto L1d
            int r0 = r3.length()
            if (r0 <= 0) goto L58
            int r0 = r0 + (-1)
            char r1 = r3.charAt(r0)
            r2 = 38
            if (r1 != r2) goto L58
            r3.deleteCharAt(r0)
        L58:
            java.lang.String r0 = r3.toString()
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.method = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.method
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.ver = r1
            return
    }

    protected java.util.Map<java.lang.String, java.lang.reflect.Field> c() {
            r10 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Class r1 = r10.getClass()
            java.lang.reflect.Field[] r1 = com.huawei.updatesdk.a.a.d.f.a(r1)
            int r2 = r1.length
            r3 = 0
            r4 = r3
        L10:
            if (r4 >= r2) goto L41
            r5 = r1[r4]
            r6 = 1
            r5.setAccessible(r6)
            java.lang.String r7 = r5.getName()
            java.lang.String r8 = "_"
            boolean r9 = r7.endsWith(r8)
            if (r9 != 0) goto L2c
            java.lang.Class<com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission> r9 = com.huawei.updatesdk.service.appmgr.bean.SDKNetTransmission.class
            boolean r9 = r5.isAnnotationPresent(r9)
            if (r9 == 0) goto L3e
        L2c:
            boolean r8 = r7.endsWith(r8)
            if (r8 == 0) goto L3b
            int r8 = r7.length()
            int r8 = r8 - r6
            java.lang.String r7 = r7.substring(r3, r8)
        L3b:
            r0.put(r7, r5)
        L3e:
            int r4 = r4 + 1
            goto L10
        L41:
            return r0
    }

    public java.lang.String d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.huawei.updatesdk.a.b.c.c.c.url
            r0.append(r1)
            java.lang.String r1 = "clientApi"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    protected void e() {
            r0 = this;
            return
    }
}
