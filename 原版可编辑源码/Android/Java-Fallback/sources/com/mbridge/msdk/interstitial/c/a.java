package com.mbridge.msdk.interstitial.c;

public final class a {
    public static java.lang.String a;
    public static java.util.Map<java.lang.String, java.lang.Integer> c;
    public static java.util.Map<java.lang.String, java.lang.Integer> d;
    public static java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a.c> e;
    public boolean b;
    private java.lang.String f;
    private android.content.Context g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private com.mbridge.msdk.out.MBridgeIds k;
    private android.os.Handler l;
    private com.mbridge.msdk.c.d m;
    private com.mbridge.msdk.out.InterstitialListener n;
    private java.lang.String o;
    private java.lang.String p;
    private boolean q;


    public class a {
        final com.mbridge.msdk.interstitial.c.a a;
        private com.mbridge.msdk.interstitial.a.a b;
        private com.mbridge.msdk.interstitial.c.a.b c;

        public a(com.mbridge.msdk.interstitial.c.a r1, com.mbridge.msdk.interstitial.a.a r2, com.mbridge.msdk.interstitial.c.a.b r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        public final void a(boolean r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r1.a     // Catch: java.lang.Exception -> L3e
                com.mbridge.msdk.interstitial.c.a.c(r0, r3)     // Catch: java.lang.Exception -> L3e
                com.mbridge.msdk.interstitial.c.a$b r3 = r1.c     // Catch: java.lang.Exception -> L3e
                if (r3 == 0) goto L42
                com.mbridge.msdk.interstitial.c.a r3 = r1.a     // Catch: java.lang.Exception -> L3e
                android.os.Handler r3 = com.mbridge.msdk.interstitial.c.a.d(r3)     // Catch: java.lang.Exception -> L3e
                if (r3 == 0) goto L1c
                com.mbridge.msdk.interstitial.c.a r3 = r1.a     // Catch: java.lang.Exception -> L3e
                android.os.Handler r3 = com.mbridge.msdk.interstitial.c.a.d(r3)     // Catch: java.lang.Exception -> L3e
                com.mbridge.msdk.interstitial.c.a$b r0 = r1.c     // Catch: java.lang.Exception -> L3e
                r3.removeCallbacks(r0)     // Catch: java.lang.Exception -> L3e
            L1c:
                if (r2 == 0) goto L25
                com.mbridge.msdk.interstitial.c.a r2 = r1.a     // Catch: java.lang.Exception -> L3e
                r3 = 0
                com.mbridge.msdk.interstitial.c.a.a(r2, r3)     // Catch: java.lang.Exception -> L3e
                goto L32
            L25:
                com.mbridge.msdk.interstitial.c.a r2 = r1.a     // Catch: java.lang.Exception -> L3e
                com.mbridge.msdk.out.InterstitialListener r2 = com.mbridge.msdk.interstitial.c.a.a(r2)     // Catch: java.lang.Exception -> L3e
                if (r2 == 0) goto L32
                com.mbridge.msdk.interstitial.c.a r2 = r1.a     // Catch: java.lang.Exception -> L3e
                com.mbridge.msdk.interstitial.c.a.e(r2)     // Catch: java.lang.Exception -> L3e
            L32:
                com.mbridge.msdk.interstitial.c.a r2 = r1.a     // Catch: java.lang.Exception -> L3e
                java.lang.String r2 = com.mbridge.msdk.interstitial.c.a.c(r2)     // Catch: java.lang.Exception -> L3e
                java.lang.String r3 = "onInterstitialLoadSuccess remove task "
                com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Exception -> L3e
                goto L42
            L3e:
                r2 = move-exception
                r2.printStackTrace()
            L42:
                return
        }

        public final void b(boolean r3, java.lang.String r4) {
                r2 = this;
                com.mbridge.msdk.interstitial.a.a r0 = r2.b     // Catch: java.lang.Exception -> L4c
                if (r0 == 0) goto Lc
                com.mbridge.msdk.interstitial.a.a r0 = r2.b     // Catch: java.lang.Exception -> L4c
                r1 = 0
                r0.a(r1)     // Catch: java.lang.Exception -> L4c
                r2.b = r1     // Catch: java.lang.Exception -> L4c
            Lc:
                com.mbridge.msdk.interstitial.c.a$b r0 = r2.c     // Catch: java.lang.Exception -> L4c
                if (r0 == 0) goto L50
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L4c
                java.lang.String r0 = com.mbridge.msdk.interstitial.c.a.c(r0)     // Catch: java.lang.Exception -> L4c
                java.lang.String r1 = "LoadIntersInnerListener onIntersLoadFail remove task"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L4c
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L4c
                if (r0 == 0) goto L2e
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L4c
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.interstitial.c.a$b r1 = r2.c     // Catch: java.lang.Exception -> L4c
                r0.removeCallbacks(r1)     // Catch: java.lang.Exception -> L4c
            L2e:
                if (r3 == 0) goto L3e
                com.mbridge.msdk.interstitial.c.a r3 = r2.a     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.out.InterstitialListener r3 = com.mbridge.msdk.interstitial.c.a.a(r3)     // Catch: java.lang.Exception -> L4c
                if (r3 == 0) goto L50
                com.mbridge.msdk.interstitial.c.a r3 = r2.a     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.interstitial.c.a.a(r3, r4)     // Catch: java.lang.Exception -> L4c
                goto L50
            L3e:
                com.mbridge.msdk.interstitial.c.a r3 = r2.a     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.out.InterstitialListener r3 = com.mbridge.msdk.interstitial.c.a.a(r3)     // Catch: java.lang.Exception -> L4c
                if (r3 == 0) goto L50
                com.mbridge.msdk.interstitial.c.a r3 = r2.a     // Catch: java.lang.Exception -> L4c
                com.mbridge.msdk.interstitial.c.a.b(r3, r4)     // Catch: java.lang.Exception -> L4c
                goto L50
            L4c:
                r3 = move-exception
                r3.printStackTrace()
            L50:
                return
        }
    }

    public class b implements java.lang.Runnable {
        final com.mbridge.msdk.interstitial.c.a a;
        private com.mbridge.msdk.interstitial.a.a b;

        public b(com.mbridge.msdk.interstitial.c.a r1, com.mbridge.msdk.interstitial.a.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L35
                java.lang.String r0 = com.mbridge.msdk.interstitial.c.a.c(r0)     // Catch: java.lang.Exception -> L35
                java.lang.String r1 = "CommonCancelTimeTask"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L35
                com.mbridge.msdk.interstitial.a.a r0 = r2.b     // Catch: java.lang.Exception -> L35
                if (r0 == 0) goto L39
                com.mbridge.msdk.interstitial.a.a r0 = r2.b     // Catch: java.lang.Exception -> L35
                boolean r0 = r0.d()     // Catch: java.lang.Exception -> L35
                java.lang.String r1 = "load timeout"
                if (r0 == 0) goto L1f
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L35
                com.mbridge.msdk.interstitial.c.a.a(r0, r1)     // Catch: java.lang.Exception -> L35
                goto L2c
            L1f:
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L35
                com.mbridge.msdk.out.InterstitialListener r0 = com.mbridge.msdk.interstitial.c.a.a(r0)     // Catch: java.lang.Exception -> L35
                if (r0 == 0) goto L2c
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L35
                com.mbridge.msdk.interstitial.c.a.b(r0, r1)     // Catch: java.lang.Exception -> L35
            L2c:
                com.mbridge.msdk.interstitial.a.a r0 = r2.b     // Catch: java.lang.Exception -> L35
                r1 = 0
                r0.a(r1)     // Catch: java.lang.Exception -> L35
                r2.b = r1     // Catch: java.lang.Exception -> L35
                goto L39
            L35:
                r0 = move-exception
                r0.printStackTrace()
            L39:
                return
        }
    }

    public class c {
        final com.mbridge.msdk.interstitial.c.a a;

        public c(com.mbridge.msdk.interstitial.c.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public final void a() {
                r1 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r1.a     // Catch: java.lang.Exception -> L6
                com.mbridge.msdk.interstitial.c.a.f(r0)     // Catch: java.lang.Exception -> L6
                goto La
            L6:
                r0 = move-exception
                r0.printStackTrace()
            La:
                return
        }

        public final void a(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r1.a     // Catch: java.lang.Exception -> L6
                com.mbridge.msdk.interstitial.c.a.a(r0, r2)     // Catch: java.lang.Exception -> L6
                goto La
            L6:
                r2 = move-exception
                r2.printStackTrace()
            La:
                return
        }

        public final void b() {
                r2 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L13
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L13
                if (r0 == 0) goto L17
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L13
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L13
                r1 = 7
                r0.sendEmptyMessage(r1)     // Catch: java.lang.Exception -> L13
                goto L17
            L13:
                r0 = move-exception
                r0.printStackTrace()
            L17:
                return
        }

        public final void c() {
                r2 = this;
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L13
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L13
                if (r0 == 0) goto L17
                com.mbridge.msdk.interstitial.c.a r0 = r2.a     // Catch: java.lang.Exception -> L13
                android.os.Handler r0 = com.mbridge.msdk.interstitial.c.a.d(r0)     // Catch: java.lang.Exception -> L13
                r1 = 6
                r0.sendEmptyMessage(r1)     // Catch: java.lang.Exception -> L13
                goto L17
            L13:
                r0 = move-exception
                r0.printStackTrace()
            L17:
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.interstitial.c.a.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.interstitial.c.a.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.interstitial.c.a.e = r0
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "InterstitialController"
            r2.f = r0
            r0 = 0
            r2.b = r0
            java.lang.String r1 = ""
            r2.o = r1
            r2.p = r1
            r2.q = r0
            com.mbridge.msdk.interstitial.c.a$1 r0 = new com.mbridge.msdk.interstitial.c.a$1     // Catch: java.lang.Exception -> L1e
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Exception -> L1e
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L1e
            r2.l = r0     // Catch: java.lang.Exception -> L1e
            goto L27
        L1e:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r0 = move-exception
            r0.printStackTrace()
        L27:
            return
    }

    public static int a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.interstitial.c.a.c     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.interstitial.c.a.c     // Catch: java.lang.Exception -> L21
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.interstitial.c.a.c     // Catch: java.lang.Exception -> L21
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L21
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L21
            if (r1 == 0) goto L25
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L21
            return r1
        L21:
            r1 = move-exception
            r1.printStackTrace()
        L25:
            r1 = 0
            return r1
    }

    static com.mbridge.msdk.out.InterstitialListener a(com.mbridge.msdk.interstitial.c.a r0) {
            com.mbridge.msdk.out.InterstitialListener r0 = r0.n
            return r0
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            com.mbridge.msdk.interstitial.c.a$c r0 = new com.mbridge.msdk.interstitial.c.a$c
            r0.<init>(r3)
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r1 = com.mbridge.msdk.interstitial.c.a.e
            if (r1 == 0) goto L18
            java.lang.String r1 = r3.i
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L18
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r1 = com.mbridge.msdk.interstitial.c.a.e
            java.lang.String r2 = r3.i
            r1.put(r2, r0)
        L18:
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r3.g
            java.lang.Class<com.mbridge.msdk.interstitial.view.MBInterstitialActivity> r2 = com.mbridge.msdk.interstitial.view.MBInterstitialActivity.class
            r0.<init>(r1, r2)
            r1 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = r3.i
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3a
            java.lang.String r1 = r3.i
            java.lang.String r2 = "unitId"
            r0.putExtra(r2, r1)
        L3a:
            if (r4 == 0) goto L47
            java.lang.String r1 = r4.getRequestId()
            r3.p = r1
            java.lang.String r1 = "campaign"
            r0.putExtra(r1, r4)
        L47:
            android.content.Context r4 = r3.g
            if (r4 == 0) goto L4e
            r4.startActivity(r0)
        L4e:
            return
    }

    static void a(com.mbridge.msdk.interstitial.c.a r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static void a(com.mbridge.msdk.interstitial.c.a r0, boolean r1) {
            r0.b(r1)
            return
    }

    public static void a(java.lang.String r1, int r2) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.interstitial.c.a.c     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L18
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.interstitial.c.a.c     // Catch: java.lang.Exception -> L14
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L14
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            return
    }

    private void a(boolean r8) {
            r7 = this;
            com.mbridge.msdk.interstitial.a.a r6 = new com.mbridge.msdk.interstitial.a.a     // Catch: java.lang.Exception -> L2b
            android.content.Context r1 = r7.g     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r7.i     // Catch: java.lang.Exception -> L2b
            java.lang.String r3 = r7.j     // Catch: java.lang.Exception -> L2b
            java.lang.String r4 = r7.h     // Catch: java.lang.Exception -> L2b
            r0 = r6
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.interstitial.c.a$b r0 = new com.mbridge.msdk.interstitial.c.a$b     // Catch: java.lang.Exception -> L2b
            r0.<init>(r7, r6)     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.interstitial.c.a$a r1 = new com.mbridge.msdk.interstitial.c.a$a     // Catch: java.lang.Exception -> L2b
            r1.<init>(r7, r6, r0)     // Catch: java.lang.Exception -> L2b
            r6.a(r1)     // Catch: java.lang.Exception -> L2b
            android.os.Handler r1 = r7.l     // Catch: java.lang.Exception -> L2b
            if (r1 == 0) goto L27
            android.os.Handler r1 = r7.l     // Catch: java.lang.Exception -> L2b
            r2 = 30000(0x7530, double:1.4822E-319)
            r1.postDelayed(r0, r2)     // Catch: java.lang.Exception -> L2b
        L27:
            r6.b()     // Catch: java.lang.Exception -> L2b
            goto L36
        L2b:
            r0 = move-exception
            r0.printStackTrace()
            if (r8 != 0) goto L36
            java.lang.String r8 = "can't show because unknow error"
            r7.b(r8)
        L36:
            return
    }

    static com.mbridge.msdk.out.MBridgeIds b(com.mbridge.msdk.interstitial.c.a r0) {
            com.mbridge.msdk.out.MBridgeIds r0 = r0.k
            return r0
    }

    static void b(com.mbridge.msdk.interstitial.c.a r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            android.os.Handler r0 = r1.l     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L17
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L13
            r0.obj = r2     // Catch: java.lang.Exception -> L13
            r2 = 2
            r0.what = r2     // Catch: java.lang.Exception -> L13
            android.os.Handler r2 = r1.l     // Catch: java.lang.Exception -> L13
            r2.sendMessage(r0)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            return
    }

    private void b(boolean r9) {
            r8 = this;
            java.lang.String r0 = r8.f     // Catch: java.lang.Exception -> L4a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "showInterstitial isShowCall:"
            r1.append(r2)     // Catch: java.lang.Exception -> L4a
            r1.append(r9)     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.interstitial.a.a r0 = new com.mbridge.msdk.interstitial.a.a     // Catch: java.lang.Exception -> L4a
            android.content.Context r3 = r8.g     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = r8.i     // Catch: java.lang.Exception -> L4a
            java.lang.String r5 = r8.j     // Catch: java.lang.Exception -> L4a
            java.lang.String r6 = r8.h     // Catch: java.lang.Exception -> L4a
            r7 = 1
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.a()     // Catch: java.lang.Exception -> L4a
            if (r0 == 0) goto L2f
            r8.a(r0)     // Catch: java.lang.Exception -> L4a
            goto L57
        L2f:
            if (r9 == 0) goto L3d
            java.lang.String r9 = r8.f     // Catch: java.lang.Exception -> L4a
            java.lang.String r0 = "showInterstitial 发现cmapaign为空 去load一遍========="
            com.mbridge.msdk.foundation.tools.z.d(r9, r0)     // Catch: java.lang.Exception -> L4a
            r9 = 1
            r8.a(r9)     // Catch: java.lang.Exception -> L4a
            goto L57
        L3d:
            java.lang.String r9 = "no ads available can show"
            r8.c(r9)     // Catch: java.lang.Exception -> L4a
            java.lang.String r9 = r8.f     // Catch: java.lang.Exception -> L4a
            java.lang.String r0 = "showInterstitial 发现cmapaign为空"
            com.mbridge.msdk.foundation.tools.z.b(r9, r0)     // Catch: java.lang.Exception -> L4a
            return
        L4a:
            r9 = move-exception
            r9.printStackTrace()
            com.mbridge.msdk.out.InterstitialListener r9 = r8.n
            if (r9 == 0) goto L57
            java.lang.String r9 = "can't show because unknow error"
            r8.c(r9)
        L57:
            return
    }

    static java.lang.String c(com.mbridge.msdk.interstitial.c.a r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.interstitial.c.a r0, java.lang.String r1) {
            r0.o = r1
            return r1
    }

    private void c(java.lang.String r2) {
            r1 = this;
            android.os.Handler r0 = r1.l     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L17
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L13
            r0.obj = r2     // Catch: java.lang.Exception -> L13
            r2 = 4
            r0.what = r2     // Catch: java.lang.Exception -> L13
            android.os.Handler r2 = r1.l     // Catch: java.lang.Exception -> L13
            r2.sendMessage(r0)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            return
    }

    static android.os.Handler d(com.mbridge.msdk.interstitial.c.a r0) {
            android.os.Handler r0 = r0.l
            return r0
    }

    private void d() {
            r3 = this;
            java.lang.String r0 = r3.f     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "initUnitSetting"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L30
            r3.e()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = r3.i     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.c.d r0 = r0.e(r1, r2)     // Catch: java.lang.Exception -> L30
            r3.m = r0     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L34
            java.lang.String r0 = r3.i     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.f(r0)     // Catch: java.lang.Exception -> L30
            r3.m = r0     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r3.f     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "获取默认的unitsetting"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r0 = move-exception
            r0.printStackTrace()
        L34:
            return
    }

    private void e() {
            r4 = this;
            com.mbridge.msdk.c.c r0 = new com.mbridge.msdk.c.c     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            android.content.Context r1 = r4.g     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = r4.i     // Catch: java.lang.Exception -> Le
            r3 = 0
            r0.a(r1, r3, r3, r2)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            return
    }

    static void e(com.mbridge.msdk.interstitial.c.a r1) {
            android.os.Handler r1 = r1.l
            if (r1 == 0) goto L8
            r0 = 1
            r1.sendEmptyMessage(r0)
        L8:
            return
    }

    static void f(com.mbridge.msdk.interstitial.c.a r1) {
            android.os.Handler r1 = r1.l
            if (r1 == 0) goto L8
            r0 = 3
            r1.sendEmptyMessage(r0)
        L8:
            return
    }

    public final void a() {
            r5 = this;
            android.content.Context r0 = r5.g     // Catch: java.lang.Exception -> L9b
            if (r0 != 0) goto L11
            java.lang.String r0 = "context is null"
            r5.b(r0)     // Catch: java.lang.Exception -> L9b
            java.lang.String r0 = r5.f     // Catch: java.lang.Exception -> L9b
            java.lang.String r1 = "load context is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9b
            return
        L11:
            java.lang.String r0 = r5.i     // Catch: java.lang.Exception -> L9b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L9b
            if (r0 == 0) goto L26
            java.lang.String r0 = "unitid is null"
            r5.b(r0)     // Catch: java.lang.Exception -> L9b
            java.lang.String r0 = r5.f     // Catch: java.lang.Exception -> L9b
            java.lang.String r1 = "load unitid is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9b
            return
        L26:
            boolean r0 = r5.q     // Catch: java.lang.Exception -> L9b
            if (r0 != 0) goto L37
            java.lang.String r0 = "init error"
            r5.b(r0)     // Catch: java.lang.Exception -> L9b
            java.lang.String r0 = r5.f     // Catch: java.lang.Exception -> L9b
            java.lang.String r1 = "load init error"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9b
            return
        L37:
            r5.d()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.c.d r0 = r5.m     // Catch: java.lang.Exception -> L92
            if (r0 == 0) goto L96
            com.mbridge.msdk.c.d r0 = r5.m     // Catch: java.lang.Exception -> L92
            int r0 = r0.q()     // Catch: java.lang.Exception -> L92
            com.mbridge.msdk.c.d r1 = r5.m     // Catch: java.lang.Exception -> L92
            int r1 = r1.v()     // Catch: java.lang.Exception -> L92
            r2 = 1
            if (r0 > 0) goto L4e
            r0 = r2
        L4e:
            if (r1 > 0) goto L51
            r1 = r2
        L51:
            int r1 = r1 * r0
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.mbridge.msdk.interstitial.c.a.d     // Catch: java.lang.Exception -> L92
            if (r2 == 0) goto L69
            java.lang.String r2 = r5.i     // Catch: java.lang.Exception -> L92
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L92
            if (r2 != 0) goto L69
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.mbridge.msdk.interstitial.c.a.d     // Catch: java.lang.Exception -> L92
            java.lang.String r3 = r5.i     // Catch: java.lang.Exception -> L92
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L92
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L92
        L69:
            java.lang.String r2 = r5.f     // Catch: java.lang.Exception -> L92
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L92
            r3.<init>()     // Catch: java.lang.Exception -> L92
            java.lang.String r4 = "maxOffset:"
            r3.append(r4)     // Catch: java.lang.Exception -> L92
            r3.append(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = " apiCacheNum:"
            r3.append(r1)     // Catch: java.lang.Exception -> L92
            r3.append(r0)     // Catch: java.lang.Exception -> L92
            java.lang.String r0 = " mUnitId:"
            r3.append(r0)     // Catch: java.lang.Exception -> L92
            java.lang.String r0 = r5.i     // Catch: java.lang.Exception -> L92
            r3.append(r0)     // Catch: java.lang.Exception -> L92
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L92
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)     // Catch: java.lang.Exception -> L92
            goto L96
        L92:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L9b
        L96:
            r0 = 0
            r5.a(r0)     // Catch: java.lang.Exception -> L9b
            goto La4
        L9b:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "can't show because unknow error"
            r5.b(r0)
        La4:
            return
    }

    public final void a(com.mbridge.msdk.out.InterstitialListener r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final boolean a(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r4 = this;
            java.lang.String r0 = "catetory"
            java.lang.String r1 = "unit_id"
            r2 = 0
            r4.q = r2     // Catch: java.lang.Exception -> L7b
            if (r6 != 0) goto L11
            java.lang.String r5 = r4.f     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = "init error params==null"
            com.mbridge.msdk.foundation.tools.z.c(r5, r6)     // Catch: java.lang.Exception -> L7b
            return r2
        L11:
            if (r5 != 0) goto L1b
            java.lang.String r5 = r4.f     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = "init context ==null"
            com.mbridge.msdk.foundation.tools.z.c(r5, r6)     // Catch: java.lang.Exception -> L7b
            return r2
        L1b:
            boolean r3 = r6.containsKey(r1)     // Catch: java.lang.Exception -> L7b
            if (r3 == 0) goto L73
            java.lang.Object r3 = r6.get(r1)     // Catch: java.lang.Exception -> L7b
            boolean r3 = r3 instanceof java.lang.String     // Catch: java.lang.Exception -> L7b
            if (r3 != 0) goto L2a
            goto L73
        L2a:
            boolean r3 = r6.containsKey(r0)     // Catch: java.lang.Exception -> L7b
            if (r3 == 0) goto L40
            java.lang.Object r3 = r6.get(r0)     // Catch: java.lang.Exception -> L7b
            boolean r3 = r3 instanceof java.lang.String     // Catch: java.lang.Exception -> L7b
            if (r3 == 0) goto L40
            java.lang.Object r0 = r6.get(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L7b
            r4.h = r0     // Catch: java.lang.Exception -> L7b
        L40:
            java.lang.Object r0 = r6.get(r1)     // Catch: java.lang.Exception -> L7b
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L7b
            r4.i = r0     // Catch: java.lang.Exception -> L7b
            r4.g = r5     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L7b
            boolean r5 = r6.containsKey(r5)     // Catch: java.lang.Exception -> L7b
            if (r5 == 0) goto L64
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r6.get(r5)     // Catch: java.lang.Exception -> L7b
            if (r5 == 0) goto L64
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L7b
            java.lang.Object r5 = r6.get(r5)     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L7b
            r4.j = r5     // Catch: java.lang.Exception -> L7b
        L64:
            com.mbridge.msdk.out.MBridgeIds r5 = new com.mbridge.msdk.out.MBridgeIds     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = r4.j     // Catch: java.lang.Exception -> L7b
            java.lang.String r0 = r4.i     // Catch: java.lang.Exception -> L7b
            r5.<init>(r6, r0)     // Catch: java.lang.Exception -> L7b
            r4.k = r5     // Catch: java.lang.Exception -> L7b
            r5 = 1
            r4.q = r5     // Catch: java.lang.Exception -> L7b
            goto L81
        L73:
            java.lang.String r5 = r4.f     // Catch: java.lang.Exception -> L7b
            java.lang.String r6 = "init error,make sure you have unitid"
            com.mbridge.msdk.foundation.tools.z.c(r5, r6)     // Catch: java.lang.Exception -> L7b
            return r2
        L7b:
            r5 = move-exception
            r5.printStackTrace()
            r4.q = r2
        L81:
            boolean r5 = r4.q
            return r5
    }

    public final java.lang.String b() {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto L7
            java.lang.String r0 = r1.p
            return r0
        L7:
            java.lang.String r0 = r1.o
            return r0
    }

    public final void c() {
            r2 = this;
            android.content.Context r0 = r2.g     // Catch: java.lang.Exception -> L3f
            if (r0 != 0) goto L11
            java.lang.String r0 = "context is null"
            r2.c(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = r2.f     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = "show context is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3f
            return
        L11:
            java.lang.String r0 = r2.i     // Catch: java.lang.Exception -> L3f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3f
            if (r0 == 0) goto L26
            java.lang.String r0 = "unitid is null"
            r2.c(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = r2.f     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = "show unitid is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3f
            return
        L26:
            boolean r0 = r2.q     // Catch: java.lang.Exception -> L3f
            if (r0 != 0) goto L37
            java.lang.String r0 = "init error"
            r2.c(r0)     // Catch: java.lang.Exception -> L3f
            java.lang.String r0 = r2.f     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = "show init error"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L3f
            return
        L37:
            r2.d()     // Catch: java.lang.Exception -> L3f
            r0 = 1
            r2.b(r0)     // Catch: java.lang.Exception -> L3f
            goto L48
        L3f:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "can't show because unknow error"
            r2.c(r0)
        L48:
            return
    }
}
