package com.alipay.sdk.util;

public class e {
    public static final java.lang.String a = "failed";
    public static final java.lang.String b = "scheme_failed";
    private android.app.Activity c;
    private com.alipay.android.app.IAlixPay d;
    private final java.lang.Object e;
    private boolean f;
    private com.alipay.sdk.util.e.a g;
    private android.content.ServiceConnection h;
    private java.lang.String i;
    private com.alipay.android.app.IRemoteServiceCallback j;

    public interface a {
        void a();

        void b();
    }

    public e(android.app.Activity r2, com.alipay.sdk.util.e.a r3) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.alipay.android.app.IAlixPay> r0 = com.alipay.android.app.IAlixPay.class
            r1.e = r0
            com.alipay.sdk.util.f r0 = new com.alipay.sdk.util.f
            r0.<init>(r1)
            r1.h = r0
            r0 = 0
            r1.i = r0
            com.alipay.sdk.util.h r0 = new com.alipay.sdk.util.h
            r0.<init>(r1)
            r1.j = r0
            r1.c = r2
            r1.g = r3
            return
    }

    static com.alipay.android.app.IAlixPay a(com.alipay.sdk.util.e r0, com.alipay.android.app.IAlixPay r1) {
            r0.d = r1
            return r1
    }

    static java.lang.Object a(com.alipay.sdk.util.e r0) {
            java.lang.Object r0 = r0.e
            return r0
    }

    static java.lang.String a(com.alipay.sdk.util.e r0, java.lang.String r1) {
            r0.i = r1
            return r1
    }

    private java.lang.String a(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.setPackage(r9)
            java.lang.String r1 = com.alipay.sdk.util.n.a(r9)
            r0.setAction(r1)
            android.app.Activity r1 = r7.c
            java.lang.String r1 = com.alipay.sdk.util.n.a(r1, r9)
            android.app.Activity r2 = r7.c     // Catch: java.lang.Throwable -> L16d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16d
            android.content.ServiceConnection r3 = r7.h     // Catch: java.lang.Throwable -> L16d
            r4 = 1
            boolean r0 = r2.bindService(r0, r3, r4)     // Catch: java.lang.Throwable -> L16d
            if (r0 == 0) goto L165
            java.lang.Object r0 = r7.e
            monitor-enter(r0)
            com.alipay.android.app.IAlixPay r2 = r7.d     // Catch: java.lang.Throwable -> L162
            if (r2 != 0) goto L42
            java.lang.Object r2 = r7.e     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L162
            com.alipay.sdk.data.a r3 = com.alipay.sdk.data.a.g()     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L162
            int r3 = r3.a()     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L162
            long r5 = (long) r3     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L162
            r2.wait(r5)     // Catch: java.lang.InterruptedException -> L3a java.lang.Throwable -> L162
            goto L42
        L3a:
            r2 = move-exception
            java.lang.String r3 = "biz"
            java.lang.String r5 = "BindWaitTimeoutEx"
            com.alipay.sdk.app.statistic.a.a(r3, r5, r2)     // Catch: java.lang.Throwable -> L162
        L42:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L162
            r0 = 0
            r2 = 0
            com.alipay.android.app.IAlixPay r3 = r7.d     // Catch: java.lang.Throwable -> Lf5
            if (r3 != 0) goto L9e
            android.app.Activity r8 = r7.c     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r8 = com.alipay.sdk.util.n.a(r8, r9)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = "biz"
            java.lang.String r3 = "ClientBindFailed"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf5
            r4.<init>()     // Catch: java.lang.Throwable -> Lf5
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r1 = "|"
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf5
            r4.append(r8)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> Lf5
            com.alipay.sdk.app.statistic.a.a(r9, r3, r8)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r8 = "failed"
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> L74
            com.alipay.android.app.IRemoteServiceCallback r1 = r7.j     // Catch: java.lang.Throwable -> L74
            r9.unregisterCallback(r1)     // Catch: java.lang.Throwable -> L74
            goto L78
        L74:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L78:
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> L84
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L84
            android.content.ServiceConnection r1 = r7.h     // Catch: java.lang.Throwable -> L84
            r9.unbindService(r1)     // Catch: java.lang.Throwable -> L84
            goto L88
        L84:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L88:
            r7.g = r2
            r7.j = r2
            r7.h = r2
            r7.d = r2
            boolean r9 = r7.f
            if (r9 == 0) goto L9d
            android.app.Activity r9 = r7.c
            if (r9 == 0) goto L9d
            r9.setRequestedOrientation(r0)
            r7.f = r0
        L9d:
            return r8
        L9e:
            com.alipay.sdk.util.e$a r9 = r7.g     // Catch: java.lang.Throwable -> Lf5
            if (r9 == 0) goto La7
            com.alipay.sdk.util.e$a r9 = r7.g     // Catch: java.lang.Throwable -> Lf5
            r9.a()     // Catch: java.lang.Throwable -> Lf5
        La7:
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> Lf5
            int r9 = r9.getRequestedOrientation()     // Catch: java.lang.Throwable -> Lf5
            if (r9 != 0) goto Lb6
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> Lf5
            r9.setRequestedOrientation(r4)     // Catch: java.lang.Throwable -> Lf5
            r7.f = r4     // Catch: java.lang.Throwable -> Lf5
        Lb6:
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> Lf5
            com.alipay.android.app.IRemoteServiceCallback r1 = r7.j     // Catch: java.lang.Throwable -> Lf5
            r9.registerCallback(r1)     // Catch: java.lang.Throwable -> Lf5
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r8 = r9.Pay(r8)     // Catch: java.lang.Throwable -> Lf5
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> Lcb
            com.alipay.android.app.IRemoteServiceCallback r1 = r7.j     // Catch: java.lang.Throwable -> Lcb
            r9.unregisterCallback(r1)     // Catch: java.lang.Throwable -> Lcb
            goto Lcf
        Lcb:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        Lcf:
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> Ldb
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> Ldb
            android.content.ServiceConnection r1 = r7.h     // Catch: java.lang.Throwable -> Ldb
            r9.unbindService(r1)     // Catch: java.lang.Throwable -> Ldb
            goto Ldf
        Ldb:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        Ldf:
            r7.g = r2
            r7.j = r2
            r7.h = r2
            r7.d = r2
            boolean r9 = r7.f
            if (r9 == 0) goto L12e
            android.app.Activity r9 = r7.c
            if (r9 == 0) goto L12e
        Lef:
            r9.setRequestedOrientation(r0)
            r7.f = r0
            goto L12e
        Lf5:
            r8 = move-exception
            java.lang.String r9 = "biz"
            java.lang.String r1 = "ClientBindException"
            com.alipay.sdk.app.statistic.a.a(r9, r1, r8)     // Catch: java.lang.Throwable -> L12f
            java.lang.String r8 = com.alipay.sdk.app.j.c()     // Catch: java.lang.Throwable -> L12f
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> L109
            com.alipay.android.app.IRemoteServiceCallback r1 = r7.j     // Catch: java.lang.Throwable -> L109
            r9.unregisterCallback(r1)     // Catch: java.lang.Throwable -> L109
            goto L10d
        L109:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L10d:
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> L119
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L119
            android.content.ServiceConnection r1 = r7.h     // Catch: java.lang.Throwable -> L119
            r9.unbindService(r1)     // Catch: java.lang.Throwable -> L119
            goto L11d
        L119:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L11d:
            r7.g = r2
            r7.j = r2
            r7.h = r2
            r7.d = r2
            boolean r9 = r7.f
            if (r9 == 0) goto L12e
            android.app.Activity r9 = r7.c
            if (r9 == 0) goto L12e
            goto Lef
        L12e:
            return r8
        L12f:
            r8 = move-exception
            com.alipay.android.app.IAlixPay r9 = r7.d     // Catch: java.lang.Throwable -> L138
            com.alipay.android.app.IRemoteServiceCallback r1 = r7.j     // Catch: java.lang.Throwable -> L138
            r9.unregisterCallback(r1)     // Catch: java.lang.Throwable -> L138
            goto L13c
        L138:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L13c:
            android.app.Activity r9 = r7.c     // Catch: java.lang.Throwable -> L148
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L148
            android.content.ServiceConnection r1 = r7.h     // Catch: java.lang.Throwable -> L148
            r9.unbindService(r1)     // Catch: java.lang.Throwable -> L148
            goto L14c
        L148:
            r9 = move-exception
            com.alipay.sdk.util.c.a(r9)
        L14c:
            r7.g = r2
            r7.j = r2
            r7.h = r2
            r7.d = r2
            boolean r9 = r7.f
            if (r9 == 0) goto L161
            android.app.Activity r9 = r7.c
            if (r9 == 0) goto L161
            r9.setRequestedOrientation(r0)
            r7.f = r0
        L161:
            throw r8
        L162:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L162
            throw r8
        L165:
            java.lang.Throwable r8 = new java.lang.Throwable     // Catch: java.lang.Throwable -> L16d
            java.lang.String r9 = "bindService fail"
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L16d
            throw r8     // Catch: java.lang.Throwable -> L16d
        L16d:
            r8 = move-exception
            java.lang.String r9 = "biz"
            java.lang.String r0 = "ClientBindServiceFailed"
            com.alipay.sdk.app.statistic.a.a(r9, r0, r8)
            java.lang.String r8 = "failed"
            return r8
    }

    private java.lang.String a(java.lang.String r9, java.lang.String r10, int r11) {
            r8 = this;
            java.lang.String r0 = "scheme_failed"
            java.lang.String r1 = ""
            java.lang.String r2 = r8.a(r9, r10)
            java.lang.String r3 = "failed"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L11a
            java.lang.String r3 = "com.eg.android.AlipayGphone"
            boolean r3 = r3.equals(r10)
            if (r3 == 0) goto L11a
            r3 = 125(0x7d, float:1.75E-43)
            if (r11 <= r3) goto L11a
            com.alipay.sdk.data.a r11 = com.alipay.sdk.data.a.g()
            boolean r11 = r11.b()
            if (r11 == 0) goto L11a
            java.util.concurrent.CountDownLatch r11 = new java.util.concurrent.CountDownLatch
            r2 = 1
            r11.<init>(r2)
            r2 = 32
            java.lang.String r2 = com.alipay.sdk.util.n.a(r2)
            java.lang.String r3 = "biz"
            java.lang.String r4 = "BSPStart"
            com.alipay.sdk.app.statistic.a.a(r3, r4, r2)
            com.alipay.sdk.util.g r4 = new com.alipay.sdk.util.g
            r4.<init>(r8, r11)
            java.util.concurrent.ConcurrentHashMap r5 = com.alipay.sdk.app.AlipayResultActivity.d
            java.lang.ref.WeakReference r6 = new java.lang.ref.WeakReference
            r6.<init>(r4)
            r5.put(r2, r6)
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r4.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r5 = "sourcePid"
            int r6 = android.os.Binder.getCallingPid()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r5 = "external_info"
            r4.put(r5, r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = "pkgName"
            android.app.Activity r5 = r8.c     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r4.put(r9, r5)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = "session"
            r4.put(r9, r2)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = r4.toString()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r2 = "UTF-8"
            byte[] r9 = r9.getBytes(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2 = 2
            java.lang.String r9 = android.util.Base64.encodeToString(r9, r2)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r4 = "alipays://platefromapi/startapp?appId=20000125&mqpSchemePay="
            r2.append(r4)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = android.net.Uri.encode(r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2.append(r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = r2.toString()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2.setPackage(r10)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r10 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r10)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            android.net.Uri r9 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r2.setData(r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            android.app.Activity r9 = r8.c     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r9.startActivity(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            com.alipay.sdk.data.a r9 = com.alipay.sdk.data.a.g()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            android.app.Activity r10 = r8.c     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            android.content.Context r10 = r10.getApplicationContext()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r9.a(r10)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r11.await()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r9 = r8.i     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r10 = "unknown"
            java.util.Map r11 = com.alipay.sdk.util.l.a(r9)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r2 = "resultStatus"
            java.lang.Object r11 = r11.get(r2)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Throwable -> Ld4
            if (r11 != 0) goto Ld2
            java.lang.String r11 = "null"
            goto Ld2
        Lcd:
            r10 = move-exception
            r7 = r11
            r11 = r10
            r10 = r7
            goto Ld5
        Ld2:
            r10 = r11
            goto Lda
        Ld4:
            r11 = move-exception
        Ld5:
            java.lang.String r2 = "BSPStatEx"
            com.alipay.sdk.app.statistic.a.a(r3, r2, r11)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
        Lda:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r11.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r2 = "BSPDone-"
            r11.append(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            r11.append(r10)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            java.lang.String r10 = r11.toString()     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            com.alipay.sdk.app.statistic.a.a(r3, r10, r1)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            if (r10 == 0) goto Lfa
            java.lang.String r9 = "BSPEmpty"
            com.alipay.sdk.app.statistic.a.a(r3, r9, r1)     // Catch: java.lang.Throwable -> Lfc java.lang.InterruptedException -> L103
            goto L119
        Lfa:
            r0 = r9
            goto L119
        Lfc:
            r9 = move-exception
            java.lang.String r10 = "BSPEx"
            com.alipay.sdk.app.statistic.a.a(r3, r10, r9)
            goto L119
        L103:
            r9 = move-exception
            java.lang.String r10 = "BSPWaiting"
            com.alipay.sdk.app.statistic.a.a(r3, r10, r9)
            com.alipay.sdk.app.k r9 = com.alipay.sdk.app.k.g
            int r9 = r9.a()
            com.alipay.sdk.app.k r10 = com.alipay.sdk.app.k.g
            java.lang.String r10 = r10.b()
            java.lang.String r0 = com.alipay.sdk.app.j.a(r9, r10, r1)
        L119:
            return r0
        L11a:
            return r2
    }

    private void a(com.alipay.sdk.util.n.a r3) throws java.lang.InterruptedException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            android.content.pm.PackageInfo r3 = r3.a
            if (r3 != 0) goto L8
            return
        L8:
            java.lang.String r3 = r3.packageName
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.alipay.android.app.TransProcessPayActivity"
            r0.setClassName(r3, r1)
            android.app.Activity r3 = r2.c     // Catch: java.lang.Throwable -> L1a
            r3.startActivity(r0)     // Catch: java.lang.Throwable -> L1a
            goto L22
        L1a:
            r3 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "StartLaunchAppTransEx"
            com.alipay.sdk.app.statistic.a.a(r0, r1, r3)
        L22:
            r0 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r0)
            return
    }

    static android.app.Activity b(com.alipay.sdk.util.e r0) {
            android.app.Activity r0 = r0.c
            return r0
    }

    static com.alipay.sdk.util.e.a c(com.alipay.sdk.util.e r0) {
            com.alipay.sdk.util.e$a r0 = r0.g
            return r0
    }

    public java.lang.String a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = ""
            r1 = 0
            com.alipay.sdk.data.a r2 = com.alipay.sdk.data.a.g()     // Catch: java.lang.Throwable -> L5e
            java.util.List r2 = r2.f()     // Catch: java.lang.Throwable -> L5e
            com.alipay.sdk.data.a r3 = com.alipay.sdk.data.a.g()     // Catch: java.lang.Throwable -> L5e
            boolean r3 = r3.p     // Catch: java.lang.Throwable -> L5e
            if (r3 == 0) goto L15
            if (r2 != 0) goto L17
        L15:
            java.util.List<com.alipay.sdk.data.a$a> r2 = com.alipay.sdk.app.i.a     // Catch: java.lang.Throwable -> L5e
        L17:
            android.app.Activity r3 = r5.c     // Catch: java.lang.Throwable -> L5e
            com.alipay.sdk.util.n$a r2 = com.alipay.sdk.util.n.a(r3, r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "failed"
            if (r2 == 0) goto L5d
            boolean r4 = r2.a()     // Catch: java.lang.Throwable -> L5e
            if (r4 != 0) goto L5d
            boolean r4 = r2.b()     // Catch: java.lang.Throwable -> L5e
            if (r4 == 0) goto L2e
            goto L5d
        L2e:
            android.content.pm.PackageInfo r4 = r2.a     // Catch: java.lang.Throwable -> L5e
            boolean r4 = com.alipay.sdk.util.n.a(r4)     // Catch: java.lang.Throwable -> L5e
            if (r4 == 0) goto L37
            return r3
        L37:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> L5e
            if (r3 == 0) goto L4d
            java.lang.String r3 = "com.eg.android.AlipayGphone"
            android.content.pm.PackageInfo r4 = r2.a     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Throwable -> L5e
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L5e
            if (r3 == 0) goto L48
            goto L4d
        L48:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = r3.packageName     // Catch: java.lang.Throwable -> L5e
            goto L51
        L4d:
            java.lang.String r0 = com.alipay.sdk.util.n.a()     // Catch: java.lang.Throwable -> L5e
        L51:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> L5e
            if (r3 == 0) goto L59
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> L5e
            int r1 = r3.versionCode     // Catch: java.lang.Throwable -> L5e
        L59:
            r5.a(r2)     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5d:
            return r3
        L5e:
            r2 = move-exception
            java.lang.String r3 = "biz"
            java.lang.String r4 = "CheckClientSignEx"
            com.alipay.sdk.app.statistic.a.a(r3, r4, r2)
        L66:
            java.lang.String r6 = r5.a(r6, r0, r1)
            return r6
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.c = r0
            return
    }
}
