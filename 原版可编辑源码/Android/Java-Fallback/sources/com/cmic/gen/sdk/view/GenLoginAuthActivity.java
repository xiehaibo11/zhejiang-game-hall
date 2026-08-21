package com.cmic.gen.sdk.view;

public class GenLoginAuthActivity extends android.app.Activity implements android.view.View.OnClickListener {
    protected static final java.lang.String a = null;
    private java.lang.String A;
    private com.cmic.gen.sdk.view.GenAuthThemeConfig B;
    private int C;
    private int D;
    private boolean E;
    private android.app.Dialog F;
    private android.os.Handler b;
    private android.content.Context c;
    private android.widget.RelativeLayout d;
    private com.cmic.gen.sdk.view.d e;
    private com.cmic.gen.sdk.view.d f;
    private com.cmic.gen.sdk.view.d g;
    private com.cmic.gen.sdk.view.d h;
    private com.cmic.gen.sdk.view.d i;
    private java.util.ArrayList<com.cmic.gen.sdk.view.d> j;
    private java.util.ArrayList<java.lang.String> k;
    private java.lang.String[] l;
    private com.cmic.gen.sdk.a m;
    private com.cmic.gen.sdk.auth.a n;
    private java.lang.String o;
    private android.widget.CheckBox p;
    private android.widget.RelativeLayout q;
    private android.widget.RelativeLayout r;
    private long s;
    private int t;
    private com.cmic.gen.sdk.view.GenLoginAuthActivity.a u;
    private com.cmic.gen.sdk.auth.GenTokenListener v;
    private boolean w;
    private android.widget.RelativeLayout x;
    private java.lang.String y;
    private java.lang.String z;












    private static class a extends android.os.Handler {
        java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity> a;

        a(com.cmic.gen.sdk.view.GenLoginAuthActivity r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        private void a(android.os.Message r3) {
                r2 = this;
                java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity> r0 = r2.a
                java.lang.Object r0 = r0.get()
                com.cmic.gen.sdk.view.GenLoginAuthActivity r0 = (com.cmic.gen.sdk.view.GenLoginAuthActivity) r0
                if (r0 == 0) goto L15
                int r3 = r3.what
                r1 = 1
                if (r3 != r1) goto L15
                r0.c()
                com.cmic.gen.sdk.view.GenLoginAuthActivity.m(r0)
            L15:
                return
        }

        @Override
        public void handleMessage(android.os.Message r2) {
                r1 = this;
                r1.a(r2)     // Catch: java.lang.Exception -> L4
                goto Ld
            L4:
                r2 = move-exception
                java.util.ArrayList<java.lang.Throwable> r0 = com.cmic.gen.sdk.d.c.b
                r0.add(r2)
                r2.printStackTrace()
            Ld:
                return
        }
    }

    private static class b extends com.cmic.gen.sdk.e.n.a {
        java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity> a;
        java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity.c> b;


        protected b(com.cmic.gen.sdk.view.GenLoginAuthActivity r2, com.cmic.gen.sdk.view.GenLoginAuthActivity.c r3) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                r2.<init>(r3)
                r1.b = r2
                return
        }

        static boolean a(com.cmic.gen.sdk.view.GenLoginAuthActivity.b r0) {
                boolean r0 = r0.b()
                return r0
        }

        private boolean b() {
                r3 = this;
                java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity$c> r0 = r3.b
                java.lang.Object r0 = r0.get()
                com.cmic.gen.sdk.view.GenLoginAuthActivity$c r0 = (com.cmic.gen.sdk.view.GenLoginAuthActivity.c) r0
                java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity> r1 = r3.a
                java.lang.Object r1 = r1.get()
                r2 = 0
                if (r1 == 0) goto L19
                if (r0 != 0) goto L14
                goto L19
            L14:
                boolean r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.c.a(r0, r2)
                return r0
            L19:
                return r2
        }

        @Override
        protected void a() {
                r4 = this;
                java.lang.ref.WeakReference<com.cmic.gen.sdk.view.GenLoginAuthActivity> r0 = r4.a
                java.lang.Object r0 = r0.get()
                com.cmic.gen.sdk.view.GenLoginAuthActivity r0 = (com.cmic.gen.sdk.view.GenLoginAuthActivity) r0
                com.cmic.gen.sdk.a r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.n(r0)
                java.lang.String r2 = "logintype"
                r3 = 1
                r1.a(r2, r3)
                r1 = 0
                com.cmic.gen.sdk.e.h.a(r3, r1)
                com.cmic.gen.sdk.auth.a r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.o(r0)
                com.cmic.gen.sdk.a r2 = com.cmic.gen.sdk.view.GenLoginAuthActivity.n(r0)
                com.cmic.gen.sdk.view.GenLoginAuthActivity$b$1 r3 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$b$1
                r3.<init>(r4, r0)
                r1.b(r2, r3)
                return
        }
    }

    private class c implements java.lang.Runnable {
        final com.cmic.gen.sdk.view.GenLoginAuthActivity a;
        private com.cmic.gen.sdk.a b;
        private boolean c;

        c(com.cmic.gen.sdk.view.GenLoginAuthActivity r1, com.cmic.gen.sdk.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        static boolean a(com.cmic.gen.sdk.view.GenLoginAuthActivity.c r0, boolean r1) {
                boolean r0 = r0.a(r1)
                return r0
        }

        private synchronized boolean a(boolean r2) {
                r1 = this;
                monitor-enter(r1)
                boolean r0 = r1.c     // Catch: java.lang.Throwable -> L9
                r1.c = r2     // Catch: java.lang.Throwable -> L9
                r2 = r0 ^ 1
                monitor-exit(r1)
                return r2
            L9:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        @Override
        public void run() {
                r9 = this;
                java.lang.String r0 = "请求超时"
                java.lang.String r1 = "102507"
                r2 = 1
                boolean r3 = r9.a(r2)
                if (r3 == 0) goto L52
                org.json.JSONObject r3 = new org.json.JSONObject
                r3.<init>()
                java.lang.String r4 = "resultCode"
                r3.put(r4, r1)     // Catch: org.json.JSONException -> L1b
                java.lang.String r4 = "resultString"
                r3.put(r4, r0)     // Catch: org.json.JSONException -> L1b
                goto L1f
            L1b:
                r4 = move-exception
                r4.printStackTrace()
            L1f:
                com.cmic.gen.sdk.view.GenLoginAuthActivity r4 = r9.a
                r5 = 0
                com.cmic.gen.sdk.view.GenLoginAuthActivity.b(r4, r5)
                java.lang.String r4 = "authClickFailed"
                com.cmic.gen.sdk.d.a.a(r4)
                com.cmic.gen.sdk.view.GenLoginAuthActivity r4 = r9.a
                com.cmic.gen.sdk.view.GenLoginAuthActivity$a r4 = com.cmic.gen.sdk.view.GenLoginAuthActivity.k(r4)
                r4.sendEmptyMessage(r2)
                com.cmic.gen.sdk.a r2 = r9.b
                java.lang.String r4 = "loginTime"
                r5 = 0
                long r7 = r2.b(r4, r5)
                int r2 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
                if (r2 == 0) goto L4b
                com.cmic.gen.sdk.a r2 = r9.b
                long r5 = java.lang.System.currentTimeMillis()
                long r5 = r5 - r7
                r2.a(r4, r5)
            L4b:
                com.cmic.gen.sdk.view.GenLoginAuthActivity r2 = r9.a
                com.cmic.gen.sdk.a r4 = r9.b
                com.cmic.gen.sdk.view.GenLoginAuthActivity.a(r2, r1, r0, r4, r3)
            L52:
                return
        }
    }

    static {
            java.lang.Class<com.cmic.gen.sdk.view.GenLoginAuthActivity> r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.class
            java.lang.String r0 = r0.getSimpleName()
            com.cmic.gen.sdk.view.GenLoginAuthActivity.a = r0
            return
    }

    public GenLoginAuthActivity() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.o = r0
            r1 = 0
            r3.s = r1
            r1 = 0
            r3.t = r1
            r1 = 0
            r3.u = r1
            r1 = 1
            r3.w = r1
            r3.A = r0
            return
    }

    static int a(com.cmic.gen.sdk.view.GenLoginAuthActivity r1, int r2) {
            int r0 = r1.t
            int r0 = r0 + r2
            r1.t = r0
            return r0
    }

    static com.cmic.gen.sdk.view.d a(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.d r0 = r0.e
            return r0
    }

    static void a(com.cmic.gen.sdk.view.GenLoginAuthActivity r0, java.lang.String r1, java.lang.String r2, com.cmic.gen.sdk.a r3, org.json.JSONObject r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.cmic.gen.sdk.view.GenLoginAuthActivity r0, boolean r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r5, java.lang.String r6, com.cmic.gen.sdk.a r7, org.json.JSONObject r8) {
            r4 = this;
            android.os.Handler r0 = r4.b     // Catch: java.lang.Exception -> L76
            if (r0 != 0) goto L16
            android.os.Handler r0 = new android.os.Handler     // Catch: java.lang.Exception -> L76
            android.os.Looper r1 = r4.getMainLooper()     // Catch: java.lang.Exception -> L76
            r0.<init>(r1)     // Catch: java.lang.Exception -> L76
            r4.b = r0     // Catch: java.lang.Exception -> L76
            com.cmic.gen.sdk.view.GenLoginAuthActivity$a r0 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$a     // Catch: java.lang.Exception -> L76
            r0.<init>(r4)     // Catch: java.lang.Exception -> L76
            r4.u = r0     // Catch: java.lang.Exception -> L76
        L16:
            android.os.Handler r0 = r4.b     // Catch: java.lang.Exception -> L76
            r1 = 0
            r0.removeCallbacksAndMessages(r1)     // Catch: java.lang.Exception -> L76
            java.lang.String r0 = "103000"
            boolean r0 = r0.equals(r5)     // Catch: java.lang.Exception -> L76
            r1 = 1
            java.lang.String r2 = "keepListener"
            java.lang.String r3 = "traceId"
            if (r0 == 0) goto L44
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L76
            if (r0 == 0) goto L81
            java.lang.String r0 = r7.b(r3)     // Catch: java.lang.Exception -> L76
            com.cmic.gen.sdk.auth.GenTokenListener r0 = com.cmic.gen.sdk.e.e.c(r0)     // Catch: java.lang.Exception -> L76
            if (r0 == 0) goto L81
            r7.a(r2, r1)     // Catch: java.lang.Exception -> L76
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L76
            r0.callBackResult(r5, r6, r7, r8)     // Catch: java.lang.Exception -> L76
            goto L81
        L44:
            java.lang.String r0 = "200020"
            boolean r0 = r0.equals(r5)     // Catch: java.lang.Exception -> L76
            if (r0 == 0) goto L6b
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L76
            if (r0 == 0) goto L81
            java.lang.String r0 = r7.b(r3)     // Catch: java.lang.Exception -> L76
            com.cmic.gen.sdk.auth.GenTokenListener r0 = com.cmic.gen.sdk.e.e.c(r0)     // Catch: java.lang.Exception -> L76
            if (r0 == 0) goto L67
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L76
            r0.callBackResult(r5, r6, r7, r8)     // Catch: java.lang.Exception -> L76
            r4.a()     // Catch: java.lang.Exception -> L76
            goto L81
        L67:
            r4.a()     // Catch: java.lang.Exception -> L76
            goto L81
        L6b:
            r7.a(r2, r1)     // Catch: java.lang.Exception -> L76
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L76
            r0.callBackResult(r5, r6, r7, r8)     // Catch: java.lang.Exception -> L76
            goto L81
        L76:
            r5 = move-exception
            java.lang.String r6 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r7 = "CallbackResult:未知错误"
            com.cmic.gen.sdk.e.c.a(r6, r7)
            r5.printStackTrace()
        L81:
            return
    }

    private void a(boolean r4) {
            r3 = this;
            java.lang.String r4 = "authPageOut"
            com.cmic.gen.sdk.d.a.a(r4)     // Catch: java.lang.Exception -> L10
            java.lang.String r4 = "200020"
            java.lang.String r0 = "登录页面关闭"
            com.cmic.gen.sdk.a r1 = r3.m     // Catch: java.lang.Exception -> L10
            r2 = 0
            r3.a(r4, r0, r1, r2)     // Catch: java.lang.Exception -> L10
            goto L19
        L10:
            r4 = move-exception
            java.util.ArrayList<java.lang.Throwable> r0 = com.cmic.gen.sdk.d.c.b
            r0.add(r4)
            r4.printStackTrace()
        L19:
            return
    }

    static com.cmic.gen.sdk.view.d b(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.d r0 = r0.f
            return r0
    }

    static boolean b(com.cmic.gen.sdk.view.GenLoginAuthActivity r0, boolean r1) {
            r0.w = r1
            return r1
    }

    static com.cmic.gen.sdk.view.d c(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.d r0 = r0.g
            return r0
    }

    static com.cmic.gen.sdk.view.d d(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.d r0 = r0.h
            return r0
    }

    private void d() {
            r7 = this;
            android.content.Intent r0 = r7.getIntent()
            java.lang.String r1 = "traceId"
            java.lang.String r0 = r0.getStringExtra(r1)
            com.cmic.gen.sdk.a r0 = com.cmic.gen.sdk.e.e.d(r0)
            r7.m = r0
            r2 = 0
            if (r0 != 0) goto L1a
            com.cmic.gen.sdk.a r0 = new com.cmic.gen.sdk.a
            r0.<init>(r2)
            r7.m = r0
        L1a:
            com.cmic.gen.sdk.a r0 = r7.m
            java.lang.String r3 = ""
            java.lang.String r0 = r0.b(r1, r3)
            com.cmic.gen.sdk.auth.GenTokenListener r0 = com.cmic.gen.sdk.e.e.c(r0)
            r7.v = r0
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.WindowManager r1 = r7.getWindowManager()
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = r7.getMainLooper()
            r0.<init>(r1)
            r7.b = r0
            com.cmic.gen.sdk.view.GenLoginAuthActivity$a r0 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$a
            r0.<init>(r7)
            r7.u = r0
            com.cmic.gen.sdk.a r0 = r7.m
            java.lang.String r1 = "securityphone"
            java.lang.String r0 = r0.b(r1)
            r7.o = r0
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "mSecurityPhone value is "
            r1.append(r4)
            java.lang.String r4 = r7.o
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.cmic.gen.sdk.e.c.b(r0, r1)
            com.cmic.gen.sdk.a r0 = r7.m
            java.lang.String r1 = "operatortype"
            java.lang.String r0 = r0.b(r1, r3)
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "operator value is "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.cmic.gen.sdk.e.c.b(r1, r3)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            int r1 = r1.getAppLanguageType()
            r3 = 2
            r4 = 1
            if (r1 != r4) goto L9f
            java.lang.String[] r1 = com.cmic.gen.sdk.c.b
            r7.l = r1
            java.lang.String[] r1 = com.cmic.gen.sdk.c.e
            r1 = r1[r4]
            r7.A = r1
            goto Lbc
        L9f:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            int r1 = r1.getAppLanguageType()
            if (r1 != r3) goto Lb2
            java.lang.String[] r1 = com.cmic.gen.sdk.c.c
            r7.l = r1
            java.lang.String[] r1 = com.cmic.gen.sdk.c.e
            r1 = r1[r3]
            r7.A = r1
            goto Lbc
        Lb2:
            java.lang.String[] r1 = com.cmic.gen.sdk.c.a
            r7.l = r1
            java.lang.String[] r1 = com.cmic.gen.sdk.c.e
            r1 = r1[r2]
            r7.A = r1
        Lbc:
            java.lang.String r1 = "1"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lcd
            java.lang.String[] r0 = r7.l
            r0 = r0[r2]
            r7.y = r0
            java.lang.String r0 = "https://wap.cmpassport.com/resources/html/contract.html"
            goto Le6
        Lcd:
            java.lang.String r1 = "3"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lde
            java.lang.String[] r0 = r7.l
            r0 = r0[r4]
            r7.y = r0
            java.lang.String r0 = "https://e.189.cn/sdk/agreement/detail.do?hidetop=true"
            goto Le6
        Lde:
            java.lang.String[] r0 = r7.l
            r0 = r0[r3]
            r7.y = r0
            java.lang.String r0 = "https://opencloud.wostore.cn/authz/resource/html/disclaimer.html?fromsdk=true"
        Le6:
            com.cmic.gen.sdk.view.d r1 = new com.cmic.gen.sdk.view.d
            android.content.Context r3 = r7.c
            java.lang.String r5 = r7.y
            r6 = 16973840(0x1030010, float:2.4060945E-38)
            r1.<init>(r3, r6, r5, r0)
            r7.e = r1
            com.cmic.gen.sdk.view.GenLoginAuthActivity$1 r0 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$1
            r0.<init>(r7)
            r1.setOnKeyListener(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r7.j = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r7.k = r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            java.lang.String r0 = r0.getClauseUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L145
            com.cmic.gen.sdk.view.d r0 = new com.cmic.gen.sdk.view.d
            android.content.Context r1 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            java.lang.String r3 = r3.getClauseName()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            java.lang.String r5 = r5.getClauseUrl()
            r0.<init>(r1, r6, r3, r5)
            r7.f = r0
            com.cmic.gen.sdk.view.GenLoginAuthActivity$4 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$4
            r1.<init>(r7)
            r0.setOnKeyListener(r1)
            java.util.ArrayList<com.cmic.gen.sdk.view.d> r0 = r7.j
            com.cmic.gen.sdk.view.d r1 = r7.f
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = r7.k
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            java.lang.String r1 = r1.getClauseName()
            r0.add(r1)
        L145:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            java.lang.String r0 = r0.getClauseUrl2()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L180
            com.cmic.gen.sdk.view.d r0 = new com.cmic.gen.sdk.view.d
            android.content.Context r1 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            java.lang.String r3 = r3.getClauseName2()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            java.lang.String r5 = r5.getClauseUrl2()
            r0.<init>(r1, r6, r3, r5)
            r7.g = r0
            com.cmic.gen.sdk.view.GenLoginAuthActivity$5 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$5
            r1.<init>(r7)
            r0.setOnKeyListener(r1)
            java.util.ArrayList<com.cmic.gen.sdk.view.d> r0 = r7.j
            com.cmic.gen.sdk.view.d r1 = r7.g
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = r7.k
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            java.lang.String r1 = r1.getClauseName2()
            r0.add(r1)
        L180:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            java.lang.String r0 = r0.getClauseUrl3()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1bb
            com.cmic.gen.sdk.view.d r0 = new com.cmic.gen.sdk.view.d
            android.content.Context r1 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            java.lang.String r3 = r3.getClauseName3()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            java.lang.String r5 = r5.getClauseUrl3()
            r0.<init>(r1, r6, r3, r5)
            r7.h = r0
            com.cmic.gen.sdk.view.GenLoginAuthActivity$6 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$6
            r1.<init>(r7)
            r0.setOnKeyListener(r1)
            java.util.ArrayList<com.cmic.gen.sdk.view.d> r0 = r7.j
            com.cmic.gen.sdk.view.d r1 = r7.h
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = r7.k
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            java.lang.String r1 = r1.getClauseName3()
            r0.add(r1)
        L1bb:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            java.lang.String r0 = r0.getClauseUrl4()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f6
            com.cmic.gen.sdk.view.d r0 = new com.cmic.gen.sdk.view.d
            android.content.Context r1 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            java.lang.String r3 = r3.getClauseName4()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            java.lang.String r5 = r5.getClauseUrl4()
            r0.<init>(r1, r6, r3, r5)
            r7.i = r0
            com.cmic.gen.sdk.view.GenLoginAuthActivity$7 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$7
            r1.<init>(r7)
            r0.setOnKeyListener(r1)
            java.util.ArrayList<com.cmic.gen.sdk.view.d> r0 = r7.j
            com.cmic.gen.sdk.view.d r1 = r7.i
            r0.add(r1)
            java.util.ArrayList<java.lang.String> r0 = r7.k
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            java.lang.String r1 = r1.getClauseName4()
            r0.add(r1)
        L1f6:
            r7.j()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            boolean r0 = r0.isPrivacyBookSymbol()
            if (r0 == 0) goto L232
            r0 = 0
        L202:
            java.util.ArrayList<java.lang.String> r1 = r7.k
            int r1 = r1.size()
            if (r0 >= r1) goto L232
            java.lang.Object[] r1 = new java.lang.Object[r4]
            java.util.ArrayList<java.lang.String> r3 = r7.k
            java.lang.Object r3 = r3.get(r0)
            r1[r2] = r3
            java.lang.String r3 = "《%s》"
            java.lang.String r1 = java.lang.String.format(r3, r1)
            java.lang.String r3 = r7.z
            java.util.ArrayList<java.lang.String> r5 = r7.k
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r3 = r3.replaceFirst(r5, r1)
            r7.z = r3
            java.util.ArrayList<java.lang.String> r3 = r7.k
            r3.set(r0, r1)
            int r0 = r0 + 1
            goto L202
        L232:
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()
            com.cmic.gen.sdk.view.GenLoginAuthActivity$8 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$8
            r1.<init>(r7)
            r0.a(r1)
            return
    }

    static com.cmic.gen.sdk.view.d e(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.d r0 = r0.i
            return r0
    }

    private void e() {
            r11 = this;
            android.widget.RelativeLayout r0 = r11.r
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getNumFieldOffsetY()
            r2 = 10
            r3 = 12
            r4 = -1
            r5 = 0
            if (r1 > 0) goto L5f
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getNumFieldOffsetY_B()
            if (r1 >= 0) goto L1f
            goto L5f
        L1f:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getNumFieldOffsetY_B()
            if (r1 <= 0) goto L5b
            int r1 = r11.C
            android.widget.RelativeLayout r6 = r11.r
            int r6 = r6.getMeasuredHeight()
            int r1 = r1 - r6
            android.content.Context r6 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getNumFieldOffsetY_B()
            float r7 = (float) r7
            int r6 = com.cmic.gen.sdk.view.e.a(r6, r7)
            int r1 = r1 - r6
            if (r1 <= 0) goto L5b
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r6 = "numberField_bottom"
            com.cmic.gen.sdk.e.c.b(r1, r6)
            r0.addRule(r3, r4)
            android.content.Context r1 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r6 = r11.B
            int r6 = r6.getNumFieldOffsetY_B()
            float r6 = (float) r6
            int r1 = com.cmic.gen.sdk.view.e.a(r1, r6)
            r0.setMargins(r5, r5, r5, r1)
            goto Lc3
        L5b:
            r0.addRule(r2, r4)
            goto Lc3
        L5f:
            int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r5)
            android.widget.RelativeLayout r6 = r11.r
            r6.measure(r1, r1)
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "mPhoneLayout.getMeasuredHeight()="
            r6.append(r7)
            android.widget.RelativeLayout r7 = r11.r
            int r7 = r7.getMeasuredHeight()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.cmic.gen.sdk.e.c.b(r1, r6)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getNumFieldOffsetY()
            if (r1 <= 0) goto Lc0
            int r1 = r11.C
            android.widget.RelativeLayout r6 = r11.r
            int r6 = r6.getMeasuredHeight()
            int r1 = r1 - r6
            android.content.Context r6 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getNumFieldOffsetY()
            float r7 = (float) r7
            int r6 = com.cmic.gen.sdk.view.e.a(r6, r7)
            int r1 = r1 - r6
            if (r1 <= 0) goto Lc0
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r6 = "numberField_top"
            com.cmic.gen.sdk.e.c.b(r1, r6)
            r0.addRule(r2, r4)
            android.content.Context r1 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r6 = r11.B
            int r6 = r6.getNumFieldOffsetY()
            float r6 = (float) r6
            int r1 = com.cmic.gen.sdk.view.e.a(r1, r6)
            r0.setMargins(r5, r1, r5, r5)
            goto Lc3
        Lc0:
            r0.addRule(r3, r4)
        Lc3:
            android.widget.RelativeLayout r1 = r11.r
            r1.setLayoutParams(r0)
            android.widget.RelativeLayout r0 = r11.d
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getLogBtnMarginLeft()
            int r1 = java.lang.Math.max(r1, r5)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r6 = r11.B
            int r6 = r6.getLogBtnMarginRight()
            int r6 = java.lang.Math.max(r6, r5)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getLogBtnOffsetY()
            if (r7 > 0) goto L154
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getLogBtnOffsetY_B()
            if (r7 >= 0) goto Lf5
            goto L154
        Lf5:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getLogBtnOffsetY_B()
            if (r7 <= 0) goto L13f
            int r7 = r11.C
            android.content.Context r8 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r9 = r11.B
            int r9 = r9.getLogBtnHeight()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r10 = r11.B
            int r10 = r10.getLogBtnOffsetY_B()
            int r9 = r9 + r10
            float r9 = (float) r9
            int r8 = com.cmic.gen.sdk.view.e.a(r8, r9)
            int r7 = r7 - r8
            if (r7 <= 0) goto L13f
            java.lang.String r7 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r8 = "logBtn_bottom"
            com.cmic.gen.sdk.e.c.b(r7, r8)
            r0.addRule(r3, r4)
            android.content.Context r7 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r7, r1)
            android.content.Context r7 = r11.c
            float r6 = (float) r6
            int r6 = com.cmic.gen.sdk.view.e.a(r7, r6)
            android.content.Context r7 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r8 = r11.B
            int r8 = r8.getLogBtnOffsetY_B()
            float r8 = (float) r8
            int r7 = com.cmic.gen.sdk.view.e.a(r7, r8)
            r0.setMargins(r1, r5, r6, r7)
            goto L1b2
        L13f:
            r0.addRule(r2, r4)
            android.content.Context r7 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r7, r1)
            android.content.Context r7 = r11.c
            float r6 = (float) r6
            int r6 = com.cmic.gen.sdk.view.e.a(r7, r6)
            r0.setMargins(r1, r5, r6, r5)
            goto L1b2
        L154:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getLogBtnOffsetY()
            if (r7 <= 0) goto L19e
            int r7 = r11.C
            android.content.Context r8 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r9 = r11.B
            int r9 = r9.getLogBtnHeight()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r10 = r11.B
            int r10 = r10.getLogBtnOffsetY()
            int r9 = r9 + r10
            float r9 = (float) r9
            int r8 = com.cmic.gen.sdk.view.e.a(r8, r9)
            int r7 = r7 - r8
            if (r7 <= 0) goto L19e
            java.lang.String r7 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r8 = "logBtn_top"
            com.cmic.gen.sdk.e.c.b(r7, r8)
            r0.addRule(r2, r4)
            android.content.Context r7 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r7, r1)
            android.content.Context r7 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r8 = r11.B
            int r8 = r8.getLogBtnOffsetY()
            float r8 = (float) r8
            int r7 = com.cmic.gen.sdk.view.e.a(r7, r8)
            android.content.Context r8 = r11.c
            float r6 = (float) r6
            int r6 = com.cmic.gen.sdk.view.e.a(r8, r6)
            r0.setMargins(r1, r7, r6, r5)
            goto L1b2
        L19e:
            r0.addRule(r3, r4)
            android.content.Context r7 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r7, r1)
            android.content.Context r7 = r11.c
            float r6 = (float) r6
            int r6 = com.cmic.gen.sdk.view.e.a(r7, r6)
            r0.setMargins(r1, r5, r6, r5)
        L1b2:
            android.widget.RelativeLayout r1 = r11.d
            r1.setLayoutParams(r0)
            android.widget.RelativeLayout r0 = r11.q
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getPrivacyMarginLeft()
            r6 = 30
            if (r1 < 0) goto L1e7
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getCheckedImgWidth()
            if (r1 <= r6) goto L1d8
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getPrivacyMarginLeft()
            goto L1f9
        L1d8:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getPrivacyMarginLeft()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getCheckedImgWidth()
            int r6 = r6 - r7
            int r1 = r1 - r6
            goto L1f9
        L1e7:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getCheckedImgWidth()
            if (r1 <= r6) goto L1f1
            r1 = 0
            goto L1f9
        L1f1:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r11.B
            int r1 = r1.getCheckedImgWidth()
            int r6 = r6 - r1
            int r1 = -r6
        L1f9:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r6 = r11.B
            int r6 = r6.getPrivacyMarginRight()
            int r6 = java.lang.Math.max(r6, r5)
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r5)
            android.widget.RelativeLayout r8 = r11.q
            r8.measure(r7, r7)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getPrivacyOffsetY()
            java.lang.String r8 = "privacy_bottom="
            if (r7 > 0) goto L29b
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getPrivacyOffsetY_B()
            if (r7 >= 0) goto L220
            goto L29b
        L220:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getPrivacyOffsetY_B()
            if (r7 <= 0) goto L27e
            int r7 = r11.C
            android.widget.RelativeLayout r9 = r11.q
            int r9 = r9.getMeasuredHeight()
            int r7 = r7 - r9
            android.content.Context r9 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r10 = r11.B
            int r10 = r10.getPrivacyOffsetY_B()
            float r10 = (float) r10
            int r9 = com.cmic.gen.sdk.view.e.a(r9, r10)
            int r7 = r7 - r9
            if (r7 <= 0) goto L27e
            java.lang.String r2 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r8)
            android.widget.RelativeLayout r8 = r11.q
            int r8 = r8.getMeasuredHeight()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.cmic.gen.sdk.e.c.b(r2, r7)
            r0.addRule(r3, r4)
            android.content.Context r2 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r2, r1)
            android.content.Context r2 = r11.c
            float r3 = (float) r6
            int r2 = com.cmic.gen.sdk.view.e.a(r2, r3)
            android.content.Context r3 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r11.B
            int r4 = r4.getPrivacyOffsetY_B()
            float r4 = (float) r4
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r4)
            r0.setMargins(r1, r5, r2, r3)
            goto L322
        L27e:
            r0.addRule(r2, r4)
            android.content.Context r2 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r2, r1)
            android.content.Context r2 = r11.c
            float r3 = (float) r6
            int r2 = com.cmic.gen.sdk.view.e.a(r2, r3)
            r0.setMargins(r1, r5, r2, r5)
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r2 = "privacy_top"
            com.cmic.gen.sdk.e.c.b(r1, r2)
            goto L322
        L29b:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r7 = r11.B
            int r7 = r7.getPrivacyOffsetY()
            if (r7 <= 0) goto L2fa
            int r7 = r11.C
            android.widget.RelativeLayout r9 = r11.q
            int r9 = r9.getMeasuredHeight()
            int r7 = r7 - r9
            android.content.Context r9 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r10 = r11.B
            int r10 = r10.getPrivacyOffsetY()
            float r10 = (float) r10
            int r9 = com.cmic.gen.sdk.view.e.a(r9, r10)
            int r7 = r7 - r9
            if (r7 <= 0) goto L2fa
            java.lang.String r3 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "privacy_top = "
            r7.append(r8)
            android.widget.RelativeLayout r8 = r11.q
            int r8 = r8.getMeasuredHeight()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.cmic.gen.sdk.e.c.b(r3, r7)
            r0.addRule(r2, r4)
            android.content.Context r2 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r2, r1)
            android.content.Context r2 = r11.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r11.B
            int r3 = r3.getPrivacyOffsetY()
            float r3 = (float) r3
            int r2 = com.cmic.gen.sdk.view.e.a(r2, r3)
            android.content.Context r3 = r11.c
            float r4 = (float) r6
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r4)
            r0.setMargins(r1, r2, r3, r5)
            goto L322
        L2fa:
            java.lang.String r2 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r8)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            com.cmic.gen.sdk.e.c.b(r2, r7)
            r0.addRule(r3, r4)
            android.content.Context r2 = r11.c
            float r1 = (float) r1
            int r1 = com.cmic.gen.sdk.view.e.a(r2, r1)
            android.content.Context r2 = r11.c
            float r3 = (float) r6
            int r2 = com.cmic.gen.sdk.view.e.a(r2, r3)
            r0.setMargins(r1, r5, r2, r5)
        L322:
            android.widget.RelativeLayout r1 = r11.q
            r1.setLayoutParams(r0)
            return
    }

    static android.os.Handler f(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            android.os.Handler r0 = r0.b
            return r0
    }

    private void f() {
            r7 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L4a
            android.view.Window r0 = r7.getWindow()
            r1 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r1)
            android.view.Window r0 = r7.getWindow()
            r2 = 134217728(0x8000000, float:3.85186E-34)
            r0.addFlags(r2)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            int r0 = r0.getStatusBarColor()
            if (r0 == 0) goto L4a
            android.view.Window r0 = r7.getWindow()
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.addFlags(r2)
            android.view.Window r0 = r7.getWindow()
            r0.clearFlags(r1)
            android.view.Window r0 = r7.getWindow()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            int r1 = r1.getStatusBarColor()
            r0.setStatusBarColor(r1)
            android.view.Window r0 = r7.getWindow()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            int r1 = r1.getStatusBarColor()
            r0.setNavigationBarColor(r1)
        L4a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            r2 = 0
            if (r0 < r1) goto L72
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B
            boolean r0 = r0.isLightColor()
            if (r0 == 0) goto L67
            android.view.Window r0 = r7.getWindow()
            android.view.View r0 = r0.getDecorView()
            r1 = 8192(0x2000, float:1.148E-41)
            r0.setSystemUiVisibility(r1)
            goto L72
        L67:
            android.view.Window r0 = r7.getWindow()
            android.view.View r0 = r0.getDecorView()
            r0.setSystemUiVisibility(r2)
        L72:
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r7)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r3 = -1
            r1.<init>(r3, r3)
            r0.setLayoutParams(r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            android.view.View r1 = r1.getContentView()
            if (r1 == 0) goto L97
            android.view.ViewParent r3 = r1.getParent()
            if (r3 == 0) goto L93
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r3.removeView(r1)
        L93:
            r0.addView(r1)
            goto Lac
        L97:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            int r1 = r1.getLayoutResID()
            if (r1 == r3) goto Lac
            android.view.LayoutInflater r1 = r7.getLayoutInflater()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            int r3 = r3.getLayoutResID()
            r1.inflate(r3, r0)
        Lac:
            r7.setContentView(r0)
            int r1 = r7.getRequestedOrientation()
            android.content.Context r3 = r7.c
            int r3 = com.cmic.gen.sdk.view.e.b(r3)
            r7.C = r3
            android.content.Context r3 = r7.c
            int r3 = com.cmic.gen.sdk.view.e.a(r3)
            r7.D = r3
            r4 = 1
            if (r1 != r4) goto Lca
            int r5 = r7.C
            if (r3 > r5) goto Ld2
        Lca:
            if (r1 != 0) goto Lda
            int r3 = r7.D
            int r5 = r7.C
            if (r3 >= r5) goto Lda
        Ld2:
            int r3 = r7.D
            int r5 = r7.C
            r7.D = r5
            r7.C = r3
        Lda:
            java.lang.String r3 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "orientation = "
            r5.append(r6)
            r5.append(r1)
            java.lang.String r1 = "--screenWidth = "
            r5.append(r1)
            int r1 = r7.D
            r5.append(r1)
            java.lang.String r1 = "--screenHeight = "
            r5.append(r1)
            int r1 = r7.C
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            com.cmic.gen.sdk.e.c.b(r3, r1)
            android.view.Window r1 = r7.getWindow()
            android.view.WindowManager$LayoutParams r1 = r1.getAttributes()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            int r3 = r3.getWindowWidth()
            if (r3 == 0) goto L195
            android.util.DisplayMetrics r3 = new android.util.DisplayMetrics
            r3.<init>()
            android.view.Window r5 = r7.getWindow()
            android.view.WindowManager r5 = r5.getWindowManager()
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getMetrics(r3)
            android.graphics.Point r3 = new android.graphics.Point
            r3.<init>()
            android.view.WindowManager r5 = r7.getWindowManager()
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getSize(r3)
            android.content.Context r3 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            int r5 = r5.getWindowWidth()
            float r5 = (float) r5
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r5)
            r1.width = r3
            android.content.Context r3 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            int r5 = r5.getWindowHeight()
            float r5 = (float) r5
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r5)
            r1.height = r3
            int r3 = r1.width
            r7.D = r3
            int r3 = r1.height
            r7.C = r3
            android.content.Context r3 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            int r5 = r5.getWindowX()
            float r5 = (float) r5
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r5)
            r1.x = r3
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r7.B
            int r3 = r3.getWindowBottom()
            if (r3 != r4) goto L17f
            android.view.Window r3 = r7.getWindow()
            r5 = 80
            r3.setGravity(r5)
            goto L18e
        L17f:
            android.content.Context r3 = r7.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r5 = r7.B
            int r5 = r5.getWindowY()
            float r5 = (float) r5
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r5)
            r1.y = r3
        L18e:
            android.view.Window r3 = r7.getWindow()
            r3.setAttributes(r1)
        L195:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B
            boolean r1 = r1.isFitsSystemWindows()
            r0.setFitsSystemWindows(r1)
            r0.setClipToPadding(r4)
            r7.g()     // Catch: java.lang.Exception -> L259
            android.widget.RelativeLayout r1 = r7.r     // Catch: java.lang.Exception -> L259
            r0.addView(r1)     // Catch: java.lang.Exception -> L259
            android.widget.RelativeLayout r1 = r7.h()     // Catch: java.lang.Exception -> L259
            r0.addView(r1)     // Catch: java.lang.Exception -> L259
            android.widget.RelativeLayout r1 = r7.i()     // Catch: java.lang.Exception -> L259
            r0.addView(r1)     // Catch: java.lang.Exception -> L259
            r7.e()     // Catch: java.lang.Exception -> L259
            android.widget.RelativeLayout r0 = r7.d     // Catch: java.lang.Exception -> L259
            r0.setOnClickListener(r7)     // Catch: java.lang.Exception -> L259
            android.widget.RelativeLayout r0 = r7.x     // Catch: java.lang.Exception -> L259
            r0.setOnClickListener(r7)     // Catch: java.lang.Exception -> L259
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L259
            com.cmic.gen.sdk.view.GenLoginAuthActivity$9 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$9     // Catch: java.lang.Exception -> L259
            r1.<init>(r7)     // Catch: java.lang.Exception -> L259
            r0.setOnCheckedChangeListener(r1)     // Catch: java.lang.Exception -> L259
            r7.k()     // Catch: java.lang.Exception -> L259
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r7.B     // Catch: java.lang.Exception -> L253
            boolean r0 = r0.isPrivacyState()     // Catch: java.lang.Exception -> L253
            if (r0 == 0) goto L20b
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            r0.setChecked(r4)     // Catch: java.lang.Exception -> L253
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B     // Catch: java.lang.Exception -> L253
            java.lang.String r1 = r1.getCheckedImgPath()     // Catch: java.lang.Exception -> L253
            int r1 = com.cmic.gen.sdk.view.c.b(r7, r1)     // Catch: java.lang.Exception -> L253
            r0.setBackgroundResource(r1)     // Catch: java.lang.Exception -> L253
            android.widget.RelativeLayout r0 = r7.d     // Catch: java.lang.Exception -> L253
            r0.setEnabled(r4)     // Catch: java.lang.Exception -> L253
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L253
            r1.<init>()     // Catch: java.lang.Exception -> L253
            java.lang.String r3 = "复选框 已勾选 "
            r1.append(r3)     // Catch: java.lang.Exception -> L253
            java.lang.String r3 = r7.z     // Catch: java.lang.Exception -> L253
            r1.append(r3)     // Catch: java.lang.Exception -> L253
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L253
            r0.setContentDescription(r1)     // Catch: java.lang.Exception -> L253
            goto L275
        L20b:
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            r0.setChecked(r2)     // Catch: java.lang.Exception -> L253
            android.widget.RelativeLayout r0 = r7.d     // Catch: java.lang.Exception -> L253
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B     // Catch: java.lang.Exception -> L253
            com.cmic.gen.sdk.view.GenCheckBoxListener r1 = r1.getGenCheckBoxListener()     // Catch: java.lang.Exception -> L253
            if (r1 != 0) goto L228
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B     // Catch: java.lang.Exception -> L253
            java.lang.String r1 = r1.getCheckTipText()     // Catch: java.lang.Exception -> L253
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L253
            if (r1 != 0) goto L227
            goto L228
        L227:
            r4 = 0
        L228:
            r0.setEnabled(r4)     // Catch: java.lang.Exception -> L253
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B     // Catch: java.lang.Exception -> L253
            java.lang.String r1 = r1.getUncheckedImgPath()     // Catch: java.lang.Exception -> L253
            int r1 = com.cmic.gen.sdk.view.c.b(r7, r1)     // Catch: java.lang.Exception -> L253
            r0.setBackgroundResource(r1)     // Catch: java.lang.Exception -> L253
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L253
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L253
            r1.<init>()     // Catch: java.lang.Exception -> L253
            java.lang.String r3 = "复选框 请双击勾选 "
            r1.append(r3)     // Catch: java.lang.Exception -> L253
            java.lang.String r3 = r7.z     // Catch: java.lang.Exception -> L253
            r1.append(r3)     // Catch: java.lang.Exception -> L253
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L253
            r0.setContentDescription(r1)     // Catch: java.lang.Exception -> L253
            goto L275
        L253:
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L259
            r0.setChecked(r2)     // Catch: java.lang.Exception -> L259
            goto L275
        L259:
            r0 = move-exception
            java.util.ArrayList<java.lang.Throwable> r1 = com.cmic.gen.sdk.d.c.b
            r1.add(r0)
            r0.printStackTrace()
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.c.a(r1, r0)
            com.cmic.gen.sdk.a r0 = r7.m
            r1 = 0
            java.lang.String r2 = "200040"
            java.lang.String r3 = "UI资源加载异常"
            r7.a(r2, r3, r0, r1)
        L275:
            return
    }

    static com.cmic.gen.sdk.view.GenAuthThemeConfig g(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.B
            return r0
    }

    private void g() {
            r7 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r7)
            r7.r = r0
            r1 = 13107(0x3333, float:1.8367E-41)
            r0.setId(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
            android.widget.RelativeLayout r1 = r7.r
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r7)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r2, r2)
            r2 = 15
            r0.setGravity(r2)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r7.B
            int r2 = r2.getNumberOffsetX()
            r3 = 0
            if (r2 != 0) goto L36
            r2 = 13
            r1.addRule(r2)
            goto L5f
        L36:
            if (r2 <= 0) goto L5f
            int r4 = r7.D
            int r5 = r0.getWidth()
            int r4 = r4 - r5
            android.content.Context r5 = r7.c
            float r2 = (float) r2
            int r5 = com.cmic.gen.sdk.view.e.a(r5, r2)
            int r4 = r4 - r5
            if (r4 <= 0) goto L53
            android.content.Context r4 = r7.c
            int r2 = com.cmic.gen.sdk.view.e.a(r4, r2)
            r1.setMargins(r2, r3, r3, r3)
            goto L5f
        L53:
            java.lang.String r2 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r4 = "RelativeLayout.ALIGN_PARENT_RIGHT"
            com.cmic.gen.sdk.e.c.b(r2, r4)
            r2 = 11
            r1.addRule(r2)
        L5f:
            r2 = 2
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r7.B     // Catch: java.lang.Exception -> L80
            int r4 = r4.getNumberSize()     // Catch: java.lang.Exception -> L80
            float r4 = (float) r4     // Catch: java.lang.Exception -> L80
            r0.setTextSize(r2, r4)     // Catch: java.lang.Exception -> L80
            java.lang.String r4 = r7.o     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = "****"
            java.lang.String r6 = "星星星星"
            java.lang.String r4 = r4.replace(r5, r6)     // Catch: java.lang.Exception -> L80
            java.lang.String r5 = "(.{1})"
            java.lang.String r6 = "$1 "
            java.lang.String r4 = r4.replaceAll(r5, r6)     // Catch: java.lang.Exception -> L80
            r0.setContentDescription(r4)     // Catch: java.lang.Exception -> L80
            goto L85
        L80:
            r4 = 1099956224(0x41900000, float:18.0)
            r0.setTextSize(r2, r4)
        L85:
            java.lang.String r2 = r7.o
            r0.setText(r2)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r7.B
            boolean r2 = r2.isNumberBold()
            if (r2 == 0) goto L97
            android.graphics.Typeface r2 = android.graphics.Typeface.DEFAULT_BOLD
            r0.setTypeface(r2)
        L97:
            r2 = 30583(0x7777, float:4.2856E-41)
            r0.setId(r2)
            android.widget.RelativeLayout r2 = r7.r
            r2.addView(r0, r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r7.B     // Catch: java.lang.Exception -> Lab
            int r1 = r1.getNumberColor()     // Catch: java.lang.Exception -> Lab
            r0.setTextColor(r1)     // Catch: java.lang.Exception -> Lab
            goto Lb1
        Lab:
            r1 = -13421773(0xffffffffff333333, float:-2.3819765E38)
            r0.setTextColor(r1)
        Lb1:
            int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r3)
            android.widget.RelativeLayout r1 = r7.r
            r1.measure(r0, r0)
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "mPhoneLayout.getMeasuredHeight()="
            r1.append(r2)
            android.widget.RelativeLayout r2 = r7.r
            int r2 = r2.getMeasuredHeight()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.cmic.gen.sdk.e.c.b(r0, r1)
            return
    }

    private android.widget.RelativeLayout h() {
            r4 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r4)
            r4.d = r0
            r1 = 17476(0x4444, float:2.4489E-41)
            r0.setId(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r4.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r4.B
            int r2 = r2.getLogBtnWidth()
            float r2 = (float) r2
            int r1 = com.cmic.gen.sdk.view.e.a(r1, r2)
            android.content.Context r2 = r4.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r3 = r4.B
            int r3 = r3.getLogBtnHeight()
            float r3 = (float) r3
            int r2 = com.cmic.gen.sdk.view.e.a(r2, r3)
            r0.<init>(r1, r2)
            android.widget.RelativeLayout r1 = r4.d
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r4)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r4.B
            int r1 = r1.getLogBtnTextSize()
            float r1 = (float) r1
            r2 = 2
            r0.setTextSize(r2, r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r2)
            r2 = 13
            r1.addRule(r2)
            r0.setLayoutParams(r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r4.B
            boolean r1 = r1.isLogBtnTextBold()
            if (r1 == 0) goto L5b
            android.graphics.Typeface r1 = android.graphics.Typeface.DEFAULT_BOLD
            r0.setTypeface(r1)
        L5b:
            android.widget.RelativeLayout r1 = r4.d
            r1.addView(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r4.B
            java.lang.String r1 = r1.getLogBtnText()
            r0.setText(r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r4.B     // Catch: java.lang.Exception -> L73
            int r1 = r1.getLogBtnTextColor()     // Catch: java.lang.Exception -> L73
            r0.setTextColor(r1)     // Catch: java.lang.Exception -> L73
            goto L77
        L73:
            r1 = -1
            r0.setTextColor(r1)
        L77:
            android.widget.RelativeLayout r0 = r4.d     // Catch: java.lang.Exception -> L89
            android.content.Context r1 = r4.c     // Catch: java.lang.Exception -> L89
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r4.B     // Catch: java.lang.Exception -> L89
            java.lang.String r2 = r2.getLogBtnBackgroundPath()     // Catch: java.lang.Exception -> L89
            int r1 = com.cmic.gen.sdk.view.c.b(r1, r2)     // Catch: java.lang.Exception -> L89
            r0.setBackgroundResource(r1)     // Catch: java.lang.Exception -> L89
            goto L9a
        L89:
            r0 = move-exception
            r0.printStackTrace()
            android.widget.RelativeLayout r0 = r4.d
            android.content.Context r1 = r4.c
            java.lang.String r2 = "umcsdk_login_btn_bg"
            int r1 = com.cmic.gen.sdk.view.c.b(r1, r2)
            r0.setBackgroundResource(r1)
        L9a:
            android.widget.RelativeLayout r0 = r4.d
            return r0
    }

    static android.widget.RelativeLayout h(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            android.widget.RelativeLayout r0 = r0.d
            return r0
    }

    static android.widget.CheckBox i(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            android.widget.CheckBox r0 = r0.p
            return r0
    }

    private android.widget.RelativeLayout i() {
            r12 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r12)
            r12.q = r0
            r1 = 1
            r0.setHorizontalGravity(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r3 = -2
            r0.<init>(r2, r3)
            android.widget.RelativeLayout r4 = r12.q
            r4.setLayoutParams(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r12.B
            int r0 = r0.getCheckedImgWidth()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r12.B
            int r4 = r4.getCheckedImgHeight()
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r6 = r12.c
            r7 = 30
            int r8 = java.lang.Math.max(r0, r7)
            float r8 = (float) r8
            int r6 = com.cmic.gen.sdk.view.e.a(r6, r8)
            android.content.Context r8 = r12.c
            int r4 = java.lang.Math.max(r4, r7)
            float r4 = (float) r4
            int r4 = com.cmic.gen.sdk.view.e.a(r8, r4)
            r5.<init>(r6, r4)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r12.B
            int r4 = r4.getCheckBoxLocation()
            r6 = 15
            if (r4 != r1) goto L4d
            r5.addRule(r6, r2)
        L4d:
            android.widget.RelativeLayout r4 = new android.widget.RelativeLayout
            r4.<init>(r12)
            r12.x = r4
            r8 = 34952(0x8888, float:4.8978E-41)
            r4.setId(r8)
            android.widget.RelativeLayout r4 = r12.x
            r4.setLayoutParams(r5)
            android.widget.CheckBox r4 = new android.widget.CheckBox
            r4.<init>(r12)
            r12.p = r4
            r5 = 0
            r4.setChecked(r5)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r9 = r12.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r10 = r12.B
            int r10 = r10.getCheckedImgWidth()
            float r10 = (float) r10
            int r9 = com.cmic.gen.sdk.view.e.a(r9, r10)
            android.content.Context r10 = r12.c
            com.cmic.gen.sdk.view.GenAuthThemeConfig r11 = r12.B
            int r11 = r11.getCheckedImgHeight()
            float r11 = (float) r11
            int r10 = com.cmic.gen.sdk.view.e.a(r10, r11)
            r4.<init>(r9, r10)
            android.content.Context r9 = r12.c
            if (r0 <= r7) goto L8f
            r0 = 0
            goto L91
        L8f:
            int r7 = r7 - r0
            float r0 = (float) r7
        L91:
            int r0 = com.cmic.gen.sdk.view.e.a(r9, r0)
            r4.setMargins(r0, r5, r5, r5)
            r0 = 11
            r4.addRule(r0, r2)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r12.B
            int r0 = r0.getCheckBoxLocation()
            if (r0 != r1) goto La8
            r4.addRule(r6, r2)
        La8:
            android.widget.CheckBox r0 = r12.p
            r0.setLayoutParams(r4)
            android.widget.RelativeLayout r0 = r12.x
            android.widget.CheckBox r2 = r12.p
            r0.addView(r2)
            android.widget.RelativeLayout r0 = r12.q
            android.widget.RelativeLayout r2 = r12.x
            r0.addView(r2)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r12)
            r2 = 2
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r12.B
            int r4 = r4.getPrivacyTextSize()
            float r4 = (float) r4
            r0.setTextSize(r2, r4)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r3, r3)
            android.content.Context r3 = r12.c
            r4 = 1084227584(0x40a00000, float:5.0)
            int r3 = com.cmic.gen.sdk.view.e.a(r3, r4)
            android.content.Context r6 = r12.c
            int r4 = com.cmic.gen.sdk.view.e.a(r6, r4)
            r2.setMargins(r3, r5, r5, r4)
            r2.addRule(r1, r8)
            r0.setLayoutParams(r2)
            android.widget.RelativeLayout r1 = r12.q
            r1.addView(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r12.B
            int r1 = r1.getClauseBaseColor()
            r0.setTextColor(r1)
            java.lang.String r7 = r12.z
            java.lang.String r8 = r12.y
            com.cmic.gen.sdk.view.d r9 = r12.e
            java.util.ArrayList<com.cmic.gen.sdk.view.d> r10 = r12.j
            java.util.ArrayList<java.lang.String> r11 = r12.k
            r6 = r12
            android.text.SpannableString r1 = com.cmic.gen.sdk.view.e.a(r6, r7, r8, r9, r10, r11)
            r0.setText(r1)
            r1 = 1090519040(0x41000000, float:8.0)
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.setLineSpacing(r1, r2)
            r0.setIncludeFontPadding(r5)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r12.B
            boolean r1 = r1.isPrivacyTextBold()
            if (r1 == 0) goto L11e
            android.graphics.Typeface r1 = android.graphics.Typeface.DEFAULT_BOLD
            r0.setTypeface(r1)
        L11e:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r12.B
            boolean r1 = r1.isPrivacyTextGravityCenter()
            if (r1 == 0) goto L12b
            r1 = 17
            r0.setGravity(r1)
        L12b:
            android.content.res.Resources r1 = r12.getResources()
            r2 = 17170445(0x106000d, float:2.461195E-38)
            int r1 = r1.getColor(r2)
            r0.setHighlightColor(r1)
            android.widget.RelativeLayout r1 = r12.q
            com.cmic.gen.sdk.view.GenLoginAuthActivity$10 r2 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$10
            r2.<init>(r12)
            r1.setOnClickListener(r2)
            com.cmic.gen.sdk.view.GenLoginAuthActivity$11 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$11
            r1.<init>(r12)
            r0.setMovementMethod(r1)
            android.widget.CheckBox r0 = r12.p
            android.graphics.drawable.ColorDrawable r1 = new android.graphics.drawable.ColorDrawable
            r1.<init>()
            r0.setButtonDrawable(r1)
            android.widget.CheckBox r0 = r12.p     // Catch: java.lang.Exception -> L165
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r12.B     // Catch: java.lang.Exception -> L165
            java.lang.String r1 = r1.getUncheckedImgPath()     // Catch: java.lang.Exception -> L165
            int r1 = com.cmic.gen.sdk.view.c.b(r12, r1)     // Catch: java.lang.Exception -> L165
            r0.setBackgroundResource(r1)     // Catch: java.lang.Exception -> L165
            goto L170
        L165:
            android.widget.CheckBox r0 = r12.p
            java.lang.String r1 = "umcsdk_uncheck_image"
            int r1 = com.cmic.gen.sdk.view.c.b(r12, r1)
            r0.setBackgroundResource(r1)
        L170:
            android.widget.RelativeLayout r0 = r12.q
            return r0
    }

    private java.lang.String j() {
            r3 = this;
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B
            java.lang.String r0 = r0.getPrivacy()
            r3.z = r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B
            boolean r0 = r0.isPrivacyBookSymbol()
            if (r0 == 0) goto L20
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r3.y
            r0[r1] = r2
            java.lang.String r1 = "《%s》"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r3.y = r0
        L20:
            java.lang.String r0 = r3.z
            java.lang.String r1 = "$$运营商条款$$"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L34
            java.lang.String r0 = r3.z
            java.lang.String r2 = r3.y
            java.lang.String r0 = r0.replace(r1, r2)
            r3.z = r0
        L34:
            java.lang.String r0 = r3.z
            return r0
    }

    static java.lang.String j(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            java.lang.String r0 = r0.z
            return r0
    }

    static com.cmic.gen.sdk.view.GenLoginAuthActivity.a k(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.view.GenLoginAuthActivity$a r0 = r0.u
            return r0
    }

    private void k() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.d
            r1 = 1
            r0.setClickable(r1)
            android.widget.CheckBox r0 = r2.p
            r0.setClickable(r1)
            return
    }

    private void l() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.d
            r1 = 0
            r0.setClickable(r1)
            android.widget.CheckBox r0 = r2.p
            r0.setClickable(r1)
            return
    }

    static void l(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            r0.m()
            return
    }

    private void m() {
            r8 = this;
            java.lang.String r0 = "traceId"
            int r1 = r8.t     // Catch: java.lang.Exception -> Lac
            r2 = 5
            if (r1 < r2) goto L19
            android.content.Context r0 = r8.c     // Catch: java.lang.Exception -> Lac
            java.lang.String r1 = "网络不稳定,请返回重试其他登录方式"
            r2 = 1
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)     // Catch: java.lang.Exception -> Lac
            r0.show()     // Catch: java.lang.Exception -> Lac
            android.widget.RelativeLayout r0 = r8.d     // Catch: java.lang.Exception -> Lac
            r0.setClickable(r2)     // Catch: java.lang.Exception -> Lac
            return
        L19:
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Exception -> Lac
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()     // Catch: java.lang.Exception -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lac
            r2.<init>()     // Catch: java.lang.Exception -> Lac
            int r3 = r1.length     // Catch: java.lang.Exception -> Lac
            r4 = 0
        L28:
            if (r4 >= r3) goto L5c
            r5 = r1[r4]     // Catch: java.lang.Exception -> Lac
            java.lang.String r6 = "stack"
            java.lang.String r7 = r5.getClassName()     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.e.c.a(r6, r7)     // Catch: java.lang.Exception -> Lac
            java.lang.String r5 = r5.getClassName()     // Catch: java.lang.Exception -> Lac
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lac
            if (r6 != 0) goto L59
            java.lang.String r6 = "com.cmic.gen.sdk.activity"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Exception -> Lac
            if (r6 == 0) goto L59
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> Lac
            boolean r6 = r6.contains(r5)     // Catch: java.lang.Exception -> Lac
            if (r6 != 0) goto L59
            r2.append(r5)     // Catch: java.lang.Exception -> Lac
            java.lang.String r5 = ";"
            r2.append(r5)     // Catch: java.lang.Exception -> Lac
        L59:
            int r4 = r4 + 1
            goto L28
        L5c:
            com.cmic.gen.sdk.a r1 = r8.m     // Catch: java.lang.Exception -> Lac
            java.lang.String r2 = "loginTime"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lac
            r1.a(r2, r3)     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.a r1 = r8.m     // Catch: java.lang.Exception -> Lac
            java.lang.String r2 = ""
            java.lang.String r1 = r1.b(r0, r2)     // Catch: java.lang.Exception -> Lac
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lac
            if (r2 != 0) goto L89
            boolean r1 = com.cmic.gen.sdk.e.e.a(r1)     // Catch: java.lang.Exception -> Lac
            if (r1 == 0) goto L89
            java.lang.String r1 = com.cmic.gen.sdk.e.q.c()     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.a r2 = r8.m     // Catch: java.lang.Exception -> Lac
            r2.a(r0, r1)     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.auth.GenTokenListener r0 = r8.v     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.e.e.a(r1, r0)     // Catch: java.lang.Exception -> Lac
        L89:
            r8.b()     // Catch: java.lang.Exception -> Lac
            r8.l()     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.view.GenLoginAuthActivity$c r0 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$c     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.a r1 = r8.m     // Catch: java.lang.Exception -> Lac
            r0.<init>(r8, r1)     // Catch: java.lang.Exception -> Lac
            android.os.Handler r1 = r8.b     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.auth.GenAuthnHelper r2 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r8)     // Catch: java.lang.Exception -> Lac
            long r2 = r2.getOverTime()     // Catch: java.lang.Exception -> Lac
            r1.postDelayed(r0, r2)     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.view.GenLoginAuthActivity$b r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$b     // Catch: java.lang.Exception -> Lac
            r1.<init>(r8, r0)     // Catch: java.lang.Exception -> Lac
            com.cmic.gen.sdk.e.n.a(r1)     // Catch: java.lang.Exception -> Lac
            goto Lb0
        Lac:
            r0 = move-exception
            r0.printStackTrace()
        Lb0:
            return
    }

    static void m(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            r0.k()
            return
    }

    static com.cmic.gen.sdk.a n(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.a r0 = r0.m
            return r0
    }

    static com.cmic.gen.sdk.auth.a o(com.cmic.gen.sdk.view.GenLoginAuthActivity r0) {
            com.cmic.gen.sdk.auth.a r0 = r0.n
            return r0
    }

    public void a() {
            r2 = this;
            android.os.Handler r0 = r2.b
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.cmic.gen.sdk.view.d r0 = r2.e
            if (r0 == 0) goto L15
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L15
            com.cmic.gen.sdk.view.d r0 = r2.e
            r0.dismiss()
        L15:
            com.cmic.gen.sdk.view.d r0 = r2.f
            if (r0 == 0) goto L24
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L24
            com.cmic.gen.sdk.view.d r0 = r2.f
            r0.dismiss()
        L24:
            r2.c()
            r2.F = r1
            if (r1 == 0) goto L36
            boolean r0 = r1.isShowing()
            if (r0 == 0) goto L36
            android.app.Dialog r0 = r2.F
            r0.dismiss()
        L36:
            android.widget.RelativeLayout r0 = r2.q
            if (r0 == 0) goto L3d
            r0.clearAnimation()
        L3d:
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()
            r1 = 0
            r0.a = r1
            r2.finish()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r2.B
            java.lang.String r0 = r0.getAuthPageActOut()
            if (r0 == 0) goto L6e
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r2.B
            java.lang.String r0 = r0.getActivityIn()
            if (r0 == 0) goto L6e
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r2.B
            java.lang.String r0 = r0.getActivityIn()
            int r0 = com.cmic.gen.sdk.view.c.c(r2, r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r2.B
            java.lang.String r1 = r1.getAuthPageActOut()
            int r1 = com.cmic.gen.sdk.view.c.c(r2, r1)
            r2.overridePendingTransition(r0, r1)
        L6e:
            return
    }

    public void b() {
            r6 = this;
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r1 = "loginClickStart"
            com.cmic.gen.sdk.e.c.a(r0, r1)
            r0 = 1
            r6.E = r0     // Catch: java.lang.Exception -> L9a
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r6.B     // Catch: java.lang.Exception -> L9a
            com.cmic.gen.sdk.view.GenLoginClickListener r0 = r0.getGenLoginClickListener()     // Catch: java.lang.Exception -> L9a
            if (r0 == 0) goto L20
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r6.B     // Catch: java.lang.Exception -> L9a
            com.cmic.gen.sdk.view.GenLoginClickListener r0 = r0.getGenLoginClickListener()     // Catch: java.lang.Exception -> L9a
            android.content.Context r2 = r6.c     // Catch: java.lang.Exception -> L9a
            r3 = 0
            r0.onLoginClickStart(r2, r3)     // Catch: java.lang.Exception -> L9a
            goto L9e
        L20:
            android.app.Dialog r0 = r6.F     // Catch: java.lang.Exception -> L9a
            if (r0 == 0) goto L2a
            android.app.Dialog r0 = r6.F     // Catch: java.lang.Exception -> L9a
            r0.show()     // Catch: java.lang.Exception -> L9a
            return
        L2a:
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder     // Catch: java.lang.Exception -> L9a
            r0.<init>(r6)     // Catch: java.lang.Exception -> L9a
            android.app.AlertDialog r0 = r0.create()     // Catch: java.lang.Exception -> L9a
            r6.F = r0     // Catch: java.lang.Exception -> L9a
            r2 = 0
            r0.setCancelable(r2)     // Catch: java.lang.Exception -> L9a
            android.app.Dialog r0 = r6.F     // Catch: java.lang.Exception -> L9a
            r0.setCanceledOnTouchOutside(r2)     // Catch: java.lang.Exception -> L9a
            android.app.Dialog r0 = r6.F     // Catch: java.lang.Exception -> L9a
            com.cmic.gen.sdk.view.GenLoginAuthActivity$3 r2 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$3     // Catch: java.lang.Exception -> L9a
            r2.<init>(r6)     // Catch: java.lang.Exception -> L9a
            r0.setOnKeyListener(r2)     // Catch: java.lang.Exception -> L9a
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout     // Catch: java.lang.Exception -> L9a
            android.app.Dialog r2 = r6.F     // Catch: java.lang.Exception -> L9a
            android.content.Context r2 = r2.getContext()     // Catch: java.lang.Exception -> L9a
            r0.<init>(r2)     // Catch: java.lang.Exception -> L9a
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L9a
            r3 = -2
            r4 = -1
            r2.<init>(r4, r3)     // Catch: java.lang.Exception -> L9a
            r0.setLayoutParams(r2)     // Catch: java.lang.Exception -> L9a
            android.widget.ImageView r2 = new android.widget.ImageView     // Catch: java.lang.Exception -> L9a
            android.app.Dialog r3 = r6.F     // Catch: java.lang.Exception -> L9a
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Exception -> L9a
            r2.<init>(r3)     // Catch: java.lang.Exception -> L9a
            android.content.Context r3 = r6.c     // Catch: java.lang.Exception -> L9a
            java.lang.String r5 = "umcsdk_dialog_loading"
            int r3 = com.cmic.gen.sdk.view.c.b(r3, r5)     // Catch: java.lang.Exception -> L9a
            r2.setImageResource(r3)     // Catch: java.lang.Exception -> L9a
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L9a
            r5 = 80
            r3.<init>(r5, r5)     // Catch: java.lang.Exception -> L9a
            r5 = 13
            r3.addRule(r5, r4)     // Catch: java.lang.Exception -> L9a
            r0.addView(r2, r3)     // Catch: java.lang.Exception -> L9a
            android.app.Dialog r2 = r6.F     // Catch: java.lang.Exception -> L9a
            android.view.Window r2 = r2.getWindow()     // Catch: java.lang.Exception -> L9a
            if (r2 == 0) goto L94
            android.app.Dialog r2 = r6.F     // Catch: java.lang.Exception -> L9a
            android.view.Window r2 = r2.getWindow()     // Catch: java.lang.Exception -> L9a
            r3 = 0
            r2.setDimAmount(r3)     // Catch: java.lang.Exception -> L9a
        L94:
            android.app.Dialog r2 = r6.F     // Catch: java.lang.Exception -> L9a
            r2.setContentView(r0)     // Catch: java.lang.Exception -> L9a
            goto L9e
        L9a:
            r0 = move-exception
            r0.printStackTrace()
        L9e:
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            com.cmic.gen.sdk.e.c.a(r0, r1)
            return
    }

    public void c() {
            r3 = this;
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "loginClickComplete"
            com.cmic.gen.sdk.e.c.a(r0, r1)     // Catch: java.lang.Exception -> L35
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B     // Catch: java.lang.Exception -> L35
            com.cmic.gen.sdk.view.GenLoginClickListener r0 = r0.getGenLoginClickListener()     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L23
            boolean r0 = r3.E     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L23
            r0 = 0
            r3.E = r0     // Catch: java.lang.Exception -> L35
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B     // Catch: java.lang.Exception -> L35
            com.cmic.gen.sdk.view.GenLoginClickListener r0 = r0.getGenLoginClickListener()     // Catch: java.lang.Exception -> L35
            android.content.Context r1 = r3.c     // Catch: java.lang.Exception -> L35
            r2 = 0
            r0.onLoginClickComplete(r1, r2)     // Catch: java.lang.Exception -> L35
            goto L39
        L23:
            android.app.Dialog r0 = r3.F     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L39
            android.app.Dialog r0 = r3.F     // Catch: java.lang.Exception -> L35
            boolean r0 = r0.isShowing()     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L39
            android.app.Dialog r0 = r3.F     // Catch: java.lang.Exception -> L35
            r0.dismiss()     // Catch: java.lang.Exception -> L35
            goto L39
        L35:
            r0 = move-exception
            r0.printStackTrace()
        L39:
            return
    }

    @Override
    public void onClick(android.view.View r4) {
            r3 = this;
            int r4 = r4.getId()     // Catch: java.lang.Exception -> Laa
            r0 = 17476(0x4444, float:2.4489E-41)
            r1 = 1
            if (r4 == r0) goto L30
            r0 = 26214(0x6666, float:3.6734E-41)
            r2 = 0
            if (r4 == r0) goto L2b
            r0 = 34952(0x8888, float:4.8978E-41)
            if (r4 == r0) goto L15
            goto Lb3
        L15:
            android.widget.CheckBox r4 = r3.p     // Catch: java.lang.Exception -> Laa
            boolean r4 = r4.isChecked()     // Catch: java.lang.Exception -> Laa
            if (r4 == 0) goto L24
            android.widget.CheckBox r4 = r3.p     // Catch: java.lang.Exception -> Laa
            r4.setChecked(r2)     // Catch: java.lang.Exception -> Laa
            goto Lb3
        L24:
            android.widget.CheckBox r4 = r3.p     // Catch: java.lang.Exception -> Laa
            r4.setChecked(r1)     // Catch: java.lang.Exception -> Laa
            goto Lb3
        L2b:
            r3.a(r2)     // Catch: java.lang.Exception -> Laa
            goto Lb3
        L30:
            android.widget.CheckBox r4 = r3.p     // Catch: java.lang.Exception -> Laa
            boolean r4 = r4.isChecked()     // Catch: java.lang.Exception -> Laa
            if (r4 != 0) goto La1
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenAuthLoginListener r4 = r4.getGenAuthLoginListener()     // Catch: java.lang.Exception -> Laa
            if (r4 == 0) goto L51
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenAuthLoginListener r4 = r4.getGenAuthLoginListener()     // Catch: java.lang.Exception -> Laa
            android.content.Context r0 = r3.c     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenLoginAuthActivity$2 r1 = new com.cmic.gen.sdk.view.GenLoginAuthActivity$2     // Catch: java.lang.Exception -> Laa
            r1.<init>(r3)     // Catch: java.lang.Exception -> Laa
            r4.onAuthLoginListener(r0, r1)     // Catch: java.lang.Exception -> Laa
            return
        L51:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            java.lang.String r4 = r4.getPrivacyAnimation()     // Catch: java.lang.Exception -> Laa
            if (r4 == 0) goto L70
            android.content.Context r4 = r3.c     // Catch: java.lang.Exception -> Laa
            android.content.Context r0 = r3.c     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r3.B     // Catch: java.lang.Exception -> Laa
            java.lang.String r2 = r2.getPrivacyAnimation()     // Catch: java.lang.Exception -> Laa
            int r0 = com.cmic.gen.sdk.view.c.c(r0, r2)     // Catch: java.lang.Exception -> Laa
            android.view.animation.Animation r4 = android.view.animation.AnimationUtils.loadAnimation(r4, r0)     // Catch: java.lang.Exception -> Laa
            android.widget.RelativeLayout r0 = r3.q     // Catch: java.lang.Exception -> Laa
            r0.startAnimation(r4)     // Catch: java.lang.Exception -> Laa
        L70:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenCheckBoxListener r4 = r4.getGenCheckBoxListener()     // Catch: java.lang.Exception -> Laa
            if (r4 == 0) goto L85
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenCheckBoxListener r4 = r4.getGenCheckBoxListener()     // Catch: java.lang.Exception -> Laa
            android.content.Context r0 = r3.c     // Catch: java.lang.Exception -> Laa
            r1 = 0
            r4.onLoginClick(r0, r1)     // Catch: java.lang.Exception -> Laa
            return
        L85:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> Laa
            java.lang.String r4 = r4.getCheckTipText()     // Catch: java.lang.Exception -> Laa
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Laa
            if (r4 != 0) goto La1
            android.content.Context r4 = r3.c     // Catch: java.lang.Exception -> Laa
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B     // Catch: java.lang.Exception -> Laa
            java.lang.String r0 = r0.getCheckTipText()     // Catch: java.lang.Exception -> Laa
            android.widget.Toast r4 = android.widget.Toast.makeText(r4, r0, r1)     // Catch: java.lang.Exception -> Laa
            r4.show()     // Catch: java.lang.Exception -> Laa
            return
        La1:
            int r4 = r3.t     // Catch: java.lang.Exception -> Laa
            int r4 = r4 + r1
            r3.t = r4     // Catch: java.lang.Exception -> Laa
            r3.m()     // Catch: java.lang.Exception -> Laa
            goto Lb3
        Laa:
            r4 = move-exception
            java.util.ArrayList<java.lang.Throwable> r0 = com.cmic.gen.sdk.d.c.b
            r0.add(r4)
            r4.printStackTrace()
        Lb3:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            if (r4 == 0) goto L8
            r3.finish()     // Catch: java.lang.Exception -> L65
        L8:
            r3.c = r3     // Catch: java.lang.Exception -> L65
            com.cmic.gen.sdk.auth.GenAuthnHelper r4 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r3)     // Catch: java.lang.Exception -> L65
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r4.getAuthThemeConfig()     // Catch: java.lang.Exception -> L65
            r3.B = r4     // Catch: java.lang.Exception -> L65
            if (r4 == 0) goto L4d
            int r4 = r4.getThemeId()     // Catch: java.lang.Exception -> L65
            r0 = -1
            if (r4 == r0) goto L26
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> L65
            int r4 = r4.getThemeId()     // Catch: java.lang.Exception -> L65
            r3.setTheme(r4)     // Catch: java.lang.Exception -> L65
        L26:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> L65
            java.lang.String r4 = r4.getAuthPageActIn()     // Catch: java.lang.Exception -> L65
            if (r4 == 0) goto L4d
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> L65
            java.lang.String r4 = r4.getActivityOut()     // Catch: java.lang.Exception -> L65
            if (r4 == 0) goto L4d
            com.cmic.gen.sdk.view.GenAuthThemeConfig r4 = r3.B     // Catch: java.lang.Exception -> L65
            java.lang.String r4 = r4.getAuthPageActIn()     // Catch: java.lang.Exception -> L65
            int r4 = com.cmic.gen.sdk.view.c.c(r3, r4)     // Catch: java.lang.Exception -> L65
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r3.B     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = r0.getActivityOut()     // Catch: java.lang.Exception -> L65
            int r0 = com.cmic.gen.sdk.view.c.c(r3, r0)     // Catch: java.lang.Exception -> L65
            r3.overridePendingTransition(r4, r0)     // Catch: java.lang.Exception -> L65
        L4d:
            java.lang.String r4 = "authPageIn"
            com.cmic.gen.sdk.d.a.a(r4)     // Catch: java.lang.Exception -> L65
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L65
            r3.s = r0     // Catch: java.lang.Exception -> L65
            com.cmic.gen.sdk.auth.a r4 = com.cmic.gen.sdk.auth.a.a(r3)     // Catch: java.lang.Exception -> L65
            r3.n = r4     // Catch: java.lang.Exception -> L65
            r3.d()     // Catch: java.lang.Exception -> L65
            r3.f()     // Catch: java.lang.Exception -> L65
            goto L93
        L65:
            r4 = move-exception
            com.cmic.gen.sdk.a r0 = r3.m
            if (r0 != 0) goto L72
            com.cmic.gen.sdk.a r0 = new com.cmic.gen.sdk.a
            r1 = 0
            r0.<init>(r1)
            r3.m = r0
        L72:
            com.cmic.gen.sdk.a r0 = r3.m
            com.cmic.gen.sdk.d.b r0 = r0.a()
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r0 = r0.a
            r0.add(r4)
            java.lang.String r0 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r1 = r4.toString()
            com.cmic.gen.sdk.e.c.a(r0, r1)
            r4.printStackTrace()
            com.cmic.gen.sdk.a r4 = r3.m
            r0 = 0
            java.lang.String r1 = "200025"
            java.lang.String r2 = "发生未知错误"
            r3.a(r1, r2, r4, r0)
        L93:
            return
    }

    @Override
    protected void onDestroy() {
            r7 = this;
            android.os.Handler r0 = r7.b     // Catch: java.lang.Exception -> L55
            r1 = 0
            r0.removeCallbacksAndMessages(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r0 = "timeOnAuthPage"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r2.<init>()     // Catch: java.lang.Exception -> L55
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L55
            long r5 = r7.s     // Catch: java.lang.Exception -> L55
            long r3 = r3 - r5
            r2.append(r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.d.a.a(r0, r2)     // Catch: java.lang.Exception -> L55
            android.widget.CheckBox r0 = r7.p     // Catch: java.lang.Exception -> L55
            boolean r0 = r0.isChecked()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "authPrivacyState"
            if (r0 == 0) goto L33
            java.lang.String r0 = "1"
            com.cmic.gen.sdk.d.a.a(r2, r0)     // Catch: java.lang.Exception -> L55
            goto L38
        L33:
            java.lang.String r0 = "0"
            com.cmic.gen.sdk.d.a.a(r2, r0)     // Catch: java.lang.Exception -> L55
        L38:
            android.content.Context r0 = r7.c     // Catch: java.lang.Exception -> L55
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.a r2 = r7.m     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.d.a.a(r0, r2)     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.d.a.a()     // Catch: java.lang.Exception -> L55
            r7.F = r1     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()     // Catch: java.lang.Exception -> L55
            r0.c()     // Catch: java.lang.Exception -> L55
            com.cmic.gen.sdk.view.GenLoginAuthActivity$a r0 = r7.u     // Catch: java.lang.Exception -> L55
            r0.removeCallbacksAndMessages(r1)     // Catch: java.lang.Exception -> L55
            goto L65
        L55:
            r0 = move-exception
            java.lang.String r1 = com.cmic.gen.sdk.view.GenLoginAuthActivity.a
            java.lang.String r2 = "GenLoginAuthActivity clear failed"
            com.cmic.gen.sdk.e.c.a(r1, r2)
            java.util.ArrayList<java.lang.Throwable> r1 = com.cmic.gen.sdk.d.c.b
            r1.add(r0)
            r0.printStackTrace()
        L65:
            super.onDestroy()
            return
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto L34
            boolean r2 = r3.isCanceled()
            if (r2 != 0) goto L34
            int r2 = r3.getRepeatCount()
            if (r2 != 0) goto L34
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r1.B
            com.cmic.gen.sdk.view.GenBackPressedListener r2 = r2.getGenBackPressedListener()
            if (r2 == 0) goto L20
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r1.B
            com.cmic.gen.sdk.view.GenBackPressedListener r2 = r2.getGenBackPressedListener()
            r2.onBackPressed()
        L20:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r1.B
            int r2 = r2.getWindowWidth()
            if (r2 == 0) goto L30
            com.cmic.gen.sdk.view.GenAuthThemeConfig r2 = r1.B
            boolean r2 = r2.isBackButton()
            if (r2 == 0) goto L34
        L30:
            r2 = 0
            r1.a(r2)
        L34:
            r2 = 1
            return r2
    }

    @Override
    protected void onResume() {
            r4 = this;
            super.onResume()
            r0 = 0
            com.cmic.gen.sdk.a r1 = r4.m     // Catch: java.lang.Exception -> L1b
            if (r1 == 0) goto L11
            com.cmic.gen.sdk.a r1 = r4.m     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = "loginMethod"
            java.lang.String r3 = "loginAuth"
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L1b
        L11:
            com.cmic.gen.sdk.auth.GenAuthnHelper r1 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r4)     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = "200087"
            r1.loginPageInCallBack(r2, r0)     // Catch: java.lang.Exception -> L1b
            goto L33
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            com.cmic.gen.sdk.a r2 = r4.m
            com.cmic.gen.sdk.d.b r2 = r2.a()
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Throwable> r2 = r2.a
            r2.add(r1)
            com.cmic.gen.sdk.a r1 = r4.m
            java.lang.String r2 = "200025"
            java.lang.String r3 = "发生未知错误"
            r4.a(r2, r3, r1, r0)
        L33:
            return
    }
}
