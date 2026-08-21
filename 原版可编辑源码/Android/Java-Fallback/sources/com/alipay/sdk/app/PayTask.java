package com.alipay.sdk.app;

public class PayTask {
    public static final java.lang.Object h = null;
    public static long i;
    public android.app.Activity a;
    public com.alipay.sdk.m.x.a b;
    public final java.lang.String c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final java.lang.String f;
    public java.util.Map<java.lang.String, com.alipay.sdk.app.PayTask.c> g;

    public class a implements java.lang.Runnable {
        public final java.lang.String a;
        public final boolean b;
        public final com.alipay.sdk.app.H5PayCallback c;
        public final com.alipay.sdk.app.PayTask d;

        public a(com.alipay.sdk.app.PayTask r1, java.lang.String r2, boolean r3, com.alipay.sdk.app.H5PayCallback r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a
                com.alipay.sdk.app.PayTask r1 = r4.d
                android.app.Activity r1 = com.alipay.sdk.app.PayTask.a(r1)
                java.lang.String r2 = r4.a
                java.lang.String r3 = "payInterceptorWithUrl"
                r0.<init>(r1, r2, r3)
                com.alipay.sdk.app.PayTask r1 = r4.d
                java.lang.String r2 = r4.a
                boolean r3 = r4.b
                com.alipay.sdk.util.H5PayResultModel r0 = r1.h5Pay(r0, r2, r3)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "inc finished: "
                r1.append(r2)
                java.lang.String r2 = r0.getResultCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "mspl"
                com.alipay.sdk.m.u.e.d(r2, r1)
                com.alipay.sdk.app.H5PayCallback r1 = r4.c
                r1.onPayResult(r0)
                return
        }
    }

    public class b implements com.alipay.sdk.m.u.h.g {
        public final com.alipay.sdk.app.PayTask a;

        public b(com.alipay.sdk.app.PayTask r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.alipay.sdk.app.PayTask r0 = r1.a
                r0.dismissLoading()
                return
        }

        @Override
        public void b() {
                r0 = this;
                return
        }
    }

    public class c {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public java.lang.String d;
        public final com.alipay.sdk.app.PayTask e;

        public c(com.alipay.sdk.app.PayTask r1) {
                r0 = this;
                r0.e = r1
                r0.<init>()
                java.lang.String r1 = ""
                r0.a = r1
                r0.b = r1
                r0.c = r1
                r0.d = r1
                return
        }

        public c(com.alipay.sdk.app.PayTask r1, com.alipay.sdk.app.PayTask.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.c
                return r0
        }

        public void a(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public void b(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public java.lang.String c() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public void c(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public java.lang.String d() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }

        public void d(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return
        }
    }

    static {
            java.lang.Class<com.alipay.sdk.m.u.h> r0 = com.alipay.sdk.m.u.h.class
            com.alipay.sdk.app.PayTask.h = r0
            return
    }

    public PayTask(android.app.Activity r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "wappaygw.alipay.com/service/rest.htm"
            r2.c = r0
            java.lang.String r0 = "mclient.alipay.com/service/rest.htm"
            r2.d = r0
            java.lang.String r0 = "mclient.alipay.com/home/exterfaceAssign.htm"
            r2.e = r0
            java.lang.String r0 = "mclient.alipay.com/cashier/mobilepay.htm"
            r2.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.g = r0
            r2.a = r3
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.app.Activity r1 = r2.a
            r0.a(r1)
            com.alipay.sdk.m.x.a r0 = new com.alipay.sdk.m.x.a
            java.lang.String r1 = "去支付宝付款"
            r0.<init>(r3, r1)
            r2.b = r0
            return
    }

    public static android.app.Activity a(com.alipay.sdk.app.PayTask r0) {
            android.app.Activity r0 = r0.a
            return r0
    }

    private com.alipay.sdk.m.u.h.g a() {
            r1 = this;
            com.alipay.sdk.app.PayTask$b r0 = new com.alipay.sdk.app.PayTask$b
            r0.<init>(r1)
            return r0
    }

    public static java.lang.String a(android.content.Context r6) {
            java.lang.String r0 = "sc"
            java.lang.String r1 = ""
            android.content.pm.PackageManager r2 = r6.getPackageManager()     // Catch: java.lang.Exception -> L18
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Exception -> L18
            r3 = 0
            android.content.pm.PackageInfo r6 = r2.getPackageInfo(r6, r3)     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = r6.versionName     // Catch: java.lang.Exception -> L18
            java.lang.String r6 = r6.packageName     // Catch: java.lang.Exception -> L16
            goto L1e
        L16:
            r6 = move-exception
            goto L1a
        L18:
            r6 = move-exception
            r2 = r1
        L1a:
            com.alipay.sdk.m.u.e.a(r6)
            r6 = r1
        L1e:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5b
            r3.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "appkey"
            java.lang.String r5 = "2014052600006128"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "ty"
            java.lang.String r5 = "and_lite"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "sv"
            java.lang.String r5 = "h.a.3.8.15"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "an"
            r3.put(r4, r6)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = "av"
            r3.put(r6, r2)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = "sdk_start_time"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5b
            r3.put(r6, r4)     // Catch: java.lang.Throwable -> L5b
            boolean r6 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5b
            if (r6 != 0) goto L56
            java.lang.String r6 = "h5tonative"
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> L5b
        L56:
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L5b
            return r6
        L5b:
            r6 = move-exception
            com.alipay.sdk.m.u.e.a(r6)
            return r1
    }

    private java.lang.String a(com.alipay.sdk.m.s.a r5, com.alipay.sdk.m.r.b r6) {
            r4 = this;
            java.lang.String[] r6 = r6.c()
            android.content.Intent r0 = new android.content.Intent
            android.app.Activity r1 = r4.a
            java.lang.Class<com.alipay.sdk.app.H5PayActivity> r2 = com.alipay.sdk.app.H5PayActivity.class
            r0.<init>(r1, r2)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            r2 = 0
            r2 = r6[r2]
            java.lang.String r3 = "url"
            r1.putString(r3, r2)
            int r2 = r6.length
            r3 = 2
            if (r2 != r3) goto L26
            r2 = 1
            r6 = r6[r2]
            java.lang.String r2 = "cookie"
            r1.putString(r2, r6)
        L26:
            r0.putExtras(r1)
            com.alipay.sdk.m.s.a.a.a(r5, r0)
            android.app.Activity r5 = r4.a
            r5.startActivity(r0)
            java.lang.Object r5 = com.alipay.sdk.app.PayTask.h
            monitor-enter(r5)
            java.lang.Object r6 = com.alipay.sdk.app.PayTask.h     // Catch: java.lang.Throwable -> L49 java.lang.InterruptedException -> L4b
            r6.wait()     // Catch: java.lang.Throwable -> L49 java.lang.InterruptedException -> L4b
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = com.alipay.sdk.m.j.b.d()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L48
            java.lang.String r5 = com.alipay.sdk.m.j.b.a()
        L48:
            return r5
        L49:
            r6 = move-exception
            goto L55
        L4b:
            r6 = move-exception
            com.alipay.sdk.m.u.e.a(r6)     // Catch: java.lang.Throwable -> L49
            java.lang.String r6 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L49
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L49
            return r6
        L55:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L49
            throw r6
    }

    private java.lang.String a(com.alipay.sdk.m.s.a r9, com.alipay.sdk.m.r.b r10, java.lang.String r11) {
            r8 = this;
            java.lang.String[] r10 = r10.c()
            android.content.Intent r0 = new android.content.Intent
            android.app.Activity r1 = r8.a
            java.lang.Class<com.alipay.sdk.app.H5PayActivity> r2 = com.alipay.sdk.app.H5PayActivity.class
            r0.<init>(r1, r2)
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L103
            r2 = 2
            r3 = r10[r2]     // Catch: java.lang.Throwable -> L103
            byte[] r3 = com.alipay.sdk.m.n.a.a(r3)     // Catch: java.lang.Throwable -> L103
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L103
            org.json.JSONObject r1 = com.alipay.sdk.m.u.n.h(r1)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "url"
            r4 = 0
            r5 = r10[r4]     // Catch: java.lang.Throwable -> L103
            r0.putExtra(r3, r5)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "title"
            r5 = 1
            r6 = r10[r5]     // Catch: java.lang.Throwable -> L103
            r0.putExtra(r3, r6)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "version"
            java.lang.String r6 = "v2"
            r0.putExtra(r3, r6)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "method"
            java.lang.String r6 = "method"
            java.lang.String r7 = "POST"
            java.lang.String r1 = r1.optString(r6, r7)     // Catch: java.lang.Throwable -> L103
            r0.putExtra(r3, r1)     // Catch: java.lang.Throwable -> L103
            com.alipay.sdk.m.j.b.a(r4)
            r10 = 0
            com.alipay.sdk.m.j.b.a(r10)
            com.alipay.sdk.m.s.a.a.a(r9, r0)
            android.app.Activity r1 = r8.a
            r1.startActivity(r0)
            java.lang.Object r0 = com.alipay.sdk.app.PayTask.h
            monitor-enter(r0)
            java.lang.Object r1 = com.alipay.sdk.app.PayTask.h     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            r1.wait()     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            boolean r1 = com.alipay.sdk.m.j.b.c()     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            java.lang.String r3 = com.alipay.sdk.m.j.b.d()     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            com.alipay.sdk.m.j.b.a(r4)     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            com.alipay.sdk.m.j.b.a(r10)     // Catch: java.lang.Throwable -> Lf5 java.lang.InterruptedException -> Lf7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf5
            if (r1 == 0) goto Lb8
            java.lang.String r10 = new java.lang.String     // Catch: java.lang.Throwable -> Lad
            byte[] r0 = com.alipay.sdk.m.n.a.a(r3)     // Catch: java.lang.Throwable -> Lad
            r10.<init>(r0)     // Catch: java.lang.Throwable -> Lad
            org.json.JSONObject r10 = com.alipay.sdk.m.u.n.h(r10)     // Catch: java.lang.Throwable -> Lad
            java.util.List r10 = com.alipay.sdk.m.r.b.a(r10)     // Catch: java.lang.Throwable -> Lad
            r0 = 0
        L7b:
            int r1 = r10.size()     // Catch: java.lang.Throwable -> Lad
            if (r0 >= r1) goto Lb8
            java.lang.Object r1 = r10.get(r0)     // Catch: java.lang.Throwable -> Lad
            com.alipay.sdk.m.r.b r1 = (com.alipay.sdk.m.r.b) r1     // Catch: java.lang.Throwable -> Lad
            com.alipay.sdk.m.r.a r6 = r1.a()     // Catch: java.lang.Throwable -> Lad
            com.alipay.sdk.m.r.a r7 = com.alipay.sdk.m.r.a.f     // Catch: java.lang.Throwable -> Lad
            if (r6 != r7) goto Laa
            java.lang.String[] r10 = r1.c()     // Catch: java.lang.Throwable -> Lad
            r0 = r10[r5]     // Catch: java.lang.Throwable -> Lad
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lad
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> Lad
            r1 = r10[r4]     // Catch: java.lang.Throwable -> Lad
            r10 = r10[r2]     // Catch: java.lang.Throwable -> Lad
            java.lang.String r10 = com.alipay.sdk.m.u.n.e(r9, r10)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r10 = com.alipay.sdk.m.j.b.a(r0, r1, r10)     // Catch: java.lang.Throwable -> Lad
            goto Lba
        Laa:
            int r0 = r0 + 1
            goto L7b
        Lad:
            r10 = move-exception
            com.alipay.sdk.m.u.e.a(r10)
            java.lang.String r0 = "biz"
            java.lang.String r1 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r9, r0, r1, r10, r3)
        Lb8:
            java.lang.String r10 = ""
        Lba:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto Lf4
            java.lang.Integer r10 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> Ld1
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = ""
            java.lang.String r1 = ""
            java.lang.String r10 = com.alipay.sdk.m.j.b.a(r10, r0, r1)     // Catch: java.lang.Throwable -> Ld1
            goto Lf4
        Ld1:
            r10 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endCode: "
            r0.append(r1)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            java.lang.String r0 = "biz"
            java.lang.String r1 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r9, r0, r1, r10, r11)
            r9 = 8000(0x1f40, float:1.121E-41)
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            java.lang.String r10 = com.alipay.sdk.m.j.b.a(r9, r10, r11)
        Lf4:
            return r10
        Lf5:
            r9 = move-exception
            goto L101
        Lf7:
            r9 = move-exception
            com.alipay.sdk.m.u.e.a(r9)     // Catch: java.lang.Throwable -> Lf5
            java.lang.String r9 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> Lf5
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf5
            return r9
        L101:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf5
            throw r9
        L103:
            r11 = move-exception
            com.alipay.sdk.m.u.e.a(r11)
            java.lang.String r10 = java.util.Arrays.toString(r10)
            java.lang.String r0 = "biz"
            java.lang.String r1 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r9, r0, r1, r11, r10)
            java.lang.String r9 = com.alipay.sdk.m.j.b.a()
            return r9
    }

    private java.lang.String a(com.alipay.sdk.m.s.a r9, java.lang.String r10) {
            r8 = this;
            r8.showLoading()
            r0 = 0
            com.alipay.sdk.m.q.f r1 = new com.alipay.sdk.m.q.f     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            r1.<init>()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            android.app.Activity r2 = r8.a     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.p.b r1 = r1.a(r9, r2, r10)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            org.json.JSONObject r1 = r1.c()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            java.lang.String r2 = "end_code"
            java.lang.String r2 = r1.optString(r2, r0)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            java.lang.String r3 = "form"
            org.json.JSONObject r3 = r1.optJSONObject(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            java.lang.String r4 = "onload"
            org.json.JSONObject r3 = r3.optJSONObject(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            java.util.List r3 = com.alipay.sdk.m.r.b.a(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            r4 = 0
            r5 = 0
        L2f:
            int r6 = r3.size()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            if (r5 >= r6) goto L4f
            java.lang.Object r6 = r3.get(r5)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.b r6 = (com.alipay.sdk.m.r.b) r6     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.a r6 = r6.a()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.a r7 = com.alipay.sdk.m.r.a.d     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            if (r6 != r7) goto L4c
            java.lang.Object r6 = r3.get(r5)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.b r6 = (com.alipay.sdk.m.r.b) r6     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.b.a(r6)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
        L4c:
            int r5 = r5 + 1
            goto L2f
        L4f:
            r8.a(r9, r1)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            r8.dismissLoading()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            android.app.Activity r1 = r8.a     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            java.lang.String r5 = r9.d     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r5)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
        L5c:
            int r1 = r3.size()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            if (r4 >= r1) goto L99
            java.lang.Object r1 = r3.get(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.b r1 = (com.alipay.sdk.m.r.b) r1     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.a r5 = r1.a()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.a r6 = com.alipay.sdk.m.r.a.c     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            if (r5 != r6) goto L7f
            java.lang.String r0 = r8.a(r9, r1)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            r8.dismissLoading()
            android.app.Activity r1 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r2)
            return r0
        L7f:
            com.alipay.sdk.m.r.a r5 = r1.a()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            com.alipay.sdk.m.r.a r6 = com.alipay.sdk.m.r.a.e     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            if (r5 != r6) goto L96
            java.lang.String r0 = r8.a(r9, r1, r2)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> Lba
            r8.dismissLoading()
            android.app.Activity r1 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r2)
            return r0
        L96:
            int r4 = r4 + 1
            goto L5c
        L99:
            r8.dismissLoading()
            android.app.Activity r1 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r2)
            goto Ld5
        La4:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r2 = "biz"
            java.lang.String r3 = "H5PayDataAnalysisError"
            com.alipay.sdk.m.k.a.a(r9, r2, r3, r1)     // Catch: java.lang.Throwable -> Lf0
            r8.dismissLoading()
            android.app.Activity r1 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r2)
            goto Ld5
        Lba:
            r0 = move-exception
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.f     // Catch: java.lang.Throwable -> Lf0
            int r1 = r1.b()     // Catch: java.lang.Throwable -> Lf0
            com.alipay.sdk.m.j.c r1 = com.alipay.sdk.m.j.c.b(r1)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r2 = "net"
            com.alipay.sdk.m.k.a.a(r9, r2, r0)     // Catch: java.lang.Throwable -> Lf0
            r8.dismissLoading()
            android.app.Activity r0 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r0, r9, r10, r2)
            r0 = r1
        Ld5:
            if (r0 != 0) goto Le1
            com.alipay.sdk.m.j.c r9 = com.alipay.sdk.m.j.c.d
            int r9 = r9.b()
            com.alipay.sdk.m.j.c r0 = com.alipay.sdk.m.j.c.b(r9)
        Le1:
            int r9 = r0.b()
            java.lang.String r10 = r0.a()
            java.lang.String r0 = ""
            java.lang.String r9 = com.alipay.sdk.m.j.b.a(r9, r10, r0)
            return r9
        Lf0:
            r0 = move-exception
            r8.dismissLoading()
            android.app.Activity r1 = r8.a
            java.lang.String r2 = r9.d
            com.alipay.sdk.m.k.a.a(r1, r9, r10, r2)
            goto Lfd
        Lfc:
            throw r0
        Lfd:
            goto Lfc
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r1, java.lang.String r2, java.util.List<com.alipay.sdk.m.m.a.b> r3, java.lang.String r4, android.app.Activity r5) {
            com.alipay.sdk.m.u.n$c r3 = com.alipay.sdk.m.u.n.a(r1, r5, r3)
            if (r3 == 0) goto L9b
            boolean r0 = r3.a(r1)
            if (r0 != 0) goto L9b
            boolean r0 = r3.a()
            if (r0 != 0) goto L9b
            android.content.pm.PackageInfo r3 = r3.a
            java.lang.String r3 = r3.packageName
            java.lang.String r0 = "hk.alipay.wallet"
            boolean r3 = android.text.TextUtils.equals(r3, r0)
            if (r3 != 0) goto L20
            goto L9b
        L20:
            java.lang.String r3 = "mspl"
            java.lang.String r4 = "PayTask not_login"
            com.alipay.sdk.m.u.e.b(r3, r4)
            int r3 = r2.hashCode()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.Object r4 = new java.lang.Object
            r4.<init>()
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.alipay.sdk.app.PayResultActivity.c
            r0.put(r3, r4)
            android.content.Intent r4 = new android.content.Intent
            java.lang.Class<com.alipay.sdk.app.PayResultActivity> r0 = com.alipay.sdk.app.PayResultActivity.class
            r4.<init>(r5, r0)
            java.lang.String r0 = "orderSuffix"
            r4.putExtra(r0, r2)
            java.lang.String r2 = r5.getPackageName()
            java.lang.String r0 = "externalPkgName"
            r4.putExtra(r0, r2)
            java.lang.String r2 = "phonecashier.pay.hash"
            r4.putExtra(r2, r3)
            com.alipay.sdk.m.s.a.a.a(r1, r4)
            r5.startActivity(r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r1 = com.alipay.sdk.app.PayResultActivity.c
            java.lang.Object r1 = r1.get(r3)
            monitor-enter(r1)
            java.lang.String r2 = "mspl"
            java.lang.String r4 = "PayTask wait"
            com.alipay.sdk.m.u.e.b(r2, r4)     // Catch: java.lang.Throwable -> L8a java.lang.InterruptedException -> L8c
            java.util.HashMap<java.lang.String, java.lang.Object> r2 = com.alipay.sdk.app.PayResultActivity.c     // Catch: java.lang.Throwable -> L8a java.lang.InterruptedException -> L8c
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L8a java.lang.InterruptedException -> L8c
            r2.wait()     // Catch: java.lang.Throwable -> L8a java.lang.InterruptedException -> L8c
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = com.alipay.sdk.app.PayResultActivity.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PayTask ret: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "mspl"
            com.alipay.sdk.m.u.e.b(r3, r2)
            return r1
        L8a:
            r2 = move-exception
            goto L99
        L8c:
            java.lang.String r2 = "mspl"
            java.lang.String r3 = "PayTask interrupted"
            com.alipay.sdk.m.u.e.b(r2, r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r2 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8a
            return r2
        L99:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8a
            throw r2
        L9b:
            return r4
    }

    private synchronized java.lang.String a(com.alipay.sdk.m.s.a r7, java.lang.String r8, boolean r9) {
            r6 = this;
            monitor-enter(r6)
            if (r9 == 0) goto L6
            r6.showLoading()     // Catch: java.lang.Throwable -> L1fc
        L6:
            java.lang.String r9 = "payment_inst="
            boolean r9 = r8.contains(r9)     // Catch: java.lang.Throwable -> L1fc
            r0 = 0
            if (r9 == 0) goto L43
            java.lang.String r9 = "payment_inst="
            int r9 = r8.indexOf(r9)     // Catch: java.lang.Throwable -> L1fc
            int r9 = r9 + 13
            java.lang.String r9 = r8.substring(r9)     // Catch: java.lang.Throwable -> L1fc
            r1 = 38
            int r1 = r9.indexOf(r1)     // Catch: java.lang.Throwable -> L1fc
            if (r1 <= 0) goto L27
            java.lang.String r9 = r9.substring(r0, r1)     // Catch: java.lang.Throwable -> L1fc
        L27:
            java.lang.String r1 = "\""
            java.lang.String r2 = ""
            java.lang.String r9 = r9.replaceAll(r1, r2)     // Catch: java.lang.Throwable -> L1fc
            java.util.Locale r1 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r9 = r9.toLowerCase(r1)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = "alipay"
            java.lang.String r2 = ""
            java.lang.String r9 = r9.replaceAll(r1, r2)     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.j.a.a(r9)     // Catch: java.lang.Throwable -> L1fc
            goto L48
        L43:
            java.lang.String r9 = ""
            com.alipay.sdk.m.j.a.a(r9)     // Catch: java.lang.Throwable -> L1fc
        L48:
            java.lang.String r9 = "service=alipay.acquire.mr.ord.createandpay"
            boolean r9 = r8.contains(r9)     // Catch: java.lang.Throwable -> L1fc
            if (r9 == 0) goto L53
            r9 = 1
            com.alipay.sdk.m.l.a.x = r9     // Catch: java.lang.Throwable -> L1fc
        L53:
            boolean r9 = com.alipay.sdk.m.l.a.x     // Catch: java.lang.Throwable -> L1fc
            if (r9 == 0) goto L80
            java.lang.String r9 = "https://wappaygw.alipay.com/home/exterfaceAssign.htm?"
            boolean r9 = r8.startsWith(r9)     // Catch: java.lang.Throwable -> L1fc
            if (r9 == 0) goto L6c
            java.lang.String r9 = "https://wappaygw.alipay.com/home/exterfaceAssign.htm?"
            int r9 = r8.indexOf(r9)     // Catch: java.lang.Throwable -> L1fc
            int r9 = r9 + 53
            java.lang.String r8 = r8.substring(r9)     // Catch: java.lang.Throwable -> L1fc
            goto L80
        L6c:
            java.lang.String r9 = "https://mclient.alipay.com/home/exterfaceAssign.htm?"
            boolean r9 = r8.startsWith(r9)     // Catch: java.lang.Throwable -> L1fc
            if (r9 == 0) goto L80
            java.lang.String r9 = "https://mclient.alipay.com/home/exterfaceAssign.htm?"
            int r9 = r8.indexOf(r9)     // Catch: java.lang.Throwable -> L1fc
            int r9 = r9 + 52
            java.lang.String r8 = r8.substring(r9)     // Catch: java.lang.Throwable -> L1fc
        L80:
            java.lang.String r9 = ""
            java.lang.String r1 = "mspl"
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r3.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "pay prepared: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L10a
            r3.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L10a
            com.alipay.sdk.m.u.e.d(r1, r3)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = r6.a(r8, r7)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r1 = "mspl"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r3.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "pay raw result: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L10a
            r3.append(r9)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L10a
            com.alipay.sdk.m.u.e.d(r1, r3)     // Catch: java.lang.Throwable -> L10a
            android.app.Activity r1 = r6.a     // Catch: java.lang.Throwable -> L10a
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L10a
            com.alipay.sdk.m.u.i.a(r7, r1, r9)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r1.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = ""
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r1)     // Catch: java.lang.Throwable -> L1fc
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r1.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "resultStatus"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "|"
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "memo"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r1)     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L1fc
            boolean r1 = r1.s()     // Catch: java.lang.Throwable -> L1fc
            if (r1 != 0) goto L16c
            goto L15f
        L10a:
            r1 = move-exception
            java.lang.String r9 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L192
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> L192
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r1.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = ""
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r1)     // Catch: java.lang.Throwable -> L1fc
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r1.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "resultStatus"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "|"
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "memo"
            java.lang.String r3 = com.alipay.sdk.m.u.l.a(r9, r3)     // Catch: java.lang.Throwable -> L1fc
            r1.append(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r1)     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L1fc
            boolean r1 = r1.s()     // Catch: java.lang.Throwable -> L1fc
            if (r1 != 0) goto L16c
        L15f:
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L1fc
            android.app.Activity r3 = r6.a     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L1fc
            r1.a(r7, r3, r0, r2)     // Catch: java.lang.Throwable -> L1fc
        L16c:
            r6.dismissLoading()     // Catch: java.lang.Throwable -> L1fc
            android.app.Activity r0 = r6.a     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r1 = r7.d     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.k.a.b(r0, r7, r8, r1)     // Catch: java.lang.Throwable -> L1fc
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r7.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r8 = "pay returning: "
            r7.append(r8)     // Catch: java.lang.Throwable -> L1fc
            r7.append(r9)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r8 = "mspl"
            com.alipay.sdk.m.u.e.d(r8, r7)     // Catch: java.lang.Throwable -> L1fc
            monitor-exit(r6)
            return r9
        L192:
            r1 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r3.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = ""
            r3.append(r4)     // Catch: java.lang.Throwable -> L1fc
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1fc
            r3.append(r4)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = "biz"
            java.lang.String r5 = "PgReturn"
            com.alipay.sdk.m.k.a.a(r7, r4, r5, r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fc
            r3.<init>()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = "resultStatus"
            java.lang.String r4 = com.alipay.sdk.m.u.l.a(r9, r4)     // Catch: java.lang.Throwable -> L1fc
            r3.append(r4)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = "memo"
            java.lang.String r9 = com.alipay.sdk.m.u.l.a(r9, r4)     // Catch: java.lang.Throwable -> L1fc
            r3.append(r9)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = "biz"
            java.lang.String r4 = "PgReturnV"
            com.alipay.sdk.m.k.a.a(r7, r3, r4, r9)     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.m.a r9 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L1fc
            boolean r9 = r9.s()     // Catch: java.lang.Throwable -> L1fc
            if (r9 != 0) goto L1ed
            com.alipay.sdk.m.m.a r9 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L1fc
            android.app.Activity r3 = r6.a     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L1fc
            r9.a(r7, r3, r0, r2)     // Catch: java.lang.Throwable -> L1fc
        L1ed:
            r6.dismissLoading()     // Catch: java.lang.Throwable -> L1fc
            android.app.Activity r9 = r6.a     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r0 = r7.d     // Catch: java.lang.Throwable -> L1fc
            com.alipay.sdk.m.k.a.b(r9, r7, r8, r0)     // Catch: java.lang.Throwable -> L1fc
            throw r1     // Catch: java.lang.Throwable -> L1fc
        L1fc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    private java.lang.String a(java.lang.String r12, com.alipay.sdk.m.s.a r13) {
            r11 = this;
            java.lang.String r12 = r13.a(r12)
            java.lang.String r0 = "paymethod=\"expressGateway\""
            boolean r0 = r12.contains(r0)
            if (r0 == 0) goto L11
            java.lang.String r12 = r11.a(r13, r12)
            return r12
        L11:
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            java.util.List r0 = r0.l()
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()
            boolean r1 = r1.h
            if (r1 == 0) goto L23
            if (r0 != 0) goto L25
        L23:
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = com.alipay.sdk.m.j.a.d
        L25:
            android.app.Activity r1 = r11.a
            r2 = 1
            boolean r1 = com.alipay.sdk.m.u.n.a(r13, r1, r0, r2)
            java.lang.String r3 = "biz"
            if (r1 == 0) goto L12c
            com.alipay.sdk.m.u.h r1 = new com.alipay.sdk.m.u.h
            android.app.Activity r4 = r11.a
            com.alipay.sdk.m.u.h$g r5 = r11.a()
            r1.<init>(r4, r13, r5)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "pay inner started: "
            r4.append(r5)
            r4.append(r12)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "mspl"
            com.alipay.sdk.m.u.e.d(r5, r4)
            r4 = 0
            java.lang.String r4 = r1.a(r12, r4)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            if (r6 != 0) goto Lca
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "resultStatus={"
            r6.append(r7)
            com.alipay.sdk.m.j.c r8 = com.alipay.sdk.m.j.c.g
            int r8 = r8.b()
            r6.append(r8)
            java.lang.String r8 = "}"
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            boolean r6 = r4.contains(r6)
            if (r6 == 0) goto Lca
            android.app.Activity r6 = r11.a
            java.lang.String r9 = "alipaySdk"
            java.lang.String r10 = "startActivityEx"
            com.alipay.sdk.m.u.n.a(r9, r10, r6, r13)
            com.alipay.sdk.m.m.a r6 = com.alipay.sdk.m.m.a.D()
            boolean r6 = r6.A()
            if (r6 == 0) goto L96
            java.lang.String r4 = r1.a(r12, r2)
            goto Lca
        L96:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            com.alipay.sdk.m.j.c r6 = com.alipay.sdk.m.j.c.g
            int r6 = r6.b()
            r2.append(r6)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            com.alipay.sdk.m.j.c r7 = com.alipay.sdk.m.j.c.e
            int r7 = r7.b()
            r6.append(r7)
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            java.lang.String r4 = r4.replace(r2, r6)
        Lca:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r6 = "pay inner raw result: "
            r2.append(r6)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.alipay.sdk.m.u.e.d(r5, r2)
            r1.a()
            com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()
            boolean r1 = r1.w()
            java.lang.String r2 = "failed"
            boolean r2 = android.text.TextUtils.equals(r4, r2)
            if (r2 != 0) goto L122
            java.lang.String r2 = "scheme_failed"
            boolean r2 = android.text.TextUtils.equals(r4, r2)
            if (r2 != 0) goto L122
            if (r1 == 0) goto L102
            boolean r1 = r13.e()
            if (r1 == 0) goto L102
            goto L122
        L102:
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L10d
            java.lang.String r12 = com.alipay.sdk.m.j.b.a()
            return r12
        L10d:
            java.lang.String r1 = "{\"isLogin\":\"false\"}"
            boolean r1 = r4.contains(r1)
            if (r1 == 0) goto L121
            java.lang.String r1 = "LogHkLoginByIntent"
            com.alipay.sdk.m.k.a.a(r13, r3, r1)
            android.app.Activity r1 = r11.a
            java.lang.String r12 = a(r13, r12, r0, r4, r1)
            return r12
        L121:
            return r4
        L122:
            java.lang.String r0 = "LogBindCalledH5"
            com.alipay.sdk.m.k.a.a(r13, r3, r0)
            java.lang.String r12 = r11.a(r13, r12)
            return r12
        L12c:
            java.lang.String r0 = "LogCalledH5"
            com.alipay.sdk.m.k.a.a(r13, r3, r0)
            java.lang.String r12 = r11.a(r13, r12)
            return r12
    }

    private java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "={"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            int r0 = r2.indexOf(r3)
            int r3 = r3.length()
            int r0 = r0 + r3
            java.lang.String r3 = "}"
            int r3 = r2.lastIndexOf(r3)
            java.lang.String r2 = r2.substring(r0, r3)
            return r2
    }

    private java.lang.String a(java.lang.String r8, java.util.Map<java.lang.String, java.lang.String> r9) throws java.io.UnsupportedEncodingException {
            r7 = this;
            java.lang.String r0 = "resultStatus"
            java.lang.Object r0 = r9.get(r0)
            java.lang.String r1 = "9000"
            boolean r0 = r1.equals(r0)
            java.lang.String r1 = "result"
            java.lang.Object r1 = r9.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, com.alipay.sdk.app.PayTask$c> r2 = r7.g
            java.lang.Object r8 = r2.remove(r8)
            com.alipay.sdk.app.PayTask$c r8 = (com.alipay.sdk.app.PayTask.c) r8
            java.lang.String r2 = "callBackUrl"
            boolean r3 = r9.containsKey(r2)
            if (r3 == 0) goto L2b
            java.lang.Object r8 = r9.get(r2)
            java.lang.String r8 = (java.lang.String) r8
            return r8
        L2b:
            int r9 = r1.length()
            r2 = 15
            if (r9 <= r2) goto L85
            r9 = 6
            java.lang.String[] r9 = new java.lang.String[r9]
            java.lang.String r2 = "\""
            java.lang.String r3 = "&callBackUrl=\""
            java.lang.String r3 = com.alipay.sdk.m.u.n.a(r3, r2, r1)
            r4 = 0
            r9[r4] = r3
            java.lang.String r3 = "&call_back_url=\""
            java.lang.String r3 = com.alipay.sdk.m.u.n.a(r3, r2, r1)
            r4 = 1
            r9[r4] = r3
            java.lang.String r3 = "&return_url=\""
            java.lang.String r3 = com.alipay.sdk.m.u.n.a(r3, r2, r1)
            r4 = 2
            r9[r4] = r3
            java.lang.String r3 = "&"
            java.lang.String r4 = "&return_url="
            java.lang.String r4 = com.alipay.sdk.m.u.n.a(r4, r3, r1)
            java.lang.String r5 = "utf-8"
            java.lang.String r4 = java.net.URLDecoder.decode(r4, r5)
            r6 = 3
            r9[r6] = r4
            java.lang.String r4 = "&callBackUrl="
            java.lang.String r3 = com.alipay.sdk.m.u.n.a(r4, r3, r1)
            java.lang.String r3 = java.net.URLDecoder.decode(r3, r5)
            r4 = 4
            r9[r4] = r3
            java.lang.String r3 = "call_back_url=\""
            java.lang.String r1 = com.alipay.sdk.m.u.n.a(r3, r2, r1)
            r2 = 5
            r9[r2] = r1
            java.lang.String r9 = a(r9)
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 != 0) goto L85
            return r9
        L85:
            if (r8 == 0) goto L99
            if (r0 == 0) goto L8e
            java.lang.String r9 = r8.b()
            goto L92
        L8e:
            java.lang.String r9 = r8.c()
        L92:
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L99
            return r9
        L99:
            if (r8 == 0) goto La4
            com.alipay.sdk.m.m.a r8 = com.alipay.sdk.m.m.a.D()
            java.lang.String r8 = r8.r()
            return r8
        La4:
            java.lang.String r8 = ""
            return r8
    }

    public static final java.lang.String a(java.lang.String... r5) {
            java.lang.String r0 = ""
            if (r5 != 0) goto L5
            return r0
        L5:
            int r1 = r5.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L15
            r3 = r5[r2]
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L12
            return r3
        L12:
            int r2 = r2 + 1
            goto L7
        L15:
            return r0
    }

    private void a(com.alipay.sdk.m.s.a r3, org.json.JSONObject r4) {
            r2 = this;
            java.lang.String r0 = "tid"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = "client_key"
            java.lang.String r4 = r4.optString(r1)     // Catch: java.lang.Throwable -> L28
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L30
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L30
            com.alipay.sdk.m.s.b r1 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Throwable -> L28
            android.content.Context r1 = r1.b()     // Catch: java.lang.Throwable -> L28
            com.alipay.sdk.m.t.a r1 = com.alipay.sdk.m.t.a.a(r1)     // Catch: java.lang.Throwable -> L28
            r1.a(r0, r4)     // Catch: java.lang.Throwable -> L28
            goto L30
        L28:
            r4 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "ParserTidClientKeyEx"
            com.alipay.sdk.m.k.a.a(r3, r0, r1, r4)
        L30:
            return
    }

    private boolean a(boolean r6, boolean r7, java.lang.String r8, java.lang.StringBuilder r9, java.util.Map<java.lang.String, java.lang.String> r10, java.lang.String... r11) {
            r5 = this;
            int r0 = r11.length
            r1 = 0
            r2 = 0
        L3:
            if (r2 >= r0) goto L1d
            r3 = r11[r2]
            java.lang.Object r4 = r10.get(r3)
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L16
            int r2 = r2 + 1
            goto L3
        L16:
            java.lang.Object r10 = r10.get(r3)
            java.lang.String r10 = (java.lang.String) r10
            goto L1f
        L1d:
            java.lang.String r10 = ""
        L1f:
            boolean r11 = android.text.TextUtils.isEmpty(r10)
            if (r11 == 0) goto L28
            if (r7 == 0) goto L4c
            return r1
        L28:
            java.lang.String r7 = "\""
            java.lang.String r11 = "=\""
            if (r6 == 0) goto L40
            java.lang.String r6 = "&"
            r9.append(r6)
            r9.append(r8)
            r9.append(r11)
            r9.append(r10)
            r9.append(r7)
            goto L4c
        L40:
            r9.append(r8)
            r9.append(r11)
            r9.append(r10)
            r9.append(r7)
        L4c:
            r6 = 1
            return r6
    }

    public static synchronized boolean fetchSdkConfig(android.content.Context r9) {
            java.lang.Class<com.alipay.sdk.app.PayTask> r0 = com.alipay.sdk.app.PayTask.class
            monitor-enter(r0)
            r1 = 0
            com.alipay.sdk.m.s.b r2 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r2.a(r9)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r4 = com.alipay.sdk.app.PayTask.i     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            long r4 = r2 - r4
            com.alipay.sdk.m.m.a r6 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            int r6 = r6.d()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            long r6 = (long) r6
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 >= 0) goto L25
            monitor-exit(r0)
            return r1
        L25:
            com.alipay.sdk.app.PayTask.i = r2     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            com.alipay.sdk.m.s.a r3 = com.alipay.sdk.m.s.a.h()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r4 = 4
            r2.a(r3, r9, r1, r4)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r9 = 1
            monitor-exit(r0)
            return r9
        L3a:
            r9 = move-exception
            goto L42
        L3c:
            r9 = move-exception
            com.alipay.sdk.m.u.e.a(r9)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)
            return r1
        L42:
            monitor-exit(r0)
            throw r9
    }

    public void dismissLoading() {
            r1 = this;
            com.alipay.sdk.m.x.a r0 = r1.b
            if (r0 == 0) goto La
            r0.a()
            r0 = 0
            r1.b = r0
        La:
            return
    }

    public synchronized java.lang.String fetchOrderInfoFromH5PayUrl(java.lang.String r17) {
            r16 = this;
            r8 = r16
            r0 = r17
            monitor-enter(r16)
            boolean r1 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L3d6
            java.lang.String r9 = r17.trim()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "https://wappaygw.alipay.com/service/rest.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L1f
            java.lang.String r1 = "http://wappaygw.alipay.com/service/rest.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 == 0) goto L6b
        L1f:
            java.lang.String r1 = "(http|https)://wappaygw.alipay.com/service/rest.htm\\?"
            java.lang.String r2 = ""
            java.lang.String r1 = r9.replaceFirst(r1, r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r2 != 0) goto L6b
            java.util.Map r0 = com.alipay.sdk.m.u.n.b(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "req_data"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "<request_token>"
            java.lang.String r2 = "</request_token>"
            java.lang.String r0 = com.alipay.sdk.m.u.n.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r1.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "_input_charset=\"utf-8\"&ordertoken=\""
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d2
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "\"&pay_channel_id=\"alipay_sdk\"&bizcontext=\""
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            android.app.Activity r0 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L3d2
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "\""
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        L6b:
            java.lang.String r1 = "https://mclient.alipay.com/service/rest.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L7b
            java.lang.String r1 = "http://mclient.alipay.com/service/rest.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 == 0) goto Lc7
        L7b:
            java.lang.String r1 = "(http|https)://mclient.alipay.com/service/rest.htm\\?"
            java.lang.String r2 = ""
            java.lang.String r1 = r9.replaceFirst(r1, r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r2 != 0) goto Lc7
            java.util.Map r0 = com.alipay.sdk.m.u.n.b(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "req_data"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "<request_token>"
            java.lang.String r2 = "</request_token>"
            java.lang.String r0 = com.alipay.sdk.m.u.n.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r1.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "_input_charset=\"utf-8\"&ordertoken=\""
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d2
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "\"&pay_channel_id=\"alipay_sdk\"&bizcontext=\""
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            android.app.Activity r0 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L3d2
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "\""
            r1.append(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        Lc7:
            java.lang.String r1 = "https://mclient.alipay.com/home/exterfaceAssign.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto Ld7
            java.lang.String r1 = "http://mclient.alipay.com/home/exterfaceAssign.htm"
            boolean r1 = r9.startsWith(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 == 0) goto L125
        Ld7:
            java.lang.String r1 = "alipay.wap.create.direct.pay.by.user"
            boolean r1 = r9.contains(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto Le7
            java.lang.String r1 = "create_forex_trade_wap"
            boolean r1 = r9.contains(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 == 0) goto L125
        Le7:
            java.lang.String r1 = "(http|https)://mclient.alipay.com/home/exterfaceAssign.htm\\?"
            java.lang.String r2 = ""
            java.lang.String r1 = r9.replaceFirst(r1, r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L3d2
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L125
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3d2
            r1.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "url"
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "bizcontext"
            android.app.Activity r2 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L3d2
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r0.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "new_external_info=="
            r0.append(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3d2
            r0.append(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        L125:
            java.lang.String r1 = "^(http|https)://(maliprod\\.alipay\\.com/w/trade_pay\\.do.?|mali\\.alipay\\.com/w/trade_pay\\.do.?|mclient\\.alipay\\.com/w/trade_pay\\.do.?)"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)     // Catch: java.lang.Throwable -> L3d2
            java.util.regex.Matcher r1 = r1.matcher(r0)     // Catch: java.lang.Throwable -> L3d2
            boolean r1 = r1.find()     // Catch: java.lang.Throwable -> L3d2
            r10 = 0
            if (r1 == 0) goto L262
            java.lang.String r1 = "?"
            java.lang.String r2 = ""
            java.lang.String r0 = com.alipay.sdk.m.u.n.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L3d2
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L262
            java.util.Map r0 = com.alipay.sdk.m.u.n.b(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r11.<init>()     // Catch: java.lang.Throwable -> L3d2
            r2 = 0
            r3 = 1
            java.lang.String r4 = "trade_no"
            java.lang.String r1 = "trade_no"
            java.lang.String r5 = "alipay_trade_no"
            java.lang.String[] r7 = new java.lang.String[]{r1, r5}     // Catch: java.lang.Throwable -> L3d2
            r1 = r16
            r5 = r11
            r6 = r0
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3d2
            if (r1 == 0) goto L262
            r2 = 1
            r3 = 0
            java.lang.String r4 = "pay_phase_id"
            java.lang.String r1 = "payPhaseId"
            java.lang.String r5 = "pay_phase_id"
            java.lang.String r6 = "out_relation_id"
            java.lang.String[] r7 = new java.lang.String[]{r1, r5, r6}     // Catch: java.lang.Throwable -> L3d2
            r1 = r16
            r5 = r11
            r6 = r0
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "&biz_sub_type=\"TRADE\""
            r11.append(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "&biz_type=\"trade\""
            r11.append(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "app_name"
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r2 == 0) goto L1a1
            java.lang.String r2 = "cid"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3d2
            if (r2 != 0) goto L1a1
            java.lang.String r1 = "ali1688"
            goto L1c5
        L1a1:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d2
            if (r2 == 0) goto L1c5
            java.lang.String r2 = "sid"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3d2
            if (r2 == 0) goto L1c3
            java.lang.String r2 = "s_id"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Throwable -> L3d2
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3d2
            if (r2 != 0) goto L1c5
        L1c3:
            java.lang.String r1 = "tb"
        L1c5:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r2.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r3 = "&app_name=\""
            r2.append(r3)     // Catch: java.lang.Throwable -> L3d2
            r2.append(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "\""
            r2.append(r1)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L3d2
            r11.append(r1)     // Catch: java.lang.Throwable -> L3d2
            r2 = 1
            r3 = 1
            java.lang.String r4 = "extern_token"
            java.lang.String r1 = "extern_token"
            java.lang.String r5 = "cid"
            java.lang.String r6 = "sid"
            java.lang.String r7 = "s_id"
            java.lang.String[] r7 = new java.lang.String[]{r1, r5, r6, r7}     // Catch: java.lang.Throwable -> L3d2
            r1 = r16
            r5 = r11
            r6 = r0
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3d2
            if (r1 != 0) goto L1fc
            java.lang.String r0 = ""
            monitor-exit(r16)
            return r0
        L1fc:
            r2 = 1
            r3 = 0
            java.lang.String r4 = "appenv"
            java.lang.String r1 = "appenv"
            java.lang.String[] r7 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L3d2
            r1 = r16
            r5 = r11
            r6 = r0
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = "&pay_channel_id=\"alipay_sdk\""
            r11.append(r1)     // Catch: java.lang.Throwable -> L3d2
            com.alipay.sdk.app.PayTask$c r1 = new com.alipay.sdk.app.PayTask$c     // Catch: java.lang.Throwable -> L3d2
            r1.<init>(r8, r10)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "return_url"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L3d2
            r1.b(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "show_url"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L3d2
            r1.c(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "pay_order_id"
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L3d2
            r1.a(r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d2
            r0.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = r11.toString()     // Catch: java.lang.Throwable -> L3d2
            r0.append(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "&bizcontext=\""
            r0.append(r2)     // Catch: java.lang.Throwable -> L3d2
            android.app.Activity r2 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L3d2
            r0.append(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r2 = "\""
            r0.append(r2)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3d2
            java.util.Map<java.lang.String, com.alipay.sdk.app.PayTask$c> r2 = r8.g     // Catch: java.lang.Throwable -> L3d2
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        L262:
            java.lang.String r0 = "https://mclient.alipay.com/cashier/mobilepay.htm"
            boolean r0 = r9.startsWith(r0)     // Catch: java.lang.Throwable -> L3d2
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L3ad
            java.lang.String r0 = "http://mclient.alipay.com/cashier/mobilepay.htm"
            boolean r0 = r9.startsWith(r0)     // Catch: java.lang.Throwable -> L3d2
            if (r0 != 0) goto L3ad
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()     // Catch: java.lang.Throwable -> L3d2
            if (r0 == 0) goto L284
            java.lang.String r0 = "mobileclientgw.alipaydev.com/cashier/mobilepay.htm"
            boolean r0 = r9.contains(r0)     // Catch: java.lang.Throwable -> L3d2
            if (r0 == 0) goto L284
            goto L3ad
        L284:
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L3d2
            boolean r0 = r0.h()     // Catch: java.lang.Throwable -> L3d2
            if (r0 == 0) goto L3d6
            java.lang.String r0 = "^https?://(maliprod\\.alipay\\.com|mali\\.alipay\\.com)/batch_payment\\.do\\?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)     // Catch: java.lang.Throwable -> L3d2
            java.util.regex.Matcher r0 = r0.matcher(r9)     // Catch: java.lang.Throwable -> L3d2
            boolean r0 = r0.find()     // Catch: java.lang.Throwable -> L3d2
            if (r0 == 0) goto L3d6
            android.net.Uri r0 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r3 = "return_url"
            java.lang.String r3 = r0.getQueryParameter(r3)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r4 = "show_url"
            java.lang.String r4 = r0.getQueryParameter(r4)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r5 = "pay_order_id"
            java.lang.String r5 = r0.getQueryParameter(r5)     // Catch: java.lang.Throwable -> L3d2
            r6 = 2
            java.lang.String[] r7 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r9 = "trade_nos"
            java.lang.String r9 = r0.getQueryParameter(r9)     // Catch: java.lang.Throwable -> L3d2
            r7[r1] = r9     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r9 = "alipay_trade_no"
            java.lang.String r9 = r0.getQueryParameter(r9)     // Catch: java.lang.Throwable -> L3d2
            r7[r2] = r9     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r7 = a(r7)     // Catch: java.lang.Throwable -> L3d2
            r9 = 3
            java.lang.String[] r11 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r12 = "payPhaseId"
            java.lang.String r12 = r0.getQueryParameter(r12)     // Catch: java.lang.Throwable -> L3d2
            r11[r1] = r12     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r12 = "pay_phase_id"
            java.lang.String r12 = r0.getQueryParameter(r12)     // Catch: java.lang.Throwable -> L3d2
            r11[r2] = r12     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r12 = "out_relation_id"
            java.lang.String r12 = r0.getQueryParameter(r12)     // Catch: java.lang.Throwable -> L3d2
            r11[r6] = r12     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r11 = a(r11)     // Catch: java.lang.Throwable -> L3d2
            r12 = 4
            java.lang.String[] r13 = new java.lang.String[r12]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r14 = "app_name"
            java.lang.String r14 = r0.getQueryParameter(r14)     // Catch: java.lang.Throwable -> L3d2
            r13[r1] = r14     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r14 = "cid"
            java.lang.String r14 = r0.getQueryParameter(r14)     // Catch: java.lang.Throwable -> L3d2
            boolean r14 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L3d2
            if (r14 != 0) goto L304
            java.lang.String r14 = "ali1688"
            goto L306
        L304:
            java.lang.String r14 = ""
        L306:
            r13[r2] = r14     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r14 = "sid"
            java.lang.String r14 = r0.getQueryParameter(r14)     // Catch: java.lang.Throwable -> L3d2
            boolean r14 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L3d2
            if (r14 != 0) goto L317
            java.lang.String r14 = "tb"
            goto L319
        L317:
            java.lang.String r14 = ""
        L319:
            r13[r6] = r14     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r14 = "s_id"
            java.lang.String r14 = r0.getQueryParameter(r14)     // Catch: java.lang.Throwable -> L3d2
            boolean r14 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L3d2
            if (r14 != 0) goto L32a
            java.lang.String r14 = "tb"
            goto L32c
        L32a:
            java.lang.String r14 = ""
        L32c:
            r13[r9] = r14     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r13 = a(r13)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String[] r14 = new java.lang.String[r12]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r15 = "extern_token"
            java.lang.String r15 = r0.getQueryParameter(r15)     // Catch: java.lang.Throwable -> L3d2
            r14[r1] = r15     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r15 = "cid"
            java.lang.String r15 = r0.getQueryParameter(r15)     // Catch: java.lang.Throwable -> L3d2
            r14[r2] = r15     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r15 = "sid"
            java.lang.String r15 = r0.getQueryParameter(r15)     // Catch: java.lang.Throwable -> L3d2
            r14[r6] = r15     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r15 = "s_id"
            java.lang.String r15 = r0.getQueryParameter(r15)     // Catch: java.lang.Throwable -> L3d2
            r14[r9] = r15     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r14 = a(r14)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String[] r15 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r10 = "appenv"
            java.lang.String r0 = r0.getQueryParameter(r10)     // Catch: java.lang.Throwable -> L3d2
            r15[r1] = r0     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = a(r15)     // Catch: java.lang.Throwable -> L3d2
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L3d2
            if (r10 != 0) goto L3d6
            boolean r10 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L3d2
            if (r10 != 0) goto L3d6
            boolean r10 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L3d2
            if (r10 != 0) goto L3d6
            java.lang.String r10 = "trade_no=\"%s\"&pay_phase_id=\"%s\"&biz_type=\"trade\"&biz_sub_type=\"TRADE\"&app_name=\"%s\"&extern_token=\"%s\"&appenv=\"%s\"&pay_channel_id=\"alipay_sdk\"&bizcontext=\"%s\""
            r15 = 6
            java.lang.Object[] r15 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L3d2
            r15[r1] = r7     // Catch: java.lang.Throwable -> L3d2
            r15[r2] = r11     // Catch: java.lang.Throwable -> L3d2
            r15[r6] = r13     // Catch: java.lang.Throwable -> L3d2
            r15[r9] = r14     // Catch: java.lang.Throwable -> L3d2
            r15[r12] = r0     // Catch: java.lang.Throwable -> L3d2
            r0 = 5
            android.app.Activity r1 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L3d2
            r15[r0] = r1     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = java.lang.String.format(r10, r15)     // Catch: java.lang.Throwable -> L3d2
            com.alipay.sdk.app.PayTask$c r1 = new com.alipay.sdk.app.PayTask$c     // Catch: java.lang.Throwable -> L3d2
            r2 = 0
            r1.<init>(r8, r2)     // Catch: java.lang.Throwable -> L3d2
            r1.b(r3)     // Catch: java.lang.Throwable -> L3d2
            r1.c(r4)     // Catch: java.lang.Throwable -> L3d2
            r1.a(r5)     // Catch: java.lang.Throwable -> L3d2
            r1.d(r7)     // Catch: java.lang.Throwable -> L3d2
            java.util.Map<java.lang.String, com.alipay.sdk.app.PayTask$c> r2 = r8.g     // Catch: java.lang.Throwable -> L3d2
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        L3ad:
            android.app.Activity r0 = r8.a     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L3d2
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3d2
            r3.<init>()     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r4 = "url"
            r3.put(r4, r9)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r4 = "bizcontext"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = "new_external_info==%s"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L3d2
            r2[r1] = r3     // Catch: java.lang.Throwable -> L3d2
            java.lang.String r0 = java.lang.String.format(r0, r2)     // Catch: java.lang.Throwable -> L3d2
            monitor-exit(r16)
            return r0
        L3d2:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)     // Catch: java.lang.Throwable -> L3da
        L3d6:
            java.lang.String r0 = ""
            monitor-exit(r16)
            return r0
        L3da:
            r0 = move-exception
            monitor-exit(r16)
            throw r0
    }

    public synchronized java.lang.String fetchTradeToken() {
            r4 = this;
            monitor-enter(r4)
            com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a     // Catch: java.lang.Throwable -> L18
            android.app.Activity r1 = r4.a     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = ""
            java.lang.String r3 = "fetchTradeToken"
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L18
            android.app.Activity r1 = r4.a     // Catch: java.lang.Throwable -> L18
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            java.lang.String r0 = com.alipay.sdk.m.u.i.a(r0, r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r4)
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "15.8.15"
            return r0
    }

    public synchronized com.alipay.sdk.util.H5PayResultModel h5Pay(com.alipay.sdk.m.s.a r8, java.lang.String r9, boolean r10) {
            r7 = this;
            monitor-enter(r7)
            com.alipay.sdk.util.H5PayResultModel r0 = new com.alipay.sdk.util.H5PayResultModel     // Catch: java.lang.Throwable -> L6d
            r0.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r10 = r7.a(r8, r9, r10)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = ";"
            java.lang.String[] r10 = r10.split(r1)     // Catch: java.lang.Throwable -> L60
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L60
            r1.<init>()     // Catch: java.lang.Throwable -> L60
            int r2 = r10.length     // Catch: java.lang.Throwable -> L60
            r3 = 0
            r4 = 0
        L18:
            if (r4 >= r2) goto L32
            r5 = r10[r4]     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = "={"
            int r6 = r5.indexOf(r6)     // Catch: java.lang.Throwable -> L60
            if (r6 < 0) goto L2f
            java.lang.String r6 = r5.substring(r3, r6)     // Catch: java.lang.Throwable -> L60
            java.lang.String r5 = r7.a(r5, r6)     // Catch: java.lang.Throwable -> L60
            r1.put(r6, r5)     // Catch: java.lang.Throwable -> L60
        L2f:
            int r4 = r4 + 1
            goto L18
        L32:
            java.lang.String r10 = "resultStatus"
            boolean r10 = r1.containsKey(r10)     // Catch: java.lang.Throwable -> L60
            if (r10 == 0) goto L45
            java.lang.String r10 = "resultStatus"
            java.lang.Object r10 = r1.get(r10)     // Catch: java.lang.Throwable -> L60
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> L60
            r0.setResultCode(r10)     // Catch: java.lang.Throwable -> L60
        L45:
            java.lang.String r9 = r7.a(r9, r1)     // Catch: java.lang.Throwable -> L60
            r0.setReturnUrl(r9)     // Catch: java.lang.Throwable -> L60
            java.lang.String r9 = r0.getReturnUrl()     // Catch: java.lang.Throwable -> L60
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L60
            if (r9 == 0) goto L6b
            java.lang.String r9 = "biz"
            java.lang.String r10 = "H5CbUrlEmpty"
            java.lang.String r1 = ""
            com.alipay.sdk.m.k.a.b(r8, r9, r10, r1)     // Catch: java.lang.Throwable -> L60
            goto L6b
        L60:
            r9 = move-exception
            java.lang.String r10 = "biz"
            java.lang.String r1 = "H5CbEx"
            com.alipay.sdk.m.k.a.a(r8, r10, r1, r9)     // Catch: java.lang.Throwable -> L6d
            com.alipay.sdk.m.u.e.a(r9)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r7)
            return r0
        L6d:
            r8 = move-exception
            monitor-exit(r7)
            goto L71
        L70:
            throw r8
        L71:
            goto L70
    }

    public synchronized java.lang.String pay(java.lang.String r4, boolean r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = com.alipay.sdk.m.u.b.a()     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto Ld
            java.lang.String r4 = com.alipay.sdk.m.j.b.b()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r3)
            return r4
        Ld:
            com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a     // Catch: java.lang.Throwable -> L1c
            android.app.Activity r1 = r3.a     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "pay"
            r0.<init>(r1, r4, r2)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r4 = r3.a(r0, r4, r5)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r3)
            return r4
        L1c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized boolean payInterceptorWithUrl(java.lang.String r3, boolean r4, com.alipay.sdk.app.H5PayCallback r5) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r3 = r2.fetchOrderInfoFromH5PayUrl(r3)     // Catch: java.lang.Throwable -> L36
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L36
            if (r0 != 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r0.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "intercepted: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L36
            r0.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "mspl"
            com.alipay.sdk.m.u.e.d(r1, r0)     // Catch: java.lang.Throwable -> L36
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L36
            com.alipay.sdk.app.PayTask$a r1 = new com.alipay.sdk.app.PayTask$a     // Catch: java.lang.Throwable -> L36
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L36
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L36
            r0.start()     // Catch: java.lang.Throwable -> L36
        L2e:
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L36
            r3 = r3 ^ 1
            monitor-exit(r2)
            return r3
        L36:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized java.util.Map<java.lang.String, java.lang.String> payV2(java.lang.String r4, boolean r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = com.alipay.sdk.m.u.b.a()     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto Ld
            r4 = 0
            java.lang.String r5 = com.alipay.sdk.m.j.b.b()     // Catch: java.lang.Throwable -> L21
            goto L1b
        Ld:
            com.alipay.sdk.m.s.a r0 = new com.alipay.sdk.m.s.a     // Catch: java.lang.Throwable -> L21
            android.app.Activity r1 = r3.a     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "payV2"
            r0.<init>(r1, r4, r2)     // Catch: java.lang.Throwable -> L21
            java.lang.String r5 = r3.a(r0, r4, r5)     // Catch: java.lang.Throwable -> L21
            r4 = r0
        L1b:
            java.util.Map r4 = com.alipay.sdk.m.u.l.a(r4, r5)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r3)
            return r4
        L21:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public void showLoading() {
            r1 = this;
            com.alipay.sdk.m.x.a r0 = r1.b
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }
}
