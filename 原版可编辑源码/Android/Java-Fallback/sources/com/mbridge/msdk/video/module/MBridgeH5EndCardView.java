package com.mbridge.msdk.video.module;

public class MBridgeH5EndCardView extends com.mbridge.msdk.video.module.MBridgeBaseView implements com.mbridge.msdk.click.h, com.mbridge.msdk.mbjscommon.mraid.b, com.mbridge.msdk.video.js.g {
    private boolean A;
    private int B;
    private int C;
    private boolean D;
    private boolean E;
    private int F;
    private long G;
    private boolean H;
    private boolean I;
    private boolean J;
    private boolean K;
    private boolean L;
    private boolean M;
    private boolean N;
    private boolean O;
    private java.lang.String P;
    private com.mbridge.msdk.video.js.factory.b Q;
    private boolean R;
    private boolean S;
    protected android.view.View n;
    protected android.widget.RelativeLayout o;
    protected android.widget.ImageView p;
    protected com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView q;
    protected android.os.Handler r;
    protected java.lang.String s;
    protected boolean t;
    protected boolean u;
    protected java.lang.String v;
    android.os.Handler w;
    boolean x;
    private com.mbridge.msdk.widget.FeedBackButton y;
    private boolean z;








    private class a implements java.lang.Runnable {
        final com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView b;

        public a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
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
                goto L10
            L6:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                java.lang.String r1 = "CloseRunnable"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L10:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                if (r0 == 0) goto L21
                android.os.Handler r0 = r0.w
                if (r0 == 0) goto L21
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                android.os.Handler r0 = r0.w
                r1 = 100
                r0.sendEmptyMessage(r1)
            L21:
                return
        }
    }

    private class b implements java.lang.Runnable {
        final com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView b;

        public b(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.b
                if (r0 == 0) goto L2f
                boolean r0 = com.mbridge.msdk.video.module.MBridgeH5EndCardView.c(r0)
                if (r0 != 0) goto L2f
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.b
                r1 = 1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView.a(r0, r1)
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.b
                r1 = 0
                r0.t = r1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.a
                r1 = 5
                java.lang.String r2 = "timeout"
                r0.reportRenderResult(r2, r1)
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r3.b
                com.mbridge.msdk.video.module.a.a r0 = r0.e
                r1 = 127(0x7f, float:1.78E-43)
                java.lang.String r2 = ""
                r0.a(r1, r2)
                java.lang.String r0 = "MBridgeBaseView"
                java.lang.String r1 = "notify TYPE_NOTIFY_SHOW_NATIVE_ENDCARD"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            L2f:
                return
        }
    }

    private static class c implements java.lang.Runnable {
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private int b;

        public c(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r13 = this;
                java.lang.String r0 = "MBridgeBaseView"
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a
                if (r1 == 0) goto Le5
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.b
                if (r1 == 0) goto Le5
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a     // Catch: java.lang.Throwable -> Ldd
                boolean r1 = com.mbridge.msdk.video.module.MBridgeH5EndCardView.i(r1)     // Catch: java.lang.Throwable -> Ldd
                if (r1 == 0) goto L18
                java.lang.String r1 = "insertEndCardReadyState hasInsertLoadEndCardReport true return"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> Ldd
                return
            L18:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a     // Catch: java.lang.Throwable -> Ldd
                r2 = 1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView.e(r1, r2)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r1 = r1.getendcard_url()     // Catch: java.lang.Throwable -> Ldd
                boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r2 = "1"
                java.lang.String r3 = "2"
                if (r1 == 0) goto L42
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r1 = r1.getendcard_url()     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r4 = ".zip"
                boolean r1 = r1.contains(r4)     // Catch: java.lang.Throwable -> Ldd
                if (r1 == 0) goto L42
                r12 = r2
                goto L43
            L42:
                r12 = r3
            L43:
                r6 = 12
                java.lang.String r11 = "ready timeout"
                com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r5 = "2000043"
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
                r4.<init>()     // Catch: java.lang.Throwable -> Ldd
                int r7 = r13.b     // Catch: java.lang.Throwable -> Ldd
                int r7 = r7 * 1000
                r4.append(r7)     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r7 = ""
                r4.append(r7)     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r8 = r4.getendcard_url()     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r9 = r4.getId()     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r13.a     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r10 = r4.v     // Catch: java.lang.Throwable -> Ldd
                r4 = r1
                r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r13.a     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                int r4 = r4.getAdType()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                r5 = 287(0x11f, float:4.02E-43)
                if (r4 != r5) goto L8a
                java.lang.String r2 = "3"
                r1.h(r2)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                goto Lae
            L8a:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r4 = r13.a     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                int r4 = r4.getAdType()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                r5 = 94
                if (r4 != r5) goto L9a
                r1.h(r2)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                goto Lae
            L9a:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r13.a     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.b     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                int r2 = r2.getAdType()     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                r4 = 42
                if (r2 != r4) goto Lae
                r1.h(r3)     // Catch: java.lang.Exception -> Laa java.lang.Throwable -> Ldd
                goto Lae
            Laa:
                r2 = move-exception
                r2.printStackTrace()     // Catch: java.lang.Throwable -> Ldd
            Lae:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Throwable -> Ldd
                r1.k(r2)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.b     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r2 = r2.getRequestIdNotice()     // Catch: java.lang.Throwable -> Ldd
                r1.l(r2)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r13.a     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.b     // Catch: java.lang.Throwable -> Ldd
                int r2 = r2.getAdSpaceT()     // Catch: java.lang.Throwable -> Ldd
                r1.b(r2)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r2 = r13.a     // Catch: java.lang.Throwable -> Ldd
                java.lang.String r2 = r2.v     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.foundation.same.report.c.a(r1, r2)     // Catch: java.lang.Throwable -> Ldd
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r1 = r13.a     // Catch: java.lang.Throwable -> Ldd
                boolean r0 = r1.isLoadSuccess()     // Catch: java.lang.Throwable -> Ldd
                goto Le5
            Ldd:
                r1 = move-exception
                java.lang.String r2 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
            Le5:
                return
        }
    }

    private class d implements java.lang.Runnable {
        final com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView b;

        public d(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                if (r0 == 0) goto L8
                r1 = 1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView.b(r0, r1)
            L8:
                return
        }
    }

    private class e implements java.lang.Runnable {
        final com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView b;

        public e(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                if (r0 == 0) goto L8
                r1 = 1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView.c(r0, r1)
            L8:
                return
        }
    }

    private class f implements java.lang.Runnable {
        final com.mbridge.msdk.video.module.MBridgeH5EndCardView a;
        private com.mbridge.msdk.video.module.MBridgeH5EndCardView b;

        public f(com.mbridge.msdk.video.module.MBridgeH5EndCardView r1, com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                if (r0 == 0) goto L16
                boolean r0 = com.mbridge.msdk.video.module.MBridgeH5EndCardView.h(r0)
                if (r0 != 0) goto L10
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.a
                r1 = 0
                r0.setCloseVisible(r1)
            L10:
                com.mbridge.msdk.video.module.MBridgeH5EndCardView r0 = r2.b
                r1 = 1
                com.mbridge.msdk.video.module.MBridgeH5EndCardView.d(r0, r1)
            L16:
                return
        }
    }

    public MBridgeH5EndCardView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.z = r3
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r2.r = r0
            r2.t = r3
            r2.u = r3
            r2.A = r3
            r0 = 1
            r2.B = r0
            r2.C = r0
            r2.D = r3
            r2.E = r3
            r2.F = r0
            r0 = 0
            r2.G = r0
            r2.H = r3
            r2.I = r3
            r2.J = r3
            r2.K = r3
            r2.L = r3
            r2.M = r3
            r2.N = r3
            r2.O = r3
            java.lang.String r0 = ""
            r2.P = r0
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$1 r0 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.w = r0
            r2.R = r3
            r2.S = r3
            r2.x = r3
            return
    }

    public MBridgeH5EndCardView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r3 = 0
            r2.z = r3
            android.os.Handler r4 = new android.os.Handler
            r4.<init>()
            r2.r = r4
            r2.t = r3
            r2.u = r3
            r2.A = r3
            r4 = 1
            r2.B = r4
            r2.C = r4
            r2.D = r3
            r2.E = r3
            r2.F = r4
            r0 = 0
            r2.G = r0
            r2.H = r3
            r2.I = r3
            r2.J = r3
            r2.K = r3
            r2.L = r3
            r2.M = r3
            r2.N = r3
            r2.O = r3
            java.lang.String r4 = ""
            r2.P = r4
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$1 r4 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$1
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r4.<init>(r2, r0)
            r2.w = r4
            r2.R = r3
            r2.S = r3
            r2.x = r3
            return
    }

    static int a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, int r1) {
            r0.F = r1
            return r1
    }

    static void a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r20, long r21, boolean r23) {
            r1 = r20
            r2 = r21
            java.lang.String r4 = "MBridgeBaseView"
            boolean r0 = r1.D     // Catch: java.lang.Throwable -> L183
            if (r0 == 0) goto L11
            java.lang.String r0 = "insertEndCardReadyState hasInsertLoadEndCardReport true return"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Throwable -> L183
            goto L18c
        L11:
            r5 = 1
            r1.D = r5     // Catch: java.lang.Throwable -> L183
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L183
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L183
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Throwable -> L183
            java.lang.String r6 = "1"
            java.lang.String r7 = "2"
            if (r0 == 0) goto L34
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L183
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L183
            java.lang.String r8 = ".zip"
            boolean r0 = r0.contains(r8)     // Catch: java.lang.Throwable -> L183
            if (r0 == 0) goto L34
            r15 = r6
            goto L35
        L34:
            r15 = r7
        L35:
            r0 = 10
            java.lang.String r8 = "ready yes"
            r9 = 2
            if (r23 == 0) goto L44
            r0 = 12
            java.lang.String r8 = "ready timeout"
        L40:
            r14 = r0
            r13 = r8
            r12 = r9
            goto L51
        L44:
            int r10 = r1.F     // Catch: java.lang.Throwable -> L183
            if (r10 != r9) goto L4e
            r9 = 3
            r0 = 11
            java.lang.String r8 = "ready no"
            goto L40
        L4e:
            r14 = r0
            r12 = r5
            r13 = r8
        L51:
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> L183
            java.lang.String r9 = "2000043"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L183
            r0.<init>()     // Catch: java.lang.Throwable -> L183
            r0.append(r2)     // Catch: java.lang.Throwable -> L183
            java.lang.String r8 = ""
            r0.append(r8)     // Catch: java.lang.Throwable -> L183
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L183
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.b     // Catch: java.lang.Throwable -> L183
            java.lang.String r16 = r8.getendcard_url()     // Catch: java.lang.Throwable -> L183
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.b     // Catch: java.lang.Throwable -> L183
            java.lang.String r17 = r8.getId()     // Catch: java.lang.Throwable -> L183
            java.lang.String r10 = r1.v     // Catch: java.lang.Throwable -> L183
            r8 = r11
            r18 = r10
            r10 = r14
            r5 = r11
            r11 = r0
            r19 = r4
            r4 = r12
            r12 = r16
            r23 = r13
            r13 = r17
            r2 = r14
            r14 = r18
            r3 = r15
            r15 = r23
            r16 = r3
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            int r0 = r0.getAdType()     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            r8 = 287(0x11f, float:4.02E-43)
            if (r0 != r8) goto L9e
            java.lang.String r0 = "3"
            r5.h(r0)     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            goto Lbe
        L9e:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            int r0 = r0.getAdType()     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            r8 = 94
            if (r0 != r8) goto Lac
            r5.h(r6)     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            goto Lbe
        Lac:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            int r0 = r0.getAdType()     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            r6 = 42
            if (r0 != r6) goto Lbe
            r5.h(r7)     // Catch: java.lang.NullPointerException -> Lba java.lang.Throwable -> L17f
            goto Lbe
        Lba:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L17f
        Lbe:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Throwable -> L17f
            r5.k(r0)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r0.getRequestIdNotice()     // Catch: java.lang.Throwable -> L17f
            r5.l(r0)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            int r0 = r0.getAdSpaceT()     // Catch: java.lang.Throwable -> L17f
            r5.b(r0)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r1.v     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.same.report.c.a(r5, r0)     // Catch: java.lang.Throwable -> L17f
            boolean r0 = r20.isLoadSuccess()     // Catch: java.lang.Throwable -> L17f
            if (r0 != 0) goto L124
            r6 = 1
            if (r4 != r6) goto L124
            r5.d(r4)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = java.lang.String.valueOf(r21)     // Catch: java.lang.Throwable -> L17f
            r5.q(r0)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r0.getId()     // Catch: java.lang.Throwable -> L17f
            r5.n(r0)     // Catch: java.lang.Throwable -> L17f
            r8 = r23
            r5.p(r8)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            boolean r0 = r0.isMraid()     // Catch: java.lang.Throwable -> L17f
            if (r0 == 0) goto L10d
            int r0 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Throwable -> L17f
            r5.a(r0)     // Catch: java.lang.Throwable -> L17f
            goto L11e
        L10d:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Throwable -> L17f
            r5.f(r0)     // Catch: java.lang.Throwable -> L17f
            r5.g(r3)     // Catch: java.lang.Throwable -> L17f
            int r0 = com.mbridge.msdk.foundation.entity.p.b     // Catch: java.lang.Throwable -> L17f
            r5.a(r0)     // Catch: java.lang.Throwable -> L17f
        L11e:
            java.lang.String r0 = r1.v     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.same.report.c.b(r5, r0)     // Catch: java.lang.Throwable -> L17f
            goto L126
        L124:
            r8 = r23
        L126:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17f
            r0.<init>()     // Catch: java.lang.Throwable -> L17f
            java.lang.String r4 = "insertEndCardReadyState result:"
            r0.append(r4)     // Catch: java.lang.Throwable -> L17f
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = " endCardLoadTime:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            r4 = r21
            r0.append(r4)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = " endcardurl:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = r2.getendcard_url()     // Catch: java.lang.Throwable -> L17f
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = "  id:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.b     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Throwable -> L17f
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r2 = "  unitid:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r1 = r1.v     // Catch: java.lang.Throwable -> L17f
            r0.append(r1)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r1 = "  reason:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L17f
            r0.append(r8)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r1 = "  type:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L17f
            r0.append(r3)     // Catch: java.lang.Throwable -> L17f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17f
            r1 = r19
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Throwable -> L17d
            goto L18c
        L17d:
            r0 = move-exception
            goto L185
        L17f:
            r0 = move-exception
            r1 = r19
            goto L185
        L183:
            r0 = move-exception
            r1 = r4
        L185:
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L18c:
            return
    }

    static void a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b     // Catch: java.lang.Exception -> L36
            java.lang.String r0 = r0.getClickURL()     // Catch: java.lang.Exception -> L36
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L36
            if (r1 != 0) goto L14
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Exception -> L36
            r1.setClickURL(r4)     // Catch: java.lang.Exception -> L36
            r3.b(r4)     // Catch: java.lang.Exception -> L36
        L14:
            com.mbridge.msdk.click.b r4 = new com.mbridge.msdk.click.b     // Catch: java.lang.Exception -> L36
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = r3.v     // Catch: java.lang.Exception -> L36
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L36
            r4.a(r3)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Exception -> L36
            r4.c(r1)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L36
            r4.setClickURL(r0)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.video.module.a.a r4 = r3.e     // Catch: java.lang.Exception -> L36
            r0 = 126(0x7e, float:1.77E-43)
            java.lang.String r1 = ""
            r4.a(r0, r1)     // Catch: java.lang.Exception -> L36
            goto L40
        L36:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L40:
            return
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            boolean r0 = r0.H
            return r0
    }

    static boolean a(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, boolean r1) {
            r0.E = r1
            return r1
    }

    static long b(com.mbridge.msdk.video.module.MBridgeH5EndCardView r2) {
            long r0 = r2.G
            return r0
    }

    private void b(java.lang.String r9) {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.getMraidCampaign()
            if (r0 == 0) goto L27
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r2 = r8.getContext()
            r1.<init>(r2)
            java.lang.String r2 = r0.getRequestId()
            java.lang.String r3 = r0.getRequestIdNotice()
            java.lang.String r4 = r0.getId()
            java.lang.String r5 = r8.v
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b
            boolean r7 = r0.isBidCampaign()
            r6 = r9
            r1.b(r2, r3, r4, r5, r6, r7)
        L27:
            return
    }

    static boolean b(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, boolean r1) {
            r0.L = r1
            return r1
    }

    static boolean c(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            boolean r0 = r0.E
            return r0
    }

    static boolean c(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, boolean r1) {
            r0.M = r1
            return r1
    }

    static void d(com.mbridge.msdk.video.module.MBridgeH5EndCardView r18) {
            r1 = r18
            java.lang.String r2 = "true"
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            if (r0 == 0) goto L10a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            boolean r0 = r0.isMraid()
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
            int r2 = com.mbridge.msdk.foundation.tools.v.x(r2)
            float r2 = (float) r2
            android.content.Context r3 = r18.getContext()
            int r3 = com.mbridge.msdk.foundation.tools.v.y(r3)
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
            com.mbridge.msdk.mbjscommon.mraid.a r6 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r1.q
            r6.b(r7, r2, r3)
            com.mbridge.msdk.mbjscommon.mraid.a r2 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r1.q
            r2.c(r3, r5, r4)
        La3:
            com.mbridge.msdk.mbjscommon.mraid.a r6 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r1.q
            int r2 = r7.getLeft()
            float r8 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            int r2 = r2.getTop()
            float r9 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            int r2 = r2.getWidth()
            float r10 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            int r2 = r2.getHeight()
            float r11 = (float) r2
            r6.a(r7, r8, r9, r10, r11)
            com.mbridge.msdk.mbjscommon.mraid.a r12 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r13 = r1.q
            int r2 = r13.getLeft()
            float r14 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            int r2 = r2.getTop()
            float r15 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            int r2 = r2.getWidth()
            float r2 = (float) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r1.q
            int r3 = r3.getHeight()
            float r3 = (float) r3
            r16 = r2
            r17 = r3
            r12.b(r13, r14, r15, r16, r17)
            com.mbridge.msdk.mbjscommon.mraid.a r2 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r1.q
            r2.a(r3, r0)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.q
            double r3 = com.mbridge.msdk.mbjscommon.mraid.d.a
            r0.a(r2, r3)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.q
            r0.a(r1)
        L10a:
            return
    }

    static boolean d(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, boolean r1) {
            r0.I = r1
            return r1
    }

    static java.lang.String e(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            java.lang.String r0 = r0.P
            return r0
    }

    static boolean e(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0, boolean r1) {
            r0.D = r1
            return r1
    }

    static void f(com.mbridge.msdk.video.module.MBridgeH5EndCardView r6) {
            java.lang.String r0 = "_"
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lae
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto Lb2
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r6.v     // Catch: java.lang.Exception -> Lae
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            r2.append(r0)     // Catch: java.lang.Exception -> Lae
            r3 = 1
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lae
            r1.c(r2)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r6.v     // Catch: java.lang.Exception -> Lae
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            r2.append(r0)     // Catch: java.lang.Exception -> Lae
            r3 = 2
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.widget.FeedBackButton r1 = r1.b(r2)     // Catch: java.lang.Exception -> Lae
            r6.y = r1     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto L69
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> Lae
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto L56
            com.mbridge.msdk.widget.FeedBackButton r2 = r6.y     // Catch: java.lang.Exception -> Lae
            r1.removeView(r2)     // Catch: java.lang.Exception -> Lae
        L56:
            android.widget.RelativeLayout r1 = r6.o     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.widget.FeedBackButton r2 = r6.y     // Catch: java.lang.Exception -> Lae
            r1.addView(r2)     // Catch: java.lang.Exception -> Lae
            android.widget.RelativeLayout r1 = r6.o     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$5 r2 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$5     // Catch: java.lang.Exception -> Lae
            r2.<init>(r6)     // Catch: java.lang.Exception -> Lae
            r4 = 200(0xc8, double:9.9E-322)
            r1.postDelayed(r2, r4)     // Catch: java.lang.Exception -> Lae
        L69:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r6.v     // Catch: java.lang.Exception -> Lae
            r1.setCampaignUnitId(r2)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = r6.v     // Catch: java.lang.Exception -> Lae
            r2.append(r4)     // Catch: java.lang.Exception -> Lae
            r2.append(r0)     // Catch: java.lang.Exception -> Lae
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r6.b     // Catch: java.lang.Exception -> Lae
            r1.a(r2, r4)     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.foundation.b.b r1 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = r6.v     // Catch: java.lang.Exception -> Lae
            r2.append(r4)     // Catch: java.lang.Exception -> Lae
            r2.append(r0)     // Catch: java.lang.Exception -> Lae
            r2.append(r3)     // Catch: java.lang.Exception -> Lae
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Lae
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$6 r2 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$6     // Catch: java.lang.Exception -> Lae
            r2.<init>(r6)     // Catch: java.lang.Exception -> Lae
            r1.a(r0, r2)     // Catch: java.lang.Exception -> Lae
            goto Lb2
        Lae:
            r6 = move-exception
            r6.printStackTrace()
        Lb2:
            return
    }

    static com.mbridge.msdk.widget.FeedBackButton g(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            com.mbridge.msdk.widget.FeedBackButton r0 = r0.y
            return r0
    }

    static boolean h(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            boolean r0 = r0.N
            return r0
    }

    static boolean i(com.mbridge.msdk.video.module.MBridgeH5EndCardView r0) {
            boolean r0 = r0.D
            return r0
    }

    protected java.lang.String a() {
            r7 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            r1 = 0
            r2 = 0
            java.lang.String r3 = "MBridgeBaseView"
            if (r0 == 0) goto L156
            r0 = 1
            r7.H = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r7.b
            boolean r4 = r4.isMraid()
            java.lang.String r5 = "getURL playable=false endscreenurl兜底:"
            if (r4 == 0) goto L8e
            r7.A = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getMraid()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L75
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L60
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L60
            boolean r1 = r1.canRead()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L60
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "Mraid file "
            r1.append(r2)     // Catch: java.lang.Throwable -> L6c
            r1.append(r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.tools.z.b(r3, r1)     // Catch: java.lang.Throwable -> L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "file:////"
            r1.append(r2)     // Catch: java.lang.Throwable -> L6c
            r1.append(r0)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L6c
            goto L8d
        L60:
            java.lang.String r1 = "Mraid file not found. Will use endcard url."
            com.mbridge.msdk.foundation.tools.z.b(r3, r1)     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r1.getEndScreenUrl()     // Catch: java.lang.Throwable -> L6c
            goto L8d
        L6c:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L8d
            r1.printStackTrace()
            goto L8d
        L75:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getEndScreenUrl()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
        L8d:
            return r0
        L8e:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r7.b
            java.lang.String r4 = r4.getendcard_url()
            boolean r6 = com.mbridge.msdk.foundation.tools.ai.a(r4)
            if (r6 != 0) goto L13b
            r7.A = r0
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r0 = r0.getH5ResAddress(r4)
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r6 = "&native_adtype="
            if (r5 == 0) goto L10e
            android.net.Uri r0 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> Ld9
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld9
            if (r5 != 0) goto Le1
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r5 = ".zip"
            boolean r0 = r0.endsWith(r5)     // Catch: java.lang.Throwable -> Ld9
            if (r0 == 0) goto Le1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r0 = r0.getEndScreenUrl()     // Catch: java.lang.Throwable -> Ld9
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld9
            if (r5 != 0) goto Ld8
            r7.A = r2     // Catch: java.lang.Throwable -> Ld9
            r7.excuteTask()     // Catch: java.lang.Throwable -> Ld9
            return r0
        Ld8:
            return r1
        Ld9:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        Le1:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getURL playable=true endcard本地资源地址为空拿服务端地址:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.b
            int r1 = r1.getAdType()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L10e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getURL playable=true 资源不为空endcard地址:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            int r0 = r0.getAdType()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L13b:
            r7.A = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b
            java.lang.String r0 = r0.getEndScreenUrl()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
            return r0
        L156:
            r7.H = r2
            java.lang.String r0 = "getURL playable=false url为空"
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
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
            android.widget.ImageView r0 = r2.p
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$2 r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L11:
            return
    }

    public boolean canBackPress() {
            r1 = this;
            android.widget.ImageView r0 = r1.p
            if (r0 == 0) goto Lc
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void close() {
            r2 = this;
            java.lang.String r0 = "EndCard_MRAID"
            java.lang.String r1 = "close"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r2.onCloseViewClick()     // Catch: java.lang.Exception -> Lb
            goto L15
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
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
            android.os.Handler r0 = r4.r
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$c r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$c
            r1.<init>(r4, r5)
            int r5 = r5 * 1000
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
            return
    }

    public void excuteTask() {
            r4 = this;
            boolean r0 = r4.A
            if (r0 != 0) goto L18
            int r0 = r4.B
            r1 = -1
            if (r0 <= r1) goto L18
            android.os.Handler r0 = r4.r
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$f r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$f
            r1.<init>(r4, r4)
            int r2 = r4.B
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L18:
            return
    }

    public void executeEndCardShow(int r5) {
            r4 = this;
            android.os.Handler r0 = r4.r
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$b r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$b
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
    public com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            return r0
    }

    public void handlerPlayableException(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "========"
            java.lang.String r1 = "===========handlerPlayableException"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            boolean r0 = r2.u
            if (r0 != 0) goto L43
            r0 = 1
            r2.u = r0
            r0 = 0
            r2.t = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L43
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            java.lang.String r1 = r1.getRequestId()
            r0.k(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            java.lang.String r1 = r1.getRequestIdNotice()
            r0.l(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            java.lang.String r1 = r1.getId()
            r0.n(r1)
            r0.p(r3)
            android.content.Context r3 = r2.a
            android.content.Context r3 = r3.getApplicationContext()
            java.lang.String r1 = r2.v
            com.mbridge.msdk.foundation.same.report.c.d(r0, r3, r1)
        L43:
            return
    }

    @Override
    public void init(android.content.Context r4) {
            r3 = this;
            java.lang.String r4 = "mbridge_reward_endcard_h5"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L6f
            android.view.LayoutInflater r0 = r3.c
            r1 = 0
            android.view.View r4 = r0.inflate(r4, r1)
            r3.n = r4
            r0 = 0
            java.lang.String r1 = "mbridge_windwv_close"
            int r1 = r3.findID(r1)     // Catch: java.lang.Exception -> L5e
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Exception -> L5e
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> L5e
            r3.p = r1     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = "mbridge_windwv_content_rl"
            int r1 = r3.findID(r1)     // Catch: java.lang.Exception -> L5e
            android.view.View r4 = r4.findViewById(r1)     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout r4 = (android.widget.RelativeLayout) r4     // Catch: java.lang.Exception -> L5e
            r3.o = r4     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> L5e
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L5e
            r4.<init>(r1)     // Catch: java.lang.Exception -> L5e
            r3.q = r4     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L5e
            r1 = -1
            r4.<init>(r1, r1)     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.q     // Catch: java.lang.Exception -> L5e
            r1.setLayoutParams(r4)     // Catch: java.lang.Exception -> L5e
            android.widget.RelativeLayout r4 = r3.o     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.q     // Catch: java.lang.Exception -> L5e
            r4.addView(r1)     // Catch: java.lang.Exception -> L5e
            r4 = 2
            android.view.View[] r4 = new android.view.View[r4]     // Catch: java.lang.Exception -> L5e
            android.widget.ImageView r1 = r3.p     // Catch: java.lang.Exception -> L5e
            r4[r0] = r1     // Catch: java.lang.Exception -> L5e
            r1 = 1
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r3.q     // Catch: java.lang.Exception -> L5e
            r4[r1] = r2     // Catch: java.lang.Exception -> L5e
            boolean r4 = r3.isNotNULL(r4)     // Catch: java.lang.Exception -> L5e
            r3.f = r4     // Catch: java.lang.Exception -> L5e
            goto L60
        L5e:
            r3.f = r0
        L60:
            android.view.View r4 = r3.n
            android.widget.RelativeLayout$LayoutParams r0 = r3.b()
            r3.addView(r4, r0)
            r3.c()
            r3.e()
        L6f:
            return
    }

    public void install(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            return
    }

    public boolean isLoadSuccess() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    public boolean isPlayable() {
            r1 = this;
            boolean r0 = r1.A
            return r0
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L9
            if (r2 == r0) goto L6
            goto Lb
        L6:
            r1.K = r0
            goto Lb
        L9:
            r1.J = r0
        Lb:
            return
    }

    public void onBackPress() {
            r1 = this;
            boolean r0 = r1.I
            if (r0 != 0) goto L24
            boolean r0 = r1.J
            if (r0 == 0) goto Lc
            boolean r0 = r1.K
            if (r0 != 0) goto L24
        Lc:
            boolean r0 = r1.J
            if (r0 != 0) goto L18
            boolean r0 = r1.L
            if (r0 == 0) goto L18
            boolean r0 = r1.x
            if (r0 == 0) goto L24
        L18:
            boolean r0 = r1.J
            if (r0 != 0) goto L27
            boolean r0 = r1.M
            if (r0 == 0) goto L27
            boolean r0 = r1.x
            if (r0 == 0) goto L27
        L24:
            r1.onCloseViewClick()
        L27:
            return
    }

    public void onCloseViewClick() {
            r6 = this;
            java.lang.String r0 = ""
            r1 = 119(0x77, float:1.67E-43)
            r2 = 103(0x67, float:1.44E-43)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.q     // Catch: java.lang.Exception -> L30
            if (r3 == 0) goto L23
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r6.q     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "onSystemDestory"
            r3.a(r4, r5, r0)     // Catch: java.lang.Exception -> L30
            java.lang.Thread r3 = new java.lang.Thread     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$a r4 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$a     // Catch: java.lang.Exception -> L30
            r4.<init>(r6, r6)     // Catch: java.lang.Exception -> L30
            r3.<init>(r4)     // Catch: java.lang.Exception -> L30
            r3.start()     // Catch: java.lang.Exception -> L30
            goto L59
        L23:
            com.mbridge.msdk.video.module.a.a r3 = r6.e     // Catch: java.lang.Exception -> L30
            r3.a(r2, r0)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.video.module.a.a r3 = r6.e     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = "webview is null when closing webview"
            r3.a(r1, r4)     // Catch: java.lang.Exception -> L30
            goto L59
        L30:
            r3 = move-exception
            com.mbridge.msdk.video.module.a.a r4 = r6.e
            r4.a(r2, r0)
            com.mbridge.msdk.video.module.a.a r0 = r6.e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "close webview exception"
            r2.append(r4)
            java.lang.String r4 = r3.getMessage()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.a(r1, r2)
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L59:
            return
    }

    @Override
    public void onFinishRedirection(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r3 = r2.getLinkType()
            r0 = 8
            if (r3 != r0) goto L1b
            com.mbridge.msdk.foundation.entity.AabEntity r2 = r2.getAabEntity()
            int r2 = r2.getHlp()
            r3 = 1
            if (r2 != r3) goto L1b
            com.mbridge.msdk.foundation.tools.ad.a(r1)
        L1b:
            return
    }

    @Override
    public void onRedirectionFailed(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r3 = r2.getLinkType()
            r0 = 8
            if (r3 != r0) goto L1b
            com.mbridge.msdk.foundation.entity.AabEntity r2 = r2.getAabEntity()
            int r2 = r2.getHlp()
            r3 = 1
            if (r2 != r3) goto L1b
            com.mbridge.msdk.foundation.tools.ad.a(r1)
        L1b:
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
    public void onStartRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.foundation.tools.ad.a(r1, r0)
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto L15
            boolean r1 = r0.O
            if (r1 != 0) goto L15
            r1 = 1
            r0.O = r1
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
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L28
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L28
            if (r3 == 0) goto L1d
            com.mbridge.msdk.mbjscommon.mraid.a r3 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            java.lang.String r1 = "true"
            r3.b(r0, r1)
            goto L28
        L1d:
            com.mbridge.msdk.mbjscommon.mraid.a r3 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            java.lang.String r1 = "false"
            r3.b(r0, r1)
        L28:
            return
    }

    @Override
    public void open(java.lang.String r8) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "open : "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EndCard_MRAID"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Exception -> L74
            if (r0 == 0) goto L70
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Exception -> L74
            boolean r0 = r0.needShowIDialog()     // Catch: java.lang.Exception -> L74
            if (r0 == 0) goto L70
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Exception -> L74
            boolean r0 = com.mbridge.msdk.click.c.a(r0)     // Catch: java.lang.Exception -> L74
            if (r0 == 0) goto L70
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$7 r6 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$7     // Catch: java.lang.Exception -> L74
            r6.<init>(r7, r8)     // Catch: java.lang.Exception -> L74
            android.content.Context r8 = r7.getContext()     // Catch: java.lang.Exception -> L74
            if (r8 == 0) goto L6f
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r7.b     // Catch: java.lang.Exception -> L74
            if (r8 == 0) goto L6f
            com.mbridge.msdk.click.b r8 = new com.mbridge.msdk.click.b     // Catch: java.lang.Exception -> L74
            android.content.Context r0 = r7.getContext()     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = r7.v     // Catch: java.lang.Exception -> L74
            r8.<init>(r0, r1)     // Catch: java.lang.Exception -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.b     // Catch: java.lang.Exception -> L74
            boolean r8 = r8.b(r0)     // Catch: java.lang.Exception -> L74
            if (r8 != 0) goto L6f
            com.mbridge.msdk.videocommon.d.b r8 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L74
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = r0.k()     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = r7.v     // Catch: java.lang.Exception -> L74
            r2 = 0
            r8.a(r0, r1, r2)     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = com.mbridge.msdk.videocommon.d.c.a     // Catch: java.lang.Exception -> L74
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Exception -> L74
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.b     // Catch: java.lang.Exception -> L74
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Exception -> L74
            java.lang.String r5 = r7.v     // Catch: java.lang.Exception -> L74
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L74
        L6f:
            return
        L70:
            r7.a(r8)     // Catch: java.lang.Exception -> L74
            goto L7e
        L74:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r8)
        L7e:
            return
    }

    public void orientation(android.content.res.Configuration r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            int r4 = r4.orientation     // Catch: java.lang.Exception -> L2d
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r4 != r1) goto L12
            java.lang.String r4 = "landscape"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2d
            goto L17
        L12:
            java.lang.String r4 = "portrait"
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L2d
        L17:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L2d
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L2d
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.q     // Catch: java.lang.Exception -> L2d
            r0.a(r1, r2, r4)     // Catch: java.lang.Exception -> L2d
            goto L31
        L2d:
            r4 = move-exception
            r4.printStackTrace()
        L31:
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r10) {
            r9 = this;
            java.lang.String r0 = "wfr=1"
            java.lang.String r1 = "="
            r9.Q = r10
            java.lang.String r3 = r9.a()
            boolean r2 = r9.f
            r8 = 0
            if (r2 == 0) goto L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b
            if (r2 == 0) goto L17d
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L17d
            long r4 = java.lang.System.currentTimeMillis()
            r9.G = r4
            java.lang.String r2 = "start"
            r9.reportRenderResult(r2, r8)     // Catch: java.lang.Exception -> L24
        L24:
            com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener r2 = new com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b
            r2.<init>(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b
            java.lang.String r4 = r4.getAppName()
            r2.setTitle(r4)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.q
            r4.setDownloadListener(r2)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.q
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.b
            java.lang.String r4 = r4.getId()
            r2.setCampaignId(r4)
            r2 = 8
            r9.setCloseVisible(r2)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.q
            r2.setApiManagerJSFactory(r10)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            boolean r10 = r10.isMraid()
            if (r10 == 0) goto L5b
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r10 = r9.q
            r10.setMraidObject(r9)
        L5b:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r10 = r9.q
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$3 r2 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$3
            r2.<init>(r9)
            r10.setWebViewListener(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            java.lang.String r10 = r10.getMraid()
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            java.lang.String r2 = "MBridgeBaseView"
            if (r10 == 0) goto L13e
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L136
            r9.G = r4     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b     // Catch: java.lang.Throwable -> L136
            java.lang.String r10 = r10.getendcard_url()     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L136
            java.lang.String r5 = r5.k()     // Catch: java.lang.Throwable -> L136
            java.lang.String r6 = r9.v     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.videocommon.d.c r4 = r4.a(r5, r6)     // Catch: java.lang.Throwable -> L136
            boolean r5 = r9.A     // Catch: java.lang.Throwable -> L136
            if (r5 == 0) goto L13e
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.b(r10)     // Catch: java.lang.Throwable -> L136
            if (r5 == 0) goto L13e
            boolean r5 = r10.contains(r0)     // Catch: java.lang.Throwable -> L136
            if (r5 != 0) goto La9
            if (r4 == 0) goto L13e
            int r5 = r4.o()     // Catch: java.lang.Throwable -> L136
            if (r5 <= 0) goto L13e
        La9:
            java.lang.String r5 = "需要上报endcard加载时间"
            com.mbridge.msdk.foundation.tools.z.d(r2, r5)     // Catch: java.lang.Throwable -> L136
            boolean r0 = r10.contains(r0)     // Catch: java.lang.Throwable -> L136
            r5 = 20
            if (r0 == 0) goto L105
            java.lang.String r0 = "&"
            java.lang.String[] r10 = r10.split(r0)     // Catch: java.lang.Throwable -> L136
            if (r10 == 0) goto L112
            int r0 = r10.length     // Catch: java.lang.Throwable -> L136
            if (r0 <= 0) goto L112
            int r0 = r10.length     // Catch: java.lang.Throwable -> L136
            r4 = r8
        Lc3:
            if (r4 >= r0) goto L112
            r6 = r10[r4]     // Catch: java.lang.Throwable -> L136
            boolean r7 = com.mbridge.msdk.foundation.tools.ai.b(r6)     // Catch: java.lang.Throwable -> L136
            if (r7 == 0) goto L102
            java.lang.String r7 = "to"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L136
            if (r7 == 0) goto L102
            java.lang.String[] r7 = r6.split(r1)     // Catch: java.lang.Throwable -> L136
            if (r7 == 0) goto L102
            java.lang.String[] r7 = r6.split(r1)     // Catch: java.lang.Throwable -> L136
            int r7 = r7.length     // Catch: java.lang.Throwable -> L136
            if (r7 <= 0) goto L102
            java.lang.String[] r10 = r6.split(r1)     // Catch: java.lang.Throwable -> L136
            r0 = 1
            r10 = r10[r0]     // Catch: java.lang.Throwable -> L136
            int r10 = com.mbridge.msdk.foundation.tools.ae.a(r10)     // Catch: java.lang.Throwable -> L136
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L136
            r0.<init>()     // Catch: java.lang.Throwable -> L136
            java.lang.String r1 = "从url获取的waitingtime:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L136
            r0.append(r10)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)     // Catch: java.lang.Throwable -> L136
            goto L113
        L102:
            int r4 = r4 + 1
            goto Lc3
        L105:
            if (r4 == 0) goto L112
            int r10 = r4.o()     // Catch: java.lang.Throwable -> L136
            if (r10 <= 0) goto L112
            int r10 = r4.o()     // Catch: java.lang.Throwable -> L136
            goto L113
        L112:
            r10 = r5
        L113:
            if (r10 < 0) goto L12d
            r9.excuteEndCardShowTask(r10)     // Catch: java.lang.Throwable -> L136
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L136
            r0.<init>()     // Catch: java.lang.Throwable -> L136
            java.lang.String r1 = "开启excuteEndCardShowTask:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L136
            r0.append(r10)     // Catch: java.lang.Throwable -> L136
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> L136
            com.mbridge.msdk.foundation.tools.z.b(r2, r10)     // Catch: java.lang.Throwable -> L136
            goto L13e
        L12d:
            r9.excuteEndCardShowTask(r5)     // Catch: java.lang.Throwable -> L136
            java.lang.String r10 = "开启excuteEndCardShowTask: 20s def"
            com.mbridge.msdk.foundation.tools.z.b(r2, r10)     // Catch: java.lang.Throwable -> L136
            goto L13e
        L136:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r2, r0, r10)
        L13e:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r10 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()
            java.lang.String r10 = r10.getHtmlContentFromUrl(r3)
            r9.setHtmlSource(r10)
            java.lang.String r10 = r9.s
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L16b
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "load url:"
            r10.append(r0)
            r10.append(r3)
            java.lang.String r10 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r10)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r10 = r9.q
            r10.loadUrl(r3)
            goto L193
        L16b:
            java.lang.String r10 = "load html..."
            com.mbridge.msdk.foundation.tools.z.a(r2, r10)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.q
            java.lang.String r4 = r9.s
            r7 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "UTF-8"
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            goto L193
        L17d:
            r10 = 3
            java.lang.String r0 = "PL URL IS NULL"
            r9.reportRenderResult(r0, r10)
            com.mbridge.msdk.video.module.a.a r10 = r9.e
            r0 = 127(0x7f, float:1.78E-43)
            java.lang.String r1 = ""
            r10.a(r0, r1)
            com.mbridge.msdk.video.module.a.a r10 = r9.e
            r0 = 129(0x81, float:1.81E-43)
            r10.a(r0, r1)
        L193:
            r9.x = r8
            return
    }

    public void readyStatus(int r1) {
            r0 = this;
            return
    }

    public void release() {
            r2 = this;
            android.os.Handler r0 = r2.r
            r1 = 0
            if (r0 == 0) goto La
            r0.removeCallbacksAndMessages(r1)
            r2.r = r1
        La:
            android.os.Handler r0 = r2.w
            if (r0 == 0) goto L13
            r0.removeCallbacksAndMessages(r1)
            r2.w = r1
        L13:
            android.widget.RelativeLayout r0 = r2.o
            r0.removeAllViews()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            r0.release()
            r2.q = r1
            return
    }

    public void reportRenderResult(java.lang.String r6, int r7) {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            if (r0 == 0) goto Laa
            boolean r0 = r5.u
            if (r0 != 0) goto Laa
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b
            java.lang.String r1 = r1.getRequestId()
            r0.k(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b
            java.lang.String r1 = r1.getRequestIdNotice()
            r0.l(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.b
            java.lang.String r1 = r1.getId()
            r0.n(r1)
            r0.d(r7)
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.G
            long r1 = r1 - r3
            java.lang.String r7 = java.lang.String.valueOf(r1)
            r0.q(r7)
            r0.p(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            int r6 = r6.getAdType()
            r7 = 287(0x11f, float:4.02E-43)
            java.lang.String r1 = "2"
            java.lang.String r2 = "1"
            if (r6 != r7) goto L50
            java.lang.String r6 = "3"
            r0.h(r6)
            goto L6b
        L50:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            int r6 = r6.getAdType()
            r7 = 94
            if (r6 != r7) goto L5e
            r0.h(r2)
            goto L6b
        L5e:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            int r6 = r6.getAdType()
            r7 = 42
            if (r6 != r7) goto L6b
            r0.h(r1)
        L6b:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            boolean r6 = r6.isMraid()
            if (r6 == 0) goto L79
            int r6 = com.mbridge.msdk.foundation.entity.p.a
            r0.a(r6)
            goto La5
        L79:
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            java.lang.String r6 = r6.getendcard_url()
            r0.f(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            java.lang.String r6 = r6.getendcard_url()
            boolean r6 = com.mbridge.msdk.foundation.tools.ai.b(r6)
            if (r6 == 0) goto L9d
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.b
            java.lang.String r6 = r6.getendcard_url()
            java.lang.String r7 = ".zip"
            boolean r6 = r6.contains(r7)
            if (r6 == 0) goto L9d
            r1 = r2
        L9d:
            r0.g(r1)
            int r6 = com.mbridge.msdk.foundation.entity.p.b
            r0.a(r6)
        La5:
            java.lang.String r6 = r5.v
            com.mbridge.msdk.foundation.same.report.c.b(r0, r6)
        Laa:
            return
    }

    public void setCloseDelayShowTime(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public void setCloseVisible(int r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L9
            android.widget.ImageView r0 = r1.p
            r0.setVisibility(r2)
        L9:
            return
    }

    public void setCloseVisibleForMraid(int r3) {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L28
            r0 = 1
            r2.N = r0
            r0 = 4
            if (r3 != r0) goto L17
            android.widget.ImageView r3 = r2.p
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 16711680(0xff0000, float:2.3418052E-38)
            r0.<init>(r1)
            r3.setImageDrawable(r0)
            goto L22
        L17:
            android.widget.ImageView r3 = r2.p
            java.lang.String r0 = "mbridge_reward_close"
            int r0 = r2.findDrawable(r0)
            r3.setImageResource(r0)
        L22:
            android.widget.ImageView r3 = r2.p
            r0 = 0
            r3.setVisibility(r0)
        L28:
            return
    }

    public void setError(boolean r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setHtmlSource(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public void setLoadPlayable(boolean r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setNotchValue(java.lang.String r6, int r7, int r8, int r9, int r10) {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            if (r0 == 0) goto L79
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            int r0 = r0.getAdSpaceT()
            r1 = 2
            if (r0 == r1) goto L79
            r5.P = r6
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "NOTCH H5ENDCARD "
            r6.append(r0)
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
            java.lang.String r6 = r6.toString()
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
            android.widget.ImageView r6 = r5.p
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6
            android.content.Context r2 = r5.getContext()
            r3 = 1101004800(0x41a00000, float:20.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            int r7 = r7 + r2
            int r9 = r9 + r2
            int r8 = r8 + r2
            int r10 = r10 + r2
            r6.setMargins(r7, r9, r8, r10)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            r7.append(r9)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
            android.widget.ImageView r7 = r5.p
            r7.setLayoutParams(r6)
        L79:
            return
    }

    public void setPlayCloseBtnTm(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void startCounterEndCardShowTimer() {
            r8 = this;
            java.lang.String r0 = "MBridgeBaseView"
            java.lang.String r1 = "="
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = r2.getendcard_url()     // Catch: java.lang.Throwable -> L6c
            r3 = 15
            boolean r4 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Throwable -> L6c
            if (r4 == 0) goto L74
            java.lang.String r4 = "wfl=1"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L6c
            if (r4 == 0) goto L74
            java.lang.String r4 = "&"
            java.lang.String[] r2 = r2.split(r4)     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L68
            int r4 = r2.length     // Catch: java.lang.Throwable -> L6c
            if (r4 <= 0) goto L68
            int r4 = r2.length     // Catch: java.lang.Throwable -> L6c
            r5 = 0
        L27:
            if (r5 >= r4) goto L68
            r6 = r2[r5]     // Catch: java.lang.Throwable -> L6c
            boolean r7 = com.mbridge.msdk.foundation.tools.ai.b(r6)     // Catch: java.lang.Throwable -> L6c
            if (r7 == 0) goto L65
            java.lang.String r7 = "timeout"
            boolean r7 = r6.contains(r7)     // Catch: java.lang.Throwable -> L6c
            if (r7 == 0) goto L65
            java.lang.String[] r7 = r6.split(r1)     // Catch: java.lang.Throwable -> L6c
            if (r7 == 0) goto L65
            java.lang.String[] r7 = r6.split(r1)     // Catch: java.lang.Throwable -> L6c
            int r7 = r7.length     // Catch: java.lang.Throwable -> L6c
            if (r7 <= 0) goto L65
            java.lang.String[] r3 = r6.split(r1)     // Catch: java.lang.Throwable -> L6c
            r6 = 1
            r3 = r3[r6]     // Catch: java.lang.Throwable -> L6c
            int r3 = com.mbridge.msdk.foundation.tools.ae.a(r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r6.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r7 = "从url获取的wfl timeout :"
            r6.append(r7)     // Catch: java.lang.Throwable -> L6c
            r6.append(r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.foundation.tools.z.b(r0, r6)     // Catch: java.lang.Throwable -> L6c
        L65:
            int r5 = r5 + 1
            goto L27
        L68:
            r8.executeEndCardShow(r3)     // Catch: java.lang.Throwable -> L6c
            goto L74
        L6c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L74:
            return
    }

    @Override
    public void toggleCloseBtn(int r5) {
            r4 = this;
            android.widget.ImageView r0 = r4.p
            int r0 = r0.getVisibility()
            r1 = 0
            r2 = 1
            if (r5 == r2) goto L63
            r3 = 2
            if (r5 == r3) goto Le
            goto L66
        Le:
            r4.I = r1
            r0 = 8
            boolean r5 = r4.x
            r3 = -1
            if (r5 == 0) goto L3d
            boolean r5 = r4.S
            if (r5 != 0) goto L66
            boolean r5 = r4.J
            if (r5 == 0) goto L20
            goto L66
        L20:
            r4.S = r2
            int r5 = r4.C
            if (r5 != 0) goto L29
            r4.M = r2
            goto L66
        L29:
            r4.M = r1
            if (r5 <= r3) goto L66
            android.os.Handler r5 = r4.r
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$e r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$e
            r1.<init>(r4, r4)
            int r2 = r4.C
            int r2 = r2 * 1000
            long r2 = (long) r2
            r5.postDelayed(r1, r2)
            goto L66
        L3d:
            boolean r5 = r4.R
            if (r5 != 0) goto L66
            boolean r5 = r4.J
            if (r5 == 0) goto L46
            goto L66
        L46:
            r4.R = r2
            int r5 = r4.B
            if (r5 != 0) goto L4f
            r4.L = r2
            goto L66
        L4f:
            r4.L = r1
            if (r5 <= r3) goto L66
            android.os.Handler r5 = r4.r
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$d r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$d
            r1.<init>(r4, r4)
            int r2 = r4.B
            int r2 = r2 * 1000
            long r2 = (long) r2
            r5.postDelayed(r1, r2)
            goto L66
        L63:
            r4.I = r2
            r0 = r1
        L66:
            r4.setCloseVisible(r0)
            return
    }

    @Override
    public void unload() {
            r2 = this;
            java.lang.String r0 = "EndCard_MRAID"
            java.lang.String r1 = "unload"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r2.close()
            return
    }

    @Override
    public void useCustomClose(boolean r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "useCustomClose : "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "EndCard_MRAID"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            if (r3 == 0) goto L1a
            r3 = 4
            goto L1b
        L1a:
            r3 = 0
        L1b:
            r2.setCloseVisibleForMraid(r3)     // Catch: java.lang.Exception -> L1f
            goto L29
        L1f:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L29:
            return
    }

    public void volumeChange(double r3) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r2.q
            r0.a(r1, r3)
            return
    }

    public void webviewshow() {
            r2 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            if (r0 == 0) goto Lc
            com.mbridge.msdk.video.module.MBridgeH5EndCardView$4 r1 = new com.mbridge.msdk.video.module.MBridgeH5EndCardView$4
            r1.<init>(r2)
            r0.post(r1)
        Lc:
            return
    }
}
