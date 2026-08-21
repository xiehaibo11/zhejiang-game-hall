package com.sigmob.sdk.mraid2;

public class c {
    private final android.widget.FrameLayout a;
    private boolean b;
    private com.sigmob.sdk.mraid2.c.a c;
    private com.sigmob.sdk.mraid2.e d;
    private android.widget.LinearLayout e;
    private com.sigmob.sdk.mraid2.i f;
    private com.sigmob.sdk.mraid2.c.b g;
    private java.util.List<com.sigmob.sdk.mraid2.e> h;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> i;
    private com.sigmob.sdk.base.common.e j;
    private com.sigmob.sdk.mraid2.e.b k;




    public interface a {
        void a();

        void a(android.view.View r1);

        void a(com.sigmob.sdk.mraid2.e r1, com.sigmob.sdk.base.models.BaseAdUnit r2, org.json.JSONObject r3);

        void a(com.sigmob.windad.WindAdError r1);

        void a(boolean r1);

        void b();

        void c();
    }

    class b extends android.content.BroadcastReceiver {
        final com.sigmob.sdk.mraid2.c a;
        private android.content.Context b;
        private int c;

        b(com.sigmob.sdk.mraid2.c r1) {
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
                if (r1 == 0) goto L2a
                com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
                com.sigmob.sdk.mraid2.c r2 = r0.a
                android.content.Context r2 = com.sigmob.sdk.mraid2.c.c(r2)
                int r1 = r1.getScreenOrientation(r2)
                int r2 = r0.c
                if (r1 == r2) goto L2a
                r0.c = r1
                com.sigmob.sdk.mraid2.c r2 = r0.a
                r2.a(r1)
            L2a:
                return
        }
    }

    public c(android.content.Context r3, java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4, com.sigmob.sdk.base.common.e r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.h = r1
            com.sigmob.sdk.mraid2.c$2 r1 = new com.sigmob.sdk.mraid2.c$2
            r1.<init>(r2)
            r2.k = r1
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r3)
            r2.i = r4
            r2.j = r5
            android.widget.FrameLayout r1 = new android.widget.FrameLayout
            r1.<init>(r3)
            r2.a = r1
            r1.setBackgroundColor(r0)
            com.sigmob.sdk.mraid2.c$b r0 = new com.sigmob.sdk.mraid2.c$b
            r0.<init>(r2)
            r2.g = r0
            r0.a(r3)
            com.sigmob.sdk.mraid2.e r0 = new com.sigmob.sdk.mraid2.e
            android.widget.FrameLayout r1 = r2.a
            r0.<init>(r3, r4, r1)
            r2.d = r0
            r0.setAdSize(r5)
            com.sigmob.sdk.mraid2.e r3 = r2.d
            com.sigmob.sdk.mraid2.c$1 r4 = new com.sigmob.sdk.mraid2.c$1
            r4.<init>(r2)
            r3.setLoadListener(r4)
            com.sigmob.sdk.mraid2.e r3 = r2.d
            com.sigmob.sdk.mraid2.e$b r4 = r2.k
            r3.setNextWebViewListener(r4)
            java.util.List<com.sigmob.sdk.mraid2.e> r3 = r2.h
            r3.clear()
            java.util.List<com.sigmob.sdk.mraid2.e> r3 = r2.h
            com.sigmob.sdk.mraid2.e r4 = r2.d
            r3.add(r4)
            android.widget.FrameLayout r3 = r2.a
            com.sigmob.sdk.mraid2.e r4 = r2.d
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            r0 = -1
            r5.<init>(r0, r0)
            r3.addView(r4, r5)
            return
    }

    static android.widget.LinearLayout a(com.sigmob.sdk.mraid2.c r0, android.widget.LinearLayout r1) {
            r0.e = r1
            return r1
    }

    static com.sigmob.sdk.mraid2.c.a a(com.sigmob.sdk.mraid2.c r0) {
            com.sigmob.sdk.mraid2.c$a r0 = r0.c
            return r0
    }

    private com.sigmob.sdk.mraid2.e a(android.content.Context r8, com.sigmob.sdk.mraid2.e r9, org.json.JSONObject r10) {
            r7 = this;
            com.sigmob.sdk.mraid2.e r6 = new com.sigmob.sdk.mraid2.e
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r7.i
            android.widget.FrameLayout r3 = r7.a
            r0 = r6
            r1 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            com.sigmob.sdk.base.common.e r8 = r7.j
            r6.setAdSize(r8)
            com.sigmob.sdk.mraid2.e$b r8 = r7.k
            r6.setNextWebViewListener(r8)
            return r6
    }

    static com.sigmob.sdk.mraid2.e a(com.sigmob.sdk.mraid2.c r0, android.content.Context r1, com.sigmob.sdk.mraid2.e r2, org.json.JSONObject r3) {
            com.sigmob.sdk.mraid2.e r0 = r0.a(r1, r2, r3)
            return r0
    }

    static com.sigmob.sdk.mraid2.i a(com.sigmob.sdk.mraid2.c r0, com.sigmob.sdk.mraid2.i r1) {
            r0.f = r1
            return r1
    }

    static boolean a(com.sigmob.sdk.mraid2.c r0, boolean r1) {
            r0.b = r1
            return r1
    }

    static com.sigmob.sdk.mraid2.e b(com.sigmob.sdk.mraid2.c r0) {
            com.sigmob.sdk.mraid2.e r0 = r0.d
            return r0
    }

    static android.content.Context c(com.sigmob.sdk.mraid2.c r0) {
            android.content.Context r0 = r0.f()
            return r0
    }

    static java.util.List d(com.sigmob.sdk.mraid2.c r0) {
            java.util.List<com.sigmob.sdk.mraid2.e> r0 = r0.h
            return r0
    }

    static android.widget.LinearLayout e(com.sigmob.sdk.mraid2.c r0) {
            android.widget.LinearLayout r0 = r0.e
            return r0
    }

    private android.content.Context f() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.a
            if (r0 == 0) goto L9
            android.content.Context r0 = r0.getContext()
            return r0
        L9:
            r0 = 0
            return r0
    }

    static com.sigmob.sdk.mraid2.i f(com.sigmob.sdk.mraid2.c r0) {
            com.sigmob.sdk.mraid2.i r0 = r0.f
            return r0
    }

    static android.widget.FrameLayout g(com.sigmob.sdk.mraid2.c r0) {
            android.widget.FrameLayout r0 = r0.a
            return r0
    }

    static boolean h(com.sigmob.sdk.mraid2.c r0) {
            boolean r0 = r0.b
            return r0
    }

    public void a() {
            r4 = this;
            java.util.List<com.sigmob.sdk.mraid2.e> r0 = r4.h
            if (r0 == 0) goto L2c
            int r0 = r0.size()
            if (r0 <= 0) goto L2c
            r0 = 0
            r1 = r0
        Lc:
            java.util.List<com.sigmob.sdk.mraid2.e> r2 = r4.h
            int r2 = r2.size()
            if (r1 >= r2) goto L2c
            java.util.List<com.sigmob.sdk.mraid2.e> r2 = r4.h
            java.lang.Object r2 = r2.get(r1)
            com.sigmob.sdk.mraid2.e r2 = (com.sigmob.sdk.mraid2.e) r2
            com.sigmob.sdk.mraid2.b r3 = r2.getMraidBridge()
            if (r3 == 0) goto L29
            com.sigmob.sdk.mraid2.b r2 = r2.getMraidBridge()
            r2.a(r0)
        L29:
            int r1 = r1 + 1
            goto Lc
        L2c:
            return
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
            java.util.List<com.sigmob.sdk.mraid2.e> r3 = r2.h
            if (r3 == 0) goto L48
            int r3 = r3.size()
            if (r3 <= 0) goto L48
            r3 = 0
        L1f:
            java.util.List<com.sigmob.sdk.mraid2.e> r0 = r2.h
            int r0 = r0.size()
            if (r3 >= r0) goto L48
            java.util.List<com.sigmob.sdk.mraid2.e> r0 = r2.h
            java.lang.Object r0 = r0.get(r3)
            com.sigmob.sdk.mraid2.e r0 = (com.sigmob.sdk.mraid2.e) r0
            com.sigmob.sdk.mraid2.b r1 = r0.getMraidBridge()
            if (r1 == 0) goto L45
            com.sigmob.sdk.mraid2.b r1 = r0.getMraidBridge()
            r1.d()
            com.sigmob.sdk.mraid2.b r0 = r0.getMraidBridge()
            com.sigmob.sdk.base.common.e r1 = r2.j
            r0.a(r1)
        L45:
            int r3 = r3 + 1
            goto L1f
        L48:
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r7) {
            r6 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r7.getRvAdSetting()
            if (r0 == 0) goto L12
            int r0 = r7.getSkipSeconds()
            r1 = -1
            if (r0 == r1) goto L12
            int r7 = r7.getSkipSeconds()
            goto L13
        L12:
            r7 = 5
        L13:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.sigmob.sdk.mraid2.c$3 r1 = new com.sigmob.sdk.mraid2.c$3
            r1.<init>(r6)
            long r2 = (long) r7
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.postDelayed(r1, r2)
            return
    }

    public void a(com.sigmob.sdk.mraid2.c.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void b() {
            r3 = this;
            java.util.List<com.sigmob.sdk.mraid2.e> r0 = r3.h
            if (r0 == 0) goto L2f
            int r0 = r0.size()
            if (r0 <= 0) goto L2f
            r0 = 0
        Lb:
            java.util.List<com.sigmob.sdk.mraid2.e> r1 = r3.h
            int r1 = r1.size()
            if (r0 >= r1) goto L2f
            java.util.List<com.sigmob.sdk.mraid2.e> r1 = r3.h
            java.lang.Object r1 = r1.get(r0)
            com.sigmob.sdk.mraid2.e r1 = (com.sigmob.sdk.mraid2.e) r1
            r1.resumeTimers()
            com.sigmob.sdk.mraid2.b r2 = r1.getMraidBridge()
            if (r2 == 0) goto L2c
            com.sigmob.sdk.mraid2.b r1 = r1.getMraidBridge()
            r2 = 1
            r1.a(r2)
        L2c:
            int r0 = r0 + 1
            goto Lb
        L2f:
            return
    }

    public com.sigmob.sdk.mraid2.e c() {
            r1 = this;
            com.sigmob.sdk.mraid2.e r0 = r1.d
            return r0
    }

    public void d() {
            r1 = this;
            com.sigmob.sdk.mraid2.c$b r0 = r1.g     // Catch: java.lang.Throwable -> L9
            r0.a()     // Catch: java.lang.Throwable -> L9
            r0 = 0
            r1.d = r0     // Catch: java.lang.Throwable -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public android.widget.FrameLayout e() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.a
            return r0
    }
}
