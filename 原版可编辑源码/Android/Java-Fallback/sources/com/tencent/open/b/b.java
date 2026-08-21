package com.tencent.open.b;

public class b {
    private static com.tencent.open.b.b a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.util.List<java.io.Serializable> i;
    private java.util.List<java.io.Serializable> j;
    private java.util.concurrent.Executor k;
    private boolean l;


    private b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r1.i = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r1.j = r0
            java.util.concurrent.Executor r0 = com.tencent.open.utils.l.b()
            r1.k = r0
            return
    }

    public static synchronized com.tencent.open.b.b a() {
            java.lang.Class<com.tencent.open.b.b> r0 = com.tencent.open.b.b.class
            monitor-enter(r0)
            com.tencent.open.b.b r1 = com.tencent.open.b.b.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.open.b.b r1 = new com.tencent.open.b.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tencent.open.b.b.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.open.b.b r1 = com.tencent.open.b.b.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static java.util.List a(com.tencent.open.b.b r0) {
            java.util.List<java.io.Serializable> r0 = r0.i
            return r0
    }

    private void a(com.tencent.open.b.c r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.k
            com.tencent.open.b.b$1 r1 = new com.tencent.open.b.b$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    private com.tencent.open.b.c b(java.lang.String r7, java.lang.String r8, java.lang.Object r9, java.util.Map<java.lang.String, java.lang.Object> r10) {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r3 = "attaid"
            java.lang.String r4 = "09400051119"
            r2.put(r3, r4)
            java.lang.String r3 = "token"
            java.lang.String r4 = "9389887874"
            r2.put(r3, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r4 = "_"
            r3.append(r4)
            java.lang.String r5 = r6.b
            r3.append(r5)
            r3.append(r4)
            java.lang.String r4 = r6.d
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "time_appid_openid"
            r2.put(r4, r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "time"
            r2.put(r1, r0)
            java.lang.String r0 = r6.d
            java.lang.String r1 = "openid"
            r2.put(r1, r0)
            java.lang.String r0 = r6.b
            java.lang.String r1 = "appid"
            r2.put(r1, r0)
            java.lang.String r0 = r6.c
            java.lang.String r1 = "app_name"
            r2.put(r1, r0)
            java.lang.String r0 = r6.e
            java.lang.String r1 = "app_ver"
            r2.put(r1, r0)
            java.lang.String r0 = r6.f
            java.lang.String r1 = "pkg_name"
            r2.put(r1, r0)
            java.lang.String r0 = "os"
            java.lang.String r1 = "AND"
            r2.put(r0, r1)
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = "os_ver"
            r2.put(r1, r0)
            java.lang.String r0 = "sdk_ver"
            java.lang.String r1 = "3.5.14.lite"
            r2.put(r0, r1)
            com.tencent.open.utils.f r0 = com.tencent.open.utils.f.a()
            android.content.Context r1 = com.tencent.open.utils.g.a()
            java.lang.String r0 = r0.c(r1)
            java.lang.String r1 = "model_name"
            r2.put(r1, r0)
            java.lang.String r0 = "interface_name"
            r2.put(r0, r7)
            java.lang.String r7 = "interface_data"
            r2.put(r7, r8)
            java.lang.String r7 = ""
            if (r9 != 0) goto L9c
            r8 = r7
            goto La0
        L9c:
            java.lang.String r8 = r9.toString()
        La0:
            java.lang.String r9 = "interface_result"
            r2.put(r9, r8)
            java.lang.String r8 = r6.g
            java.lang.String r9 = "qq_install"
            r2.put(r9, r8)
            java.lang.String r8 = r6.h
            java.lang.String r9 = "qq_ver"
            r2.put(r9, r8)
            if (r10 == 0) goto Lfe
            boolean r8 = r10.isEmpty()
            if (r8 != 0) goto Lfe
            java.lang.String r8 = "reserve1"
            java.lang.Object r9 = r10.get(r8)
            if (r9 != 0) goto Lc5
            r9 = r7
            goto Lc9
        Lc5:
            java.lang.String r9 = r9.toString()
        Lc9:
            r2.put(r8, r9)
            java.lang.String r8 = "reserve2"
            java.lang.Object r9 = r10.get(r8)
            if (r9 != 0) goto Ld6
            r9 = r7
            goto Lda
        Ld6:
            java.lang.String r9 = r9.toString()
        Lda:
            r2.put(r8, r9)
            java.lang.String r8 = "reserve3"
            java.lang.Object r9 = r10.get(r8)
            if (r9 != 0) goto Le7
            r9 = r7
            goto Leb
        Le7:
            java.lang.String r9 = r9.toString()
        Leb:
            r2.put(r8, r9)
            java.lang.String r8 = "reserve4"
            java.lang.Object r9 = r10.get(r8)
            if (r9 != 0) goto Lf7
            goto Lfb
        Lf7:
            java.lang.String r7 = r9.toString()
        Lfb:
            r2.put(r8, r7)
        Lfe:
            com.tencent.open.b.c r7 = new com.tencent.open.b.c
            r7.<init>(r2)
            return r7
    }

    public static java.lang.String b() {
            com.tencent.open.b.b r0 = a()
            java.lang.String r0 = r0.b
            return r0
    }

    static void b(com.tencent.open.b.b r0) {
            r0.d()
            return
    }

    private boolean b(com.tencent.open.b.c r8) {
            r7 = this;
            java.lang.String r0 = "AttaReporter"
            r1 = 0
            r2 = 0
        L4:
            r3 = 1
            int r2 = r2 + r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r4.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "doAttaReportItem post "
            r4.append(r5)     // Catch: java.lang.Exception -> L30
            r4.append(r8)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L30
            com.tencent.open.log.SLog.i(r0, r4)     // Catch: java.lang.Exception -> L30
            com.tencent.open.a.f r4 = com.tencent.open.a.f.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "https://h.trace.qq.com/kv"
            java.util.HashMap<java.lang.String, java.lang.String> r6 = r8.a     // Catch: java.lang.Exception -> L30
            com.tencent.open.a.g r4 = r4.b(r5, r6)     // Catch: java.lang.Exception -> L30
            int r8 = r4.d()     // Catch: java.lang.Exception -> L30
            r0 = 200(0xc8, float:2.8E-43)
            if (r8 != r0) goto L2f
            r1 = 1
        L2f:
            return r1
        L30:
            r3 = move-exception
            java.lang.String r4 = "Exception"
            com.tencent.open.log.SLog.i(r0, r4, r3)
            r3 = 2
            if (r2 < r3) goto L4
            return r1
    }

    private void c() {
            r5 = this;
        L0:
            java.util.List<java.io.Serializable> r0 = r5.j
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L9c
            java.util.List<java.io.Serializable> r0 = r5.j
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)
            com.tencent.open.b.c r0 = (com.tencent.open.b.c) r0
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.b
            java.lang.String r3 = "appid"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.c
            java.lang.String r3 = "app_name"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.e
            java.lang.String r3 = "app_ver"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.f
            java.lang.String r3 = "pkg_name"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.g
            java.lang.String r3 = "qq_install"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.h
            java.lang.String r3 = "qq_ver"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.String r2 = r5.d
            java.lang.String r3 = "openid"
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r0.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.HashMap<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r4 = "time"
            java.lang.Object r3 = r3.get(r4)
            java.lang.String r3 = (java.lang.String) r3
            r2.append(r3)
            java.lang.String r3 = "_"
            r2.append(r3)
            java.lang.String r4 = r5.b
            r2.append(r4)
            r2.append(r3)
            java.lang.String r3 = r5.d
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "time_appid_openid"
            r1.put(r3, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "fixDirtyData--------------------------"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AttaReporter"
            com.tencent.open.log.SLog.i(r2, r1)
            java.util.List<java.io.Serializable> r1 = r5.i
            r1.add(r0)
            goto L0
        L9c:
            return
    }

    private void d() {
            r8 = this;
            java.lang.String r0 = "AttaReporter"
            java.lang.String r1 = "attaReportAtSubThread"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = r8.l
            java.lang.String r2 = "report_atta"
            if (r1 != 0) goto L41
            java.util.List r1 = com.tencent.open.b.g.b(r2)
            boolean r3 = r1.isEmpty()
            r8.l = r3
            java.util.List<java.io.Serializable> r3 = r8.i
            r3.addAll(r1)
            java.util.Iterator r1 = r1.iterator()
        L20:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L41
            java.lang.Object r3 = r1.next()
            java.io.Serializable r3 = (java.io.Serializable) r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "attaReportAtSubThread from db = "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.tencent.open.log.SLog.i(r0, r3)
            goto L20
        L41:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L46:
            java.util.List<java.io.Serializable> r3 = r8.i
            boolean r3 = r3.isEmpty()
            r4 = 0
            if (r3 != 0) goto L61
            java.util.List<java.io.Serializable> r3 = r8.i
            java.lang.Object r3 = r3.remove(r4)
            com.tencent.open.b.c r3 = (com.tencent.open.b.c) r3
            boolean r4 = r8.b(r3)
            if (r4 != 0) goto L46
            r1.add(r3)
            goto L46
        L61:
            boolean r3 = r1.isEmpty()
            if (r3 != 0) goto Lac
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "attaReportAtSubThread fail size="
            r3.append(r5)
            int r5 = r1.size()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.tencent.open.log.SLog.i(r0, r3)
            java.util.Iterator r3 = r1.iterator()
        L83:
            boolean r5 = r3.hasNext()
            if (r5 == 0) goto La6
            java.lang.Object r5 = r3.next()
            java.io.Serializable r5 = (java.io.Serializable) r5
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "attaReportAtSubThread fail cache to db, "
            r6.append(r7)
            com.tencent.open.b.c r5 = (com.tencent.open.b.c) r5
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.tencent.open.log.SLog.i(r0, r5)
            goto L83
        La6:
            com.tencent.open.b.g.a(r2, r1)
            r8.l = r4
            goto Lbb
        Lac:
            boolean r1 = r8.l
            if (r1 != 0) goto Lbb
            java.lang.String r1 = "attaReportAtSubThread clear db"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.open.b.g.a(r2)
            r0 = 1
            r8.l = r0
        Lbb:
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "AttaReporter"
            java.lang.String r1 = "updateOpenId"
            com.tencent.open.log.SLog.i(r0, r1)
            if (r3 != 0) goto Lb
            java.lang.String r3 = ""
        Lb:
            r2.d = r3
            return
    }

    public void a(java.lang.String r3, android.content.Context r4) {
            r2 = this;
            java.lang.String r0 = "AttaReporter"
            java.lang.String r1 = "init"
            com.tencent.open.log.SLog.i(r0, r1)
            r2.b = r3
            java.lang.String r3 = com.tencent.open.utils.k.a(r4)
            r2.c = r3
            java.lang.String r3 = com.tencent.open.utils.g.b()
            java.lang.String r3 = com.tencent.open.utils.m.d(r4, r3)
            r2.e = r3
            java.lang.String r3 = com.tencent.open.utils.g.b()
            r2.f = r3
            boolean r3 = com.tencent.open.utils.k.b(r4)
            if (r3 == 0) goto L28
            java.lang.String r3 = "1"
            goto L2a
        L28:
            java.lang.String r3 = "0"
        L2a:
            r2.g = r3
            java.lang.String r3 = "com.tencent.mobileqq"
            java.lang.String r3 = com.tencent.open.utils.m.c(r4, r3)
            r2.h = r3
            r2.c()
            com.tencent.open.b.g.a()
            return
    }

    public void a(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.lang.String r0 = ""
            r1 = 0
            r2.a(r3, r0, r4, r1)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.Object r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r0 = this;
            com.tencent.open.b.c r1 = r0.b(r1, r2, r3, r4)
            java.lang.String r2 = r0.b
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f
            java.lang.String r2 = r0.c
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f
            android.content.Context r2 = com.tencent.open.utils.g.a()
            if (r2 != 0) goto L1b
            goto L1f
        L1b:
            r0.a(r1)
            return
        L1f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "attaReport cancel appid="
            r2.append(r3)
            java.lang.String r3 = r0.b
            r2.append(r3)
            java.lang.String r3 = ", mAppName="
            r2.append(r3)
            java.lang.String r3 = r0.c
            r2.append(r3)
            java.lang.String r3 = ", context="
            r2.append(r3)
            android.content.Context r3 = com.tencent.open.utils.g.a()
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "AttaReporter"
            com.tencent.open.log.SLog.i(r3, r2)
            java.util.List<java.io.Serializable> r2 = r0.j
            r2.add(r1)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            java.lang.String r0 = ""
            r1.a(r2, r3, r0, r4)
            return
    }
}
