package com.tkay.expressad.video.bt.module;

public class TYTempContainer extends com.tkay.expressad.video.signal.container.AbstractJSContainer {
    private static final java.lang.String A = null;
    private static final long aa = 5000;
    private static final long ab = 2000;
    private static final long ac = 100;
    private static final int ad = -1;
    private static final int ae = -2;
    private static final int af = -3;
    private static final int ag = -3;
    private static final int ah = -4;
    private static final int al = 250;
    protected static final int b = 0;
    private android.view.View B;
    private com.tkay.expressad.foundation.d.c C;
    private com.tkay.expressad.videocommon.b.a D;
    private com.tkay.expressad.video.bt.module.b.h E;
    private com.tkay.expressad.video.bt.module.a.b F;
    private com.tkay.expressad.video.dynview.f.a G;
    private int H;
    private java.lang.String I;
    private com.tkay.expressad.video.signal.factory.b J;
    private int K;
    private int L;
    private boolean M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private int R;
    private java.lang.String S;
    private java.lang.String T;
    private java.util.List<com.tkay.expressad.foundation.d.c> U;
    private int V;
    private android.view.LayoutInflater W;
    protected boolean a;
    private int ai;
    private int aj;
    private int ak;
    private android.view.View am;
    private boolean an;
    private boolean ao;
    private boolean ap;
    private boolean aq;
    private boolean ar;
    private boolean as;
    private boolean at;
    private boolean au;
    private boolean av;
    private boolean aw;
    private com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver ax;
    private java.lang.Runnable ay;
    protected boolean c;
    protected com.tkay.expressad.video.bt.module.TYTempContainer.a d;
    protected com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView e;
    protected com.tkay.expressad.video.module.TkayVideoView f;
    protected com.tkay.expressad.video.module.TkayContainerView g;
    protected android.os.Handler h;
    protected java.lang.Runnable i;
    protected java.lang.Runnable j;





    final class 5 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        5(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a
                r0.onPause()
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r0.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L1f
                if (r1 == 0) goto L1a
                java.lang.String r1 = "status"
                r2 = 1
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1f
                goto L28
            L1f:
                r0 = move-exception
                com.tkay.expressad.video.bt.module.TYTempContainer.a()
                r0.getMessage()
                java.lang.String r0 = ""
            L28:
                byte[] r0 = r0.getBytes()
                r1 = 2
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.e
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void b() {
                r3 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a
                r0.onResume()
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r1.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1f
                if (r2 == 0) goto L1a
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1f
                goto L28
            L1f:
                r1 = move-exception
                com.tkay.expressad.video.bt.module.TYTempContainer.a()
                r1.getMessage()
                java.lang.String r1 = ""
            L28:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.e
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }

        @Override
        public final void c() {
                r3 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a
                r0.onResume()
                r0 = 2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1f
                r1.<init>()     // Catch: java.lang.Throwable -> L1f
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1f
                android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1f
                if (r2 == 0) goto L1a
                java.lang.String r2 = "status"
                r1.put(r2, r0)     // Catch: java.lang.Throwable -> L1f
            L1a:
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1f
                goto L28
            L1f:
                r1 = move-exception
                com.tkay.expressad.video.bt.module.TYTempContainer.a()
                r1.getMessage()
                java.lang.String r1 = ""
            L28:
                byte[] r1 = r1.getBytes()
                java.lang.String r0 = android.util.Base64.encodeToString(r1, r0)
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r3.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.e
                java.lang.String r2 = "onFeedbackAlertStatusNotify"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)
                return
        }
    }

    final class 6 implements com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        6(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onVolumeChanged(double r2) {
                r1 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer.a()
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.foundation.d.c r0 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r0)     // Catch: java.lang.Exception -> L2b
                boolean r0 = r0.H()     // Catch: java.lang.Exception -> L2b
                if (r0 == 0) goto L2a
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.video.module.TkayContainerView r0 = r0.g     // Catch: java.lang.Exception -> L2b
                if (r0 == 0) goto L2a
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.video.module.TkayContainerView r0 = r0.g     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r0.getH5EndCardView()     // Catch: java.lang.Exception -> L2b
                if (r0 == 0) goto L2a
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.video.module.TkayContainerView r0 = r0.g     // Catch: java.lang.Exception -> L2b
                com.tkay.expressad.video.module.TkayH5EndCardView r0 = r0.getH5EndCardView()     // Catch: java.lang.Exception -> L2b
                r0.volumeChange(r2)     // Catch: java.lang.Exception -> L2b
            L2a:
                return
            L2b:
                r2 = move-exception
                com.tkay.expressad.video.bt.module.TYTempContainer.a()
                r2.getMessage()
                return
        }
    }

    final class 7 implements java.lang.Runnable {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        7(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.view.View r0 = com.tkay.expressad.video.bt.module.TYTempContainer.a(r0)
                r1 = 0
                r0.setBackgroundColor(r1)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.view.View r0 = com.tkay.expressad.video.bt.module.TYTempContainer.a(r0)
                r0.setVisibility(r1)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.view.View r0 = com.tkay.expressad.video.bt.module.TYTempContainer.a(r0)
                r0.bringToFront()
                return
        }
    }

    final class 8 implements java.lang.Runnable {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        8(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.view.View r0 = com.tkay.expressad.video.bt.module.TYTempContainer.a(r0)
                r1 = 8
                r0.setVisibility(r1)
                return
        }
    }

    public interface a {

        public static class a implements com.tkay.expressad.video.bt.module.TYTempContainer.a {
            private static final java.lang.String b = "ActivityErrorListener";
            private boolean a;

            public a() {
                    r1 = this;
                    r1.<init>()
                    r0 = 0
                    r1.a = r0
                    return
            }

            @Override
            public void a(java.lang.String r1) {
                    r0 = this;
                    r1 = 1
                    r0.a = r1
                    return
            }

            @Override
            public final boolean a() {
                    r1 = this;
                    boolean r0 = r1.a
                    return r0
            }

            @Override
            public final void b() {
                    r1 = this;
                    r0 = 1
                    r1.a = r0
                    return
            }
        }

        void a(java.lang.String r1);

        boolean a();

        void b();
    }

    private final class b extends com.tkay.expressad.video.module.a.a.f {
        private android.app.Activity V;
        private com.tkay.expressad.foundation.d.c W;
        final com.tkay.expressad.video.bt.module.TYTempContainer a;


        public b(com.tkay.expressad.video.bt.module.TYTempContainer r1, android.app.Activity r2, com.tkay.expressad.foundation.d.c r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.V = r2
                r0.W = r3
                return
        }

        @Override
        public final void a(int r9, java.lang.Object r10) {
                r8 = this;
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                android.content.Context r0 = r0.getContext()
                if (r0 == 0) goto L17
                android.content.Context r1 = r0.getApplicationContext()
                if (r0 == r1) goto L17
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r8.a
                com.tkay.expressad.video.signal.c r1 = r1.getJSCommon()
                r1.a(r0)
            L17:
                android.app.Activity r0 = r8.V
                if (r0 == 0) goto L26
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
                android.app.Activity r1 = r8.V
                r0.a(r1)
            L26:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.TYTempContainer.m(r0)
                r0 = 108(0x6c, float:1.51E-43)
                java.lang.String r1 = ""
                r2 = 1
                if (r9 == r0) goto Lcf
                r0 = 113(0x71, float:1.58E-43)
                if (r9 == r0) goto Lc3
                r0 = 117(0x75, float:1.64E-43)
                if (r9 == r0) goto La6
                r0 = 126(0x7e, float:1.77E-43)
                if (r9 == r0) goto L9a
                r0 = 128(0x80, float:1.8E-43)
                if (r9 == r0) goto L9a
                switch(r9) {
                    case 103: goto L94;
                    case 104: goto L94;
                    case 105: goto L84;
                    case 106: goto L47;
                    default: goto L45;
                }
            L45:
                goto Lfa
            L47:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.a.b r0 = com.tkay.expressad.video.bt.module.TYTempContainer.n(r0)
                if (r0 == 0) goto L61
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.a.b r0 = com.tkay.expressad.video.bt.module.TYTempContainer.n(r0)
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r8.a
                java.lang.String r1 = com.tkay.expressad.video.bt.module.TYTempContainer.o(r1)
                com.tkay.expressad.foundation.d.c r2 = r8.W
                r0.a(r1, r2)
                goto L6c
            L61:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.b.h r0 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r0)
                com.tkay.expressad.foundation.d.c r1 = r8.W
                r0.a(r1)
            L6c:
                android.app.Activity r0 = r8.V
                if (r0 == 0) goto Lfa
                com.tkay.expressad.foundation.d.c r0 = r8.W
                if (r0 == 0) goto Lfa
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                com.tkay.expressad.video.bt.module.TYTempContainer$b$1 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$b$1
                r1.<init>(r8)
                r2 = 50
                r0.a(r1, r2)
                goto Lfa
            L84:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
                if (r10 == 0) goto L90
                java.lang.String r1 = r10.toString()
            L90:
                r0.click(r2, r1)
                goto Lfa
            L94:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r0)
                goto Lfa
            L9a:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.b.h r0 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r0)
                com.tkay.expressad.foundation.d.c r1 = r8.W
                r0.a(r1)
                goto Lfa
            La6:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.module.TkayVideoView r0 = r0.f
                if (r0 == 0) goto Lb4
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.module.TkayVideoView r0 = r0.f
                r1 = 4
                r0.setVisible(r1)
            Lb4:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.TYTempContainer.m(r0)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.b.h r0 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r0)
                r0.c()
                goto Lfa
            Lc3:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.bt.module.b.h r0 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r0)
                com.tkay.expressad.foundation.d.c r1 = r8.W
                r0.a(r1)
                goto Lfa
            Lcf:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
                com.tkay.expressad.video.signal.a.c$b r3 = new com.tkay.expressad.video.signal.a.c$b
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r8.a
                com.tkay.expressad.video.signal.c r4 = r4.getJSCommon()
                com.tkay.expressad.video.bt.module.TYTempContainer$d r5 = new com.tkay.expressad.video.bt.module.TYTempContainer$d
                com.tkay.expressad.video.bt.module.TYTempContainer r6 = r8.a
                r7 = 0
                r5.<init>(r6, r7)
                r3.<init>(r4, r5)
                r0.a(r3)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r8.a
                com.tkay.expressad.video.signal.c r0 = r0.getJSCommon()
                if (r10 == 0) goto Lf7
                java.lang.String r1 = r10.toString()
            Lf7:
                r0.click(r2, r1)
            Lfa:
                super.a(r9, r10)
                return
        }
    }

    private final class c extends com.tkay.expressad.video.module.a.a.f {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        private c(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        c(com.tkay.expressad.video.bt.module.TYTempContainer r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r4, java.lang.Object r5) {
                r3 = this;
                super.a(r4, r5)
                boolean r0 = r5 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> L50
                if (r0 == 0) goto Lc
                java.lang.String r0 = r5.toString()     // Catch: java.lang.Exception -> L50
                goto Lf
            Lc:
                r0 = r5
                java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L50
            Lf:
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r3.a     // Catch: java.lang.Exception -> L50
                boolean r1 = com.tkay.expressad.video.bt.module.TYTempContainer.p(r1)     // Catch: java.lang.Exception -> L50
                if (r1 == 0) goto L50
                boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L50
                if (r1 != 0) goto L50
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
                r1.<init>(r0)     // Catch: java.lang.Exception -> L50
                java.lang.String r0 = "type"
                int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L50
                java.lang.String r2 = "complete"
                int r1 = r1.optInt(r2)     // Catch: java.lang.Exception -> L50
                r2 = 2
                if (r0 == r2) goto L44
                r2 = 3
                if (r0 == r2) goto L3c
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L50
                int r2 = com.tkay.expressad.foundation.g.a.cv     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.video.bt.module.TYTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L50
                goto L4b
            L3c:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L50
                int r2 = com.tkay.expressad.foundation.g.a.cw     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.video.bt.module.TYTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L50
                goto L4b
            L44:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L50
                int r2 = com.tkay.expressad.foundation.g.a.cx     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.video.bt.module.TYTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L50
            L4b:
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L50
                com.tkay.expressad.video.bt.module.TYTempContainer.c(r0, r1)     // Catch: java.lang.Exception -> L50
            L50:
                r0 = 120(0x78, float:1.68E-43)
                if (r4 == r0) goto Lf6
                r0 = 126(0x7e, float:1.77E-43)
                if (r4 == r0) goto Le6
                r0 = 127(0x7f, float:1.78E-43)
                if (r4 == r0) goto Lc3
                switch(r4) {
                    case 100: goto La5;
                    case 101: goto L9b;
                    case 102: goto L9b;
                    case 103: goto L7a;
                    case 104: goto L74;
                    case 105: goto L60;
                    default: goto L5f;
                }
            L5f:
                goto L73
            L60:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.signal.c r4 = r4.getJSCommon()
                r0 = 1
                if (r5 == 0) goto L6e
                java.lang.String r5 = r5.toString()
                goto L70
            L6e:
                java.lang.String r5 = ""
            L70:
                r4.click(r0, r5)
            L73:
                return
            L74:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r4)
                return
            L7a:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.TYTempContainer.h(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.foundation.d.c r4 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r4)
                boolean r4 = r4.H()
                if (r4 == 0) goto L91
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r4)
                return
            L91:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.signal.c r4 = r4.getJSCommon()
                r4.j()
                return
            L9b:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.signal.c r4 = r4.getJSCommon()
                r4.j()
                return
            La5:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.TYTempContainer.q(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                android.os.Handler r4 = r4.h
                com.tkay.expressad.video.bt.module.TYTempContainer r5 = r3.a
                java.lang.Runnable r5 = com.tkay.expressad.video.bt.module.TYTempContainer.r(r5)
                r0 = 250(0xfa, double:1.235E-321)
                r4.postDelayed(r5, r0)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.b.h r4 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r4)
                r4.a()
                return
            Lc3:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.TYTempContainer.h(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.b.h r4 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r4)
                r4.a()
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.b.h r4 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r4)
                r4.c()
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.signal.e r4 = r4.getJSContainerModule()
                r5 = 100
                r4.showEndcard(r5)
                return
            Le6:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.b.h r4 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r5 = r3.a
                com.tkay.expressad.foundation.d.c r5 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r5)
                r4.a(r5)
                return
            Lf6:
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r3.a
                com.tkay.expressad.video.bt.module.b.h r4 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r4)
                r4.c()
                return
        }
    }

    private class d extends com.tkay.expressad.video.signal.a.c.a {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        private d(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        d(com.tkay.expressad.video.bt.module.TYTempContainer r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r2, java.lang.String r3) {
                r1 = this;
                super.a(r2, r3)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a
                r0.defaultLoad(r2, r3)
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r0.a
                com.tkay.expressad.video.bt.module.TYTempContainer.s(r1)
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r1, boolean r2) {
                r0 = this;
                super.a(r1, r2)
                com.tkay.expressad.video.bt.module.TYTempContainer r2 = r0.a
                com.tkay.expressad.video.bt.module.b.h r2 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r2)
                r2.a(r1)
                return
        }

        @Override
        public final void a(com.tkay.expressad.out.d r3, java.lang.String r4) {
                r2 = this;
                super.a(r3, r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.t(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.u(r4)
                if (r3 == 0) goto L66
                boolean r4 = r3 instanceof com.tkay.expressad.foundation.d.c
                if (r4 == 0) goto L66
                com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: org.json.JSONException -> L62
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r2.a     // Catch: org.json.JSONException -> L62
                com.tkay.expressad.video.signal.j r4 = r4.getJSVideoModule()     // Catch: org.json.JSONException -> L62
                java.lang.String r4 = r4.getCurrentProgress()     // Catch: org.json.JSONException -> L62
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L62
                r0.<init>(r4)     // Catch: org.json.JSONException -> L62
                java.lang.String r4 = "progress"
                java.lang.String r1 = ""
                java.lang.String r4 = r0.optString(r4, r1)     // Catch: org.json.JSONException -> L62
                int r0 = r3.Q()     // Catch: org.json.JSONException -> L62
                r1 = 3
                if (r0 != r1) goto L61
                int r3 = r3.C()     // Catch: org.json.JSONException -> L62
                r0 = 2
                if (r3 != r0) goto L61
                java.lang.String r3 = "1.0"
                boolean r3 = r4.equals(r3)     // Catch: org.json.JSONException -> L62
                if (r3 == 0) goto L61
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L62
                android.app.Activity r3 = com.tkay.expressad.video.bt.module.TYTempContainer.v(r3)     // Catch: org.json.JSONException -> L62
                if (r3 == 0) goto L61
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L62
                boolean r3 = com.tkay.expressad.video.bt.module.TYTempContainer.w(r3)     // Catch: org.json.JSONException -> L62
                if (r3 == 0) goto L58
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L62
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r3)     // Catch: org.json.JSONException -> L62
                return
            L58:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L62
                android.app.Activity r3 = com.tkay.expressad.video.bt.module.TYTempContainer.x(r3)     // Catch: org.json.JSONException -> L62
                r3.finish()     // Catch: org.json.JSONException -> L62
            L61:
                return
            L62:
                r3 = move-exception
                r3.printStackTrace()
            L66:
                return
        }

        @Override
        public final void b(com.tkay.expressad.out.d r1, java.lang.String r2) {
                r0 = this;
                super.b(r1, r2)
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r0.a
                com.tkay.expressad.video.bt.module.TYTempContainer.u(r1)
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r0.a
                com.tkay.expressad.video.bt.module.TYTempContainer.t(r1)
                return
        }

        @Override
        public final void c() {
                r1 = this;
                super.c()
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r1.a
                r0.receiveSuccess()
                return
        }

        @Override
        public final void d() {
                r2 = this;
                super.d()
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.os.Handler r0 = r0.h
                if (r0 == 0) goto L14
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                android.os.Handler r0 = r0.h
                com.tkay.expressad.video.bt.module.TYTempContainer r1 = r2.a
                java.lang.Runnable r1 = r1.i
                r0.removeCallbacks(r1)
            L14:
                return
        }
    }

    private final class e extends com.tkay.expressad.video.module.a.a.f {
        final com.tkay.expressad.video.bt.module.TYTempContainer a;

        private e(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        e(com.tkay.expressad.video.bt.module.TYTempContainer r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r3, java.lang.Object r4) {
                r2 = this;
                super.a(r3, r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r0 = r2.a
                boolean r0 = com.tkay.expressad.video.bt.module.TYTempContainer.e(r0)
                if (r0 == 0) goto L37
                boolean r0 = r4 instanceof java.lang.String     // Catch: java.lang.Exception -> L33
                if (r0 == 0) goto L37
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L33
                boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L33
                if (r0 != 0) goto L37
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L33
                r0.<init>(r4)     // Catch: java.lang.Exception -> L33
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r2.a     // Catch: java.lang.Exception -> L33
                java.lang.String r1 = "Alert_window_status"
                int r1 = r0.getInt(r1)     // Catch: java.lang.Exception -> L33
                com.tkay.expressad.video.bt.module.TYTempContainer.b(r4, r1)     // Catch: java.lang.Exception -> L33
                com.tkay.expressad.video.bt.module.TYTempContainer r4 = r2.a     // Catch: java.lang.Exception -> L33
                java.lang.String r1 = "complete_info"
                int r0 = r0.getInt(r1)     // Catch: java.lang.Exception -> L33
                com.tkay.expressad.video.bt.module.TYTempContainer.c(r4, r0)     // Catch: java.lang.Exception -> L33
                goto L37
            L33:
                r4 = move-exception
                r4.getMessage()
            L37:
                r4 = 2
                r0 = 0
                if (r3 == r4) goto Lc4
                r4 = 121(0x79, float:1.7E-43)
                if (r3 == r4) goto Lb0
                r4 = 16
                if (r3 == r4) goto Laa
                r4 = 17
                r1 = 1
                if (r3 == r4) goto L97
                switch(r3) {
                    case 10: goto L4c;
                    case 11: goto Lc4;
                    case 12: goto Lc4;
                    default: goto L4b;
                }
            L4b:
                goto Lc3
            L4c:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.a(r3, r1)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                if (r3 == 0) goto Lc3
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                boolean r3 = r3.j()
                if (r3 == 0) goto L8d
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                boolean r3 = com.tkay.expressad.video.bt.module.TYTempContainer.f(r3)
                if (r3 == 0) goto L83
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                boolean r3 = r3.l()
                if (r3 == 0) goto Lc3
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.a()
                return
            L83:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.a()
                return
            L8d:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.a()
                return
            L97:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.h(r3)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.module.TkayContainerView r3 = r3.g
                if (r3 == 0) goto Lc3
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.module.TkayContainerView r3 = r3.g
                r3.setRewardStatus(r1)
                return
            Laa:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r3)
                return
            Lb0:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.h(r3)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.b()
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.a(r3, r0)
            Lc3:
                return
            Lc4:
                r4 = 12
                if (r3 != r4) goto L12e
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                boolean r3 = com.tkay.expressad.video.bt.module.TYTempContainer.i(r3)
                if (r3 != 0) goto L12e
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.videocommon.e.d r3 = com.tkay.expressad.video.bt.module.TYTempContainer.j(r3)
                int r3 = r3.U()
                if (r3 != 0) goto Lf2
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                java.lang.String r4 = "play error"
                r3.a(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.a(r3, r0)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.k(r3)
                return
            Lf2:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                if (r3 == 0) goto L125
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                boolean r3 = r3.j()
                if (r3 == 0) goto L125
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                boolean r3 = com.tkay.expressad.video.bt.module.TYTempContainer.l(r3)
                if (r3 == 0) goto L11b
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.video.bt.module.TYTempContainer.d(r3)
                boolean r3 = r3.l()
                if (r3 == 0) goto L12e
                goto L125
            L11b:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.a()
                goto L12e
            L125:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.b.h r3 = com.tkay.expressad.video.bt.module.TYTempContainer.g(r3)
                r3.a()
            L12e:
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.signal.j r3 = r3.getJSVideoModule()
                r4 = 3
                r3.videoOperate(r4)
                com.tkay.expressad.video.bt.module.TYTempContainer r3 = r2.a
                com.tkay.expressad.video.bt.module.TYTempContainer.a(r3, r0)
                return
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.video.bt.module.TYTempContainer> r0 = com.tkay.expressad.video.bt.module.TYTempContainer.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.video.bt.module.TYTempContainer.A = r0
            return
    }

    public TYTempContainer(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 1
            r2.H = r0
            java.lang.String r0 = ""
            r2.I = r0
            int r1 = com.tkay.expressad.foundation.g.a.cv
            r2.K = r1
            r1 = 0
            r2.M = r1
            r2.S = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.U = r0
            r2.V = r1
            r2.a = r1
            r2.c = r1
            com.tkay.expressad.video.bt.module.TYTempContainer$a$a r0 = new com.tkay.expressad.video.bt.module.TYTempContainer$a$a
            r0.<init>()
            r2.d = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r2.h = r0
            r2.ai = r1
            r2.aj = r1
            r2.ak = r1
            com.tkay.expressad.video.bt.module.TYTempContainer$1 r0 = new com.tkay.expressad.video.bt.module.TYTempContainer$1
            r0.<init>(r2)
            r2.i = r0
            com.tkay.expressad.video.bt.module.TYTempContainer$2 r0 = new com.tkay.expressad.video.bt.module.TYTempContainer$2
            r0.<init>(r2)
            r2.j = r0
            r2.an = r1
            r2.ao = r1
            r2.ap = r1
            r2.ar = r1
            r2.as = r1
            r2.at = r1
            r2.au = r1
            r2.av = r1
            r2.aw = r1
            com.tkay.expressad.video.bt.module.TYTempContainer$3 r0 = new com.tkay.expressad.video.bt.module.TYTempContainer$3
            r0.<init>(r2)
            r2.ay = r0
            r2.init(r3)
            return
    }

    public TYTempContainer(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 1
            r1.H = r3
            java.lang.String r3 = ""
            r1.I = r3
            int r0 = com.tkay.expressad.foundation.g.a.cv
            r1.K = r0
            r0 = 0
            r1.M = r0
            r1.S = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.U = r3
            r1.V = r0
            r1.a = r0
            r1.c = r0
            com.tkay.expressad.video.bt.module.TYTempContainer$a$a r3 = new com.tkay.expressad.video.bt.module.TYTempContainer$a$a
            r3.<init>()
            r1.d = r3
            android.os.Handler r3 = new android.os.Handler
            r3.<init>()
            r1.h = r3
            r1.ai = r0
            r1.aj = r0
            r1.ak = r0
            com.tkay.expressad.video.bt.module.TYTempContainer$1 r3 = new com.tkay.expressad.video.bt.module.TYTempContainer$1
            r3.<init>(r1)
            r1.i = r3
            com.tkay.expressad.video.bt.module.TYTempContainer$2 r3 = new com.tkay.expressad.video.bt.module.TYTempContainer$2
            r3.<init>(r1)
            r1.j = r3
            r1.an = r0
            r1.ao = r0
            r1.ap = r0
            r1.ar = r0
            r1.as = r0
            r1.at = r0
            r1.au = r0
            r1.av = r0
            r1.aw = r0
            com.tkay.expressad.video.bt.module.TYTempContainer$3 r3 = new com.tkay.expressad.video.bt.module.TYTempContainer$3
            r3.<init>(r1)
            r1.ay = r3
            r1.init(r2)
            return
    }

    private int a(int r6, int r7) {
            r5 = this;
            if (r6 >= 0) goto L3
            return r6
        L3:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r5.U
            if (r0 != 0) goto L8
            return r6
        L8:
            int r0 = r0.size()
            if (r0 != 0) goto Lf
            return r6
        Lf:
            r0 = 1
            if (r7 > r0) goto L13
            return r6
        L13:
            r1 = 0
            r2 = r1
            r3 = r2
        L16:
            int r4 = r7 + (-1)
            if (r2 >= r4) goto L32
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r5.U
            java.lang.Object r4 = r4.get(r2)
            if (r4 == 0) goto L2f
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r5.U
            java.lang.Object r4 = r4.get(r2)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            int r4 = r4.bi()
            int r3 = r3 + r4
        L2f:
            int r2 = r2 + 1
            goto L16
        L32:
            if (r6 <= r3) goto L36
            int r1 = r6 - r3
        L36:
            return r1
    }

    static int a(com.tkay.expressad.video.bt.module.TYTempContainer r0, int r1) {
            r0.ai = r1
            return r1
    }

    static android.view.View a(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            android.view.View r0 = r0.am
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.video.bt.module.TYTempContainer.A
            return r0
    }

    private void a(int r4, java.lang.String r5) {
            r3 = this;
            com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r     // Catch: java.lang.Throwable -> La0
            r0.<init>()     // Catch: java.lang.Throwable -> La0
            java.lang.String r1 = "2000037"
            r0.h(r1)     // Catch: java.lang.Throwable -> La0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La0
            java.lang.String r2 = "code="
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La0
            r1.append(r4)     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = ",desc="
            r1.append(r4)     // Catch: java.lang.Throwable -> La0
            r1.append(r5)     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> La0
            r0.c(r4)     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r5 = ""
            if (r4 == 0) goto L3c
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.c$c r4 = r4.M()     // Catch: java.lang.Throwable -> La0
            if (r4 == 0) goto L3c
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.c$c r4 = r4.M()     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> La0
            goto L3d
        L3c:
            r4 = r5
        L3d:
            r0.b(r4)     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r3.m     // Catch: java.lang.Throwable -> La0
            r0.f(r4)     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            if (r4 == 0) goto L4f
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r5 = r4.aZ()     // Catch: java.lang.Throwable -> La0
        L4f:
            r0.g(r5)     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            if (r4 == 0) goto L6b
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r4.Z()     // Catch: java.lang.Throwable -> La0
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La0
            if (r4 != 0) goto L6b
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r4.Z()     // Catch: java.lang.Throwable -> La0
            r0.d(r4)     // Catch: java.lang.Throwable -> La0
        L6b:
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            if (r4 == 0) goto L84
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r4.aa()     // Catch: java.lang.Throwable -> La0
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La0
            if (r4 != 0) goto L84
            com.tkay.expressad.foundation.d.c r4 = r3.C     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = r4.aa()     // Catch: java.lang.Throwable -> La0
            r0.e(r4)     // Catch: java.lang.Throwable -> La0
        L84:
            r3.getContext()     // Catch: java.lang.Throwable -> La0
            int r4 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> La0
            r0.c(r4)     // Catch: java.lang.Throwable -> La0
            android.content.Context r5 = r3.getContext()     // Catch: java.lang.Throwable -> La0
            java.lang.String r4 = com.tkay.expressad.foundation.h.k.a(r5, r4)     // Catch: java.lang.Throwable -> La0
            r0.j(r4)     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.foundation.d.r.a(r0)     // Catch: java.lang.Throwable -> La0
            com.tkay.expressad.video.module.b.a.a()     // Catch: java.lang.Throwable -> La0
            return
        La0:
            r4 = move-exception
            r4.getMessage()
            return
    }

    static boolean a(com.tkay.expressad.video.bt.module.TYTempContainer r0, boolean r1) {
            r0.at = r1
            return r1
    }

    static int b(com.tkay.expressad.video.bt.module.TYTempContainer r0, int r1) {
            r0.K = r1
            return r1
    }

    static android.app.Activity b(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    static int c(com.tkay.expressad.video.bt.module.TYTempContainer r0, int r1) {
            r0.L = r1
            return r1
    }

    static android.app.Activity c(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    private static android.widget.RelativeLayout.LayoutParams c() {
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            return r0
    }

    static com.tkay.expressad.foundation.d.c d(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.C
            return r0
    }

    private void d() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto L7
            r1.setMatchParent()
        L7:
            return
    }

    private int e() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.C
            com.tkay.expressad.video.signal.a.j r0 = r1.b(r0)
            if (r0 == 0) goto Ld
            int r0 = r0.c()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    static boolean e(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.t
            return r0
    }

    private int f() {
            r1 = this;
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            if (r0 == 0) goto Lf
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            int r0 = r0.n()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    static boolean f(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.y
            return r0
    }

    private int g() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.C
            com.tkay.expressad.video.signal.a.j r0 = r1.b(r0)
            if (r0 == 0) goto Ld
            int r0 = r0.b()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    static com.tkay.expressad.video.bt.module.b.h g(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            com.tkay.expressad.video.bt.module.b.h r0 = r0.E
            return r0
    }

    private boolean h() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.C
            com.tkay.expressad.video.signal.a.j r0 = r1.b(r0)
            if (r0 == 0) goto Ld
            boolean r0 = r0.a()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    static boolean h(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
            r0 = 1
            r1.ao = r0
            return r0
    }

    private boolean i() {
            r2 = this;
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f
            r1 = 0
            if (r0 == 0) goto L17
            boolean r0 = r0.isShowingAlertView()
            if (r0 != 0) goto L15
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f
            boolean r0 = r0.isInstallDialogShowing()
            if (r0 == 0) goto L14
            goto L15
        L14:
            return r1
        L15:
            r0 = 1
            return r0
        L17:
            return r1
    }

    static boolean i(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.at
            return r0
    }

    static com.tkay.expressad.videocommon.e.d j(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            com.tkay.expressad.videocommon.e.d r0 = r0.o
            return r0
    }

    private void j() {
            r6 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.e     // Catch: java.lang.Exception -> Lf9
            if (r0 == 0) goto Lf8
            android.content.res.Resources r0 = r6.getResources()     // Catch: java.lang.Exception -> Lf9
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Exception -> Lf9
            int r0 = r0.orientation     // Catch: java.lang.Exception -> Lf9
            boolean r1 = r6.h()     // Catch: java.lang.Exception -> Lf9
            if (r1 == 0) goto L3d
            android.content.Context r1 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            int r1 = com.tkay.expressad.foundation.h.t.g(r1)     // Catch: java.lang.Exception -> Lf9
            android.content.Context r2 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            int r2 = com.tkay.expressad.foundation.h.t.h(r2)     // Catch: java.lang.Exception -> Lf9
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            boolean r3 = com.tkay.expressad.foundation.h.t.a(r3)     // Catch: java.lang.Exception -> Lf9
            if (r3 == 0) goto L4d
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            int r3 = com.tkay.expressad.foundation.h.t.i(r3)     // Catch: java.lang.Exception -> Lf9
            r4 = 2
            if (r0 != r4) goto L3b
            int r1 = r1 + r3
            goto L4d
        L3b:
            int r2 = r2 + r3
            goto L4d
        L3d:
            android.content.Context r1 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            int r1 = com.tkay.expressad.foundation.h.t.f(r1)     // Catch: java.lang.Exception -> Lf9
            android.content.Context r2 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            int r2 = com.tkay.expressad.foundation.h.t.e(r2)     // Catch: java.lang.Exception -> Lf9
        L4d:
            com.tkay.expressad.foundation.d.c r3 = r6.C     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.foundation.d.c$c r3 = r3.M()     // Catch: java.lang.Exception -> Lf9
            int r3 = r3.c()     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.foundation.d.c r4 = r6.C     // Catch: java.lang.Exception -> Lf9
            int r4 = r6.c(r4)     // Catch: java.lang.Exception -> Lf9
            r5 = 1
            if (r4 != r5) goto L61
            r3 = r0
        L61:
            com.tkay.expressad.video.signal.g r4 = r6.getJSNotifyProxy()     // Catch: java.lang.Exception -> Lf9
            r4.a(r0, r3, r1, r2)     // Catch: java.lang.Exception -> Lf9
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lf9
            r0.<init>()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.ch     // Catch: java.lang.Exception -> Lf9
            android.content.Context r2 = r6.getContext()     // Catch: java.lang.Exception -> Lf9
            float r2 = com.tkay.expressad.foundation.h.t.c(r2)     // Catch: java.lang.Exception -> Lf9
            double r2 = (double) r2     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.videocommon.c.c r1 = r6.q     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            if (r1 == 0) goto Lc5
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r1.<init>()     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r2 = "name"
            com.tkay.expressad.videocommon.c.c r3 = r6.q     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r3 = r3.a()     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r2 = "amount"
            com.tkay.expressad.videocommon.c.c r3 = r6.q     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            int r3 = r3.b()     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r2 = "id"
            java.lang.String r3 = r6.r     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r2 = "userId"
            java.lang.String r3 = r6.p     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r2 = "reward"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r1 = "playVideoMute"
            int r2 = r6.s     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            java.lang.String r1 = "extra"
            java.lang.String r2 = r6.T     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lbc org.json.JSONException -> Lc1
            goto Lc5
        Lbc:
            r1 = move-exception
            r1.getMessage()     // Catch: java.lang.Exception -> Lf9
            goto Lc5
        Lc1:
            r1 = move-exception
            r1.getMessage()     // Catch: java.lang.Exception -> Lf9
        Lc5:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.video.signal.g r1 = r6.getJSNotifyProxy()     // Catch: java.lang.Exception -> Lf9
            r1.a(r0)     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.e     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "oncutoutfetched"
            java.lang.String r2 = r6.S     // Catch: java.lang.Exception -> Lf9
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> Lf9
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)     // Catch: java.lang.Exception -> Lf9
            com.tkay.expressad.video.signal.c r0 = r6.getJSCommon()     // Catch: java.lang.Exception -> Lf9
            r0.h()     // Catch: java.lang.Exception -> Lf9
            r6.loadModuleDatas()     // Catch: java.lang.Exception -> Lf9
            android.os.Handler r0 = r6.h     // Catch: java.lang.Exception -> Lf9
            java.lang.Runnable r1 = r6.i     // Catch: java.lang.Exception -> Lf9
            r2 = 2000(0x7d0, double:9.88E-321)
            r0.postDelayed(r1, r2)     // Catch: java.lang.Exception -> Lf9
        Lf8:
            return
        Lf9:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L101
            r0.printStackTrace()
        L101:
            return
    }

    private void k() {
            r2 = this;
            int r0 = r2.ai
            r1 = -3
            if (r0 != r1) goto L8
            java.lang.Runnable r0 = r2.i
            goto Lf
        L8:
            r1 = -4
            if (r0 != r1) goto Le
            java.lang.Runnable r0 = r2.j
            goto Lf
        Le:
            r0 = 0
        Lf:
            if (r0 == 0) goto L17
            r0.run()
            r0 = 0
            r2.ai = r0
        L17:
            return
    }

    static void k(com.tkay.expressad.video.bt.module.TYTempContainer r4) {
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L2e
            boolean r0 = r4.t     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L22
            int r0 = r4.v     // Catch: java.lang.Exception -> L38
            int r1 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L38
            if (r0 == r1) goto L14
            int r0 = r4.v     // Catch: java.lang.Exception -> L38
            int r1 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L38
            if (r0 != r1) goto L22
        L14:
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            int r1 = r4.L     // Catch: java.lang.Exception -> L38
            r2 = 1
            if (r1 != r2) goto L1c
            goto L1d
        L1c:
            r2 = 0
        L1d:
            int r1 = r4.K     // Catch: java.lang.Exception -> L38
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L38
        L22:
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.I     // Catch: java.lang.Exception -> L38
            boolean r2 = r4.ao     // Catch: java.lang.Exception -> L38
            com.tkay.expressad.videocommon.c.c r3 = r4.q     // Catch: java.lang.Exception -> L38
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L38
            return
        L2e:
            android.app.Activity r0 = r4.l     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L37
            android.app.Activity r0 = r4.l     // Catch: java.lang.Exception -> L38
            r0.finish()     // Catch: java.lang.Exception -> L38
        L37:
            return
        L38:
            android.app.Activity r0 = r4.l
            if (r0 == 0) goto L41
            android.app.Activity r4 = r4.l
            r4.finish()
        L41:
            return
    }

    private boolean l() {
            r7 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.findWindVaneWebView()
            r7.e = r0
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.findTkayVideoView()
            r7.f = r0
            com.tkay.expressad.foundation.d.c r1 = r7.C
            r0.setVideoLayout(r1)
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            boolean r1 = r7.t
            r0.setIsIV(r1)
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            java.lang.String r1 = r7.m
            r0.setUnitId(r1)
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            com.tkay.expressad.video.dynview.f.a r1 = r7.G
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r7.U
            int r3 = r7.H
            int r4 = r7.V
            r0.setCamPlayOrderCallback(r1, r2, r3, r4)
            boolean r0 = r7.y
            if (r0 == 0) goto L3d
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            int r1 = r7.O
            int r2 = r7.P
            int r3 = r7.Q
            int r4 = r7.R
            r0.setNotchPadding(r1, r2, r3, r4)
        L3d:
            com.tkay.expressad.video.module.TkayContainerView r0 = r7.findTkayContainerView()
            r7.g = r0
            boolean r0 = r7.y
            if (r0 == 0) goto L56
            com.tkay.expressad.video.module.TkayContainerView r1 = r7.g
            int r2 = r7.N
            int r3 = r7.O
            int r4 = r7.P
            int r5 = r7.Q
            int r6 = r7.R
            r1.setNotchPadding(r2, r3, r4, r5, r6)
        L56:
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            if (r0 == 0) goto L66
            com.tkay.expressad.video.module.TkayContainerView r0 = r7.g
            if (r0 == 0) goto L66
            boolean r0 = r7.initViews()
            if (r0 == 0) goto L66
            r0 = 1
            return r0
        L66:
            r0 = 0
            return r0
    }

    static boolean l(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.y
            return r0
    }

    private void m() {
            r4 = this;
            com.tkay.expressad.videocommon.e.d r0 = r4.o
            if (r0 != 0) goto L1a
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r4.m
            boolean r3 = r4.t
            com.tkay.expressad.videocommon.e.d r0 = r0.a(r1, r2, r3)
            r4.o = r0
        L1a:
            return
    }

    static boolean m(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
            r0 = 1
            r1.au = r0
            return r0
    }

    static com.tkay.expressad.video.bt.module.a.b n(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            com.tkay.expressad.video.bt.module.a.b r0 = r0.F
            return r0
    }

    private static void n() {
            return
    }

    static java.lang.String o(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            java.lang.String r0 = r0.I
            return r0
    }

    private void o() {
            r4 = this;
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L2e
            boolean r0 = r4.t     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L22
            int r0 = r4.v     // Catch: java.lang.Exception -> L38
            int r1 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L38
            if (r0 == r1) goto L14
            int r0 = r4.v     // Catch: java.lang.Exception -> L38
            int r1 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L38
            if (r0 != r1) goto L22
        L14:
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            int r1 = r4.L     // Catch: java.lang.Exception -> L38
            r2 = 1
            if (r1 != r2) goto L1c
            goto L1d
        L1c:
            r2 = 0
        L1d:
            int r1 = r4.K     // Catch: java.lang.Exception -> L38
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L38
        L22:
            com.tkay.expressad.video.bt.module.a.b r0 = r4.F     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.I     // Catch: java.lang.Exception -> L38
            boolean r2 = r4.ao     // Catch: java.lang.Exception -> L38
            com.tkay.expressad.videocommon.c.c r3 = r4.q     // Catch: java.lang.Exception -> L38
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L38
            return
        L2e:
            android.app.Activity r0 = r4.l     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L37
            android.app.Activity r0 = r4.l     // Catch: java.lang.Exception -> L38
            r0.finish()     // Catch: java.lang.Exception -> L38
        L37:
            return
        L38:
            android.app.Activity r0 = r4.l
            if (r0 == 0) goto L41
            android.app.Activity r0 = r4.l
            r0.finish()
        L41:
            return
    }

    private static void p() {
            return
    }

    static boolean p(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.t
            return r0
    }

    private void q() {
            r10 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r10.e
            com.tkay.expressad.video.signal.factory.b r8 = new com.tkay.expressad.video.signal.factory.b
            android.app.Activity r1 = r10.l
            com.tkay.expressad.video.module.TkayVideoView r3 = r10.f
            com.tkay.expressad.video.module.TkayContainerView r4 = r10.g
            com.tkay.expressad.foundation.d.c r5 = r10.C
            com.tkay.expressad.video.bt.module.TYTempContainer$d r6 = new com.tkay.expressad.video.bt.module.TYTempContainer$d
            r9 = 0
            r6.<init>(r10, r9)
            r0 = r8
            r2 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r10.J = r8
            com.tkay.expressad.foundation.d.c r0 = r10.C
            if (r0 == 0) goto L2d
            int r0 = r0.k()
            r1 = 5
            if (r0 != r1) goto L2d
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r10.U
            if (r0 == 0) goto L2d
            com.tkay.expressad.video.signal.factory.b r1 = r10.J
            r1.a(r0)
        L2d:
            com.tkay.expressad.video.signal.factory.b r0 = r10.J
            r10.registerJsFactory(r0)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r10.m
            r1.append(r2)
            java.lang.String r2 = "_1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.video.bt.module.TYTempContainer$5 r2 = new com.tkay.expressad.video.bt.module.TYTempContainer$5
            r2.<init>(r10)
            r0.a(r1, r2)
            java.lang.String r0 = "preload template webview is null or load error"
            if (r7 == 0) goto L14b
            android.view.View r1 = r10.B
            android.content.Context r2 = r10.getContext()
            java.lang.String r3 = "id"
            java.lang.String r4 = "tkay_video_templete_webview_parent"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r4, r3)
            android.view.View r1 = r1.findViewById(r2)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            com.tkay.expressad.video.signal.factory.b r2 = r10.J
            r7.setApiManagerJSFactory(r2)
            android.view.ViewParent r2 = r7.getParent()
            if (r2 == 0) goto L78
            r10.defaultLoad(r9, r0)
            return
        L78:
            java.lang.Object r0 = r7.getObject()
            boolean r0 = r0 instanceof com.tkay.expressad.video.signal.a.j
            if (r0 == 0) goto L116
            com.tkay.expressad.video.signal.factory.b r0 = r10.J
            java.lang.Object r2 = r7.getObject()
            com.tkay.expressad.video.signal.a.j r2 = (com.tkay.expressad.video.signal.a.j) r2
            r0.a(r2)
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            int r2 = r10.s
            r0.a(r2)
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            java.lang.String r2 = r10.m
            r0.a(r2)
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            com.tkay.expressad.videocommon.e.d r2 = r10.o
            r0.a(r2)
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            com.tkay.expressad.video.bt.module.TYTempContainer$d r2 = new com.tkay.expressad.video.bt.module.TYTempContainer$d
            r2.<init>(r10, r9)
            r0.a(r2)
            com.tkay.expressad.foundation.d.c r0 = r10.C
            if (r0 == 0) goto Le1
            boolean r0 = r0.H()
            if (r0 != 0) goto Lc4
            com.tkay.expressad.foundation.d.c r0 = r10.C
            boolean r0 = r0.ay()
            if (r0 == 0) goto Le1
        Lc4:
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver
            android.content.Context r2 = r10.getContext()
            r0.<init>(r2)
            r10.ax = r0
            r0.registerReceiver()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r10.ax
            r0.getCurrentVolume()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r10.ax
            com.tkay.expressad.video.bt.module.TYTempContainer$6 r2 = new com.tkay.expressad.video.bt.module.TYTempContainer$6
            r2.<init>(r10)
            r0.setVolumeChangeListener(r2)
        Le1:
            java.lang.Object r0 = r7.getObject()
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0
            int r0 = r0.r()
            com.tkay.expressad.video.signal.e r2 = r10.getJSContainerModule()
            r2.readyStatus(r0)
            r10.j()
            java.lang.Object r0 = r7.getObject()
            com.tkay.expressad.video.signal.a.j r0 = (com.tkay.expressad.video.signal.a.j) r0
            com.tkay.expressad.video.signal.c$a r0 = r0.r
            r0.c()
            boolean r0 = r10.y
            if (r0 == 0) goto L116
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            int r2 = r10.aj
            r0.f(r2)
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            int r2 = r10.ak
            r0.e(r2)
        L116:
            com.tkay.expressad.video.signal.c r0 = r10.getJSCommon()
            int r0 = r0.f()
            r2 = 1
            if (r0 != r2) goto L141
            android.view.View r0 = r10.B
            android.content.Context r5 = r10.getContext()
            int r3 = com.tkay.expressad.foundation.h.i.a(r5, r4, r3)
            android.view.View r0 = r0.findViewById(r3)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L141
            android.view.View r3 = r10.B
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r3.removeView(r0)
            android.view.View r3 = r10.B
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r3.addView(r0, r2)
        L141:
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r0.<init>(r2, r2)
            r1.addView(r7, r0)
            return
        L14b:
            r10.defaultLoad(r9, r0)
            return
    }

    static boolean q(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
            r0 = 1
            r1.av = r0
            return r0
    }

    static java.lang.Runnable r(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            java.lang.Runnable r0 = r0.ay
            return r0
    }

    private void r() {
            r3 = this;
            com.tkay.expressad.video.signal.c r0 = r3.getJSCommon()
            int r1 = r3.s
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.getJSCommon()
            java.lang.String r1 = r3.m
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.getJSCommon()
            com.tkay.expressad.videocommon.e.d r1 = r3.o
            r0.a(r1)
            com.tkay.expressad.video.signal.c r0 = r3.getJSCommon()
            com.tkay.expressad.video.bt.module.TYTempContainer$d r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$d
            r2 = 0
            r1.<init>(r3, r2)
            r0.a(r1)
            com.tkay.expressad.foundation.d.c r0 = r3.C
            if (r0 == 0) goto L57
            boolean r0 = r0.H()
            if (r0 != 0) goto L3a
            com.tkay.expressad.foundation.d.c r0 = r3.C
            boolean r0 = r0.ay()
            if (r0 == 0) goto L57
        L3a:
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.ax = r0
            r0.registerReceiver()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r3.ax
            r0.getCurrentVolume()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r3.ax
            com.tkay.expressad.video.bt.module.TYTempContainer$6 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$6
            r1.<init>(r3)
            r0.setVolumeChangeListener(r1)
        L57:
            return
    }

    private void s() {
            r5 = this;
            boolean r0 = r5.ao
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.d.c r0 = r5.C
            com.tkay.expressad.videocommon.c.c r1 = r5.q
            java.lang.String r2 = r5.m
            java.lang.String r3 = r5.p
            java.lang.String r4 = r5.T
            com.tkay.expressad.video.module.b.a.a(r0, r1, r2, r3, r4)
        L11:
            return
    }

    static void s(com.tkay.expressad.video.bt.module.TYTempContainer r2) {
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.l
            com.tkay.expressad.video.bt.module.TYTempContainer$7 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$7
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    private void t() {
            r5 = this;
            r0 = 1
            r5.an = r0     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L12
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> L93
            int r1 = r1.J()     // Catch: java.lang.Throwable -> L93
            r2 = 2
            if (r1 != r2) goto L12
            r5.ao = r0     // Catch: java.lang.Throwable -> L93
        L12:
            com.tkay.expressad.video.bt.module.b.h r1 = r5.E     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L46
            boolean r1 = r5.t     // Catch: java.lang.Throwable -> L93
            r2 = 0
            if (r1 == 0) goto L34
            int r1 = r5.v     // Catch: java.lang.Throwable -> L93
            int r3 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Throwable -> L93
            if (r1 == r3) goto L27
            int r1 = r5.v     // Catch: java.lang.Throwable -> L93
            int r3 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Throwable -> L93
            if (r1 != r3) goto L34
        L27:
            com.tkay.expressad.video.bt.module.b.h r1 = r5.E     // Catch: java.lang.Throwable -> L93
            int r3 = r5.L     // Catch: java.lang.Throwable -> L93
            if (r3 != r0) goto L2e
            goto L2f
        L2e:
            r0 = r2
        L2f:
            int r3 = r5.K     // Catch: java.lang.Throwable -> L93
            r1.a(r0, r3)     // Catch: java.lang.Throwable -> L93
        L34:
            boolean r0 = r5.ao     // Catch: java.lang.Throwable -> L93
            if (r0 != 0) goto L3d
            com.tkay.expressad.videocommon.c.c r0 = r5.q     // Catch: java.lang.Throwable -> L93
            r0.a(r2)     // Catch: java.lang.Throwable -> L93
        L3d:
            com.tkay.expressad.video.bt.module.b.h r0 = r5.E     // Catch: java.lang.Throwable -> L93
            boolean r1 = r5.ao     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.videocommon.c.c r2 = r5.q     // Catch: java.lang.Throwable -> L93
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L93
        L46:
            android.os.Handler r0 = r5.h     // Catch: java.lang.Throwable -> L93
            java.lang.Runnable r1 = r5.ay     // Catch: java.lang.Throwable -> L93
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L93
            boolean r0 = r5.t     // Catch: java.lang.Throwable -> L93
            if (r0 != 0) goto L55
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L61
        L55:
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L72
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> L93
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L72
        L61:
            boolean r0 = r5.ao     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L72
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.videocommon.c.c r1 = r5.q     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = r5.m     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = r5.p     // Catch: java.lang.Throwable -> L93
            java.lang.String r4 = r5.T     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.video.module.b.a.a(r0, r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L93
        L72:
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> L93
            if (r0 != 0) goto L89
            boolean r0 = r5.t     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L82
            r0 = 287(0x11f, float:4.02E-43)
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> L93
            goto L89
        L82:
            r0 = 94
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> L93
            com.tkay.expressad.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> L93
        L89:
            com.tkay.expressad.video.module.TkayContainerView r0 = r5.g     // Catch: java.lang.Throwable -> L93
            if (r0 == 0) goto L92
            com.tkay.expressad.video.module.TkayContainerView r0 = r5.g     // Catch: java.lang.Throwable -> L93
            r0.release()     // Catch: java.lang.Throwable -> L93
        L92:
            return
        L93:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean t(com.tkay.expressad.video.bt.module.TYTempContainer r1) {
            r0 = 1
            r1.as = r0
            return r0
    }

    private static int u() {
            r0 = 5
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L11
            com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.e.c.c()     // Catch: java.lang.Throwable -> L19
        L11:
            if (r1 == 0) goto L1d
            long r0 = r1.g()     // Catch: java.lang.Throwable -> L19
            int r0 = (int) r0
            goto L1d
        L19:
            r1 = move-exception
            r1.printStackTrace()
        L1d:
            return r0
    }

    static void u(com.tkay.expressad.video.bt.module.TYTempContainer r2) {
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.l
            com.tkay.expressad.video.bt.module.TYTempContainer$8 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$8
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    static android.app.Activity v(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    private void v() {
            r2 = this;
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.l
            com.tkay.expressad.video.bt.module.TYTempContainer$7 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$7
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    private void w() {
            r2 = this;
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.l
            com.tkay.expressad.video.bt.module.TYTempContainer$8 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$8
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    static boolean w(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            boolean r0 = r0.y
            return r0
    }

    static android.app.Activity x(com.tkay.expressad.video.bt.module.TYTempContainer r0) {
            android.app.Activity r0 = r0.l
            return r0
    }

    @Override
    protected final void a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.video.bt.module.b.h r0 = r1.E
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            super.a(r2)
            return
    }

    public boolean canBackPress() {
            r1 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.g
            if (r0 == 0) goto Ld
            boolean r0 = r0.canBackPress()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    public void defaultLoad(int r20, java.lang.String r21) {
            r19 = this;
            r0 = r19
            r19.superDefaultLoad(r20, r21)
            boolean r1 = r19.isLoadSuccess()
            if (r1 == 0) goto L14e
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.J()
            r2 = 2
            r3 = 0
            r4 = -2
            if (r1 != r2) goto L81
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.foundation.d.c r2 = r0.C
            r1.setCampaign(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r0.U
            r1.addOrderViewData(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            java.lang.String r2 = r0.m
            r1.setUnitID(r2)
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.g()
            if (r1 <= r4) goto L3a
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.g()
            goto L40
        L3a:
            com.tkay.expressad.videocommon.e.d r1 = r0.o
            int r1 = r1.p()
        L40:
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            r2.setCloseDelayTime(r1)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.videocommon.e.d r2 = r0.o
            int r2 = r2.j()
            r1.setPlayCloseBtnTm(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.module.a.a.h r2 = new com.tkay.expressad.video.module.a.a.h
            com.tkay.expressad.foundation.d.c r5 = r0.C
            com.tkay.expressad.videocommon.b.a r6 = r0.D
            com.tkay.expressad.videocommon.c.c r7 = r0.q
            java.lang.String r8 = r19.b()
            java.lang.String r9 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$c r10 = new com.tkay.expressad.video.bt.module.TYTempContainer$c
            r10.<init>(r0, r3)
            com.tkay.expressad.videocommon.e.d r3 = r0.o
            int r11 = r3.M()
            boolean r12 = r0.y
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)
            r1.setNotifyListener(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.signal.factory.b r2 = r0.J
            r1.preLoadData(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            r1.showPlayableView()
            return
        L81:
            r19.a(r20, r21)
            android.view.View r1 = r0.am
            r2 = 8
            r1.setVisibility(r2)
            r19.loadModuleDatas()
            com.tkay.expressad.videocommon.e.d r1 = r0.o
            int r1 = r1.f()
            int r2 = r19.e()
            if (r2 == 0) goto L9c
            r13 = r2
            goto L9d
        L9c:
            r13 = r1
        L9d:
            com.tkay.expressad.foundation.d.c r1 = r0.C
            if (r1 == 0) goto Lb5
            boolean r1 = r1.j()
            if (r1 == 0) goto Lb5
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            com.tkay.expressad.video.bt.module.TYTempContainer$b r2 = new com.tkay.expressad.video.bt.module.TYTempContainer$b
            android.app.Activity r5 = r0.l
            com.tkay.expressad.foundation.d.c r6 = r0.C
            r2.<init>(r0, r5, r6)
            r1.setContainerViewOnNotifyListener(r2)
        Lb5:
            com.tkay.expressad.foundation.d.c r1 = r0.C
            if (r1 == 0) goto Lc6
            int r1 = r1.h()
            if (r1 <= r4) goto Lc6
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.h()
            goto Lcc
        Lc6:
            com.tkay.expressad.videocommon.e.d r1 = r0.o
            int r1 = r1.e()
        Lcc:
            com.tkay.expressad.foundation.d.c r2 = r0.C
            int r2 = r2.k()
            r4 = 5
            if (r2 != r4) goto Le3
            int r2 = r0.H
            r4 = 1
            if (r2 <= r4) goto Le3
            int r1 = r0.a(r1, r2)
            com.tkay.expressad.foundation.d.c r2 = r0.C
            r2.a(r1)
        Le3:
            r14 = r1
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            r1.setVideoSkipTime(r14)
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            com.tkay.expressad.video.module.a.a.m r2 = new com.tkay.expressad.video.module.a.a.m
            com.tkay.expressad.video.module.TkayContainerView r7 = r0.g
            com.tkay.expressad.foundation.d.c r8 = r0.C
            com.tkay.expressad.videocommon.c.c r9 = r0.q
            com.tkay.expressad.videocommon.b.a r10 = r0.D
            java.lang.String r11 = r19.b()
            java.lang.String r12 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$e r15 = new com.tkay.expressad.video.bt.module.TYTempContainer$e
            r15.<init>(r0, r3)
            com.tkay.expressad.videocommon.e.d r3 = r0.o
            int r16 = r3.M()
            boolean r3 = r0.y
            com.tkay.expressad.videocommon.e.d r4 = r0.o
            int r18 = r4.U()
            r5 = r2
            r6 = r1
            r17 = r3
            r5.<init>(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            r1.setNotifyListener(r2)
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            r1.defaultShow()
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.module.a.a.b r13 = new com.tkay.expressad.video.module.a.a.b
            com.tkay.expressad.video.module.TkayVideoView r3 = r0.f
            com.tkay.expressad.foundation.d.c r5 = r0.C
            com.tkay.expressad.videocommon.c.c r6 = r0.q
            com.tkay.expressad.videocommon.b.a r7 = r0.D
            java.lang.String r8 = r19.b()
            java.lang.String r9 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$b r10 = new com.tkay.expressad.video.bt.module.TYTempContainer$b
            android.app.Activity r2 = r0.l
            com.tkay.expressad.foundation.d.c r4 = r0.C
            r10.<init>(r0, r2, r4)
            com.tkay.expressad.videocommon.e.d r2 = r0.o
            int r11 = r2.M()
            boolean r12 = r0.y
            r2 = r13
            r4 = r1
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            r1.setNotifyListener(r13)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            r1.defaultShow()
            return
        L14e:
            r19.a(r20, r21)
            android.app.Activity r1 = r0.l
            if (r1 == 0) goto L15a
            android.app.Activity r1 = r0.l
            r1.finish()
        L15a:
            return
    }

    public int findID(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "id"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    public int findLayout(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "layout"
            int r3 = com.tkay.expressad.foundation.h.i.a(r0, r3, r1)
            return r3
    }

    public com.tkay.expressad.video.module.TkayContainerView findTkayContainerView() {
            r1 = this;
            java.lang.String r0 = "tkay_video_templete_container"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            com.tkay.expressad.video.module.TkayContainerView r0 = (com.tkay.expressad.video.module.TkayContainerView) r0
            return r0
    }

    public com.tkay.expressad.video.module.TkayVideoView findTkayVideoView() {
            r1 = this;
            java.lang.String r0 = "tkay_video_templete_videoview"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            com.tkay.expressad.video.module.TkayVideoView r0 = (com.tkay.expressad.video.module.TkayVideoView) r0
            return r0
    }

    public com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView findWindVaneWebView() {
            r4 = this;
            java.lang.String r0 = "_"
            boolean r1 = r4.y     // Catch: java.lang.Exception -> L8b
            if (r1 == 0) goto L53
            com.tkay.expressad.foundation.d.c r1 = r4.C     // Catch: java.lang.Exception -> L8b
            if (r1 == 0) goto L93
            com.tkay.expressad.foundation.d.c r1 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.foundation.d.c$c r1 = r1.M()     // Catch: java.lang.Exception -> L8b
            if (r1 == 0) goto L93
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8b
            r1.<init>()     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = r4.m     // Catch: java.lang.Exception -> L8b
            r1.append(r2)     // Catch: java.lang.Exception -> L8b
            r1.append(r0)     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.foundation.d.c r2 = r4.C     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = r2.aZ()     // Catch: java.lang.Exception -> L8b
            r1.append(r2)     // Catch: java.lang.Exception -> L8b
            r1.append(r0)     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.foundation.d.c r2 = r4.C     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = r2.Z()     // Catch: java.lang.Exception -> L8b
            r1.append(r2)     // Catch: java.lang.Exception -> L8b
            r1.append(r0)     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.foundation.d.c r0 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.foundation.d.c$c r0 = r0.M()     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L8b
            r1.append(r0)     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.videocommon.a$a r0 = com.tkay.expressad.videocommon.a.a(r0)     // Catch: java.lang.Exception -> L8b
            if (r0 == 0) goto L93
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a()     // Catch: java.lang.Exception -> L8b
            return r0
        L53:
            boolean r0 = r4.t     // Catch: java.lang.Exception -> L8b
            r1 = 287(0x11f, float:4.02E-43)
            r2 = 94
            if (r0 == 0) goto L62
            com.tkay.expressad.foundation.d.c r0 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.videocommon.a$a r0 = com.tkay.expressad.videocommon.a.a(r1, r0)     // Catch: java.lang.Exception -> L8b
            goto L68
        L62:
            com.tkay.expressad.foundation.d.c r0 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.videocommon.a$a r0 = com.tkay.expressad.videocommon.a.a(r2, r0)     // Catch: java.lang.Exception -> L8b
        L68:
            if (r0 == 0) goto L93
            boolean r3 = r0.c()     // Catch: java.lang.Exception -> L8b
            if (r3 == 0) goto L93
            boolean r3 = r4.t     // Catch: java.lang.Exception -> L8b
            if (r3 == 0) goto L7a
            com.tkay.expressad.foundation.d.c r2 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.videocommon.a.b(r1, r2)     // Catch: java.lang.Exception -> L8b
            goto L7f
        L7a:
            com.tkay.expressad.foundation.d.c r1 = r4.C     // Catch: java.lang.Exception -> L8b
            com.tkay.expressad.videocommon.a.b(r2, r1)     // Catch: java.lang.Exception -> L8b
        L7f:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.a()     // Catch: java.lang.Exception -> L8b
            boolean r1 = r4.ar     // Catch: java.lang.Exception -> L8b
            if (r1 == 0) goto L8a
            r0.setWebViewTransparent()     // Catch: java.lang.Exception -> L8b
        L8a:
            return r0
        L8b:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L93
            r0.printStackTrace()
        L93:
            r0 = 0
            return r0
    }

    public com.tkay.expressad.foundation.d.c getCampaign() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.C
            return r0
    }

    public java.lang.String getInstanceId() {
            r1 = this;
            java.lang.String r0 = r1.I
            return r0
    }

    public int getLayoutID() {
            r1 = this;
            boolean r0 = r1.ar
            if (r0 == 0) goto Lb
            java.lang.String r0 = "tkay_reward_activity_video_templete_transparent"
        L6:
            int r0 = r1.findLayout(r0)
            return r0
        Lb:
            java.lang.String r0 = "tkay_reward_activity_video_templete"
            goto L6
    }

    public void init(android.content.Context r1) {
            r0 = this;
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r0.W = r1
            return
    }

    public boolean initViews() {
            r1 = this;
            java.lang.String r0 = "tkay_video_templete_progressbar"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            r1.am = r0
            if (r0 == 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public boolean isLoadSuccess() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public void loadModuleDatas() {
            r20 = this;
            r0 = r20
            com.tkay.expressad.foundation.d.c r1 = r0.C
            com.tkay.expressad.video.signal.a.j r1 = r0.b(r1)
            r2 = 0
            if (r1 == 0) goto L10
            int r1 = r1.b()
            goto L11
        L10:
            r1 = r2
        L11:
            if (r1 == 0) goto L15
            r0.s = r1
        L15:
            com.tkay.expressad.videocommon.e.d r1 = r0.o
            int r1 = r1.f()
            int r3 = r20.e()
            if (r3 == 0) goto L23
            r11 = r3
            goto L24
        L23:
            r11 = r1
        L24:
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            int r3 = r0.s
            r1.setSoundState(r3)
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            com.tkay.expressad.foundation.d.c r3 = r0.C
            r1.setCampaign(r3)
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            com.tkay.expressad.videocommon.b.a r3 = r0.D
            java.lang.String r3 = r3.r()
            r1.setPlayURL(r3)
            com.tkay.expressad.foundation.d.c r1 = r0.C
            r3 = -2
            if (r1 == 0) goto L4f
            int r1 = r1.h()
            if (r1 <= r3) goto L4f
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.h()
            goto L55
        L4f:
            com.tkay.expressad.videocommon.e.d r1 = r0.o
            int r1 = r1.e()
        L55:
            com.tkay.expressad.foundation.d.c r4 = r0.C
            int r4 = r4.k()
            r5 = 5
            r15 = 1
            if (r4 != r5) goto L6c
            int r4 = r0.H
            if (r4 <= r15) goto L6c
            int r1 = r0.a(r1, r4)
            com.tkay.expressad.foundation.d.c r4 = r0.C
            r4.a(r1)
        L6c:
            com.tkay.expressad.video.module.TkayVideoView r4 = r0.f
            r4.setVideoSkipTime(r1)
            com.tkay.expressad.video.module.TkayVideoView r4 = r0.f
            com.tkay.expressad.videocommon.e.d r5 = r0.o
            int r5 = r5.k()
            r4.setCloseAlert(r5)
            com.tkay.expressad.video.module.TkayVideoView r4 = r0.f
            int r5 = u()
            r4.setBufferTimeout(r5)
            com.tkay.expressad.video.module.TkayVideoView r14 = r0.f
            com.tkay.expressad.video.module.a.a.n r13 = new com.tkay.expressad.video.module.a.a.n
            com.tkay.expressad.video.signal.factory.b r5 = r0.J
            com.tkay.expressad.foundation.d.c r6 = r0.C
            com.tkay.expressad.videocommon.c.c r7 = r0.q
            com.tkay.expressad.videocommon.b.a r8 = r0.D
            java.lang.String r9 = r20.b()
            java.lang.String r10 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$e r12 = new com.tkay.expressad.video.bt.module.TYTempContainer$e
            r12.<init>(r0, r2)
            com.tkay.expressad.videocommon.e.d r4 = r0.o
            int r16 = r4.M()
            boolean r4 = r0.y
            com.tkay.expressad.videocommon.e.d r15 = r0.o
            int r18 = r15.U()
            r15 = r4
            r4 = r13
            r19 = r12
            r12 = r1
            r2 = r13
            r13 = r19
            r3 = r14
            r14 = r16
            r17 = 1
            r16 = r18
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            r3.setNotifyListener(r2)
            com.tkay.expressad.video.module.TkayVideoView r2 = r0.f
            boolean r3 = r0.ar
            r2.setShowingTransparent(r3)
            boolean r2 = r0.t
            if (r2 == 0) goto Lf7
            int r2 = r0.v
            int r3 = com.tkay.expressad.foundation.g.a.cr
            if (r2 == r3) goto Ld6
            int r2 = r0.v
            int r3 = com.tkay.expressad.foundation.g.a.cs
            if (r2 != r3) goto Lf7
        Ld6:
            com.tkay.expressad.video.module.TkayVideoView r2 = r0.f
            int r3 = r0.v
            int r4 = r0.w
            int r5 = r0.x
            r2.setIVRewardEnable(r3, r4, r5)
            com.tkay.expressad.video.module.TkayVideoView r2 = r0.f
            com.tkay.expressad.video.signal.c r3 = r20.getJSCommon()
            if (r3 == 0) goto Lf2
            com.tkay.expressad.video.signal.c r3 = r20.getJSCommon()
            int r15 = r3.n()
            goto Lf4
        Lf2:
            r15 = r17
        Lf4:
            r2.setDialogRole(r15)
        Lf7:
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            com.tkay.expressad.foundation.d.c r3 = r0.C
            r2.setCampaign(r3)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r0.U
            r2.addOrderViewData(r3)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            java.lang.String r3 = r0.m
            r2.setUnitID(r3)
            com.tkay.expressad.foundation.d.c r2 = r0.C
            int r2 = r2.g()
            r3 = -2
            if (r2 <= r3) goto L11c
            com.tkay.expressad.foundation.d.c r2 = r0.C
            int r2 = r2.g()
            goto L122
        L11c:
            com.tkay.expressad.videocommon.e.d r2 = r0.o
            int r2 = r2.p()
        L122:
            com.tkay.expressad.video.module.TkayContainerView r3 = r0.g
            r3.setCloseDelayTime(r2)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            com.tkay.expressad.videocommon.e.d r3 = r0.o
            int r3 = r3.j()
            r2.setPlayCloseBtnTm(r3)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            com.tkay.expressad.videocommon.e.d r3 = r0.o
            int r3 = r3.h()
            r2.setVideoInteractiveType(r3)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            com.tkay.expressad.videocommon.e.d r3 = r0.o
            int r3 = r3.r()
            r2.setEndscreenType(r3)
            com.tkay.expressad.video.module.TkayContainerView r2 = r0.g
            r2.setVideoSkipTime(r1)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            boolean r2 = r0.ar
            r1.setShowingTransparent(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.signal.factory.b r2 = r0.J
            r1.setJSFactory(r2)
            com.tkay.expressad.foundation.d.c r1 = r0.C
            int r1 = r1.J()
            r2 = 2
            if (r1 != r2) goto L196
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.module.a.a.h r11 = new com.tkay.expressad.video.module.a.a.h
            com.tkay.expressad.foundation.d.c r3 = r0.C
            com.tkay.expressad.videocommon.b.a r4 = r0.D
            com.tkay.expressad.videocommon.c.c r5 = r0.q
            java.lang.String r6 = r20.b()
            java.lang.String r7 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$c r8 = new com.tkay.expressad.video.bt.module.TYTempContainer$c
            r2 = 0
            r8.<init>(r0, r2)
            com.tkay.expressad.videocommon.e.d r2 = r0.o
            int r9 = r2.M()
            boolean r10 = r0.y
            r2 = r11
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            r1.setNotifyListener(r11)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.signal.factory.b r2 = r0.J
            r1.preLoadData(r2)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            r1.showPlayableView()
            goto L1ce
        L196:
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.module.a.a.c r12 = new com.tkay.expressad.video.module.a.a.c
            com.tkay.expressad.video.signal.factory.b r3 = r0.J
            com.tkay.expressad.foundation.d.c r4 = r0.C
            com.tkay.expressad.videocommon.c.c r5 = r0.q
            com.tkay.expressad.videocommon.b.a r6 = r0.D
            java.lang.String r7 = r20.b()
            java.lang.String r8 = r0.m
            com.tkay.expressad.video.bt.module.TYTempContainer$b r9 = new com.tkay.expressad.video.bt.module.TYTempContainer$b
            android.app.Activity r2 = r0.l
            com.tkay.expressad.foundation.d.c r10 = r0.C
            r9.<init>(r0, r2, r10)
            com.tkay.expressad.videocommon.e.d r2 = r0.o
            int r10 = r2.M()
            boolean r11 = r0.y
            r2 = r12
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r1.setNotifyListener(r12)
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            com.tkay.expressad.video.signal.factory.b r2 = r0.J
            r1.preLoadData(r2)
            com.tkay.expressad.video.module.TkayVideoView r1 = r0.f
            com.tkay.expressad.video.signal.factory.b r2 = r0.J
            r1.preLoadData(r2)
        L1ce:
            boolean r1 = r0.ar
            if (r1 == 0) goto L1d7
            com.tkay.expressad.video.module.TkayContainerView r1 = r0.g
            r1.setTkayClickMiniCardViewTransparent()
        L1d7:
            return
    }

    public void notifyEvent(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.e
            if (r0 == 0) goto L15
            java.lang.String r1 = r3.I
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            byte[] r1 = r1.getBytes()
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r4, r1)
        L15:
            return
    }

    public void onBackPressed() {
            r1 = this;
            boolean r0 = r1.ar
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayVideoView r0 = r1.f
            if (r0 == 0) goto Lc
            r0.notifyVideoClose()
            return
        Lc:
            boolean r0 = r1.at
            if (r0 == 0) goto L28
            com.tkay.expressad.video.module.TkayVideoView r0 = r1.f
            if (r0 == 0) goto L28
            boolean r0 = r0.isMiniCardShowing()
            if (r0 == 0) goto L22
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.g
            if (r0 == 0) goto L21
            r0.onMiniEndcardBackPress()
        L21:
            return
        L22:
            com.tkay.expressad.video.module.TkayVideoView r0 = r1.f
            r0.onBackPress()
            return
        L28:
            boolean r0 = r1.av
            if (r0 == 0) goto L34
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.g
            if (r0 == 0) goto L34
            r0.onPlayableBackPress()
            return
        L34:
            boolean r0 = r1.au
            if (r0 == 0) goto L3f
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.g
            if (r0 == 0) goto L3f
            r0.onEndcardBackPress()
        L3f:
            com.tkay.expressad.video.signal.c r0 = r1.getJSCommon()
            boolean r0 = r0.g()
            if (r0 == 0) goto L61
            com.tkay.expressad.video.signal.e r0 = r1.getJSContainerModule()
            if (r0 == 0) goto L59
            com.tkay.expressad.video.signal.e r0 = r1.getJSContainerModule()
            boolean r0 = r0.miniCardShowing()
            if (r0 != 0) goto L7b
        L59:
            com.tkay.expressad.video.signal.a r0 = r1.getActivityProxy()
            r0.g()
            return
        L61:
            boolean r0 = r1.canBackPress()
            if (r0 == 0) goto L7b
            android.app.Activity r0 = r1.l
            if (r0 == 0) goto L7b
            boolean r0 = r1.y
            if (r0 != 0) goto L7b
            boolean r0 = r1.aw
            if (r0 != 0) goto L7b
            r0 = 1
            r1.aw = r0
            android.app.Activity r0 = r1.l
            r0.onBackPressed()
        L7b:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    public void onCreate() {
            r14 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "tkay_video_templete_webview_parent"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "onCreate isBigOffer: "
            r2.<init>(r3)
            boolean r3 = r14.y
            r2.append(r3)
            com.tkay.expressad.videocommon.e.d r2 = r14.o
            if (r2 != 0) goto L2a
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.e()
            java.lang.String r4 = r14.m
            boolean r5 = r14.t
            com.tkay.expressad.videocommon.e.d r2 = r2.a(r3, r4, r5)
            r14.o = r2
        L2a:
            r2 = 0
            r14.aw = r2
            boolean r3 = r14.y     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L64
            com.tkay.expressad.foundation.d.c r3 = r14.C     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L58
            com.tkay.expressad.foundation.d.c r3 = r14.C     // Catch: java.lang.Throwable -> L282
            boolean r3 = r3.j()     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L58
            com.tkay.expressad.video.bt.module.b.e r3 = new com.tkay.expressad.video.bt.module.b.e     // Catch: java.lang.Throwable -> L282
            android.content.Context r5 = r14.getContext()     // Catch: java.lang.Throwable -> L282
            boolean r6 = r14.t     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.videocommon.e.d r7 = r14.o     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r8 = r14.C     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.b.h r9 = r14.E     // Catch: java.lang.Throwable -> L282
            java.lang.String r10 = r14.b()     // Catch: java.lang.Throwable -> L282
            java.lang.String r11 = r14.m     // Catch: java.lang.Throwable -> L282
            r4 = r3
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L282
            r14.E = r3     // Catch: java.lang.Throwable -> L282
            goto L7e
        L58:
            com.tkay.expressad.video.bt.module.b.d r3 = new com.tkay.expressad.video.bt.module.b.d     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.a.b r4 = r14.F     // Catch: java.lang.Throwable -> L282
            java.lang.String r5 = r14.I     // Catch: java.lang.Throwable -> L282
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L282
            r14.E = r3     // Catch: java.lang.Throwable -> L282
            goto L7e
        L64:
            com.tkay.expressad.video.bt.module.b.e r11 = new com.tkay.expressad.video.bt.module.b.e     // Catch: java.lang.Throwable -> L282
            android.content.Context r4 = r14.getContext()     // Catch: java.lang.Throwable -> L282
            boolean r5 = r14.t     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.videocommon.e.d r6 = r14.o     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r7 = r14.C     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.b.h r8 = r14.E     // Catch: java.lang.Throwable -> L282
            java.lang.String r9 = r14.b()     // Catch: java.lang.Throwable -> L282
            java.lang.String r10 = r14.m     // Catch: java.lang.Throwable -> L282
            r3 = r11
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L282
            r14.E = r11     // Catch: java.lang.Throwable -> L282
        L7e:
            com.tkay.expressad.video.bt.module.b.f r3 = new com.tkay.expressad.video.bt.module.b.f     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.b.h r4 = r14.E     // Catch: java.lang.Throwable -> L282
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L282
            r14.registerErrorListener(r3)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.videocommon.e.d r3 = r14.o     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r4 = r14.C     // Catch: java.lang.Throwable -> L282
            r14.a(r3, r4)     // Catch: java.lang.Throwable -> L282
            r14.setShowingTransparent()     // Catch: java.lang.Throwable -> L282
            int r3 = r14.getLayoutID()     // Catch: java.lang.Throwable -> L282
            if (r3 > 0) goto L9e
            java.lang.String r0 = "layoutID not found"
            r14.a(r0)     // Catch: java.lang.Throwable -> L282
            return
        L9e:
            android.view.LayoutInflater r4 = r14.W     // Catch: java.lang.Throwable -> L282
            r5 = 0
            android.view.View r3 = r4.inflate(r3, r5)     // Catch: java.lang.Throwable -> L282
            r14.B = r3     // Catch: java.lang.Throwable -> L282
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L282
            r5 = -1
            r4.<init>(r5, r5)     // Catch: java.lang.Throwable -> L282
            r14.addView(r3, r4)     // Catch: java.lang.Throwable -> L282
            boolean r3 = r14.a     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto Lb7
            r14.setMatchParent()     // Catch: java.lang.Throwable -> L282
        Lb7:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r14.findWindVaneWebView()     // Catch: java.lang.Throwable -> L282
            r14.e = r3     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.findTkayVideoView()     // Catch: java.lang.Throwable -> L282
            r14.f = r3     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r4 = r14.C     // Catch: java.lang.Throwable -> L282
            r3.setVideoLayout(r4)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.f     // Catch: java.lang.Throwable -> L282
            boolean r4 = r14.t     // Catch: java.lang.Throwable -> L282
            r3.setIsIV(r4)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.f     // Catch: java.lang.Throwable -> L282
            java.lang.String r4 = r14.m     // Catch: java.lang.Throwable -> L282
            r3.setUnitId(r4)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.f     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.dynview.f.a r4 = r14.G     // Catch: java.lang.Throwable -> L282
            java.util.List<com.tkay.expressad.foundation.d.c> r6 = r14.U     // Catch: java.lang.Throwable -> L282
            int r7 = r14.H     // Catch: java.lang.Throwable -> L282
            int r8 = r14.V     // Catch: java.lang.Throwable -> L282
            r3.setCamPlayOrderCallback(r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L282
            boolean r3 = r14.y     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto Lf4
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.f     // Catch: java.lang.Throwable -> L282
            int r4 = r14.O     // Catch: java.lang.Throwable -> L282
            int r6 = r14.P     // Catch: java.lang.Throwable -> L282
            int r7 = r14.Q     // Catch: java.lang.Throwable -> L282
            int r8 = r14.R     // Catch: java.lang.Throwable -> L282
            r3.setNotchPadding(r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L282
        Lf4:
            com.tkay.expressad.video.module.TkayContainerView r3 = r14.findTkayContainerView()     // Catch: java.lang.Throwable -> L282
            r14.g = r3     // Catch: java.lang.Throwable -> L282
            boolean r3 = r14.y     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L10d
            com.tkay.expressad.video.module.TkayContainerView r6 = r14.g     // Catch: java.lang.Throwable -> L282
            int r7 = r14.N     // Catch: java.lang.Throwable -> L282
            int r8 = r14.O     // Catch: java.lang.Throwable -> L282
            int r9 = r14.P     // Catch: java.lang.Throwable -> L282
            int r10 = r14.Q     // Catch: java.lang.Throwable -> L282
            int r11 = r14.R     // Catch: java.lang.Throwable -> L282
            r6.setNotchPadding(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L282
        L10d:
            com.tkay.expressad.video.module.TkayVideoView r3 = r14.f     // Catch: java.lang.Throwable -> L282
            r4 = 1
            if (r3 == 0) goto L11e
            com.tkay.expressad.video.module.TkayContainerView r3 = r14.g     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L11e
            boolean r3 = r14.initViews()     // Catch: java.lang.Throwable -> L282
            if (r3 == 0) goto L11e
            r3 = r4
            goto L11f
        L11e:
            r3 = r2
        L11f:
            if (r3 != 0) goto L132
            com.tkay.expressad.video.bt.module.TYTempContainer$a r0 = r14.d     // Catch: java.lang.Throwable -> L282
            java.lang.String r1 = "not found View IDS"
            r0.a(r1)     // Catch: java.lang.Throwable -> L282
            android.app.Activity r0 = r14.l     // Catch: java.lang.Throwable -> L282
            if (r0 == 0) goto L281
            android.app.Activity r0 = r14.l     // Catch: java.lang.Throwable -> L282
            r0.finish()     // Catch: java.lang.Throwable -> L282
            return
        L132:
            r14.c = r4     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r14.e     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.factory.b r13 = new com.tkay.expressad.video.signal.factory.b     // Catch: java.lang.Throwable -> L282
            android.app.Activity r7 = r14.l     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayVideoView r9 = r14.f     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.module.TkayContainerView r10 = r14.g     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r11 = r14.C     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.TYTempContainer$d r12 = new com.tkay.expressad.video.bt.module.TYTempContainer$d     // Catch: java.lang.Throwable -> L282
            r12.<init>(r14, r2)     // Catch: java.lang.Throwable -> L282
            r6 = r13
            r8 = r3
            r6.<init>(r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L282
            r14.J = r13     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r6 = r14.C     // Catch: java.lang.Throwable -> L282
            if (r6 == 0) goto L164
            com.tkay.expressad.foundation.d.c r6 = r14.C     // Catch: java.lang.Throwable -> L282
            int r6 = r6.k()     // Catch: java.lang.Throwable -> L282
            r7 = 5
            if (r6 != r7) goto L164
            java.util.List<com.tkay.expressad.foundation.d.c> r6 = r14.U     // Catch: java.lang.Throwable -> L282
            if (r6 == 0) goto L164
            com.tkay.expressad.video.signal.factory.b r6 = r14.J     // Catch: java.lang.Throwable -> L282
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r14.U     // Catch: java.lang.Throwable -> L282
            r6.a(r7)     // Catch: java.lang.Throwable -> L282
        L164:
            com.tkay.expressad.video.signal.factory.b r6 = r14.J     // Catch: java.lang.Throwable -> L282
            r14.registerJsFactory(r6)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.f.b r6 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Throwable -> L282
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L282
            r7.<init>()     // Catch: java.lang.Throwable -> L282
            java.lang.String r8 = r14.m     // Catch: java.lang.Throwable -> L282
            r7.append(r8)     // Catch: java.lang.Throwable -> L282
            java.lang.String r8 = "_1"
            r7.append(r8)     // Catch: java.lang.Throwable -> L282
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.TYTempContainer$5 r8 = new com.tkay.expressad.video.bt.module.TYTempContainer$5     // Catch: java.lang.Throwable -> L282
            r8.<init>(r14)     // Catch: java.lang.Throwable -> L282
            r6.a(r7, r8)     // Catch: java.lang.Throwable -> L282
            java.lang.String r6 = "preload template webview is null or load error"
            if (r3 == 0) goto L27e
            android.view.View r7 = r14.B     // Catch: java.lang.Throwable -> L282
            android.content.Context r8 = r14.getContext()     // Catch: java.lang.Throwable -> L282
            int r8 = com.tkay.expressad.foundation.h.i.a(r8, r1, r0)     // Catch: java.lang.Throwable -> L282
            android.view.View r7 = r7.findViewById(r8)     // Catch: java.lang.Throwable -> L282
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.factory.b r8 = r14.J     // Catch: java.lang.Throwable -> L282
            r3.setApiManagerJSFactory(r8)     // Catch: java.lang.Throwable -> L282
            android.view.ViewParent r8 = r3.getParent()     // Catch: java.lang.Throwable -> L282
            if (r8 == 0) goto L1ab
            r14.defaultLoad(r2, r6)     // Catch: java.lang.Throwable -> L282
            return
        L1ab:
            java.lang.Object r6 = r3.getObject()     // Catch: java.lang.Throwable -> L282
            boolean r6 = r6 instanceof com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Throwable -> L282
            if (r6 == 0) goto L24b
            com.tkay.expressad.video.signal.factory.b r6 = r14.J     // Catch: java.lang.Throwable -> L282
            java.lang.Object r8 = r3.getObject()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.a.j r8 = (com.tkay.expressad.video.signal.a.j) r8     // Catch: java.lang.Throwable -> L282
            r6.a(r8)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c r6 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            int r8 = r14.s     // Catch: java.lang.Throwable -> L282
            r6.a(r8)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c r6 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            java.lang.String r8 = r14.m     // Catch: java.lang.Throwable -> L282
            r6.a(r8)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c r6 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.videocommon.e.d r8 = r14.o     // Catch: java.lang.Throwable -> L282
            r6.a(r8)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c r6 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.TYTempContainer$d r8 = new com.tkay.expressad.video.bt.module.TYTempContainer$d     // Catch: java.lang.Throwable -> L282
            r8.<init>(r14, r2)     // Catch: java.lang.Throwable -> L282
            r6.a(r8)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.foundation.d.c r2 = r14.C     // Catch: java.lang.Throwable -> L282
            if (r2 == 0) goto L216
            com.tkay.expressad.foundation.d.c r2 = r14.C     // Catch: java.lang.Throwable -> L282
            boolean r2 = r2.H()     // Catch: java.lang.Throwable -> L282
            if (r2 != 0) goto L1f9
            com.tkay.expressad.foundation.d.c r2 = r14.C     // Catch: java.lang.Throwable -> L282
            boolean r2 = r2.ay()     // Catch: java.lang.Throwable -> L282
            if (r2 == 0) goto L216
        L1f9:
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r2 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver     // Catch: java.lang.Throwable -> L282
            android.content.Context r6 = r14.getContext()     // Catch: java.lang.Throwable -> L282
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L282
            r14.ax = r2     // Catch: java.lang.Throwable -> L282
            r2.registerReceiver()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r2 = r14.ax     // Catch: java.lang.Throwable -> L282
            r2.getCurrentVolume()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r2 = r14.ax     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.bt.module.TYTempContainer$6 r6 = new com.tkay.expressad.video.bt.module.TYTempContainer$6     // Catch: java.lang.Throwable -> L282
            r6.<init>(r14)     // Catch: java.lang.Throwable -> L282
            r2.setVolumeChangeListener(r6)     // Catch: java.lang.Throwable -> L282
        L216:
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.a.j r2 = (com.tkay.expressad.video.signal.a.j) r2     // Catch: java.lang.Throwable -> L282
            int r2 = r2.r()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.e r6 = r14.getJSContainerModule()     // Catch: java.lang.Throwable -> L282
            r6.readyStatus(r2)     // Catch: java.lang.Throwable -> L282
            r14.j()     // Catch: java.lang.Throwable -> L282
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.a.j r2 = (com.tkay.expressad.video.signal.a.j) r2     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c$a r2 = r2.r     // Catch: java.lang.Throwable -> L282
            r2.c()     // Catch: java.lang.Throwable -> L282
            boolean r2 = r14.y     // Catch: java.lang.Throwable -> L282
            if (r2 == 0) goto L24b
            com.tkay.expressad.video.signal.c r2 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            int r6 = r14.aj     // Catch: java.lang.Throwable -> L282
            r2.f(r6)     // Catch: java.lang.Throwable -> L282
            com.tkay.expressad.video.signal.c r2 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            int r6 = r14.ak     // Catch: java.lang.Throwable -> L282
            r2.e(r6)     // Catch: java.lang.Throwable -> L282
        L24b:
            com.tkay.expressad.video.signal.c r2 = r14.getJSCommon()     // Catch: java.lang.Throwable -> L282
            int r2 = r2.f()     // Catch: java.lang.Throwable -> L282
            if (r2 != r4) goto L275
            android.view.View r2 = r14.B     // Catch: java.lang.Throwable -> L282
            android.content.Context r6 = r14.getContext()     // Catch: java.lang.Throwable -> L282
            int r0 = com.tkay.expressad.foundation.h.i.a(r6, r1, r0)     // Catch: java.lang.Throwable -> L282
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L282
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L282
            if (r0 == 0) goto L275
            android.view.View r1 = r14.B     // Catch: java.lang.Throwable -> L282
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L282
            r1.removeView(r0)     // Catch: java.lang.Throwable -> L282
            android.view.View r1 = r14.B     // Catch: java.lang.Throwable -> L282
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L282
            r1.addView(r0, r4)     // Catch: java.lang.Throwable -> L282
        L275:
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L282
            r0.<init>(r5, r5)     // Catch: java.lang.Throwable -> L282
            r7.addView(r3, r0)     // Catch: java.lang.Throwable -> L282
            return
        L27e:
            r14.defaultLoad(r2, r6)     // Catch: java.lang.Throwable -> L282
        L281:
            return
        L282:
            r0 = move-exception
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "onCreate error"
            java.lang.String r0 = r1.concat(r0)
            r14.a(r0)
            return
    }

    @Override
    public void onDestroy() {
            r5 = this;
            boolean r0 = r5.M
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.M = r0
            super.onDestroy()
            com.tkay.expressad.video.module.TkayVideoView r1 = r5.f     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto L14
            com.tkay.expressad.video.module.TkayVideoView r1 = r5.f     // Catch: java.lang.Throwable -> L123
            r1.releasePlayer()     // Catch: java.lang.Throwable -> L123
        L14:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r5.e     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto L2f
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r5.e     // Catch: java.lang.Throwable -> L123
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Throwable -> L123
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto L25
            r1.removeAllViews()     // Catch: java.lang.Throwable -> L123
        L25:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r5.e     // Catch: java.lang.Throwable -> L123
            r1.clearWebView()     // Catch: java.lang.Throwable -> L123
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r5.e     // Catch: java.lang.Throwable -> L123
            r1.release()     // Catch: java.lang.Throwable -> L123
        L2f:
            com.tkay.expressad.video.bt.module.a.b r1 = r5.F     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto L36
            r1 = 0
            r5.F = r1     // Catch: java.lang.Throwable -> L123
        L36:
            android.os.Handler r1 = r5.h     // Catch: java.lang.Throwable -> L123
            java.lang.Runnable r2 = r5.i     // Catch: java.lang.Throwable -> L123
            r1.removeCallbacks(r2)     // Catch: java.lang.Throwable -> L123
            android.os.Handler r1 = r5.h     // Catch: java.lang.Throwable -> L123
            java.lang.Runnable r2 = r5.j     // Catch: java.lang.Throwable -> L123
            r1.removeCallbacks(r2)     // Catch: java.lang.Throwable -> L123
            com.tkay.expressad.video.signal.c r1 = r5.getJSCommon()     // Catch: java.lang.Throwable -> L123
            r1.k()     // Catch: java.lang.Throwable -> L123
            boolean r1 = r5.t     // Catch: java.lang.Throwable -> L123
            if (r1 == 0) goto L57
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L123
            java.lang.String r1 = r5.m     // Catch: java.lang.Throwable -> L123
            com.tkay.expressad.d.b.c(r1)     // Catch: java.lang.Throwable -> L123
        L57:
            boolean r1 = r5.an     // Catch: java.lang.Throwable -> L123
            if (r1 != 0) goto Lf1
            r5.an = r0     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> Led
            if (r1 == 0) goto L6c
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> Led
            int r1 = r1.J()     // Catch: java.lang.Throwable -> Led
            r2 = 2
            if (r1 != r2) goto L6c
            r5.ao = r0     // Catch: java.lang.Throwable -> Led
        L6c:
            com.tkay.expressad.video.bt.module.b.h r1 = r5.E     // Catch: java.lang.Throwable -> Led
            if (r1 == 0) goto La0
            boolean r1 = r5.t     // Catch: java.lang.Throwable -> Led
            r2 = 0
            if (r1 == 0) goto L8e
            int r1 = r5.v     // Catch: java.lang.Throwable -> Led
            int r3 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Throwable -> Led
            if (r1 == r3) goto L81
            int r1 = r5.v     // Catch: java.lang.Throwable -> Led
            int r3 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Throwable -> Led
            if (r1 != r3) goto L8e
        L81:
            com.tkay.expressad.video.bt.module.b.h r1 = r5.E     // Catch: java.lang.Throwable -> Led
            int r3 = r5.L     // Catch: java.lang.Throwable -> Led
            if (r3 != r0) goto L88
            goto L89
        L88:
            r0 = r2
        L89:
            int r3 = r5.K     // Catch: java.lang.Throwable -> Led
            r1.a(r0, r3)     // Catch: java.lang.Throwable -> Led
        L8e:
            boolean r0 = r5.ao     // Catch: java.lang.Throwable -> Led
            if (r0 != 0) goto L97
            com.tkay.expressad.videocommon.c.c r0 = r5.q     // Catch: java.lang.Throwable -> Led
            r0.a(r2)     // Catch: java.lang.Throwable -> Led
        L97:
            com.tkay.expressad.video.bt.module.b.h r0 = r5.E     // Catch: java.lang.Throwable -> Led
            boolean r1 = r5.ao     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.videocommon.c.c r2 = r5.q     // Catch: java.lang.Throwable -> Led
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> Led
        La0:
            android.os.Handler r0 = r5.h     // Catch: java.lang.Throwable -> Led
            java.lang.Runnable r1 = r5.ay     // Catch: java.lang.Throwable -> Led
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> Led
            boolean r0 = r5.t     // Catch: java.lang.Throwable -> Led
            if (r0 != 0) goto Laf
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Lbb
        Laf:
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Lcc
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> Led
            boolean r0 = r0.j()     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Lcc
        Lbb:
            boolean r0 = r5.ao     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Lcc
            com.tkay.expressad.foundation.d.c r0 = r5.C     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.videocommon.c.c r1 = r5.q     // Catch: java.lang.Throwable -> Led
            java.lang.String r2 = r5.m     // Catch: java.lang.Throwable -> Led
            java.lang.String r3 = r5.p     // Catch: java.lang.Throwable -> Led
            java.lang.String r4 = r5.T     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.video.module.b.a.a(r0, r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Led
        Lcc:
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> Led
            if (r0 != 0) goto Le3
            boolean r0 = r5.t     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Ldc
            r0 = 287(0x11f, float:4.02E-43)
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> Led
            goto Le3
        Ldc:
            r0 = 94
            com.tkay.expressad.foundation.d.c r1 = r5.C     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> Led
        Le3:
            com.tkay.expressad.video.module.TkayContainerView r0 = r5.g     // Catch: java.lang.Throwable -> Led
            if (r0 == 0) goto Lf1
            com.tkay.expressad.video.module.TkayContainerView r0 = r5.g     // Catch: java.lang.Throwable -> Led
            r0.release()     // Catch: java.lang.Throwable -> Led
            goto Lf1
        Led:
            r0 = move-exception
            r0.getMessage()     // Catch: java.lang.Throwable -> L123
        Lf1:
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r5.ax     // Catch: java.lang.Throwable -> L123
            if (r0 == 0) goto Lfa
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r5.ax     // Catch: java.lang.Throwable -> L123
            r0.unregisterReceiver()     // Catch: java.lang.Throwable -> L123
        Lfa:
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> L123
            if (r0 != 0) goto L11a
            boolean r0 = r5.isLoadSuccess()     // Catch: java.lang.Throwable -> L123
            if (r0 == 0) goto L111
            android.os.Handler r0 = r5.h     // Catch: java.lang.Throwable -> L123
            com.tkay.expressad.video.bt.module.TYTempContainer$4 r1 = new com.tkay.expressad.video.bt.module.TYTempContainer$4     // Catch: java.lang.Throwable -> L123
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L123
            r2 = 100
            r0.postDelayed(r1, r2)     // Catch: java.lang.Throwable -> L123
            goto L11a
        L111:
            android.app.Activity r0 = r5.l     // Catch: java.lang.Throwable -> L123
            if (r0 == 0) goto L11a
            android.app.Activity r0 = r5.l     // Catch: java.lang.Throwable -> L123
            r0.finish()     // Catch: java.lang.Throwable -> L123
        L11a:
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L123
            java.lang.String r0 = r5.I     // Catch: java.lang.Throwable -> L123
            com.tkay.expressad.video.bt.a.c.f(r0)     // Catch: java.lang.Throwable -> L123
            return
        L123:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void onPause() {
            r2 = this;
            super.onPause()
            r0 = 1
            r2.ap = r0
            com.tkay.expressad.video.signal.j r0 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L18
            r1 = 2
            r0.videoOperate(r1)     // Catch: java.lang.Throwable -> L18
            com.tkay.expressad.video.module.TkayContainerView r0 = r2.g     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L17
            com.tkay.expressad.video.module.TkayContainerView r0 = r2.g     // Catch: java.lang.Throwable -> L18
            r0.setOnPause()     // Catch: java.lang.Throwable -> L18
        L17:
            return
        L18:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void onResume() {
            r2 = this;
            super.onResume()
            int r0 = r2.ai
            r1 = -3
            if (r0 != r1) goto Lb
            java.lang.Runnable r0 = r2.i
            goto L12
        Lb:
            r1 = -4
            if (r0 != r1) goto L11
            java.lang.Runnable r0 = r2.j
            goto L12
        L11:
            r0 = 0
        L12:
            r1 = 0
            if (r0 == 0) goto L1a
            r0.run()
            r2.ai = r1
        L1a:
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L35
            boolean r0 = r2.i()     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L35
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f     // Catch: java.lang.Throwable -> L77
            boolean r0 = r0.isMiniCardShowing()     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L35
            boolean r0 = com.tkay.expressad.foundation.f.b.c     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L35
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f     // Catch: java.lang.Throwable -> L77
            r0.setCover(r1)     // Catch: java.lang.Throwable -> L77
        L35:
            com.tkay.expressad.video.module.TkayContainerView r0 = r2.g     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L3e
            com.tkay.expressad.video.module.TkayContainerView r0 = r2.g     // Catch: java.lang.Throwable -> L77
            r0.setOnResume()     // Catch: java.lang.Throwable -> L77
        L3e:
            boolean r0 = r2.ap     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L54
            boolean r0 = r2.i()     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L54
            boolean r0 = com.tkay.expressad.foundation.f.b.c     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L54
            com.tkay.expressad.video.signal.j r0 = r2.getJSVideoModule()     // Catch: java.lang.Throwable -> L77
            r1 = 1
            r0.videoOperate(r1)     // Catch: java.lang.Throwable -> L77
        L54:
            android.app.Activity r0 = r2.l     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L65
            android.app.Activity r0 = r2.l     // Catch: java.lang.Throwable -> L77
            android.view.Window r0 = r0.getWindow()     // Catch: java.lang.Throwable -> L77
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L77
            com.tkay.expressad.foundation.h.t.a(r0)     // Catch: java.lang.Throwable -> L77
        L65:
            boolean r0 = r2.ar     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L76
            boolean r0 = r2.as     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L76
            android.app.Activity r0 = r2.l     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L76
            android.app.Activity r0 = r2.l     // Catch: java.lang.Throwable -> L77
            r0.finish()     // Catch: java.lang.Throwable -> L77
        L76:
            return
        L77:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void onStop() {
            r2 = this;
            super.onStop()
            com.tkay.expressad.video.module.TkayVideoView r0 = r2.f
            if (r0 == 0) goto Lb
            r1 = 1
            r0.setCover(r1)
        Lb:
            return
    }

    public void preload() {
            r0 = this;
            return
    }

    public void receiveSuccess() {
            r4 = this;
            android.os.Handler r0 = r4.h
            java.lang.Runnable r1 = r4.j
            r0.removeCallbacks(r1)
            android.os.Handler r0 = r4.h
            java.lang.Runnable r1 = r4.ay
            r2 = 250(0xfa, double:1.235E-321)
            r0.postDelayed(r1, r2)
            return
    }

    public void registerErrorListener(com.tkay.expressad.video.bt.module.TYTempContainer.a r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setCamPlayOrderCallback(com.tkay.expressad.video.dynview.f.a r1, int r2) {
            r0 = this;
            r0.G = r1
            r0.H = r2
            return
    }

    public void setCampOrderViewData(java.util.List<com.tkay.expressad.foundation.d.c> r1, int r2) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.U = r1
        L4:
            r0.V = r2
            return
    }

    public void setCampaign(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            r3.C = r4
            if (r4 == 0) goto L37
            java.lang.String r0 = r4.K()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = r3.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r3.m
            r4.l(r0)
        L1b:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.K()
            r1.append(r2)
            java.lang.String r2 = "_1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1, r4)
        L37:
            return
    }

    public void setCampaignDownLoadTask(com.tkay.expressad.videocommon.b.a r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setCampaignExpired(boolean r3) {
            r2 = this;
            com.tkay.expressad.foundation.d.c r0 = r2.C     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L51
            r0 = 0
            if (r3 == 0) goto L2f
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r1 = 1
            r3.e(r1)     // Catch: java.lang.Exception -> L52
            boolean r3 = r2.u     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L17
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r3.m(r0)     // Catch: java.lang.Exception -> L52
            return
        L17:
            com.tkay.expressad.videocommon.e.d r3 = r2.o     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L51
            com.tkay.expressad.videocommon.e.d r3 = r2.o     // Catch: java.lang.Exception -> L52
            int r3 = r3.M()     // Catch: java.lang.Exception -> L52
            if (r3 != r1) goto L29
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r3.m(r1)     // Catch: java.lang.Exception -> L52
            return
        L29:
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r3.m(r0)     // Catch: java.lang.Exception -> L52
            return
        L2f:
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r3.e(r0)     // Catch: java.lang.Exception -> L52
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            boolean r3 = r3.A()     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L42
            com.tkay.expressad.foundation.d.c r3 = r2.C     // Catch: java.lang.Exception -> L52
            r3.m(r0)     // Catch: java.lang.Exception -> L52
            return
        L42:
            com.tkay.expressad.videocommon.e.d r3 = r2.o     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L51
            com.tkay.expressad.videocommon.e.d r3 = r2.o     // Catch: java.lang.Exception -> L52
            int r3 = r3.a()     // Catch: java.lang.Exception -> L52
            com.tkay.expressad.foundation.d.c r0 = r2.C     // Catch: java.lang.Exception -> L52
            r0.m(r3)     // Catch: java.lang.Exception -> L52
        L51:
            return
        L52:
            r3 = move-exception
            r3.getMessage()
            return
    }

    public void setDeveloperExtraData(java.lang.String r1) {
            r0 = this;
            r0.T = r1
            return
    }

    public void setH5Cbp(int r1) {
            r0 = this;
            r0.ak = r1
            return
    }

    public void setInstanceId(java.lang.String r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public void setJSFactory(com.tkay.expressad.video.signal.factory.b r1) {
            r0 = this;
            r0.J = r1
            return
    }

    public void setMatchParent() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            r1 = -1
            if (r0 != 0) goto L10
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r1)
            r2.setLayoutParams(r0)
            return
        L10:
            r0.height = r1
            r0.width = r1
            return
    }

    public void setMediaPlayerUrl(java.lang.String r1) {
            r0 = this;
            return
    }

    public void setNotchPadding(int r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r7.N = r8
            r7.O = r9
            r7.P = r10
            r7.Q = r11
            r7.R = r12
            java.lang.String r0 = com.tkay.expressad.foundation.h.h.a(r8, r9, r10, r11, r12)
            r7.S = r0
            com.tkay.expressad.video.signal.c r0 = r7.getJSCommon()
            if (r0 == 0) goto L48
            java.lang.String r0 = r7.S
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L48
            com.tkay.expressad.video.signal.c r0 = r7.getJSCommon()
            java.lang.String r1 = r7.S
            r0.b(r1)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.e
            if (r0 == 0) goto L48
            java.lang.String r0 = r7.S
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L48
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.e
            java.lang.String r1 = r7.S
            byte[] r1 = r1.getBytes()
            r2 = 0
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)
            java.lang.String r2 = "oncutoutfetched"
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r1)
        L48:
            com.tkay.expressad.video.module.TkayVideoView r0 = r7.f
            if (r0 == 0) goto L4f
            r0.setNotchPadding(r9, r10, r11, r12)
        L4f:
            com.tkay.expressad.video.module.TkayContainerView r1 = r7.g
            if (r1 == 0) goto L5b
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.setNotchPadding(r2, r3, r4, r5, r6)
        L5b:
            return
    }

    public void setShowRewardListener(com.tkay.expressad.video.bt.module.b.h r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public void setShowingTransparent() {
            r3 = this;
            boolean r0 = r3.h()
            r3.ar = r0
            if (r0 != 0) goto L20
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "tkay_reward_theme"
            java.lang.String r2 = "style"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            r1 = 1
            if (r0 <= r1) goto L20
            android.app.Activity r1 = r3.l
            if (r1 == 0) goto L20
            android.app.Activity r1 = r3.l
            r1.setTheme(r0)
        L20:
            return
    }

    public void setTkayTempCallback(com.tkay.expressad.video.bt.module.a.b r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public void setWebViewFront(int r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    public void superDefaultLoad(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "receiveError:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",descroption:"
            r0.append(r3)
            r0.append(r4)
            android.os.Handler r3 = r2.h
            java.lang.Runnable r4 = r2.i
            r3.removeCallbacks(r4)
            android.os.Handler r3 = r2.h
            java.lang.Runnable r4 = r2.j
            r3.removeCallbacks(r4)
            com.tkay.expressad.video.bt.module.TYTempContainer$a r3 = r2.d
            r3.b()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r2.e
            if (r3 == 0) goto L2e
            r4 = 8
            r3.setVisibility(r4)
        L2e:
            return
    }
}
