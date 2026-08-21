package com.huawei.hms.framework.network.grs.c;

public class e implements com.huawei.hms.framework.network.grs.c.a {
    private static final java.lang.String a = "e";
    private com.huawei.hms.framework.network.grs.GrsBaseInfo b;
    private android.content.Context c;
    private com.huawei.hms.framework.network.grs.a.a d;
    private com.huawei.hms.framework.network.grs.c.f e;
    private java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> f;
    private java.util.ArrayList<com.huawei.hms.framework.network.grs.c.f> g;
    private org.json.JSONArray h;
    private java.util.ArrayList<java.lang.String> i;
    private java.util.ArrayList<java.lang.String> j;
    private com.huawei.hms.framework.network.grs.c.b.d k;
    private com.huawei.hms.framework.network.grs.c.b.c l;
    private long m;

    public e(com.huawei.hms.framework.network.grs.c.b.c r3, com.huawei.hms.framework.network.grs.a.a r4) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.f = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.g = r0
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r2.h = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.i = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.j = r0
            r0 = 1
            r2.m = r0
            r2.l = r3
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r3.b()
            r2.b = r0
            android.content.Context r3 = r3.a()
            r2.c = r3
            r2.d = r4
            r2.b()
            return
    }

    static com.huawei.hms.framework.network.grs.c.f a(com.huawei.hms.framework.network.grs.c.e r0, java.util.concurrent.ExecutorService r1, java.lang.String r2, com.huawei.hms.framework.network.grs.a.c r3) {
            com.huawei.hms.framework.network.grs.c.f r0 = r0.b(r1, r2, r3)
            return r0
    }

    private com.huawei.hms.framework.network.grs.c.f a(java.util.concurrent.ExecutorService r16, java.util.ArrayList<java.lang.String> r17, java.lang.String r18, com.huawei.hms.framework.network.grs.a.c r19) {
            r15 = this;
            r9 = r15
            r10 = 0
            r0 = 0
            r11 = r0
            r12 = r10
        L5:
            int r0 = r17.size()
            if (r12 >= r0) goto L95
            r13 = r17
            java.lang.Object r0 = r13.get(r12)
            r2 = r0
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r14 = 1
            if (r0 != 0) goto L84
            com.huawei.hms.framework.network.grs.c.b r0 = new com.huawei.hms.framework.network.grs.c.b
            android.content.Context r5 = r9.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r7 = r9.b
            r1 = r0
            r3 = r12
            r4 = r15
            r6 = r18
            r8 = r19
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            java.util.concurrent.Callable r0 = r0.g()
            r1 = r16
            java.util.concurrent.Future r0 = r1.submit(r0)
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r2 = r9.f
            r2.add(r0)
            long r2 = r9.m     // Catch: java.util.concurrent.TimeoutException -> L62 java.lang.InterruptedException -> L6a java.util.concurrent.ExecutionException -> L73 java.util.concurrent.CancellationException -> L7c
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.util.concurrent.TimeoutException -> L62 java.lang.InterruptedException -> L6a java.util.concurrent.ExecutionException -> L73 java.util.concurrent.CancellationException -> L7c
            java.lang.Object r0 = r0.get(r2, r4)     // Catch: java.util.concurrent.TimeoutException -> L62 java.lang.InterruptedException -> L6a java.util.concurrent.ExecutionException -> L73 java.util.concurrent.CancellationException -> L7c
            r2 = r0
            com.huawei.hms.framework.network.grs.c.f r2 = (com.huawei.hms.framework.network.grs.c.f) r2     // Catch: java.util.concurrent.TimeoutException -> L62 java.lang.InterruptedException -> L6a java.util.concurrent.ExecutionException -> L73 java.util.concurrent.CancellationException -> L7c
            if (r2 == 0) goto L5f
            boolean r0 = r2.m()     // Catch: java.util.concurrent.TimeoutException -> L55 java.lang.InterruptedException -> L57 java.util.concurrent.ExecutionException -> L5a java.util.concurrent.CancellationException -> L5d
            if (r0 == 0) goto L5f
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a     // Catch: java.util.concurrent.TimeoutException -> L55 java.lang.InterruptedException -> L57 java.util.concurrent.ExecutionException -> L5a java.util.concurrent.CancellationException -> L5d
            java.lang.String r3 = "grs request return body is not null and is OK."
            com.huawei.hms.framework.common.Logger.i(r0, r3)     // Catch: java.util.concurrent.TimeoutException -> L55 java.lang.InterruptedException -> L57 java.util.concurrent.ExecutionException -> L5a java.util.concurrent.CancellationException -> L5d
            goto L60
        L55:
            r11 = r2
            goto L62
        L57:
            r0 = move-exception
            r11 = r2
            goto L6b
        L5a:
            r0 = move-exception
            r11 = r2
            goto L74
        L5d:
            r11 = r2
            goto L7c
        L5f:
            r14 = r10
        L60:
            r11 = r2
            goto L87
        L62:
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r2 = "the wait timed out"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            goto L86
        L6a:
            r0 = move-exception
        L6b:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r3 = "the current thread was interrupted while waiting"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r0)
            goto L87
        L73:
            r0 = move-exception
        L74:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r3 = "the computation threw an ExecutionException"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r0)
            goto L86
        L7c:
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r2 = "{requestServer} the computation was cancelled"
            com.huawei.hms.framework.common.Logger.i(r0, r2)
            goto L87
        L84:
            r1 = r16
        L86:
            r14 = r10
        L87:
            if (r14 == 0) goto L91
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r1 = "needBreak is true so need break current circulation"
            com.huawei.hms.framework.common.Logger.v(r0, r1)
            goto L95
        L91:
            int r12 = r12 + 1
            goto L5
        L95:
            com.huawei.hms.framework.network.grs.c.f r0 = r15.b(r11)
            return r0
    }

    private com.huawei.hms.framework.network.grs.c.f b(com.huawei.hms.framework.network.grs.c.f r7) {
            r6 = this;
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r0 = r6.f
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L61
            if (r7 == 0) goto L11
            boolean r2 = r7.m()
            if (r2 != 0) goto L61
        L11:
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r2 = r6.f     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            java.lang.Object r2 = r2.get(r1)     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            java.util.concurrent.Future r2 = (java.util.concurrent.Future) r2     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            r3 = 40000(0x9c40, double:1.97626E-319)
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            java.lang.Object r2 = r2.get(r3, r5)     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            com.huawei.hms.framework.network.grs.c.f r2 = (com.huawei.hms.framework.network.grs.c.f) r2     // Catch: java.util.concurrent.TimeoutException -> L26 java.lang.InterruptedException -> L48 java.util.concurrent.ExecutionException -> L4e java.util.concurrent.CancellationException -> L57
            r7 = r2
            goto L5e
        L26:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r3 = "{checkResponse} when check result, find TimeoutException, cancel current request task"
            com.huawei.hms.framework.common.Logger.w(r2, r3)
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r2 = r6.f
            java.lang.Object r2 = r2.get(r1)
            java.util.concurrent.Future r2 = (java.util.concurrent.Future) r2
            boolean r2 = r2.isCancelled()
            if (r2 != 0) goto L5e
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r2 = r6.f
            java.lang.Object r2 = r2.get(r1)
            java.util.concurrent.Future r2 = (java.util.concurrent.Future) r2
            r3 = 1
            r2.cancel(r3)
            goto L5e
        L48:
            r2 = move-exception
            java.lang.String r3 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r4 = "{checkResponse} when check result, find InterruptedException, check others"
            goto L53
        L4e:
            r2 = move-exception
            java.lang.String r3 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r4 = "{checkResponse} when check result, find ExecutionException, check others"
        L53:
            com.huawei.hms.framework.common.Logger.w(r3, r4, r2)
            goto L5e
        L57:
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r3 = "{checkResponse} when check result, find CancellationException, check others"
            com.huawei.hms.framework.common.Logger.i(r2, r3)
        L5e:
            int r1 = r1 + 1
            goto L7
        L61:
            return r7
    }

    private com.huawei.hms.framework.network.grs.c.f b(java.util.concurrent.ExecutorService r9, java.lang.String r10, com.huawei.hms.framework.network.grs.a.c r11) {
            r8 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.util.ArrayList<java.lang.String> r2 = r8.j
            com.huawei.hms.framework.network.grs.c.f r2 = r8.a(r9, r2, r10, r11)
            r3 = 0
            if (r2 != 0) goto Lf
            r4 = r3
            goto L13
        Lf:
            int r4 = r2.b()
        L13:
            java.lang.String r5 = com.huawei.hms.framework.network.grs.c.e.a
            r6 = 1
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r4)
            r6[r3] = r7
            java.lang.String r3 = "use 2.0 interface return http's code is：{%s}"
            com.huawei.hms.framework.common.Logger.v(r5, r3, r6)
            r3 = 404(0x194, float:5.66E-43)
            if (r4 == r3) goto L2b
            r3 = 401(0x191, float:5.62E-43)
            if (r4 != r3) goto L5c
        L2b:
            java.lang.String r2 = r8.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L4a
            com.huawei.hms.framework.network.grs.GrsBaseInfo r2 = r8.b
            java.lang.String r2 = r2.getAppName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L4a
            java.lang.String r9 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r10 = "request grs server use 1.0 API must set appName,please check."
            com.huawei.hms.framework.common.Logger.i(r9, r10)
            r9 = 0
            return r9
        L4a:
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r2 = r8.f
            r2.clear()
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r3 = "this env has not deploy new interface,so use old interface."
            com.huawei.hms.framework.common.Logger.i(r2, r3)
            java.util.ArrayList<java.lang.String> r2 = r8.i
            com.huawei.hms.framework.network.grs.c.f r2 = r8.a(r9, r2, r10, r11)
        L5c:
            long r9 = android.os.SystemClock.elapsedRealtime()
            long r9 = r9 - r0
            java.util.ArrayList r11 = new java.util.ArrayList
            java.util.ArrayList<com.huawei.hms.framework.network.grs.c.f> r0 = r8.g
            r11.<init>(r0)
            org.json.JSONArray r0 = r8.h
            android.content.Context r1 = r8.c
            com.huawei.hms.framework.network.grs.c.h.a(r11, r9, r0, r1)
            return r2
    }

    private void b() {
            r10 = this;
            android.content.Context r0 = r10.c
            com.huawei.hms.framework.network.grs.c.b.d r0 = com.huawei.hms.framework.network.grs.c.a.a.a(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r1 = "g*s***_se****er_conf*** maybe has a big error"
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            return
        L10:
            r10.a(r0)
            java.util.List r1 = r0.a()
            if (r1 == 0) goto Led
            int r2 = r1.size()
            if (r2 > 0) goto L21
            goto Led
        L21:
            int r2 = r1.size()
            r3 = 10
            if (r2 > r3) goto Le5
            java.lang.String r2 = r0.c()
            java.lang.String r0 = r0.b()
            int r3 = r1.size()
            r4 = 1
            r5 = 0
            if (r3 <= 0) goto Ld2
            java.util.Iterator r1 = r1.iterator()
        L3d:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Ld2
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r6 = "https://"
            boolean r6 = r3.startsWith(r6)
            if (r6 != 0) goto L59
            java.lang.String r3 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r6 = "grs server just support https scheme url,please check."
            com.huawei.hms.framework.common.Logger.w(r3, r6)
            goto L3d
        L59:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            java.util.Locale r7 = java.util.Locale.ROOT
            java.lang.Object[] r8 = new java.lang.Object[r4]
            java.lang.String r9 = r10.c()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L76
            com.huawei.hms.framework.network.grs.GrsBaseInfo r9 = r10.b
            java.lang.String r9 = r9.getAppName()
            goto L7a
        L76:
            java.lang.String r9 = r10.c()
        L7a:
            r8[r5] = r9
            java.lang.String r7 = java.lang.String.format(r7, r2, r8)
            r6.append(r7)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r7 = r10.b
            android.content.Context r8 = r10.c
            java.lang.String r9 = "1.0"
            java.lang.String r7 = r7.getGrsReqParamJoint(r5, r5, r9, r8)
            boolean r8 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r9 = "?"
            if (r8 != 0) goto L9b
            r6.append(r9)
            r6.append(r7)
        L9b:
            java.lang.String r6 = r6.toString()
            java.util.ArrayList<java.lang.String> r7 = r10.i
            r7.add(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            r6.append(r0)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r3 = r10.b
            java.lang.String r7 = r10.c()
            android.content.Context r8 = r10.c
            java.lang.String r3 = r3.getGrsReqParamJoint(r5, r5, r7, r8)
            boolean r7 = android.text.TextUtils.isEmpty(r3)
            if (r7 != 0) goto Lc7
            r6.append(r9)
            r6.append(r3)
        Lc7:
            java.util.ArrayList<java.lang.String> r3 = r10.j
            java.lang.String r6 = r6.toString()
            r3.add(r6)
            goto L3d
        Ld2:
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.util.ArrayList<java.lang.String> r2 = r10.i
            r1[r5] = r2
            java.util.ArrayList<java.lang.String> r2 = r10.j
            r1[r4] = r2
            java.lang.String r2 = "request to GRS server url is{%s} and {%s}"
            com.huawei.hms.framework.common.Logger.v(r0, r2, r1)
            return
        Le5:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "grs_base_url's count is larger than MAX value 10"
            r0.<init>(r1)
            throw r0
        Led:
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r1 = "maybe grs_base_url config with [],please check."
            com.huawei.hms.framework.common.Logger.v(r0, r1)
            return
    }

    private java.lang.String c() {
            r4 = this;
            android.content.Context r0 = r4.c
            java.lang.String r0 = r0.getPackageName()
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r4.b
            com.huawei.hms.framework.network.grs.b.b r0 = com.huawei.hms.framework.network.grs.b.b.a(r0, r1)
            if (r0 == 0) goto L13
            com.huawei.hms.framework.network.grs.local.model.a r0 = r0.a()
            goto L14
        L13:
            r0 = 0
        L14:
            if (r0 == 0) goto L28
            java.lang.String r0 = r0.b()
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.e.a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            java.lang.String r3 = "get appName from local assets is{%s}"
            com.huawei.hms.framework.common.Logger.v(r1, r3, r2)
            goto L2a
        L28:
            java.lang.String r0 = ""
        L2a:
            return r0
    }

    public com.huawei.hms.framework.network.grs.c.b.d a() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.b.d r0 = r1.k
            return r0
    }

    public com.huawei.hms.framework.network.grs.c.f a(java.util.concurrent.ExecutorService r4, java.lang.String r5, com.huawei.hms.framework.network.grs.a.c r6) {
            r3 = this;
            java.util.ArrayList<java.lang.String> r0 = r3.i
            r1 = 0
            if (r0 == 0) goto L4f
            java.util.ArrayList<java.lang.String> r0 = r3.j
            if (r0 != 0) goto La
            goto L4f
        La:
            com.huawei.hms.framework.network.grs.c.b.d r0 = r3.a()     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            if (r0 == 0) goto L15
            int r0 = r0.d()     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            goto L17
        L15:
            r0 = 10
        L17:
            com.huawei.hms.framework.network.grs.c.d r2 = new com.huawei.hms.framework.network.grs.c.d     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            r2.<init>(r3, r4, r5, r6)     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            java.util.concurrent.Future r4 = r4.submit(r2)     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            long r5 = (long) r0     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            java.lang.Object r4 = r4.get(r5, r0)     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            com.huawei.hms.framework.network.grs.c.f r4 = (com.huawei.hms.framework.network.grs.c.f) r4     // Catch: java.lang.Exception -> L2b java.util.concurrent.TimeoutException -> L31 java.lang.InterruptedException -> L39 java.util.concurrent.ExecutionException -> L3f java.util.concurrent.CancellationException -> L48
            r1 = r4
            goto L4f
        L2b:
            r4 = move-exception
            java.lang.String r5 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r6 = "{submitExcutorTaskWithTimeout} catch Exception"
            goto L44
        L31:
            java.lang.String r4 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r5 = "{submitExcutorTaskWithTimeout} the wait timed out"
            com.huawei.hms.framework.common.Logger.w(r4, r5)
            goto L4f
        L39:
            r4 = move-exception
            java.lang.String r5 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r6 = "{submitExcutorTaskWithTimeout} the current thread was interrupted while waiting"
            goto L44
        L3f:
            r4 = move-exception
            java.lang.String r5 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r6 = "{submitExcutorTaskWithTimeout} the computation threw an ExecutionException"
        L44:
            com.huawei.hms.framework.common.Logger.w(r5, r6, r4)
            goto L4f
        L48:
            java.lang.String r4 = com.huawei.hms.framework.network.grs.c.e.a
            java.lang.String r5 = "{submitExcutorTaskWithTimeout} the computation was cancelled"
            com.huawei.hms.framework.common.Logger.i(r4, r5)
        L4f:
            return r1
    }

    public void a(com.huawei.hms.framework.network.grs.c.b.d r1) {
            r0 = this;
            r0.k = r1
            return
    }

    @Override
    public synchronized void a(com.huawei.hms.framework.network.grs.c.f r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.ArrayList<com.huawei.hms.framework.network.grs.c.f> r0 = r6.g     // Catch: java.lang.Throwable -> Laf
            r0.add(r7)     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.c.f r0 = r6.e     // Catch: java.lang.Throwable -> Laf
            if (r0 == 0) goto L19
            boolean r0 = r0.m()     // Catch: java.lang.Throwable -> Laf
            if (r0 == 0) goto L19
            java.lang.String r7 = com.huawei.hms.framework.network.grs.c.e.a     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = "grsResponseResult is ok"
            com.huawei.hms.framework.common.Logger.v(r7, r0)     // Catch: java.lang.Throwable -> Laf
            monitor-exit(r6)
            return
        L19:
            boolean r0 = r7.l()     // Catch: java.lang.Throwable -> Laf
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L42
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = "GRS server open 503 limiting strategy."
            com.huawei.hms.framework.common.Logger.i(r0, r3)     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r6.b     // Catch: java.lang.Throwable -> Laf
            android.content.Context r3 = r6.c     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = r0.getGrsParasKey(r1, r2, r3)     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.d.d$a r1 = new com.huawei.hms.framework.network.grs.d.d$a     // Catch: java.lang.Throwable -> Laf
            long r2 = r7.j()     // Catch: java.lang.Throwable -> Laf
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Laf
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.d.d.a(r0, r1)     // Catch: java.lang.Throwable -> Laf
            monitor-exit(r6)
            return
        L42:
            boolean r0 = r7.m()     // Catch: java.lang.Throwable -> Laf
            if (r0 != 0) goto L51
            java.lang.String r7 = com.huawei.hms.framework.network.grs.c.e.a     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = "grsResponseResult has exception so need return"
            com.huawei.hms.framework.common.Logger.v(r7, r0)     // Catch: java.lang.Throwable -> Laf
            monitor-exit(r6)
            return
        L51:
            r6.e = r7     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.a.a r0 = r6.d     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.GrsBaseInfo r3 = r6.b     // Catch: java.lang.Throwable -> Laf
            android.content.Context r4 = r6.c     // Catch: java.lang.Throwable -> Laf
            com.huawei.hms.framework.network.grs.c.b.c r5 = r6.l     // Catch: java.lang.Throwable -> Laf
            r0.a(r3, r7, r4, r5)     // Catch: java.lang.Throwable -> Laf
        L5e:
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r0 = r6.f     // Catch: java.lang.Throwable -> Laf
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Laf
            if (r1 >= r0) goto Lad
            java.util.ArrayList<java.lang.String> r0 = r6.i     // Catch: java.lang.Throwable -> Laf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = r7.k()     // Catch: java.lang.Throwable -> Laf
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> Laf
            if (r0 != 0) goto Laa
            java.util.ArrayList<java.lang.String> r0 = r6.j     // Catch: java.lang.Throwable -> Laf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = r7.k()     // Catch: java.lang.Throwable -> Laf
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> Laf
            if (r0 != 0) goto Laa
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r0 = r6.f     // Catch: java.lang.Throwable -> Laf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Laf
            java.util.concurrent.Future r0 = (java.util.concurrent.Future) r0     // Catch: java.lang.Throwable -> Laf
            boolean r0 = r0.isCancelled()     // Catch: java.lang.Throwable -> Laf
            if (r0 != 0) goto Laa
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.e.a     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = "future cancel"
            com.huawei.hms.framework.common.Logger.i(r0, r3)     // Catch: java.lang.Throwable -> Laf
            java.util.ArrayList<java.util.concurrent.Future<com.huawei.hms.framework.network.grs.c.f>> r0 = r6.f     // Catch: java.lang.Throwable -> Laf
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Laf
            java.util.concurrent.Future r0 = (java.util.concurrent.Future) r0     // Catch: java.lang.Throwable -> Laf
            r0.cancel(r2)     // Catch: java.lang.Throwable -> Laf
        Laa:
            int r1 = r1 + 1
            goto L5e
        Lad:
            monitor-exit(r6)
            return
        Laf:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }
}
