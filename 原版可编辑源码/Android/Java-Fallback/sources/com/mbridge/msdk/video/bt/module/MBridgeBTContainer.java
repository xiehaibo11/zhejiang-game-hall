package com.mbridge.msdk.video.bt.module;

public class MBridgeBTContainer extends com.mbridge.msdk.video.js.container.AbstractJSContainer implements com.mbridge.msdk.video.js.b {
    private static final java.lang.String a = null;
    private java.lang.String A;
    private boolean B;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> C;
    private java.util.List<com.mbridge.msdk.videocommon.download.a> D;
    private com.mbridge.msdk.video.bt.module.a.a E;
    private com.mbridge.msdk.video.bt.module.b.h F;
    private com.mbridge.msdk.video.bt.module.b.h G;
    private com.mbridge.msdk.video.bt.module.a.c H;
    private java.lang.String I;
    private java.lang.String J;
    private boolean K;
    private int L;
    private boolean M;
    private int N;
    private java.lang.String O;
    private com.mbridge.msdk.video.dynview.e.d P;
    private int b;
    private int c;
    private android.widget.FrameLayout d;
    private com.mbridge.msdk.video.bt.module.MBridgeBTLayout e;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView f;
    private android.view.LayoutInflater g;
    private android.content.Context h;
    private android.widget.TextView i;
    private boolean y;
    private boolean z;




    private static final class a implements java.lang.Runnable {
        private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a;
        private android.content.Context b;
        private java.lang.String c;
        private java.lang.String d;

        public a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1, android.content.Context r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.a
                if (r0 == 0) goto L3b
                int r0 = r0.size()
                if (r0 <= 0) goto L3b
                android.content.Context r0 = r4.b     // Catch: java.lang.Exception -> L32
                com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L32
                com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)     // Catch: java.lang.Exception -> L32
                java.lang.String r1 = r4.c     // Catch: java.lang.Exception -> L32
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r4.a     // Catch: java.lang.Exception -> L32
                r0.a(r1, r2)     // Catch: java.lang.Exception -> L32
                com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Exception -> L32
                java.lang.String r1 = r4.d     // Catch: java.lang.Exception -> L32
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r4.a     // Catch: java.lang.Exception -> L32
                r3 = 0
                java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L32
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L32
                int r2 = r2.getAdType()     // Catch: java.lang.Exception -> L32
                r0.c(r1, r2)     // Catch: java.lang.Exception -> L32
                goto L3b
            L32:
                java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a()
                java.lang.String r1 = "remove campaign failed"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            L3b:
                return
        }
    }

    private static final class b implements java.lang.Runnable {
        private final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a;
        private final java.lang.String b;

        public b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r11 = this;
                java.lang.String r0 = ""
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r11.a
                if (r1 == 0) goto La7
                int r1 = r1.size()
                if (r1 <= 0) goto La7
                java.lang.String r2 = r11.b     // Catch: java.lang.Exception -> La7
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r11.a     // Catch: java.lang.Exception -> La7
                r3 = 0
                int r4 = r1.size()     // Catch: java.lang.Exception -> L16
                goto L17
            L16:
                r4 = r3
            L17:
                boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> La7
                if (r5 != 0) goto La7
                if (r1 == 0) goto La7
                if (r4 != 0) goto L23
                goto La7
            L23:
                r5 = 0
                java.lang.Object r6 = r1.get(r3)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L9c
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L9c
                java.lang.String r7 = r6.getRequestId()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L9c
                java.lang.String r8 = r6.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L9c
                boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L9c
                if (r9 != 0) goto L3f
                java.lang.String r9 = "cltp"
                java.lang.String r8 = com.mbridge.msdk.foundation.tools.ak.a(r8, r9)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L9c
                goto L40
            L3f:
                r8 = r0
            L40:
                java.lang.String r6 = r6.getMof_template_url()     // Catch: java.lang.Throwable -> L85 java.lang.Exception -> L9c
                boolean r9 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L9c
                if (r9 != 0) goto L50
                java.lang.String r9 = "xt"
                java.lang.String r0 = com.mbridge.msdk.foundation.tools.ak.a(r6, r9)     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L9c
            L50:
                java.lang.String[] r6 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L9c
                java.lang.String[] r9 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L79 java.lang.Exception -> L9c
            L54:
                if (r3 >= r4) goto L71
                java.lang.Object r5 = r1.get(r3)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                java.lang.String r10 = r5.getId()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                r6[r3] = r10     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                java.lang.String r5 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                r9[r3] = r5     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L9c
                int r3 = r3 + 1
                goto L54
            L6b:
                r1 = move-exception
                r5 = r0
                r3 = r7
                r4 = r8
                r7 = r9
                goto L98
            L71:
                r3 = r7
                r4 = r8
                r5 = r0
                r7 = r9
                com.mbridge.msdk.video.module.b.a.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> La7
                goto La7
            L79:
                r1 = move-exception
                r3 = r7
                r4 = r8
                r7 = r5
                r5 = r0
                goto L98
            L7f:
                r1 = move-exception
                r6 = r5
                r3 = r7
                r4 = r8
                r5 = r0
                goto L97
            L85:
                r1 = move-exception
                r6 = r5
                r3 = r7
                r4 = r8
                goto L97
            L8a:
                r1 = move-exception
                r4 = r0
                r6 = r5
                goto L91
            L8e:
                r1 = move-exception
                r4 = r5
                r6 = r4
            L91:
                r3 = r7
                goto L97
            L93:
                r1 = move-exception
                r3 = r5
                r4 = r3
                r6 = r4
            L97:
                r7 = r6
            L98:
                com.mbridge.msdk.video.module.b.a.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> La7
                throw r1     // Catch: java.lang.Exception -> La7
            L9c:
                java.lang.String r3 = ""
                java.lang.String r4 = ""
                java.lang.String r5 = ""
                r6 = 0
                r7 = 0
                com.mbridge.msdk.video.module.b.a.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> La7
            La7:
                return
        }
    }

    private class c extends com.mbridge.msdk.video.js.a.c.a {
        final com.mbridge.msdk.video.bt.module.MBridgeBTContainer a;

        private c(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        c(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r1, com.mbridge.msdk.video.bt.module.MBridgeBTContainer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a() {
                r0 = this;
                super.a()
                return
        }

        @Override
        public final void a(int r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                return
        }

        @Override
        public final void a(boolean r4) {
                r3 = this;
                super.a(r4)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0 = r3.a
                com.mbridge.msdk.video.bt.module.b.h r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.t(r0)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r1 = r3.a
                java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.r(r1)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = r3.a
                java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.s(r2)
                r0.a(r4, r1, r2)
                return
        }

        @Override
        public final void b() {
                r0 = this;
                super.b()
                return
        }

        @Override
        public final void onFinishRedirection(com.mbridge.msdk.out.Campaign r3, java.lang.String r4) {
                r2 = this;
                super.onFinishRedirection(r3, r4)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = r2.a
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer.n(r4)
                if (r3 == 0) goto L61
                boolean r4 = r3 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
                if (r4 == 0) goto L61
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: org.json.JSONException -> L5d
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = r2.a     // Catch: org.json.JSONException -> L5d
                com.mbridge.msdk.video.js.i r4 = r4.getJSVideoModule()     // Catch: org.json.JSONException -> L5d
                java.lang.String r4 = r4.getCurrentProgress()     // Catch: org.json.JSONException -> L5d
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5d
                r0.<init>(r4)     // Catch: org.json.JSONException -> L5d
                java.lang.String r4 = "progress"
                java.lang.String r1 = ""
                java.lang.String r4 = r0.optString(r4, r1)     // Catch: org.json.JSONException -> L5d
                int r0 = r3.getLinkType()     // Catch: org.json.JSONException -> L5d
                r1 = 3
                if (r0 != r1) goto L61
                int r3 = r3.getEndcard_click_result()     // Catch: org.json.JSONException -> L5d
                r0 = 2
                if (r3 != r0) goto L61
                java.lang.String r3 = "1.0"
                boolean r3 = r4.equals(r3)     // Catch: org.json.JSONException -> L5d
                if (r3 == 0) goto L61
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L5d
                android.app.Activity r3 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.o(r3)     // Catch: org.json.JSONException -> L5d
                if (r3 == 0) goto L61
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L5d
                boolean r3 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.p(r3)     // Catch: org.json.JSONException -> L5d
                if (r3 == 0) goto L53
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L5d
                r3.onAdClose()     // Catch: org.json.JSONException -> L5d
                goto L61
            L53:
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r3 = r2.a     // Catch: org.json.JSONException -> L5d
                android.app.Activity r3 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.q(r3)     // Catch: org.json.JSONException -> L5d
                r3.finish()     // Catch: org.json.JSONException -> L5d
                goto L61
            L5d:
                r3 = move-exception
                r3.printStackTrace()
            L61:
                return
        }

        @Override
        public final void onRedirectionFailed(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
                r0 = this;
                super.onRedirectionFailed(r1, r2)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r1 = r0.a
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer.n(r1)
                return
        }

        @Override
        public final void onStartRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
                r0 = this;
                super.onStartRedirection(r1, r2)
                com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = r0.a
                android.widget.FrameLayout r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.b(r2)
                com.mbridge.msdk.foundation.tools.ad.a(r1, r2)
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.video.bt.module.MBridgeBTContainer> r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a = r0
            return
    }

    public MBridgeBTContainer(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.b = r0
            r1 = 1
            r2.c = r1
            r2.y = r0
            r2.z = r1
            r2.B = r0
            r2.L = r1
            r2.init(r3)
            return
    }

    public MBridgeBTContainer(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 0
            r1.b = r3
            r0 = 1
            r1.c = r0
            r1.y = r3
            r1.z = r0
            r1.B = r3
            r1.L = r0
            r1.init(r2)
            return
    }

    static int a(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0, int r1) {
            r0.N = r1
            return r1
    }

    static android.widget.TextView a(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0, android.widget.TextView r1) {
            r0.i = r1
            return r1
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.f
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            return r0
    }

    static void a(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            java.lang.String r5 = "encrypt_p="
            java.lang.String r0 = "irlfa="
            if (r6 == 0) goto L9d
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L99
            r1.<init>()     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L99
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.db.b r2 = com.mbridge.msdk.foundation.db.b.a(r2)     // Catch: java.lang.Exception -> L99
            java.lang.String r3 = r6.getCampaignUnitId()     // Catch: java.lang.Exception -> L99
            java.lang.String r4 = r6.getRequestId()     // Catch: java.lang.Exception -> L99
            java.util.List r2 = r2.b(r3, r4)     // Catch: java.lang.Exception -> L99
            if (r2 == 0) goto L9d
            int r3 = r2.size()     // Catch: java.lang.Exception -> L99
            if (r3 <= 0) goto L9d
            r3 = 0
            java.lang.Object r4 = r2.get(r3)     // Catch: java.lang.Exception -> L99
            if (r4 == 0) goto L9d
            java.lang.Object r4 = r2.get(r3)     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.entity.d r4 = (com.mbridge.msdk.foundation.entity.d) r4     // Catch: java.lang.Exception -> L99
            int r4 = r4.d()     // Catch: java.lang.Exception -> L99
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L99
            com.mbridge.msdk.foundation.entity.d r2 = (com.mbridge.msdk.foundation.entity.d) r2     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L99
            r3 = 1
            if (r4 != r3) goto L9d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r4.<init>()     // Catch: java.lang.Exception -> L99
            r4.append(r5)     // Catch: java.lang.Exception -> L99
            r4.append(r2)     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L99
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L99
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r5.<init>()     // Catch: java.lang.Exception -> L99
            r5.append(r0)     // Catch: java.lang.Exception -> L99
            r5.append(r3)     // Catch: java.lang.Exception -> L99
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L99
            r1.put(r0, r5)     // Catch: java.lang.Exception -> L99
            java.util.Set r5 = r1.entrySet()     // Catch: java.lang.Exception -> L99
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L99
        L75:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Exception -> L99
            if (r0 == 0) goto L9d
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Exception -> L99
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Exception -> L99
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L99
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L99
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = r6.getOnlyImpressionURL()     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = r2.replaceAll(r1, r0)     // Catch: java.lang.Exception -> L99
            r6.setOnlyImpressionURL(r0)     // Catch: java.lang.Exception -> L99
            goto L75
        L99:
            r5 = move-exception
            r5.printStackTrace()
        L9d:
            return
    }

    private boolean a(int r6) {
            r5 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r5.m
            r1 = 0
            r2 = 1
            r3 = 4
            if (r0 == 0) goto L28
            com.mbridge.msdk.videocommon.d.c r0 = r5.m
            com.mbridge.msdk.videocommon.b.c r0 = r0.z()
            if (r0 == 0) goto L28
            int r4 = r0.a()
            if (r4 != 0) goto L19
            if (r6 <= r3) goto L18
            return r1
        L18:
            return r2
        L19:
            java.util.List r0 = r0.b()
            if (r0 == 0) goto L28
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            boolean r6 = r0.contains(r6)
            return r6
        L28:
            if (r6 <= r3) goto L2b
            return r1
        L2b:
            return r2
    }

    static boolean a(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0, boolean r1) {
            r0.M = r1
            return r1
    }

    private boolean a(boolean r5) {
            r4 = this;
            r0 = 0
            com.mbridge.msdk.videocommon.d.c r1 = r4.m     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.videocommon.d.c r1 = r4.m     // Catch: java.lang.Throwable -> L26
            int r1 = r1.A()     // Catch: java.lang.Throwable -> L26
            r2 = 1
            if (r1 == r2) goto L25
            r3 = 2
            if (r1 == r3) goto L1b
            r5 = 3
            if (r1 == r5) goto L16
            goto L2e
        L16:
            boolean r5 = r4.d()     // Catch: java.lang.Throwable -> L26
            return r5
        L1b:
            if (r5 == 0) goto L24
            boolean r5 = r4.d()     // Catch: java.lang.Throwable -> L26
            if (r5 == 0) goto L24
            r0 = r2
        L24:
            return r0
        L25:
            return r5
        L26:
            r5 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r5)
        L2e:
            return r0
    }

    static android.widget.FrameLayout b(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            android.widget.FrameLayout r0 = r0.d
            return r0
    }

    static com.mbridge.msdk.video.bt.module.a.a c(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            com.mbridge.msdk.video.bt.module.a.a r0 = r0.E
            return r0
    }

    private com.mbridge.msdk.video.bt.module.a.c c() {
            r1 = this;
            com.mbridge.msdk.video.bt.module.a.c r0 = r1.H
            if (r0 != 0) goto Lb
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$3 r0 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$3
            r0.<init>(r1)
            r1.H = r0
        Lb:
            com.mbridge.msdk.video.bt.module.a.c r0 = r1.H
            return r0
    }

    private com.mbridge.msdk.videocommon.download.a d(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            java.util.List<com.mbridge.msdk.videocommon.download.a> r0 = r4.D
            if (r0 == 0) goto L30
            if (r5 == 0) goto L30
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.videocommon.download.a r1 = (com.mbridge.msdk.videocommon.download.a) r1
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.g()
            java.lang.String r2 = r2.getId()
            java.lang.String r3 = r5.getId()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto La
            java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = "tempContainer task initSuccess"
            com.mbridge.msdk.foundation.tools.z.a(r5, r0)
            return r1
        L30:
            r5 = 0
            return r5
    }

    static java.lang.String d(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    private boolean d() {
            r5 = this;
            r0 = 0
            com.mbridge.msdk.videocommon.d.c r1 = r5.m     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.videocommon.d.c r1 = r5.m     // Catch: java.lang.Throwable -> L22
            double r1 = r1.B()     // Catch: java.lang.Throwable -> L22
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L13
            return r0
        L13:
            java.util.Random r3 = new java.util.Random     // Catch: java.lang.Throwable -> L22
            r3.<init>()     // Catch: java.lang.Throwable -> L22
            double r3 = r3.nextDouble()     // Catch: java.lang.Throwable -> L22
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto L21
            r0 = 1
        L21:
            return r0
        L22:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r3 = ""
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r1)
            return r0
    }

    static java.lang.String e(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.util.List f(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.C
            return r0
    }

    static java.lang.String g(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String h(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String i(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String j(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.lang.String k(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String l(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static com.mbridge.msdk.video.bt.module.b.h m(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            com.mbridge.msdk.video.bt.module.b.h r0 = r0.F
            return r0
    }

    static void n(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            android.widget.FrameLayout r0 = r0.d
            com.mbridge.msdk.foundation.tools.ad.a(r0)
            return
    }

    static android.app.Activity o(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static boolean p(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            boolean r0 = r0.z
            return r0
    }

    static android.app.Activity q(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            android.app.Activity r0 = r0.j
            return r0
    }

    static java.lang.String r(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static java.lang.String s(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static com.mbridge.msdk.video.bt.module.b.h t(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r0) {
            com.mbridge.msdk.video.bt.module.b.h r0 = r0.G
            return r0
    }

    protected final void a(com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            r8 = this;
            if (r9 == 0) goto L3a
            java.util.List r0 = r9.getPv_urls()     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L3a
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L30
            if (r1 <= 0) goto L3a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L30
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L30
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L30
            android.content.Context r2 = r1.j()     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = r8.k     // Catch: java.lang.Throwable -> L30
            r6 = 0
            r7 = 1
            r3 = r9
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L30
            goto L12
        L30:
            r9 = move-exception
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        L3a:
            return
    }

    @Override
    protected final void a(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.video.bt.module.b.h r0 = r1.F
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            super.a(r2)
            return
    }

    public void appendSubView(com.mbridge.msdk.video.bt.module.MBridgeBTContainer r8, com.mbridge.msdk.video.bt.module.MBTempContainer r9, org.json.JSONObject r10) {
            r7 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> Lc5
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> Lc5
            if (r10 == 0) goto L6a
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lc5
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "left"
            r3 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r10.optInt(r2, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r4 = "top"
            int r4 = r10.optInt(r4, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r5 = "right"
            int r5 = r10.optInt(r5, r3)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r6 = "bottom"
            int r6 = r10.optInt(r6, r3)     // Catch: java.lang.Throwable -> Lc5
            if (r2 == r3) goto L35
            if (r1 == 0) goto L35
            float r2 = (float) r2     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.leftMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L35:
            if (r4 == r3) goto L40
            if (r1 == 0) goto L40
            float r2 = (float) r4     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.topMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L40:
            if (r5 == r3) goto L4b
            if (r1 == 0) goto L4b
            float r2 = (float) r5     // Catch: java.lang.Throwable -> Lc5
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.rightMargin = r2     // Catch: java.lang.Throwable -> Lc5
        L4b:
            if (r6 == r3) goto L56
            if (r1 == 0) goto L56
            float r2 = (float) r6     // Catch: java.lang.Throwable -> Lc5
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> Lc5
            r0.bottomMargin = r1     // Catch: java.lang.Throwable -> Lc5
        L56:
            java.lang.String r1 = "width"
            int r1 = r10.optInt(r1)     // Catch: java.lang.Throwable -> Lc5
            java.lang.String r2 = "height"
            int r10 = r10.optInt(r2)     // Catch: java.lang.Throwable -> Lc5
            if (r1 <= 0) goto L66
            r0.width = r1     // Catch: java.lang.Throwable -> Lc5
        L66:
            if (r10 <= 0) goto L6a
            r0.height = r10     // Catch: java.lang.Throwable -> Lc5
        L6a:
            r8.addView(r9, r0)     // Catch: java.lang.Throwable -> Lc5
            android.app.Activity r8 = r7.j     // Catch: java.lang.Throwable -> Lc5
            r9.setActivity(r8)     // Catch: java.lang.Throwable -> Lc5
            int r8 = r7.q     // Catch: java.lang.Throwable -> Lc5
            r9.setMute(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.y     // Catch: java.lang.Throwable -> Lc5
            r9.setBidCampaign(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.r     // Catch: java.lang.Throwable -> Lc5
            r9.setIV(r8)     // Catch: java.lang.Throwable -> Lc5
            boolean r8 = r7.z     // Catch: java.lang.Throwable -> Lc5
            r9.setBigOffer(r8)     // Catch: java.lang.Throwable -> Lc5
            int r8 = r7.t     // Catch: java.lang.Throwable -> Lc5
            int r10 = r7.u     // Catch: java.lang.Throwable -> Lc5
            int r0 = r7.v     // Catch: java.lang.Throwable -> Lc5
            r9.setIVRewardEnable(r8, r10, r0)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.video.bt.module.b.h r8 = r7.G     // Catch: java.lang.Throwable -> Lc5
            r9.setShowRewardListener(r8)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r9.getCampaign()     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.videocommon.download.a r8 = r7.d(r8)     // Catch: java.lang.Throwable -> Lc5
            r9.setCampaignDownLoadTask(r8)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.video.bt.module.a.c r8 = r7.c()     // Catch: java.lang.Throwable -> Lc5
            r9.setMBridgeTempCallback(r8)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.video.js.c r8 = r7.getJSCommon()     // Catch: java.lang.Throwable -> Lc5
            int r8 = r8.a()     // Catch: java.lang.Throwable -> Lc5
            r9.setH5Cbp(r8)     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.video.js.c r8 = r7.getJSCommon()     // Catch: java.lang.Throwable -> Lc5
            int r8 = r8.b()     // Catch: java.lang.Throwable -> Lc5
            r9.setWebViewFront(r8)     // Catch: java.lang.Throwable -> Lc5
            android.content.Context r8 = r7.h     // Catch: java.lang.Throwable -> Lc5
            r9.init(r8)     // Catch: java.lang.Throwable -> Lc5
            r9.onCreate()     // Catch: java.lang.Throwable -> Lc5
            goto Lcf
        Lc5:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r9, r8)
        Lcf:
            return
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.f
            if (r1 == 0) goto L45
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "code"
            int r3 = r4.b     // Catch: java.lang.Exception -> L3a
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.A     // Catch: java.lang.Exception -> L3a
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.f     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3a
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L3a
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L3a
            r5.a(r6, r0, r1)     // Catch: java.lang.Exception -> L3a
            goto L45
        L3a:
            com.mbridge.msdk.video.bt.a.c r5 = com.mbridge.msdk.video.bt.a.c.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.f
            java.lang.String r1 = r4.A
            r5.a(r6, r0, r1)
        L45:
            return
    }

    @Override
    public void click(int r1, java.lang.String r2) {
            r0 = this;
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

    @Override
    public void handlerH5Exception(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void init(android.content.Context r1) {
            r0 = this;
            r0.h = r1
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r0.g = r1
            return
    }

    public boolean isNativeKilledCallback(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            com.mbridge.msdk.video.js.c r0 = r3.getJSCommon()
            int r0 = r0.a()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Ld
            return r1
        Ld:
            if (r4 == 0) goto L3f
            int r0 = r4.getSpareOfferFlag()
            if (r0 != r2) goto L29
            com.mbridge.msdk.videocommon.d.c r0 = r3.m
            if (r0 == 0) goto L3f
            com.mbridge.msdk.videocommon.d.c r0 = r3.m
            int r0 = r0.C()
            if (r0 != r2) goto L25
            r4.setCbt(r2)
            return r2
        L25:
            r4.setCbt(r1)
            return r1
        L29:
            boolean r0 = r4.isBidCampaign()
            if (r0 == 0) goto L33
            r4.setCbt(r1)
            return r1
        L33:
            com.mbridge.msdk.videocommon.d.c r0 = r3.m
            int r0 = r0.d()
            r4.setCbt(r0)
            if (r0 != r2) goto L3f
            r1 = r2
        L3f:
            return r1
    }

    public void onAdClose() {
            r1 = this;
            android.app.Activity r0 = r1.j
            if (r0 == 0) goto L9
            android.app.Activity r0 = r1.j
            r0.finish()
        L9:
            return
    }

    public void onBackPressed() {
            r3 = this;
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = r3.J     // Catch: java.lang.Throwable -> L46
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L46
            if (r0 == 0) goto L50
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L46
            if (r1 <= 0) goto L50
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L46
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L46
        L1c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L46
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L46
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L32
            com.mbridge.msdk.video.bt.module.MBTempContainer r1 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r1     // Catch: java.lang.Throwable -> L46
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L46
            goto L1c
        L32:
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L3c
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r1     // Catch: java.lang.Throwable -> L46
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L46
            goto L1c
        L3c:
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L1c
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTLayout) r1     // Catch: java.lang.Throwable -> L46
            r1.onBackPressed()     // Catch: java.lang.Throwable -> L46
            goto L1c
        L46:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L50:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r4) {
            r3 = this;
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = r3.J     // Catch: java.lang.Throwable -> L46
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L46
            if (r0 == 0) goto L50
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L46
            if (r1 <= 0) goto L50
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L46
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L46
        L1c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L46
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L46
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L32
            com.mbridge.msdk.video.bt.module.MBTempContainer r1 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r1     // Catch: java.lang.Throwable -> L46
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L46
            goto L1c
        L32:
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L3c
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r1     // Catch: java.lang.Throwable -> L46
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L46
            goto L1c
        L3c:
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L1c
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTLayout) r1     // Catch: java.lang.Throwable -> L46
            r1.onConfigurationChanged(r4)     // Catch: java.lang.Throwable -> L46
            goto L1c
        L46:
            r4 = move-exception
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L50:
            return
    }

    public void onCreate() {
            r9 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "_"
            java.lang.String r2 = "mbridge_bt_container"
            int r2 = r9.findLayout(r2)     // Catch: java.lang.Throwable -> L389
            if (r2 >= 0) goto L12
            java.lang.String r0 = "mbridge_bt_container layout null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            return
        L12:
            android.view.LayoutInflater r3 = r9.g     // Catch: java.lang.Throwable -> L389
            android.view.View r2 = r3.inflate(r2, r9)     // Catch: java.lang.Throwable -> L389
            android.widget.FrameLayout r2 = (android.widget.FrameLayout) r2     // Catch: java.lang.Throwable -> L389
            r9.d = r2     // Catch: java.lang.Throwable -> L389
            if (r2 != 0) goto L24
            java.lang.String r0 = "ViewIds null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            return
        L24:
            r9.J = r0     // Catch: java.lang.Throwable -> L389
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r9.C     // Catch: java.lang.Throwable -> L389
            r3 = 0
            if (r2 == 0) goto L46
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r9.C     // Catch: java.lang.Throwable -> L389
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L389
            if (r2 <= 0) goto L46
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r9.C     // Catch: java.lang.Throwable -> L389
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r2.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Throwable -> L389
            r9.J = r2     // Catch: java.lang.Throwable -> L389
            goto L47
        L46:
            r4 = r0
        L47:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r2.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r5 = r9.k     // Catch: java.lang.Throwable -> L389
            r2.append(r5)     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            java.lang.String r5 = r9.J     // Catch: java.lang.Throwable -> L389
            r2.append(r5)     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            r2.append(r4)     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.videocommon.a$a r2 = com.mbridge.msdk.videocommon.a.a(r2)     // Catch: java.lang.Throwable -> L389
            r5 = 0
            if (r2 == 0) goto L90
            java.lang.String r6 = r2.b()     // Catch: java.lang.Throwable -> L389
            r9.A = r6     // Catch: java.lang.Throwable -> L389
            java.lang.String r6 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r7.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r8 = "get BT wraper.getTag = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L389
            java.lang.String r8 = r9.A     // Catch: java.lang.Throwable -> L389
            r7.append(r8)     // Catch: java.lang.Throwable -> L389
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.tools.z.a(r6, r7)     // Catch: java.lang.Throwable -> L389
            r2.a(r0)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r2.a()     // Catch: java.lang.Throwable -> L389
            goto L91
        L90:
            r2 = r5
        L91:
            r9.f = r2     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r2.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r6 = r9.k     // Catch: java.lang.Throwable -> L389
            r2.append(r6)     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            java.lang.String r6 = r9.J     // Catch: java.lang.Throwable -> L389
            r2.append(r6)     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            r2.append(r4)     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.videocommon.a.b(r2)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f     // Catch: java.lang.Throwable -> L389
            if (r2 == 0) goto L32f
            com.mbridge.msdk.video.js.factory.b r2 = new com.mbridge.msdk.video.js.factory.b     // Catch: java.lang.Throwable -> L389
            android.app.Activity r4 = r9.j     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r9.f     // Catch: java.lang.Throwable -> L389
            r2.<init>(r4, r9, r6)     // Catch: java.lang.Throwable -> L389
            r9.registerJsFactory(r2)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.f     // Catch: java.lang.Throwable -> L389
            r4.setApiManagerJSFactory(r2)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.f     // Catch: java.lang.Throwable -> L389
            android.view.ViewParent r4 = r4.getParent()     // Catch: java.lang.Throwable -> L389
            if (r4 == 0) goto Ld5
            java.lang.String r0 = "preload template webview is null or load error"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            return
        Ld5:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.f     // Catch: java.lang.Throwable -> L389
            java.lang.Object r4 = r4.getObject()     // Catch: java.lang.Throwable -> L389
            boolean r4 = r4 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L389
            r6 = 1
            if (r4 == 0) goto L188
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.f     // Catch: java.lang.Throwable -> L389
            java.lang.Object r4 = r4.getObject()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.a.j r4 = (com.mbridge.msdk.video.js.a.j) r4     // Catch: java.lang.Throwable -> L389
            r2.a(r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f     // Catch: java.lang.Throwable -> L389
            if (r2 == 0) goto L17d
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L389
            r2.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.s     // Catch: java.lang.Throwable -> L389
            android.content.Context r7 = r9.getContext()     // Catch: java.lang.Throwable -> L389
            float r7 = com.mbridge.msdk.foundation.tools.ae.d(r7)     // Catch: java.lang.Throwable -> L389
            double r7 = (double) r7     // Catch: java.lang.Throwable -> L389
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L389
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r4.<init>()     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r7 = "name"
            com.mbridge.msdk.videocommon.b.d r8 = r9.o     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r8 = r8.a()     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r4.put(r7, r8)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r7 = "amount"
            com.mbridge.msdk.videocommon.b.d r8 = r9.o     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            int r8 = r8.b()     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r4.put(r7, r8)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r7 = "id"
            java.lang.String r8 = r9.p     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r4.put(r7, r8)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r7 = "userId"
            java.lang.String r8 = r9.n     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r2.put(r7, r8)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r7 = "reward"
            r2.put(r7, r4)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r4 = "playVideoMute"
            int r7 = r9.q     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r2.put(r4, r7)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            java.lang.String r4 = "extra"
            java.lang.String r7 = r9.O     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            r2.put(r4, r7)     // Catch: java.lang.Exception -> L13f org.json.JSONException -> L14a java.lang.Throwable -> L389
            goto L154
        L13f:
            r4 = move-exception
            java.lang.String r7 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.tools.z.a(r7, r4)     // Catch: java.lang.Throwable -> L389
            goto L154
        L14a:
            r4 = move-exception
            java.lang.String r7 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.tools.z.a(r7, r4)     // Catch: java.lang.Throwable -> L389
        L154:
            com.mbridge.msdk.video.bt.module.b.d r4 = new com.mbridge.msdk.video.bt.module.b.d     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.a.c r7 = r9.c()     // Catch: java.lang.Throwable -> L389
            r4.<init>(r7, r0)     // Catch: java.lang.Throwable -> L389
            r9.G = r4     // Catch: java.lang.Throwable -> L389
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.f r2 = r9.getJSNotifyProxy()     // Catch: java.lang.Throwable -> L389
            r2.a(r0)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.c r0 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L389
            r0.b(r6)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.c r0 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$c r2 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$c     // Catch: java.lang.Throwable -> L389
            r2.<init>(r9, r5)     // Catch: java.lang.Throwable -> L389
            r0.a(r2)     // Catch: java.lang.Throwable -> L389
        L17d:
            com.mbridge.msdk.video.js.c r0 = r9.getJSCommon()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.a.c r0 = (com.mbridge.msdk.video.js.a.c) r0     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.js.c$a r0 = r0.m     // Catch: java.lang.Throwable -> L389
            r0.a()     // Catch: java.lang.Throwable -> L389
        L188:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r9.f     // Catch: java.lang.Throwable -> L389
            r0.setBackgroundColor(r3)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.k     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r9.J     // Catch: java.lang.Throwable -> L389
            java.util.LinkedHashMap r0 = r0.b(r2, r4)     // Catch: java.lang.Throwable -> L389
            if (r0 == 0) goto L329
            java.lang.String r2 = r9.A     // Catch: java.lang.Throwable -> L389
            boolean r2 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L389
            if (r2 == 0) goto L329
            java.lang.String r2 = r9.A     // Catch: java.lang.Throwable -> L389
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L389
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> L389
            boolean r4 = r2 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Throwable -> L389
            if (r4 == 0) goto L2ac
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTLayout) r2     // Catch: java.lang.Throwable -> L389
            r9.e = r2     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r9.f     // Catch: java.lang.Throwable -> L389
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L389
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L389
            r2.addView(r4, r3, r7)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r4.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r7 = r9.k     // Catch: java.lang.Throwable -> L389
            r4.append(r7)     // Catch: java.lang.Throwable -> L389
            r4.append(r1)     // Catch: java.lang.Throwable -> L389
            r4.append(r6)     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$1 r7 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$1     // Catch: java.lang.Throwable -> L389
            r7.<init>(r9)     // Catch: java.lang.Throwable -> L389
            r2.a(r4, r7)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r4.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r7 = r9.k     // Catch: java.lang.Throwable -> L389
            r4.append(r7)     // Catch: java.lang.Throwable -> L389
            r4.append(r1)     // Catch: java.lang.Throwable -> L389
            r7 = 2
            r4.append(r7)     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L389
            r2.c(r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.b.b r2 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r4.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r7 = r9.k     // Catch: java.lang.Throwable -> L389
            r4.append(r7)     // Catch: java.lang.Throwable -> L389
            r4.append(r1)     // Catch: java.lang.Throwable -> L389
            r4.append(r6)     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.widget.FeedBackButton r2 = r2.b(r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.b.b r4 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Throwable -> L389
            boolean r4 = r4.b()     // Catch: java.lang.Throwable -> L389
            if (r4 == 0) goto L26a
            if (r2 == 0) goto L26a
            android.view.ViewGroup$LayoutParams r4 = r2.getLayoutParams()     // Catch: java.lang.Exception -> L22a java.lang.Throwable -> L389
            android.widget.RelativeLayout$LayoutParams r4 = (android.widget.RelativeLayout.LayoutParams) r4     // Catch: java.lang.Exception -> L22a java.lang.Throwable -> L389
            r5 = r4
            goto L22e
        L22a:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L389
        L22e:
            if (r5 != 0) goto L239
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L389
            int r4 = com.mbridge.msdk.foundation.b.b.a     // Catch: java.lang.Throwable -> L389
            int r6 = com.mbridge.msdk.foundation.b.b.b     // Catch: java.lang.Throwable -> L389
            r5.<init>(r4, r6)     // Catch: java.lang.Throwable -> L389
        L239:
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L389
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L389
            r6 = 1092616192(0x41200000, float:10.0)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)     // Catch: java.lang.Throwable -> L389
            r5.topMargin = r4     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L389
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L389
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r6)     // Catch: java.lang.Throwable -> L389
            r5.leftMargin = r4     // Catch: java.lang.Throwable -> L389
            r2.setLayoutParams(r5)     // Catch: java.lang.Throwable -> L389
            android.view.ViewParent r4 = r2.getParent()     // Catch: java.lang.Throwable -> L389
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L389
            if (r4 == 0) goto L265
            r4.removeView(r2)     // Catch: java.lang.Throwable -> L389
        L265:
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r4 = r9.e     // Catch: java.lang.Throwable -> L389
            r4.addView(r2)     // Catch: java.lang.Throwable -> L389
        L26a:
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r2 = r9.e     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r9.A     // Catch: java.lang.Throwable -> L389
            r2.setTag(r4)     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.A     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r4 = r9.e     // Catch: java.lang.Throwable -> L389
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L389
            java.util.Collection r2 = r0.values()     // Catch: java.lang.Throwable -> L389
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L389
        L280:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L389
            if (r4 == 0) goto L2a2
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L389
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L389
            boolean r5 = r4 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTRootLayout     // Catch: java.lang.Throwable -> L389
            if (r5 == 0) goto L280
            com.mbridge.msdk.video.bt.module.MBridgeBTRootLayout r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTRootLayout) r4     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r4.getInstanceId()     // Catch: java.lang.Throwable -> L389
            r9.I = r2     // Catch: java.lang.Throwable -> L389
            android.widget.FrameLayout r2 = r9.d     // Catch: java.lang.Throwable -> L389
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L389
            r5.<init>(r8, r8)     // Catch: java.lang.Throwable -> L389
            r2.addView(r4, r5)     // Catch: java.lang.Throwable -> L389
        L2a2:
            java.lang.String r2 = r9.I     // Catch: java.lang.Throwable -> L389
            r0.remove(r2)     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.I     // Catch: java.lang.Throwable -> L389
            r0.put(r2, r9)     // Catch: java.lang.Throwable -> L389
        L2ac:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.k     // Catch: java.lang.Throwable -> L389
            int r4 = r9.q     // Catch: java.lang.Throwable -> L389
            r0.a(r2, r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.A     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r9.J     // Catch: java.lang.Throwable -> L389
            r0.a(r2, r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = r9.I     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r9.J     // Catch: java.lang.Throwable -> L389
            r0.a(r2, r4)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L389
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L389
            r2.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r4 = r9.k     // Catch: java.lang.Throwable -> L389
            r2.append(r4)     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            java.lang.String r1 = r9.J     // Catch: java.lang.Throwable -> L389
            r2.append(r1)     // Catch: java.lang.Throwable -> L389
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L389
            android.app.Activity r2 = r9.j     // Catch: java.lang.Throwable -> L389
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L389
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Throwable -> L307
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L307
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L307
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$a r2 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$a     // Catch: java.lang.Throwable -> L307
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r9.C     // Catch: java.lang.Throwable -> L307
            java.lang.String r5 = r9.k     // Catch: java.lang.Throwable -> L307
            java.lang.String r6 = r9.l     // Catch: java.lang.Throwable -> L307
            r2.<init>(r4, r0, r5, r6)     // Catch: java.lang.Throwable -> L307
            r1.execute(r2)     // Catch: java.lang.Throwable -> L307
            goto L30e
        L307:
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L389
            java.lang.String r1 = "remove campaign failed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L389
        L30e:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r9.C     // Catch: java.lang.Throwable -> L389
            if (r0 == 0) goto L39e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r9.C     // Catch: java.lang.Throwable -> L389
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L389
            if (r0 <= 0) goto L39e
            com.mbridge.msdk.videocommon.d.c r0 = r9.m     // Catch: java.lang.Throwable -> L389
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r9.C     // Catch: java.lang.Throwable -> L389
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L389
            r9.a(r0, r1)     // Catch: java.lang.Throwable -> L389
            goto L39e
        L329:
            java.lang.String r0 = "big template webviewLayout is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            return
        L32f:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r9.C     // Catch: java.lang.Throwable -> L389
            if (r0 == 0) goto L383
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r9.C     // Catch: java.lang.Throwable -> L389
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L389
            if (r0 <= 0) goto L383
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r9.C     // Catch: java.lang.Throwable -> L389
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> L389
            if (r0 == 0) goto L383
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Throwable -> L389
            if (r0 == 0) goto L383
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b()     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$b r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$b     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r9.C     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
            java.lang.String r3 = r9.k     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
            r0.execute(r1)     // Catch: java.lang.Exception -> L35b java.lang.Throwable -> L389
        L35b:
            android.content.Context r0 = r9.h     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.dynview.e.d r1 = r9.P     // Catch: java.lang.Throwable -> L389
            if (r1 != 0) goto L367
            java.lang.String r0 = "ChoiceOneCallback is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            goto L382
        L367:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L389
            r1.<init>()     // Catch: java.lang.Throwable -> L389
            java.lang.String r2 = "choice_one_callback"
            com.mbridge.msdk.video.dynview.e.d r3 = r9.P     // Catch: java.lang.Throwable -> L389
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.dynview.b.a()     // Catch: java.lang.Throwable -> L389
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r9.C     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer$2 r3 = new com.mbridge.msdk.video.bt.module.MBridgeBTContainer$2     // Catch: java.lang.Throwable -> L389
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L389
            com.mbridge.msdk.video.dynview.h.a r4 = new com.mbridge.msdk.video.dynview.h.a     // Catch: java.lang.Throwable -> L389
            r4.<init>(r0, r2, r3, r1)     // Catch: java.lang.Throwable -> L389
        L382:
            return
        L383:
            java.lang.String r0 = "big template webview is null"
            r9.a(r0)     // Catch: java.lang.Throwable -> L389
            goto L39e
        L389:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onCreate exception "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r9.a(r0)
        L39e:
            return
    }

    @Override
    public void onDestroy() {
            r5 = this;
            boolean r0 = r5.B
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.B = r0
            super.onDestroy()
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.k
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            java.lang.String r3 = r5.J
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.e(r1)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L45
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f     // Catch: java.lang.Throwable -> Lf3
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> Lf3
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L3b
            r0.removeAllViews()     // Catch: java.lang.Throwable -> Lf3
        L3b:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f     // Catch: java.lang.Throwable -> Lf3
            r0.clearWebView()     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r5.f     // Catch: java.lang.Throwable -> Lf3
            r0.release()     // Catch: java.lang.Throwable -> Lf3
        L45:
            com.mbridge.msdk.video.bt.module.a.c r0 = r5.H     // Catch: java.lang.Throwable -> Lf3
            r1 = 0
            if (r0 == 0) goto L4c
            r5.H = r1     // Catch: java.lang.Throwable -> Lf3
        L4c:
            com.mbridge.msdk.video.bt.module.a.a r0 = r5.E     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L52
            r5.E = r1     // Catch: java.lang.Throwable -> Lf3
        L52:
            android.content.Context r0 = r5.h     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L58
            r5.h = r1     // Catch: java.lang.Throwable -> Lf3
        L58:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.C     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto Laf
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.C     // Catch: java.lang.Throwable -> Lf3
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lf3
            if (r0 <= 0) goto Laf
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r5.C     // Catch: java.lang.Throwable -> Lf3
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lf3
        L6a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Lf3
            if (r1 == 0) goto La8
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> Lf3
            if (r1 == 0) goto L6a
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r1.getRewardTemplateMode()     // Catch: java.lang.Throwable -> Lf3
            if (r3 == 0) goto L6a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r3.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = r5.k     // Catch: java.lang.Throwable -> Lf3
            r3.append(r4)     // Catch: java.lang.Throwable -> Lf3
            r3.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = r1.getRequestId()     // Catch: java.lang.Throwable -> Lf3
            r3.append(r4)     // Catch: java.lang.Throwable -> Lf3
            r3.append(r2)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r1.getRewardTemplateMode()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r1.e()     // Catch: java.lang.Throwable -> Lf3
            r3.append(r1)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.videocommon.a.b(r1)     // Catch: java.lang.Throwable -> Lf3
            goto L6a
        La8:
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()     // Catch: java.lang.Throwable -> Lf3
            r0.b()     // Catch: java.lang.Throwable -> Lf3
        Laf:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.A     // Catch: java.lang.Throwable -> Lf3
            r0.g(r1)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.k     // Catch: java.lang.Throwable -> Lf3
            r0.h(r1)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.k     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r5.J     // Catch: java.lang.Throwable -> Lf3
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.A     // Catch: java.lang.Throwable -> Lf3
            r0.remove(r1)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.k     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r5.J     // Catch: java.lang.Throwable -> Lf3
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.I     // Catch: java.lang.Throwable -> Lf3
            r0.remove(r1)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r5.k     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r5.J     // Catch: java.lang.Throwable -> Lf3
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> Lf3
            r0.clear()     // Catch: java.lang.Throwable -> Lf3
            goto Lfd
        Lf3:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        Lfd:
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
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto L2b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()
            com.mbridge.msdk.video.dynview.d.a r1 = r0.a
            if (r1 == 0) goto L2b
            com.mbridge.msdk.video.dynview.d.a r0 = r0.a
            r0.b()
        L2b:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = r3.J     // Catch: java.lang.Throwable -> L5d
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L67
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L5d
            if (r1 <= 0) goto L67
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L5d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L5d
        L47:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L67
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L5d
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L5d
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L47
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r1     // Catch: java.lang.Throwable -> L5d
            r1.onPause()     // Catch: java.lang.Throwable -> L5d
            goto L47
        L5d:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L67:
            return
    }

    @Override
    public void onResume() {
            r3 = this;
            super.onResume()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            if (r0 <= 0) goto L2b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto L2b
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()
            com.mbridge.msdk.video.dynview.d.a r1 = r0.a
            if (r1 == 0) goto L2b
            com.mbridge.msdk.video.dynview.d.a r0 = r0.a
            r0.a()
        L2b:
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto L30
            return
        L30:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L62
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = r3.J     // Catch: java.lang.Throwable -> L62
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L62
            if (r0 == 0) goto L6c
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L62
            if (r1 <= 0) goto L6c
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L62
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L62
        L4c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L62
            if (r1 == 0) goto L6c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L62
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L62
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L4c
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r1     // Catch: java.lang.Throwable -> L62
            r1.onResume()     // Catch: java.lang.Throwable -> L62
            goto L4c
        L62:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L6c:
            return
    }

    @Override
    public void onStop() {
            r3 = this;
            super.onStop()
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            if (r0 == 0) goto L25
            int r0 = r0.size()
            if (r0 <= 0) goto L25
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.C
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto L25
            boolean r0 = r0.isDynamicView()
            if (r0 == 0) goto L25
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.a()
            r0.b()
        L25:
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L57
            java.lang.String r1 = r3.k     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = r3.J     // Catch: java.lang.Throwable -> L57
            java.util.LinkedHashMap r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L61
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L57
            if (r1 <= 0) goto L61
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L57
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L57
        L41:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L61
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L57
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L57
            boolean r2 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L57
            if (r2 == 0) goto L41
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r1     // Catch: java.lang.Throwable -> L57
            r1.onStop()     // Catch: java.lang.Throwable -> L57
            goto L41
        L57:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L61:
            return
    }

    @Override
    public void reactDeveloper(java.lang.Object r14, java.lang.String r15) {
            r13 = this;
            java.lang.String r0 = "error"
            com.mbridge.msdk.video.bt.module.a.a r1 = r13.E
            if (r1 == 0) goto L220
            boolean r1 = android.text.TextUtils.isEmpty(r15)
            if (r1 != 0) goto L220
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L20e
            r1.<init>(r15)     // Catch: org.json.JSONException -> L20e
            java.lang.String r15 = "type"
            int r15 = r1.optInt(r15)     // Catch: org.json.JSONException -> L20e
            java.lang.String r2 = "hit"
            int r2 = r1.optInt(r2)     // Catch: org.json.JSONException -> L20e
            java.lang.String r3 = "unitId"
            java.lang.String r4 = r13.getUnitId()     // Catch: org.json.JSONException -> L20e
            java.lang.String r3 = r1.optString(r3, r4)     // Catch: org.json.JSONException -> L20e
            java.lang.String r4 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: org.json.JSONException -> L20e
            java.lang.String r5 = r13.getPlacementId()     // Catch: org.json.JSONException -> L20e
            java.lang.String r4 = r1.optString(r4, r5)     // Catch: org.json.JSONException -> L20e
            java.lang.String r5 = "data"
            org.json.JSONObject r5 = r1.optJSONObject(r5)     // Catch: org.json.JSONException -> L20e
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r6 = r13.C     // Catch: org.json.JSONException -> L20e
            r7 = 0
            java.lang.Object r6 = r6.get(r7)     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: org.json.JSONException -> L20e
            r8 = 1
            if (r15 != r8) goto L5a
            java.lang.String r9 = "expired"
            boolean r9 = r5.optBoolean(r9)     // Catch: org.json.JSONException -> L20e
            if (r6 == 0) goto L54
            if (r9 == 0) goto L51
            r6.setSpareOfferFlag(r8)     // Catch: org.json.JSONException -> L20e
            goto L54
        L51:
            r6.setSpareOfferFlag(r7)     // Catch: org.json.JSONException -> L20e
        L54:
            boolean r9 = r13.isNativeKilledCallback(r6)     // Catch: org.json.JSONException -> L20e
            r13.K = r9     // Catch: org.json.JSONException -> L20e
        L5a:
            r9 = 5
            r10 = 4
            r11 = 2
            java.lang.String r12 = ""
            switch(r15) {
                case 1: goto L1ec;
                case 2: goto L1b7;
                case 3: goto L198;
                case 4: goto L176;
                case 5: goto L14e;
                case 6: goto L64;
                default: goto L62;
            }
        L62:
            goto L20a
        L64:
            java.lang.String r15 = "convert"
            int r15 = r5.optInt(r15)     // Catch: org.json.JSONException -> L20e
            if (r15 != r8) goto L6e
            r15 = r8
            goto L6f
        L6e:
            r15 = r7
        L6f:
            java.lang.String r0 = "reward"
            org.json.JSONObject r0 = r5.optJSONObject(r0)     // Catch: org.json.JSONException -> L20e
            java.lang.String r1 = "campaign"
            org.json.JSONObject r1 = r5.optJSONObject(r1)     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r1)     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.videocommon.b.d r0 = com.mbridge.msdk.videocommon.b.d.a(r0)     // Catch: org.json.JSONException -> L20e
            if (r0 != 0) goto L87
            com.mbridge.msdk.videocommon.b.d r0 = r13.o     // Catch: org.json.JSONException -> L20e
        L87:
            java.lang.String r10 = "extra"
            java.lang.String r5 = r5.optString(r10)     // Catch: org.json.JSONException -> L20e
            boolean r10 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L20e
            if (r10 != 0) goto L95
            r13.O = r5     // Catch: org.json.JSONException -> L20e
        L95:
            com.mbridge.msdk.video.bt.module.a.a r5 = r13.E     // Catch: org.json.JSONException -> L20e
            r10 = 7
            r5.a(r10, r4, r3)     // Catch: org.json.JSONException -> L20e
            boolean r4 = r13.K     // Catch: org.json.JSONException -> L20e
            java.lang.String r5 = "sendToServerRewardInfo"
            if (r4 == 0) goto L108
            boolean r2 = r13.a(r9)     // Catch: org.json.JSONException -> L20e
            if (r2 != 0) goto L20a
            com.mbridge.msdk.videocommon.d.c r2 = r13.m     // Catch: org.json.JSONException -> L20e
            if (r2 == 0) goto Lb8
            com.mbridge.msdk.videocommon.d.c r2 = r13.m     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.videocommon.b.c r2 = r2.z()     // Catch: org.json.JSONException -> L20e
            if (r2 == 0) goto Lb8
            int r2 = r2.a()     // Catch: org.json.JSONException -> L20e
            goto Lb9
        Lb8:
            r2 = r8
        Lb9:
            if (r2 != 0) goto Lc6
            boolean r2 = r13.a(r8)     // Catch: org.json.JSONException -> L20e
            if (r2 == 0) goto Lc6
            com.mbridge.msdk.video.bt.module.a.a r2 = r13.E     // Catch: org.json.JSONException -> L20e
            r2.a(r12)     // Catch: org.json.JSONException -> L20e
        Lc6:
            boolean r2 = r13.r     // Catch: org.json.JSONException -> L20e
            if (r2 == 0) goto Ldf
            int r2 = r13.t     // Catch: org.json.JSONException -> L20e
            int r4 = com.mbridge.msdk.foundation.same.a.w     // Catch: org.json.JSONException -> L20e
            if (r2 == r4) goto Ld6
            int r2 = r13.t     // Catch: org.json.JSONException -> L20e
            int r4 = com.mbridge.msdk.foundation.same.a.x     // Catch: org.json.JSONException -> L20e
            if (r2 != r4) goto Ldf
        Ld6:
            com.mbridge.msdk.video.bt.module.a.a r2 = r13.E     // Catch: org.json.JSONException -> L20e
            boolean r4 = r13.M     // Catch: org.json.JSONException -> L20e
            int r8 = r13.N     // Catch: org.json.JSONException -> L20e
            r2.a(r4, r8)     // Catch: org.json.JSONException -> L20e
        Ldf:
            if (r15 != 0) goto Le4
            r0.a(r7)     // Catch: org.json.JSONException -> L20e
        Le4:
            com.mbridge.msdk.video.bt.module.a.a r2 = r13.E     // Catch: org.json.JSONException -> L20e
            r2.a(r15, r0)     // Catch: org.json.JSONException -> L20e
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.foundation.tools.z.a(r2, r5)     // Catch: org.json.JSONException -> L20e
            boolean r2 = r13.r     // Catch: org.json.JSONException -> L20e
            if (r2 != 0) goto L20a
            if (r15 == 0) goto L20a
            if (r1 == 0) goto Lff
            java.lang.String r15 = r13.n     // Catch: org.json.JSONException -> L20e
            java.lang.String r2 = r13.O     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.video.module.b.b.a(r1, r0, r3, r15, r2)     // Catch: org.json.JSONException -> L20e
            goto L20a
        Lff:
            java.lang.String r15 = r13.n     // Catch: org.json.JSONException -> L20e
            java.lang.String r1 = r13.O     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.video.module.b.b.a(r6, r0, r3, r15, r1)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L108:
            int r4 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r4) goto L20a
            boolean r2 = r13.r     // Catch: org.json.JSONException -> L20e
            if (r2 == 0) goto L125
            int r2 = r13.t     // Catch: org.json.JSONException -> L20e
            int r4 = com.mbridge.msdk.foundation.same.a.w     // Catch: org.json.JSONException -> L20e
            if (r2 == r4) goto L11c
            int r2 = r13.t     // Catch: org.json.JSONException -> L20e
            int r4 = com.mbridge.msdk.foundation.same.a.x     // Catch: org.json.JSONException -> L20e
            if (r2 != r4) goto L125
        L11c:
            com.mbridge.msdk.video.bt.module.a.a r2 = r13.E     // Catch: org.json.JSONException -> L20e
            boolean r4 = r13.M     // Catch: org.json.JSONException -> L20e
            int r8 = r13.N     // Catch: org.json.JSONException -> L20e
            r2.a(r4, r8)     // Catch: org.json.JSONException -> L20e
        L125:
            if (r15 != 0) goto L12a
            r0.a(r7)     // Catch: org.json.JSONException -> L20e
        L12a:
            com.mbridge.msdk.video.bt.module.a.a r2 = r13.E     // Catch: org.json.JSONException -> L20e
            r2.a(r15, r0)     // Catch: org.json.JSONException -> L20e
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.foundation.tools.z.a(r2, r5)     // Catch: org.json.JSONException -> L20e
            boolean r2 = r13.r     // Catch: org.json.JSONException -> L20e
            if (r2 != 0) goto L20a
            if (r15 == 0) goto L20a
            if (r1 == 0) goto L145
            java.lang.String r15 = r13.n     // Catch: org.json.JSONException -> L20e
            java.lang.String r2 = r13.O     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.video.module.b.b.a(r1, r0, r3, r15, r2)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L145:
            java.lang.String r15 = r13.n     // Catch: org.json.JSONException -> L20e
            java.lang.String r1 = r13.O     // Catch: org.json.JSONException -> L20e
            com.mbridge.msdk.video.module.b.b.a(r6, r0, r3, r15, r1)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L14e:
            java.lang.String r15 = "isAutoClick"
            boolean r15 = r1.optBoolean(r15)     // Catch: org.json.JSONException -> L20e
            boolean r0 = r13.K     // Catch: org.json.JSONException -> L20e
            if (r0 == 0) goto L16b
            boolean r0 = r13.a(r10)     // Catch: org.json.JSONException -> L20e
            if (r0 != 0) goto L20a
            boolean r0 = r13.a(r15)     // Catch: org.json.JSONException -> L20e
            if (r0 != 0) goto L20a
            com.mbridge.msdk.video.bt.module.a.a r0 = r13.E     // Catch: org.json.JSONException -> L20e
            r0.a(r15, r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L16b:
            int r0 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r0) goto L20a
            com.mbridge.msdk.video.bt.module.a.a r0 = r13.E     // Catch: org.json.JSONException -> L20e
            r0.a(r15, r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L176:
            boolean r15 = r13.K     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L187
            r15 = 3
            boolean r15 = r13.a(r15)     // Catch: org.json.JSONException -> L20e
            if (r15 != 0) goto L190
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.b(r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L190
        L187:
            int r15 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r15) goto L190
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.b(r4, r3)     // Catch: org.json.JSONException -> L20e
        L190:
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r0 = 6
            r15.a(r0, r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L198:
            boolean r15 = r13.K     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L1a8
            boolean r15 = r13.a(r11)     // Catch: org.json.JSONException -> L20e
            if (r15 != 0) goto L1b1
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L1b1
        L1a8:
            int r15 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r15) goto L1b1
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r4, r3)     // Catch: org.json.JSONException -> L20e
        L1b1:
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r9, r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L1b7:
            org.json.JSONObject r15 = r5.optJSONObject(r0)     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L1c3
            java.lang.String r1 = "msg"
            java.lang.String r12 = r15.optString(r1)     // Catch: org.json.JSONException -> L20e
        L1c3:
            boolean r15 = android.text.TextUtils.isEmpty(r12)     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L1cd
            java.lang.String r12 = r5.optString(r0)     // Catch: org.json.JSONException -> L20e
        L1cd:
            boolean r15 = r13.K     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L1dd
            boolean r15 = r13.a(r8)     // Catch: org.json.JSONException -> L20e
            if (r15 != 0) goto L1e6
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r12)     // Catch: org.json.JSONException -> L20e
            goto L1e6
        L1dd:
            int r15 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r15) goto L1e6
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r12)     // Catch: org.json.JSONException -> L20e
        L1e6:
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r10, r4, r3)     // Catch: org.json.JSONException -> L20e
            goto L20a
        L1ec:
            boolean r15 = r13.K     // Catch: org.json.JSONException -> L20e
            if (r15 == 0) goto L1fc
            boolean r15 = r13.a(r8)     // Catch: org.json.JSONException -> L20e
            if (r15 != 0) goto L205
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a()     // Catch: org.json.JSONException -> L20e
            goto L205
        L1fc:
            int r15 = r13.L     // Catch: org.json.JSONException -> L20e
            if (r2 == r15) goto L205
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a()     // Catch: org.json.JSONException -> L20e
        L205:
            com.mbridge.msdk.video.bt.module.a.a r15 = r13.E     // Catch: org.json.JSONException -> L20e
            r15.a(r11, r4, r3)     // Catch: org.json.JSONException -> L20e
        L20a:
            r13.a(r14)     // Catch: org.json.JSONException -> L20e
            goto L225
        L20e:
            r15 = move-exception
            java.lang.String r0 = r15.getMessage()
            r13.a(r14, r0)
            java.lang.String r14 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r15 = r15.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r14, r15)
            goto L225
        L220:
            java.lang.String r15 = "listener is null"
            r13.a(r14, r15)
        L225:
            return
    }

    public void setBTContainerCallback(com.mbridge.msdk.video.bt.module.a.a r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public void setCampaignDownLoadTasks(java.util.List<com.mbridge.msdk.videocommon.download.a> r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setCampaigns(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public void setChoiceOneCallback(com.mbridge.msdk.video.dynview.e.d r1) {
            r0 = this;
            r0.P = r1
            return
    }

    public void setDeveloperExtraData(java.lang.String r1) {
            r0 = this;
            r0.O = r1
            return
    }

    public void setJSFactory(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setNotchPadding(int r17, int r18, int r19, int r20, int r21) {
            r16 = this;
            r1 = r16
            r8 = r18
            r9 = r19
            r10 = r20
            r11 = r21
            java.lang.String r12 = com.mbridge.msdk.foundation.tools.m.a(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.tools.z.d(r0, r12)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.f     // Catch: java.lang.Throwable -> L101
            java.lang.String r13 = "oncutoutfetched"
            r14 = 0
            if (r0 == 0) goto L46
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.f     // Catch: java.lang.Throwable -> L101
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L101
            boolean r0 = r0 instanceof com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L101
            if (r0 == 0) goto L46
            boolean r0 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L101
            if (r0 != 0) goto L46
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.f     // Catch: java.lang.Throwable -> L101
            java.lang.Object r0 = r0.getObject()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.video.js.a.j r0 = (com.mbridge.msdk.video.js.a.j) r0     // Catch: java.lang.Throwable -> L101
            r0.b(r12)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r1.f     // Catch: java.lang.Throwable -> L101
            byte[] r3 = r12.getBytes()     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r14)     // Catch: java.lang.Throwable -> L101
            r0.a(r2, r13, r3)     // Catch: java.lang.Throwable -> L101
        L46:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.C     // Catch: java.lang.Throwable -> L101
            if (r0 == 0) goto L8f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.C     // Catch: java.lang.Throwable -> L101
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L101
            if (r0 <= 0) goto L8f
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.C     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            java.lang.Object r0 = r0.get(r14)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            if (r0 == 0) goto L8f
            android.widget.TextView r0 = r1.i     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            if (r0 == 0) goto L8f
            android.widget.TextView r0 = r1.i     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            if (r0 != 0) goto L6f
            goto L8f
        L6f:
            if (r8 <= 0) goto L73
            r0.leftMargin = r8     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
        L73:
            if (r9 <= 0) goto L77
            r0.rightMargin = r9     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
        L77:
            if (r10 <= 0) goto L7b
            r0.topMargin = r10     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
        L7b:
            if (r11 <= 0) goto L7f
            r0.bottomMargin = r11     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
        L7f:
            android.widget.TextView r2 = r1.i     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L85 java.lang.Throwable -> L101
            goto L8f
        L85:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Throwable -> L101
        L8f:
            com.mbridge.msdk.video.bt.a.c r2 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L101
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L101
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L101
            java.lang.String r2 = r1.k     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = r1.J     // Catch: java.lang.Throwable -> L101
            java.util.LinkedHashMap r0 = r0.b(r2, r3)     // Catch: java.lang.Throwable -> L101
            if (r0 == 0) goto L10b
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L101
            if (r2 <= 0) goto L10b
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L101
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L101
        Lbc:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L101
            if (r2 == 0) goto L10b
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L101
            r15 = r2
            android.view.View r15 = (android.view.View) r15     // Catch: java.lang.Throwable -> L101
            boolean r2 = r15 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L101
            if (r2 == 0) goto Ld3
            r2 = r15
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r2     // Catch: java.lang.Throwable -> L101
            r2.setNotchPadding(r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L101
        Ld3:
            boolean r2 = r15 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L101
            if (r2 == 0) goto Le7
            r2 = r15
            com.mbridge.msdk.video.bt.module.MBTempContainer r2 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r2     // Catch: java.lang.Throwable -> L101
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r2.setNotchPadding(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L101
        Le7:
            boolean r2 = r15 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L101
            if (r2 == 0) goto Lbc
            boolean r2 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L101
            if (r2 != 0) goto Lbc
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L101
            byte[] r3 = r12.getBytes()     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r14)     // Catch: java.lang.Throwable -> L101
            r2.a(r15, r13, r3)     // Catch: java.lang.Throwable -> L101
            goto Lbc
        L101:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.video.bt.module.MBridgeBTContainer.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
        L10b:
            return
    }

    public void setShowRewardVideoListener(com.mbridge.msdk.video.bt.module.b.h r1) {
            r0 = this;
            r0.F = r1
            return
    }
}
