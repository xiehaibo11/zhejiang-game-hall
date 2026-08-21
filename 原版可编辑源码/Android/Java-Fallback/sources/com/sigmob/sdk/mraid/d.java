package com.sigmob.sdk.mraid;

public class d {
    private boolean A;
    private com.sigmob.sdk.base.common.e B;
    private final com.sigmob.sdk.base.models.PlacementType a;
    private final com.sigmob.sdk.base.models.BaseAdUnit b;
    private final android.widget.FrameLayout c;
    private final com.sigmob.sdk.mraid.d.d d;
    private final com.sigmob.sdk.mraid.k e;
    private final com.sigmob.sdk.mraid.b f;
    private final com.sigmob.sdk.mraid.h g;
    private boolean h;
    private java.lang.Integer i;
    private java.lang.String j;
    private android.view.ViewGroup k;
    private com.sigmob.sdk.base.models.ViewState l;
    private com.sigmob.sdk.mraid.d.a m;
    private com.sigmob.sdk.mraid.d.e n;
    private com.sigmob.sdk.mraid.q o;
    private com.sigmob.sdk.mraid.d.f p;
    private com.sigmob.sdk.mraid.o q;
    private com.sigmob.sdk.mraid.d.c r;
    private java.lang.Integer s;
    private boolean t;
    private com.sigmob.sdk.mraid.j u;
    private boolean v;
    private java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> w;
    private final com.sigmob.sdk.mraid.b.c x;
    private final com.sigmob.sdk.mraid.b.b y;
    private com.sigmob.sdk.nativead.APKStatusBroadcastReceiver z;







    public interface a {
        void a();

        void a(float r1);

        void a(int r1, int r2, int r3, int r4, com.sigmob.sdk.mraid.a.a r5, boolean r6);

        void a(android.view.View r1);

        void a(com.sigmob.windad.WindAdError r1);

        void a(java.lang.String r1);

        void a(java.net.URI r1, int r2, java.lang.String r3);

        void a(boolean r1);

        void b();

        void b(float r1);

        void c();

        void d();

        void e();

        void f();

        void g();
    }

    public interface b {
        void a(com.sigmob.sdk.mraid.o r1, com.sigmob.sdk.base.common.r r2);
    }

    class c extends android.content.BroadcastReceiver {
        final com.sigmob.sdk.mraid.d a;
        private android.content.Context b;
        private int c;

        c(com.sigmob.sdk.mraid.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = -1
                r0.c = r1
                return
        }

        public void a() {
                r1 = this;
                android.content.Context r0 = r1.b
                if (r0 == 0) goto La
                r0.unregisterReceiver(r1)
                r0 = 0
                r1.b = r0
            La:
                return
        }

        public void a(android.content.Context r3) {
                r2 = this;
                com.czhj.sdk.common.utils.Preconditions.checkNotNull(r3)
                android.content.Context r3 = r3.getApplicationContext()
                r2.b = r3
                if (r3 == 0) goto L15
                android.content.IntentFilter r0 = new android.content.IntentFilter
                java.lang.String r1 = "android.intent.action.CONFIGURATION_CHANGED"
                r0.<init>(r1)
                r3.registerReceiver(r2, r0)
            L15:
                return
        }

        @Override
        public void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                android.content.Context r1 = r0.b
                if (r1 != 0) goto L5
                return
            L5:
                java.lang.String r1 = r2.getAction()
                java.lang.String r2 = "android.intent.action.CONFIGURATION_CHANGED"
                boolean r1 = r2.equals(r1)
                if (r1 == 0) goto L22
                com.sigmob.sdk.mraid.d r1 = r0.a
                int r1 = com.sigmob.sdk.mraid.d.o(r1)
                int r2 = r0.c
                if (r1 == r2) goto L22
                r0.c = r1
                com.sigmob.sdk.mraid.d r2 = r0.a
                r2.a(r1)
            L22:
                return
        }
    }

    static class d {
        private final android.os.Handler a;
        private com.sigmob.sdk.mraid.d.d.a b;

        static class a {
            int a;
            private final android.view.View[] b;
            private final android.os.Handler c;
            private java.lang.Runnable d;
            private final java.lang.Runnable e;


            private a(android.os.Handler r2, android.view.View[] r3) {
                    r1 = this;
                    r1.<init>()
                    com.sigmob.sdk.mraid.d$d$a$1 r0 = new com.sigmob.sdk.mraid.d$d$a$1
                    r0.<init>(r1)
                    r1.e = r0
                    r1.c = r2
                    r1.b = r3
                    return
            }

            a(android.os.Handler r1, android.view.View[] r2, com.sigmob.sdk.mraid.d.1 r3) {
                    r0 = this;
                    r0.<init>(r1, r2)
                    return
            }

            static android.view.View[] a(com.sigmob.sdk.mraid.d.d.a r0) {
                    android.view.View[] r0 = r0.b
                    return r0
            }

            private void b() {
                    r1 = this;
                    int r0 = r1.a
                    int r0 = r0 + (-1)
                    r1.a = r0
                    if (r0 != 0) goto L12
                    java.lang.Runnable r0 = r1.d
                    if (r0 == 0) goto L12
                    r0.run()
                    r0 = 0
                    r1.d = r0
                L12:
                    return
            }

            static void b(com.sigmob.sdk.mraid.d.d.a r0) {
                    r0.b()
                    return
            }

            void a() {
                    r2 = this;
                    android.os.Handler r0 = r2.c
                    java.lang.Runnable r1 = r2.e
                    r0.removeCallbacks(r1)
                    r0 = 0
                    r2.d = r0
                    return
            }

            void a(java.lang.Runnable r2) {
                    r1 = this;
                    r1.d = r2
                    android.view.View[] r2 = r1.b
                    int r2 = r2.length
                    r1.a = r2
                    android.os.Handler r2 = r1.c
                    java.lang.Runnable r0 = r1.e
                    r2.post(r0)
                    return
            }
        }

        d() {
                r1 = this;
                r1.<init>()
                android.os.Handler r0 = new android.os.Handler
                r0.<init>()
                r1.a = r0
                return
        }

        com.sigmob.sdk.mraid.d.d.a a(android.view.View... r4) {
                r3 = this;
                com.sigmob.sdk.mraid.d$d$a r0 = new com.sigmob.sdk.mraid.d$d$a
                android.os.Handler r1 = r3.a
                r2 = 0
                r0.<init>(r1, r4, r2)
                r3.b = r0
                return r0
        }

        void a() {
                r1 = this;
                com.sigmob.sdk.mraid.d$d$a r0 = r1.b
                if (r0 == 0) goto La
                r0.a()
                r0 = 0
                r1.b = r0
            La:
                return
        }
    }

    public interface e {
        void a(boolean r1);
    }

    public interface f {
        void a();

        void a(java.lang.Integer r1);

        void a(java.util.Map<java.lang.String, java.lang.String> r1);

        void b();

        void b(java.util.Map<java.lang.String, java.lang.String> r1);

        void c();

        void d();

        void e();

        void f();

        void g();

        void h();
    }

    public d(android.content.Context r8, com.sigmob.sdk.base.models.BaseAdUnit r9, com.sigmob.sdk.base.models.PlacementType r10) {
            r7 = this;
            com.sigmob.sdk.mraid.b r4 = new com.sigmob.sdk.mraid.b
            r4.<init>(r9, r10)
            com.sigmob.sdk.mraid.d$d r6 = new com.sigmob.sdk.mraid.d$d
            r6.<init>()
            r5 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    d(android.content.Context r3, com.sigmob.sdk.base.models.BaseAdUnit r4, com.sigmob.sdk.base.models.PlacementType r5, com.sigmob.sdk.mraid.b r6, com.sigmob.sdk.mraid.b r7, com.sigmob.sdk.mraid.d.d r8) {
            r2 = this;
            r2.<init>()
            r7 = 0
            r2.h = r7
            com.sigmob.sdk.base.models.ViewState r0 = com.sigmob.sdk.base.models.ViewState.LOADING
            r2.l = r0
            com.sigmob.sdk.mraid.d$c r0 = new com.sigmob.sdk.mraid.d$c
            r0.<init>(r2)
            r2.r = r0
            r0 = 1
            r2.t = r0
            com.sigmob.sdk.mraid.j r1 = com.sigmob.sdk.mraid.j.c
            r2.u = r1
            r2.v = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.w = r0
            com.sigmob.sdk.mraid.d$1 r0 = new com.sigmob.sdk.mraid.d$1
            r0.<init>(r2)
            r2.x = r0
            com.sigmob.sdk.mraid.d$2 r0 = new com.sigmob.sdk.mraid.d$2
            r0.<init>(r2)
            r2.y = r0
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r3)
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            r0.<init>(r3)
            r2.c = r0
            r2.b = r4
            r2.a = r5
            r2.f = r6
            r2.d = r8
            com.sigmob.sdk.base.models.ViewState r4 = com.sigmob.sdk.base.models.ViewState.LOADING
            r2.l = r4
            android.content.res.Resources r4 = r3.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            com.sigmob.sdk.mraid.k r5 = new com.sigmob.sdk.mraid.k
            float r4 = r4.density
            r5.<init>(r3, r4)
            r2.e = r5
            android.widget.FrameLayout r4 = r2.c
            r4.setBackgroundColor(r7)
            android.view.View r4 = new android.view.View
            r4.<init>(r3)
            com.sigmob.sdk.mraid.d$3 r5 = new com.sigmob.sdk.mraid.d$3
            r5.<init>(r2)
            r4.setOnTouchListener(r5)
            com.sigmob.sdk.mraid.d$c r4 = r2.r
            r4.a(r3)
            com.sigmob.sdk.mraid.b r3 = r2.f
            com.sigmob.sdk.mraid.b$b r4 = r2.y
            r3.a(r4)
            com.sigmob.sdk.mraid.b r3 = r2.f
            com.sigmob.sdk.mraid.b$c r4 = r2.x
            r3.a(r4)
            com.sigmob.sdk.mraid.h r3 = new com.sigmob.sdk.mraid.h
            r3.<init>()
            r2.g = r3
            return
    }

    static java.lang.Integer a(com.sigmob.sdk.mraid.d r0, java.lang.Integer r1) {
            r0.i = r1
            return r1
    }

    static java.util.HashMap a(com.sigmob.sdk.mraid.d r0) {
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = r0.w
            return r0
    }

    static void a(com.sigmob.sdk.mraid.d.a r0, com.sigmob.sdk.base.models.ViewState r1, com.sigmob.sdk.base.models.ViewState r2) {
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r0)
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r2)
            return
    }

    static void a(com.sigmob.sdk.mraid.d r0, java.lang.String r1, java.util.Map r2) {
            r0.b(r1, r2)
            return
    }

    private void a(java.lang.Runnable r11) {
            r10 = this;
            com.sigmob.sdk.mraid.d$d r0 = r10.d
            r0.a()
            com.sigmob.sdk.mraid.o r0 = r10.f()
            if (r0 != 0) goto Lc
            return
        Lc:
            android.content.Context r1 = r10.v()
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            com.sigmob.sdk.base.common.e r2 = r10.B
            if (r2 == 0) goto L2c
            com.sigmob.sdk.mraid.k r1 = r10.e
            int r2 = r2.a()
            com.sigmob.sdk.base.common.e r3 = r10.B
            int r3 = r3.b()
            r1.a(r2, r3)
            goto L35
        L2c:
            com.sigmob.sdk.mraid.k r2 = r10.e
            int r3 = r1.widthPixels
            int r1 = r1.heightPixels
            r2.a(r3, r1)
        L35:
            r1 = 2
            int[] r1 = new int[r1]
            android.view.ViewGroup r2 = r10.y()
            r2.getLocationOnScreen(r1)
            com.sigmob.sdk.mraid.k r3 = r10.e
            r4 = 0
            r5 = r1[r4]
            r6 = 1
            r7 = r1[r6]
            int r8 = r2.getWidth()
            int r9 = r2.getHeight()
            r3.a(r5, r7, r8, r9)
            com.sigmob.sdk.mraid.k r3 = r10.e
            r5 = r1[r4]
            r7 = r1[r6]
            int r8 = r2.getWidth()
            int r2 = r2.getHeight()
            r3.c(r5, r7, r8, r2)
            r0.getLocationOnScreen(r1)
            com.sigmob.sdk.mraid.k r2 = r10.e
            r3 = r1[r4]
            r1 = r1[r6]
            int r4 = r0.getWidth()
            int r0 = r0.getHeight()
            r2.b(r3, r1, r4, r0)
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getOrientationInt()
            int r0 = r0.intValue()
            if (r0 != r6) goto L88
            java.lang.String r0 = "portrait"
            goto L8a
        L88:
            java.lang.String r0 = "landscape"
        L8a:
            com.sigmob.sdk.base.models.CurrentAppOrientation r1 = new com.sigmob.sdk.base.models.CurrentAppOrientation
            r1.<init>(r0, r6)
            com.sigmob.sdk.mraid.b r0 = r10.f
            r0.a(r1)
            com.sigmob.sdk.mraid.b r0 = r10.f
            com.sigmob.sdk.mraid.k r1 = r10.e
            r0.a(r1)
            if (r11 == 0) goto La0
            r11.run()
        La0:
            return
    }

    private void a(java.lang.String r11, java.util.Map<java.lang.String, java.lang.String> r12) {
            r10 = this;
            com.sigmob.sdk.mraid.d$a r0 = r10.m
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r0 = "ext"
            java.lang.Object r0 = r12.get(r0)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r0 = com.sigmob.sdk.mraid.b.a(r0)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r1 = "ctime"
            java.lang.Object r1 = r12.get(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r1 = com.sigmob.sdk.mraid.b.a(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r2 = "state"
            java.lang.Object r12 = r12.get(r2)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r12 = com.sigmob.sdk.mraid.b.a(r12)     // Catch: java.lang.Throwable -> Lcd
            r2 = -1
            int r3 = r11.hashCode()     // Catch: java.lang.Throwable -> Lcd
            r4 = 0
            r5 = 5
            r6 = 4
            r7 = 3
            r8 = 2
            r9 = 1
            switch(r3) {
                case -1610203128: goto L6a;
                case -1102513700: goto L60;
                case -934326481: goto L56;
                case -900560382: goto L4c;
                case 112386354: goto L42;
                case 1293469449: goto L38;
                default: goto L37;
            }     // Catch: java.lang.Throwable -> Lcd
        L37:
            goto L73
        L38:
            java.lang.String r3 = "showSkipTime"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r5
            goto L73
        L42:
            java.lang.String r3 = "voice"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r8
            goto L73
        L4c:
            java.lang.String r3 = "skipAd"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r4
            goto L73
        L56:
            java.lang.String r3 = "reward"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r9
            goto L73
        L60:
            java.lang.String r3 = "companionClick"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r6
            goto L73
        L6a:
            java.lang.String r3 = "endcardShow"
            boolean r11 = r11.equals(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto L73
            r2 = r7
        L73:
            r11 = 0
            if (r2 == 0) goto Lbc
            if (r2 == r9) goto Laa
            if (r2 == r8) goto L93
            if (r2 == r7) goto L8d
            if (r2 == r6) goto L87
            if (r2 == r5) goto L81
            goto Lcd
        L81:
            com.sigmob.sdk.mraid.d$a r11 = r10.m     // Catch: java.lang.Throwable -> Lcd
            r11.b()     // Catch: java.lang.Throwable -> Lcd
            goto Lcd
        L87:
            com.sigmob.sdk.mraid.d$a r11 = r10.m     // Catch: java.lang.Throwable -> Lcd
            r11.a(r0)     // Catch: java.lang.Throwable -> Lcd
            goto Lcd
        L8d:
            com.sigmob.sdk.mraid.d$a r11 = r10.m     // Catch: java.lang.Throwable -> Lcd
            r11.a()     // Catch: java.lang.Throwable -> Lcd
            goto Lcd
        L93:
            java.lang.String r11 = "true"
            boolean r11 = r12.equalsIgnoreCase(r11)     // Catch: java.lang.Throwable -> Lcd
            if (r11 != 0) goto La3
            java.lang.String r11 = "1"
            boolean r11 = r12.equalsIgnoreCase(r11)     // Catch: java.lang.Throwable -> Lcd
            if (r11 == 0) goto La4
        La3:
            r4 = r9
        La4:
            com.sigmob.sdk.mraid.d$a r11 = r10.m     // Catch: java.lang.Throwable -> Lcd
            r11.a(r4)     // Catch: java.lang.Throwable -> Lcd
            goto Lcd
        Laa:
            java.lang.Float r11 = java.lang.Float.valueOf(r11)     // Catch: java.lang.Throwable -> Lcd
            java.lang.Float r11 = java.lang.Float.valueOf(r1)     // Catch: java.lang.Throwable -> Lb2
        Lb2:
            com.sigmob.sdk.mraid.d$a r12 = r10.m     // Catch: java.lang.Throwable -> Lcd
            float r11 = r11.floatValue()     // Catch: java.lang.Throwable -> Lcd
            r12.a(r11)     // Catch: java.lang.Throwable -> Lcd
            goto Lcd
        Lbc:
            java.lang.Float r11 = java.lang.Float.valueOf(r11)     // Catch: java.lang.Throwable -> Lcd
            java.lang.Float r11 = java.lang.Float.valueOf(r1)     // Catch: java.lang.Throwable -> Lc4
        Lc4:
            com.sigmob.sdk.mraid.d$a r12 = r10.m     // Catch: java.lang.Throwable -> Lcd
            float r11 = r11.floatValue()     // Catch: java.lang.Throwable -> Lcd
            r12.b(r11)     // Catch: java.lang.Throwable -> Lcd
        Lcd:
            return
    }

    static com.sigmob.sdk.mraid.b b(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.b r0 = r0.f
            return r0
    }

    private void b(com.sigmob.sdk.base.models.ViewState r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MRAID state set to "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.base.models.ViewState r0 = r2.l
            r2.l = r3
            com.sigmob.sdk.mraid.b r1 = r2.f
            r1.a(r3)
            com.sigmob.sdk.mraid.d$a r1 = r2.m
            if (r1 == 0) goto L24
            a(r1, r0, r3)
        L24:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setViewState state set to "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            r3 = 0
            r2.a(r3)
            return
    }

    static void b(com.sigmob.sdk.mraid.d r0, java.lang.String r1, java.util.Map r2) {
            r0.a(r1, r2)
            return
    }

    private void b(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r2 = this;
            com.sigmob.sdk.mraid.d$f r0 = r2.p
            if (r0 != 0) goto L5
            return
        L5:
            r0 = -1
            int r1 = r3.hashCode()
            switch(r1) {
                case -1741877423: goto L6b;
                case -1686946132: goto L61;
                case -1528092430: goto L57;
                case -916384160: goto L4c;
                case 123005777: goto L42;
                case 369958203: goto L38;
                case 488344453: goto L2e;
                case 858456394: goto L23;
                case 1024669788: goto L19;
                case 2133007979: goto Lf;
                default: goto Ld;
            }
        Ld:
            goto L74
        Lf:
            java.lang.String r1 = "AdPlaying"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 4
            goto L74
        L19:
            java.lang.String r1 = "AdClickThru"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 0
            goto L74
        L23:
            java.lang.String r1 = "AdVideoStart"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 9
            goto L74
        L2e:
            java.lang.String r1 = "AdError"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 1
            goto L74
        L38:
            java.lang.String r1 = "AdVideoFirstQuartile"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 6
            goto L74
        L42:
            java.lang.String r1 = "AdVideoComplete"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 5
            goto L74
        L4c:
            java.lang.String r1 = "AdVideoMidpoint"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 8
            goto L74
        L57:
            java.lang.String r1 = "AdVideoThirdQuartile"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 7
            goto L74
        L61:
            java.lang.String r1 = "AdImpression"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 2
            goto L74
        L6b:
            java.lang.String r1 = "AdPaused"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L74
            r0 = 3
        L74:
            switch(r0) {
                case 0: goto Lae;
                case 1: goto La8;
                case 2: goto La2;
                case 3: goto L9c;
                case 4: goto L96;
                case 5: goto L90;
                case 6: goto L8a;
                case 7: goto L84;
                case 8: goto L7e;
                case 9: goto L78;
                default: goto L77;
            }
        L77:
            goto Lb3
        L78:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.h()
            goto Lb3
        L7e:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.g()
            goto Lb3
        L84:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.f()
            goto Lb3
        L8a:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.e()
            goto Lb3
        L90:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.d()
            goto Lb3
        L96:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.c()
            goto Lb3
        L9c:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.b()
            goto Lb3
        La2:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.a()
            goto Lb3
        La8:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.b(r4)
            goto Lb3
        Lae:
            com.sigmob.sdk.mraid.d$f r3 = r2.p
            r3.a(r4)
        Lb3:
            return
    }

    static com.sigmob.sdk.mraid.o c(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.o r0 = r0.q
            return r0
    }

    static android.widget.FrameLayout d(com.sigmob.sdk.mraid.d r0) {
            android.widget.FrameLayout r0 = r0.c
            return r0
    }

    static com.sigmob.sdk.mraid.d.a e(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.d$a r0 = r0.m
            return r0
    }

    static com.sigmob.sdk.mraid.d.e f(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.d$e r0 = r0.n
            return r0
    }

    static boolean g(com.sigmob.sdk.mraid.d r0) {
            boolean r0 = r0.h
            return r0
    }

    static com.sigmob.sdk.mraid.d.f h(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.d$f r0 = r0.p
            return r0
    }

    static java.lang.Integer i(com.sigmob.sdk.mraid.d r0) {
            java.lang.Integer r0 = r0.i
            return r0
    }

    static android.content.Context j(com.sigmob.sdk.mraid.d r0) {
            android.content.Context r0 = r0.v()
            return r0
    }

    static com.sigmob.sdk.mraid.h k(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.mraid.h r0 = r0.g
            return r0
    }

    static com.sigmob.sdk.base.models.PlacementType l(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.base.models.PlacementType r0 = r0.a
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit m(com.sigmob.sdk.mraid.d r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.b
            return r0
    }

    static boolean n(com.sigmob.sdk.mraid.d r0) {
            boolean r0 = r0.A
            return r0
    }

    static int o(com.sigmob.sdk.mraid.d r0) {
            int r0 = r0.w()
            return r0
    }

    private android.content.Context v() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.c
            if (r0 == 0) goto L9
            android.content.Context r0 = r0.getContext()
            return r0
        L9:
            r0 = 0
            return r0
    }

    private int w() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.content.Context r1 = r2.v()
            int r0 = r0.getScreenOrientation(r1)
            return r0
    }

    private void x() {
            r1 = this;
            com.sigmob.sdk.mraid.b r0 = r1.f
            r0.b()
            r0 = 0
            r1.q = r0
            return
    }

    private android.view.ViewGroup y() {
            r2 = this;
            android.view.ViewGroup r0 = r2.k
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = r2.v()
            android.widget.FrameLayout r1 = r2.c
            android.view.View r0 = com.czhj.sdk.common.utils.ViewUtil.getTopmostView(r0, r1)
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto L16
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            goto L18
        L16:
            android.widget.FrameLayout r0 = r2.c
        L18:
            r2.k = r0
            return r0
    }

    int a(int r1, int r2, int r3) {
            r0 = this;
            int r2 = java.lang.Math.min(r2, r3)
            int r1 = java.lang.Math.max(r1, r2)
            return r1
    }

    public java.lang.String a() {
            r1 = this;
            com.sigmob.sdk.mraid.b r0 = r1.f
            java.lang.String r0 = r0.a()
            return r0
    }

    void a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handleOrientationChange "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r3)
            r3 = 0
            r2.a(r3)
            return
    }

    @java.lang.Deprecated
    void a(int r3, int r4) {
            r2 = this;
            com.sigmob.sdk.mraid.k r0 = r2.e
            r1 = 0
            r0.a(r1, r1, r3, r4)
            return
    }

    void a(int r1, int r2, int r3, int r4, com.sigmob.sdk.mraid.a.a r5, boolean r6) throws com.sigmob.sdk.mraid.c {
            r0 = this;
            return
    }

    public void a(android.app.Activity r5) {
            r4 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r4.b
            com.sigmob.sdk.base.models.rtb.RvAdSetting r5 = r5.getRvAdSetting()
            if (r5 == 0) goto L18
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r4.b
            int r5 = r5.getSkipSeconds()
            r0 = -1
            if (r5 == r0) goto L18
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r4.b
            int r5 = r5.getSkipSeconds()
            goto L19
        L18:
            r5 = 5
        L19:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.sigmob.sdk.mraid.d$4 r1 = new com.sigmob.sdk.mraid.d$4
            r1.<init>(r4)
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
            return
    }

    public void a(android.webkit.ValueCallback r2) {
            r1 = this;
            com.sigmob.sdk.mraid.b r0 = r1.f
            r0.a(r2)
            return
    }

    public void a(com.sigmob.sdk.base.common.e r1) {
            r0 = this;
            r0.B = r1
            return
    }

    @java.lang.Deprecated
    void a(com.sigmob.sdk.base.models.ViewState r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void a(com.sigmob.sdk.mraid.d.a r1) {
            r0 = this;
            r0.m = r1
            return
    }

    @java.lang.Deprecated
    void a(com.sigmob.sdk.mraid.d.c r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void a(com.sigmob.sdk.mraid.d.e r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void a(com.sigmob.sdk.mraid.d.f r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void a(com.sigmob.sdk.mraid.q r1) {
            r0 = this;
            r0.o = r1
            return
    }

    void a(com.sigmob.windad.WindAdError r2) {
            r1 = this;
            com.sigmob.sdk.mraid.d$a r0 = r1.m
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    void a(java.lang.String r1) {
            r0 = this;
            return
    }

    public void a(java.lang.String r4, com.sigmob.sdk.mraid.d.b r5) {
            r3 = this;
            com.sigmob.sdk.mraid.o r0 = new com.sigmob.sdk.mraid.o
            android.content.Context r1 = r3.v()
            r0.<init>(r1)
            r3.q = r0
            r1 = 1
            r0.a(r1)
            com.sigmob.sdk.mraid.o r0 = r3.q
            r1 = 0
            r0.setBackgroundColor(r1)
            if (r5 == 0) goto L1d
            com.sigmob.sdk.mraid.o r0 = r3.q
            r1 = 0
            r5.a(r0, r1)
        L1d:
            com.sigmob.sdk.mraid.b r5 = r3.f
            com.sigmob.sdk.mraid.o r0 = r3.q
            r5.a(r0)
            android.widget.FrameLayout r5 = r3.c
            com.sigmob.sdk.mraid.o r0 = r3.q
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
            com.sigmob.sdk.mraid.b r5 = r3.f
            android.content.Context r0 = r3.v()
            r5.a(r0, r4)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.sigmob.sdk.mraid.b r0 = r1.f
            r0.a(r2, r3)
            return
    }

    void a(java.net.URI r2, int r3, java.lang.String r4) {
            r1 = this;
            com.sigmob.sdk.mraid.d$a r0 = r1.m
            if (r0 == 0) goto L7
            r0.a(r2, r3, r4)
        L7:
            return
    }

    void a(java.net.URI r1, boolean r2) throws com.sigmob.sdk.mraid.c {
            r0 = this;
            return
    }

    public void a(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L8
            com.sigmob.sdk.mraid.b r1 = r0.f
            r1.f()
            goto Ld
        L8:
            com.sigmob.sdk.mraid.b r1 = r0.f
            r1.g()
        Ld:
            return
    }

    void a(boolean r3, com.sigmob.sdk.mraid.j r4) throws com.sigmob.sdk.mraid.c {
            r2 = this;
            boolean r0 = r2.a(r4)
            if (r0 == 0) goto L1e
            r2.t = r3
            r2.u = r4
            com.sigmob.sdk.base.models.ViewState r3 = r2.l
            com.sigmob.sdk.base.models.ViewState r4 = com.sigmob.sdk.base.models.ViewState.EXPANDED
            if (r3 == r4) goto L1a
            com.sigmob.sdk.base.models.PlacementType r3 = r2.a
            com.sigmob.sdk.base.models.PlacementType r4 = com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL
            if (r3 != r4) goto L1d
            boolean r3 = r2.v
            if (r3 != 0) goto L1d
        L1a:
            r2.n()
        L1d:
            return
        L1e:
            com.sigmob.sdk.mraid.c r3 = new com.sigmob.sdk.mraid.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to force orientation to "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    boolean a(android.webkit.ConsoleMessage r2) {
            r1 = this;
            com.sigmob.sdk.mraid.q r0 = r1.o
            if (r0 == 0) goto L9
            boolean r2 = r0.a(r2)
            return r2
        L9:
            r2 = 1
            return r2
    }

    boolean a(com.sigmob.sdk.mraid.j r7) {
            r6 = this;
            com.sigmob.sdk.mraid.j r0 = com.sigmob.sdk.mraid.j.c
            r1 = 1
            if (r7 != r0) goto L6
            return r1
        L6:
            android.widget.FrameLayout r0 = r6.c
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            r2 = 0
            if (r0 != 0) goto L10
            return r2
        L10:
            android.content.pm.PackageManager r3 = r0.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            android.content.ComponentName r4 = new android.content.ComponentName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            java.lang.Class r5 = r0.getClass()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            r4.<init>(r0, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            android.content.pm.ActivityInfo r0 = r3.getActivityInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            int r0 = r0.screenOrientation
            r3 = -1
            if (r0 == r3) goto L2e
            int r7 = r7.a()
            if (r0 != r7) goto L2d
            goto L2e
        L2d:
            r1 = r2
        L2e:
            return r1
        L2f:
            return r2
    }

    boolean a(java.lang.String r2, android.webkit.JsResult r3) {
            r1 = this;
            com.sigmob.sdk.mraid.q r0 = r1.o
            if (r0 == 0) goto L9
            boolean r2 = r0.a(r2, r3)
            return r2
        L9:
            r3.confirm()
            r2 = 1
            return r2
    }

    public void b() {
            r2 = this;
            com.sigmob.sdk.mraid.b r0 = r2.f
            r1 = 0
            r0.a(r1)
            return
    }

    void b(int r3) throws com.sigmob.sdk.mraid.c {
            r2 = this;
            android.widget.FrameLayout r0 = r2.c
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            if (r0 == 0) goto L3c
            com.sigmob.sdk.mraid.j r1 = r2.u
            boolean r1 = r2.a(r1)
            if (r1 == 0) goto L3c
            java.lang.Integer r1 = r2.s
            if (r1 != 0) goto L1e
            int r1 = r0.getRequestedOrientation()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2.s = r1
        L1e:
            r0.setRequestedOrientation(r3)     // Catch: java.lang.Exception -> L22
            goto L3b
        L22:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "lockOrientation: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L3b:
            return
        L3c:
            com.sigmob.sdk.mraid.c r3 = new com.sigmob.sdk.mraid.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Attempted to lock orientation to unsupported value: "
            r0.append(r1)
            com.sigmob.sdk.mraid.j r1 = r2.u
            java.lang.String r1 = r1.name()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public void b(java.lang.String r2) {
            r1 = this;
            com.sigmob.sdk.mraid.b r0 = r1.f
            r0.c(r2)
            return
    }

    public void b(java.lang.String r4, com.sigmob.sdk.mraid.d.b r5) {
            r3 = this;
            com.sigmob.sdk.mraid.o r0 = new com.sigmob.sdk.mraid.o
            android.content.Context r1 = r3.v()
            r0.<init>(r1)
            r3.q = r0
            r1 = 1
            r0.a(r1)
            com.sigmob.sdk.mraid.o r0 = r3.q
            r1 = 0
            r0.setBackgroundColor(r1)
            if (r5 == 0) goto L1d
            com.sigmob.sdk.mraid.o r0 = r3.q
            r1 = 0
            r5.a(r0, r1)
        L1d:
            com.sigmob.sdk.mraid.b r5 = r3.f
            com.sigmob.sdk.mraid.o r0 = r3.q
            r5.a(r0)
            android.widget.FrameLayout r5 = r3.c
            com.sigmob.sdk.mraid.o r0 = r3.q
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
            com.sigmob.sdk.mraid.b r5 = r3.f
            r5.b(r4)
            return
    }

    public void b(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L8
            com.sigmob.sdk.mraid.b r1 = r0.f
            r1.h()
            goto Ld
        L8:
            com.sigmob.sdk.mraid.b r1 = r0.f
            r1.g()
        Ld:
            return
    }

    public void c() {
            r2 = this;
            com.sigmob.sdk.mraid.o r0 = r2.q
            if (r0 == 0) goto L7
            r0.resumeTimers()
        L7:
            com.sigmob.sdk.mraid.b r0 = r2.f
            r1 = 1
            r0.a(r1)
            return
    }

    public void c(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L7
            com.sigmob.sdk.mraid.b r1 = r0.f
            r1.i()
        L7:
            return
    }

    public void d() {
            r5 = this;
            com.sigmob.sdk.base.models.ExposureChange r0 = new com.sigmob.sdk.base.models.ExposureChange
            android.graphics.Rect r1 = new android.graphics.Rect
            android.view.ViewGroup r2 = r5.y()
            int r2 = r2.getWidth()
            android.view.ViewGroup r3 = r5.y()
            int r3 = r3.getHeight()
            r4 = 0
            r1.<init>(r4, r4, r2, r3)
            r2 = 1120403456(0x42c80000, float:100.0)
            r3 = 0
            r0.<init>(r2, r1, r3)
            com.sigmob.sdk.mraid.b r1 = r5.f
            r1.a(r0)
            return
    }

    public void d(boolean r2) {
            r1 = this;
            r0 = 1
            r1.v = r0
            com.sigmob.sdk.mraid.o r0 = r1.q
            if (r0 == 0) goto La
            r0.b(r2)
        La:
            return
    }

    public java.lang.Integer e() {
            r2 = this;
            java.lang.Integer r0 = r2.i
            if (r0 == 0) goto L5
            return r0
        L5:
            com.sigmob.sdk.mraid.b r0 = r2.f
            com.sigmob.sdk.mraid.d$5 r1 = new com.sigmob.sdk.mraid.d$5
            r1.<init>(r2)
            r0.b(r1)
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    protected void e(boolean r2) {
            r1 = this;
            r1.h = r2
            com.sigmob.sdk.mraid.d$e r0 = r1.n
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public com.sigmob.sdk.mraid.o f() {
            r1 = this;
            com.sigmob.sdk.mraid.o r0 = r1.q
            return r0
    }

    boolean g() {
            r3 = this;
            android.widget.FrameLayout r0 = r3.c
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            if (r0 == 0) goto L22
            com.sigmob.sdk.mraid.o r1 = r3.f()
            if (r1 != 0) goto Lf
            goto L22
        Lf:
            com.sigmob.sdk.base.models.PlacementType r1 = r3.a
            com.sigmob.sdk.base.models.PlacementType r2 = com.sigmob.sdk.base.models.PlacementType.INLINE
            if (r1 == r2) goto L17
            r0 = 1
            return r0
        L17:
            com.sigmob.sdk.mraid.h r1 = r3.g
            com.sigmob.sdk.mraid.o r2 = r3.f()
            boolean r0 = r1.a(r0, r2)
            return r0
        L22:
            r0 = 0
            return r0
    }

    void h() {
            r7 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.Integer r0 = r0.getOrientationInt()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto L12
            java.lang.String r0 = "portrait"
            goto L14
        L12:
            java.lang.String r0 = "landscape"
        L14:
            android.content.Context r2 = r7.v()
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            com.sigmob.sdk.base.common.e r3 = r7.B
            if (r3 == 0) goto L34
            com.sigmob.sdk.mraid.k r2 = r7.e
            int r3 = r3.a()
            com.sigmob.sdk.base.common.e r4 = r7.B
            int r4 = r4.b()
            r2.a(r3, r4)
            goto L3d
        L34:
            com.sigmob.sdk.mraid.k r3 = r7.e
            int r4 = r2.widthPixels
            int r2 = r2.heightPixels
            r3.a(r4, r2)
        L3d:
            android.view.ViewGroup r2 = r7.y()
            com.sigmob.sdk.mraid.k r3 = r7.e
            int r4 = r2.getMeasuredWidth()
            int r5 = r2.getMeasuredHeight()
            r6 = 0
            r3.a(r6, r6, r4, r5)
            com.sigmob.sdk.mraid.k r3 = r7.e
            int r4 = r2.getMeasuredWidth()
            int r5 = r2.getMeasuredHeight()
            r3.c(r6, r6, r4, r5)
            com.sigmob.sdk.mraid.k r3 = r7.e
            int r4 = r2.getMeasuredWidth()
            int r2 = r2.getMeasuredHeight()
            r3.b(r6, r6, r4, r2)
            com.sigmob.sdk.base.models.CurrentAppOrientation r2 = new com.sigmob.sdk.base.models.CurrentAppOrientation
            r2.<init>(r0, r1)
            com.sigmob.sdk.mraid.b r0 = r7.f
            r0.a(r2)
            com.sigmob.sdk.mraid.b r0 = r7.f
            com.sigmob.sdk.mraid.k r1 = r7.e
            r0.a(r1)
            return
    }

    void i() {
            r2 = this;
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            android.os.Handler r0 = r0.getHandler()
            com.sigmob.sdk.mraid.d$6 r1 = new com.sigmob.sdk.mraid.d$6
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    void j() {
            r2 = this;
            r0 = 1
            r2.A = r0     // Catch: java.lang.Throwable -> L34
            r2.h()     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.DEFAULT     // Catch: java.lang.Throwable -> L34
            r2.b(r1)     // Catch: java.lang.Throwable -> L34
            r2.d()     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.mraid.b r1 = r2.f     // Catch: java.lang.Throwable -> L34
            r1.e()     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.mraid.b r1 = r2.f     // Catch: java.lang.Throwable -> L34
            r1.a(r0)     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.mraid.b r0 = r2.f     // Catch: java.lang.Throwable -> L2e
            r0.j()     // Catch: java.lang.Throwable -> L2e
            r2.n()     // Catch: java.lang.Throwable -> L2e
            com.sigmob.sdk.mraid.b r0 = r2.f     // Catch: java.lang.Throwable -> L2e
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L2e
            android.location.Location r1 = r1.getLocation()     // Catch: java.lang.Throwable -> L2e
            r0.a(r1)     // Catch: java.lang.Throwable -> L2e
            goto L3a
        L2e:
            java.lang.String r0 = "Failed to apply orientation."
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> L34
            goto L3a
        L34:
            r0 = move-exception
            java.lang.String r1 = "handlePageLoad error"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L3a:
            return
    }

    public void k() {
            r1 = this;
            r0 = 0
            r1.v = r0
            com.sigmob.sdk.mraid.o r0 = r1.q
            if (r0 == 0) goto La
            r0.onResume()
        La:
            return
    }

    public void l() {
            r2 = this;
            com.sigmob.sdk.mraid.d$d r0 = r2.d
            r0.a()
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = r2.w
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.mraid.i r1 = (com.sigmob.sdk.mraid.i) r1
            r1.c()
            goto Lf
        L1f:
            java.util.HashMap<java.lang.String, com.sigmob.sdk.mraid.i> r0 = r2.w
            r0.clear()
            com.sigmob.sdk.mraid.d$c r0 = r2.r     // Catch: java.lang.Throwable -> L29
            r0.a()     // Catch: java.lang.Throwable -> L29
        L29:
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = r2.z     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L34
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = r2.z     // Catch: java.lang.Throwable -> L34
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r1 = r2.z     // Catch: java.lang.Throwable -> L34
            r0.b(r1)     // Catch: java.lang.Throwable -> L34
        L34:
            boolean r0 = r2.v
            if (r0 != 0) goto L3c
            r0 = 1
            r2.d(r0)
        L3c:
            r2.x()
            r2.o()
            return
    }

    protected void m() {
            r4 = this;
            com.sigmob.sdk.mraid.o r0 = r4.q
            if (r0 != 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.LOADING
            if (r0 == r1) goto L55
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.HIDDEN
            if (r0 != r1) goto L12
            goto L55
        L12:
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.EXPANDED
            if (r0 == r1) goto L1e
            com.sigmob.sdk.base.models.PlacementType r0 = r4.a
            com.sigmob.sdk.base.models.PlacementType r1 = com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL
            if (r0 != r1) goto L21
        L1e:
            r4.o()
        L21:
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.RESIZED
            if (r0 == r1) goto L3d
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.EXPANDED
            if (r0 != r1) goto L2e
            goto L3d
        L2e:
            com.sigmob.sdk.base.models.ViewState r0 = r4.l
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.DEFAULT
            if (r0 != r1) goto L55
            android.widget.FrameLayout r0 = r4.c
            r1 = 4
            r0.setVisibility(r1)
            com.sigmob.sdk.base.models.ViewState r0 = com.sigmob.sdk.base.models.ViewState.HIDDEN
            goto L52
        L3d:
            android.widget.FrameLayout r0 = r4.c
            com.sigmob.sdk.mraid.o r1 = r4.q
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
            android.widget.FrameLayout r0 = r4.c
            r1 = 0
            r0.setVisibility(r1)
            com.sigmob.sdk.base.models.ViewState r0 = com.sigmob.sdk.base.models.ViewState.DEFAULT
        L52:
            r4.b(r0)
        L55:
            return
    }

    void n() throws com.sigmob.sdk.mraid.c {
            r2 = this;
            com.sigmob.sdk.mraid.j r0 = r2.u
            com.sigmob.sdk.mraid.j r1 = com.sigmob.sdk.mraid.j.c
            if (r0 != r1) goto L27
            boolean r0 = r2.t
            if (r0 == 0) goto Le
            r2.o()
            goto L30
        Le:
            android.widget.FrameLayout r0 = r2.c
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            if (r0 == 0) goto L1f
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r0 = r1.getScreenOrientation(r0)
            goto L2d
        L1f:
            com.sigmob.sdk.mraid.c r0 = new com.sigmob.sdk.mraid.c
            java.lang.String r1 = "Unable to set MRAID expand orientation to 'none'; expected passed in Activity Context."
            r0.<init>(r1)
            throw r0
        L27:
            com.sigmob.sdk.mraid.j r0 = r2.u
            int r0 = r0.a()
        L2d:
            r2.b(r0)
        L30:
            return
    }

    void o() {
            r3 = this;
            android.widget.FrameLayout r0 = r3.c     // Catch: java.lang.Exception -> L19
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L15
            java.lang.Integer r1 = r3.s     // Catch: java.lang.Exception -> L19
            if (r1 == 0) goto L15
            java.lang.Integer r1 = r3.s     // Catch: java.lang.Exception -> L19
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L19
            r0.setRequestedOrientation(r1)     // Catch: java.lang.Exception -> L19
        L15:
            r0 = 0
            r3.s = r0     // Catch: java.lang.Exception -> L19
            goto L32
        L19:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unApplyOrientation: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L32:
            return
    }

    public android.widget.FrameLayout p() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.c
            return r0
    }

    @java.lang.Deprecated
    com.sigmob.sdk.base.models.ViewState q() {
            r1 = this;
            com.sigmob.sdk.base.models.ViewState r0 = r1.l
            return r0
    }

    @java.lang.Deprecated
    java.lang.Integer r() {
            r1 = this;
            java.lang.Integer r0 = r1.s
            return r0
    }

    @java.lang.Deprecated
    boolean s() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    @java.lang.Deprecated
    com.sigmob.sdk.mraid.j t() {
            r1 = this;
            com.sigmob.sdk.mraid.j r0 = r1.u
            return r0
    }

    @java.lang.Deprecated
    com.sigmob.sdk.mraid.o u() {
            r1 = this;
            com.sigmob.sdk.mraid.o r0 = r1.q
            return r0
    }
}
