package com.tkay.expressad.video.module;

public class TkayH5EndCardView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge, com.tkay.expressad.video.signal.f, com.tkay.expressad.video.signal.h {
    private static final java.lang.String A = "tkay_reward_endcard_h5";
    private static final java.lang.String B = "portrait";
    private static final java.lang.String C = "landscape";
    private static final int D = 1;
    private static final int E = 2;
    private static final int F = 20;
    private static final int G = 15;
    private static final int Q = 100;
    protected static final java.lang.String n = "orientation";
    protected static final java.lang.String o = "webviewshow";
    private com.tkay.expressad.widget.FeedBackButton H;
    private boolean I;
    private boolean J;
    private int K;
    private int L;
    private boolean M;
    private boolean N;
    private int O;
    private long P;
    private boolean R;
    private boolean S;
    private boolean T;
    private boolean U;
    private boolean V;
    private boolean W;
    private boolean aa;
    private boolean ab;
    private java.lang.String ac;
    private com.tkay.expressad.video.signal.factory.b ad;
    private boolean ae;
    private boolean af;
    protected android.view.View p;
    protected android.widget.RelativeLayout q;
    protected android.widget.ImageView r;
    protected com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView s;
    protected android.os.Handler t;
    protected java.lang.String u;
    protected boolean v;
    protected boolean w;
    protected java.lang.String x;
    android.os.Handler y;
    boolean z;





    final class 5 implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;

        5(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a
                com.tkay.expressad.widget.FeedBackButton r0 = com.tkay.expressad.video.module.TkayH5EndCardView.j(r0)
                r1 = 0
                r0.setVisibility(r1)
                return
        }
    }

    final class 6 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;

        6(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
                r0.<init>()     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1a
                android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L1a
                if (r1 == 0) goto L15
                java.lang.String r1 = "status"
                r2 = 1
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L1a
            L15:
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1a
                goto L20
            L1a:
                r0 = move-exception
                r0.getMessage()
                java.lang.String r0 = ""
            L20:
                byte[] r0 = r0.getBytes()
                r1 = 2
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.module.TkayH5EndCardView r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.s
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void b() {
                r3 = this;
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
                r1.<init>()     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1a
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1a
                if (r2 == 0) goto L15
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1a
            L15:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1a
                goto L20
            L1a:
                r1 = move-exception
                r1.getMessage()
                java.lang.String r1 = ""
            L20:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.module.TkayH5EndCardView r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.s
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void c() {
                r3 = this;
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
                r1.<init>()     // Catch: java.lang.Throwable -> L1a
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1a
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1a
                if (r2 == 0) goto L15
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1a
            L15:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1a
                goto L20
            L1a:
                r1 = move-exception
                r1.getMessage()
                java.lang.String r1 = ""
            L20:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.module.TkayH5EndCardView r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.s
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }
    }

    private class a implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;
        private com.tkay.expressad.video.module.TkayH5EndCardView b;

        public a(com.tkay.expressad.video.module.TkayH5EndCardView r1, com.tkay.expressad.video.module.TkayH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                r0 = 300(0x12c, double:1.48E-321)
                java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L6
                goto La
            L6:
                r0 = move-exception
                r0.printStackTrace()
            La:
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.b
                if (r0 == 0) goto L1b
                android.os.Handler r0 = r0.y
                if (r0 == 0) goto L1b
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.b
                android.os.Handler r0 = r0.y
                r1 = 100
                r0.sendEmptyMessage(r1)
            L1b:
                return
        }
    }

    private class b implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;
        private com.tkay.expressad.video.module.TkayH5EndCardView b;

        public b(com.tkay.expressad.video.module.TkayH5EndCardView r1, com.tkay.expressad.video.module.TkayH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.b
                if (r0 == 0) goto L27
                boolean r0 = com.tkay.expressad.video.module.TkayH5EndCardView.c(r0)
                if (r0 != 0) goto L27
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.b
                com.tkay.expressad.video.module.TkayH5EndCardView.d(r0)
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.b
                r1 = 0
                r0.v = r1
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.a
                r1 = 5
                java.lang.String r2 = "timeout"
                r0.reportRenderResult(r2, r1)
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.b
                com.tkay.expressad.video.module.a.a r0 = r0.e
                r1 = 127(0x7f, float:1.78E-43)
                java.lang.String r2 = ""
                r0.a(r1, r2)
            L27:
                return
        }
    }

    private static class c implements java.lang.Runnable {
        private com.tkay.expressad.video.module.TkayH5EndCardView a;
        private int b;

        public c(com.tkay.expressad.video.module.TkayH5EndCardView r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a
                if (r0 == 0) goto L36
                com.tkay.expressad.foundation.d.c r0 = r0.b
                if (r0 == 0) goto L36
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L32
                boolean r0 = com.tkay.expressad.video.module.TkayH5EndCardView.m(r0)     // Catch: java.lang.Throwable -> L32
                if (r0 == 0) goto L11
                return
            L11:
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L32
                com.tkay.expressad.video.module.TkayH5EndCardView.n(r0)     // Catch: java.lang.Throwable -> L32
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L32
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Throwable -> L32
                java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L32
                boolean r0 = com.tkay.expressad.foundation.h.w.b(r0)     // Catch: java.lang.Throwable -> L32
                if (r0 == 0) goto L31
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a     // Catch: java.lang.Throwable -> L32
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Throwable -> L32
                java.lang.String r0 = r0.I()     // Catch: java.lang.Throwable -> L32
                java.lang.String r1 = ".zip"
                r0.contains(r1)     // Catch: java.lang.Throwable -> L32
            L31:
                return
            L32:
                r0 = move-exception
                r0.getMessage()
            L36:
                return
        }
    }

    private class d implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;
        private com.tkay.expressad.video.module.TkayH5EndCardView b;

        public d(com.tkay.expressad.video.module.TkayH5EndCardView r1, com.tkay.expressad.video.module.TkayH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.b
                if (r0 == 0) goto L7
                com.tkay.expressad.video.module.TkayH5EndCardView.e(r0)
            L7:
                return
        }
    }

    private class e implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;
        private com.tkay.expressad.video.module.TkayH5EndCardView b;

        public e(com.tkay.expressad.video.module.TkayH5EndCardView r1, com.tkay.expressad.video.module.TkayH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.b
                if (r0 == 0) goto L7
                com.tkay.expressad.video.module.TkayH5EndCardView.f(r0)
            L7:
                return
        }
    }

    private class f implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayH5EndCardView a;
        private com.tkay.expressad.video.module.TkayH5EndCardView b;

        public f(com.tkay.expressad.video.module.TkayH5EndCardView r1, com.tkay.expressad.video.module.TkayH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.b
                if (r0 == 0) goto L15
                boolean r0 = com.tkay.expressad.video.module.TkayH5EndCardView.k(r0)
                if (r0 != 0) goto L10
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.a
                r1 = 0
                r0.setCloseVisible(r1)
            L10:
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.b
                com.tkay.expressad.video.module.TkayH5EndCardView.l(r0)
            L15:
                return
        }
    }

    public TkayH5EndCardView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.I = r3
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r2.t = r0
            r2.v = r3
            r2.w = r3
            r2.J = r3
            r0 = 1
            r2.K = r0
            r2.L = r0
            r2.M = r3
            r2.N = r3
            r2.O = r0
            r0 = 0
            r2.P = r0
            r2.R = r3
            r2.S = r3
            r2.T = r3
            r2.U = r3
            r2.V = r3
            r2.W = r3
            r2.aa = r3
            r2.ab = r3
            java.lang.String r0 = ""
            r2.ac = r0
            com.tkay.expressad.video.module.TkayH5EndCardView$1 r0 = new com.tkay.expressad.video.module.TkayH5EndCardView$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.y = r0
            r2.ae = r3
            r2.af = r3
            r2.z = r3
            return
    }

    public TkayH5EndCardView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r3 = 0
            r2.I = r3
            android.os.Handler r4 = new android.os.Handler
            r4.<init>()
            r2.t = r4
            r2.v = r3
            r2.w = r3
            r2.J = r3
            r4 = 1
            r2.K = r4
            r2.L = r4
            r2.M = r3
            r2.N = r3
            r2.O = r4
            r0 = 0
            r2.P = r0
            r2.R = r3
            r2.S = r3
            r2.T = r3
            r2.U = r3
            r2.V = r3
            r2.W = r3
            r2.aa = r3
            r2.ab = r3
            java.lang.String r4 = ""
            r2.ac = r4
            com.tkay.expressad.video.module.TkayH5EndCardView$1 r4 = new com.tkay.expressad.video.module.TkayH5EndCardView$1
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r4.<init>(r2, r0)
            r2.y = r4
            r2.ae = r3
            r2.af = r3
            r2.z = r3
            return
    }

    static int a(com.tkay.expressad.video.module.TkayH5EndCardView r0, int r1) {
            r0.O = r1
            return r1
    }

    private void a(long r5, boolean r7) {
            r4 = this;
            boolean r0 = r4.M     // Catch: java.lang.Throwable -> L83
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.M = r0     // Catch: java.lang.Throwable -> L83
            java.lang.String r0 = "2"
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r1.I()     // Catch: java.lang.Throwable -> L83
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L26
            com.tkay.expressad.foundation.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r1.I()     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = ".zip"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L26
            java.lang.String r0 = "1"
        L26:
            r1 = 10
            java.lang.String r2 = "ready yes"
            if (r7 == 0) goto L31
            r1 = 12
            java.lang.String r2 = "ready timeout"
            goto L3a
        L31:
            int r7 = r4.O     // Catch: java.lang.Throwable -> L83
            r3 = 2
            if (r7 != r3) goto L3a
            r1 = 11
            java.lang.String r2 = "ready no"
        L3a:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = "insertEndCardReadyState result:"
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L83
            r7.append(r1)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = " endCardLoadTime:"
            r7.append(r1)     // Catch: java.lang.Throwable -> L83
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = " endcardurl:"
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = r5.I()     // Catch: java.lang.Throwable -> L83
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "  id:"
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            com.tkay.expressad.foundation.d.c r5 = r4.b     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = r5.aZ()     // Catch: java.lang.Throwable -> L83
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "  unitid:"
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = r4.x     // Catch: java.lang.Throwable -> L83
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "  reason:"
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            r7.append(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = "  type:"
            r7.append(r5)     // Catch: java.lang.Throwable -> L83
            r7.append(r0)     // Catch: java.lang.Throwable -> L83
            return
        L83:
            r5 = move-exception
            r5.getMessage()
            return
    }

    static void a(com.tkay.expressad.video.module.TkayH5EndCardView r5, long r6) {
            boolean r0 = r5.M     // Catch: java.lang.Throwable -> L7c
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.M = r0     // Catch: java.lang.Throwable -> L7c
            java.lang.String r0 = "2"
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = r1.I()     // Catch: java.lang.Throwable -> L7c
            boolean r1 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L26
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = r1.I()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = ".zip"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L26
            java.lang.String r0 = "1"
        L26:
            r1 = 10
            java.lang.String r2 = "ready yes"
            int r3 = r5.O     // Catch: java.lang.Throwable -> L7c
            r4 = 2
            if (r3 != r4) goto L33
            r1 = 11
            java.lang.String r2 = "ready no"
        L33:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            java.lang.String r4 = "insertEndCardReadyState result:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L7c
            r3.append(r1)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = " endCardLoadTime:"
            r3.append(r1)     // Catch: java.lang.Throwable -> L7c
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = " endcardurl:"
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            com.tkay.expressad.foundation.d.c r6 = r5.b     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = r6.I()     // Catch: java.lang.Throwable -> L7c
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = "  id:"
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            com.tkay.expressad.foundation.d.c r6 = r5.b     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = r6.aZ()     // Catch: java.lang.Throwable -> L7c
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r6 = "  unitid:"
            r3.append(r6)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r5 = r5.x     // Catch: java.lang.Throwable -> L7c
            r3.append(r5)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r5 = "  reason:"
            r3.append(r5)     // Catch: java.lang.Throwable -> L7c
            r3.append(r2)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r5 = "  type:"
            r3.append(r5)     // Catch: java.lang.Throwable -> L7c
            r3.append(r0)     // Catch: java.lang.Throwable -> L7c
            return
        L7c:
            r5 = move-exception
            r5.getMessage()
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Exception -> L2b
            java.lang.String r0 = r0.ad()     // Catch: java.lang.Exception -> L2b
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2b
            if (r1 != 0) goto L11
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Exception -> L2b
            r1.p(r4)     // Catch: java.lang.Exception -> L2b
        L11:
            com.tkay.expressad.a.a r4 = new com.tkay.expressad.a.a     // Catch: java.lang.Exception -> L2b
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r3.x     // Catch: java.lang.Exception -> L2b
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L2b
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L2b
            r4.p(r0)     // Catch: java.lang.Exception -> L2b
            com.tkay.expressad.video.module.a.a r4 = r3.e     // Catch: java.lang.Exception -> L2b
            r0 = 126(0x7e, float:1.77E-43)
            java.lang.String r1 = ""
            r4.a(r0, r1)     // Catch: java.lang.Exception -> L2b
            return
        L2b:
            r4 = move-exception
            r4.getMessage()
            return
    }

    private boolean a(android.view.View r3) {
            r2 = this;
            java.lang.String r0 = "tkay_windwv_close"
            int r0 = r2.findID(r0)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.r = r0
            java.lang.String r0 = "tkay_windwv_content_rl"
            int r0 = r2.findID(r0)
            android.view.View r3 = r3.findViewById(r0)
            android.widget.RelativeLayout r3 = (android.widget.RelativeLayout) r3
            r2.q = r3
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView
            android.content.Context r0 = r2.getContext()
            r3.<init>(r0)
            r2.s = r3
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r3.<init>(r0, r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            r0.setLayoutParams(r3)
            android.widget.RelativeLayout r3 = r2.q
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            r3.addView(r0)
            r3 = 2
            android.view.View[] r3 = new android.view.View[r3]
            android.widget.ImageView r0 = r2.r
            r1 = 0
            r3[r1] = r0
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            r1 = 1
            r3[r1] = r0
            boolean r3 = r2.isNotNULL(r3)
            return r3
    }

    static boolean a(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            boolean r0 = r0.R
            return r0
    }

    static long b(com.tkay.expressad.video.module.TkayH5EndCardView r2) {
            long r0 = r2.P
            return r0
    }

    static boolean c(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            boolean r0 = r0.N
            return r0
    }

    static boolean d(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
            r0 = 1
            r1.N = r0
            return r0
    }

    static boolean e(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
            r0 = 1
            r1.V = r0
            return r0
    }

    private void f() {
            r7 = this;
            java.lang.String r0 = "wfr=1"
            java.lang.String r1 = "="
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L95
            r7.P = r2     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.foundation.d.c r2 = r7.b     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.I()     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.videocommon.e.c r3 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L95
            java.lang.String r5 = r7.x     // Catch: java.lang.Throwable -> L95
            com.tkay.expressad.videocommon.e.d r3 = r3.a(r4, r5)     // Catch: java.lang.Throwable -> L95
            boolean r4 = r7.J     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L94
            boolean r4 = com.tkay.expressad.foundation.h.w.b(r2)     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L94
            boolean r4 = r2.contains(r0)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L3a
            if (r3 == 0) goto L94
            int r4 = r3.o()     // Catch: java.lang.Throwable -> L95
            if (r4 <= 0) goto L94
        L3a:
            boolean r0 = r2.contains(r0)     // Catch: java.lang.Throwable -> L95
            r4 = 20
            if (r0 == 0) goto L7d
            java.lang.String r0 = "&"
            java.lang.String[] r0 = r2.split(r0)     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L8a
            int r2 = r0.length     // Catch: java.lang.Throwable -> L95
            if (r2 <= 0) goto L8a
            int r2 = r0.length     // Catch: java.lang.Throwable -> L95
            r3 = 0
        L4f:
            if (r3 >= r2) goto L8a
            r5 = r0[r3]     // Catch: java.lang.Throwable -> L95
            boolean r6 = com.tkay.expressad.foundation.h.w.b(r5)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String r6 = "to"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            if (r6 == 0) goto L7a
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            int r6 = r6.length     // Catch: java.lang.Throwable -> L95
            if (r6 <= 0) goto L7a
            java.lang.String[] r0 = r5.split(r1)     // Catch: java.lang.Throwable -> L95
            r1 = 1
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L95
            int r0 = com.tkay.expressad.foundation.h.t.a(r0)     // Catch: java.lang.Throwable -> L95
            goto L8b
        L7a:
            int r3 = r3 + 1
            goto L4f
        L7d:
            if (r3 == 0) goto L8a
            int r0 = r3.o()     // Catch: java.lang.Throwable -> L95
            if (r0 <= 0) goto L8a
            int r0 = r3.o()     // Catch: java.lang.Throwable -> L95
            goto L8b
        L8a:
            r0 = r4
        L8b:
            if (r0 < 0) goto L91
            r7.excuteEndCardShowTask(r0)     // Catch: java.lang.Throwable -> L95
            return
        L91:
            r7.excuteEndCardShowTask(r4)     // Catch: java.lang.Throwable -> L95
        L94:
            return
        L95:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean f(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
            r0 = 1
            r1.W = r0
            return r0
    }

    private void g() {
            r4 = this;
            boolean r0 = r4.ae
            if (r0 != 0) goto L27
            boolean r0 = r4.T
            if (r0 == 0) goto L9
            goto L27
        L9:
            r0 = 1
            r4.ae = r0
            int r1 = r4.K
            if (r1 != 0) goto L13
            r4.V = r0
            return
        L13:
            r0 = 0
            r4.V = r0
            if (r1 < 0) goto L27
            android.os.Handler r0 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$d r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$d
            r1.<init>(r4, r4)
            int r2 = r4.K
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L27:
            return
    }

    static void g(com.tkay.expressad.video.module.TkayH5EndCardView r18) {
            r1 = r18
            java.lang.String r2 = "true"
            com.tkay.expressad.foundation.d.c r0 = r1.b
            if (r0 == 0) goto L10a
            com.tkay.expressad.foundation.d.c r0 = r1.b
            boolean r0 = r0.H()
            if (r0 == 0) goto L10a
            android.content.res.Resources r0 = r18.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            java.lang.String r3 = "undefined"
            if (r0 == 0) goto L2a
            r4 = 1
            if (r0 == r4) goto L28
            r4 = 2
            if (r0 == r4) goto L25
            goto L2a
        L25:
            java.lang.String r3 = "landscape"
            goto L2a
        L28:
            java.lang.String r3 = "portrait"
        L2a:
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r0 = "orientation"
            r4.put(r0, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = "locked"
            r4.put(r0, r2)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r3 = "placementType"
            java.lang.String r5 = "Interstitial"
            r0.put(r3, r5)
            java.lang.String r3 = "state"
            java.lang.String r5 = "default"
            r0.put(r3, r5)
            java.lang.String r3 = "viewable"
            r0.put(r3, r2)
            java.lang.String r2 = "currentAppOrientation"
            r0.put(r2, r4)
            android.content.Context r2 = r18.getContext()
            boolean r2 = r2 instanceof android.app.Activity
            if (r2 == 0) goto La3
            android.content.Context r2 = r18.getContext()
            int r2 = com.tkay.expressad.foundation.h.k.e(r2)
            float r2 = (float) r2
            android.content.Context r3 = r18.getContext()
            int r3 = com.tkay.expressad.foundation.h.k.f(r3)
            float r3 = (float) r3
            android.util.DisplayMetrics r4 = new android.util.DisplayMetrics
            r4.<init>()
            android.content.Context r5 = r18.getContext()
            android.app.Activity r5 = (android.app.Activity) r5
            android.view.WindowManager r5 = r5.getWindowManager()
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getMetrics(r4)
            int r5 = r4.widthPixels
            float r5 = (float) r5
            int r4 = r4.heightPixels
            float r4 = (float) r4
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r6 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r1.s
            r6.fireSetScreenSize(r7, r2, r3)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r2 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            r2.fireSetMaxSize(r3, r5, r4)
        La3:
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r6 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r1.s
            int r2 = r7.getLeft()
            float r8 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getTop()
            float r9 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getWidth()
            float r10 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getHeight()
            float r11 = (float) r2
            r6.fireSetDefaultPosition(r7, r8, r9, r10, r11)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r12 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r13 = r1.s
            int r2 = r13.getLeft()
            float r14 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getTop()
            float r15 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getWidth()
            float r2 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            int r3 = r3.getHeight()
            float r3 = (float) r3
            r16 = r2
            r17 = r3
            r12.fireSetCurrentPosition(r13, r14, r15, r16, r17)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r2 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            r2.fireChangeEventForPropertys(r3, r0)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            double r3 = com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.a
            r0.fireAudioVolumeChange(r2, r3)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.s
            r0.fireReadyEvent(r1)
        L10a:
            return
    }

    static java.lang.String h(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            java.lang.String r0 = r0.ac
            return r0
    }

    private void h() {
            r4 = this;
            boolean r0 = r4.af
            if (r0 != 0) goto L27
            boolean r0 = r4.T
            if (r0 == 0) goto L9
            goto L27
        L9:
            r0 = 1
            r4.af = r0
            int r1 = r4.L
            if (r1 != 0) goto L13
            r4.W = r0
            return
        L13:
            r0 = 0
            r4.W = r0
            if (r1 < 0) goto L27
            android.os.Handler r0 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$e r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$e
            r1.<init>(r4, r4)
            int r2 = r4.L
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L27:
            return
    }

    private void i() {
            r5 = this;
            java.lang.String r0 = "_2"
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto La1
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = "_1"
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            r1.c(r2)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.widget.FeedBackButton r1 = r1.b(r2)     // Catch: java.lang.Exception -> La2
            r5.H = r1     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto L63
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> La2
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto L50
            com.tkay.expressad.widget.FeedBackButton r2 = r5.H     // Catch: java.lang.Exception -> La2
            r1.removeView(r2)     // Catch: java.lang.Exception -> La2
        L50:
            android.widget.RelativeLayout r1 = r5.q     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.widget.FeedBackButton r2 = r5.H     // Catch: java.lang.Exception -> La2
            r1.addView(r2)     // Catch: java.lang.Exception -> La2
            android.widget.RelativeLayout r1 = r5.q     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.video.module.TkayH5EndCardView$5 r2 = new com.tkay.expressad.video.module.TkayH5EndCardView$5     // Catch: java.lang.Exception -> La2
            r2.<init>(r5)     // Catch: java.lang.Exception -> La2
            r3 = 200(0xc8, double:9.9E-322)
            r1.postDelayed(r2, r3)     // Catch: java.lang.Exception -> La2
        L63:
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r5.x     // Catch: java.lang.Exception -> La2
            r1.l(r2)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.d.c r3 = r5.b     // Catch: java.lang.Exception -> La2
            r1.a(r2, r3)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.video.module.TkayH5EndCardView$6 r2 = new com.tkay.expressad.video.module.TkayH5EndCardView$6     // Catch: java.lang.Exception -> La2
            r2.<init>(r5)     // Catch: java.lang.Exception -> La2
            r1.a(r0, r2)     // Catch: java.lang.Exception -> La2
        La1:
            return
        La2:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    static void i(com.tkay.expressad.video.module.TkayH5EndCardView r5) {
            java.lang.String r0 = "_2"
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto La1
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = "_1"
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            r1.c(r2)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.widget.FeedBackButton r1 = r1.b(r2)     // Catch: java.lang.Exception -> La2
            r5.H = r1     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto L63
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> La2
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Exception -> La2
            if (r1 == 0) goto L50
            com.tkay.expressad.widget.FeedBackButton r2 = r5.H     // Catch: java.lang.Exception -> La2
            r1.removeView(r2)     // Catch: java.lang.Exception -> La2
        L50:
            android.widget.RelativeLayout r1 = r5.q     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.widget.FeedBackButton r2 = r5.H     // Catch: java.lang.Exception -> La2
            r1.addView(r2)     // Catch: java.lang.Exception -> La2
            android.widget.RelativeLayout r1 = r5.q     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.video.module.TkayH5EndCardView$5 r2 = new com.tkay.expressad.video.module.TkayH5EndCardView$5     // Catch: java.lang.Exception -> La2
            r2.<init>(r5)     // Catch: java.lang.Exception -> La2
            r3 = 200(0xc8, double:9.9E-322)
            r1.postDelayed(r2, r3)     // Catch: java.lang.Exception -> La2
        L63:
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r5.x     // Catch: java.lang.Exception -> La2
            r1.l(r2)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.d.c r3 = r5.b     // Catch: java.lang.Exception -> La2
            r1.a(r2, r3)     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.lang.String r3 = r5.x     // Catch: java.lang.Exception -> La2
            r2.append(r3)     // Catch: java.lang.Exception -> La2
            r2.append(r0)     // Catch: java.lang.Exception -> La2
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> La2
            com.tkay.expressad.video.module.TkayH5EndCardView$6 r2 = new com.tkay.expressad.video.module.TkayH5EndCardView$6     // Catch: java.lang.Exception -> La2
            r2.<init>(r5)     // Catch: java.lang.Exception -> La2
            r1.a(r0, r2)     // Catch: java.lang.Exception -> La2
        La1:
            return
        La2:
            r5 = move-exception
            r5.printStackTrace()
            return
    }

    static com.tkay.expressad.widget.FeedBackButton j(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            com.tkay.expressad.widget.FeedBackButton r0 = r0.H
            return r0
    }

    private void j() {
            r18 = this;
            r1 = r18
            java.lang.String r2 = "true"
            com.tkay.expressad.foundation.d.c r0 = r1.b
            if (r0 == 0) goto L10a
            com.tkay.expressad.foundation.d.c r0 = r1.b
            boolean r0 = r0.H()
            if (r0 == 0) goto L10a
            android.content.res.Resources r0 = r18.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            java.lang.String r3 = "undefined"
            if (r0 == 0) goto L2a
            r4 = 1
            if (r0 == r4) goto L28
            r4 = 2
            if (r0 == r4) goto L25
            goto L2a
        L25:
            java.lang.String r3 = "landscape"
            goto L2a
        L28:
            java.lang.String r3 = "portrait"
        L2a:
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r0 = "orientation"
            r4.put(r0, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = "locked"
            r4.put(r0, r2)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r3 = "placementType"
            java.lang.String r5 = "Interstitial"
            r0.put(r3, r5)
            java.lang.String r3 = "state"
            java.lang.String r5 = "default"
            r0.put(r3, r5)
            java.lang.String r3 = "viewable"
            r0.put(r3, r2)
            java.lang.String r2 = "currentAppOrientation"
            r0.put(r2, r4)
            android.content.Context r2 = r18.getContext()
            boolean r2 = r2 instanceof android.app.Activity
            if (r2 == 0) goto La3
            android.content.Context r2 = r18.getContext()
            int r2 = com.tkay.expressad.foundation.h.k.e(r2)
            float r2 = (float) r2
            android.content.Context r3 = r18.getContext()
            int r3 = com.tkay.expressad.foundation.h.k.f(r3)
            float r3 = (float) r3
            android.util.DisplayMetrics r4 = new android.util.DisplayMetrics
            r4.<init>()
            android.content.Context r5 = r18.getContext()
            android.app.Activity r5 = (android.app.Activity) r5
            android.view.WindowManager r5 = r5.getWindowManager()
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getMetrics(r4)
            int r5 = r4.widthPixels
            float r5 = (float) r5
            int r4 = r4.heightPixels
            float r4 = (float) r4
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r6 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r1.s
            r6.fireSetScreenSize(r7, r2, r3)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r2 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            r2.fireSetMaxSize(r3, r5, r4)
        La3:
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r6 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r1.s
            int r2 = r7.getLeft()
            float r8 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getTop()
            float r9 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getWidth()
            float r10 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getHeight()
            float r11 = (float) r2
            r6.fireSetDefaultPosition(r7, r8, r9, r10, r11)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r12 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r13 = r1.s
            int r2 = r13.getLeft()
            float r14 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getTop()
            float r15 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            int r2 = r2.getWidth()
            float r2 = (float) r2
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            int r3 = r3.getHeight()
            float r3 = (float) r3
            r16 = r2
            r17 = r3
            r12.fireSetCurrentPosition(r13, r14, r15, r16, r17)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r2 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.s
            r2.fireChangeEventForPropertys(r3, r0)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            double r3 = com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.a
            r0.fireAudioVolumeChange(r2, r3)
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.s
            r0.fireReadyEvent(r2)
        L10a:
            return
    }

    private static void k() {
            return
    }

    static boolean k(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            boolean r0 = r0.aa
            return r0
    }

    static boolean l(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
            r0 = 1
            r1.S = r0
            return r0
    }

    static boolean m(com.tkay.expressad.video.module.TkayH5EndCardView r0) {
            boolean r0 = r0.M
            return r0
    }

    static boolean n(com.tkay.expressad.video.module.TkayH5EndCardView r1) {
            r0 = 1
            r1.M = r0
            return r0
    }

    protected java.lang.String a() {
            r6 = this;
            com.tkay.expressad.foundation.d.c r0 = r6.b
            r1 = 0
            r2 = 0
            if (r0 == 0) goto Le2
            r0 = 1
            r6.R = r0
            com.tkay.expressad.foundation.d.c r3 = r6.b
            boolean r3 = r3.H()
            if (r3 == 0) goto L58
            r6.J = r2
            com.tkay.expressad.foundation.d.c r0 = r6.b
            java.lang.String r0 = r0.G()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L51
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L41
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L41
            boolean r1 = r1.canRead()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L41
            java.lang.String r1 = "file:////"
            java.lang.String r2 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L48
            java.lang.String r0 = r1.concat(r2)     // Catch: java.lang.Throwable -> L48
            goto L57
        L41:
            com.tkay.expressad.foundation.d.c r1 = r6.b     // Catch: java.lang.Throwable -> L48
            java.lang.String r0 = r1.P()     // Catch: java.lang.Throwable -> L48
            goto L57
        L48:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L57
            r1.printStackTrace()
            goto L57
        L51:
            com.tkay.expressad.foundation.d.c r0 = r6.b
            java.lang.String r0 = r0.P()
        L57:
            return r0
        L58:
            com.tkay.expressad.foundation.d.c r3 = r6.b
            java.lang.String r3 = r3.I()
            boolean r4 = com.tkay.expressad.foundation.h.w.a(r3)
            if (r4 != 0) goto Ld9
            r6.J = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r0 = r0.c(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r5 = "&native_adtype="
            if (r4 == 0) goto Lc0
            android.net.Uri r0 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> La3
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La3
            if (r4 != 0) goto La7
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> La3
            java.lang.String r4 = ".zip"
            boolean r0 = r0.endsWith(r4)     // Catch: java.lang.Throwable -> La3
            if (r0 == 0) goto La7
            com.tkay.expressad.foundation.d.c r0 = r6.b     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = r0.P()     // Catch: java.lang.Throwable -> La3
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La3
            if (r4 != 0) goto La2
            r6.J = r2     // Catch: java.lang.Throwable -> La3
            r6.excuteTask()     // Catch: java.lang.Throwable -> La3
            return r0
        La2:
            return r1
        La3:
            r0 = move-exception
            r0.getMessage()
        La7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r5)
            com.tkay.expressad.foundation.d.c r1 = r6.b
            int r1 = r1.w()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        Lc0:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r5)
            com.tkay.expressad.foundation.d.c r0 = r6.b
            int r0 = r0.w()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        Ld9:
            r6.J = r2
            com.tkay.expressad.foundation.d.c r0 = r6.b
            java.lang.String r0 = r0.P()
            return r0
        Le2:
            r6.R = r2
            return r1
    }

    protected android.widget.RelativeLayout.LayoutParams b() {
            r2 = this;
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            return r0
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L11
            android.widget.ImageView r0 = r2.r
            com.tkay.expressad.video.module.TkayH5EndCardView$2 r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L11:
            return
    }

    public boolean canBackPress() {
            r1 = this;
            android.widget.ImageView r0 = r1.r
            if (r0 == 0) goto Lc
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            r1.onCloseViewClick()     // Catch: java.lang.Exception -> L4
            return
        L4:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void defaultShow() {
            r0 = this;
            super.defaultShow()
            return
    }

    protected void e() {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L7
            r1.setMatchParent()
        L7:
            return
    }

    public void excuteEndCardShowTask(int r5) {
            r4 = this;
            android.os.Handler r0 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$c r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$c
            r1.<init>(r4, r5)
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
            return
    }

    public void excuteTask() {
            r4 = this;
            boolean r0 = r4.J
            if (r0 != 0) goto L17
            int r0 = r4.K
            if (r0 < 0) goto L17
            android.os.Handler r0 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$f r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$f
            r1.<init>(r4, r4)
            int r2 = r4.K
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L17:
            return
    }

    public void executeEndCardShow(int r5) {
            r4 = this;
            android.os.Handler r0 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$b r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$b
            r1.<init>(r4, r4)
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
            return
    }

    @Override
    public void expand(java.lang.String r1, boolean r2) {
            r0 = this;
            return
    }

    @Override
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            return r0
    }

    @Override
    public void handlerPlayableException(java.lang.String r1) {
            r0 = this;
            boolean r1 = r0.w
            if (r1 != 0) goto La
            r1 = 1
            r0.w = r1
            r1 = 0
            r0.v = r1
        La:
            return
    }

    @Override
    public void init(android.content.Context r4) {
            r3 = this;
            java.lang.String r4 = "tkay_reward_endcard_h5"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L6f
            android.view.LayoutInflater r0 = r3.c
            r1 = 0
            android.view.View r4 = r0.inflate(r4, r1)
            r3.p = r4
            r0 = 0
            java.lang.String r1 = "tkay_windwv_close"
            int r1 = r3.findID(r1)     // Catch: java.lang.Exception -> L5e
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Exception -> L5e
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L5e
            r3.r = r1     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = "tkay_windwv_content_rl"
            int r1 = r3.findID(r1)     // Catch: java.lang.Exception -> L5e
            android.view.View r4 = r4.findViewById(r1)     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4     // Catch: java.lang.Exception -> L5e
            r3.q = r4     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> L5e
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L5e
            r4.<init>(r1)     // Catch: java.lang.Exception -> L5e
            r3.s = r4     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L5e
            r1 = -1
            r4.<init>(r1, r1)     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r3.s     // Catch: java.lang.Exception -> L5e
            r1.setLayoutParams(r4)     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout r4 = r3.q     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r3.s     // Catch: java.lang.Exception -> L5e
            r4.addView(r1)     // Catch: java.lang.Exception -> L5e
            r4 = 2
            android.view.View[] r4 = new android.view.View[r4]     // Catch: java.lang.Exception -> L5e
            android.widget.ImageView r1 = r3.r     // Catch: java.lang.Exception -> L5e
            r4[r0] = r1     // Catch: java.lang.Exception -> L5e
            r1 = 1
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r3.s     // Catch: java.lang.Exception -> L5e
            r4[r1] = r2     // Catch: java.lang.Exception -> L5e
            boolean r4 = r3.isNotNULL(r4)     // Catch: java.lang.Exception -> L5e
            r3.f = r4     // Catch: java.lang.Exception -> L5e
            goto L60
        L5e:
            r3.f = r0
        L60:
            android.view.View r4 = r3.p
            android.widget.RelativeLayout$LayoutParams r0 = r3.b()
            r3.addView(r4, r0)
            r3.c()
            r3.e()
        L6f:
            return
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            return
    }

    public boolean isLoadSuccess() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    public boolean isPlayable() {
            r1 = this;
            boolean r0 = r1.J
            return r0
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L9
            if (r2 == r0) goto L6
            goto L8
        L6:
            r1.U = r0
        L8:
            return
        L9:
            r1.T = r0
            return
    }

    public void onBackPress() {
            r1 = this;
            boolean r0 = r1.S
            if (r0 != 0) goto L24
            boolean r0 = r1.T
            if (r0 == 0) goto Lc
            boolean r0 = r1.U
            if (r0 != 0) goto L24
        Lc:
            boolean r0 = r1.T
            if (r0 != 0) goto L18
            boolean r0 = r1.V
            if (r0 == 0) goto L18
            boolean r0 = r1.z
            if (r0 == 0) goto L24
        L18:
            boolean r0 = r1.T
            if (r0 != 0) goto L27
            boolean r0 = r1.W
            if (r0 == 0) goto L27
            boolean r0 = r1.z
            if (r0 == 0) goto L27
        L24:
            r1.onCloseViewClick()
        L27:
            return
    }

    public void onCloseViewClick() {
            r5 = this;
            java.lang.String r0 = ""
            r1 = 119(0x77, float:1.67E-43)
            r2 = 103(0x67, float:1.44E-43)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r5.s     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L22
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r5.s     // Catch: java.lang.Exception -> L2f
            java.lang.String r4 = "onSystemDestory"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r3, r4, r0)     // Catch: java.lang.Exception -> L2f
            java.lang.Thread r3 = new java.lang.Thread     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.video.module.TkayH5EndCardView$a r4 = new com.tkay.expressad.video.module.TkayH5EndCardView$a     // Catch: java.lang.Exception -> L2f
            r4.<init>(r5, r5)     // Catch: java.lang.Exception -> L2f
            r3.<init>(r4)     // Catch: java.lang.Exception -> L2f
            r3.start()     // Catch: java.lang.Exception -> L2f
            return
        L22:
            com.tkay.expressad.video.module.a.a r3 = r5.e     // Catch: java.lang.Exception -> L2f
            r3.a(r2, r0)     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.video.module.a.a r3 = r5.e     // Catch: java.lang.Exception -> L2f
            java.lang.String r4 = "webview is null when closing webview"
            r3.a(r1, r4)     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r3 = move-exception
            com.tkay.expressad.video.module.a.a r4 = r5.e
            r4.a(r2, r0)
            com.tkay.expressad.video.module.a.a r0 = r5.e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "close webview exception"
            r2.<init>(r4)
            java.lang.String r4 = r3.getMessage()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.a(r1, r2)
            r3.getMessage()
            return
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onSelfConfigurationChanged(r1)
            r0.orientation(r1)
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto L15
            boolean r1 = r0.ab
            if (r1 != 0) goto L15
            r1 = 1
            r0.ab = r1
            r0.setFocusableInTouchMode(r1)
            r0.requestFocus()
            r0.requestFocusFromTouch()
        L15:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r3) {
            r2 = this;
            super.onWindowFocusChanged(r3)
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L28
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.H()
            if (r0 == 0) goto L28
            if (r3 == 0) goto L1d
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r3 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            java.lang.String r1 = "true"
            r3.fireSetIsViewable(r0, r1)
            return
        L1d:
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r3 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            java.lang.String r1 = "false"
            r3.fireSetIsViewable(r0, r1)
        L28:
            return
    }

    @Override
    public void open(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Exception -> L2b
            java.lang.String r0 = r0.ad()     // Catch: java.lang.Exception -> L2b
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2b
            if (r1 != 0) goto L11
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Exception -> L2b
            r1.p(r4)     // Catch: java.lang.Exception -> L2b
        L11:
            com.tkay.expressad.a.a r4 = new com.tkay.expressad.a.a     // Catch: java.lang.Exception -> L2b
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r3.x     // Catch: java.lang.Exception -> L2b
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L2b
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L2b
            r4.p(r0)     // Catch: java.lang.Exception -> L2b
            com.tkay.expressad.video.module.a.a r4 = r3.e     // Catch: java.lang.Exception -> L2b
            r0 = 126(0x7e, float:1.77E-43)
            java.lang.String r1 = ""
            r4.a(r0, r1)     // Catch: java.lang.Exception -> L2b
            return
        L2b:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Exception -> L30
            return
        L30:
            r4 = move-exception
            r4.getMessage()
            return
    }

    @Override
    public void orientation(android.content.res.Configuration r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L2c
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r4 != r1) goto L12
            java.lang.String r4 = "landscape"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2c
            goto L17
        L12:
            java.lang.String r4 = "portrait"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2c
        L17:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L2c
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L2c
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.s     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r4)     // Catch: java.lang.Exception -> L2c
            return
        L2c:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public void preLoadData(com.tkay.expressad.video.signal.factory.b r10) {
            r9 = this;
            java.lang.String r0 = "wfr=1"
            java.lang.String r1 = "="
            r9.ad = r10
            java.lang.String r3 = r9.a()
            boolean r2 = r9.f
            r8 = 0
            if (r2 == 0) goto L127
            com.tkay.expressad.foundation.d.c r2 = r9.b
            if (r2 == 0) goto L127
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L127
            long r4 = java.lang.System.currentTimeMillis()
            r9.P = r4
            com.tkay.expressad.foundation.webview.BrowserView$DownloadListener r2 = new com.tkay.expressad.foundation.webview.BrowserView$DownloadListener
            com.tkay.expressad.foundation.d.c r4 = r9.b
            r2.<init>(r4)
            com.tkay.expressad.foundation.d.c r4 = r9.b
            java.lang.String r4 = r4.bb()
            r2.setTitle(r4)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r9.s
            r4.setDownloadListener(r2)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r9.s
            com.tkay.expressad.foundation.d.c r4 = r9.b
            java.lang.String r4 = r4.aZ()
            r2.setCampaignId(r4)
            r2 = 8
            r9.setCloseVisible(r2)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r9.s
            r2.setApiManagerJSFactory(r10)
            com.tkay.expressad.foundation.d.c r10 = r9.b
            boolean r10 = r10.H()
            if (r10 == 0) goto L56
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r10 = r9.s
            r10.setMraidObject(r9)
        L56:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r10 = r9.s
            com.tkay.expressad.video.module.TkayH5EndCardView$3 r2 = new com.tkay.expressad.video.module.TkayH5EndCardView$3
            r2.<init>(r9)
            r10.setWebViewListener(r2)
            com.tkay.expressad.foundation.d.c r10 = r9.b
            java.lang.String r10 = r10.G()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L101
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfd
            r9.P = r4     // Catch: java.lang.Throwable -> Lfd
            com.tkay.expressad.foundation.d.c r10 = r9.b     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r10 = r10.I()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r5 = r9.x     // Catch: java.lang.Throwable -> Lfd
            com.tkay.expressad.videocommon.e.d r2 = r2.a(r4, r5)     // Catch: java.lang.Throwable -> Lfd
            boolean r4 = r9.J     // Catch: java.lang.Throwable -> Lfd
            if (r4 == 0) goto L101
            boolean r4 = com.tkay.expressad.foundation.h.w.b(r10)     // Catch: java.lang.Throwable -> Lfd
            if (r4 == 0) goto L101
            boolean r4 = r10.contains(r0)     // Catch: java.lang.Throwable -> Lfd
            if (r4 != 0) goto La2
            if (r2 == 0) goto L101
            int r4 = r2.o()     // Catch: java.lang.Throwable -> Lfd
            if (r4 <= 0) goto L101
        La2:
            boolean r0 = r10.contains(r0)     // Catch: java.lang.Throwable -> Lfd
            r4 = 20
            if (r0 == 0) goto Le5
            java.lang.String r0 = "&"
            java.lang.String[] r10 = r10.split(r0)     // Catch: java.lang.Throwable -> Lfd
            if (r10 == 0) goto Lf2
            int r0 = r10.length     // Catch: java.lang.Throwable -> Lfd
            if (r0 <= 0) goto Lf2
            int r0 = r10.length     // Catch: java.lang.Throwable -> Lfd
            r2 = r8
        Lb7:
            if (r2 >= r0) goto Lf2
            r5 = r10[r2]     // Catch: java.lang.Throwable -> Lfd
            boolean r6 = com.tkay.expressad.foundation.h.w.b(r5)     // Catch: java.lang.Throwable -> Lfd
            if (r6 == 0) goto Le2
            java.lang.String r6 = "to"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lfd
            if (r6 == 0) goto Le2
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> Lfd
            if (r6 == 0) goto Le2
            java.lang.String[] r6 = r5.split(r1)     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6.length     // Catch: java.lang.Throwable -> Lfd
            if (r6 <= 0) goto Le2
            java.lang.String[] r10 = r5.split(r1)     // Catch: java.lang.Throwable -> Lfd
            r0 = 1
            r10 = r10[r0]     // Catch: java.lang.Throwable -> Lfd
            int r10 = com.tkay.expressad.foundation.h.t.a(r10)     // Catch: java.lang.Throwable -> Lfd
            goto Lf3
        Le2:
            int r2 = r2 + 1
            goto Lb7
        Le5:
            if (r2 == 0) goto Lf2
            int r10 = r2.o()     // Catch: java.lang.Throwable -> Lfd
            if (r10 <= 0) goto Lf2
            int r10 = r2.o()     // Catch: java.lang.Throwable -> Lfd
            goto Lf3
        Lf2:
            r10 = r4
        Lf3:
            if (r10 < 0) goto Lf9
            r9.excuteEndCardShowTask(r10)     // Catch: java.lang.Throwable -> Lfd
            goto L101
        Lf9:
            r9.excuteEndCardShowTask(r4)     // Catch: java.lang.Throwable -> Lfd
            goto L101
        Lfd:
            r10 = move-exception
            r10.getMessage()
        L101:
            com.tkay.expressad.videocommon.b.h r10 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r10 = r10.b(r3)
            r9.setHtmlSource(r10)
            java.lang.String r10 = r9.u
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L11a
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r10 = r9.s
            r10.loadUrl(r3)
            goto L13d
        L11a:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r9.s
            java.lang.String r4 = r9.u
            r7 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "UTF-8"
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            goto L13d
        L127:
            r10 = 3
            java.lang.String r0 = "PL URL IS NULL"
            r9.reportRenderResult(r0, r10)
            com.tkay.expressad.video.module.a.a r10 = r9.e
            r0 = 127(0x7f, float:1.78E-43)
            java.lang.String r1 = ""
            r10.a(r0, r1)
            com.tkay.expressad.video.module.a.a r10 = r9.e
            r0 = 129(0x81, float:1.81E-43)
            r10.a(r0, r1)
        L13d:
            r9.z = r8
            return
    }

    @Override
    public void readyStatus(int r1) {
            r0 = this;
            return
    }

    public void release() {
            r2 = this;
            android.os.Handler r0 = r2.t
            r1 = 0
            if (r0 == 0) goto La
            r0.removeCallbacksAndMessages(r1)
            r2.t = r1
        La:
            android.os.Handler r0 = r2.y
            if (r0 == 0) goto L13
            r0.removeCallbacksAndMessages(r1)
            r2.y = r1
        L13:
            android.widget.RelativeLayout r0 = r2.q
            r0.removeAllViews()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            r0.release()
            r2.s = r1
            return
    }

    public void reportRenderResult(java.lang.String r1, int r2) {
            r0 = this;
            return
    }

    public void setCloseDelayShowTime(int r1) {
            r0 = this;
            r0.K = r1
            return
    }

    public void setCloseVisible(int r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L9
            android.widget.ImageView r0 = r1.r
            r0.setVisibility(r2)
        L9:
            return
    }

    public void setCloseVisibleForMraid(int r3) {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L28
            r0 = 1
            r2.aa = r0
            r0 = 4
            if (r3 != r0) goto L17
            android.widget.ImageView r3 = r2.r
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 16711680(0xff0000, float:2.3418052E-38)
            r0.<init>(r1)
            r3.setImageDrawable(r0)
            goto L22
        L17:
            android.widget.ImageView r3 = r2.r
            java.lang.String r0 = "tkay_reward_close"
            int r0 = r2.findDrawable(r0)
            r3.setImageResource(r0)
        L22:
            android.widget.ImageView r3 = r2.r
            r0 = 0
            r3.setVisibility(r0)
        L28:
            return
    }

    public void setError(boolean r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setHtmlSource(java.lang.String r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setLoadPlayable(boolean r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setNotchValue(java.lang.String r6, int r7, int r8, int r9, int r10) {
            r5 = this;
            com.tkay.expressad.foundation.d.c r0 = r5.b
            if (r0 == 0) goto L63
            com.tkay.expressad.foundation.d.c r0 = r5.b
            int r0 = r0.f()
            r1 = 2
            if (r0 == r1) goto L63
            r5.ac = r6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "NOTCH H5ENDCARD "
            r6.<init>(r0)
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r7)
            r2[r3] = r4
            r3 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r8)
            r2[r3] = r4
            java.lang.Integer r3 = java.lang.Integer.valueOf(r9)
            r2[r1] = r3
            r1 = 3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)
            r2[r1] = r3
            java.lang.String r1 = "%1s-%2s-%3s-%4s"
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r6.append(r1)
            android.widget.ImageView r6 = r5.r
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6
            android.content.Context r1 = r5.getContext()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            int r7 = r7 + r1
            int r9 = r9 + r1
            int r8 = r8 + r1
            int r10 = r10 + r1
            r6.setMargins(r7, r9, r8, r10)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>(r0)
            r7.append(r9)
            android.widget.ImageView r7 = r5.r
            r7.setLayoutParams(r6)
        L63:
            return
    }

    public void setPlayCloseBtnTm(int r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void startCounterEndCardShowTimer() {
            r7 = this;
            java.lang.String r0 = "="
            com.tkay.expressad.foundation.d.c r1 = r7.b     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = r1.I()     // Catch: java.lang.Throwable -> L56
            r2 = 15
            boolean r3 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Throwable -> L56
            if (r3 == 0) goto L55
            java.lang.String r3 = "wfl=1"
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L56
            if (r3 == 0) goto L55
            java.lang.String r3 = "&"
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L52
            int r3 = r1.length     // Catch: java.lang.Throwable -> L56
            if (r3 <= 0) goto L52
            int r3 = r1.length     // Catch: java.lang.Throwable -> L56
            r4 = 0
        L25:
            if (r4 >= r3) goto L52
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L56
            boolean r6 = com.tkay.expressad.foundation.h.w.b(r5)     // Catch: java.lang.Throwable -> L56
            if (r6 == 0) goto L4f
            java.lang.String r6 = "timeout"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L56
            if (r6 == 0) goto L4f
            java.lang.String[] r6 = r5.split(r0)     // Catch: java.lang.Throwable -> L56
            if (r6 == 0) goto L4f
            java.lang.String[] r6 = r5.split(r0)     // Catch: java.lang.Throwable -> L56
            int r6 = r6.length     // Catch: java.lang.Throwable -> L56
            if (r6 <= 0) goto L4f
            java.lang.String[] r2 = r5.split(r0)     // Catch: java.lang.Throwable -> L56
            r5 = 1
            r2 = r2[r5]     // Catch: java.lang.Throwable -> L56
            int r2 = com.tkay.expressad.foundation.h.t.a(r2)     // Catch: java.lang.Throwable -> L56
        L4f:
            int r4 = r4 + 1
            goto L25
        L52:
            r7.executeEndCardShow(r2)     // Catch: java.lang.Throwable -> L56
        L55:
            return
        L56:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void toggleCloseBtn(int r5) {
            r4 = this;
            android.widget.ImageView r0 = r4.r
            int r0 = r0.getVisibility()
            r1 = 0
            r2 = 1
            if (r5 == r2) goto L62
            r3 = 2
            if (r5 == r3) goto Le
            goto L65
        Le:
            r4.S = r1
            r0 = 8
            boolean r5 = r4.z
            if (r5 == 0) goto L3c
            boolean r5 = r4.af
            if (r5 != 0) goto L65
            boolean r5 = r4.T
            if (r5 == 0) goto L1f
            goto L65
        L1f:
            r4.af = r2
            int r5 = r4.L
            if (r5 != 0) goto L28
            r4.W = r2
            goto L65
        L28:
            r4.W = r1
            if (r5 < 0) goto L65
            android.os.Handler r5 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$e r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$e
            r1.<init>(r4, r4)
            int r2 = r4.L
            int r2 = r2 * 1000
            long r2 = (long) r2
            r5.postDelayed(r1, r2)
            goto L65
        L3c:
            boolean r5 = r4.ae
            if (r5 != 0) goto L65
            boolean r5 = r4.T
            if (r5 == 0) goto L45
            goto L65
        L45:
            r4.ae = r2
            int r5 = r4.K
            if (r5 != 0) goto L4e
            r4.V = r2
            goto L65
        L4e:
            r4.V = r1
            if (r5 < 0) goto L65
            android.os.Handler r5 = r4.t
            com.tkay.expressad.video.module.TkayH5EndCardView$d r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$d
            r1.<init>(r4, r4)
            int r2 = r4.K
            int r2 = r2 * 1000
            long r2 = (long) r2
            r5.postDelayed(r1, r2)
            goto L65
        L62:
            r4.S = r2
            r0 = r1
        L65:
            r4.setCloseVisible(r0)
            return
    }

    @Override
    public void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public void useCustomClose(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r1 = 4
            goto L5
        L4:
            r1 = 0
        L5:
            r0.setCloseVisibleForMraid(r1)     // Catch: java.lang.Exception -> L9
            return
        L9:
            r1 = move-exception
            r1.getMessage()
            return
    }

    public void volumeChange(double r3) {
            r2 = this;
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r2.s
            r0.fireAudioVolumeChange(r1, r3)
            return
    }

    public void webviewshow() {
            r2 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.s
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayH5EndCardView$4 r1 = new com.tkay.expressad.video.module.TkayH5EndCardView$4
            r1.<init>(r2)
            r0.post(r1)
        Lc:
            return
    }
}
