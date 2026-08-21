package com.mbridge.msdk.video.bt.module;

public class MBTempContainer extends com.mbridge.msdk.video.js.container.AbstractJSContainer {
    private static final java.lang.String y = null;
    private com.mbridge.msdk.foundation.entity.CampaignEx A;
    private com.mbridge.msdk.videocommon.download.a B;
    private com.mbridge.msdk.video.bt.module.b.h C;
    private com.mbridge.msdk.video.bt.module.a.c D;
    private com.mbridge.msdk.video.dynview.e.a E;
    private int F;
    private java.lang.String G;
    private com.mbridge.msdk.video.js.factory.b H;
    private int I;
    private int J;
    private com.mbridge.msdk.video.bt.module.a.b K;
    private boolean L;
    private int M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private java.lang.String R;
    private java.lang.String S;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> T;
    private int U;
    private android.view.LayoutInflater V;
    private int W;
    protected boolean a;
    private int aa;
    private int ab;
    private android.view.View ac;
    private boolean ad;
    private boolean ae;
    private boolean af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private boolean aj;
    private boolean ak;
    private boolean al;
    private boolean am;
    private com.mbridge.msdk.mbjscommon.mraid.d an;
    private com.iab.omid.library.mmadbridge.adsession.AdSession ao;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents ap;
    private java.lang.Runnable aq;
    private boolean ar;
    protected boolean b;
    protected com.mbridge.msdk.video.bt.module.MBTempContainer.a c;
    protected com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView d;
    protected com.mbridge.msdk.video.module.MBridgeVideoView e;
    protected com.mbridge.msdk.video.module.MBridgeContainerView f;
    protected android.os.Handler g;
    protected java.lang.Runnable h;
    protected java.lang.Runnable i;
    private android.view.View z;










    public interface a {

        public static class a implements com.mbridge.msdk.video.bt.module.MBTempContainer.a {
            private boolean a;

            public a() {
                    r1 = this;
                    r1.<init>()
                    r0 = 0
                    r1.a = r0
                    return
            }

            @Override
            public void a(java.lang.String r2) {
                    r1 = this;
                    java.lang.String r0 = "ActivityErrorListener"
                    com.mbridge.msdk.foundation.tools.z.d(r0, r2)
                    r2 = 1
                    r1.a = r2
                    return
            }

            @Override
            public final void a(boolean r1) {
                    r0 = this;
                    r0.a = r1
                    return
            }
        }

        void a(java.lang.String r1);

        void a(boolean r1);
    }

    private static final class b extends com.mbridge.msdk.scheme.applet.AppletSchemeCallBack {
        private com.mbridge.msdk.foundation.entity.CampaignEx a;

        public b(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        protected final void onRequestFailed(int r4, java.lang.String r5, java.lang.String r6) {
                r3 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L24
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "request wx scheme failed: errorCode: "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = " errorMessage: "
                r1.append(r4)
                r1.append(r5)
                java.lang.String r4 = r1.toString()
                com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            L24:
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.a     // Catch: java.lang.Exception -> L2e
                if (r4 == 0) goto L3e
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.a     // Catch: java.lang.Exception -> L2e
                r4.setClickURL(r6)     // Catch: java.lang.Exception -> L2e
                goto L3e
            L2e:
                r4 = move-exception
                boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r5 == 0) goto L3e
                java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.a()
                java.lang.String r4 = r4.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r5, r4)
            L3e:
                return
        }

        @Override
        protected final void onRequestStart() {
                r2 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto Ld
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.a()
                java.lang.String r1 = "start request wx scheme"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            Ld:
                return
        }

        @Override
        protected final void onRequestSuccess(java.lang.String r4) {
                r3 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L1c
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "request wx scheme success: "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            L1c:
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.a     // Catch: java.lang.Exception -> L26
                if (r0 == 0) goto L36
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.a     // Catch: java.lang.Exception -> L26
                r0.setDeepLinkUrl(r4)     // Catch: java.lang.Exception -> L26
                goto L36
            L26:
                r4 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L36
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.a()
                java.lang.String r4 = r4.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            L36:
                return
        }
    }

    private final class c extends com.mbridge.msdk.video.module.a.a.e {
        final com.mbridge.msdk.video.bt.module.MBTempContainer a;
        private android.app.Activity b;
        private com.mbridge.msdk.foundation.entity.CampaignEx c;



        public c(com.mbridge.msdk.video.bt.module.MBTempContainer r1, android.app.Activity r2, com.mbridge.msdk.foundation.entity.CampaignEx r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void a(int r9, java.lang.Object r10) {
                r8 = this;
                java.lang.String r0 = "-999"
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                android.content.Context r1 = r1.getContext()
                if (r1 == 0) goto L19
                android.content.Context r2 = r1.getApplicationContext()
                if (r1 == r2) goto L19
                com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r8.a
                com.mbridge.msdk.video.js.c r2 = r2.getJSCommon()
                r2.a(r1)
            L19:
                android.app.Activity r1 = r8.b
                if (r1 == 0) goto L28
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.js.c r1 = r1.getJSCommon()
                android.app.Activity r2 = r8.b
                r1.a(r2)
            L28:
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                r2 = 1
                com.mbridge.msdk.video.bt.module.MBTempContainer.c(r1, r2)
                r1 = 108(0x6c, float:1.51E-43)
                java.lang.String r3 = ""
                if (r9 == r1) goto L152
                r1 = 113(0x71, float:1.58E-43)
                if (r9 == r1) goto L13c
                r1 = 117(0x75, float:1.64E-43)
                if (r9 == r1) goto L113
                r1 = 126(0x7e, float:1.77E-43)
                if (r9 == r1) goto Lfb
                r1 = 128(0x80, float:1.8E-43)
                if (r9 == r1) goto Lfb
                switch(r9) {
                    case 103: goto Lf4;
                    case 104: goto Lf4;
                    case 105: goto Lc2;
                    case 106: goto L49;
                    default: goto L47;
                }
            L47:
                goto L19e
            L49:
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.bt.module.a.c r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.s(r1)
                if (r1 == 0) goto L6d
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.bt.module.a.c r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.s(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r8.a
                java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBTempContainer.t(r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r8.a
                java.lang.String r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.u(r3)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r8.a
                java.lang.String r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.v(r4)
                r1.a(r2, r3, r4)
                goto L82
            L6d:
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.bt.module.b.h r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r8.a
                java.lang.String r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.w(r3)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r8.a
                java.lang.String r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.x(r4)
                r1.a(r2, r3, r4)
            L82:
                android.app.Activity r1 = r8.b
                if (r1 == 0) goto L19e
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.c
                if (r1 == 0) goto L19e
                android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> Lb1
                r1.<init>()     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r2 = "android.intent.action.VIEW"
                r1.setAction(r2)     // Catch: java.lang.Throwable -> Lb1
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.c     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r2 = r2.getClickURL()     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r0 = com.mbridge.msdk.click.c.a(r2, r0, r0)     // Catch: java.lang.Throwable -> Lb1
                boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb1
                if (r2 != 0) goto Lbb
                android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> Lb1
                r1.setData(r0)     // Catch: java.lang.Throwable -> Lb1
                android.app.Activity r0 = r8.b     // Catch: java.lang.Throwable -> Lb1
                r0.startActivity(r1)     // Catch: java.lang.Throwable -> Lb1
                goto Lbb
            Lb1:
                r0 = move-exception
                java.lang.String r1 = r0.getMessage()
                java.lang.String r2 = "NotifyListener"
                com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
            Lbb:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r0)
                goto L19e
            Lc2:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.a.b r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r0)
                if (r0 != 0) goto Ld4
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.MBTempContainer$c$1 r1 = new com.mbridge.msdk.video.bt.module.MBTempContainer$c$1
                r1.<init>(r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r0, r1)
            Ld4:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.bt.module.a.b r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r1)
                r0.a(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
                if (r10 == 0) goto Lef
                java.lang.String r3 = r10.toString()
            Lef:
                r0.click(r2, r3)
                goto L19e
            Lf4:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r0)
                goto L19e
            Lfb:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.b.h r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r0)
                r1 = 0
                com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r8.a
                java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBTempContainer.C(r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r8.a
                java.lang.String r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.D(r3)
                r0.a(r1, r2, r3)
                goto L19e
            L113:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r0.e
                if (r0 == 0) goto L121
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.module.MBridgeVideoView r0 = r0.e
                r1 = 4
                r0.setVisible(r1)
            L121:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.c(r0, r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.b.h r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.A(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r8.a
                java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBTempContainer.B(r2)
                r0.b(r1, r2)
                goto L19e
            L13c:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.b.h r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r8.a
                java.lang.String r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.z(r3)
                r0.a(r2, r1, r3)
                goto L19e
            L152:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.a.b r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r0)
                if (r0 != 0) goto L164
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.bt.module.MBTempContainer$c$2 r1 = new com.mbridge.msdk.video.bt.module.MBTempContainer$c$2
                r1.<init>(r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r0, r1)
            L164:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r8.a
                com.mbridge.msdk.video.bt.module.a.b r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r1)
                r0.a(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
                com.mbridge.msdk.video.js.a.c$b r1 = new com.mbridge.msdk.video.js.a.c$b
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r8.a
                com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()
                com.mbridge.msdk.video.bt.module.MBTempContainer$e r5 = new com.mbridge.msdk.video.bt.module.MBTempContainer$e
                com.mbridge.msdk.video.bt.module.MBTempContainer r6 = r8.a
                r7 = 0
                r5.<init>(r6, r7)
                r1.<init>(r4, r5)
                r0.a(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r8.a
                com.mbridge.msdk.video.js.c r0 = r0.getJSCommon()
                if (r10 == 0) goto L19b
                java.lang.String r3 = r10.toString()
            L19b:
                r0.click(r2, r3)
            L19e:
                super.a(r9, r10)
                return
        }
    }

    private final class d extends com.mbridge.msdk.video.module.a.a.e {
        final com.mbridge.msdk.video.bt.module.MBTempContainer a;


        private d(com.mbridge.msdk.video.bt.module.MBTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        d(com.mbridge.msdk.video.bt.module.MBTempContainer r1, com.mbridge.msdk.video.bt.module.MBTempContainer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r4, java.lang.Object r5) {
                r3 = this;
                super.a(r4, r5)
                boolean r0 = r5 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> L51
                if (r0 == 0) goto Lc
                java.lang.String r0 = r5.toString()     // Catch: java.lang.Exception -> L51
                goto Lf
            Lc:
                r0 = r5
                java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L51
            Lf:
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r3.a     // Catch: java.lang.Exception -> L51
                boolean r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.E(r1)     // Catch: java.lang.Exception -> L51
                if (r1 == 0) goto L58
                boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L51
                if (r1 != 0) goto L58
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L51
                r1.<init>(r0)     // Catch: java.lang.Exception -> L51
                java.lang.String r0 = "type"
                int r0 = r1.optInt(r0)     // Catch: java.lang.Exception -> L51
                java.lang.String r2 = "complete"
                int r1 = r1.optInt(r2)     // Catch: java.lang.Exception -> L51
                r2 = 2
                if (r0 == r2) goto L44
                r2 = 3
                if (r0 == r2) goto L3c
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L51
                int r2 = com.mbridge.msdk.foundation.same.a.A     // Catch: java.lang.Exception -> L51
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L51
                goto L4b
            L3c:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L51
                int r2 = com.mbridge.msdk.foundation.same.a.B     // Catch: java.lang.Exception -> L51
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L51
                goto L4b
            L44:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L51
                int r2 = com.mbridge.msdk.foundation.same.a.C     // Catch: java.lang.Exception -> L51
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r0, r2)     // Catch: java.lang.Exception -> L51
            L4b:
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a     // Catch: java.lang.Exception -> L51
                com.mbridge.msdk.video.bt.module.MBTempContainer.c(r0, r1)     // Catch: java.lang.Exception -> L51
                goto L58
            L51:
                java.lang.String r0 = "NotifyListener"
                java.lang.String r1 = "PlayableResultListener ERROR"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            L58:
                r0 = 120(0x78, float:1.68E-43)
                if (r4 == r0) goto L138
                r0 = 126(0x7e, float:1.77E-43)
                if (r4 == r0) goto L121
                r0 = 127(0x7f, float:1.78E-43)
                r1 = 1
                if (r4 == r0) goto Lf2
                switch(r4) {
                    case 100: goto Ld4;
                    case 101: goto Lc9;
                    case 102: goto Lc9;
                    case 103: goto La6;
                    case 104: goto L9f;
                    case 105: goto L6a;
                    default: goto L68;
                }
            L68:
                goto L14d
            L6a:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.a.b r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r4)
                if (r4 != 0) goto L7c
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer$d$1 r0 = new com.mbridge.msdk.video.bt.module.MBTempContainer$d$1
                r0.<init>(r3)
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r4, r0)
            L7c:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a
                com.mbridge.msdk.video.bt.module.a.b r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.r(r0)
                r4.a(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()
                if (r5 == 0) goto L98
                java.lang.String r5 = r5.toString()
                goto L9a
            L98:
                java.lang.String r5 = ""
            L9a:
                r4.click(r1, r5)
                goto L14d
            L9f:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r4)
                goto L14d
            La6:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r4, r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r4)
                boolean r4 = r4.isMraid()
                if (r4 == 0) goto Lbe
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r4)
                goto L14d
            Lbe:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()
                r4.e()
                goto L14d
            Lc9:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.js.c r4 = r4.getJSCommon()
                r4.e()
                goto L14d
            Ld4:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.d(r4, r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                android.os.Handler r4 = r4.g
                com.mbridge.msdk.video.bt.module.MBTempContainer r5 = r3.a
                java.lang.Runnable r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.F(r5)
                r0 = 250(0xfa, double:1.235E-321)
                r4.postDelayed(r5, r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r4)
                r4.a()
                goto L14d
            Lf2:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r4, r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r4)
                r4.a()
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r5 = r3.a
                java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.K(r5)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.L(r0)
                r4.b(r5, r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.js.e r4 = r4.getJSContainerModule()
                r5 = 100
                r4.showEndcard(r5)
                goto L14d
            L121:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r4)
                r5 = 0
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.I(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r3.a
                java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.J(r1)
                r4.a(r5, r0, r1)
                goto L14d
            L138:
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r5 = r3.a
                java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.G(r5)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.H(r0)
                r4.b(r5, r0)
            L14d:
                return
        }
    }

    private class e extends com.mbridge.msdk.video.js.a.c.a {
        final com.mbridge.msdk.video.bt.module.MBTempContainer a;

        private e(com.mbridge.msdk.video.bt.module.MBTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        e(com.mbridge.msdk.video.bt.module.MBTempContainer r1, com.mbridge.msdk.video.bt.module.MBTempContainer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a() {
                r1 = this;
                super.a()
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.a
                r0.receiveSuccess()
                return
        }

        @Override
        public final void a(int r2, java.lang.String r3) {
                r1 = this;
                super.a(r2, r3)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r1.a
                r0.defaultLoad(r2, r3)
                return
        }

        @Override
        public final void a(boolean r4) {
                r3 = this;
                super.a(r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r3.a
                java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.S(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r2 = r3.a
                java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBTempContainer.T(r2)
                r0.a(r4, r1, r2)
                return
        }

        @Override
        public final void b() {
                r2 = this;
                super.b()
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r2.a
                android.os.Handler r0 = r0.g
                if (r0 == 0) goto L14
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r2.a
                android.os.Handler r0 = r0.g
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r2.a
                java.lang.Runnable r1 = r1.h
                r0.removeCallbacks(r1)
            L14:
                return
        }

        @Override
        public final void onFinishRedirection(com.mbridge.msdk.out.Campaign r3, java.lang.String r4) {
                r2 = this;
                super.onFinishRedirection(r3, r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r2.a
                r0 = 1
                com.mbridge.msdk.video.bt.module.MBTempContainer.e(r4, r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r2.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.O(r4)
                if (r3 == 0) goto L67
                boolean r4 = r3 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
                if (r4 == 0) goto L67
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: org.json.JSONException -> L63
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r2.a     // Catch: org.json.JSONException -> L63
                com.mbridge.msdk.video.js.i r4 = r4.getJSVideoModule()     // Catch: org.json.JSONException -> L63
                java.lang.String r4 = r4.getCurrentProgress()     // Catch: org.json.JSONException -> L63
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L63
                r0.<init>(r4)     // Catch: org.json.JSONException -> L63
                java.lang.String r4 = "progress"
                java.lang.String r1 = ""
                java.lang.String r4 = r0.optString(r4, r1)     // Catch: org.json.JSONException -> L63
                int r0 = r3.getLinkType()     // Catch: org.json.JSONException -> L63
                r1 = 3
                if (r0 != r1) goto L67
                int r3 = r3.getEndcard_click_result()     // Catch: org.json.JSONException -> L63
                r0 = 2
                if (r3 != r0) goto L67
                java.lang.String r3 = "1.0"
                boolean r3 = r4.equals(r3)     // Catch: org.json.JSONException -> L63
                if (r3 == 0) goto L67
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L63
                android.app.Activity r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.P(r3)     // Catch: org.json.JSONException -> L63
                if (r3 == 0) goto L67
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L63
                boolean r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.Q(r3)     // Catch: org.json.JSONException -> L63
                if (r3 == 0) goto L59
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L63
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r3)     // Catch: org.json.JSONException -> L63
                goto L67
            L59:
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a     // Catch: org.json.JSONException -> L63
                android.app.Activity r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.R(r3)     // Catch: org.json.JSONException -> L63
                r3.finish()     // Catch: org.json.JSONException -> L63
                goto L67
            L63:
                r3 = move-exception
                r3.printStackTrace()
            L67:
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a
                boolean r3 = com.mbridge.msdk.video.bt.module.MBTempContainer.N(r3)
                if (r3 == 0) goto L74
                com.mbridge.msdk.video.bt.module.MBTempContainer r3 = r2.a
                r3.onResume()
            L74:
                return
        }

        @Override
        public final void onRedirectionFailed(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
                r0 = this;
                super.onRedirectionFailed(r1, r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r0.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.O(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r0.a
                r2 = 1
                com.mbridge.msdk.video.bt.module.MBTempContainer.e(r1, r2)
                return
        }

        @Override
        public final void onStartRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
                r0 = this;
                super.onStartRedirection(r1, r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r0.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.M(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r0.a
                boolean r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.N(r1)
                if (r1 == 0) goto L15
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r0.a
                r1.onPause()
            L15:
                return
        }
    }

    private final class f extends com.mbridge.msdk.video.module.a.a.e {
        final com.mbridge.msdk.video.bt.module.MBTempContainer a;

        private f(com.mbridge.msdk.video.bt.module.MBTempContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        f(com.mbridge.msdk.video.bt.module.MBTempContainer r1, com.mbridge.msdk.video.bt.module.MBTempContainer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r7, java.lang.Object r8) {
                r6 = this;
                super.a(r7, r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.a
                boolean r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.e(r0)
                java.lang.String r1 = "NotifyListener"
                if (r0 == 0) goto L3e
                boolean r0 = r8 instanceof java.lang.String     // Catch: java.lang.Exception -> L36
                if (r0 == 0) goto L3e
                r0 = r8
                java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L36
                boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L36
                if (r2 != 0) goto L3e
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L36
                r2.<init>(r0)     // Catch: java.lang.Exception -> L36
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.a     // Catch: java.lang.Exception -> L36
                java.lang.String r3 = "Alert_window_status"
                int r3 = r2.getInt(r3)     // Catch: java.lang.Exception -> L36
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r0, r3)     // Catch: java.lang.Exception -> L36
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.a     // Catch: java.lang.Exception -> L36
                java.lang.String r3 = "complete_info"
                int r2 = r2.getInt(r3)     // Catch: java.lang.Exception -> L36
                com.mbridge.msdk.video.bt.module.MBTempContainer.c(r0, r2)     // Catch: java.lang.Exception -> L36
                goto L3e
            L36:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L3e:
                r0 = 2
                r2 = 0
                if (r7 == r0) goto Lee
                r3 = 121(0x79, float:1.7E-43)
                r4 = 1
                if (r7 == r3) goto Lcd
                r3 = 16
                if (r7 == r3) goto Lc6
                r3 = 17
                if (r7 == r3) goto Lb2
                switch(r7) {
                    case 10: goto L54;
                    case 11: goto Lee;
                    case 12: goto Lee;
                    default: goto L52;
                }
            L52:
                goto L1a9
            L54:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r7, r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r7)
                if (r7 == 0) goto L1a9
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r7)
                boolean r7 = r7.isDynamicView()
                if (r7 == 0) goto L8c
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                boolean r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.f(r7)
                if (r7 == 0) goto L82
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r7)
                boolean r7 = r7.isCampaignIsFiltered()
                if (r7 == 0) goto L95
                goto L8c
            L82:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r7)
                r7.a()
                goto L95
            L8c:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r7)
                r7.a()
            L95:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                android.content.Context r7 = r7.getContext()
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.a
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.h(r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r6.a
                int r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.i(r1)
                com.mbridge.msdk.video.bt.module.b.f.a(r7, r8, r0, r1)
                goto L1a9
            Lb2:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r7, r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.module.MBridgeContainerView r7 = r7.f
                if (r7 == 0) goto L1a9
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.module.MBridgeContainerView r7 = r7.f
                r7.setRewardStatus(r4)
                goto L1a9
            Lc6:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r7)
                goto L1a9
            Lcd:
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.b(r7, r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r7)
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                java.lang.String r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.p(r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer r0 = r6.a
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.q(r0)
                r7.a(r8, r0)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r7, r2)
                goto L1a9
            Lee:
                r3 = 12
                if (r7 != r3) goto L187
                java.lang.String r3 = "Play error but has no message."
                boolean r4 = r8 instanceof java.lang.String     // Catch: java.lang.Throwable -> Lfe
                if (r4 == 0) goto L106
                java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lfe
                r3 = r8
                goto L106
            Lfe:
                r8 = move-exception
                java.lang.String r8 = r8.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            L106:
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                android.content.Context r8 = r8.getContext()
                com.mbridge.msdk.video.bt.module.MBTempContainer r1 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r4 = r6.a
                java.lang.String r4 = com.mbridge.msdk.video.bt.module.MBTempContainer.j(r4)
                com.mbridge.msdk.video.bt.module.MBTempContainer r5 = r6.a
                int r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.i(r5)
                com.mbridge.msdk.video.bt.module.b.f.a(r8, r1, r4, r3, r5)
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                boolean r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.k(r8)
                if (r8 != 0) goto L187
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.videocommon.d.c r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.l(r8)
                int r8 = r8.I()
                if (r8 != 0) goto L14b
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r7)
                java.lang.String r8 = "play error"
                r7.a(r8)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r7, r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.m(r7)
                return
            L14b:
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r8)
                if (r8 == 0) goto L17e
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r8)
                boolean r8 = r8.isDynamicView()
                if (r8 == 0) goto L17e
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                boolean r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.n(r8)
                if (r8 == 0) goto L174
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.d(r8)
                boolean r8 = r8.isCampaignIsFiltered()
                if (r8 == 0) goto L187
                goto L17e
            L174:
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r8)
                r8.a()
                goto L187
            L17e:
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.video.bt.module.b.h r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.g(r8)
                r8.a()
            L187:
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.video.js.i r8 = r8.getJSVideoModule()
                r1 = 3
                r8.videoOperate(r1)
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.mbridge.msdk.video.bt.module.MBTempContainer.a(r8, r2)
                com.mbridge.msdk.video.bt.module.MBTempContainer r8 = r6.a
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r8 = com.mbridge.msdk.video.bt.module.MBTempContainer.o(r8)
                if (r8 == 0) goto L1a9
                if (r7 != r0) goto L1a9
                com.mbridge.msdk.video.bt.module.MBTempContainer r7 = r6.a
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r7 = com.mbridge.msdk.video.bt.module.MBTempContainer.o(r7)
                r7.skipped()
            L1a9:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.video.bt.module.MBTempContainer> r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.video.bt.module.MBTempContainer.y = r0
            return
    }

    public MBTempContainer(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 1
            r2.F = r0
            java.lang.String r0 = ""
            r2.G = r0
            int r1 = com.mbridge.msdk.foundation.same.a.A
            r2.I = r1
            r1 = 0
            r2.L = r1
            r2.R = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.T = r0
            r2.U = r1
            r2.a = r1
            r2.b = r1
            com.mbridge.msdk.video.bt.module.MBTempContainer$a$a r0 = new com.mbridge.msdk.video.bt.module.MBTempContainer$a$a
            r0.<init>()
            r2.c = r0
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            r2.g = r0
            r2.W = r1
            r2.aa = r1
            r2.ab = r1
            com.mbridge.msdk.video.bt.module.MBTempContainer$1 r0 = new com.mbridge.msdk.video.bt.module.MBTempContainer$1
            r0.<init>(r2)
            r2.h = r0
            com.mbridge.msdk.video.bt.module.MBTempContainer$2 r0 = new com.mbridge.msdk.video.bt.module.MBTempContainer$2
            r0.<init>(r2)
            r2.i = r0
            r2.ad = r1
            r2.ae = r1
            r2.af = r1
            r2.ah = r1
            r2.ai = r1
            r2.aj = r1
            r2.ak = r1
            r2.al = r1
            r2.am = r1
            r0 = 0
            r2.ao = r0
            r2.ap = r0
            com.mbridge.msdk.video.bt.module.MBTempContainer$4 r0 = new com.mbridge.msdk.video.bt.module.MBTempContainer$4
            r0.<init>(r2)
            r2.aq = r0
            r2.ar = r1
            r2.init(r3)
            return
    }

    public MBTempContainer(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 1
            r1.F = r3
            java.lang.String r3 = ""
            r1.G = r3
            int r0 = com.mbridge.msdk.foundation.same.a.A
            r1.I = r0
            r0 = 0
            r1.L = r0
            r1.R = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.T = r3
            r1.U = r0
            r1.a = r0
            r1.b = r0
            com.mbridge.msdk.video.bt.module.MBTempContainer$a$a r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer$a$a
            r3.<init>()
            r1.c = r3
            android.os.Handler r3 = new android.os.Handler
            r3.<init>()
            r1.g = r3
            r1.W = r0
            r1.aa = r0
            r1.ab = r0
            com.mbridge.msdk.video.bt.module.MBTempContainer$1 r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer$1
            r3.<init>(r1)
            r1.h = r3
            com.mbridge.msdk.video.bt.module.MBTempContainer$2 r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer$2
            r3.<init>(r1)
            r1.i = r3
            r1.ad = r0
            r1.ae = r0
            r1.af = r0
            r1.ah = r0
            r1.ai = r0
            r1.aj = r0
            r1.ak = r0
            r1.al = r0
            r1.am = r0
            r3 = 0
            r1.ao = r3
            r1.ap = r3
            com.mbridge.msdk.video.bt.module.MBTempContainer$4 r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer$4
            r3.<init>(r1)
            r1.aq = r3
            r1.ar = r0
            r1.init(r2)
            return
    }

    static java.lang.String A(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String B(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String C(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String D(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static boolean E(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.r
            return r0
    }

    static java.lang.Runnable F(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.Runnable r0 = r0.aq
            return r0
    }

    static java.lang.String G(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String H(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String I(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String J(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String K(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String L(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static void M(com.mbridge.msdk.video.bt.module.MBTempContainer r2) {
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.j
            com.mbridge.msdk.video.bt.module.MBTempContainer$8 r1 = new com.mbridge.msdk.video.bt.module.MBTempContainer$8
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    static boolean N(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.ar
            return r0
    }

    static void O(com.mbridge.msdk.video.bt.module.MBTempContainer r2) {
            boolean r0 = r2.isLoadSuccess()
            if (r0 == 0) goto L10
            android.app.Activity r0 = r2.j
            com.mbridge.msdk.video.bt.module.MBTempContainer$9 r1 = new com.mbridge.msdk.video.bt.module.MBTempContainer$9
            r1.<init>(r2)
            r0.runOnUiThread(r1)
        L10:
            return
    }

    static android.app.Activity P(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static boolean Q(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.w
            return r0
    }

    static android.app.Activity R(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static java.lang.String S(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String T(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    private int a(int r6, int r7) {
            r5 = this;
            if (r6 >= 0) goto L3
            return r6
        L3:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.T
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
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.T
            java.lang.Object r4 = r4.get(r2)
            if (r4 == 0) goto L2f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r5.T
            java.lang.Object r4 = r4.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            int r4 = r4.getVideoLength()
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

    static int a(com.mbridge.msdk.video.bt.module.MBTempContainer r0, int r1) {
            r0.W = r1
            return r1
    }

    static android.view.View a(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            android.view.View r0 = r0.ac
            return r0
    }

    static com.mbridge.msdk.video.bt.module.a.b a(com.mbridge.msdk.video.bt.module.MBTempContainer r0, com.mbridge.msdk.video.bt.module.a.b r1) {
            r0.K = r1
            return r1
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            return r0
    }

    private void a(int r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Throwable -> La7
            java.lang.String r1 = "2000037"
            r0.o(r1)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r1.<init>()     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = "code="
            r1.append(r2)     // Catch: java.lang.Throwable -> La7
            r1.append(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = ",desc="
            r1.append(r4)     // Catch: java.lang.Throwable -> La7
            r1.append(r5)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> La7
            r0.j(r4)     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = ""
            if (r4 == 0) goto L3f
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L3f
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> La7
            goto L40
        L3f:
            r4 = r5
        L40:
            r0.i(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r3.k     // Catch: java.lang.Throwable -> La7
            r0.m(r4)     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L52
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = r4.getId()     // Catch: java.lang.Throwable -> La7
        L52:
            r0.n(r5)     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L6e
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.getRequestId()     // Catch: java.lang.Throwable -> La7
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La7
            if (r4 != 0) goto L6e
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.getRequestId()     // Catch: java.lang.Throwable -> La7
            r0.k(r4)     // Catch: java.lang.Throwable -> La7
        L6e:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L87
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.getRequestIdNotice()     // Catch: java.lang.Throwable -> La7
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La7
            if (r4 != 0) goto L87
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.A     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.getRequestIdNotice()     // Catch: java.lang.Throwable -> La7
            r0.l(r4)     // Catch: java.lang.Throwable -> La7
        L87:
            android.content.Context r4 = r3.getContext()     // Catch: java.lang.Throwable -> La7
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> La7
            r0.c(r4)     // Catch: java.lang.Throwable -> La7
            android.content.Context r5 = r3.getContext()     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.a(r5, r4)     // Catch: java.lang.Throwable -> La7
            r0.r(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = com.mbridge.msdk.foundation.entity.p.e(r0)     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = r3.k     // Catch: java.lang.Throwable -> La7
            com.mbridge.msdk.video.module.b.b.a(r4, r5)     // Catch: java.lang.Throwable -> La7
            goto Lb1
        La7:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r0 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r5, r0, r4)
        Lb1:
            return
    }

    static boolean a(com.mbridge.msdk.video.bt.module.MBTempContainer r0, boolean r1) {
            r0.aj = r1
            return r1
    }

    static int b(com.mbridge.msdk.video.bt.module.MBTempContainer r0, int r1) {
            r0.I = r1
            return r1
    }

    static android.app.Activity b(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static boolean b(com.mbridge.msdk.video.bt.module.MBTempContainer r0, boolean r1) {
            r0.ae = r1
            return r1
    }

    private int c() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.A
            com.mbridge.msdk.video.js.a.j r0 = r1.b(r0)
            if (r0 == 0) goto Ld
            int r0 = r0.k()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    static int c(com.mbridge.msdk.video.bt.module.MBTempContainer r0, int r1) {
            r0.J = r1
            return r1
    }

    static android.app.Activity c(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static boolean c(com.mbridge.msdk.video.bt.module.MBTempContainer r0, boolean r1) {
            r0.ak = r1
            return r1
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx d(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.A
            return r0
    }

    private boolean d() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.A
            com.mbridge.msdk.video.js.a.j r0 = r1.b(r0)
            if (r0 == 0) goto Ld
            boolean r0 = r0.n()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    static boolean d(com.mbridge.msdk.video.bt.module.MBTempContainer r0, boolean r1) {
            r0.al = r1
            return r1
    }

    private boolean e() {
            r2 = this;
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            r1 = 0
            if (r0 == 0) goto L1c
            boolean r0 = r0.isShowingAlertView()
            if (r0 != 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            boolean r0 = r0.isInstallDialogShowing()
            if (r0 != 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            boolean r0 = r0.isRewardPopViewShowing()
            if (r0 == 0) goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    static boolean e(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.r
            return r0
    }

    static boolean e(com.mbridge.msdk.video.bt.module.MBTempContainer r0, boolean r1) {
            r0.ai = r1
            return r1
    }

    private void f() {
            r7 = this;
            com.mbridge.msdk.foundation.same.report.d r0 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r1 = r7.getContext()
            r0.<init>(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.A
            if (r1 == 0) goto L3e
            java.lang.String r1 = r1.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.A
            java.lang.String r2 = r2.getRequestIdNotice()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.A
            java.lang.String r3 = r3.getId()
            java.lang.String r4 = r7.k
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.A
            java.lang.String r5 = r5.getId()
            java.lang.String r5 = com.mbridge.msdk.mbjscommon.mraid.c.a(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r7.A
            boolean r6 = r6.isBidCampaign()
            r0.a(r1, r2, r3, r4, r5, r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.A
            java.lang.String r0 = r0.getId()
            com.mbridge.msdk.mbjscommon.mraid.c.b(r0)
            r0 = 1
            r7.ag = r0
        L3e:
            return
    }

    static boolean f(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.w
            return r0
    }

    static com.mbridge.msdk.video.bt.module.b.h g(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.mbridge.msdk.video.bt.module.b.h r0 = r0.C
            return r0
    }

    private void g() {
            r4 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r4.ao
            if (r0 == 0) goto L5a
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r4.f     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER     // Catch: java.lang.Exception -> L50
            r3 = 0
            r0.addFriendlyObstruction(r1, r2, r3)     // Catch: java.lang.Exception -> L50
            android.view.View r0 = r4.ac     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L19
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r4.ao     // Catch: java.lang.Exception -> L50
            android.view.View r1 = r4.ac     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER     // Catch: java.lang.Exception -> L50
            r0.addFriendlyObstruction(r1, r2, r3)     // Catch: java.lang.Exception -> L50
        L19:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.d     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L26
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r4.ao     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.d     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r2 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER     // Catch: java.lang.Exception -> L50
            r0.addFriendlyObstruction(r1, r2, r3)     // Catch: java.lang.Exception -> L50
        L26:
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r4.ao     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.AdEvents r0 = com.iab.omid.library.mmadbridge.adsession.AdEvents.createAdEvents(r0)     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r4.ao     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = com.iab.omid.library.mmadbridge.adsession.media.MediaEvents.createMediaEvents(r1)     // Catch: java.lang.Exception -> L50
            r4.ap = r1     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r4.ao     // Catch: java.lang.Exception -> L50
            r1.start()     // Catch: java.lang.Exception -> L50
            r1 = 1
            com.iab.omid.library.mmadbridge.adsession.media.Position r2 = com.iab.omid.library.mmadbridge.adsession.media.Position.STANDALONE     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.media.VastProperties r1 = com.iab.omid.library.mmadbridge.adsession.media.VastProperties.createVastPropertiesForNonSkippableMedia(r1, r2)     // Catch: java.lang.Exception -> L50
            r0.loaded(r1)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r4.e     // Catch: java.lang.Exception -> L50
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = r4.ap     // Catch: java.lang.Exception -> L50
            r1.setVideoEvents(r2)     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L5a
            r0.impressionOccurred()     // Catch: java.lang.Exception -> L50
            goto L5a
        L50:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "omsdk"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L5a:
            return
    }

    private int h() {
            r4 = this;
            r0 = 5
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L12
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L30
            r2.c()     // Catch: java.lang.Throwable -> L30
        L12:
            if (r1 == 0) goto L19
            long r0 = r1.g()     // Catch: java.lang.Throwable -> L30
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L30
        L19:
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Throwable -> L30
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            r2.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "MBridgeBaseView buffetTimeout:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L30
            r2.append(r0)     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }

    static java.lang.String h(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static int i(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            int r0 = r0.F
            return r0
    }

    static java.lang.String j(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static boolean k(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.aj
            return r0
    }

    static com.mbridge.msdk.videocommon.d.c l(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.mbridge.msdk.videocommon.d.c r0 = r0.m
            return r0
    }

    static void m(com.mbridge.msdk.video.bt.module.MBTempContainer r4) {
            com.mbridge.msdk.video.bt.module.a.c r0 = r4.D     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L2e
            boolean r0 = r4.r     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L22
            int r0 = r4.t     // Catch: java.lang.Exception -> L38
            int r1 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> L38
            if (r0 == r1) goto L14
            int r0 = r4.t     // Catch: java.lang.Exception -> L38
            int r1 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L38
            if (r0 != r1) goto L22
        L14:
            com.mbridge.msdk.video.bt.module.a.c r0 = r4.D     // Catch: java.lang.Exception -> L38
            int r1 = r4.J     // Catch: java.lang.Exception -> L38
            r2 = 1
            if (r1 != r2) goto L1c
            goto L1d
        L1c:
            r2 = 0
        L1d:
            int r1 = r4.I     // Catch: java.lang.Exception -> L38
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L38
        L22:
            com.mbridge.msdk.video.bt.module.a.c r0 = r4.D     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.G     // Catch: java.lang.Exception -> L38
            boolean r2 = r4.ae     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.videocommon.b.d r3 = r4.o     // Catch: java.lang.Exception -> L38
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L38
            goto L41
        L2e:
            android.app.Activity r0 = r4.j     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L41
            android.app.Activity r0 = r4.j     // Catch: java.lang.Exception -> L38
            r0.finish()     // Catch: java.lang.Exception -> L38
            goto L41
        L38:
            android.app.Activity r0 = r4.j
            if (r0 == 0) goto L41
            android.app.Activity r4 = r4.j
            r4.finish()
        L41:
            return
    }

    static boolean n(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            boolean r0 = r0.w
            return r0
    }

    static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents o(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r0.ap
            return r0
    }

    static java.lang.String p(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String q(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static com.mbridge.msdk.video.bt.module.a.b r(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.mbridge.msdk.video.bt.module.a.b r0 = r0.K
            return r0
    }

    static com.mbridge.msdk.video.bt.module.a.c s(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            com.mbridge.msdk.video.bt.module.a.c r0 = r0.D
            return r0
    }

    static java.lang.String t(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.G
            return r0
    }

    static java.lang.String u(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String v(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String w(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String x(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String y(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String z(com.mbridge.msdk.video.bt.module.MBTempContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    @Override
    protected final void a(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.video.bt.module.b.h r0 = r1.C
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            super.a(r2)
            return
    }

    public boolean canBackPress() {
            r1 = this;
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r1.f
            if (r0 == 0) goto Ld
            boolean r0 = r0.canBackPress()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public void defaultLoad(int r21, java.lang.String r22) {
            r20 = this;
            r0 = r20
            r20.superDefaultLoad(r21, r22)
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "hybrid load error ,start defaultLoad,desc:"
            r2.append(r3)
            r3 = r22
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            boolean r1 = r20.isLoadSuccess()
            if (r1 == 0) goto L16c
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getPlayable_ads_without_video()
            r2 = 2
            r4 = 0
            r5 = -2
            if (r1 != r2) goto L9a
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.A
            r1.setCampaign(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r0.T
            r1.addOrderViewData(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            java.lang.String r2 = r0.k
            r1.setUnitID(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getCbd()
            if (r1 <= r5) goto L52
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getCbd()
            goto L58
        L52:
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.p()
        L58:
            com.mbridge.msdk.video.module.MBridgeContainerView r2 = r0.f
            r2.setCloseDelayTime(r1)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r2 = r2.j()
            r1.setPlayCloseBtnTm(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.module.a.a.g r2 = new com.mbridge.msdk.video.module.a.a.g
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r0.A
            com.mbridge.msdk.videocommon.download.a r7 = r0.B
            com.mbridge.msdk.videocommon.b.d r8 = r0.o
            java.lang.String r9 = r20.b()
            java.lang.String r10 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$d r11 = new com.mbridge.msdk.video.bt.module.MBTempContainer$d
            r11.<init>(r0, r4)
            com.mbridge.msdk.videocommon.d.c r3 = r0.m
            int r12 = r3.C()
            boolean r13 = r0.w
            r5 = r2
            r5.<init>(r6, r7, r8, r9, r10, r11, r12, r13)
            r1.setNotifyListener(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.js.factory.b r2 = r0.H
            r1.preLoadData(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            r1.showPlayableView()
            goto L168
        L9a:
            r20.a(r21, r22)
            android.view.View r1 = r0.ac
            r2 = 8
            r1.setVisibility(r2)
            r20.loadModuleDatas()
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.h()
            int r2 = r20.c()
            if (r2 == 0) goto Lb5
            r14 = r2
            goto Lb6
        Lb5:
            r14 = r1
        Lb6:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            if (r1 == 0) goto Lce
            boolean r1 = r1.isDynamicView()
            if (r1 == 0) goto Lce
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.video.bt.module.MBTempContainer$c r2 = new com.mbridge.msdk.video.bt.module.MBTempContainer$c
            android.app.Activity r3 = r0.j
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r0.A
            r2.<init>(r0, r3, r6)
            r1.setContainerViewOnNotifyListener(r2)
        Lce:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            if (r1 == 0) goto Ldf
            int r1 = r1.getVst()
            if (r1 <= r5) goto Ldf
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getVst()
            goto Le5
        Ldf:
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.g()
        Le5:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.A
            int r2 = r2.getDynamicTempCode()
            r3 = 5
            if (r2 != r3) goto Lfc
            int r2 = r0.F
            r3 = 1
            if (r2 <= r3) goto Lfc
            int r1 = r0.a(r1, r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.A
            r2.setVst(r1)
        Lfc:
            r15 = r1
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            r1.setVideoSkipTime(r15)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.video.module.a.a.l r2 = new com.mbridge.msdk.video.module.a.a.l
            com.mbridge.msdk.video.module.MBridgeContainerView r8 = r0.f
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r0.A
            com.mbridge.msdk.videocommon.b.d r10 = r0.o
            com.mbridge.msdk.videocommon.download.a r11 = r0.B
            java.lang.String r12 = r20.b()
            java.lang.String r13 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$f r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer$f
            r3.<init>(r0, r4)
            com.mbridge.msdk.videocommon.d.c r4 = r0.m
            int r17 = r4.C()
            boolean r4 = r0.w
            com.mbridge.msdk.videocommon.d.c r5 = r0.m
            int r19 = r5.I()
            r6 = r2
            r7 = r1
            r16 = r3
            r18 = r4
            r6.<init>(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
            r1.setNotifyListener(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            r1.defaultShow()
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.module.a.a.a r13 = new com.mbridge.msdk.video.module.a.a.a
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r0.e
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r0.A
            com.mbridge.msdk.videocommon.b.d r6 = r0.o
            com.mbridge.msdk.videocommon.download.a r7 = r0.B
            java.lang.String r8 = r20.b()
            java.lang.String r9 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$c r10 = new com.mbridge.msdk.video.bt.module.MBTempContainer$c
            android.app.Activity r2 = r0.j
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r0.A
            r10.<init>(r0, r2, r4)
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r11 = r2.C()
            boolean r12 = r0.w
            r2 = r13
            r4 = r1
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            r1.setNotifyListener(r13)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            r1.defaultShow()
        L168:
            r20.g()
            goto L178
        L16c:
            r20.a(r21, r22)
            android.app.Activity r1 = r0.j
            if (r1 == 0) goto L178
            android.app.Activity r1 = r0.j
            r1.finish()
        L178:
            return
    }

    public int findID(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public int findLayout(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            java.lang.String r1 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public com.mbridge.msdk.video.module.MBridgeContainerView findMBridgeContainerView() {
            r1 = this;
            java.lang.String r0 = "mbridge_video_templete_container"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = (com.mbridge.msdk.video.module.MBridgeContainerView) r0
            return r0
    }

    public com.mbridge.msdk.video.module.MBridgeVideoView findMBridgeVideoView() {
            r1 = this;
            java.lang.String r0 = "mbridge_video_templete_videoview"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = (com.mbridge.msdk.video.module.MBridgeVideoView) r0
            return r0
    }

    public com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView findWindVaneWebView() {
            r4 = this;
            java.lang.String r0 = "_"
            boolean r1 = r4.w     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto L61
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = "当前大模板"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.A     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto La8
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r1.getRewardTemplateMode()     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto La8
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = "当前大模板，存在播放模板"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)     // Catch: java.lang.Exception -> La0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La0
            r1.<init>()     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = r4.k     // Catch: java.lang.Exception -> La0
            r1.append(r2)     // Catch: java.lang.Exception -> La0
            r1.append(r0)     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.A     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> La0
            r1.append(r2)     // Catch: java.lang.Exception -> La0
            r1.append(r0)     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.A     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> La0
            r1.append(r2)     // Catch: java.lang.Exception -> La0
            r1.append(r0)     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> La0
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> La0
            r1.append(r0)     // Catch: java.lang.Exception -> La0
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.videocommon.a$a r0 = com.mbridge.msdk.videocommon.a.a(r0)     // Catch: java.lang.Exception -> La0
            if (r0 == 0) goto La8
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a()     // Catch: java.lang.Exception -> La0
            return r0
        L61:
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Exception -> La0
            java.lang.String r1 = "当前非大模板"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> La0
            boolean r0 = r4.r     // Catch: java.lang.Exception -> La0
            r1 = 287(0x11f, float:4.02E-43)
            r2 = 94
            if (r0 == 0) goto L77
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.videocommon.a$a r0 = com.mbridge.msdk.videocommon.a.a(r1, r0)     // Catch: java.lang.Exception -> La0
            goto L7d
        L77:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.videocommon.a$a r0 = com.mbridge.msdk.videocommon.a.a(r2, r0)     // Catch: java.lang.Exception -> La0
        L7d:
            if (r0 == 0) goto La8
            boolean r3 = r0.c()     // Catch: java.lang.Exception -> La0
            if (r3 == 0) goto La8
            boolean r3 = r4.r     // Catch: java.lang.Exception -> La0
            if (r3 == 0) goto L8f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.videocommon.a.b(r1, r2)     // Catch: java.lang.Exception -> La0
            goto L94
        L8f:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.A     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.videocommon.a.b(r2, r1)     // Catch: java.lang.Exception -> La0
        L94:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a()     // Catch: java.lang.Exception -> La0
            boolean r1 = r4.ah     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto L9f
            r0.setWebViewTransparent()     // Catch: java.lang.Exception -> La0
        L9f:
            return r0
        La0:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto La8
            r0.printStackTrace()
        La8:
            r0 = 0
            return r0
    }

    public com.mbridge.msdk.foundation.entity.CampaignEx getCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.A
            return r0
    }

    public java.lang.String getInstanceId() {
            r1 = this;
            java.lang.String r0 = r1.G
            return r0
    }

    public int getLayoutID() {
            r1 = this;
            boolean r0 = r1.ah
            if (r0 == 0) goto L7
            java.lang.String r0 = "mbridge_reward_activity_video_templete_transparent"
            goto L9
        L7:
            java.lang.String r0 = "mbridge_reward_activity_video_templete"
        L9:
            int r0 = r1.findLayout(r0)
            return r0
    }

    public void init(android.content.Context r1) {
            r0 = this;
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r0.V = r1
            return
    }

    public boolean initViews() {
            r1 = this;
            java.lang.String r0 = "mbridge_video_templete_progressbar"
            int r0 = r1.findID(r0)
            android.view.View r0 = r1.findViewById(r0)
            r1.ac = r0
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public boolean isLoadSuccess() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public void loadModuleDatas() {
            r19 = this;
            r0 = r19
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            com.mbridge.msdk.video.js.a.j r1 = r0.b(r1)
            if (r1 == 0) goto Lf
            int r1 = r1.l()
            goto L10
        Lf:
            r1 = 0
        L10:
            if (r1 == 0) goto L14
            r0.q = r1
        L14:
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.h()
            int r2 = r19.c()
            if (r2 == 0) goto L22
            r10 = r2
            goto L23
        L22:
            r10 = r1
        L23:
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            int r2 = r0.q
            r1.setSoundState(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.A
            r1.setCampaign(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.videocommon.download.a r2 = r0.B
            java.lang.String r2 = r2.n()
            r1.setPlayURL(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            r2 = -2
            if (r1 == 0) goto L4e
            int r1 = r1.getVst()
            if (r1 <= r2) goto L4e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getVst()
            goto L54
        L4e:
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.g()
        L54:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.A
            int r3 = r3.getDynamicTempCode()
            r4 = 5
            r15 = 1
            if (r3 != r4) goto L6b
            int r3 = r0.F
            if (r3 <= r15) goto L6b
            int r1 = r0.a(r1, r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.A
            r3.setVst(r1)
        L6b:
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r0.e
            r3.setVideoSkipTime(r1)
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r0.e
            com.mbridge.msdk.videocommon.d.c r4 = r0.m
            int r4 = r4.k()
            r3.setCloseAlert(r4)
            com.mbridge.msdk.video.module.MBridgeVideoView r3 = r0.e
            int r4 = r19.h()
            r3.setBufferTimeout(r4)
            com.mbridge.msdk.video.module.MBridgeVideoView r14 = r0.e
            com.mbridge.msdk.video.module.a.a.m r13 = new com.mbridge.msdk.video.module.a.a.m
            com.mbridge.msdk.video.js.factory.b r4 = r0.H
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r0.A
            com.mbridge.msdk.videocommon.b.d r6 = r0.o
            com.mbridge.msdk.videocommon.download.a r7 = r0.B
            java.lang.String r8 = r19.b()
            java.lang.String r9 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$f r12 = new com.mbridge.msdk.video.bt.module.MBTempContainer$f
            r11 = 0
            r12.<init>(r0, r11)
            com.mbridge.msdk.videocommon.d.c r3 = r0.m
            int r16 = r3.C()
            boolean r3 = r0.w
            com.mbridge.msdk.videocommon.d.c r11 = r0.m
            int r17 = r11.I()
            r18 = r3
            r3 = r13
            r11 = r1
            r2 = r13
            r13 = r16
            r16 = r1
            r1 = r14
            r14 = r18
            r18 = r15
            r15 = r17
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            r1.setNotifyListener(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            boolean r2 = r0.ah
            r1.setShowingTransparent(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r0.ao
            r1.setAdSession(r2)
            boolean r1 = r0.r
            if (r1 == 0) goto Lff
            int r1 = r0.t
            int r2 = com.mbridge.msdk.foundation.same.a.w
            if (r1 == r2) goto Lde
            int r1 = r0.t
            int r2 = com.mbridge.msdk.foundation.same.a.x
            if (r1 != r2) goto Lff
        Lde:
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            int r2 = r0.t
            int r3 = r0.u
            int r4 = r0.v
            r1.setIVRewardEnable(r2, r3, r4)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.video.js.c r2 = r19.getJSCommon()
            if (r2 == 0) goto Lfa
            com.mbridge.msdk.video.js.c r2 = r19.getJSCommon()
            int r15 = r2.i()
            goto Lfc
        Lfa:
            r15 = r18
        Lfc:
            r1.setDialogRole(r15)
        Lff:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r0.A
            r1.setCampaign(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r0.T
            r1.addOrderViewData(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            java.lang.String r2 = r0.k
            r1.setUnitID(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getCbd()
            r2 = -2
            if (r1 <= r2) goto L124
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getCbd()
            goto L12a
        L124:
            com.mbridge.msdk.videocommon.d.c r1 = r0.m
            int r1 = r1.p()
        L12a:
            com.mbridge.msdk.video.module.MBridgeContainerView r2 = r0.f
            r2.setCloseDelayTime(r1)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r2 = r2.j()
            r1.setPlayCloseBtnTm(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r2 = r2.i()
            r1.setVideoInteractiveType(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r2 = r2.q()
            r1.setEndscreenType(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            r2 = r16
            r1.setVideoSkipTime(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            boolean r2 = r0.ah
            r1.setShowingTransparent(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.js.factory.b r2 = r0.H
            r1.setJSFactory(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.A
            int r1 = r1.getPlayable_ads_without_video()
            r2 = 2
            if (r1 != r2) goto L1a0
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.module.a.a.g r11 = new com.mbridge.msdk.video.module.a.a.g
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.A
            com.mbridge.msdk.videocommon.download.a r4 = r0.B
            com.mbridge.msdk.videocommon.b.d r5 = r0.o
            java.lang.String r6 = r19.b()
            java.lang.String r7 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$d r8 = new com.mbridge.msdk.video.bt.module.MBTempContainer$d
            r2 = 0
            r8.<init>(r0, r2)
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r9 = r2.C()
            boolean r10 = r0.w
            r2 = r11
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            r1.setNotifyListener(r11)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.js.factory.b r2 = r0.H
            r1.preLoadData(r2)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            r1.showPlayableView()
            goto L1d8
        L1a0:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.module.a.a.b r12 = new com.mbridge.msdk.video.module.a.a.b
            com.mbridge.msdk.video.js.factory.b r3 = r0.H
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r0.A
            com.mbridge.msdk.videocommon.b.d r5 = r0.o
            com.mbridge.msdk.videocommon.download.a r6 = r0.B
            java.lang.String r7 = r19.b()
            java.lang.String r8 = r0.k
            com.mbridge.msdk.video.bt.module.MBTempContainer$c r9 = new com.mbridge.msdk.video.bt.module.MBTempContainer$c
            android.app.Activity r2 = r0.j
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r0.A
            r9.<init>(r0, r2, r10)
            com.mbridge.msdk.videocommon.d.c r2 = r0.m
            int r10 = r2.C()
            boolean r11 = r0.w
            r2 = r12
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r1.setNotifyListener(r12)
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            com.mbridge.msdk.video.js.factory.b r2 = r0.H
            r1.preLoadData(r2)
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r0.e
            com.mbridge.msdk.video.js.factory.b r2 = r0.H
            r1.preLoadData(r2)
        L1d8:
            boolean r1 = r0.ah
            if (r1 == 0) goto L1e1
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r0.f
            r1.setMBridgeClickMiniCardViewTransparent()
        L1e1:
            return
    }

    public void notifyEvent(java.lang.String r5) {
            r4 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.d
            if (r0 == 0) goto L16
            java.lang.String r1 = r4.G
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            byte[] r1 = r1.getBytes()
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r2.a(r0, r5, r1)
        L16:
            return
    }

    public void onBackPressed() {
            r2 = this;
            boolean r0 = r2.ah
            if (r0 == 0) goto Lc
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            if (r0 == 0) goto Lc
            r0.notifyVideoClose()
            return
        Lc:
            boolean r0 = r2.aj
            if (r0 == 0) goto L28
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            if (r0 == 0) goto L28
            boolean r0 = r0.isMiniCardShowing()
            if (r0 == 0) goto L22
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r2.f
            if (r0 == 0) goto L21
            r0.onMiniEndcardBackPress()
        L21:
            return
        L22:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            r0.onBackPress()
            return
        L28:
            boolean r0 = r2.al
            if (r0 == 0) goto L34
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r2.f
            if (r0 == 0) goto L34
            r0.onPlayableBackPress()
            return
        L34:
            boolean r0 = r2.ak
            if (r0 == 0) goto L3f
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r2.f
            if (r0 == 0) goto L3f
            r0.onEndcardBackPress()
        L3f:
            com.mbridge.msdk.video.js.c r0 = r2.getJSCommon()
            boolean r0 = r0.c()
            if (r0 == 0) goto L62
            com.mbridge.msdk.video.js.e r0 = r2.getJSContainerModule()
            if (r0 == 0) goto L5a
            com.mbridge.msdk.video.js.e r0 = r2.getJSContainerModule()
            boolean r0 = r0.miniCardShowing()
            if (r0 == 0) goto L5a
            goto L84
        L5a:
            com.mbridge.msdk.video.js.a r0 = r2.getActivityProxy()
            r0.g()
            goto L84
        L62:
            boolean r0 = r2.canBackPress()
            if (r0 == 0) goto L7d
            android.app.Activity r0 = r2.j
            if (r0 == 0) goto L84
            boolean r0 = r2.w
            if (r0 != 0) goto L84
            boolean r0 = r2.am
            if (r0 != 0) goto L84
            r0 = 1
            r2.am = r0
            android.app.Activity r0 = r2.j
            r0.onBackPressed()
            goto L84
        L7d:
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r1 = "onBackPressed can't excute"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L84:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    public void onCreate() {
            r15 = this;
            java.lang.String r0 = "mbridge_video_templete_webview_parent"
            java.lang.String r1 = "id"
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "onCreate isBigOffer: "
            r3.append(r4)
            boolean r4 = r15.w
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)
            com.mbridge.msdk.videocommon.d.c r2 = r15.m
            if (r2 != 0) goto L36
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            java.lang.String r4 = r15.k
            boolean r5 = r15.r
            com.mbridge.msdk.videocommon.d.c r2 = r2.a(r3, r4, r5)
            r15.m = r2
        L36:
            r2 = 0
            r3 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Exception -> L76
            if (r4 != 0) goto L3d
            goto L7e
        L3d:
            com.mbridge.msdk.scheme.applet.AppletModelManager r4 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r15.A     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.scheme.applet.AppletsModel r4 = r4.get(r5)     // Catch: java.lang.Exception -> L48
            goto L51
        L48:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L76
            if (r5 == 0) goto L50
            r4.printStackTrace()     // Catch: java.lang.Exception -> L76
        L50:
            r4 = r2
        L51:
            if (r4 == 0) goto L7e
            boolean r5 = r4.can(r3)     // Catch: java.lang.Exception -> L68
            if (r5 != 0) goto L5a
            goto L7e
        L5a:
            r4.setUserClick(r3)     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.video.bt.module.MBTempContainer$b r5 = new com.mbridge.msdk.video.bt.module.MBTempContainer$b     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r15.A     // Catch: java.lang.Exception -> L68
            r5.<init>(r6)     // Catch: java.lang.Exception -> L68
            r4.requestWxAppletsScheme(r3, r5)     // Catch: java.lang.Exception -> L68
            goto L7e
        L68:
            r5 = move-exception
            if (r4 == 0) goto L6e
            r4.clearRequestState()     // Catch: java.lang.Exception -> L76
        L6e:
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L76
            if (r4 == 0) goto L7e
            r5.printStackTrace()     // Catch: java.lang.Exception -> L76
            goto L7e
        L76:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L7e
            r4.printStackTrace()
        L7e:
            r15.am = r3
            boolean r4 = r15.w     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto Lb7
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto Lab
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            boolean r4 = r4.isDynamicView()     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto Lab
            com.mbridge.msdk.video.bt.module.b.b r4 = new com.mbridge.msdk.video.bt.module.b.b     // Catch: java.lang.Throwable -> L436
            android.content.Context r6 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            boolean r7 = r15.r     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.d.c r8 = r15.m     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r15.A     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.b.h r10 = r15.C     // Catch: java.lang.Throwable -> L436
            java.lang.String r11 = r15.b()     // Catch: java.lang.Throwable -> L436
            java.lang.String r12 = r15.k     // Catch: java.lang.Throwable -> L436
            r5 = r4
            r5.<init>(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L436
            r15.C = r4     // Catch: java.lang.Throwable -> L436
            goto Ld1
        Lab:
            com.mbridge.msdk.video.bt.module.b.d r4 = new com.mbridge.msdk.video.bt.module.b.d     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.a.c r5 = r15.D     // Catch: java.lang.Throwable -> L436
            java.lang.String r6 = r15.G     // Catch: java.lang.Throwable -> L436
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L436
            r15.C = r4     // Catch: java.lang.Throwable -> L436
            goto Ld1
        Lb7:
            com.mbridge.msdk.video.bt.module.b.b r12 = new com.mbridge.msdk.video.bt.module.b.b     // Catch: java.lang.Throwable -> L436
            android.content.Context r5 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            boolean r6 = r15.r     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.d.c r7 = r15.m     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r15.A     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.b.h r9 = r15.C     // Catch: java.lang.Throwable -> L436
            java.lang.String r10 = r15.b()     // Catch: java.lang.Throwable -> L436
            java.lang.String r11 = r15.k     // Catch: java.lang.Throwable -> L436
            r4 = r12
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L436
            r15.C = r12     // Catch: java.lang.Throwable -> L436
        Ld1:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L108
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            boolean r4 = r4.isActiveOm()     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L108
            android.content.Context r5 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            r6 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            java.lang.String r7 = r4.getOmid()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            java.lang.String r8 = r4.getRequestId()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            java.lang.String r9 = r4.getId()     // Catch: java.lang.Throwable -> L436
            java.lang.String r10 = r15.k     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.download.a r4 = r15.B     // Catch: java.lang.Throwable -> L436
            java.lang.String r11 = r4.n()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r15.A     // Catch: java.lang.Throwable -> L436
            java.lang.String r12 = r4.getRequestIdNotice()     // Catch: java.lang.Throwable -> L436
            com.iab.omid.library.mmadbridge.adsession.AdSession r4 = com.mbridge.msdk.a.b.a(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L436
            r15.ao = r4     // Catch: java.lang.Throwable -> L436
        L108:
            com.mbridge.msdk.video.bt.module.b.e r4 = new com.mbridge.msdk.video.bt.module.b.e     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.b.h r5 = r15.C     // Catch: java.lang.Throwable -> L436
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L436
            r15.registerErrorListener(r4)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.d.c r4 = r15.m     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r15.A     // Catch: java.lang.Throwable -> L436
            r15.a(r4, r5)     // Catch: java.lang.Throwable -> L436
            r15.setShowingTransparent()     // Catch: java.lang.Throwable -> L436
            int r4 = r15.getLayoutID()     // Catch: java.lang.Throwable -> L436
            if (r4 > 0) goto L129
            java.lang.String r0 = "layoutID not found"
            r15.a(r0)     // Catch: java.lang.Throwable -> L436
            goto L44b
        L129:
            android.view.LayoutInflater r5 = r15.V     // Catch: java.lang.Throwable -> L436
            android.view.View r4 = r5.inflate(r4, r2)     // Catch: java.lang.Throwable -> L436
            r15.z = r4     // Catch: java.lang.Throwable -> L436
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L436
            r6 = -1
            r5.<init>(r6, r6)     // Catch: java.lang.Throwable -> L436
            r15.addView(r4, r5)     // Catch: java.lang.Throwable -> L436
            boolean r4 = r15.a     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L141
            r15.setMatchParent()     // Catch: java.lang.Throwable -> L436
        L141:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r15.findWindVaneWebView()     // Catch: java.lang.Throwable -> L436
            r15.d = r4     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.findMBridgeVideoView()     // Catch: java.lang.Throwable -> L436
            r15.e = r4     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r15.A     // Catch: java.lang.Throwable -> L436
            r4.setVideoLayout(r5)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.e     // Catch: java.lang.Throwable -> L436
            boolean r5 = r15.r     // Catch: java.lang.Throwable -> L436
            r4.setIsIV(r5)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.e     // Catch: java.lang.Throwable -> L436
            java.lang.String r5 = r15.k     // Catch: java.lang.Throwable -> L436
            r4.setUnitId(r5)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.e     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.dynview.e.a r5 = r15.E     // Catch: java.lang.Throwable -> L436
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r15.T     // Catch: java.lang.Throwable -> L436
            int r8 = r15.F     // Catch: java.lang.Throwable -> L436
            int r9 = r15.U     // Catch: java.lang.Throwable -> L436
            r4.setCamPlayOrderCallback(r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L436
            boolean r4 = r15.w     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L17e
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.e     // Catch: java.lang.Throwable -> L436
            int r5 = r15.N     // Catch: java.lang.Throwable -> L436
            int r7 = r15.O     // Catch: java.lang.Throwable -> L436
            int r8 = r15.P     // Catch: java.lang.Throwable -> L436
            int r9 = r15.Q     // Catch: java.lang.Throwable -> L436
            r4.setNotchPadding(r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L436
        L17e:
            com.mbridge.msdk.video.module.MBridgeContainerView r4 = r15.findMBridgeContainerView()     // Catch: java.lang.Throwable -> L436
            r15.f = r4     // Catch: java.lang.Throwable -> L436
            boolean r4 = r15.w     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L197
            com.mbridge.msdk.video.module.MBridgeContainerView r7 = r15.f     // Catch: java.lang.Throwable -> L436
            int r8 = r15.M     // Catch: java.lang.Throwable -> L436
            int r9 = r15.N     // Catch: java.lang.Throwable -> L436
            int r10 = r15.O     // Catch: java.lang.Throwable -> L436
            int r11 = r15.P     // Catch: java.lang.Throwable -> L436
            int r12 = r15.Q     // Catch: java.lang.Throwable -> L436
            r7.setNotchPadding(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L436
        L197:
            com.mbridge.msdk.video.module.MBridgeVideoView r4 = r15.e     // Catch: java.lang.Throwable -> L436
            r5 = 1
            if (r4 == 0) goto L1a8
            com.mbridge.msdk.video.module.MBridgeContainerView r4 = r15.f     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L1a8
            boolean r4 = r15.initViews()     // Catch: java.lang.Throwable -> L436
            if (r4 == 0) goto L1a8
            r4 = r5
            goto L1a9
        L1a8:
            r4 = r3
        L1a9:
            if (r4 != 0) goto L1bd
            com.mbridge.msdk.video.bt.module.MBTempContainer$a r0 = r15.c     // Catch: java.lang.Throwable -> L436
            java.lang.String r1 = "not found View IDS"
            r0.a(r1)     // Catch: java.lang.Throwable -> L436
            android.app.Activity r0 = r15.j     // Catch: java.lang.Throwable -> L436
            if (r0 == 0) goto L44b
            android.app.Activity r0 = r15.j     // Catch: java.lang.Throwable -> L436
            r0.finish()     // Catch: java.lang.Throwable -> L436
            goto L44b
        L1bd:
            r15.b = r5     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r15.d     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.factory.b r14 = new com.mbridge.msdk.video.js.factory.b     // Catch: java.lang.Throwable -> L436
            android.app.Activity r8 = r15.j     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeVideoView r10 = r15.e     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.module.MBridgeContainerView r11 = r15.f     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = r15.A     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.MBTempContainer$e r13 = new com.mbridge.msdk.video.bt.module.MBTempContainer$e     // Catch: java.lang.Throwable -> L436
            r13.<init>(r15, r2)     // Catch: java.lang.Throwable -> L436
            r7 = r14
            r9 = r4
            r7.<init>(r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L436
            r15.H = r14     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r15.A     // Catch: java.lang.Throwable -> L436
            if (r7 == 0) goto L1ef
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r15.A     // Catch: java.lang.Throwable -> L436
            int r7 = r7.getDynamicTempCode()     // Catch: java.lang.Throwable -> L436
            r8 = 5
            if (r7 != r8) goto L1ef
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r15.T     // Catch: java.lang.Throwable -> L436
            if (r7 == 0) goto L1ef
            com.mbridge.msdk.video.js.factory.b r7 = r15.H     // Catch: java.lang.Throwable -> L436
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r15.T     // Catch: java.lang.Throwable -> L436
            r7.a(r8)     // Catch: java.lang.Throwable -> L436
        L1ef:
            com.mbridge.msdk.video.js.factory.b r7 = r15.H     // Catch: java.lang.Throwable -> L436
            r15.registerJsFactory(r7)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.b.b r7 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L436
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L436
            r8.<init>()     // Catch: java.lang.Throwable -> L436
            java.lang.String r9 = r15.k     // Catch: java.lang.Throwable -> L436
            r8.append(r9)     // Catch: java.lang.Throwable -> L436
            java.lang.String r9 = "_"
            r8.append(r9)     // Catch: java.lang.Throwable -> L436
            r8.append(r5)     // Catch: java.lang.Throwable -> L436
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.MBTempContainer$6 r9 = new com.mbridge.msdk.video.bt.module.MBTempContainer$6     // Catch: java.lang.Throwable -> L436
            r9.<init>(r15)     // Catch: java.lang.Throwable -> L436
            r7.a(r8, r9)     // Catch: java.lang.Throwable -> L436
            java.lang.String r7 = "preload template webview is null or load error"
            if (r4 == 0) goto L42b
            android.view.View r8 = r15.z     // Catch: java.lang.Throwable -> L436
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            int r9 = com.mbridge.msdk.foundation.tools.s.a(r9, r0, r1)     // Catch: java.lang.Throwable -> L436
            android.view.View r8 = r8.findViewById(r9)     // Catch: java.lang.Throwable -> L436
            android.view.ViewGroup r8 = (android.view.ViewGroup) r8     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.factory.b r9 = r15.H     // Catch: java.lang.Throwable -> L436
            r4.setApiManagerJSFactory(r9)     // Catch: java.lang.Throwable -> L436
            android.view.ViewParent r9 = r4.getParent()     // Catch: java.lang.Throwable -> L436
            if (r9 == 0) goto L23a
            r15.defaultLoad(r3, r7)     // Catch: java.lang.Throwable -> L436
            goto L44b
        L23a:
            java.lang.Object r7 = r4.getObject()     // Catch: java.lang.Throwable -> L436
            boolean r7 = r7 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L436
            if (r7 == 0) goto L3f5
            com.mbridge.msdk.video.js.factory.b r7 = r15.H     // Catch: java.lang.Throwable -> L436
            java.lang.Object r9 = r4.getObject()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.a.j r9 = (com.mbridge.msdk.video.js.a.j) r9     // Catch: java.lang.Throwable -> L436
            r7.a(r9)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r7 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            int r9 = r15.q     // Catch: java.lang.Throwable -> L436
            r7.a(r9)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r7 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            java.lang.String r9 = r15.k     // Catch: java.lang.Throwable -> L436
            r7.a(r9)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r7 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.d.c r9 = r15.m     // Catch: java.lang.Throwable -> L436
            r7.a(r9)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r7 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.MBTempContainer$e r9 = new com.mbridge.msdk.video.bt.module.MBTempContainer$e     // Catch: java.lang.Throwable -> L436
            r9.<init>(r15, r2)     // Catch: java.lang.Throwable -> L436
            r7.a(r9)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r15.A     // Catch: java.lang.Throwable -> L436
            if (r2 == 0) goto L2a5
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r15.A     // Catch: java.lang.Throwable -> L436
            boolean r2 = r2.isMraid()     // Catch: java.lang.Throwable -> L436
            if (r2 != 0) goto L288
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r15.A     // Catch: java.lang.Throwable -> L436
            boolean r2 = r2.isActiveOm()     // Catch: java.lang.Throwable -> L436
            if (r2 == 0) goto L2a5
        L288:
            com.mbridge.msdk.mbjscommon.mraid.d r2 = new com.mbridge.msdk.mbjscommon.mraid.d     // Catch: java.lang.Throwable -> L436
            android.content.Context r7 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L436
            r15.an = r2     // Catch: java.lang.Throwable -> L436
            r2.c()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.mraid.d r2 = r15.an     // Catch: java.lang.Throwable -> L436
            r2.a()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.mraid.d r2 = r15.an     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.MBTempContainer$7 r7 = new com.mbridge.msdk.video.bt.module.MBTempContainer$7     // Catch: java.lang.Throwable -> L436
            r7.<init>(r15)     // Catch: java.lang.Throwable -> L436
            r2.a(r7)     // Catch: java.lang.Throwable -> L436
        L2a5:
            java.lang.Object r2 = r4.getObject()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.a.j r2 = (com.mbridge.msdk.video.js.a.j) r2     // Catch: java.lang.Throwable -> L436
            int r2 = r2.p()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.e r7 = r15.getJSContainerModule()     // Catch: java.lang.Throwable -> L436
            r7.readyStatus(r2)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r15.d     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            if (r2 == 0) goto L3d4
            android.content.res.Resources r2 = r15.getResources()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r2 = r2.orientation     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            boolean r7 = r15.d()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            if (r7 == 0) goto L2f3
            android.content.Context r7 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r7 = com.mbridge.msdk.foundation.tools.ae.i(r7)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r9 = com.mbridge.msdk.foundation.tools.ae.j(r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.content.Context r10 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            boolean r10 = com.mbridge.msdk.foundation.tools.ae.a(r10)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            if (r10 == 0) goto L303
            android.content.Context r10 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r10 = com.mbridge.msdk.foundation.tools.ae.k(r10)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r11 = 2
            if (r2 != r11) goto L2f1
            int r7 = r7 + r10
            goto L303
        L2f1:
            int r9 = r9 + r10
            goto L303
        L2f3:
            android.content.Context r7 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r7 = com.mbridge.msdk.foundation.tools.ae.h(r7)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r9 = com.mbridge.msdk.foundation.tools.ae.g(r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
        L303:
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r15.A     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx$c r10 = r10.getRewardTemplateMode()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r10 = r10.c()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r15.A     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            int r11 = r15.c(r11)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            if (r11 != r5) goto L316
            r10 = r2
        L316:
            com.mbridge.msdk.video.js.f r11 = r15.getJSNotifyProxy()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r11.a(r2, r10, r7, r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.<init>()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.s     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            float r9 = com.mbridge.msdk.foundation.tools.ae.d(r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            double r9 = (double) r9     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.put(r7, r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.videocommon.b.d r7 = r15.o     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            if (r7 == 0) goto L384
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r7.<init>()     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r9 = "name"
            com.mbridge.msdk.videocommon.b.d r10 = r15.o     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r10 = r10.a()     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r7.put(r9, r10)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r9 = "amount"
            com.mbridge.msdk.videocommon.b.d r10 = r15.o     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            int r10 = r10.b()     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r7.put(r9, r10)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r9 = r15.p     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r7.put(r1, r9)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r9 = "userId"
            java.lang.String r10 = r15.n     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r2.put(r9, r10)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r9 = "reward"
            r2.put(r9, r7)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r7 = "playVideoMute"
            int r9 = r15.q     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r2.put(r7, r9)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            java.lang.String r7 = "extra"
            java.lang.String r9 = r15.S     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            r2.put(r7, r9)     // Catch: java.lang.Exception -> L36f org.json.JSONException -> L37a java.lang.Throwable -> L436
            goto L384
        L36f:
            r7 = move-exception
            java.lang.String r9 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.tools.z.a(r9, r7)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            goto L384
        L37a:
            r7 = move-exception
            java.lang.String r9 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.foundation.tools.z.a(r9, r7)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
        L384:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.f r7 = r15.getJSNotifyProxy()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r7.a(r2)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r15.d     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.String r9 = "oncutoutfetched"
            java.lang.String r10 = r15.R     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.String r3 = android.util.Base64.encodeToString(r10, r3)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.a(r7, r9, r3)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r2 = r15.getJSCommon()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.b(r5)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.a.b r2 = r15.K     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            if (r2 != 0) goto L3b6
            com.mbridge.msdk.video.bt.module.MBTempContainer$3 r2 = new com.mbridge.msdk.video.bt.module.MBTempContainer$3     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.<init>(r15)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r15.K = r2     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
        L3b6:
            com.mbridge.msdk.video.js.c r2 = r15.getJSCommon()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            com.mbridge.msdk.video.bt.module.a.b r3 = r15.K     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r2.a(r3)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r15.loadModuleDatas()     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            android.os.Handler r2 = r15.g     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            java.lang.Runnable r3 = r15.h     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            r9 = 2000(0x7d0, double:9.88E-321)
            r2.postDelayed(r3, r9)     // Catch: java.lang.Exception -> L3cc java.lang.Throwable -> L436
            goto L3d4
        L3cc:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L436
            if (r3 == 0) goto L3d4
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L436
        L3d4:
            java.lang.Object r2 = r4.getObject()     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.a.j r2 = (com.mbridge.msdk.video.js.a.j) r2     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c$a r2 = r2.m     // Catch: java.lang.Throwable -> L436
            r2.a()     // Catch: java.lang.Throwable -> L436
            boolean r2 = r15.w     // Catch: java.lang.Throwable -> L436
            if (r2 == 0) goto L3f5
            com.mbridge.msdk.video.js.c r2 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            int r3 = r15.aa     // Catch: java.lang.Throwable -> L436
            r2.f(r3)     // Catch: java.lang.Throwable -> L436
            com.mbridge.msdk.video.js.c r2 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            int r3 = r15.ab     // Catch: java.lang.Throwable -> L436
            r2.e(r3)     // Catch: java.lang.Throwable -> L436
        L3f5:
            com.mbridge.msdk.video.js.c r2 = r15.getJSCommon()     // Catch: java.lang.Throwable -> L436
            int r2 = r2.b()     // Catch: java.lang.Throwable -> L436
            if (r2 != r5) goto L41f
            android.view.View r2 = r15.z     // Catch: java.lang.Throwable -> L436
            android.content.Context r3 = r15.getContext()     // Catch: java.lang.Throwable -> L436
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r3, r0, r1)     // Catch: java.lang.Throwable -> L436
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> L436
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L436
            if (r0 == 0) goto L41f
            android.view.View r1 = r15.z     // Catch: java.lang.Throwable -> L436
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L436
            r1.removeView(r0)     // Catch: java.lang.Throwable -> L436
            android.view.View r1 = r15.z     // Catch: java.lang.Throwable -> L436
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L436
            r1.addView(r0, r5)     // Catch: java.lang.Throwable -> L436
        L41f:
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L436
            r0.<init>(r6, r6)     // Catch: java.lang.Throwable -> L436
            r8.addView(r4, r0)     // Catch: java.lang.Throwable -> L436
            r15.g()     // Catch: java.lang.Throwable -> L436
            goto L44b
        L42b:
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Throwable -> L436
            java.lang.String r1 = "template webview is null"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L436
            r15.defaultLoad(r3, r7)     // Catch: java.lang.Throwable -> L436
            goto L44b
        L436:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onCreate error"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r15.a(r0)
        L44b:
            return
    }

    @Override
    public void onDestroy() {
            r6 = this;
            boolean r0 = r6.L
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r6.L = r0
            super.onDestroy()
            com.mbridge.msdk.video.bt.module.a.b r1 = r6.K     // Catch: java.lang.Throwable -> L163
            r2 = 0
            if (r1 == 0) goto L12
            r6.K = r2     // Catch: java.lang.Throwable -> L163
        L12:
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.e     // Catch: java.lang.Throwable -> L163
            if (r1 == 0) goto L1b
            com.mbridge.msdk.video.module.MBridgeVideoView r1 = r6.e     // Catch: java.lang.Throwable -> L163
            r1.releasePlayer()     // Catch: java.lang.Throwable -> L163
        L1b:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r6.d     // Catch: java.lang.Throwable -> L163
            if (r1 == 0) goto L36
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r6.d     // Catch: java.lang.Throwable -> L163
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Throwable -> L163
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L163
            if (r1 == 0) goto L2c
            r1.removeAllViews()     // Catch: java.lang.Throwable -> L163
        L2c:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r6.d     // Catch: java.lang.Throwable -> L163
            r1.clearWebView()     // Catch: java.lang.Throwable -> L163
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r6.d     // Catch: java.lang.Throwable -> L163
            r1.release()     // Catch: java.lang.Throwable -> L163
        L36:
            com.mbridge.msdk.video.bt.module.a.c r1 = r6.D     // Catch: java.lang.Throwable -> L163
            if (r1 == 0) goto L3c
            r6.D = r2     // Catch: java.lang.Throwable -> L163
        L3c:
            android.os.Handler r1 = r6.g     // Catch: java.lang.Throwable -> L163
            java.lang.Runnable r3 = r6.h     // Catch: java.lang.Throwable -> L163
            r1.removeCallbacks(r3)     // Catch: java.lang.Throwable -> L163
            android.os.Handler r1 = r6.g     // Catch: java.lang.Throwable -> L163
            java.lang.Runnable r3 = r6.i     // Catch: java.lang.Throwable -> L163
            r1.removeCallbacks(r3)     // Catch: java.lang.Throwable -> L163
            com.mbridge.msdk.video.js.c r1 = r6.getJSCommon()     // Catch: java.lang.Throwable -> L163
            r1.f()     // Catch: java.lang.Throwable -> L163
            boolean r1 = r6.r     // Catch: java.lang.Throwable -> L163
            if (r1 == 0) goto L5e
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L163
            java.lang.String r3 = r6.k     // Catch: java.lang.Throwable -> L163
            r1.f(r3)     // Catch: java.lang.Throwable -> L163
        L5e:
            boolean r1 = r6.ad     // Catch: java.lang.Throwable -> L163
            if (r1 != 0) goto L112
            r6.ad = r0     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.A     // Catch: java.lang.Throwable -> L108
            if (r1 == 0) goto L73
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.A     // Catch: java.lang.Throwable -> L108
            int r1 = r1.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> L108
            r3 = 2
            if (r1 != r3) goto L73
            r6.ae = r0     // Catch: java.lang.Throwable -> L108
        L73:
            com.mbridge.msdk.video.bt.module.b.h r1 = r6.C     // Catch: java.lang.Throwable -> L108
            if (r1 == 0) goto La7
            boolean r1 = r6.r     // Catch: java.lang.Throwable -> L108
            r3 = 0
            if (r1 == 0) goto L95
            int r1 = r6.t     // Catch: java.lang.Throwable -> L108
            int r4 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Throwable -> L108
            if (r1 == r4) goto L88
            int r1 = r6.t     // Catch: java.lang.Throwable -> L108
            int r4 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Throwable -> L108
            if (r1 != r4) goto L95
        L88:
            com.mbridge.msdk.video.bt.module.b.h r1 = r6.C     // Catch: java.lang.Throwable -> L108
            int r4 = r6.J     // Catch: java.lang.Throwable -> L108
            if (r4 != r0) goto L8f
            goto L90
        L8f:
            r0 = r3
        L90:
            int r4 = r6.I     // Catch: java.lang.Throwable -> L108
            r1.a(r0, r4)     // Catch: java.lang.Throwable -> L108
        L95:
            boolean r0 = r6.ae     // Catch: java.lang.Throwable -> L108
            if (r0 != 0) goto L9e
            com.mbridge.msdk.videocommon.b.d r0 = r6.o     // Catch: java.lang.Throwable -> L108
            r0.a(r3)     // Catch: java.lang.Throwable -> L108
        L9e:
            com.mbridge.msdk.video.bt.module.b.h r0 = r6.C     // Catch: java.lang.Throwable -> L108
            boolean r1 = r6.ae     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.videocommon.b.d r3 = r6.o     // Catch: java.lang.Throwable -> L108
            r0.a(r1, r3)     // Catch: java.lang.Throwable -> L108
        La7:
            android.os.Handler r0 = r6.g     // Catch: java.lang.Throwable -> L108
            java.lang.Runnable r1 = r6.aq     // Catch: java.lang.Throwable -> L108
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L108
            boolean r0 = r6.r     // Catch: java.lang.Throwable -> L108
            if (r0 != 0) goto Lb6
            boolean r0 = r6.w     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Lc2
        Lb6:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.A     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Le7
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.A     // Catch: java.lang.Throwable -> L108
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Le7
        Lc2:
            boolean r0 = r6.ae     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Le7
            com.mbridge.msdk.video.bt.module.b.h r0 = r6.C     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Ld3
            com.mbridge.msdk.video.bt.module.b.h r0 = r6.C     // Catch: java.lang.Throwable -> L108
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Ld3
            goto Le7
        Ld3:
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Throwable -> L108
            java.lang.String r1 = "sendToServerRewardInfo"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.A     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.videocommon.b.d r1 = r6.o     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = r6.k     // Catch: java.lang.Throwable -> L108
            java.lang.String r4 = r6.n     // Catch: java.lang.Throwable -> L108
            java.lang.String r5 = r6.S     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.video.module.b.b.a(r0, r1, r3, r4, r5)     // Catch: java.lang.Throwable -> L108
        Le7:
            boolean r0 = r6.w     // Catch: java.lang.Throwable -> L108
            if (r0 != 0) goto Lfe
            boolean r0 = r6.r     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Lf7
            r0 = 287(0x11f, float:4.02E-43)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.A     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> L108
            goto Lfe
        Lf7:
            r0 = 94
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.A     // Catch: java.lang.Throwable -> L108
            com.mbridge.msdk.videocommon.a.b(r0, r1)     // Catch: java.lang.Throwable -> L108
        Lfe:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r6.f     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto L112
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r6.f     // Catch: java.lang.Throwable -> L108
            r0.release()     // Catch: java.lang.Throwable -> L108
            goto L112
        L108:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y     // Catch: java.lang.Throwable -> L163
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L163
            com.mbridge.msdk.foundation.tools.z.c(r1, r3, r0)     // Catch: java.lang.Throwable -> L163
        L112:
            boolean r0 = r6.ag     // Catch: java.lang.Throwable -> L163
            if (r0 != 0) goto L119
            r6.f()     // Catch: java.lang.Throwable -> L163
        L119:
            com.mbridge.msdk.mbjscommon.mraid.d r0 = r6.an     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L122
            com.mbridge.msdk.mbjscommon.mraid.d r0 = r6.an     // Catch: java.lang.Throwable -> L163
            r0.d()     // Catch: java.lang.Throwable -> L163
        L122:
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r6.ao     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L132
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r6.ao     // Catch: java.lang.Throwable -> L163
            r0.removeAllFriendlyObstructions()     // Catch: java.lang.Throwable -> L163
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r6.ao     // Catch: java.lang.Throwable -> L163
            r0.finish()     // Catch: java.lang.Throwable -> L163
            r6.ao = r2     // Catch: java.lang.Throwable -> L163
        L132:
            boolean r0 = r6.w     // Catch: java.lang.Throwable -> L163
            if (r0 != 0) goto L152
            boolean r0 = r6.isLoadSuccess()     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L149
            android.os.Handler r0 = r6.g     // Catch: java.lang.Throwable -> L163
            com.mbridge.msdk.video.bt.module.MBTempContainer$5 r1 = new com.mbridge.msdk.video.bt.module.MBTempContainer$5     // Catch: java.lang.Throwable -> L163
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L163
            r2 = 100
            r0.postDelayed(r1, r2)     // Catch: java.lang.Throwable -> L163
            goto L152
        L149:
            android.app.Activity r0 = r6.j     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L152
            android.app.Activity r0 = r6.j     // Catch: java.lang.Throwable -> L163
            r0.finish()     // Catch: java.lang.Throwable -> L163
        L152:
            boolean r0 = r6.ag     // Catch: java.lang.Throwable -> L163
            if (r0 != 0) goto L159
            r6.f()     // Catch: java.lang.Throwable -> L163
        L159:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r6.G     // Catch: java.lang.Throwable -> L163
            r0.g(r1)     // Catch: java.lang.Throwable -> L163
            goto L16d
        L163:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L16d:
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
            r3 = this;
            super.onPause()
            r0 = 1
            r3.af = r0
            com.mbridge.msdk.video.js.i r0 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            r0.videoOperate(r1)     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r3.f     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L17
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r3.f     // Catch: java.lang.Throwable -> L21
            r0.setOnPause()     // Catch: java.lang.Throwable -> L21
        L17:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L2b
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L21
            r0.onActivityPause()     // Catch: java.lang.Throwable -> L21
            goto L2b
        L21:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L2b:
            return
    }

    @Override
    public void onResume() {
            r3 = this;
            super.onResume()
            int r0 = r3.W
            r1 = -3
            if (r0 != r1) goto Lb
            java.lang.Runnable r0 = r3.h
            goto L12
        Lb:
            r1 = -4
            if (r0 != r1) goto L11
            java.lang.Runnable r0 = r3.i
            goto L12
        L11:
            r0 = 0
        L12:
            r1 = 0
            if (r0 == 0) goto L1a
            r0.run()
            r3.W = r1
        L1a:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L35
            boolean r0 = r3.e()     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L35
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L80
            boolean r0 = r0.isMiniCardShowing()     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L35
            boolean r0 = com.mbridge.msdk.foundation.b.b.c     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L35
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L80
            r0.setCover(r1)     // Catch: java.lang.Throwable -> L80
        L35:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L3e
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r3.e     // Catch: java.lang.Throwable -> L80
            r0.onActivityResume()     // Catch: java.lang.Throwable -> L80
        L3e:
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r3.f     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L47
            com.mbridge.msdk.video.module.MBridgeContainerView r0 = r3.f     // Catch: java.lang.Throwable -> L80
            r0.setOnResume()     // Catch: java.lang.Throwable -> L80
        L47:
            boolean r0 = r3.af     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L5d
            boolean r0 = r3.e()     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L5d
            boolean r0 = com.mbridge.msdk.foundation.b.b.c     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L5d
            com.mbridge.msdk.video.js.i r0 = r3.getJSVideoModule()     // Catch: java.lang.Throwable -> L80
            r1 = 1
            r0.videoOperate(r1)     // Catch: java.lang.Throwable -> L80
        L5d:
            android.app.Activity r0 = r3.j     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L6e
            android.app.Activity r0 = r3.j     // Catch: java.lang.Throwable -> L80
            android.view.Window r0 = r0.getWindow()     // Catch: java.lang.Throwable -> L80
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L80
            com.mbridge.msdk.foundation.tools.ae.a(r0)     // Catch: java.lang.Throwable -> L80
        L6e:
            boolean r0 = r3.ah     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L8a
            boolean r0 = r3.ai     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L8a
            android.app.Activity r0 = r3.j     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L8a
            android.app.Activity r0 = r3.j     // Catch: java.lang.Throwable -> L80
            r0.finish()     // Catch: java.lang.Throwable -> L80
            goto L8a
        L80:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L8a:
            return
    }

    @Override
    public void onStop() {
            r2 = this;
            super.onStop()
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            if (r0 == 0) goto L10
            r1 = 1
            r0.setCover(r1)
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r2.e
            r0.onActivityStop()
        L10:
            return
    }

    public void preload() {
            r0 = this;
            return
    }

    public void receiveSuccess() {
            r4 = this;
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r1 = "receiveSuccess ,start hybrid"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.i
            r0.removeCallbacks(r1)
            android.os.Handler r0 = r4.g
            java.lang.Runnable r1 = r4.aq
            r2 = 250(0xfa, double:1.235E-321)
            r0.postDelayed(r1, r2)
            return
    }

    public void registerErrorListener(com.mbridge.msdk.video.bt.module.MBTempContainer.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setCamPlayOrderCallback(com.mbridge.msdk.video.dynview.e.a r1, int r2) {
            r0 = this;
            r0.E = r1
            r0.F = r2
            return
    }

    public void setCampOrderViewData(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1, int r2) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.T = r1
        L4:
            r0.U = r2
            return
    }

    public void setCampaign(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            r3.A = r4
            if (r4 == 0) goto L4b
            java.lang.String r0 = r4.getCampaignUnitId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = r3.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r0 = r3.k
            r4.setCampaignUnitId(r0)
        L1b:
            com.mbridge.msdk.scheme.applet.AppletModelManager r0 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()
            com.mbridge.msdk.scheme.applet.AppletsModel r0 = r0.get(r4)
            if (r0 == 0) goto L2b
            boolean r0 = r0.isSupportWxScheme()
            r3.ar = r0
        L2b:
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.getCampaignUnitId()
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            r2 = 1
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1, r4)
        L4b:
            return
    }

    public void setCampaignDownLoadTask(com.mbridge.msdk.videocommon.download.a r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public void setCampaignExpired(boolean r3) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.A     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L5c
            r0 = 0
            if (r3 == 0) goto L2f
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r1 = 1
            r3.setSpareOfferFlag(r1)     // Catch: java.lang.Exception -> L52
            boolean r3 = r2.s     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L17
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r3.setCbt(r0)     // Catch: java.lang.Exception -> L52
            goto L5c
        L17:
            com.mbridge.msdk.videocommon.d.c r3 = r2.m     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L5c
            com.mbridge.msdk.videocommon.d.c r3 = r2.m     // Catch: java.lang.Exception -> L52
            int r3 = r3.C()     // Catch: java.lang.Exception -> L52
            if (r3 != r1) goto L29
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r3.setCbt(r1)     // Catch: java.lang.Exception -> L52
            goto L5c
        L29:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r3.setCbt(r0)     // Catch: java.lang.Exception -> L52
            goto L5c
        L2f:
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r3.setSpareOfferFlag(r0)     // Catch: java.lang.Exception -> L52
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            boolean r3 = r3.isBidCampaign()     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L42
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.A     // Catch: java.lang.Exception -> L52
            r3.setCbt(r0)     // Catch: java.lang.Exception -> L52
            goto L5c
        L42:
            com.mbridge.msdk.videocommon.d.c r3 = r2.m     // Catch: java.lang.Exception -> L52
            if (r3 == 0) goto L5c
            com.mbridge.msdk.videocommon.d.c r3 = r2.m     // Catch: java.lang.Exception -> L52
            int r3 = r3.d()     // Catch: java.lang.Exception -> L52
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.A     // Catch: java.lang.Exception -> L52
            r0.setCbt(r3)     // Catch: java.lang.Exception -> L52
            goto L5c
        L52:
            r3 = move-exception
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L5c:
            return
    }

    public void setDeveloperExtraData(java.lang.String r1) {
            r0 = this;
            r0.S = r1
            return
    }

    public void setH5Cbp(int r1) {
            r0 = this;
            r0.ab = r1
            return
    }

    public void setInstanceId(java.lang.String r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public void setJSFactory(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setMBridgeTempCallback(com.mbridge.msdk.video.bt.module.a.c r1) {
            r0 = this;
            r0.D = r1
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
            goto L14
        L10:
            r0.height = r1
            r0.width = r1
        L14:
            return
    }

    public void setMediaPlayerUrl(java.lang.String r1) {
            r0 = this;
            return
    }

    public void setNotchPadding(int r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r7.M = r8
            r7.N = r9
            r7.O = r10
            r7.P = r11
            r7.Q = r12
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.m.a(r8, r9, r10, r11, r12)
            r7.R = r0
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.video.js.c r0 = r7.getJSCommon()
            if (r0 == 0) goto L4e
            java.lang.String r0 = r7.R
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4e
            com.mbridge.msdk.video.js.c r0 = r7.getJSCommon()
            java.lang.String r1 = r7.R
            r0.b(r1)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.d
            if (r0 == 0) goto L4e
            java.lang.String r0 = r7.R
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4e
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r7.d
            java.lang.String r2 = r7.R
            byte[] r2 = r2.getBytes()
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)
            java.lang.String r3 = "oncutoutfetched"
            r0.a(r1, r3, r2)
        L4e:
            com.mbridge.msdk.video.module.MBridgeVideoView r0 = r7.e
            if (r0 == 0) goto L55
            r0.setNotchPadding(r9, r10, r11, r12)
        L55:
            com.mbridge.msdk.video.module.MBridgeContainerView r1 = r7.f
            if (r1 == 0) goto L61
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.setNotchPadding(r2, r3, r4, r5, r6)
        L61:
            return
    }

    public void setShowRewardListener(com.mbridge.msdk.video.bt.module.b.h r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public void setShowingTransparent() {
            r3 = this;
            boolean r0 = r3.d()
            r3.ah = r0
            if (r0 != 0) goto L20
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "mbridge_reward_theme"
            java.lang.String r2 = "style"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            r1 = 1
            if (r0 <= r1) goto L20
            android.app.Activity r1 = r3.j
            if (r1 == 0) goto L20
            android.app.Activity r1 = r3.j
            r1.setTheme(r0)
        L20:
            return
    }

    public void setWebViewFront(int r1) {
            r0 = this;
            r0.aa = r1
            return
    }

    public void superDefaultLoad(int r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBTempContainer.y
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "receiveError:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ",descroption:"
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            android.os.Handler r4 = r3.g
            java.lang.Runnable r5 = r3.h
            r4.removeCallbacks(r5)
            android.os.Handler r4 = r3.g
            java.lang.Runnable r5 = r3.i
            r4.removeCallbacks(r5)
            com.mbridge.msdk.video.bt.module.MBTempContainer$a r4 = r3.c
            r5 = 1
            r4.a(r5)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r3.d
            if (r4 == 0) goto L3b
            r5 = 8
            r4.setVisibility(r5)
        L3b:
            return
    }
}
