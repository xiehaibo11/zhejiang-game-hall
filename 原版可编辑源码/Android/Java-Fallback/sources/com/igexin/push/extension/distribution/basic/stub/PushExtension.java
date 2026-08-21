package com.igexin.push.extension.distribution.basic.stub;

public class PushExtension implements com.igexin.push.extension.stub.IPushExtension {
    private static java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> a;
    private static java.util.Set<java.lang.String> b;

    public PushExtension() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.igexin.push.extension.distribution.basic.stub.PushExtension.a = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.igexin.push.extension.distribution.basic.stub.PushExtension.b = r0
            java.lang.String r1 = "notification"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            java.lang.String r1 = "terminatetask"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            java.lang.String r1 = "starthome"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            java.lang.String r1 = "startintent"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            java.lang.String r1 = "startmyactivity"
            r0.add(r1)
            return
    }

    private com.igexin.push.core.a.a.a a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L7c
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            boolean r0 = r0.contains(r4)
            if (r0 != 0) goto L10
            goto L7c
        L10:
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            boolean r0 = r0.containsKey(r4)
            if (r0 == 0) goto L29
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            java.lang.Object r0 = r0.get(r4)
            if (r0 == 0) goto L29
        L20:
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            java.lang.Object r4 = r0.get(r4)
            com.igexin.push.core.a.a.a r4 = (com.igexin.push.core.a.a.a) r4
            return r4
        L29:
            java.lang.String r0 = "notification"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L3c
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            com.igexin.push.extension.distribution.basic.a.a r2 = new com.igexin.push.extension.distribution.basic.a.a
            r2.<init>()
        L38:
            r1.put(r0, r2)
            goto L20
        L3c:
            java.lang.String r0 = "terminatetask"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L4c
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            com.igexin.push.extension.distribution.basic.a.i r2 = new com.igexin.push.extension.distribution.basic.a.i
            r2.<init>()
            goto L38
        L4c:
            java.lang.String r0 = "starthome"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L5c
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            com.igexin.push.extension.distribution.basic.a.e r2 = new com.igexin.push.extension.distribution.basic.a.e
            r2.<init>()
            goto L38
        L5c:
            java.lang.String r0 = "startintent"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L6c
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            com.igexin.push.extension.distribution.basic.a.g r2 = new com.igexin.push.extension.distribution.basic.a.g
            r2.<init>()
            goto L38
        L6c:
            java.lang.String r0 = "startmyactivity"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L20
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.extension.distribution.basic.stub.PushExtension.a
            com.igexin.push.extension.distribution.basic.a.h r2 = new com.igexin.push.extension.distribution.basic.a.h
            r2.<init>()
            goto L38
        L7c:
            r4 = 0
            return r4
    }

    private void a() {
            r2 = this;
            boolean r0 = com.igexin.push.extension.distribution.basic.g.e.a()
            if (r0 != 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a
            java.io.File r1 = r1.getCacheDir()
            r0.append(r1)
            java.lang.String r1 = "/ImgCache/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.c.e.k = r0
        L1f:
            com.igexin.push.extension.distribution.basic.e.a r0 = new com.igexin.push.extension.distribution.basic.e.a
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a
            r0.<init>(r1)
            com.igexin.push.extension.distribution.basic.c.e.e = r0
            android.content.Context r0 = com.igexin.push.extension.distribution.basic.c.e.a
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.widthPixels
            int r0 = r0.heightPixels
            if (r0 <= r1) goto L3d
            com.igexin.push.extension.distribution.basic.c.e.b = r0
            com.igexin.push.extension.distribution.basic.c.e.c = r1
            goto L41
        L3d:
            com.igexin.push.extension.distribution.basic.c.e.b = r1
            com.igexin.push.extension.distribution.basic.c.e.c = r0
        L41:
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.g()
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            r0.f()
            return
    }

    private void b() {
            r1 = this;
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.a()     // Catch: java.lang.Throwable -> Le
            r0.c()     // Catch: java.lang.Throwable -> Le
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.a()     // Catch: java.lang.Throwable -> Le
            r0.d()     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    private void c() {
            r3 = this;
            com.igexin.push.extension.distribution.basic.d.b r0 = com.igexin.push.extension.distribution.basic.d.b.a()
            r0.b()
            java.lang.String r0 = com.igexin.push.extension.distribution.basic.c.e.d
            if (r0 != 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.igexin.b.b.a.a(r0)
            com.igexin.push.extension.distribution.basic.c.e.d = r0
            com.igexin.push.extension.distribution.basic.d.b r0 = com.igexin.push.extension.distribution.basic.d.b.a()
            r1 = 4
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.c.e.d
            r0.a(r1, r2)
        L34:
            return
    }

    private void d() {
            r3 = this;
            com.igexin.push.extension.distribution.basic.e.b r0 = new com.igexin.push.extension.distribution.basic.e.b     // Catch: java.lang.Throwable -> Lb
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb
            com.igexin.push.extension.distribution.basic.c.e.l = r0     // Catch: java.lang.Throwable -> Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            java.lang.Thread r1 = new java.lang.Thread
            com.igexin.push.extension.distribution.basic.stub.a r2 = new com.igexin.push.extension.distribution.basic.stub.a
            r2.<init>(r3, r0)
            r1.<init>(r2)
            r1.start()
            return
    }

    @Override
    public boolean executeAction(com.igexin.push.core.bean.PushTaskBean r3, com.igexin.push.core.bean.BaseAction r4) {
            r2 = this;
            if (r3 == 0) goto L19
            if (r4 == 0) goto L19
            java.lang.String r0 = r4.getType()
            com.igexin.push.core.a.a.a r0 = r2.a(r0)
            if (r0 == 0) goto L19
            boolean r1 = r3.isStop()
            if (r1 != 0) goto L19
            boolean r3 = r0.b(r3, r4)
            return r3
        L19:
            r3 = 0
            return r3
    }

    @Override
    public boolean init(android.content.Context r4) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "EXT-PushExtension|ext init ###"
            com.igexin.b.a.c.b.a(r2, r1)
            if (r4 != 0) goto L12
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r1 = "EXT-PushExtension|context = null"
            com.igexin.b.a.c.b.a(r1, r4)
            return r0
        L12:
            com.igexin.push.extension.distribution.basic.c.e.a = r4
            r3.a()
            r3.b()
            r3.c()
            r3.d()
            r4 = 1
            return r4
    }

    @Override
    public boolean isActionSupported(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            java.util.Set<java.lang.String> r0 = com.igexin.push.extension.distribution.basic.stub.PushExtension.b
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.a()
            r0.f()
            return
    }

    @Override
    public com.igexin.push.core.bean.BaseAction parseAction(org.json.JSONObject r3) {
            r2 = this;
            if (r3 == 0) goto L19
            java.lang.String r0 = "type"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L19
            java.lang.String r0 = r3.getString(r0)     // Catch: java.lang.Exception -> L19
            com.igexin.push.core.a.a.a r0 = r2.a(r0)     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L19
            com.igexin.push.core.bean.BaseAction r3 = r0.a(r3)     // Catch: java.lang.Exception -> L19
            return r3
        L19:
            r3 = 0
            return r3
    }

    @Override
    public com.igexin.push.core.a prepareExecuteAction(com.igexin.push.core.bean.PushTaskBean r2, com.igexin.push.core.bean.BaseAction r3) {
            r1 = this;
            if (r2 == 0) goto L13
            if (r3 == 0) goto L13
            java.lang.String r0 = r3.getType()
            com.igexin.push.core.a.a.a r0 = r1.a(r0)
            if (r0 == 0) goto L13
            com.igexin.push.core.a r2 = r0.a(r2, r3)
            return r2
        L13:
            com.igexin.push.core.a r2 = com.igexin.push.core.a.c
            return r2
    }
}
