package com.alipay.sdk.m.x;

public class d extends com.alipay.sdk.m.x.c implements com.alipay.sdk.m.x.e.f, com.alipay.sdk.m.x.e.g, com.alipay.sdk.m.x.e.h {
    public static final java.lang.String A = "action";
    public static final java.lang.String B = "pushWindow";
    public static final java.lang.String C = "h5JsFuncCallback";
    public static final java.lang.String D = "sdkInfo";
    public static final java.lang.String E = "canUseTaoLogin";
    public static final java.lang.String F = "taoLogin";
    public static final java.lang.String l = "sdk_result_code:";
    public static final java.lang.String m = "alipayjsbridge://";
    public static final java.lang.String n = "onBack";
    public static final java.lang.String o = "setTitle";
    public static final java.lang.String p = "onRefresh";
    public static final java.lang.String q = "showBackButton";
    public static final java.lang.String r = "onExit";
    public static final java.lang.String s = "onLoadJs";
    public static final java.lang.String t = "callNativeFunc";
    public static final java.lang.String u = "back";
    public static final java.lang.String v = "title";
    public static final java.lang.String w = "refresh";
    public static final java.lang.String x = "backButton";
    public static final java.lang.String y = "refreshButton";
    public static final java.lang.String z = "exit";
    public boolean e;
    public java.lang.String f;
    public boolean g;
    public final com.alipay.sdk.m.s.a h;
    public boolean i;
    public com.alipay.sdk.m.x.e j;
    public com.alipay.sdk.m.x.f k;

    public class a implements java.lang.Runnable {
        public final com.alipay.sdk.m.x.d a;

        public a(com.alipay.sdk.m.x.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.alipay.sdk.m.x.d r0 = r1.a
                android.app.Activity r0 = r0.a
                r0.finish()
                return
        }
    }

    public class b extends com.alipay.sdk.m.x.d.e {
        public final com.alipay.sdk.m.x.e a;
        public final com.alipay.sdk.m.x.d b;

        public b(com.alipay.sdk.m.x.d r1, com.alipay.sdk.m.x.e r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r1 = 0
                r0.<init>(r1)
                return
        }

        @Override
        public void onAnimationEnd(android.view.animation.Animation r2) {
                r1 = this;
                com.alipay.sdk.m.x.e r2 = r1.a
                r2.a()
                com.alipay.sdk.m.x.d r2 = r1.b
                r0 = 0
                com.alipay.sdk.m.x.d.a(r2, r0)
                return
        }
    }

    public class c extends com.alipay.sdk.m.x.d.e {
        public final com.alipay.sdk.m.x.e a;
        public final java.lang.String b;
        public final com.alipay.sdk.m.x.d c;

        public c(com.alipay.sdk.m.x.d r1, com.alipay.sdk.m.x.e r2, java.lang.String r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r1 = 0
                r0.<init>(r1)
                return
        }

        @Override
        public void onAnimationEnd(android.view.animation.Animation r2) {
                r1 = this;
                com.alipay.sdk.m.x.d r2 = r1.c
                com.alipay.sdk.m.x.e r0 = r1.a
                r2.removeView(r0)
                com.alipay.sdk.m.x.d r2 = r1.c
                com.alipay.sdk.m.x.e r2 = com.alipay.sdk.m.x.d.a(r2)
                java.lang.String r0 = r1.b
                r2.a(r0)
                com.alipay.sdk.m.x.d r2 = r1.c
                r0 = 0
                com.alipay.sdk.m.x.d.a(r2, r0)
                return
        }
    }

    public class d implements java.lang.Runnable {
        public final android.app.Activity a;
        public final android.webkit.SslErrorHandler b;
        public final com.alipay.sdk.m.x.d c;

        public class a implements android.content.DialogInterface.OnClickListener {
            public final com.alipay.sdk.m.x.d.d a;

            public a(com.alipay.sdk.m.x.d.d r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void onClick(android.content.DialogInterface r3, int r4) {
                    r2 = this;
                    com.alipay.sdk.m.x.d$d r3 = r2.a
                    android.webkit.SslErrorHandler r3 = r3.b
                    r3.cancel()
                    com.alipay.sdk.m.x.d$d r3 = r2.a
                    com.alipay.sdk.m.x.d r3 = r3.c
                    com.alipay.sdk.m.s.a r3 = com.alipay.sdk.m.x.d.b(r3)
                    java.lang.String r4 = "net"
                    java.lang.String r0 = "SSLDenied"
                    java.lang.String r1 = "2"
                    com.alipay.sdk.m.k.a.b(r3, r4, r0, r1)
                    java.lang.String r3 = com.alipay.sdk.m.j.b.a()
                    com.alipay.sdk.m.j.b.a(r3)
                    com.alipay.sdk.m.x.d$d r3 = r2.a
                    android.app.Activity r3 = r3.a
                    r3.finish()
                    return
            }
        }

        public d(com.alipay.sdk.m.x.d r1, android.app.Activity r2, android.webkit.SslErrorHandler r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r7 = this;
                android.app.Activity r0 = r7.a
                com.alipay.sdk.m.x.d$d$a r4 = new com.alipay.sdk.m.x.d$d$a
                r4.<init>(r7)
                java.lang.String r1 = "安全警告"
                java.lang.String r2 = "安全连接证书校验无效，将无法保证访问数据的安全性，请安装支付宝后重试。"
                java.lang.String r3 = "确定"
                r5 = 0
                r6 = 0
                com.alipay.sdk.m.x.b.a(r0, r1, r2, r3, r4, r5, r6)
                return
        }
    }

    public static abstract class e implements android.view.animation.Animation.AnimationListener {
        public e() {
                r0 = this;
                r0.<init>()
                return
        }

        public e(com.alipay.sdk.m.x.d.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onAnimationEnd(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public void onAnimationStart(android.view.animation.Animation r1) {
                r0 = this;
                return
        }
    }

    public static class f {
        public final java.lang.ref.WeakReference<com.alipay.sdk.m.x.e> a;
        public final java.lang.String b;
        public final java.lang.String c;
        public final org.json.JSONObject d;
        public boolean e;

        public f(com.alipay.sdk.m.x.e r2, java.lang.String r3, java.lang.String r4, org.json.JSONObject r5) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.e = r0
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                r1.b = r3
                r1.c = r4
                r1.d = r5
                return
        }

        public static java.lang.String a(java.lang.String r2) {
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                java.lang.String r1 = ""
                if (r0 == 0) goto L9
                return r1
            L9:
                java.lang.String r0 = "'"
                java.lang.String r2 = r2.replace(r0, r1)
                return r2
        }

        public void a(org.json.JSONObject r6) {
                r5 = this;
                boolean r0 = r5.e
                if (r0 == 0) goto L5
                return
            L5:
                java.lang.ref.WeakReference<com.alipay.sdk.m.x.e> r0 = r5.a
                java.lang.Object r0 = com.alipay.sdk.m.u.n.a(r0)
                com.alipay.sdk.m.x.e r0 = (com.alipay.sdk.m.x.e) r0
                if (r0 != 0) goto L10
                return
            L10:
                r1 = 1
                r5.e = r1
                r2 = 2
                java.lang.Object[] r2 = new java.lang.Object[r2]
                java.lang.String r3 = r5.c
                java.lang.String r3 = a(r3)
                r4 = 0
                r2[r4] = r3
                java.lang.String r6 = r6.toString()
                java.lang.String r6 = a(r6)
                r2[r1] = r6
                java.lang.String r6 = "javascript:window.AlipayJSBridge.callBackFromNativeFunc('%s','%s');"
                java.lang.String r6 = java.lang.String.format(r6, r2)
                r0.a(r6)
                return
        }
    }

    public static class g implements com.alipay.sdk.m.j.d.a {
        public final com.alipay.sdk.m.x.d.f a;
        public final java.lang.String b;

        public g(com.alipay.sdk.m.x.d.f r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public void a(boolean r4, org.json.JSONObject r5, java.lang.String r6) {
                r3 = this;
                com.alipay.sdk.m.x.d$f r0 = r3.a     // Catch: org.json.JSONException -> L24
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L24
                r1.<init>()     // Catch: org.json.JSONException -> L24
                java.lang.String r2 = "success"
                org.json.JSONObject r4 = r1.put(r2, r4)     // Catch: org.json.JSONException -> L24
                java.lang.String r1 = "random"
                java.lang.String r2 = r3.b     // Catch: org.json.JSONException -> L24
                org.json.JSONObject r4 = r4.put(r1, r2)     // Catch: org.json.JSONException -> L24
                java.lang.String r1 = "code"
                org.json.JSONObject r4 = r4.put(r1, r5)     // Catch: org.json.JSONException -> L24
                java.lang.String r5 = "status"
                org.json.JSONObject r4 = r4.put(r5, r6)     // Catch: org.json.JSONException -> L24
                r0.a(r4)     // Catch: org.json.JSONException -> L24
            L24:
                return
        }
    }

    public d(android.app.Activity r1, com.alipay.sdk.m.s.a r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r3)
            r1 = 1
            r0.e = r1
            java.lang.String r1 = "GET"
            r0.f = r1
            r1 = 0
            r0.g = r1
            r1 = 0
            r0.j = r1
            com.alipay.sdk.m.x.f r1 = new com.alipay.sdk.m.x.f
            r1.<init>()
            r0.k = r1
            r0.h = r2
            r0.g()
            return
    }

    public static com.alipay.sdk.m.x.e a(com.alipay.sdk.m.x.d r0) {
            com.alipay.sdk.m.x.e r0 = r0.j
            return r0
    }

    private synchronized void a(java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            monitor-enter(r9)
            com.alipay.sdk.m.x.e r0 = r9.j     // Catch: java.lang.Throwable -> L1c3
            if (r0 != 0) goto L7
            monitor-exit(r9)
            return
        L7:
            org.json.JSONObject r12 = com.alipay.sdk.m.u.n.h(r12)     // Catch: java.lang.Throwable -> L1c3
            com.alipay.sdk.m.x.d$f r1 = new com.alipay.sdk.m.x.d$f     // Catch: java.lang.Throwable -> L1c3
            r1.<init>(r0, r10, r11, r12)     // Catch: java.lang.Throwable -> L1c3
            android.content.Context r11 = r0.getContext()     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r2 = r1.b     // Catch: java.lang.Throwable -> L1b7
            r3 = -1
            int r4 = r2.hashCode()     // Catch: java.lang.Throwable -> L1b7
            r5 = 4
            r6 = 1
            r7 = 0
            switch(r4) {
                case -1785164386: goto L7e;
                case -552487705: goto L73;
                case 3015911: goto L69;
                case 3127582: goto L5f;
                case 110371416: goto L55;
                case 1085444827: goto L4b;
                case 1703426986: goto L41;
                case 1906413305: goto L37;
                case 1947723784: goto L2d;
                case 2033767917: goto L23;
                default: goto L21;
            }     // Catch: java.lang.Throwable -> L1b7
        L21:
            goto L88
        L23:
            java.lang.String r4 = "refreshButton"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 5
            goto L88
        L2d:
            java.lang.String r4 = "sdkInfo"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 7
            goto L88
        L37:
            java.lang.String r4 = "backButton"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 4
            goto L88
        L41:
            java.lang.String r4 = "pushWindow"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 6
            goto L88
        L4b:
            java.lang.String r4 = "refresh"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 1
            goto L88
        L55:
            java.lang.String r4 = "title"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 0
            goto L88
        L5f:
            java.lang.String r4 = "exit"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 3
            goto L88
        L69:
            java.lang.String r4 = "back"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 2
            goto L88
        L73:
            java.lang.String r4 = "taoLogin"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 9
            goto L88
        L7e:
            java.lang.String r4 = "canUseTaoLogin"
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L1b7
            if (r2 == 0) goto L88
            r3 = 8
        L88:
            switch(r3) {
                case 0: goto L19f;
                case 1: goto L197;
                case 2: goto L193;
                case 3: goto L17f;
                case 4: goto L16e;
                case 5: goto L15d;
                case 6: goto L14b;
                case 7: goto L124;
                case 8: goto Leb;
                case 9: goto L8d;
                default: goto L8b;
            }     // Catch: java.lang.Throwable -> L1b7
        L8b:
            goto L1c1
        L8d:
            java.lang.String r0 = r0.getUrl()     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.s.a r2 = r9.h     // Catch: java.lang.Throwable -> L1b7
            boolean r2 = com.alipay.sdk.m.u.n.a(r2, r0)     // Catch: java.lang.Throwable -> L1b7
            if (r2 != 0) goto La4
            com.alipay.sdk.m.s.a r11 = r9.h     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r12 = "biz"
            java.lang.String r1 = "jsUrlErr"
            com.alipay.sdk.m.k.a.b(r11, r12, r1, r0)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        La4:
            java.lang.String r0 = "random"
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r2 = "options"
            org.json.JSONObject r12 = r12.optJSONObject(r2)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r2 = "random"
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1b7
            if (r2 != 0) goto L1c1
            if (r12 != 0) goto Lbc
            goto L1c1
        Lbc:
            java.lang.String r2 = "url"
            java.lang.String r6 = r12.optString(r2)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r2 = "action"
            java.lang.String r7 = r12.optString(r2)     // Catch: java.lang.Throwable -> L1b7
            boolean r12 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L1b7
            if (r12 != 0) goto L1c1
            boolean r12 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L1b7
            if (r12 == 0) goto Ld6
            goto L1c1
        Ld6:
            boolean r12 = r11 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L1b7
            if (r12 == 0) goto L1c1
            com.alipay.sdk.m.s.a r3 = r9.h     // Catch: java.lang.Throwable -> L1b7
            r4 = r11
            android.app.Activity r4 = (android.app.Activity) r4     // Catch: java.lang.Throwable -> L1b7
            r5 = 1010(0x3f2, float:1.415E-42)
            com.alipay.sdk.m.x.d$g r8 = new com.alipay.sdk.m.x.d$g     // Catch: java.lang.Throwable -> L1b7
            r8.<init>(r1, r0)     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.j.d.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        Leb:
            java.lang.String r12 = r0.getUrl()     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.s.a r0 = r9.h     // Catch: java.lang.Throwable -> L1b7
            boolean r0 = com.alipay.sdk.m.u.n.a(r0, r12)     // Catch: java.lang.Throwable -> L1b7
            if (r0 != 0) goto L102
            com.alipay.sdk.m.s.a r11 = r9.h     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = "biz"
            java.lang.String r1 = "jsUrlErr"
            com.alipay.sdk.m.k.a.b(r11, r0, r1, r12)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L102:
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1b7
            r12.<init>()     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.s.a r0 = r9.h     // Catch: java.lang.Throwable -> L1b7
            boolean r11 = com.alipay.sdk.m.j.d.a(r0, r11)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = "enabled"
            r12.put(r0, r11)     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.s.a r0 = r9.h     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r2 = "biz"
            java.lang.String r3 = "TbChk"
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.k.a.a(r0, r2, r3, r11)     // Catch: java.lang.Throwable -> L1b7
            r1.a(r12)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L124:
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1b7
            r11.<init>()     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r12 = "sdk_version"
            java.lang.String r0 = "15.8.15"
            r11.put(r12, r0)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r12 = "app_name"
            com.alipay.sdk.m.s.a r0 = r9.h     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = r0.b()     // Catch: java.lang.Throwable -> L1b7
            r11.put(r12, r0)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r12 = "app_version"
            com.alipay.sdk.m.s.a r0 = r9.h     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = r0.c()     // Catch: java.lang.Throwable -> L1b7
            r11.put(r12, r0)     // Catch: java.lang.Throwable -> L1b7
            r1.a(r11)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L14b:
            java.lang.String r11 = "url"
            java.lang.String r11 = r12.optString(r11)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = "title"
            java.lang.String r1 = ""
            java.lang.String r12 = r12.optString(r0, r1)     // Catch: java.lang.Throwable -> L1b7
            r9.b(r11, r12)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L15d:
            java.lang.String r11 = "show"
            boolean r11 = r12.optBoolean(r11, r6)     // Catch: java.lang.Throwable -> L1b7
            android.widget.ImageView r12 = r0.getRefreshButton()     // Catch: java.lang.Throwable -> L1b7
            if (r11 == 0) goto L16a
            r5 = 0
        L16a:
            r12.setVisibility(r5)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L16e:
            java.lang.String r11 = "show"
            boolean r11 = r12.optBoolean(r11, r6)     // Catch: java.lang.Throwable -> L1b7
            android.widget.ImageView r12 = r0.getBackButton()     // Catch: java.lang.Throwable -> L1b7
            if (r11 == 0) goto L17b
            r5 = 0
        L17b:
            r12.setVisibility(r5)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L17f:
            java.lang.String r11 = "result"
            r0 = 0
            java.lang.String r11 = r12.optString(r11, r0)     // Catch: java.lang.Throwable -> L1b7
            com.alipay.sdk.m.j.b.a(r11)     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r11 = "success"
            boolean r11 = r12.optBoolean(r11, r7)     // Catch: java.lang.Throwable -> L1b7
            r9.a(r11)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L193:
            r9.i()     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L197:
            android.webkit.WebView r11 = r0.getWebView()     // Catch: java.lang.Throwable -> L1b7
            r11.reload()     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L19f:
            java.lang.String r11 = "title"
            boolean r11 = r12.has(r11)     // Catch: java.lang.Throwable -> L1b7
            if (r11 == 0) goto L1c1
            android.widget.TextView r11 = r0.getTitle()     // Catch: java.lang.Throwable -> L1b7
            java.lang.String r0 = "title"
            java.lang.String r1 = ""
            java.lang.String r12 = r12.optString(r0, r1)     // Catch: java.lang.Throwable -> L1b7
            r11.setText(r12)     // Catch: java.lang.Throwable -> L1b7
            goto L1c1
        L1b7:
            r11 = move-exception
            com.alipay.sdk.m.s.a r12 = r9.h     // Catch: java.lang.Throwable -> L1c3
            java.lang.String r0 = "biz"
            java.lang.String r1 = "jInfoErr"
            com.alipay.sdk.m.k.a.a(r12, r0, r1, r11, r10)     // Catch: java.lang.Throwable -> L1c3
        L1c1:
            monitor-exit(r9)
            return
        L1c3:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private synchronized void a(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            com.alipay.sdk.m.j.b.a(r1)     // Catch: java.lang.Throwable -> Lb
            android.app.Activity r1 = r0.a     // Catch: java.lang.Throwable -> Lb
            r1.finish()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)
            return
        Lb:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static boolean a(com.alipay.sdk.m.x.d r0, boolean r1) {
            r0.g = r1
            return r1
    }

    public static com.alipay.sdk.m.s.a b(com.alipay.sdk.m.x.d r0) {
            com.alipay.sdk.m.s.a r0 = r0.h
            return r0
    }

    private synchronized void b(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            com.alipay.sdk.m.s.a r0 = r3.h     // Catch: java.lang.Throwable -> Ld1
            java.util.Map r0 = com.alipay.sdk.m.u.n.b(r0, r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = "callNativeFunc"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L2c
            java.lang.String r4 = "func"
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = "cbId"
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r2 = "data"
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Ld1
            r3.a(r4, r1, r0)     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        L2c:
            java.lang.String r1 = "onBack"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L39
            r3.i()     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        L39:
            java.lang.String r1 = "setTitle"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L5c
            java.lang.String r1 = "title"
            boolean r1 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L5c
            com.alipay.sdk.m.x.e r4 = r3.j     // Catch: java.lang.Throwable -> Ld1
            android.widget.TextView r4 = r4.getTitle()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r1 = "title"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Ld1
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0     // Catch: java.lang.Throwable -> Ld1
            r4.setText(r0)     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        L5c:
            java.lang.String r1 = "onRefresh"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L6e
            com.alipay.sdk.m.x.e r4 = r3.j     // Catch: java.lang.Throwable -> Ld1
            android.webkit.WebView r4 = r4.getWebView()     // Catch: java.lang.Throwable -> Ld1
            r4.reload()     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        L6e:
            java.lang.String r1 = "showBackButton"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L9b
            java.lang.String r1 = "bshow"
            boolean r1 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L9b
            java.lang.String r4 = "bshow"
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = "true"
            boolean r4 = android.text.TextUtils.equals(r0, r4)     // Catch: java.lang.Throwable -> Ld1
            com.alipay.sdk.m.x.e r0 = r3.j     // Catch: java.lang.Throwable -> Ld1
            android.widget.ImageView r0 = r0.getBackButton()     // Catch: java.lang.Throwable -> Ld1
            if (r4 == 0) goto L96
            r4 = 0
            goto L97
        L96:
            r4 = 4
        L97:
            r0.setVisibility(r4)     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        L9b:
            java.lang.String r1 = "onExit"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto Lc0
            java.lang.String r4 = "result"
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Ld1
            com.alipay.sdk.m.j.b.a(r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r4 = "bsucc"
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> Ld1
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = "true"
            boolean r4 = android.text.TextUtils.equals(r0, r4)     // Catch: java.lang.Throwable -> Ld1
            r3.a(r4)     // Catch: java.lang.Throwable -> Ld1
            goto Lcf
        Lc0:
            java.lang.String r0 = "onLoadJs"
            boolean r4 = r4.startsWith(r0)     // Catch: java.lang.Throwable -> Ld1
            if (r4 == 0) goto Lcf
            com.alipay.sdk.m.x.e r4 = r3.j     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = "javascript:(function() {\n    if (window.AlipayJSBridge) {\n        return\n    }\n\n    function alipayjsbridgeFunc(url) {\n        var iframe = document.createElement(\"iframe\");\n        iframe.style.width = \"1px\";\n        iframe.style.height = \"1px\";\n        iframe.style.display = \"none\";\n        iframe.src = url;\n        document.body.appendChild(iframe);\n        setTimeout(function() {\n            document.body.removeChild(iframe)\n        }, 100)\n    }\n    window.alipayjsbridgeSetTitle = function(title) {\n        document.title = title;\n        alipayjsbridgeFunc(\"alipayjsbridge://setTitle?title=\" + encodeURIComponent(title))\n    };\n    window.alipayjsbridgeRefresh = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onRefresh?\")\n    };\n    window.alipayjsbridgeBack = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onBack?\")\n    };\n    window.alipayjsbridgeExit = function(bsucc) {\n        alipayjsbridgeFunc(\"alipayjsbridge://onExit?bsucc=\" + bsucc)\n    };\n    window.alipayjsbridgeShowBackButton = function(bshow) {\n        alipayjsbridgeFunc(\"alipayjsbridge://showBackButton?bshow=\" + bshow)\n    };\n    window.AlipayJSBridge = {\n        version: \"2.0\",\n        addListener: addListener,\n        hasListener: hasListener,\n        callListener: callListener,\n        callNativeFunc: callNativeFunc,\n        callBackFromNativeFunc: callBackFromNativeFunc\n    };\n    var uniqueId = 1;\n    var h5JsCallbackMap = {};\n\n    function iframeCall(paramStr) {\n        setTimeout(function() {\n        \tvar iframe = document.createElement(\"iframe\");\n        \tiframe.style.width = \"1px\";\n        \tiframe.style.height = \"1px\";\n        \tiframe.style.display = \"none\";\n        \tiframe.src = \"alipayjsbridge://callNativeFunc?\" + paramStr;\n        \tvar parent = document.body || document.documentElement;\n        \tparent.appendChild(iframe);\n        \tsetTimeout(function() {\n            \tparent.removeChild(iframe)\n        \t}, 0)\n        }, 0)\n    }\n\n    function callNativeFunc(nativeFuncName, data, h5JsCallback) {\n        var h5JsCallbackId = \"\";\n        if (h5JsCallback) {\n            h5JsCallbackId = \"cb_\" + (uniqueId++) + \"_\" + new Date().getTime();\n            h5JsCallbackMap[h5JsCallbackId] = h5JsCallback\n        }\n        var dataStr = \"\";\n        if (data) {\n            dataStr = encodeURIComponent(JSON.stringify(data))\n        }\n        var paramStr = \"func=\" + nativeFuncName + \"&cbId=\" + h5JsCallbackId + \"&data=\" + dataStr;\n        iframeCall(paramStr)\n    }\n\n    function callBackFromNativeFunc(h5JsCallbackId, data) {\n        var h5JsCallback = h5JsCallbackMap[h5JsCallbackId];\n        if (h5JsCallback) {\n            h5JsCallback(data);\n            delete h5JsCallbackMap[h5JsCallbackId]\n        }\n    }\n    var h5ListenerMap = {};\n\n    function addListener(jsFuncName, jsFunc) {\n        h5ListenerMap[jsFuncName] = jsFunc\n    }\n\n    function hasListener(jsFuncName) {\n        var jsFunc = h5ListenerMap[jsFuncName];\n        if (!jsFunc) {\n            return false\n        }\n        return true\n    }\n\n    function callListener(h5JsFuncName, data, nativeCallbackId) {\n        var responseCallback;\n        if (nativeCallbackId) {\n            responseCallback = function(responseData) {\n                var dataStr = \"\";\n                if (responseData) {\n                    dataStr = encodeURIComponent(JSON.stringify(responseData))\n                }\n                var paramStr = \"func=h5JsFuncCallback\" + \"&cbId=\" + nativeCallbackId + \"&data=\" + dataStr;\n                iframeCall(paramStr)\n            }\n        }\n        var h5JsFunc = h5ListenerMap[h5JsFuncName];\n        if (h5JsFunc) {\n            h5JsFunc(data, responseCallback)\n        } else if (h5JsFuncName == \"h5BackAction\") {\n            if (!window.alipayjsbridgeH5BackAction || !alipayjsbridgeH5BackAction()) {\n                var paramStr = \"func=back\";\n                iframeCall(paramStr)\n            }\n        } else {\n            console.log(\"AlipayJSBridge: no h5JsFunc \" + h5JsFuncName + data)\n        }\n    }\n    var event;\n    if (window.CustomEvent) {\n        event = new CustomEvent(\"alipayjsbridgeready\")\n    } else {\n        event = document.createEvent(\"Event\");\n        event.initEvent(\"alipayjsbridgeready\", true, true)\n    }\n    document.dispatchEvent(event);\n    setTimeout(excuteH5InitFuncs, 0);\n\n    function excuteH5InitFuncs() {\n        if (window.AlipayJSBridgeInitArray) {\n            var h5InitFuncs = window.AlipayJSBridgeInitArray;\n            delete window.AlipayJSBridgeInitArray;\n            for (var i = 0; i < h5InitFuncs.length; i++) {\n                try {\n                    h5InitFuncs[i](AlipayJSBridge)\n                } catch (e) {\n                    setTimeout(function() {\n                        throw e\n                    })\n                }\n            }\n        }\n    }\n})();\n"
            r4.a(r0)     // Catch: java.lang.Throwable -> Ld1
        Lcf:
            monitor-exit(r3)
            return
        Ld1:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private synchronized boolean b(java.lang.String r16, java.lang.String r17) {
            r15 = this;
            r1 = r15
            monitor-enter(r15)
            com.alipay.sdk.m.x.e r0 = r1.j     // Catch: java.lang.Throwable -> L74
            r2 = 0
            com.alipay.sdk.m.x.e$e r3 = new com.alipay.sdk.m.x.e$e     // Catch: java.lang.Throwable -> L72
            boolean r4 = r15.a()     // Catch: java.lang.Throwable -> L72
            r5 = 1
            r4 = r4 ^ r5
            boolean r6 = r15.a()     // Catch: java.lang.Throwable -> L72
            r6 = r6 ^ r5
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L72
            com.alipay.sdk.m.x.e r4 = new com.alipay.sdk.m.x.e     // Catch: java.lang.Throwable -> L72
            android.app.Activity r6 = r1.a     // Catch: java.lang.Throwable -> L72
            com.alipay.sdk.m.s.a r7 = r1.h     // Catch: java.lang.Throwable -> L72
            r4.<init>(r6, r7, r3)     // Catch: java.lang.Throwable -> L72
            r1.j = r4     // Catch: java.lang.Throwable -> L72
            r4.setChromeProxy(r15)     // Catch: java.lang.Throwable -> L72
            com.alipay.sdk.m.x.e r3 = r1.j     // Catch: java.lang.Throwable -> L72
            r3.setWebClientProxy(r15)     // Catch: java.lang.Throwable -> L72
            com.alipay.sdk.m.x.e r3 = r1.j     // Catch: java.lang.Throwable -> L72
            r3.setWebEventProxy(r15)     // Catch: java.lang.Throwable -> L72
            boolean r3 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L72
            if (r3 != 0) goto L3e
            com.alipay.sdk.m.x.e r3 = r1.j     // Catch: java.lang.Throwable -> L72
            android.widget.TextView r3 = r3.getTitle()     // Catch: java.lang.Throwable -> L72
            r4 = r17
            r3.setText(r4)     // Catch: java.lang.Throwable -> L72
        L3e:
            r1.g = r5     // Catch: java.lang.Throwable -> L74
            com.alipay.sdk.m.x.f r3 = r1.k     // Catch: java.lang.Throwable -> L74
            r3.a(r0)     // Catch: java.lang.Throwable -> L74
            android.view.animation.TranslateAnimation r3 = new android.view.animation.TranslateAnimation     // Catch: java.lang.Throwable -> L74
            r7 = 1
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 1
            r10 = 0
            r11 = 1
            r12 = 0
            r13 = 1
            r14 = 0
            r6 = r3
            r6.<init>(r7, r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> L74
            r6 = 400(0x190, double:1.976E-321)
            r3.setDuration(r6)     // Catch: java.lang.Throwable -> L74
            r3.setFillAfter(r2)     // Catch: java.lang.Throwable -> L74
            com.alipay.sdk.m.x.d$c r2 = new com.alipay.sdk.m.x.d$c     // Catch: java.lang.Throwable -> L74
            r4 = r16
            r2.<init>(r15, r0, r4)     // Catch: java.lang.Throwable -> L74
            r3.setAnimationListener(r2)     // Catch: java.lang.Throwable -> L74
            com.alipay.sdk.m.x.e r0 = r1.j     // Catch: java.lang.Throwable -> L74
            r0.setAnimation(r3)     // Catch: java.lang.Throwable -> L74
            com.alipay.sdk.m.x.e r0 = r1.j     // Catch: java.lang.Throwable -> L74
            r15.addView(r0)     // Catch: java.lang.Throwable -> L74
            monitor-exit(r15)
            return r5
        L72:
            monitor-exit(r15)
            return r2
        L74:
            r0 = move-exception
            monitor-exit(r15)
            throw r0
    }

    private synchronized boolean e() {
            r12 = this;
            monitor-enter(r12)
            com.alipay.sdk.m.x.f r0 = r12.k     // Catch: java.lang.Throwable -> L49
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L49
            r1 = 1
            if (r0 == 0) goto L10
            android.app.Activity r0 = r12.a     // Catch: java.lang.Throwable -> L49
            r0.finish()     // Catch: java.lang.Throwable -> L49
            goto L47
        L10:
            r12.g = r1     // Catch: java.lang.Throwable -> L49
            com.alipay.sdk.m.x.e r0 = r12.j     // Catch: java.lang.Throwable -> L49
            com.alipay.sdk.m.x.f r2 = r12.k     // Catch: java.lang.Throwable -> L49
            com.alipay.sdk.m.x.e r2 = r2.c()     // Catch: java.lang.Throwable -> L49
            r12.j = r2     // Catch: java.lang.Throwable -> L49
            android.view.animation.TranslateAnimation r2 = new android.view.animation.TranslateAnimation     // Catch: java.lang.Throwable -> L49
            r4 = 1
            r5 = 0
            r6 = 1
            r7 = 1065353216(0x3f800000, float:1.0)
            r8 = 1
            r9 = 0
            r10 = 1
            r11 = 0
            r3 = r2
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L49
            r3 = 400(0x190, double:1.976E-321)
            r2.setDuration(r3)     // Catch: java.lang.Throwable -> L49
            r3 = 0
            r2.setFillAfter(r3)     // Catch: java.lang.Throwable -> L49
            com.alipay.sdk.m.x.d$b r3 = new com.alipay.sdk.m.x.d$b     // Catch: java.lang.Throwable -> L49
            r3.<init>(r12, r0)     // Catch: java.lang.Throwable -> L49
            r2.setAnimationListener(r3)     // Catch: java.lang.Throwable -> L49
            r0.setAnimation(r2)     // Catch: java.lang.Throwable -> L49
            r12.removeView(r0)     // Catch: java.lang.Throwable -> L49
            com.alipay.sdk.m.x.e r0 = r12.j     // Catch: java.lang.Throwable -> L49
            r12.addView(r0)     // Catch: java.lang.Throwable -> L49
        L47:
            monitor-exit(r12)
            return r1
        L49:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }

    private synchronized void f() {
            r3 = this;
            monitor-enter(r3)
            android.app.Activity r0 = r3.a     // Catch: java.lang.Throwable -> L1b
            com.alipay.sdk.m.x.e r1 = r3.j     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            if (r1 != 0) goto La
            goto L19
        La:
            boolean r2 = r3.e     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L12
            r0.finish()     // Catch: java.lang.Throwable -> L1b
            goto L17
        L12:
            java.lang.String r0 = "javascript:window.AlipayJSBridge.callListener('h5BackAction');"
            r1.a(r0)     // Catch: java.lang.Throwable -> L1b
        L17:
            monitor-exit(r3)
            return
        L19:
            monitor-exit(r3)
            return
        L1b:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private synchronized boolean g() {
            r5 = this;
            monitor-enter(r5)
            com.alipay.sdk.m.x.e$e r0 = new com.alipay.sdk.m.x.e$e     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            boolean r1 = r5.a()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r2 = 1
            r1 = r1 ^ r2
            boolean r3 = r5.a()     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r3 = r3 ^ r2
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            com.alipay.sdk.m.x.e r1 = new com.alipay.sdk.m.x.e     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            android.app.Activity r3 = r5.a     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            com.alipay.sdk.m.s.a r4 = r5.h     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r1.<init>(r3, r4, r0)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r5.j = r1     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r1.setChromeProxy(r5)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            com.alipay.sdk.m.x.e r0 = r5.j     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r0.setWebClientProxy(r5)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            com.alipay.sdk.m.x.e r0 = r5.j     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r0.setWebEventProxy(r5)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            com.alipay.sdk.m.x.e r0 = r5.j     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            r5.addView(r0)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L33
            monitor-exit(r5)
            return r2
        L30:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
        L33:
            r0 = 0
            monitor-exit(r5)
            return r0
    }

    private void h() {
            r2 = this;
            com.alipay.sdk.m.x.e r0 = r2.j
            if (r0 == 0) goto Ld
            android.webkit.WebView r0 = r0.getWebView()
            java.lang.String r1 = "javascript:(function() {\n    if (window.AlipayJSBridge) {\n        return\n    }\n\n    function alipayjsbridgeFunc(url) {\n        var iframe = document.createElement(\"iframe\");\n        iframe.style.width = \"1px\";\n        iframe.style.height = \"1px\";\n        iframe.style.display = \"none\";\n        iframe.src = url;\n        document.body.appendChild(iframe);\n        setTimeout(function() {\n            document.body.removeChild(iframe)\n        }, 100)\n    }\n    window.alipayjsbridgeSetTitle = function(title) {\n        document.title = title;\n        alipayjsbridgeFunc(\"alipayjsbridge://setTitle?title=\" + encodeURIComponent(title))\n    };\n    window.alipayjsbridgeRefresh = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onRefresh?\")\n    };\n    window.alipayjsbridgeBack = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onBack?\")\n    };\n    window.alipayjsbridgeExit = function(bsucc) {\n        alipayjsbridgeFunc(\"alipayjsbridge://onExit?bsucc=\" + bsucc)\n    };\n    window.alipayjsbridgeShowBackButton = function(bshow) {\n        alipayjsbridgeFunc(\"alipayjsbridge://showBackButton?bshow=\" + bshow)\n    };\n    window.AlipayJSBridge = {\n        version: \"2.0\",\n        addListener: addListener,\n        hasListener: hasListener,\n        callListener: callListener,\n        callNativeFunc: callNativeFunc,\n        callBackFromNativeFunc: callBackFromNativeFunc\n    };\n    var uniqueId = 1;\n    var h5JsCallbackMap = {};\n\n    function iframeCall(paramStr) {\n        setTimeout(function() {\n        \tvar iframe = document.createElement(\"iframe\");\n        \tiframe.style.width = \"1px\";\n        \tiframe.style.height = \"1px\";\n        \tiframe.style.display = \"none\";\n        \tiframe.src = \"alipayjsbridge://callNativeFunc?\" + paramStr;\n        \tvar parent = document.body || document.documentElement;\n        \tparent.appendChild(iframe);\n        \tsetTimeout(function() {\n            \tparent.removeChild(iframe)\n        \t}, 0)\n        }, 0)\n    }\n\n    function callNativeFunc(nativeFuncName, data, h5JsCallback) {\n        var h5JsCallbackId = \"\";\n        if (h5JsCallback) {\n            h5JsCallbackId = \"cb_\" + (uniqueId++) + \"_\" + new Date().getTime();\n            h5JsCallbackMap[h5JsCallbackId] = h5JsCallback\n        }\n        var dataStr = \"\";\n        if (data) {\n            dataStr = encodeURIComponent(JSON.stringify(data))\n        }\n        var paramStr = \"func=\" + nativeFuncName + \"&cbId=\" + h5JsCallbackId + \"&data=\" + dataStr;\n        iframeCall(paramStr)\n    }\n\n    function callBackFromNativeFunc(h5JsCallbackId, data) {\n        var h5JsCallback = h5JsCallbackMap[h5JsCallbackId];\n        if (h5JsCallback) {\n            h5JsCallback(data);\n            delete h5JsCallbackMap[h5JsCallbackId]\n        }\n    }\n    var h5ListenerMap = {};\n\n    function addListener(jsFuncName, jsFunc) {\n        h5ListenerMap[jsFuncName] = jsFunc\n    }\n\n    function hasListener(jsFuncName) {\n        var jsFunc = h5ListenerMap[jsFuncName];\n        if (!jsFunc) {\n            return false\n        }\n        return true\n    }\n\n    function callListener(h5JsFuncName, data, nativeCallbackId) {\n        var responseCallback;\n        if (nativeCallbackId) {\n            responseCallback = function(responseData) {\n                var dataStr = \"\";\n                if (responseData) {\n                    dataStr = encodeURIComponent(JSON.stringify(responseData))\n                }\n                var paramStr = \"func=h5JsFuncCallback\" + \"&cbId=\" + nativeCallbackId + \"&data=\" + dataStr;\n                iframeCall(paramStr)\n            }\n        }\n        var h5JsFunc = h5ListenerMap[h5JsFuncName];\n        if (h5JsFunc) {\n            h5JsFunc(data, responseCallback)\n        } else if (h5JsFuncName == \"h5BackAction\") {\n            if (!window.alipayjsbridgeH5BackAction || !alipayjsbridgeH5BackAction()) {\n                var paramStr = \"func=back\";\n                iframeCall(paramStr)\n            }\n        } else {\n            console.log(\"AlipayJSBridge: no h5JsFunc \" + h5JsFuncName + data)\n        }\n    }\n    var event;\n    if (window.CustomEvent) {\n        event = new CustomEvent(\"alipayjsbridgeready\")\n    } else {\n        event = document.createEvent(\"Event\");\n        event.initEvent(\"alipayjsbridgeready\", true, true)\n    }\n    document.dispatchEvent(event);\n    setTimeout(excuteH5InitFuncs, 0);\n\n    function excuteH5InitFuncs() {\n        if (window.AlipayJSBridgeInitArray) {\n            var h5InitFuncs = window.AlipayJSBridgeInitArray;\n            delete window.AlipayJSBridgeInitArray;\n            for (var i = 0; i < h5InitFuncs.length; i++) {\n                try {\n                    h5InitFuncs[i](AlipayJSBridge)\n                } catch (e) {\n                    setTimeout(function() {\n                        throw e\n                    })\n                }\n            }\n        }\n    }\n})();\n;window.AlipayJSBridge.callListener('h5PageFinished');"
            r0.loadUrl(r1)
        Ld:
            return
    }

    private synchronized void i() {
            r2 = this;
            monitor-enter(r2)
            com.alipay.sdk.m.x.e r0 = r2.j     // Catch: java.lang.Throwable -> L25
            android.webkit.WebView r0 = r0.getWebView()     // Catch: java.lang.Throwable -> L25
            boolean r1 = r0.canGoBack()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L11
            r0.goBack()     // Catch: java.lang.Throwable -> L25
            goto L23
        L11:
            com.alipay.sdk.m.x.f r0 = r2.k     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L1f
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L1f
            r2.e()     // Catch: java.lang.Throwable -> L25
            goto L23
        L1f:
            r0 = 0
            r2.a(r0)     // Catch: java.lang.Throwable -> L25
        L23:
            monitor-exit(r2)
            return
        L25:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public synchronized void a(com.alipay.sdk.m.x.e r2) {
            r1 = this;
            monitor-enter(r1)
            android.webkit.WebView r0 = r2.getWebView()     // Catch: java.lang.Throwable -> L12
            r0.reload()     // Catch: java.lang.Throwable -> L12
            android.widget.ImageView r2 = r2.getRefreshButton()     // Catch: java.lang.Throwable -> L12
            r0 = 4
            r2.setVisibility(r0)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void a(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = r2.f     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "POST"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L12
            com.alipay.sdk.m.x.e r0 = r2.j     // Catch: java.lang.Throwable -> L22
            r1 = 0
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L22
            goto L17
        L12:
            com.alipay.sdk.m.x.e r0 = r2.j     // Catch: java.lang.Throwable -> L22
            r0.a(r3)     // Catch: java.lang.Throwable -> L22
        L17:
            com.alipay.sdk.m.x.e r3 = r2.j     // Catch: java.lang.Throwable -> L22
            android.webkit.WebView r3 = r3.getWebView()     // Catch: java.lang.Throwable -> L22
            com.alipay.sdk.m.x.c.a(r3)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r2)
            return
        L22:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void a(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            monitor-enter(r0)
            r0.f = r2     // Catch: java.lang.Throwable -> L10
            com.alipay.sdk.m.x.e r2 = r0.j     // Catch: java.lang.Throwable -> L10
            android.widget.TextView r2 = r2.getTitle()     // Catch: java.lang.Throwable -> L10
            r2.setText(r1)     // Catch: java.lang.Throwable -> L10
            r0.e = r3     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized boolean a(com.alipay.sdk.m.x.e r3, int r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            monitor-enter(r2)
            r5 = 1
            r2.i = r5     // Catch: java.lang.Throwable -> L30
            com.alipay.sdk.m.s.a r5 = r2.h     // Catch: java.lang.Throwable -> L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            r0.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "onReceivedError:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L30
            r0.append(r4)     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "|"
            r0.append(r4)     // Catch: java.lang.Throwable -> L30
            r0.append(r6)     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L30
            java.lang.String r6 = "net"
            java.lang.String r0 = "webError"
            com.alipay.sdk.m.k.a.b(r5, r6, r0, r4)     // Catch: java.lang.Throwable -> L30
            android.widget.ImageView r3 = r3.getRefreshButton()     // Catch: java.lang.Throwable -> L30
            r4 = 0
            r3.setVisibility(r4)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r2)
            return r4
        L30:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public synchronized boolean a(com.alipay.sdk.m.x.e r5, android.webkit.SslErrorHandler r6, android.net.http.SslError r7) {
            r4 = this;
            monitor-enter(r4)
            android.app.Activity r5 = r4.a     // Catch: java.lang.Throwable -> L2c
            r0 = 1
            if (r5 != 0) goto L8
            monitor-exit(r4)
            return r0
        L8:
            com.alipay.sdk.m.s.a r1 = r4.h     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = "2-"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c
            r2.append(r7)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "net"
            java.lang.String r3 = "SSLError"
            com.alipay.sdk.m.k.a.b(r1, r2, r3, r7)     // Catch: java.lang.Throwable -> L2c
            com.alipay.sdk.m.x.d$d r7 = new com.alipay.sdk.m.x.d$d     // Catch: java.lang.Throwable -> L2c
            r7.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> L2c
            r5.runOnUiThread(r7)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r4)
            return r0
        L2c:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public synchronized boolean a(com.alipay.sdk.m.x.e r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L6f
            r0 = 0
            if (r4 == 0) goto La
            monitor-exit(r3)
            return r0
        La:
            android.app.Activity r4 = r3.a     // Catch: java.lang.Throwable -> L6f
            r1 = 1
            if (r4 != 0) goto L11
            monitor-exit(r3)
            return r1
        L11:
            com.alipay.sdk.m.s.a r2 = r3.h     // Catch: java.lang.Throwable -> L6f
            boolean r2 = com.alipay.sdk.m.u.n.a(r2, r5, r4)     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L1b
            monitor-exit(r3)
            return r1
        L1b:
            java.lang.String r2 = "alipayjsbridge://"
            boolean r2 = r5.startsWith(r2)     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L2d
            r4 = 17
            java.lang.String r4 = r5.substring(r4)     // Catch: java.lang.Throwable -> L6f
            r3.b(r4)     // Catch: java.lang.Throwable -> L6f
            goto L6d
        L2d:
            java.lang.String r2 = "sdklite://h5quit"
            boolean r2 = android.text.TextUtils.equals(r5, r2)     // Catch: java.lang.Throwable -> L6f
            if (r2 == 0) goto L39
            r3.a(r0)     // Catch: java.lang.Throwable -> L6f
            goto L6d
        L39:
            java.lang.String r0 = "http://"
            boolean r0 = r5.startsWith(r0)     // Catch: java.lang.Throwable -> L6f
            if (r0 != 0) goto L68
            java.lang.String r0 = "https://"
            boolean r0 = r5.startsWith(r0)     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L4a
            goto L68
        L4a:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.setAction(r2)     // Catch: java.lang.Throwable -> L5f
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L5f
            r0.setData(r5)     // Catch: java.lang.Throwable -> L5f
            r4.startActivity(r0)     // Catch: java.lang.Throwable -> L5f
            goto L6d
        L5f:
            r4 = move-exception
            com.alipay.sdk.m.s.a r5 = r3.h     // Catch: java.lang.Throwable -> L6f
            java.lang.String r0 = "biz"
            com.alipay.sdk.m.k.a.a(r5, r0, r4)     // Catch: java.lang.Throwable -> L6f
            goto L6d
        L68:
            com.alipay.sdk.m.x.e r4 = r3.j     // Catch: java.lang.Throwable -> L6f
            r4.a(r5)     // Catch: java.lang.Throwable -> L6f
        L6d:
            monitor-exit(r3)
            return r1
        L6f:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public synchronized boolean a(com.alipay.sdk.m.x.e r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.webkit.JsPromptResult r5) {
            r0 = this;
            monitor-enter(r0)
            java.lang.String r1 = "<head>"
            boolean r1 = r3.startsWith(r1)     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L1b
            java.lang.String r1 = "sdk_result_code:"
            boolean r1 = r3.contains(r1)     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L1b
            com.alipay.sdk.m.x.d$a r1 = new com.alipay.sdk.m.x.d$a     // Catch: java.lang.Throwable -> L21
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L21
            android.app.Activity r2 = r0.a     // Catch: java.lang.Throwable -> L21
            r2.runOnUiThread(r1)     // Catch: java.lang.Throwable -> L21
        L1b:
            r5.cancel()     // Catch: java.lang.Throwable -> L21
            r1 = 1
            monitor-exit(r0)
            return r1
        L21:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized void b(com.alipay.sdk.m.x.e r1) {
            r0 = this;
            monitor-enter(r0)
            r0.f()     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized boolean b() {
            r5 = this;
            monitor-enter(r5)
            android.app.Activity r0 = r5.a     // Catch: java.lang.Throwable -> L62
            r1 = 1
            if (r0 != 0) goto L8
            monitor-exit(r5)
            return r1
        L8:
            boolean r2 = r5.a()     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L59
            com.alipay.sdk.m.x.e r2 = r5.j     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L54
            android.webkit.WebView r3 = r2.getWebView()     // Catch: java.lang.Throwable -> L62
            if (r3 != 0) goto L19
            goto L54
        L19:
            android.webkit.WebView r2 = r2.getWebView()     // Catch: java.lang.Throwable -> L62
            boolean r2 = r2.canGoBack()     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L48
            boolean r2 = r5.d()     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L52
            com.alipay.sdk.m.j.c r2 = com.alipay.sdk.m.j.c.f     // Catch: java.lang.Throwable -> L62
            int r2 = r2.b()     // Catch: java.lang.Throwable -> L62
            com.alipay.sdk.m.j.c r2 = com.alipay.sdk.m.j.c.b(r2)     // Catch: java.lang.Throwable -> L62
            int r3 = r2.b()     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = r2.a()     // Catch: java.lang.Throwable -> L62
            java.lang.String r4 = ""
            java.lang.String r2 = com.alipay.sdk.m.j.b.a(r3, r2, r4)     // Catch: java.lang.Throwable -> L62
            com.alipay.sdk.m.j.b.a(r2)     // Catch: java.lang.Throwable -> L62
            r0.finish()     // Catch: java.lang.Throwable -> L62
            goto L52
        L48:
            java.lang.String r2 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L62
            com.alipay.sdk.m.j.b.a(r2)     // Catch: java.lang.Throwable -> L62
            r0.finish()     // Catch: java.lang.Throwable -> L62
        L52:
            monitor-exit(r5)
            return r1
        L54:
            r0.finish()     // Catch: java.lang.Throwable -> L62
            monitor-exit(r5)
            return r1
        L59:
            boolean r0 = r5.g     // Catch: java.lang.Throwable -> L62
            if (r0 != 0) goto L60
            r5.f()     // Catch: java.lang.Throwable -> L62
        L60:
            monitor-exit(r5)
            return r1
        L62:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    @Override
    public synchronized boolean b(com.alipay.sdk.m.x.e r5, java.lang.String r6) {
            r4 = this;
            monitor-enter(r4)
            com.alipay.sdk.m.s.a r0 = r4.h     // Catch: java.lang.Throwable -> L34
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34
            r1.<init>()     // Catch: java.lang.Throwable -> L34
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L34
            r1.append(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "|"
            r1.append(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = com.alipay.sdk.m.u.n.i(r6)     // Catch: java.lang.Throwable -> L34
            r1.append(r6)     // Catch: java.lang.Throwable -> L34
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "biz"
            java.lang.String r2 = "h5ldd"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r6)     // Catch: java.lang.Throwable -> L34
            r4.h()     // Catch: java.lang.Throwable -> L34
            android.widget.ImageView r5 = r5.getRefreshButton()     // Catch: java.lang.Throwable -> L34
            r6 = 0
            r5.setVisibility(r6)     // Catch: java.lang.Throwable -> L34
            r5 = 1
            monitor-exit(r4)
            return r5
        L34:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public synchronized void c() {
            r1 = this;
            monitor-enter(r1)
            com.alipay.sdk.m.x.e r0 = r1.j     // Catch: java.lang.Throwable -> Ld
            r0.a()     // Catch: java.lang.Throwable -> Ld
            com.alipay.sdk.m.x.f r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.a()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void c(com.alipay.sdk.m.x.e r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "http"
            boolean r0 = r3.startsWith(r0)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L1c
            java.lang.String r2 = r2.getUrl()     // Catch: java.lang.Throwable -> L1e
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L1e
            if (r2 != 0) goto L1c
            com.alipay.sdk.m.x.e r2 = r1.j     // Catch: java.lang.Throwable -> L1e
            android.widget.TextView r2 = r2.getTitle()     // Catch: java.lang.Throwable -> L1e
            r2.setText(r3)     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r1)
            return
        L1e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public boolean d() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    @Override
    public synchronized boolean d(com.alipay.sdk.m.x.e r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            com.alipay.sdk.m.s.a r4 = r3.h     // Catch: java.lang.Throwable -> L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3a
            r0.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "|"
            r0.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = com.alipay.sdk.m.u.n.i(r5)     // Catch: java.lang.Throwable -> L3a
            r0.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "biz"
            java.lang.String r2 = "h5ld"
            com.alipay.sdk.m.k.a.a(r4, r1, r2, r0)     // Catch: java.lang.Throwable -> L3a
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3a
            if (r4 != 0) goto L37
            java.lang.String r4 = ".apk"
            boolean r4 = r5.endsWith(r4)     // Catch: java.lang.Throwable -> L3a
            if (r4 != 0) goto L37
            r3.h()     // Catch: java.lang.Throwable -> L3a
        L37:
            r4 = 0
            monitor-exit(r3)
            return r4
        L3a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public synchronized boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.g     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L7
            r2 = 1
            goto Lb
        L7:
            boolean r2 = super.onInterceptTouchEvent(r2)     // Catch: java.lang.Throwable -> Ld
        Lb:
            monitor-exit(r1)
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
