package com.mbridge.msdk.reward.adapter;

public final class c {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c.a> b;
    private final com.mbridge.msdk.reward.adapter.c.h a;
    private boolean c;
    private volatile java.util.List<com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView> d;





    private static class a {
        boolean a;
        boolean b;
        int c;
        int d;
        java.lang.String e;
        java.lang.String f;
        int g;
        java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> h;
        java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> i;

        public a(boolean r1, boolean r2, int r3, int r4, java.lang.String r5, java.lang.String r6, int r7, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
                r1.<init>(r8)
                r0.i = r1
                return
        }
    }

    private static class b extends com.mbridge.msdk.mbjscommon.c.a {
        private final android.os.Handler a;
        private final java.lang.Runnable b;
        private final boolean c;
        private final boolean d;
        private int e;
        private java.lang.String f;
        private java.lang.String g;
        private java.lang.String h;
        private java.lang.String i;
        private com.mbridge.msdk.videocommon.a.a j;
        private com.mbridge.msdk.foundation.entity.CampaignEx k;
        private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> l;
        private com.mbridge.msdk.videocommon.d.c m;
        private final com.mbridge.msdk.reward.adapter.c.j n;
        private boolean o;
        private boolean p;
        private boolean q;
        private int r;
        private boolean s;
        private long t;

        public b(boolean r4, android.os.Handler r5, java.lang.Runnable r6, boolean r7, boolean r8, int r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, com.mbridge.msdk.videocommon.a.a r14, com.mbridge.msdk.foundation.entity.CampaignEx r15, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r16, com.mbridge.msdk.videocommon.d.c r17, com.mbridge.msdk.reward.adapter.c.j r18, boolean r19, long r20) {
                r3 = this;
                r0 = r3
                r3.<init>()
                r1 = 0
                r0.r = r1
                r1 = r5
                r0.a = r1
                r1 = r6
                r0.b = r1
                r1 = r7
                r0.c = r1
                r1 = r8
                r0.d = r1
                r1 = r9
                r0.e = r1
                r1 = r10
                r0.f = r1
                r1 = r11
                r0.h = r1
                r1 = r12
                r0.g = r1
                r1 = r13
                r0.i = r1
                r1 = r14
                r0.j = r1
                r1 = r15
                r0.k = r1
                r1 = r16
                r0.l = r1
                r1 = r17
                r0.m = r1
                r1 = r18
                r0.n = r1
                r1 = r19
                r0.o = r1
                r1 = r4
                r0.s = r1
                r1 = r20
                r0.t = r1
                java.lang.String r1 = "RewardCampaignsResourceManager_test"
                java.lang.String r2 = "开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                return
        }

        @Override
        public final void a(android.webkit.WebView r12, int r13) {
                r11 = this;
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r0 = "收到大模板 readyState 回调: "
                r12.append(r0)
                r12.append(r13)
                java.lang.String r12 = r12.toString()
                java.lang.String r0 = "RewardCampaignsResourceManager_test"
                com.mbridge.msdk.foundation.tools.z.a(r0, r12)
                boolean r12 = r11.q
                if (r12 != 0) goto L1b0
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.k     // Catch: java.lang.Exception -> L4b
                com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4b
                android.content.Context r1 = r12.j()     // Catch: java.lang.Exception -> L4b
                java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
                r12.<init>()     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = "preload tpl readyState: "
                r12.append(r2)     // Catch: java.lang.Exception -> L4b
                r12.append(r13)     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = r12.toString()     // Catch: java.lang.Exception -> L4b
                java.lang.String r3 = r11.g     // Catch: java.lang.Exception -> L4b
                boolean r4 = r11.d     // Catch: java.lang.Exception -> L4b
                java.lang.String r5 = r11.i     // Catch: java.lang.Exception -> L4b
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.k     // Catch: java.lang.Exception -> L4b
                java.lang.String r6 = r12.getRequestIdNotice()     // Catch: java.lang.Exception -> L4b
                long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4b
                long r9 = r11.t     // Catch: java.lang.Exception -> L4b
                long r7 = r7 - r9
                com.mbridge.msdk.reward.b.a.a(r0, r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4b
            L4b:
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r0 = r11.g
                r12.append(r0)
                java.lang.String r0 = "_"
                r12.append(r0)
                java.lang.String r1 = r11.f
                r12.append(r1)
                java.lang.String r3 = r12.toString()
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r1 = "CampaignTPLWindVaneWebviewClient 开始预加载大模板资源 readyState： "
                r12.append(r1)
                r12.append(r13)
                java.lang.String r1 = " isCache: "
                r12.append(r1)
                boolean r1 = r11.o
                r12.append(r1)
                java.lang.String r12 = r12.toString()
                java.lang.String r1 = "test_pre_load_tpl"
                com.mbridge.msdk.foundation.tools.z.a(r1, r12)
                r12 = 1
                if (r13 != r12) goto L16e
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r4 = "CampaignTPLWindVaneWebviewClient templete preload readyState state = "
                r2.append(r4)
                r2.append(r13)
                java.lang.String r13 = r2.toString()
                java.lang.String r2 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r2, r13)
                boolean r13 = r11.o
                if (r13 == 0) goto Lba
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                r13.<init>()
                java.lang.String r4 = r11.g
                r13.append(r4)
                r13.append(r0)
                java.lang.String r4 = r11.i
                r13.append(r4)
                java.lang.String r13 = r13.toString()
                com.mbridge.msdk.videocommon.a.e(r13)
                goto Ld3
            Lba:
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                r13.<init>()
                java.lang.String r4 = r11.g
                r13.append(r4)
                r13.append(r0)
                java.lang.String r4 = r11.i
                r13.append(r4)
                java.lang.String r13 = r13.toString()
                com.mbridge.msdk.videocommon.a.d(r13)
            Ld3:
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                r13.<init>()
                java.lang.String r4 = "添加大模板： "
                r13.append(r4)
                java.lang.String r4 = r11.g
                r13.append(r4)
                r13.append(r0)
                java.lang.String r4 = r11.i
                r13.append(r4)
                r13.append(r0)
                java.lang.String r4 = r11.f
                r13.append(r4)
                java.lang.String r13 = r13.toString()
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                r13.<init>()
                java.lang.String r1 = r11.g
                r13.append(r1)
                r13.append(r0)
                java.lang.String r1 = r11.i
                r13.append(r1)
                r13.append(r0)
                java.lang.String r1 = r11.f
                r13.append(r1)
                java.lang.String r13 = r13.toString()
                com.mbridge.msdk.videocommon.a$a r1 = r11.j
                boolean r4 = r11.o
                com.mbridge.msdk.videocommon.a.a(r13, r1, r12, r4)
                android.os.Handler r13 = r11.a
                if (r13 == 0) goto L129
                java.lang.Runnable r1 = r11.b
                if (r1 == 0) goto L129
                r13.removeCallbacks(r1)
            L129:
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r13 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r4 = r11.g
                r1.append(r4)
                r1.append(r0)
                java.lang.String r4 = r11.i
                r1.append(r4)
                r1.append(r0)
                java.lang.String r0 = r11.f
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r13.setTemplatePreLoadDone(r0, r12)
                com.mbridge.msdk.videocommon.a$a r13 = r11.j
                if (r13 == 0) goto L155
                r13.a(r12)
            L155:
                com.mbridge.msdk.reward.adapter.c$j r13 = r11.n
                if (r13 == 0) goto L1ae
                java.lang.String r13 = "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess "
                com.mbridge.msdk.foundation.tools.z.a(r2, r13)
                com.mbridge.msdk.reward.adapter.c$j r2 = r11.n
                java.lang.String r4 = r11.h
                java.lang.String r5 = r11.g
                java.lang.String r6 = r11.i
                java.lang.String r7 = r11.f
                com.mbridge.msdk.videocommon.a$a r8 = r11.j
                r2.a(r3, r4, r5, r6, r7, r8)
                goto L1ae
            L16e:
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r13 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r11.g
                r1.append(r2)
                r1.append(r0)
                java.lang.String r2 = r11.i
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r11.f
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r1 = 0
                r13.setTemplatePreLoadDone(r0, r1)
                com.mbridge.msdk.videocommon.a$a r13 = r11.j
                if (r13 == 0) goto L19b
                r13.a(r1)
            L19b:
                com.mbridge.msdk.reward.adapter.c$j r2 = r11.n
                if (r2 == 0) goto L1ae
                java.lang.String r4 = r11.h
                java.lang.String r5 = r11.g
                java.lang.String r6 = r11.i
                java.lang.String r7 = r11.f
                com.mbridge.msdk.videocommon.a$a r8 = r11.j
                java.lang.String r9 = "state 2"
                r2.a(r3, r4, r5, r6, r7, r8, r9)
            L1ae:
                r11.q = r12
            L1b0:
                return
        }

        @Override
        public final void a(android.webkit.WebView r10, int r11, java.lang.String r12, java.lang.String r13) {
                r9 = this;
                super.a(r10, r11, r12, r13)
                java.lang.StringBuilder r10 = new java.lang.StringBuilder
                r10.<init>()
                java.lang.String r13 = "onReceivedError： "
                r10.append(r13)
                r10.append(r11)
                java.lang.String r11 = "  "
                r10.append(r11)
                r10.append(r12)
                java.lang.String r10 = r10.toString()
                java.lang.String r11 = "RewardCampaignsResourceManager_test"
                com.mbridge.msdk.foundation.tools.z.a(r11, r10)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r10 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r11 = new java.lang.StringBuilder
                r11.<init>()
                java.lang.String r13 = r9.g
                r11.append(r13)
                java.lang.String r13 = "_"
                r11.append(r13)
                java.lang.String r0 = r9.i
                r11.append(r0)
                r11.append(r13)
                java.lang.String r0 = r9.f
                r11.append(r0)
                java.lang.String r11 = r11.toString()
                r0 = 0
                r10.setTemplatePreLoadDone(r11, r0)
                com.mbridge.msdk.reward.adapter.c$j r10 = r9.n
                if (r10 == 0) goto L7a
                java.lang.StringBuilder r10 = new java.lang.StringBuilder
                r10.<init>()
                java.lang.String r11 = r9.g
                r10.append(r11)
                r10.append(r13)
                java.lang.String r11 = r9.f
                r10.append(r11)
                java.lang.String r2 = r10.toString()
                com.mbridge.msdk.videocommon.a$a r10 = r9.j
                if (r10 == 0) goto L6a
                r10.a(r0)
            L6a:
                com.mbridge.msdk.reward.adapter.c$j r1 = r9.n
                java.lang.String r3 = r9.h
                java.lang.String r4 = r9.g
                java.lang.String r5 = r9.i
                java.lang.String r6 = r9.f
                com.mbridge.msdk.videocommon.a$a r7 = r9.j
                r8 = r12
                r1.a(r2, r3, r4, r5, r6, r7, r8)
            L7a:
                return
        }

        @Override
        public final void a(android.webkit.WebView r13, java.lang.String r14) {
                r12 = this;
                super.a(r13, r14)
                java.lang.String r0 = "RewardCampaignsResourceManager_test"
                java.lang.String r1 = "onPageFinished"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                boolean r0 = r12.p
                if (r0 != 0) goto Lb2
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.k     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L30
                android.content.Context r2 = r0.j()     // Catch: java.lang.Exception -> L30
                java.lang.String r3 = "preload tpl onPageFinish"
                java.lang.String r4 = r12.g     // Catch: java.lang.Exception -> L30
                boolean r5 = r12.d     // Catch: java.lang.Exception -> L30
                java.lang.String r6 = r12.i     // Catch: java.lang.Exception -> L30
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.k     // Catch: java.lang.Exception -> L30
                java.lang.String r7 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L30
                long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L30
                long r10 = r12.t     // Catch: java.lang.Exception -> L30
                long r8 = r8 - r10
                com.mbridge.msdk.reward.b.a.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L30
            L30:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r12.g
                r0.append(r1)
                java.lang.String r1 = "_"
                r0.append(r1)
                java.lang.String r2 = r12.f
                r0.append(r2)
                java.lang.String r4 = r0.toString()
                java.lang.String r0 = "wfr=1"
                boolean r14 = r14.contains(r0)
                r0 = 1
                if (r14 != 0) goto La9
                java.lang.String r14 = "RVWindVaneWebView"
                java.lang.String r2 = "CampaignTPLWindVaneWebviewClient templete preload wfr=1 不包含 "
                com.mbridge.msdk.foundation.tools.z.a(r14, r2)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r14 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r12.g
                r2.append(r3)
                r2.append(r1)
                java.lang.String r3 = r12.i
                r2.append(r3)
                r2.append(r1)
                java.lang.String r1 = r12.f
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                r14.setTemplatePreLoadDone(r1, r0)
                android.os.Handler r14 = r12.a
                if (r14 == 0) goto L88
                java.lang.Runnable r1 = r12.b
                if (r1 == 0) goto L88
                r14.removeCallbacks(r1)
            L88:
                com.mbridge.msdk.videocommon.a$a r14 = r12.j
                if (r14 == 0) goto L8f
                r14.a(r0)
            L8f:
                com.mbridge.msdk.reward.adapter.c$j r14 = r12.n
                if (r14 == 0) goto La9
                java.lang.String r14 = "RewardCampaignsResourceManager"
                java.lang.String r1 = "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess "
                com.mbridge.msdk.foundation.tools.z.a(r14, r1)
                com.mbridge.msdk.reward.adapter.c$j r3 = r12.n
                java.lang.String r5 = r12.h
                java.lang.String r6 = r12.g
                java.lang.String r7 = r12.i
                java.lang.String r8 = r12.f
                com.mbridge.msdk.videocommon.a$a r9 = r12.j
                r3.a(r4, r5, r6, r7, r8, r9)
            La9:
                com.mbridge.msdk.mbjscommon.windvane.h r14 = com.mbridge.msdk.mbjscommon.windvane.h.a()
                r14.a(r13)
                r12.p = r0
            Lb2:
                return
        }

        @Override
        public final void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5, int r6, int r7) {
                r2 = this;
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r0 = "loadAds: unitID "
                r3.append(r0)
                r3.append(r5)
                java.lang.String r0 = " type "
                r3.append(r0)
                r3.append(r6)
                java.lang.String r0 = " adType "
                r3.append(r0)
                r3.append(r7)
                java.lang.String r3 = r3.toString()
                java.lang.String r0 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                r3 = 1
                if (r6 != r3) goto L49
                com.mbridge.msdk.reward.a.a r6 = new com.mbridge.msdk.reward.a.a     // Catch: java.lang.Exception -> L49
                r6.<init>()     // Catch: java.lang.Exception -> L49
                r0 = 0
                r6.b(r0)     // Catch: java.lang.Exception -> L49
                r1 = 2
                if (r7 != r1) goto L36
                goto L37
            L36:
                r3 = r0
            L37:
                r6.a(r3)     // Catch: java.lang.Exception -> L49
                r6.b(r4, r5)     // Catch: java.lang.Exception -> L49
                com.mbridge.msdk.video.bt.module.b.a r3 = new com.mbridge.msdk.video.bt.module.b.a     // Catch: java.lang.Exception -> L49
                r4 = 0
                r3.<init>(r4)     // Catch: java.lang.Exception -> L49
                r6.a(r3)     // Catch: java.lang.Exception -> L49
                r6.d(r0)     // Catch: java.lang.Exception -> L49
            L49:
                return
        }

        @Override
        public final void a(java.lang.Object r18, java.lang.String r19) {
                r17 = this;
                r1 = r17
                r0 = r18
                java.lang.String r2 = "id"
                java.lang.String r3 = "RewardCampaignsResourceManager_test"
                java.lang.String r4 = "====开始预加载播放模板===="
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)
                if (r0 == 0) goto L168
                boolean r4 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Throwable -> L166
                if (r4 != 0) goto L168
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L166
                r5 = r19
                r4.<init>(r5)     // Catch: java.lang.Throwable -> L166
                java.lang.String r13 = r4.optString(r2)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.video.bt.a.c r4 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L166
                r4.a(r0, r13)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.video.bt.a.c r4 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L166
                java.lang.String r11 = r4.c(r13)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.video.bt.a.c r4 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.foundation.entity.CampaignEx r9 = r4.a(r13)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.video.bt.a.c r4 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.videocommon.d.c r12 = r4.b(r13)     // Catch: java.lang.Throwable -> L166
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L166
                r4.<init>()     // Catch: java.lang.Throwable -> L166
                java.lang.String r5 = "preloadSubPlayTemplateView id = "
                r4.append(r5)     // Catch: java.lang.Throwable -> L166
                r4.append(r13)     // Catch: java.lang.Throwable -> L166
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)     // Catch: java.lang.Throwable -> L166
                java.util.concurrent.CopyOnWriteArrayList r10 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L166
                r10.<init>()     // Catch: java.lang.Throwable -> L166
                r10.add(r9)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r0.a     // Catch: java.lang.Throwable -> L166
                boolean r4 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L166
                if (r4 == 0) goto L160
                java.lang.String r4 = "开始预加载播放模板 00 "
                com.mbridge.msdk.foundation.tools.z.a(r3, r4)     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r0.a     // Catch: java.lang.Throwable -> L166
                com.mbridge.msdk.reward.adapter.c r6 = com.mbridge.msdk.reward.adapter.c.m.a()     // Catch: java.lang.Throwable -> L166
                boolean r7 = r1.s     // Catch: java.lang.Throwable -> L166
                int r0 = r1.r     // Catch: java.lang.Throwable -> L166
                if (r0 != 0) goto L76
                r0 = 3
                goto L77
            L76:
                r0 = 6
            L77:
                if (r8 == 0) goto L157
                java.lang.String r4 = "onSubPlayTemplateViewLoad"
                java.lang.String r5 = "data"
                java.lang.String r14 = "data is null"
                java.lang.String r15 = "error"
                java.lang.String r3 = "result"
                java.lang.String r1 = "RewardCampaignsResourceManager"
                if (r9 == 0) goto L11a
                if (r12 == 0) goto L11a
                com.mbridge.msdk.foundation.entity.CampaignEx$c r16 = r9.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L153
                if (r16 == 0) goto L11a
                boolean r16 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L153
                if (r16 == 0) goto L97
                goto L11a
            L97:
                com.mbridge.msdk.foundation.entity.CampaignEx$c r16 = r9.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L153
                java.lang.String r16 = r16.e()     // Catch: java.lang.Throwable -> L153
                boolean r16 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Throwable -> L153
                if (r16 == 0) goto Le0
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L153
                r0.<init>()     // Catch: java.lang.Throwable -> L153
                r0.put(r2, r13)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r2.<init>()     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r6 = 1
                r2.put(r3, r6)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r2.put(r15, r14)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r0.put(r5, r2)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r3 = 2
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                r2.a(r8, r4, r0)     // Catch: java.lang.Exception -> Ld2 java.lang.Throwable -> L153
                goto L157
            Ld2:
                r0 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L153
                if (r2 == 0) goto L157
                java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L153
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L153
                goto L157
            Le0:
                com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r9.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L153
                java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> L153
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L153
                if (r2 != 0) goto L104
                com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r9.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L153
                java.lang.String r2 = r2.e()     // Catch: java.lang.Throwable -> L153
                java.lang.String r3 = "cmpt=1"
                boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> L153
                if (r2 == 0) goto L104
                java.lang.String r0 = "getTeamplateUrl contains cmpt=1"
                com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Throwable -> L153
                goto L157
            L104:
                android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L153
                android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L153
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L153
                com.mbridge.msdk.reward.adapter.c$4 r2 = new com.mbridge.msdk.reward.adapter.c$4     // Catch: java.lang.Throwable -> L153
                r5 = r2
                r5.<init>(r6, r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L153
                int r0 = r0 * 1000
                long r3 = (long) r0     // Catch: java.lang.Throwable -> L153
                r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L153
                goto L157
            L11a:
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L153
                r0.<init>()     // Catch: java.lang.Throwable -> L153
                r0.put(r2, r13)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r2.<init>()     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r6 = 2
                r2.put(r3, r6)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r2.put(r15, r14)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r0.put(r5, r2)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r3 = 2
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                r2.a(r8, r4, r0)     // Catch: java.lang.Exception -> L146 java.lang.Throwable -> L153
                goto L157
            L146:
                r0 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L153
                if (r2 == 0) goto L157
                java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L153
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L153
                goto L157
            L153:
                r0 = move-exception
                r1 = r17
                goto L16e
            L157:
                r1 = r17
                int r0 = r1.r     // Catch: java.lang.Throwable -> L166
                r2 = 1
                int r0 = r0 + r2
                r1.r = r0     // Catch: java.lang.Throwable -> L166
                goto L177
            L160:
                java.lang.String r0 = "开始预加载播放模板 11 "
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L166
                goto L177
            L166:
                r0 = move-exception
                goto L16e
            L168:
                java.lang.String r0 = "preloadSubPlayTemplateView: RewardCampaignsResourceManager  object or params null"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L166
                goto L177
            L16e:
                java.lang.String r0 = r0.getMessage()
                java.lang.String r2 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            L177:
                return
        }
    }

    public interface c {
        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r4);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r4, java.lang.String r5);
    }

    private static final class d implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IH5SourceDownloadListener {
        private boolean a;
        private int b;
        private final java.lang.String c;
        private final java.lang.String d;
        private final java.lang.String e;
        private com.mbridge.msdk.foundation.entity.CampaignEx f;
        private com.mbridge.msdk.reward.adapter.c.i g;
        private android.os.Handler h;
        private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> i;
        private final long j;

        public d(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, com.mbridge.msdk.reward.adapter.c.i r7, android.os.Handler r8, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r9) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r2
                r1.c = r3
                r1.d = r4
                r1.e = r5
                r1.f = r6
                r1.g = r7
                r1.h = r8
                r1.i = r9
                long r2 = java.lang.System.currentTimeMillis()
                r1.j = r2
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onFailed(java.lang.String r12, java.lang.String r13) {
                r11 = this;
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r1 = 0
                r0.setZipDownloadDone(r12, r1)
                int r0 = r11.b
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "url"
                r3 = 201(0xc9, float:2.82E-43)
                java.lang.String r4 = "message"
                java.lang.String r5 = "request_id"
                java.lang.String r6 = "unit_id"
                if (r0 == r1) goto L111
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L5c
                r1 = 859(0x35b, float:1.204E-42)
                if (r0 == r1) goto L22
                goto L13b
            L22:
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 205(0xcd, float:2.87E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r11.d
                r1.putString(r6, r2)
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r3 = r11.c
                r1.putString(r2, r3)
                java.lang.String r2 = r11.e
                r1.putString(r5, r2)
                r1.putString(r4, r13)
                r0.setData(r1)
                android.os.Handler r1 = r11.h
                r1.sendMessage(r0)
                com.mbridge.msdk.reward.adapter.c$i r2 = r11.g
                if (r2 == 0) goto L13b
                java.lang.String r3 = r11.c
                java.lang.String r4 = r11.d
                java.lang.String r5 = r11.e
                r6 = r12
                r7 = r13
                r2.a(r3, r4, r5, r6, r7)
                goto L13b
            L5c:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r11.d
                r1.putString(r6, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r6 = r11.c
                r1.putString(r3, r6)
                java.lang.String r3 = r11.e
                r1.putString(r5, r3)
                r1.putString(r2, r12)
                r1.putString(r4, r13)
                r0.setData(r1)
                android.os.Handler r13 = r11.h
                r13.sendMessage(r0)
                boolean r13 = r11.a
                if (r13 == 0) goto L13b
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r11.j
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.entity.p r13 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L102
                java.lang.String r3 = "2000043"
                r4 = 21
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L102
                r2.<init>()     // Catch: java.lang.Exception -> L102
                r2.append(r0)     // Catch: java.lang.Exception -> L102
                java.lang.String r0 = ""
                r2.append(r0)     // Catch: java.lang.Exception -> L102
                java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.f     // Catch: java.lang.Exception -> L102
                java.lang.String r7 = r0.getId()     // Catch: java.lang.Exception -> L102
                java.lang.String r8 = r11.d     // Catch: java.lang.Exception -> L102
                java.lang.String r9 = "url download failed"
                java.lang.String r10 = "2"
                r2 = r13
                r6 = r12
                r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                java.lang.String r12 = r12.getRequestId()     // Catch: java.lang.Exception -> L102
                r13.k(r12)     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                java.lang.String r12 = r12.getRequestIdNotice()     // Catch: java.lang.Exception -> L102
                r13.l(r12)     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                java.lang.String r12 = r12.getId()     // Catch: java.lang.Exception -> L102
                r13.n(r12)     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                int r12 = r12.getAdSpaceT()     // Catch: java.lang.Exception -> L102
                r13.b(r12)     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                int r12 = r12.getAdType()     // Catch: java.lang.Exception -> L102
                r0 = 287(0x11f, float:4.02E-43)
                if (r12 != r0) goto Led
                java.lang.String r12 = "3"
                r13.h(r12)     // Catch: java.lang.Exception -> L102
                goto Lfc
            Led:
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.f     // Catch: java.lang.Exception -> L102
                int r12 = r12.getAdType()     // Catch: java.lang.Exception -> L102
                r0 = 94
                if (r12 != r0) goto Lfc
                java.lang.String r12 = "1"
                r13.h(r12)     // Catch: java.lang.Exception -> L102
            Lfc:
                java.lang.String r12 = r11.d     // Catch: java.lang.Exception -> L102
                com.mbridge.msdk.foundation.same.report.c.a(r13, r12)     // Catch: java.lang.Exception -> L102
                goto L13b
            L102:
                r12 = move-exception
                boolean r13 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r13 == 0) goto L13b
                java.lang.String r12 = r12.getLocalizedMessage()
                java.lang.String r13 = "RewardCampaignsResourceManager"
                com.mbridge.msdk.foundation.tools.z.d(r13, r12)
                goto L13b
            L111:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r11.d
                r1.putString(r6, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r6 = r11.c
                r1.putString(r3, r6)
                java.lang.String r3 = r11.e
                r1.putString(r5, r3)
                r1.putString(r2, r12)
                r1.putString(r4, r13)
                r0.setData(r1)
                android.os.Handler r12 = r11.h
                r12.sendMessage(r0)
            L13b:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r13) {
                r12 = this;
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r1 = 1
                r0.setZipDownloadDone(r13, r1)
                int r0 = r12.b
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "url"
                r3 = 101(0x65, float:1.42E-43)
                java.lang.String r4 = "request_id"
                java.lang.String r5 = "unit_id"
                if (r0 == r1) goto L107
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L55
                r1 = 859(0x35b, float:1.204E-42)
                if (r0 == r1) goto L20
                goto L12e
            L20:
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 105(0x69, float:1.47E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r12.d
                r1.putString(r5, r2)
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r3 = r12.c
                r1.putString(r2, r3)
                java.lang.String r2 = r12.e
                r1.putString(r4, r2)
                r0.setData(r1)
                android.os.Handler r1 = r12.h
                r1.sendMessage(r0)
                com.mbridge.msdk.reward.adapter.c$i r0 = r12.g
                if (r0 == 0) goto L12e
                java.lang.String r1 = r12.c
                java.lang.String r2 = r12.d
                java.lang.String r3 = r12.e
                r0.a(r1, r2, r3, r13)
                goto L12e
            L55:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r12.d
                r1.putString(r5, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r5 = r12.c
                r1.putString(r3, r5)
                java.lang.String r3 = r12.e
                r1.putString(r4, r3)
                r1.putString(r2, r13)
                r0.setData(r1)
                android.os.Handler r1 = r12.h
                r1.sendMessage(r0)
                boolean r0 = r12.a
                if (r0 == 0) goto L12e
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r12.j
                long r0 = r0 - r2
                com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> Lf8
                java.lang.String r3 = "2000043"
                r4 = 20
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf8
                r2.<init>()     // Catch: java.lang.Exception -> Lf8
                r2.append(r0)     // Catch: java.lang.Exception -> Lf8
                java.lang.String r0 = ""
                r2.append(r0)     // Catch: java.lang.Exception -> Lf8
                java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.f     // Catch: java.lang.Exception -> Lf8
                java.lang.String r7 = r0.getId()     // Catch: java.lang.Exception -> Lf8
                java.lang.String r8 = r12.d     // Catch: java.lang.Exception -> Lf8
                java.lang.String r9 = ""
                java.lang.String r10 = "2"
                r2 = r11
                r6 = r13
                r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                java.lang.String r13 = r13.getRequestId()     // Catch: java.lang.Exception -> Lf8
                r11.k(r13)     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                java.lang.String r13 = r13.getRequestIdNotice()     // Catch: java.lang.Exception -> Lf8
                r11.l(r13)     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> Lf8
                r11.n(r13)     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                int r13 = r13.getAdSpaceT()     // Catch: java.lang.Exception -> Lf8
                r11.b(r13)     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                int r13 = r13.getAdType()     // Catch: java.lang.Exception -> Lf8
                r0 = 287(0x11f, float:4.02E-43)
                if (r13 != r0) goto Le3
                java.lang.String r13 = "3"
                r11.h(r13)     // Catch: java.lang.Exception -> Lf8
                goto Lf2
            Le3:
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.f     // Catch: java.lang.Exception -> Lf8
                int r13 = r13.getAdType()     // Catch: java.lang.Exception -> Lf8
                r0 = 94
                if (r13 != r0) goto Lf2
                java.lang.String r13 = "1"
                r11.h(r13)     // Catch: java.lang.Exception -> Lf8
            Lf2:
                java.lang.String r13 = r12.d     // Catch: java.lang.Exception -> Lf8
                com.mbridge.msdk.foundation.same.report.c.a(r11, r13)     // Catch: java.lang.Exception -> Lf8
                goto L12e
            Lf8:
                r13 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L12e
                java.lang.String r13 = r13.getLocalizedMessage()
                java.lang.String r0 = "RewardCampaignsResourceManager"
                com.mbridge.msdk.foundation.tools.z.d(r0, r13)
                goto L12e
            L107:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r12.d
                r1.putString(r5, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r5 = r12.c
                r1.putString(r3, r5)
                java.lang.String r3 = r12.e
                r1.putString(r4, r3)
                r1.putString(r2, r13)
                r0.setData(r1)
                android.os.Handler r13 = r12.h
                r13.sendMessage(r0)
            L12e:
                return
        }
    }

    private static final class e implements com.mbridge.msdk.foundation.same.c.c {
        private android.os.Handler a;
        private int b;
        private java.lang.String c;
        private java.lang.String d;
        private java.lang.String e;
        private com.mbridge.msdk.foundation.entity.CampaignEx f;


        public e(android.os.Handler r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.d = r3
                r0.c = r4
                r0.e = r5
                r0.f = r6
                return
        }

        static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.reward.adapter.c.e r0) {
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.f
                return r0
        }

        static java.lang.String b(com.mbridge.msdk.reward.adapter.c.e r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        @Override
        public final void onFailedLoad(java.lang.String r4, java.lang.String r5) {
                r3 = this;
                android.os.Message r5 = android.os.Message.obtain()
                int r0 = r3.b
                if (r0 != 0) goto Lb
                r0 = 202(0xca, float:2.83E-43)
                goto Ld
            Lb:
                r0 = 204(0xcc, float:2.86E-43)
            Ld:
                r5.what = r0
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.lang.String r1 = r3.c
                java.lang.String r2 = "unit_id"
                r0.putString(r2, r1)
                java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r2 = r3.d
                r0.putString(r1, r2)
                java.lang.String r1 = r3.e
                java.lang.String r2 = "request_id"
                r0.putString(r2, r1)
                r5.setData(r0)
                android.os.Handler r0 = r3.a
                r0.sendMessage(r5)
                com.mbridge.msdk.reward.adapter.c$e$1 r5 = new com.mbridge.msdk.reward.adapter.c$e$1
                r5.<init>(r3, r4)
                com.mbridge.msdk.foundation.controller.b r4 = com.mbridge.msdk.foundation.controller.b.a()
                boolean r4 = r4.d()
                if (r4 == 0) goto L48
                java.util.concurrent.ThreadPoolExecutor r4 = com.mbridge.msdk.foundation.same.f.b.a()
                r4.execute(r5)
                goto L4b
            L48:
                r5.run()
            L4b:
                return
        }

        @Override
        public final void onSuccessLoad(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r3 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r0 = 1
                r3.setImageDownloadDone(r4, r0)
                android.os.Message r3 = android.os.Message.obtain()
                int r4 = r2.b
                if (r4 != 0) goto L13
                r4 = 102(0x66, float:1.43E-43)
                goto L15
            L13:
                r4 = 104(0x68, float:1.46E-43)
            L15:
                r3.what = r4
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                java.lang.String r0 = r2.c
                java.lang.String r1 = "unit_id"
                r4.putString(r1, r0)
                java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r1 = r2.d
                r4.putString(r0, r1)
                java.lang.String r0 = r2.e
                java.lang.String r1 = "request_id"
                r4.putString(r1, r0)
                r3.setData(r4)
                android.os.Handler r4 = r2.a
                r4.sendMessage(r3)
                return
        }
    }

    private static final class f implements com.mbridge.msdk.videocommon.listener.a {
        private android.os.Handler a;
        private final java.lang.String b;
        private final java.lang.String c;
        private final java.lang.String d;

        public f(android.os.Handler r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.c = r2
                r0.b = r3
                r0.d = r4
                return
        }

        @Override
        public final void a(java.lang.String r5) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Video 下载成功: "
                r0.append(r1)
                java.lang.String r1 = r4.d
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RewardCampaignsResourceManager"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r1 = 1
                r0.setVideoDownloadDone(r5, r1)
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 100
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r4.b
                java.lang.String r3 = "unit_id"
                r1.putString(r3, r2)
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r3 = r4.c
                r1.putString(r2, r3)
                java.lang.String r2 = r4.d
                java.lang.String r3 = "request_id"
                r1.putString(r3, r2)
                java.lang.String r2 = "url"
                r1.putString(r2, r5)
                r0.setData(r1)
                android.os.Handler r5 = r4.a
                r5.sendMessage(r0)
                return
        }

        @Override
        public final void a(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Video 下载失败： "
                r0.append(r1)
                r0.append(r5)
                java.lang.String r1 = " "
                r0.append(r1)
                java.lang.String r1 = r4.d
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RewardCampaignsResourceManager"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r1 = 0
                r0.setVideoDownloadDone(r6, r1)
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 200(0xc8, float:2.8E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r4.b
                java.lang.String r3 = "unit_id"
                r1.putString(r3, r2)
                java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r3 = r4.c
                r1.putString(r2, r3)
                java.lang.String r2 = r4.d
                java.lang.String r3 = "request_id"
                r1.putString(r3, r2)
                java.lang.String r2 = "url"
                r1.putString(r2, r6)
                java.lang.String r6 = "message"
                r1.putString(r6, r5)
                r0.setData(r1)
                android.os.Handler r5 = r4.a
                r5.sendMessage(r0)
                return
        }
    }

    private static final class g implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener {
        private boolean a;
        private android.content.Context b;
        private java.lang.String c;
        private java.lang.String d;
        private java.lang.String e;
        private com.mbridge.msdk.foundation.entity.CampaignEx f;
        private int g;
        private android.os.Handler h;
        private com.mbridge.msdk.reward.adapter.c.i i;
        private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> j;
        private long k;

        public g(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, int r7, android.os.Handler r8, com.mbridge.msdk.reward.adapter.c.i r9, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r10) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r2
                r1.d = r3
                r1.c = r4
                r1.e = r5
                r1.f = r6
                r1.g = r7
                r1.h = r8
                r1.i = r9
                r1.j = r10
                long r2 = java.lang.System.currentTimeMillis()
                r1.k = r2
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onFailed(java.lang.String r13, java.lang.String r14) {
                r12 = this;
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r1 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r2 = 0
                r1.setZipDownloadDone(r14, r2)
                long r1 = java.lang.System.currentTimeMillis()
                long r3 = r12.k
                long r1 = r1 - r3
                int r3 = r12.g
                r4 = 313(0x139, float:4.39E-43)
                java.lang.String r5 = "message"
                java.lang.String r6 = "url"
                java.lang.String r8 = "request_id"
                java.lang.String r9 = "unit_id"
                java.lang.String r10 = "RewardCampaignsResourceManager"
                if (r3 == r4) goto L19c
                r4 = 497(0x1f1, float:6.96E-43)
                if (r3 == r4) goto Ld5
                r1 = 859(0x35b, float:1.204E-42)
                if (r3 == r1) goto L29
                goto L1cd
            L29:
                java.lang.String r1 = "zip template download failed"
                com.mbridge.msdk.foundation.tools.z.a(r10, r1)
                android.os.Message r1 = android.os.Message.obtain()
                r2 = 203(0xcb, float:2.84E-43)
                r1.what = r2
                android.os.Bundle r2 = new android.os.Bundle
                r2.<init>()
                java.lang.String r3 = r12.c
                r2.putString(r9, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r4 = r12.d
                r2.putString(r3, r4)
                java.lang.String r3 = r12.e
                r2.putString(r8, r3)
                r2.putString(r6, r14)
                r2.putString(r5, r13)
                r1.setData(r2)
                android.os.Handler r2 = r12.h
                r2.sendMessage(r1)
                com.mbridge.msdk.reward.adapter.c$i r1 = r12.i
                if (r1 == 0) goto L69
                java.lang.String r2 = r12.d
                java.lang.String r3 = r12.c
                java.lang.String r4 = r12.e
                r5 = r14
                r6 = r13
                r1.a(r2, r3, r4, r5, r6)
            L69:
                com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> Lc7
                r1.<init>()     // Catch: java.lang.Exception -> Lc7
                java.lang.String r2 = "2000045"
                r1.o(r2)     // Catch: java.lang.Exception -> Lc7
                android.content.Context r2 = r12.b     // Catch: java.lang.Exception -> Lc7
                if (r2 == 0) goto L84
                android.content.Context r2 = r12.b     // Catch: java.lang.Exception -> Lc7
                android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Exception -> Lc7
                int r2 = com.mbridge.msdk.foundation.tools.v.D(r2)     // Catch: java.lang.Exception -> Lc7
                r1.c(r2)     // Catch: java.lang.Exception -> Lc7
            L84:
                r2 = 3
                r1.d(r2)     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.f     // Catch: java.lang.Exception -> Lc7
                if (r2 == 0) goto La7
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.f     // Catch: java.lang.Exception -> Lc7
                java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> Lc7
                r1.n(r2)     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.f     // Catch: java.lang.Exception -> Lc7
                java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> Lc7
                r1.k(r2)     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.f     // Catch: java.lang.Exception -> Lc7
                java.lang.String r2 = r2.getRequestIdNotice()     // Catch: java.lang.Exception -> Lc7
                r1.l(r2)     // Catch: java.lang.Exception -> Lc7
            La7:
                r1.i(r14)     // Catch: java.lang.Exception -> Lc7
                r1.p(r13)     // Catch: java.lang.Exception -> Lc7
                java.lang.String r0 = r12.c     // Catch: java.lang.Exception -> Lc7
                r1.m(r0)     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lc7
                android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> Lc7
                com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> Lc7
                r0.a(r1)     // Catch: java.lang.Exception -> Lc7
                goto L1cd
            Lc7:
                r0 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L1cd
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r10, r0)
                goto L1cd
            Ld5:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "zip endcard download failed:  "
                r3.append(r4)
                r3.append(r13)
                java.lang.String r3 = r3.toString()
                com.mbridge.msdk.foundation.tools.z.a(r10, r3)
                android.os.Message r3 = android.os.Message.obtain()
                r4 = 201(0xc9, float:2.82E-43)
                r3.what = r4
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                java.lang.String r11 = r12.c
                r4.putString(r9, r11)
                java.lang.String r9 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r11 = r12.d
                r4.putString(r9, r11)
                java.lang.String r9 = r12.e
                r4.putString(r8, r9)
                r4.putString(r6, r14)
                r4.putString(r5, r13)
                r3.setData(r4)
                android.os.Handler r0 = r12.h
                r0.sendMessage(r3)
                boolean r0 = r12.a
                if (r0 == 0) goto L1cd
                com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L18f
                java.lang.String r3 = "2000043"
                r4 = 3
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L18f
                r5.<init>()     // Catch: java.lang.Exception -> L18f
                r5.append(r1)     // Catch: java.lang.Exception -> L18f
                java.lang.String r1 = ""
                r5.append(r1)     // Catch: java.lang.Exception -> L18f
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                java.lang.String r6 = r1.getId()     // Catch: java.lang.Exception -> L18f
                java.lang.String r8 = r12.c     // Catch: java.lang.Exception -> L18f
                java.lang.String r9 = "zip download failed"
                java.lang.String r11 = "1"
                r1 = r0
                r2 = r3
                r3 = r4
                r4 = r5
                r5 = r14
                r7 = r8
                r8 = r9
                r9 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Exception -> L18f
                r0.k(r1)     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                java.lang.String r1 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L18f
                r0.l(r1)     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L18f
                r0.n(r1)     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                int r1 = r1.getAdSpaceT()     // Catch: java.lang.Exception -> L18f
                r0.b(r1)     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                int r1 = r1.getAdType()     // Catch: java.lang.Exception -> L18f
                r2 = 287(0x11f, float:4.02E-43)
                if (r1 != r2) goto L17a
                java.lang.String r1 = "3"
                r0.h(r1)     // Catch: java.lang.Exception -> L18f
                goto L189
            L17a:
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.f     // Catch: java.lang.Exception -> L18f
                int r1 = r1.getAdType()     // Catch: java.lang.Exception -> L18f
                r2 = 94
                if (r1 != r2) goto L189
                java.lang.String r1 = "1"
                r0.h(r1)     // Catch: java.lang.Exception -> L18f
            L189:
                java.lang.String r1 = r12.c     // Catch: java.lang.Exception -> L18f
                com.mbridge.msdk.foundation.same.report.c.a(r0, r1)     // Catch: java.lang.Exception -> L18f
                goto L1cd
            L18f:
                r0 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L1cd
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r10, r0)
                goto L1cd
            L19c:
                java.lang.String r1 = "zip pause download failed"
                com.mbridge.msdk.foundation.tools.z.a(r10, r1)
                android.os.Message r1 = android.os.Message.obtain()
                r2 = 101(0x65, float:1.42E-43)
                r1.what = r2
                android.os.Bundle r2 = new android.os.Bundle
                r2.<init>()
                java.lang.String r3 = r12.c
                r2.putString(r9, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r4 = r12.d
                r2.putString(r3, r4)
                java.lang.String r3 = r12.e
                r2.putString(r8, r3)
                r2.putString(r6, r14)
                r2.putString(r5, r13)
                r1.setData(r2)
                android.os.Handler r0 = r12.h
                r0.sendMessage(r1)
            L1cd:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r14) {
                r13 = this;
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r1 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                r2 = 1
                r1.setZipDownloadDone(r14, r2)
                long r3 = java.lang.System.currentTimeMillis()
                long r5 = r13.k
                long r3 = r3 - r5
                int r1 = r13.g
                r5 = 313(0x139, float:4.39E-43)
                java.lang.String r6 = "url"
                r7 = 101(0x65, float:1.42E-43)
                java.lang.String r8 = "request_id"
                java.lang.String r9 = "unit_id"
                java.lang.String r10 = "RewardCampaignsResourceManager"
                if (r1 == r5) goto L17b
                r5 = 497(0x1f1, float:6.96E-43)
                java.lang.String r11 = ""
                if (r1 == r5) goto Lce
                r3 = 859(0x35b, float:1.204E-42)
                if (r1 == r3) goto L2b
                goto L1a7
            L2b:
                java.lang.String r1 = "zip template download success"
                com.mbridge.msdk.foundation.tools.z.a(r10, r1)
                android.os.Message r1 = android.os.Message.obtain()
                r3 = 103(0x67, float:1.44E-43)
                r1.what = r3
                android.os.Bundle r3 = new android.os.Bundle
                r3.<init>()
                java.lang.String r4 = r13.c
                r3.putString(r9, r4)
                java.lang.String r4 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r5 = r13.d
                r3.putString(r4, r5)
                java.lang.String r4 = r13.e
                r3.putString(r8, r4)
                r1.setData(r3)
                android.os.Handler r3 = r13.h
                r3.sendMessage(r1)
                com.mbridge.msdk.reward.adapter.c$i r1 = r13.i
                if (r1 == 0) goto L63
                java.lang.String r3 = r13.d
                java.lang.String r4 = r13.c
                java.lang.String r5 = r13.e
                r1.a(r3, r4, r5, r14)
            L63:
                com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> Lc0
                r1.<init>()     // Catch: java.lang.Exception -> Lc0
                java.lang.String r3 = "2000045"
                r1.o(r3)     // Catch: java.lang.Exception -> Lc0
                android.content.Context r3 = r13.b     // Catch: java.lang.Exception -> Lc0
                if (r3 == 0) goto L7e
                android.content.Context r3 = r13.b     // Catch: java.lang.Exception -> Lc0
                android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Exception -> Lc0
                int r3 = com.mbridge.msdk.foundation.tools.v.D(r3)     // Catch: java.lang.Exception -> Lc0
                r1.c(r3)     // Catch: java.lang.Exception -> Lc0
            L7e:
                r1.d(r2)     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r13.f     // Catch: java.lang.Exception -> Lc0
                if (r2 == 0) goto La0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r13.f     // Catch: java.lang.Exception -> Lc0
                java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> Lc0
                r1.n(r2)     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r13.f     // Catch: java.lang.Exception -> Lc0
                java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> Lc0
                r1.k(r2)     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r13.f     // Catch: java.lang.Exception -> Lc0
                java.lang.String r2 = r2.getRequestIdNotice()     // Catch: java.lang.Exception -> Lc0
                r1.l(r2)     // Catch: java.lang.Exception -> Lc0
            La0:
                r1.i(r14)     // Catch: java.lang.Exception -> Lc0
                r1.p(r11)     // Catch: java.lang.Exception -> Lc0
                java.lang.String r0 = r13.c     // Catch: java.lang.Exception -> Lc0
                r1.m(r0)     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lc0
                android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> Lc0
                com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> Lc0
                r0.a(r1)     // Catch: java.lang.Exception -> Lc0
                goto L1a7
            Lc0:
                r0 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L1a7
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r10, r0)
                goto L1a7
            Lce:
                java.lang.String r1 = "zip endcard download success"
                com.mbridge.msdk.foundation.tools.z.a(r10, r1)
                android.os.Message r1 = android.os.Message.obtain()
                r1.what = r7
                android.os.Bundle r2 = new android.os.Bundle
                r2.<init>()
                java.lang.String r5 = r13.c
                r2.putString(r9, r5)
                java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r7 = r13.d
                r2.putString(r5, r7)
                java.lang.String r5 = r13.e
                r2.putString(r8, r5)
                r2.putString(r6, r14)
                r1.setData(r2)
                android.os.Handler r2 = r13.h
                r2.sendMessage(r1)
                boolean r1 = r13.a
                if (r1 == 0) goto L1a7
                com.mbridge.msdk.foundation.entity.p r12 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L16e
                java.lang.String r2 = "2000043"
                r5 = 14
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L16e
                r1.<init>()     // Catch: java.lang.Exception -> L16e
                r1.append(r3)     // Catch: java.lang.Exception -> L16e
                r1.append(r11)     // Catch: java.lang.Exception -> L16e
                java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r13.f     // Catch: java.lang.Exception -> L16e
                java.lang.String r6 = r1.getId()     // Catch: java.lang.Exception -> L16e
                java.lang.String r7 = r13.c     // Catch: java.lang.Exception -> L16e
                java.lang.String r8 = ""
                java.lang.String r9 = "1"
                r1 = r12
                r3 = r5
                r5 = r14
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Exception -> L16e
                r12.k(r0)     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                java.lang.String r0 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L16e
                r12.l(r0)     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                java.lang.String r0 = r0.getId()     // Catch: java.lang.Exception -> L16e
                r12.n(r0)     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                int r0 = r0.getAdSpaceT()     // Catch: java.lang.Exception -> L16e
                r12.b(r0)     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                int r0 = r0.getAdType()     // Catch: java.lang.Exception -> L16e
                r1 = 287(0x11f, float:4.02E-43)
                if (r0 != r1) goto L159
                java.lang.String r0 = "3"
                r12.h(r0)     // Catch: java.lang.Exception -> L16e
                goto L168
            L159:
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.f     // Catch: java.lang.Exception -> L16e
                int r0 = r0.getAdType()     // Catch: java.lang.Exception -> L16e
                r1 = 94
                if (r0 != r1) goto L168
                java.lang.String r0 = "1"
                r12.h(r0)     // Catch: java.lang.Exception -> L16e
            L168:
                java.lang.String r0 = r13.c     // Catch: java.lang.Exception -> L16e
                com.mbridge.msdk.foundation.same.report.c.a(r12, r0)     // Catch: java.lang.Exception -> L16e
                goto L1a7
            L16e:
                r0 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L1a7
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r10, r0)
                goto L1a7
            L17b:
                java.lang.String r1 = "zip pause download success"
                com.mbridge.msdk.foundation.tools.z.a(r10, r1)
                android.os.Message r1 = android.os.Message.obtain()
                r1.what = r7
                android.os.Bundle r2 = new android.os.Bundle
                r2.<init>()
                java.lang.String r3 = r13.c
                r2.putString(r9, r3)
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r4 = r13.d
                r2.putString(r3, r4)
                java.lang.String r3 = r13.e
                r2.putString(r8, r3)
                r2.putString(r6, r14)
                r1.setData(r2)
                android.os.Handler r0 = r13.h
                r0.sendMessage(r1)
            L1a7:
                return
        }
    }

    private static final class h extends android.os.Handler {
        private android.content.Context a;
        private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c.c> b;
        private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> c;

        public h(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>()
                r0.b = r1
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>()
                r0.c = r1
                return
        }

        public final void a(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, com.mbridge.msdk.reward.adapter.c.c r5) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r2 = r1.b
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r3)
                java.lang.String r3 = "_"
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                r2.put(r3, r5)
                return
        }

        public final void a(java.lang.String r2, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c
                r0.put(r2, r3)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r27) {
                r26 = this;
                r1 = r26
                r0 = r27
                android.os.Bundle r2 = r27.getData()
                java.lang.String r3 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
                java.lang.String r3 = r2.getString(r3)
                java.lang.String r4 = "unit_id"
                java.lang.String r10 = r2.getString(r4)
                java.lang.String r4 = "request_id"
                java.lang.String r11 = r2.getString(r4)
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r10)
                java.lang.String r5 = "_"
                r4.append(r5)
                r4.append(r11)
                java.lang.String r12 = r4.toString()
                java.util.concurrent.ConcurrentHashMap r4 = com.mbridge.msdk.reward.adapter.c.c()
                java.lang.Object r4 = r4.get(r12)
                r13 = r4
                com.mbridge.msdk.reward.adapter.c$a r13 = (com.mbridge.msdk.reward.adapter.c.a) r13
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r4 = r1.b
                java.lang.Object r4 = r4.get(r12)
                r14 = r4
                com.mbridge.msdk.reward.adapter.c$c r14 = (com.mbridge.msdk.reward.adapter.c.c) r14
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r4 = r1.c
                java.lang.Object r4 = r4.get(r12)
                r22 = r4
                java.util.concurrent.CopyOnWriteArrayList r22 = (java.util.concurrent.CopyOnWriteArrayList) r22
                java.lang.String r4 = "RewardCampaignsResourceManager"
                java.lang.String r5 = "收到 Message，开始判断"
                com.mbridge.msdk.foundation.tools.z.a(r4, r5)
                int r5 = r0.what
                r6 = 0
                switch(r5) {
                    case 100: goto L5e;
                    case 101: goto L5e;
                    case 102: goto L5e;
                    case 103: goto L5e;
                    case 104: goto L5e;
                    case 105: goto L5e;
                    default: goto L59;
                }
            L59:
                switch(r5) {
                    case 200: goto L62;
                    case 201: goto L62;
                    case 202: goto L5e;
                    case 203: goto L62;
                    case 204: goto L5e;
                    case 205: goto L62;
                    default: goto L5c;
                }
            L5c:
                goto L4a2
            L5e:
                r2 = r6
                r5 = r12
                goto L446
            L62:
                if (r13 == 0) goto L4a2
                if (r14 == 0) goto L4a2
                java.lang.String r5 = "message"
                java.lang.String r5 = r2.getString(r5)
                if (r5 != 0) goto L70
                java.lang.String r5 = ""
            L70:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r15 = "resource download failed "
                r7.append(r15)
                int r8 = r0.what
                java.lang.String r8 = com.mbridge.msdk.reward.adapter.c.a(r8)
                r7.append(r8)
                java.lang.String r8 = " "
                r7.append(r8)
                r7.append(r5)
                java.lang.String r9 = r7.toString()
                r5 = 0
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r13.h
                if (r7 == 0) goto La4
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r13.h
                int r7 = r7.size()
                if (r7 <= 0) goto La4
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r13.h
                java.lang.Object r5 = r5.get(r6)
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            La4:
                boolean r7 = r13.a     // Catch: java.lang.Exception -> L424
                r8 = 200(0xc8, float:2.8E-43)
                r23 = 2
                r6 = 1
                if (r7 == 0) goto L361
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r7 = r13.i     // Catch: java.lang.Exception -> L424
                if (r7 == 0) goto L361
                int r7 = r13.c     // Catch: java.lang.Exception -> L424
                if (r7 != r6) goto L164
                if (r5 == 0) goto L148
                java.util.ArrayList r2 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                if (r2 == 0) goto L148
                java.util.ArrayList r2 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                int r2 = r2.size()     // Catch: java.lang.Exception -> L424
                if (r2 <= 0) goto L148
                int r0 = r0.what     // Catch: java.lang.Exception -> L424
                if (r0 == r8) goto L138
                r2 = 201(0xc9, float:2.82E-43)
                if (r0 == r2) goto L129
                r2 = 203(0xcb, float:2.84E-43)
                if (r0 == r2) goto L11a
                r2 = 205(0xcd, float:2.87E-43)
                if (r0 == r2) goto Ld8
                goto L148
            Ld8:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                r2 = 3
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto Le8
                return
            Le8:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r0 <= 0) goto L148
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h     // Catch: java.lang.Exception -> L424
                r2 = 0
                java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L424
                java.lang.String r2 = r0.getCMPTEntryUrl()     // Catch: java.lang.Exception -> L424
                java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Exception -> L424
                boolean r0 = r2.equals(r0)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                java.lang.Integer r2 = java.lang.Integer.valueOf(r23)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                return
            L11a:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                java.lang.Integer r2 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                return
            L129:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                java.lang.Integer r2 = java.lang.Integer.valueOf(r23)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                return
            L138:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                r2 = 0
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L148
                return
            L148:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r13.h     // Catch: java.lang.Exception -> L424
                r4 = r14
                r5 = r3
                r6 = r10
                r7 = r11
                r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r0 = r1.b     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                goto L4a2
            L164:
                java.lang.String r7 = "url"
                java.lang.String r2 = r2.getString(r7)     // Catch: java.lang.Exception -> L424
                int r0 = r0.what     // Catch: java.lang.Exception -> L424
                if (r0 == r8) goto L296
                r7 = 201(0xc9, float:2.82E-43)
                if (r0 == r7) goto L21b
                r7 = 203(0xcb, float:2.84E-43)
                if (r0 == r7) goto L1b8
                r7 = 205(0xcd, float:2.87E-43)
                if (r0 == r7) goto L17c
                goto L2ee
            L17c:
                if (r5 == 0) goto L1a3
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L1a3
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r0 <= 0) goto L1a3
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                r2 = 3
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L1a3
                java.lang.String r0 = "Is TPL but download BTL Template fail but hit ignoreCheckRule"
                com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L424
                return
            L1a3:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                r0.clear()     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.put(r12, r13)     // Catch: java.lang.Exception -> L424
                goto L2ee
            L1b8:
                if (r5 == 0) goto L1de
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L1de
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r0 <= 0) goto L1de
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r5)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L1de
                java.lang.String r0 = "Is TPL but download template fail but hit ignoreCheckRule"
                com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L424
                return
            L1de:
                r6 = 0
            L1df:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r6 >= r0) goto L20b
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L424
                if (r5 == 0) goto L208
                com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L424
                java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L208
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                r0.remove(r6)     // Catch: java.lang.Exception -> L424
            L208:
                int r6 = r6 + 1
                goto L1df
            L20b:
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.put(r12, r13)     // Catch: java.lang.Exception -> L424
                goto L2ee
            L21b:
                if (r5 == 0) goto L241
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L241
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r0 <= 0) goto L241
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                java.lang.Integer r5 = java.lang.Integer.valueOf(r23)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r5)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L241
                java.lang.String r0 = "Is TPL but download endcard fail but hit ignoreCheckRule"
                com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L424
                return
            L241:
                r6 = 0
            L242:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r6 >= r0) goto L287
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L424
                if (r5 == 0) goto L26b
                com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L424
                java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> L424
                boolean r5 = r5.equals(r2)     // Catch: java.lang.Exception -> L424
                if (r5 == 0) goto L26b
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r13.i     // Catch: java.lang.Exception -> L424
                r5.remove(r6)     // Catch: java.lang.Exception -> L424
            L26b:
                java.lang.String r5 = r0.getendcard_url()     // Catch: java.lang.Exception -> L424
                boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L424
                if (r5 != 0) goto L284
                java.lang.String r0 = r0.getendcard_url()     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L284
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                r0.remove(r6)     // Catch: java.lang.Exception -> L424
            L284:
                int r6 = r6 + 1
                goto L242
            L287:
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.put(r12, r13)     // Catch: java.lang.Exception -> L424
                goto L2ee
            L296:
                if (r5 == 0) goto L2bd
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L2bd
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r0 <= 0) goto L2bd
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L424
                r5 = 0
                java.lang.Integer r6 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.contains(r6)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L2bd
                java.lang.String r0 = "Is TPL but  video download fail but hit ignoreCheckRule"
                com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L424
                return
            L2bd:
                r6 = 0
            L2be:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                int r0 = r0.size()     // Catch: java.lang.Exception -> L424
                if (r6 >= r0) goto L2e0
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Exception -> L424
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L424
                java.lang.String r0 = r0.getVideoUrlEncode()     // Catch: java.lang.Exception -> L424
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L424
                if (r0 == 0) goto L2dd
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L424
                r0.remove(r6)     // Catch: java.lang.Exception -> L424
            L2dd:
                int r6 = r6 + 1
                goto L2be
            L2e0:
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.remove(r12)     // Catch: java.lang.Exception -> L424
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L424
                r0.put(r12, r13)     // Catch: java.lang.Exception -> L424
            L2ee:
                com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L424
                r16 = 94
                java.lang.String r2 = r13.e     // Catch: java.lang.Exception -> L424
                boolean r5 = r13.b     // Catch: java.lang.Exception -> L424
                int r6 = r13.d     // Catch: java.lang.Exception -> L424
                boolean r7 = r13.a     // Catch: java.lang.Exception -> L424
                int r8 = r13.c     // Catch: java.lang.Exception -> L424
                r24 = r15
                r15 = r0
                r17 = r2
                r18 = r5
                r19 = r6
                r20 = r7
                r21 = r8
                boolean r0 = r15.a(r16, r17, r18, r19, r20, r21, r22)     // Catch: java.lang.Exception -> L422
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L422
                r2.<init>()     // Catch: java.lang.Exception -> L422
                java.lang.String r5 = " failed Campaign是否下载成功：(回调) "
                r2.append(r5)     // Catch: java.lang.Exception -> L422
                r2.append(r0)     // Catch: java.lang.Exception -> L422
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L422
                com.mbridge.msdk.foundation.tools.z.a(r4, r2)     // Catch: java.lang.Exception -> L422
                if (r0 == 0) goto L33d
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h     // Catch: java.lang.Exception -> L422
                r14.a(r3, r10, r11, r0)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r0 = r1.b     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                goto L4a2
            L33d:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.i     // Catch: java.lang.Exception -> L422
                int r0 = r0.size()     // Catch: java.lang.Exception -> L422
                if (r0 != 0) goto L4a2
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r13.h     // Catch: java.lang.Exception -> L422
                r4 = r14
                r5 = r3
                r6 = r10
                r7 = r11
                r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r0 = r1.b     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c     // Catch: java.lang.Exception -> L422
                r0.remove(r12)     // Catch: java.lang.Exception -> L422
                goto L4a2
            L361:
                r24 = r15
                com.mbridge.msdk.videocommon.download.b r15 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L422
                r16 = 94
                java.lang.String r2 = r13.e     // Catch: java.lang.Exception -> L422
                boolean r7 = r13.b     // Catch: java.lang.Exception -> L422
                int r6 = r13.d     // Catch: java.lang.Exception -> L422
                boolean r8 = r13.a     // Catch: java.lang.Exception -> L422
                r25 = r12
                int r12 = r13.c     // Catch: java.lang.Exception -> L422
                r17 = r2
                r18 = r7
                r19 = r6
                r20 = r8
                r21 = r12
                boolean r2 = r15.a(r16, r17, r18, r19, r20, r21, r22)     // Catch: java.lang.Exception -> L422
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L422
                r6.<init>()     // Catch: java.lang.Exception -> L422
                java.lang.String r7 = " failed Campaign是否下载成功： （回调）"
                r6.append(r7)     // Catch: java.lang.Exception -> L422
                r6.append(r2)     // Catch: java.lang.Exception -> L422
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L422
                com.mbridge.msdk.foundation.tools.z.a(r4, r6)     // Catch: java.lang.Exception -> L422
                if (r2 == 0) goto L3a0
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h     // Catch: java.lang.Exception -> L422
                r14.a(r3, r10, r11, r0)     // Catch: java.lang.Exception -> L422
                goto L40d
            L3a0:
                if (r5 == 0) goto L404
                java.util.ArrayList r2 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                if (r2 == 0) goto L404
                java.util.ArrayList r2 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                int r2 = r2.size()     // Catch: java.lang.Exception -> L422
                if (r2 <= 0) goto L404
                int r0 = r0.what     // Catch: java.lang.Exception -> L422
                r2 = 200(0xc8, float:2.8E-43)
                if (r0 == r2) goto L3f4
                r2 = 201(0xc9, float:2.82E-43)
                if (r0 == r2) goto L3e5
                r2 = 203(0xcb, float:2.84E-43)
                if (r0 == r2) goto L3d5
                r2 = 205(0xcd, float:2.87E-43)
                if (r0 == r2) goto L3c5
                goto L404
            L3c5:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                r2 = 3
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L422
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L422
                if (r0 == 0) goto L404
                return
            L3d5:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                r2 = 1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L422
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L422
                if (r0 == 0) goto L404
                return
            L3e5:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                java.lang.Integer r2 = java.lang.Integer.valueOf(r23)     // Catch: java.lang.Exception -> L422
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L422
                if (r0 == 0) goto L404
                return
            L3f4:
                java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L422
                r2 = 0
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L422
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L422
                if (r0 == 0) goto L404
                return
            L404:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r13.h     // Catch: java.lang.Exception -> L422
                r4 = r14
                r5 = r3
                r6 = r10
                r7 = r11
                r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L422
            L40d:
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r0 = r1.b     // Catch: java.lang.Exception -> L422
                r5 = r25
                r0.remove(r5)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()     // Catch: java.lang.Exception -> L422
                r0.remove(r5)     // Catch: java.lang.Exception -> L422
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c     // Catch: java.lang.Exception -> L422
                r0.remove(r5)     // Catch: java.lang.Exception -> L422
                goto L4a2
            L422:
                r0 = move-exception
                goto L427
            L424:
                r0 = move-exception
                r24 = r15
            L427:
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r13.h
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r4 = r24
                r2.append(r4)
                java.lang.String r0 = r0.getMessage()
                r2.append(r0)
                java.lang.String r9 = r2.toString()
                r4 = r14
                r5 = r3
                r6 = r10
                r7 = r11
                r4.a(r5, r6, r7, r8, r9)
                goto L4a2
            L446:
                if (r13 == 0) goto L4a2
                if (r14 == 0) goto L4a2
                com.mbridge.msdk.videocommon.download.b r15 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L469
                r16 = 94
                java.lang.String r0 = r13.e     // Catch: java.lang.Exception -> L469
                boolean r6 = r13.b     // Catch: java.lang.Exception -> L469
                int r7 = r13.d     // Catch: java.lang.Exception -> L469
                boolean r8 = r13.a     // Catch: java.lang.Exception -> L469
                int r9 = r13.c     // Catch: java.lang.Exception -> L469
                r17 = r0
                r18 = r6
                r19 = r7
                r20 = r8
                r21 = r9
                boolean r6 = r15.a(r16, r17, r18, r19, r20, r21, r22)     // Catch: java.lang.Exception -> L469
                goto L476
            L469:
                r0 = move-exception
                boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r6 == 0) goto L475
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r4, r0)
            L475:
                r6 = r2
            L476:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = " success Campaign是否下载成功：(回调) "
                r0.append(r2)
                r0.append(r6)
                java.lang.String r0 = r0.toString()
                com.mbridge.msdk.foundation.tools.z.a(r4, r0)
                if (r6 == 0) goto L4a2
                java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r13.h
                r14.a(r3, r10, r11, r0)
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$c> r0 = r1.b
                r0.remove(r5)
                java.util.concurrent.ConcurrentHashMap r0 = com.mbridge.msdk.reward.adapter.c.c()
                r0.remove(r5)
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.c
                r0.remove(r5)
            L4a2:
                return
        }
    }

    public interface i {
        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5);
    }

    public interface j {
        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.videocommon.a.a r6);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.videocommon.a.a r6, java.lang.String r7);
    }

    private static class k extends com.mbridge.msdk.mbjscommon.c.b {
        private android.os.Handler a;
        private java.lang.Runnable b;
        private final boolean c;
        private final boolean d;
        private java.lang.String e;
        private final com.mbridge.msdk.reward.adapter.c.j f;
        private final com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView g;
        private final java.lang.String h;
        private final java.lang.String i;
        private final java.lang.String j;
        private final com.mbridge.msdk.videocommon.a.a k;
        private final com.mbridge.msdk.foundation.entity.CampaignEx l;
        private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> m;
        private long n;
        private boolean o;
        private boolean p;
        private final java.lang.Runnable q;
        private final java.lang.Runnable r;



        public k(android.os.Handler r17, java.lang.Runnable r18, boolean r19, boolean r20, java.lang.String r21, com.mbridge.msdk.reward.adapter.c.j r22, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, com.mbridge.msdk.videocommon.a.a r27, com.mbridge.msdk.foundation.entity.CampaignEx r28, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r29, long r30) {
                r16 = this;
                r12 = r16
                r13 = r17
                r16.<init>()
                r12.a = r13
                r0 = r18
                r12.b = r0
                r0 = r19
                r12.c = r0
                r14 = r20
                r12.d = r14
                r15 = r21
                r12.e = r15
                r11 = r22
                r12.f = r11
                r0 = r23
                r12.g = r0
                r9 = r24
                r12.h = r9
                r10 = r26
                r12.i = r10
                r8 = r25
                r12.j = r8
                r7 = r27
                r12.k = r7
                r6 = r28
                r12.l = r6
                r0 = r29
                r12.m = r0
                r4 = r30
                r12.n = r4
                com.mbridge.msdk.reward.adapter.c$k$1 r3 = new com.mbridge.msdk.reward.adapter.c$k$1
                r0 = r3
                r1 = r16
                r2 = r22
                r14 = r3
                r3 = r27
                r4 = r26
                r5 = r21
                r6 = r24
                r7 = r28
                r8 = r20
                r9 = r30
                r11 = r25
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r11)
                r12.r = r14
                com.mbridge.msdk.reward.adapter.c$k$2 r14 = new com.mbridge.msdk.reward.adapter.c$k$2
                r0 = r14
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r11)
                r12.q = r14
                if (r13 == 0) goto L6b
                java.lang.Runnable r0 = r12.r
                r1 = 5000(0x1388, double:2.4703E-320)
                r13.postDelayed(r0, r1)
            L6b:
                return
        }

        @Override
        public final void a(android.webkit.WebView r12, int r13) {
                r11 = this;
                super.a(r12, r13)
                android.os.Handler r12 = r11.a
                if (r12 == 0) goto Le
                java.lang.Runnable r0 = r11.q
                if (r0 == 0) goto Le
                r12.removeCallbacks(r0)
            Le:
                android.os.Handler r12 = r11.a
                if (r12 == 0) goto L19
                java.lang.Runnable r0 = r11.r
                if (r0 == 0) goto L19
                r12.removeCallbacks(r0)
            L19:
                boolean r12 = r11.p
                if (r12 != 0) goto L13f
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r11.l     // Catch: java.lang.Exception -> L4e
                com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4e
                android.content.Context r1 = r12.j()     // Catch: java.lang.Exception -> L4e
                java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
                r12.<init>()     // Catch: java.lang.Exception -> L4e
                java.lang.String r2 = "preload temp readState: "
                r12.append(r2)     // Catch: java.lang.Exception -> L4e
                r12.append(r13)     // Catch: java.lang.Exception -> L4e
                java.lang.String r2 = r12.toString()     // Catch: java.lang.Exception -> L4e
                java.lang.String r3 = r11.i     // Catch: java.lang.Exception -> L4e
                boolean r4 = r11.d     // Catch: java.lang.Exception -> L4e
                java.lang.String r5 = r11.e     // Catch: java.lang.Exception -> L4e
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = r11.l     // Catch: java.lang.Exception -> L4e
                java.lang.String r6 = r12.getRequestIdNotice()     // Catch: java.lang.Exception -> L4e
                long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4e
                long r9 = r11.n     // Catch: java.lang.Exception -> L4e
                long r7 = r7 - r9
                com.mbridge.msdk.reward.b.a.a(r0, r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L4e
            L4e:
                java.lang.StringBuilder r12 = new java.lang.StringBuilder
                r12.<init>()
                java.lang.String r0 = r11.i
                r12.append(r0)
                java.lang.String r0 = "_"
                r12.append(r0)
                java.lang.String r1 = r11.h
                r12.append(r1)
                java.lang.String r3 = r12.toString()
                r12 = 1
                if (r13 != r12) goto L11b
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "TempalteWindVaneWebviewClient template 预加载成功 state ："
                r1.append(r2)
                r1.append(r13)
                java.lang.String r13 = r1.toString()
                java.lang.String r1 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                java.lang.Runnable r13 = r11.b
                if (r13 == 0) goto L8a
                android.os.Handler r2 = r11.a
                if (r2 == 0) goto L8a
                r2.removeCallbacks(r13)
            L8a:
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r13 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r4 = r11.i
                r2.append(r4)
                r2.append(r0)
                java.lang.String r4 = r11.e
                r2.append(r4)
                r2.append(r0)
                java.lang.String r0 = r11.h
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                r13.setTemplatePreLoadDone(r0, r12)
                com.mbridge.msdk.videocommon.a$a r13 = r11.k
                if (r13 == 0) goto Lb6
                r13.a(r12)
            Lb6:
                boolean r13 = r11.c
                if (r13 == 0) goto Le2
                boolean r13 = r11.d
                r0 = 287(0x11f, float:4.02E-43)
                if (r13 == 0) goto Ld1
                java.lang.String r13 = "put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r11.l
                java.lang.String r13 = r13.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r1 = r11.k
                com.mbridge.msdk.videocommon.a.a(r0, r13, r1)
                goto L109
            Ld1:
                java.lang.String r13 = "put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r11.l
                java.lang.String r13 = r13.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r1 = r11.k
                com.mbridge.msdk.videocommon.a.b(r0, r13, r1)
                goto L109
            Le2:
                boolean r13 = r11.d
                r0 = 94
                if (r13 == 0) goto Lf9
                java.lang.String r13 = "put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r11.l
                java.lang.String r13 = r13.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r1 = r11.k
                com.mbridge.msdk.videocommon.a.a(r0, r13, r1)
                goto L109
            Lf9:
                java.lang.String r13 = "put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r1, r13)
                com.mbridge.msdk.foundation.entity.CampaignEx r13 = r11.l
                java.lang.String r13 = r13.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r1 = r11.k
                com.mbridge.msdk.videocommon.a.b(r0, r13, r1)
            L109:
                com.mbridge.msdk.reward.adapter.c$j r2 = r11.f
                if (r2 == 0) goto L13d
                java.lang.String r4 = r11.j
                java.lang.String r5 = r11.i
                java.lang.String r6 = r11.e
                java.lang.String r7 = r11.h
                com.mbridge.msdk.videocommon.a$a r8 = r11.k
                r2.a(r3, r4, r5, r6, r7, r8)
                goto L13d
            L11b:
                com.mbridge.msdk.reward.adapter.c$j r2 = r11.f
                if (r2 == 0) goto L13d
                java.lang.String r4 = r11.j
                java.lang.String r5 = r11.i
                java.lang.String r6 = r11.e
                java.lang.String r7 = r11.h
                com.mbridge.msdk.videocommon.a$a r8 = r11.k
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "state "
                r0.append(r1)
                r0.append(r13)
                java.lang.String r9 = r0.toString()
                r2.a(r3, r4, r5, r6, r7, r8, r9)
            L13d:
                r11.p = r12
            L13f:
                return
        }

        @Override
        public final void a(android.webkit.WebView r21, int r22, java.lang.String r23, java.lang.String r24) {
                r20 = this;
                r1 = r20
                r0 = r23
                super.a(r21, r22, r23, r24)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "TempalteWindVaneWebviewClient preLoadTemplate onReceivedError: "
                r2.append(r3)
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                java.lang.String r10 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r10, r2)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r2 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = r1.i
                r3.append(r4)
                java.lang.String r4 = "_"
                r3.append(r4)
                java.lang.String r5 = r1.e
                r3.append(r5)
                r3.append(r4)
                java.lang.String r5 = r1.h
                r3.append(r5)
                java.lang.String r3 = r3.toString()
                r5 = 0
                r2.setTemplatePreLoadDone(r3, r5)
                com.mbridge.msdk.foundation.entity.CampaignEx r11 = r1.l     // Catch: java.lang.Exception -> L79
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L79
                android.content.Context r12 = r2.j()     // Catch: java.lang.Exception -> L79
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L79
                r2.<init>()     // Catch: java.lang.Exception -> L79
                java.lang.String r3 = "WebView onReceivedError exception: "
                r2.append(r3)     // Catch: java.lang.Exception -> L79
                r2.append(r0)     // Catch: java.lang.Exception -> L79
                java.lang.String r13 = r2.toString()     // Catch: java.lang.Exception -> L79
                java.lang.String r14 = r1.i     // Catch: java.lang.Exception -> L79
                boolean r15 = r1.d     // Catch: java.lang.Exception -> L79
                java.lang.String r2 = r1.e     // Catch: java.lang.Exception -> L79
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.l     // Catch: java.lang.Exception -> L79
                java.lang.String r17 = r3.getRequestIdNotice()     // Catch: java.lang.Exception -> L79
                long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L79
                long r8 = r1.n     // Catch: java.lang.Exception -> L79
                long r18 = r6 - r8
                r16 = r2
                com.mbridge.msdk.reward.b.a.a(r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Exception -> L79
            L79:
                android.os.Handler r2 = r1.a
                if (r2 == 0) goto L8f
                java.lang.Runnable r3 = r1.q
                if (r3 == 0) goto L86
                java.lang.Runnable r3 = r1.r
                r2.removeCallbacks(r3)
            L86:
                java.lang.Runnable r2 = r1.q
                if (r2 == 0) goto L8f
                android.os.Handler r3 = r1.a
                r3.removeCallbacks(r2)
            L8f:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc4
                r2.<init>()     // Catch: java.lang.Exception -> Lc4
                java.lang.String r3 = r1.i     // Catch: java.lang.Exception -> Lc4
                r2.append(r3)     // Catch: java.lang.Exception -> Lc4
                r2.append(r4)     // Catch: java.lang.Exception -> Lc4
                java.lang.String r3 = r1.h     // Catch: java.lang.Exception -> Lc4
                r2.append(r3)     // Catch: java.lang.Exception -> Lc4
                java.lang.String r3 = r2.toString()     // Catch: java.lang.Exception -> Lc4
                com.mbridge.msdk.videocommon.a$a r2 = r1.k     // Catch: java.lang.Exception -> Lc4
                if (r2 == 0) goto Lae
                com.mbridge.msdk.videocommon.a$a r2 = r1.k     // Catch: java.lang.Exception -> Lc4
                r2.a(r5)     // Catch: java.lang.Exception -> Lc4
            Lae:
                com.mbridge.msdk.reward.adapter.c$j r2 = r1.f     // Catch: java.lang.Exception -> Lc4
                if (r2 == 0) goto Ld0
                com.mbridge.msdk.reward.adapter.c$j r2 = r1.f     // Catch: java.lang.Exception -> Lc4
                java.lang.String r4 = r1.j     // Catch: java.lang.Exception -> Lc4
                java.lang.String r5 = r1.i     // Catch: java.lang.Exception -> Lc4
                java.lang.String r6 = r1.e     // Catch: java.lang.Exception -> Lc4
                com.mbridge.msdk.videocommon.a$a r8 = r1.k     // Catch: java.lang.Exception -> Lc4
                r7 = r24
                r9 = r23
                r2.a(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Lc4
                goto Ld0
            Lc4:
                r0 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r2 == 0) goto Ld0
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r10, r0)
            Ld0:
                return
        }

        @Override
        public final void a(android.webkit.WebView r17, android.webkit.SslErrorHandler r18, android.net.http.SslError r19) {
                r16 = this;
                r1 = r16
                super.a(r17, r18, r19)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: "
                r0.append(r2)
                java.lang.String r2 = ""
                if (r19 != 0) goto L15
                r3 = r2
                goto L1d
            L15:
                int r3 = r19.getPrimaryError()
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            L1d:
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r3 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r3, r0)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = r1.i
                r4.append(r5)
                java.lang.String r5 = "_"
                r4.append(r5)
                java.lang.String r6 = r1.e
                r4.append(r6)
                r4.append(r5)
                java.lang.String r6 = r1.h
                r4.append(r6)
                java.lang.String r4 = r4.toString()
                r6 = 0
                r0.setTemplatePreLoadDone(r4, r6)
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = r1.l     // Catch: java.lang.Exception -> L91
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L91
                android.content.Context r8 = r0.j()     // Catch: java.lang.Exception -> L91
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L91
                r0.<init>()     // Catch: java.lang.Exception -> L91
                java.lang.String r4 = "WebView onReceivedSslError exception: "
                r0.append(r4)     // Catch: java.lang.Exception -> L91
                if (r19 != 0) goto L6a
                java.lang.String r4 = "SSLError"
                goto L72
            L6a:
                int r4 = r19.getPrimaryError()     // Catch: java.lang.Exception -> L91
                java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Exception -> L91
            L72:
                r0.append(r4)     // Catch: java.lang.Exception -> L91
                java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L91
                java.lang.String r10 = r1.i     // Catch: java.lang.Exception -> L91
                boolean r11 = r1.d     // Catch: java.lang.Exception -> L91
                java.lang.String r12 = r1.e     // Catch: java.lang.Exception -> L91
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.l     // Catch: java.lang.Exception -> L91
                java.lang.String r13 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L91
                long r14 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L91
                r0 = r7
                long r6 = r1.n     // Catch: java.lang.Exception -> L91
                long r14 = r14 - r6
                r7 = r0
                com.mbridge.msdk.reward.b.a.a(r7, r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Exception -> L91
            L91:
                android.os.Handler r0 = r1.a
                if (r0 == 0) goto La7
                java.lang.Runnable r4 = r1.q
                if (r4 == 0) goto L9e
                java.lang.Runnable r4 = r1.r
                r0.removeCallbacks(r4)
            L9e:
                java.lang.Runnable r0 = r1.q
                if (r0 == 0) goto La7
                android.os.Handler r4 = r1.a
                r4.removeCallbacks(r0)
            La7:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7
                r0.<init>()     // Catch: java.lang.Exception -> Le7
                java.lang.String r4 = r1.i     // Catch: java.lang.Exception -> Le7
                r0.append(r4)     // Catch: java.lang.Exception -> Le7
                r0.append(r5)     // Catch: java.lang.Exception -> Le7
                java.lang.String r4 = r1.h     // Catch: java.lang.Exception -> Le7
                r0.append(r4)     // Catch: java.lang.Exception -> Le7
                java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> Le7
                com.mbridge.msdk.videocommon.a$a r0 = r1.k     // Catch: java.lang.Exception -> Le7
                if (r0 == 0) goto Lc7
                com.mbridge.msdk.videocommon.a$a r0 = r1.k     // Catch: java.lang.Exception -> Le7
                r4 = 0
                r0.a(r4)     // Catch: java.lang.Exception -> Le7
            Lc7:
                com.mbridge.msdk.reward.adapter.c$j r0 = r1.f     // Catch: java.lang.Exception -> Le7
                if (r0 == 0) goto Lf3
                com.mbridge.msdk.reward.adapter.c$j r5 = r1.f     // Catch: java.lang.Exception -> Le7
                java.lang.String r7 = r1.j     // Catch: java.lang.Exception -> Le7
                java.lang.String r8 = r1.i     // Catch: java.lang.Exception -> Le7
                java.lang.String r9 = r1.e     // Catch: java.lang.Exception -> Le7
                java.lang.String r10 = r1.h     // Catch: java.lang.Exception -> Le7
                com.mbridge.msdk.videocommon.a$a r11 = r1.k     // Catch: java.lang.Exception -> Le7
                if (r19 != 0) goto Lda
                goto Le2
            Lda:
                int r0 = r19.getPrimaryError()     // Catch: java.lang.Exception -> Le7
                java.lang.String r2 = java.lang.Integer.toString(r0)     // Catch: java.lang.Exception -> Le7
            Le2:
                r12 = r2
                r5.a(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> Le7
                goto Lf3
            Le7:
                r0 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r2 == 0) goto Lf3
                java.lang.String r0 = r0.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
            Lf3:
                return
        }

        @Override
        public final void a(android.webkit.WebView r14, java.lang.String r15) {
                r13 = this;
                super.a(r14, r15)
                java.lang.String r0 = "WindVaneWebView"
                java.lang.String r1 = "TempalteWindVaneWebviewClient preLoadTemplate onPageFinished: "
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                android.os.Handler r1 = r13.a
                if (r1 == 0) goto L15
                java.lang.Runnable r2 = r13.r
                if (r2 == 0) goto L15
                r1.removeCallbacks(r2)
            L15:
                boolean r1 = r13.o
                if (r1 != 0) goto L116
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r13.l     // Catch: java.lang.Exception -> L3b
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3b
                android.content.Context r3 = r1.j()     // Catch: java.lang.Exception -> L3b
                java.lang.String r4 = "preload temp onPageFinish"
                java.lang.String r5 = r13.i     // Catch: java.lang.Exception -> L3b
                boolean r6 = r13.d     // Catch: java.lang.Exception -> L3b
                java.lang.String r7 = r13.e     // Catch: java.lang.Exception -> L3b
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r13.l     // Catch: java.lang.Exception -> L3b
                java.lang.String r8 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L3b
                long r9 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L3b
                long r11 = r13.n     // Catch: java.lang.Exception -> L3b
                long r9 = r9 - r11
                com.mbridge.msdk.reward.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L3b
            L3b:
                java.lang.String r1 = "wfr=1"
                boolean r15 = r15.contains(r1)
                r1 = 1
                if (r15 != 0) goto L100
                java.lang.StringBuilder r15 = new java.lang.StringBuilder
                r15.<init>()
                java.lang.String r2 = r13.i
                r15.append(r2)
                java.lang.String r2 = "_"
                r15.append(r2)
                java.lang.String r3 = r13.h
                r15.append(r3)
                java.lang.String r5 = r15.toString()
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r15 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = r13.i
                r3.append(r4)
                r3.append(r2)
                java.lang.String r4 = r13.e
                r3.append(r4)
                r3.append(r2)
                java.lang.String r2 = r13.h
                r3.append(r2)
                java.lang.String r2 = r3.toString()
                r15.setTemplatePreLoadDone(r2, r1)
                java.lang.Runnable r15 = r13.b
                if (r15 == 0) goto L8c
                android.os.Handler r2 = r13.a
                if (r2 == 0) goto L8c
                r2.removeCallbacks(r15)
            L8c:
                com.mbridge.msdk.videocommon.a$a r15 = r13.k
                if (r15 == 0) goto L93
                r15.a(r1)
            L93:
                boolean r15 = r13.c
                if (r15 == 0) goto Lc3
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                boolean r15 = r15.isBidCampaign()
                r2 = 287(0x11f, float:4.02E-43)
                if (r15 == 0) goto Lb2
                java.lang.String r15 = "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r15)
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                java.lang.String r15 = r15.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r13.k
                com.mbridge.msdk.videocommon.a.a(r2, r15, r0)
                goto Lee
            Lb2:
                java.lang.String r15 = "TempalteWindVaneWebviewClient Tempalte put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r15)
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                java.lang.String r15 = r15.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r13.k
                com.mbridge.msdk.videocommon.a.b(r2, r15, r0)
                goto Lee
            Lc3:
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                boolean r15 = r15.isBidCampaign()
                r2 = 94
                if (r15 == 0) goto Lde
                java.lang.String r15 = "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r15)
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                java.lang.String r15 = r15.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r13.k
                com.mbridge.msdk.videocommon.a.a(r2, r15, r0)
                goto Lee
            Lde:
                java.lang.String r15 = "TempalteWindVaneWebviewClient Tempalte put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r15)
                com.mbridge.msdk.foundation.entity.CampaignEx r15 = r13.l
                java.lang.String r15 = r15.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r13.k
                com.mbridge.msdk.videocommon.a.b(r2, r15, r0)
            Lee:
                com.mbridge.msdk.reward.adapter.c$j r4 = r13.f
                if (r4 == 0) goto L10d
                java.lang.String r6 = r13.j
                java.lang.String r7 = r13.i
                java.lang.String r8 = r13.e
                java.lang.String r9 = r13.h
                com.mbridge.msdk.videocommon.a$a r10 = r13.k
                r4.a(r5, r6, r7, r8, r9, r10)
                goto L10d
            L100:
                android.os.Handler r15 = r13.a
                if (r15 == 0) goto L10d
                java.lang.Runnable r0 = r13.q
                if (r0 == 0) goto L10d
                r2 = 5000(0x1388, double:2.4703E-320)
                r15.postDelayed(r0, r2)
            L10d:
                com.mbridge.msdk.mbjscommon.windvane.h r15 = com.mbridge.msdk.mbjscommon.windvane.h.a()
                r15.a(r14)
                r13.o = r1
            L116:
                return
        }
    }

    private static class l extends com.mbridge.msdk.mbjscommon.c.b {
        private java.lang.String a;
        private final boolean b;
        private final com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView c;
        private final java.lang.String d;
        private final java.lang.String e;
        private final com.mbridge.msdk.videocommon.a.a f;
        private final com.mbridge.msdk.foundation.entity.CampaignEx g;
        private boolean h;
        private java.lang.String i;
        private boolean j;
        private boolean k;

        public l(java.lang.String r1, boolean r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.videocommon.a.a r6, com.mbridge.msdk.foundation.entity.CampaignEx r7, boolean r8, java.lang.String r9) {
                r0 = this;
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.a = r1
                r0.h = r8
                r0.i = r9
                java.lang.String r1 = "WindVaneWebView"
                java.lang.String r2 = "TempalteWindVaneWebviewClientForTPL init"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                return
        }

        @Override
        public final void a(android.webkit.WebView r7, int r8) {
                r6 = this;
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r0 = "收到大模板 播放模板 readyState 回调: "
                r7.append(r0)
                r7.append(r8)
                java.lang.String r7 = r7.toString()
                java.lang.String r0 = "RewardCampaignsResourceManager_test"
                com.mbridge.msdk.foundation.tools.z.a(r0, r7)
                boolean r7 = r6.k
                if (r7 != 0) goto L13d
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r6.c
                java.lang.String r0 = "WindVaneWebView"
                if (r7 == 0) goto L67
                org.json.JSONObject r7 = new org.json.JSONObject
                r7.<init>()
                java.lang.String r1 = "id"
                java.lang.String r2 = r6.a     // Catch: java.lang.Exception -> L5b
                r7.put(r1, r2)     // Catch: java.lang.Exception -> L5b
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5b
                r1.<init>()     // Catch: java.lang.Exception -> L5b
                java.lang.String r2 = "result"
                r1.put(r2, r8)     // Catch: java.lang.Exception -> L5b
                java.lang.String r2 = "error"
                java.lang.String r3 = ""
                r1.put(r2, r3)     // Catch: java.lang.Exception -> L5b
                java.lang.String r2 = "data"
                r7.put(r2, r1)     // Catch: java.lang.Exception -> L5b
                com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L5b
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r6.c     // Catch: java.lang.Exception -> L5b
                java.lang.String r3 = "onSubPlayTemplateViewLoad"
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L5b
                byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L5b
                r4 = 2
                java.lang.String r7 = android.util.Base64.encodeToString(r7, r4)     // Catch: java.lang.Exception -> L5b
                r1.a(r2, r3, r7)     // Catch: java.lang.Exception -> L5b
                goto L67
            L5b:
                r7 = move-exception
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L67
                java.lang.String r7 = r7.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r7)
            L67:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r1 = r6.e
                r7.append(r1)
                java.lang.String r1 = "_"
                r7.append(r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                java.lang.String r2 = r2.getId()
                r7.append(r2)
                r7.append(r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                java.lang.String r2 = r2.getRequestId()
                r7.append(r2)
                r7.append(r1)
                java.lang.String r2 = r6.d
                r7.append(r2)
                java.lang.String r7 = r7.toString()
                r2 = 1
                r3 = 0
                if (r8 != r2) goto L10f
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r8 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = r6.e
                r4.append(r5)
                r4.append(r1)
                java.lang.String r5 = r6.i
                r4.append(r5)
                r4.append(r1)
                java.lang.String r1 = r6.d
                r4.append(r1)
                java.lang.String r1 = r4.toString()
                r8.setTemplatePreLoadDone(r1, r2)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                if (r8 == 0) goto Lc7
                r8.a(r2)
            Lc7:
                boolean r8 = r6.b
                if (r8 == 0) goto Led
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = r6.g
                boolean r8 = r8.isBidCampaign()
                if (r8 == 0) goto Le0
                java.lang.String r8 = "Tempalte put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                boolean r0 = r6.h
                com.mbridge.msdk.videocommon.a.a(r7, r8, r3, r0)
                goto L13b
            Le0:
                java.lang.String r8 = "Tempalte put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                boolean r0 = r6.h
                com.mbridge.msdk.videocommon.a.a(r7, r8, r3, r0)
                goto L13b
            Led:
                com.mbridge.msdk.foundation.entity.CampaignEx r8 = r6.g
                boolean r8 = r8.isBidCampaign()
                if (r8 == 0) goto L102
                java.lang.String r8 = "Tempalte put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                boolean r0 = r6.h
                com.mbridge.msdk.videocommon.a.a(r7, r8, r3, r0)
                goto L13b
            L102:
                java.lang.String r8 = "Tempalte put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                boolean r0 = r6.h
                com.mbridge.msdk.videocommon.a.a(r7, r8, r3, r0)
                goto L13b
            L10f:
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r7 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r0 = r6.e
                r8.append(r0)
                r8.append(r1)
                java.lang.String r0 = r6.i
                r8.append(r0)
                r8.append(r1)
                java.lang.String r0 = r6.d
                r8.append(r0)
                java.lang.String r8 = r8.toString()
                r7.setTemplatePreLoadDone(r8, r3)
                com.mbridge.msdk.videocommon.a$a r7 = r6.f
                if (r7 == 0) goto L13b
                r7.a(r3)
            L13b:
                r6.k = r2
            L13d:
                return
        }

        @Override
        public final void a(android.webkit.WebView r3, int r4, java.lang.String r5, java.lang.String r6) {
                r2 = this;
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "TempalteWindVaneWebviewClientForTPL preLoadTemplate onReceivedError: "
                r3.append(r4)
                r3.append(r5)
                java.lang.String r3 = r3.toString()
                java.lang.String r4 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r4, r3)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r3 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r0 = r2.e
                r6.append(r0)
                java.lang.String r0 = "_"
                r6.append(r0)
                java.lang.String r1 = r2.i
                r6.append(r1)
                r6.append(r0)
                java.lang.String r0 = r2.d
                r6.append(r0)
                java.lang.String r6 = r6.toString()
                r0 = 0
                r3.setTemplatePreLoadDone(r6, r0)
                com.mbridge.msdk.videocommon.a$a r3 = r2.f
                if (r3 == 0) goto L45
                r3.a(r0)
            L45:
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r2.c
                if (r3 == 0) goto L8e
                org.json.JSONObject r3 = new org.json.JSONObject
                r3.<init>()
                java.lang.String r6 = "id"
                java.lang.String r0 = r2.a     // Catch: java.lang.Exception -> L82
                r3.put(r6, r0)     // Catch: java.lang.Exception -> L82
                org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L82
                r6.<init>()     // Catch: java.lang.Exception -> L82
                java.lang.String r0 = "result"
                r1 = 2
                r6.put(r0, r1)     // Catch: java.lang.Exception -> L82
                java.lang.String r0 = "error"
                r6.put(r0, r5)     // Catch: java.lang.Exception -> L82
                java.lang.String r5 = "data"
                r3.put(r5, r6)     // Catch: java.lang.Exception -> L82
                com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L82
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r2.c     // Catch: java.lang.Exception -> L82
                java.lang.String r0 = "onSubPlayTemplateViewLoad"
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L82
                byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L82
                java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Exception -> L82
                r5.a(r6, r0, r3)     // Catch: java.lang.Exception -> L82
                goto L8e
            L82:
                r3 = move-exception
                boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r5 == 0) goto L8e
                java.lang.String r3 = r3.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            L8e:
                return
        }

        @Override
        public final void a(android.webkit.WebView r7, java.lang.String r8) {
                r6 = this;
                java.lang.String r0 = "WindVaneWebView"
                java.lang.String r1 = "TempalteWindVaneWebviewClientForTPL preLoadTemplate onPageFinished: "
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                boolean r1 = r6.j
                if (r1 != 0) goto L118
                java.lang.String r1 = "wfr=1"
                boolean r8 = r8.contains(r1)
                r1 = 1
                if (r8 != 0) goto L10f
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r6.c
                if (r8 == 0) goto L5f
                org.json.JSONObject r8 = new org.json.JSONObject
                r8.<init>()
                java.lang.String r2 = "id"
                java.lang.String r3 = r6.a     // Catch: java.lang.Exception -> L53
                r8.put(r2, r3)     // Catch: java.lang.Exception -> L53
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L53
                r2.<init>()     // Catch: java.lang.Exception -> L53
                java.lang.String r3 = "result"
                r2.put(r3, r1)     // Catch: java.lang.Exception -> L53
                java.lang.String r3 = "error"
                java.lang.String r4 = ""
                r2.put(r3, r4)     // Catch: java.lang.Exception -> L53
                java.lang.String r3 = "data"
                r8.put(r3, r2)     // Catch: java.lang.Exception -> L53
                com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L53
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r6.c     // Catch: java.lang.Exception -> L53
                java.lang.String r4 = "componentReact"
                java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L53
                byte[] r8 = r8.getBytes()     // Catch: java.lang.Exception -> L53
                r5 = 2
                java.lang.String r8 = android.util.Base64.encodeToString(r8, r5)     // Catch: java.lang.Exception -> L53
                r2.a(r3, r4, r8)     // Catch: java.lang.Exception -> L53
                goto L5f
            L53:
                r8 = move-exception
                boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r2 == 0) goto L5f
                java.lang.String r8 = r8.getLocalizedMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r8)
            L5f:
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r8 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r6.e
                r2.append(r3)
                java.lang.String r3 = "_"
                r2.append(r3)
                java.lang.String r4 = r6.i
                r2.append(r4)
                r2.append(r3)
                java.lang.String r4 = r6.d
                r2.append(r4)
                java.lang.String r2 = r2.toString()
                r8.setTemplatePreLoadDone(r2, r1)
                com.mbridge.msdk.videocommon.a$a r8 = r6.f
                if (r8 == 0) goto L8d
                r8.a(r1)
            L8d:
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r2 = r6.e
                r8.append(r2)
                r8.append(r3)
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                java.lang.String r2 = r2.getId()
                r8.append(r2)
                r8.append(r3)
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                java.lang.String r2 = r2.getRequestId()
                r8.append(r2)
                r8.append(r3)
                java.lang.String r2 = r6.d
                r8.append(r2)
                java.lang.String r8 = r8.toString()
                boolean r2 = r6.b
                r3 = 0
                if (r2 == 0) goto Le8
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                boolean r2 = r2.isBidCampaign()
                if (r2 == 0) goto Ldb
                java.lang.String r8 = "Tempalte put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                r8 = 287(0x11f, float:4.02E-43)
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.g
                java.lang.String r0 = r0.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r2 = r6.f
                com.mbridge.msdk.videocommon.a.a(r8, r0, r2)
                goto L10f
            Ldb:
                java.lang.String r2 = "Tempalte put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)
                com.mbridge.msdk.videocommon.a$a r0 = r6.f
                boolean r2 = r6.h
                com.mbridge.msdk.videocommon.a.a(r8, r0, r3, r2)
                goto L10f
            Le8:
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.g
                boolean r2 = r2.isBidCampaign()
                if (r2 == 0) goto L103
                java.lang.String r8 = "Tempalte put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r8)
                r8 = 94
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.g
                java.lang.String r0 = r0.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r2 = r6.f
                com.mbridge.msdk.videocommon.a.a(r8, r0, r2)
                goto L10f
            L103:
                java.lang.String r2 = "Tempalte put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)
                com.mbridge.msdk.videocommon.a$a r0 = r6.f
                boolean r2 = r6.h
                com.mbridge.msdk.videocommon.a.a(r8, r0, r3, r2)
            L10f:
                com.mbridge.msdk.mbjscommon.windvane.h r8 = com.mbridge.msdk.mbjscommon.windvane.h.a()
                r8.a(r7)
                r6.j = r1
            L118:
                return
        }
    }

    private static final class m {
        private static final com.mbridge.msdk.reward.adapter.c a = null;

        static {
                com.mbridge.msdk.reward.adapter.c r0 = new com.mbridge.msdk.reward.adapter.c
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.reward.adapter.c.m.a = r0
                return
        }

        static com.mbridge.msdk.reward.adapter.c a() {
                com.mbridge.msdk.reward.adapter.c r0 = com.mbridge.msdk.reward.adapter.c.m.a
                return r0
        }
    }

    private c() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 6
            r0.<init>(r1)
            r2.d = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "mb-reward-load-thread"
            r0.<init>(r1)
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            com.mbridge.msdk.reward.adapter.c.b = r1
            r0.start()
            com.mbridge.msdk.reward.adapter.c$h r1 = new com.mbridge.msdk.reward.adapter.c$h
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r0)
            r2.a = r1
            return
    }

    c(com.mbridge.msdk.reward.adapter.c.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.reward.adapter.c.h a(com.mbridge.msdk.reward.adapter.c r0) {
            com.mbridge.msdk.reward.adapter.c$h r0 = r0.a
            return r0
    }

    public static com.mbridge.msdk.reward.adapter.c a() {
            com.mbridge.msdk.reward.adapter.c r0 = com.mbridge.msdk.reward.adapter.c.m.a()
            return r0
    }

    static java.lang.String a(int r0) {
            java.lang.String r0 = b(r0)
            return r0
    }

    private void a(int r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            com.mbridge.msdk.reward.adapter.c$2 r2 = new com.mbridge.msdk.reward.adapter.c$2
            r2.<init>(r0)
            com.mbridge.msdk.foundation.tools.i.a(r1, r3, r4, r2)
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.c r0, int r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.c r15, android.content.Context r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, com.mbridge.msdk.foundation.entity.CampaignEx r20, java.lang.String r21, com.mbridge.msdk.reward.adapter.c.i r22, java.util.concurrent.CopyOnWriteArrayList r23) {
            r0 = r15
            r1 = r21
            boolean r2 = android.text.TextUtils.isEmpty(r21)
            if (r2 != 0) goto L96
            boolean r2 = r20.isMraid()
            if (r2 != 0) goto L96
            java.lang.String r2 = ".zip"
            boolean r2 = r1.contains(r2)
            java.lang.String r3 = "RewardCampaignsResourceManager"
            if (r2 == 0) goto L5d
            java.lang.String r2 = "md5filename"
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L5d
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r2 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r2 = r2.getH5ResAddress(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.mbridge.msdk.reward.adapter.c$g r14 = new com.mbridge.msdk.reward.adapter.c$g     // Catch: java.lang.Exception -> L50
            r10 = 497(0x1f1, float:6.96E-43)
            com.mbridge.msdk.reward.adapter.c$h r11 = r0.a     // Catch: java.lang.Exception -> L50
            r4 = r14
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r12 = r22
            r13 = r23
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Exception -> L50
            r14.a(r2)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L50
            r0.downloadH5Res(r1, r14)     // Catch: java.lang.Exception -> L50
            goto L96
        L50:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L96
            java.lang.String r0 = r0.getLocalizedMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
            goto L96
        L5d:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r2 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()
            java.lang.String r2 = r2.getHtmlContentFromUrl(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.mbridge.msdk.reward.adapter.c$d r13 = new com.mbridge.msdk.reward.adapter.c$d     // Catch: java.lang.Exception -> L8a
            r5 = 497(0x1f1, float:6.96E-43)
            com.mbridge.msdk.reward.adapter.c$h r11 = r0.a     // Catch: java.lang.Exception -> L8a
            r4 = r13
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r10 = r22
            r12 = r23
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L8a
            r13.a(r2)     // Catch: java.lang.Exception -> L8a
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L8a
            r0.downloadH5Res(r1, r13)     // Catch: java.lang.Exception -> L8a
            goto L96
        L8a:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L96
            java.lang.String r0 = r0.getLocalizedMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        L96:
            return
    }

    private static synchronized java.lang.String b(int r2) {
            java.lang.Class<com.mbridge.msdk.reward.adapter.c> r0 = com.mbridge.msdk.reward.adapter.c.class
            monitor-enter(r0)
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 == r1) goto L23
            r1 = 201(0xc9, float:2.82E-43)
            if (r2 == r1) goto L1f
            r1 = 203(0xcb, float:2.84E-43)
            if (r2 == r1) goto L1b
            r1 = 205(0xcd, float:2.87E-43)
            if (r2 == r1) goto L17
            java.lang.String r2 = "unknown"
            monitor-exit(r0)
            return r2
        L17:
            java.lang.String r2 = "tpl"
            monitor-exit(r0)
            return r2
        L1b:
            java.lang.String r2 = "temp"
            monitor-exit(r0)
            return r2
        L1f:
            java.lang.String r2 = "zip/html"
            monitor-exit(r0)
            return r2
        L23:
            java.lang.String r2 = "video"
            monitor-exit(r0)
            return r2
        L27:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static boolean b(com.mbridge.msdk.reward.adapter.c r0) {
            boolean r0 = r0.c
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap c() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$a> r0 = com.mbridge.msdk.reward.adapter.c.b
            return r0
    }

    public final synchronized void a(android.content.Context r14, com.mbridge.msdk.foundation.entity.CampaignEx r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, com.mbridge.msdk.reward.adapter.c.i r19) {
            r13 = this;
            r9 = r13
            r0 = r15
            r4 = r16
            r3 = r17
            r5 = r18
            r6 = r19
            monitor-enter(r13)
            com.mbridge.msdk.reward.adapter.c$h r1 = r9.a     // Catch: java.lang.Throwable -> Lad
            r7 = r14
            r1.a(r14)     // Catch: java.lang.Throwable -> Lad
            if (r0 == 0) goto L74
            java.lang.String r1 = r15.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> Lad
            boolean r2 = r15.isDynamicView()     // Catch: java.lang.Throwable -> Lad
            if (r2 == 0) goto L74
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.i(r1)     // Catch: java.lang.Throwable -> Lad
            if (r2 == 0) goto L3c
            int r2 = r15.getMof_tplid()     // Catch: java.lang.Throwable -> Lad
            r7 = 0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lad
            r8.<init>()     // Catch: java.lang.Throwable -> Lad
            r8.append(r2)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = ""
            r8.append(r2)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Throwable -> Lad
            r13.a(r7, r15, r2, r1)     // Catch: java.lang.Throwable -> Lad
        L3c:
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()     // Catch: java.lang.Throwable -> Lad
            r2 = 1
            r0.setZipDownloadDone(r1, r2)     // Catch: java.lang.Throwable -> Lad
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> Lad
            r2 = 105(0x69, float:1.47E-43)
            r0.what = r2     // Catch: java.lang.Throwable -> Lad
            android.os.Bundle r2 = new android.os.Bundle     // Catch: java.lang.Throwable -> Lad
            r2.<init>()     // Catch: java.lang.Throwable -> Lad
            java.lang.String r7 = "unit_id"
            r2.putString(r7, r3)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r7 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Throwable -> Lad
            r2.putString(r7, r4)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r7 = "request_id"
            r2.putString(r7, r5)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r7 = "url"
            r2.putString(r7, r1)     // Catch: java.lang.Throwable -> Lad
            r0.setData(r2)     // Catch: java.lang.Throwable -> Lad
            com.mbridge.msdk.reward.adapter.c$h r2 = r9.a     // Catch: java.lang.Throwable -> Lad
            r2.sendMessage(r0)     // Catch: java.lang.Throwable -> Lad
            if (r6 == 0) goto L72
            r6.a(r4, r3, r5, r1)     // Catch: java.lang.Throwable -> Lad
        L72:
            monitor-exit(r13)
            return
        L74:
            if (r0 == 0) goto Lab
            java.lang.String r1 = r15.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> Lad
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lad
            if (r1 != 0) goto Lab
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r10 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lad
            java.lang.String r11 = r15.getCMPTEntryUrl()     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lad
            com.mbridge.msdk.reward.adapter.c$3 r12 = new com.mbridge.msdk.reward.adapter.c$3     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lad
            r1 = r12
            r2 = r13
            r3 = r17
            r4 = r16
            r5 = r18
            r6 = r19
            r7 = r14
            r8 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lad
            r10.downloadH5Res(r11, r12)     // Catch: java.lang.Exception -> L9d java.lang.Throwable -> Lad
            goto Lab
        L9d:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> Lad
            if (r1 == 0) goto Lab
            java.lang.String r1 = "RewardCampaignsResourceManager"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> Lad
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> Lad
        Lab:
            monitor-exit(r13)
            return
        Lad:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }

    public final synchronized void a(android.content.Context r16, boolean r17, int r18, boolean r19, int r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r24, com.mbridge.msdk.reward.adapter.c.c r25, com.mbridge.msdk.reward.adapter.c.i r26) {
            r15 = this;
            r10 = r15
            r0 = r22
            r11 = r23
            monitor-enter(r15)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r1.<init>()     // Catch: java.lang.Throwable -> L6a
            r1.append(r0)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L6a
            r1.append(r11)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r12 = r1.toString()     // Catch: java.lang.Throwable -> L6a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.reward.adapter.c$a> r13 = com.mbridge.msdk.reward.adapter.c.b     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$a r14 = new com.mbridge.msdk.reward.adapter.c$a     // Catch: java.lang.Throwable -> L6a
            int r5 = r24.size()     // Catch: java.lang.Throwable -> L6a
            r1 = r14
            r2 = r17
            r3 = r19
            r4 = r18
            r6 = r22
            r7 = r23
            r8 = r20
            r9 = r24
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L6a
            r13.put(r12, r14)     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$h r1 = r10.a     // Catch: java.lang.Throwable -> L6a
            r7 = r21
            r2 = r25
            r1.a(r7, r0, r11, r2)     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$h r1 = r10.a     // Catch: java.lang.Throwable -> L6a
            r4 = r16
            r1.a(r4)     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$h r1 = r10.a     // Catch: java.lang.Throwable -> L6a
            r3 = r24
            r1.a(r12, r3)     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$h r12 = r10.a     // Catch: java.lang.Throwable -> L6a
            com.mbridge.msdk.reward.adapter.c$1 r13 = new com.mbridge.msdk.reward.adapter.c$1     // Catch: java.lang.Throwable -> L6a
            r1 = r13
            r2 = r15
            r3 = r24
            r4 = r16
            r5 = r22
            r6 = r20
            r7 = r21
            r8 = r23
            r9 = r26
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L6a
            r12.post(r13)     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r15)
            return
        L6a:
            r0 = move-exception
            monitor-exit(r15)
            throw r0
    }

    public final synchronized void a(boolean r24, android.os.Handler r25, boolean r26, boolean r27, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r28, java.lang.String r29, int r30, com.mbridge.msdk.foundation.entity.CampaignEx r31, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r32, java.lang.String r33, java.lang.String r34, java.lang.String r35, java.lang.String r36, java.lang.String r37, com.mbridge.msdk.videocommon.d.c r38, com.mbridge.msdk.reward.adapter.c.j r39) {
            r23 = this;
            r15 = r29
            r13 = r31
            r0 = r32
            r14 = r35
            r12 = r36
            monitor-enter(r23)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L22a
            r1.<init>()     // Catch: java.lang.Throwable -> L22a
            r1.append(r14)     // Catch: java.lang.Throwable -> L22a
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L22a
            r1.append(r15)     // Catch: java.lang.Throwable -> L22a
            java.lang.String r17 = r1.toString()     // Catch: java.lang.Throwable -> L22a
            long r18 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L22a
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.h(r29)     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            if (r1 == 0) goto L3d
            if (r39 == 0) goto L3b
            r7 = 0
            r1 = r39
            r2 = r17
            r3 = r34
            r4 = r35
            r5 = r36
            r6 = r29
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
        L3b:
            monitor-exit(r23)
            return
        L3d:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> L22a
            android.content.Context r2 = r1.j()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> L22a
            java.lang.String r3 = "start preload template "
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> L22a
            long r8 = r4 - r18
            r1 = r31
            r4 = r35
            r5 = r27
            r6 = r36
            r7 = r37
            com.mbridge.msdk.reward.b.a.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> L22a
        L5a:
            com.mbridge.msdk.videocommon.a$a r11 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            r11.<init>()     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            com.mbridge.msdk.reward.adapter.c.m.a()     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            r1 = 1
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r10 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> Lef java.lang.Exception -> L17e
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le7 java.lang.Throwable -> Lef
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Le7 java.lang.Throwable -> Lef
            r10.<init>(r2)     // Catch: java.lang.Exception -> Le7 java.lang.Throwable -> Lef
            r11.a(r10)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r1 = 0
            if (r0 == 0) goto L82
            int r2 = r32.size()     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            if (r2 <= 0) goto L82
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            r2.<init>(r1, r13, r0)     // Catch: java.lang.Exception -> L201 java.lang.Throwable -> L22a
            goto L87
        L82:
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r2.<init>(r1, r13)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
        L87:
            r1 = r30
            r9 = r2
            r9.a(r1)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r9.a(r14)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r1 = r38
            r9.a(r1)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r1 = r24
            r9.e(r1)     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            com.mbridge.msdk.reward.adapter.c$k r8 = new com.mbridge.msdk.reward.adapter.c$k     // Catch: java.lang.Exception -> Ldf java.lang.Throwable -> L22a
            r3 = 0
            r1 = r8
            r2 = r25
            r4 = r26
            r5 = r27
            r6 = r36
            r7 = r39
            r20 = r8
            r8 = r28
            r21 = r9
            r9 = r29
            r22 = r10
            r10 = r34
            r24 = r11
            r11 = r35
            r12 = r24
            r13 = r31
            r14 = r32
            r15 = r18
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L22a
            r1 = r20
            r0 = r22
            r0.setWebViewListener(r1)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L22a
            r2 = r21
            r0.setObject(r2)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L22a
            r1 = r33
            r0.loadUrl(r1)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L22a
            r10 = r36
            r0.setRid(r10)     // Catch: java.lang.Exception -> L179 java.lang.Throwable -> L22a
            goto L228
        Ldb:
            r0 = move-exception
            r10 = r36
            goto Le1
        Ldf:
            r0 = move-exception
            r10 = r12
        Le1:
            r14 = r29
            r12 = r35
            goto L205
        Le7:
            r0 = move-exception
            r10 = r12
            r14 = r29
            r12 = r35
            goto L182
        Lef:
            r0 = move-exception
            r24 = r11
            r10 = r12
            if (r39 == 0) goto L17c
            r11 = r24
            r11.a(r1)     // Catch: java.lang.Exception -> L179 java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r2 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()     // Catch: java.lang.Exception -> L179 java.lang.Throwable -> L22a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L179 java.lang.Throwable -> L22a
            r3.<init>()     // Catch: java.lang.Exception -> L179 java.lang.Throwable -> L22a
            r12 = r35
            r3.append(r12)     // Catch: java.lang.Exception -> L174 java.lang.Throwable -> L22a
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L174 java.lang.Throwable -> L22a
            r3.append(r10)     // Catch: java.lang.Exception -> L174 java.lang.Throwable -> L22a
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L174 java.lang.Throwable -> L22a
            r14 = r29
            r3.append(r14)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r2.setTemplatePreLoadDone(r3, r1)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            android.content.Context r2 = r1.j()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            r1.<init>()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            java.lang.String r3 = "WebView exception: "
            r1.append(r3)     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            r1.append(r0)     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
            long r8 = r0 - r18
            r1 = r31
            r4 = r35
            r5 = r27
            r6 = r36
            r7 = r37
            com.mbridge.msdk.reward.b.a.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L151 java.lang.Throwable -> L22a
        L151:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.<init>()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.append(r12)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r1 = "_"
            r0.append(r1)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.append(r14)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r1 = r39
            r3 = r34
            r4 = r35
            r5 = r36
            r6 = r29
            r7 = r11
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            goto L17c
        L174:
            r0 = move-exception
            r14 = r29
            goto L205
        L179:
            r0 = move-exception
            goto Le1
        L17c:
            monitor-exit(r23)
            return
        L17e:
            r0 = move-exception
            r10 = r12
            r12 = r14
            r14 = r15
        L182:
            if (r39 == 0) goto L1ff
            r11.a(r1)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r2 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r3.<init>()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r3.append(r12)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r3.append(r10)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r3.append(r14)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r2.setTemplatePreLoadDone(r3, r1)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            android.content.Context r2 = r1.j()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            r1.<init>()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            java.lang.String r3 = "WebView exception: "
            r1.append(r3)     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            r1.append(r0)     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
            long r8 = r0 - r18
            r1 = r31
            r4 = r35
            r5 = r27
            r6 = r36
            r7 = r37
            com.mbridge.msdk.reward.b.a.a(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L1da java.lang.Throwable -> L22a
        L1da:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.<init>()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.append(r12)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r1 = "_"
            r0.append(r1)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r0.append(r14)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            r1 = r39
            r3 = r34
            r4 = r35
            r5 = r36
            r6 = r29
            r7 = r11
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L1fd java.lang.Throwable -> L22a
            goto L1ff
        L1fd:
            r0 = move-exception
            goto L205
        L1ff:
            monitor-exit(r23)
            return
        L201:
            r0 = move-exception
            r10 = r12
            r12 = r14
            r14 = r15
        L205:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L22a
            if (r1 == 0) goto L212
            java.lang.String r1 = "RewardCampaignsResourceManager"
            java.lang.String r2 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L22a
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L22a
        L212:
            if (r39 == 0) goto L228
            r7 = 0
            java.lang.String r8 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L22a
            r1 = r39
            r2 = r17
            r3 = r34
            r4 = r35
            r5 = r36
            r6 = r29
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L22a
        L228:
            monitor-exit(r23)
            return
        L22a:
            r0 = move-exception
            monitor-exit(r23)
            throw r0
    }

    public final synchronized void a(boolean r27, android.os.Handler r28, boolean r29, boolean r30, java.lang.String r31, java.lang.String r32, java.lang.String r33, java.lang.String r34, java.lang.String r35, int r36, com.mbridge.msdk.foundation.entity.CampaignEx r37, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r38, java.lang.String r39, java.lang.String r40, com.mbridge.msdk.videocommon.d.c r41, com.mbridge.msdk.reward.adapter.c.j r42, boolean r43) {
            r26 = this;
            r1 = r26
            r15 = r31
            r14 = r34
            r0 = r37
            r13 = r38
            r12 = r43
            monitor-enter(r26)
            r1.c = r12     // Catch: java.lang.Throwable -> L211
            long r19 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L211
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L211
            r2.<init>()     // Catch: java.lang.Throwable -> L211
            r2.append(r14)     // Catch: java.lang.Throwable -> L211
            java.lang.String r3 = "_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L211
            r11 = r35
            r2.append(r11)     // Catch: java.lang.Throwable -> L211
            java.lang.String r21 = r2.toString()     // Catch: java.lang.Throwable -> L211
            r1.c = r12     // Catch: java.lang.Throwable -> L211
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.h(r35)     // Catch: java.lang.Throwable -> L211
            if (r2 == 0) goto L47
            if (r42 == 0) goto L45
            r0 = 0
            r36 = r42
            r37 = r21
            r38 = r33
            r39 = r34
            r40 = r31
            r41 = r35
            r42 = r0
            r36.a(r37, r38, r39, r40, r41, r42)     // Catch: java.lang.Throwable -> L211
        L45:
            monitor-exit(r26)
            return
        L47:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> L211
            android.content.Context r3 = r2.j()     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> L211
            java.lang.String r4 = "start preload tpl"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> L211
            long r9 = r5 - r19
            r2 = r37
            r5 = r40
            r6 = r30
            r7 = r31
            r8 = r32
            com.mbridge.msdk.reward.b.a.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> L211
        L64:
            java.lang.String r2 = "RewardCampaignsResourceManager"
            java.lang.String r3 = "开始预加载大模板资源"
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.videocommon.a$a r10 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r10.<init>()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.reward.adapter.c.m.a()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r9.<init>(r2)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r10.a(r9)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.video.bt.a.c r2 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r8 = r2.b()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.video.bt.a.c r2 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r7 = r2.b()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r10.a(r7)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r2 = "RewardCampaignsResourceManager"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r3.<init>()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r4 = "preload BT wraper.setTag "
            r3.append(r4)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r3.append(r7)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r13 == 0) goto L116
            int r4 = r38.size()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r4 <= 0) goto L116
            com.mbridge.msdk.videocommon.download.b r4 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.util.concurrent.CopyOnWriteArrayList r4 = r4.a(r14)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r4 == 0) goto L10f
            int r5 = r4.size()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r5 <= 0) goto L10f
            r5 = 0
        Lc5:
            int r6 = r38.size()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r5 >= r6) goto L10f
            java.lang.Object r6 = r13.get(r5)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.util.Iterator r16 = r4.iterator()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
        Ld5:
            boolean r17 = r16.hasNext()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r17 == 0) goto L10c
            java.lang.Object r17 = r16.next()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.entity.CampaignEx r17 = (com.mbridge.msdk.foundation.entity.CampaignEx) r17     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r3 = r6.getId()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r2 == 0) goto Ld5
            java.lang.String r2 = r17.getRequestId()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            java.lang.String r3 = r6.getRequestId()     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            if (r2 == 0) goto Ld5
            java.lang.String r2 = "RewardCampaignsResourceManager"
            java.lang.String r3 = "设置 Campaign 的 isReady： true"
            com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r2 = 1
            r6.setReady(r2)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r13.set(r5, r6)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            goto Ld5
        L10c:
            int r5 = r5 + 1
            goto Lc5
        L10f:
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r3 = 0
            r2.<init>(r3, r0, r13)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            goto L11c
        L116:
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r3 = 0
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
        L11c:
            r4 = r36
            r6 = r2
            r6.a(r4)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r2 = r40
            r6.a(r2)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r6.c(r7)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r6.d(r8)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r2 = 1
            r6.d(r2)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r3 = r41
            r6.a(r3)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r2 = r27
            r6.e(r2)     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            com.mbridge.msdk.reward.adapter.c$b r5 = new com.mbridge.msdk.reward.adapter.c$b     // Catch: java.lang.Exception -> L1e5 java.lang.Throwable -> L211
            r16 = 0
            r32 = r5
            r5 = r16
            r2 = r32
            r3 = r27
            r4 = r28
            r22 = r6
            r6 = r29
            r23 = r7
            r7 = r30
            r24 = r8
            r8 = r36
            r25 = r9
            r9 = r35
            r16 = r10
            r10 = r33
            r11 = r34
            r12 = r31
            r13 = r16
            r14 = r37
            r15 = r38
            r16 = r41
            r17 = r42
            r18 = r43
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)     // Catch: java.lang.Exception -> L1df java.lang.Throwable -> L211
            r0 = r25
            r0.setWebViewListener(r2)     // Catch: java.lang.Exception -> L1df java.lang.Throwable -> L211
            r2 = r22
            r0.setObject(r2)     // Catch: java.lang.Exception -> L1df java.lang.Throwable -> L211
            r2 = r39
            r0.loadUrl(r2)     // Catch: java.lang.Exception -> L1df java.lang.Throwable -> L211
            r2 = r31
            r0.setRid(r2)     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            com.mbridge.msdk.video.bt.module.MBridgeBTRootLayout r3 = new com.mbridge.msdk.video.bt.module.MBridgeBTRootLayout     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            r3.<init>(r4)     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            r5 = -1
            r4.<init>(r5, r5)     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            r3.setLayoutParams(r4)     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            r4 = r24
            r3.setInstanceId(r4)     // Catch: java.lang.Exception -> L1dd java.lang.Throwable -> L211
            r6 = r34
            r3.setUnitId(r6)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r7 = new com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r7.<init>(r8)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            android.widget.FrameLayout$LayoutParams r8 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r8.<init>(r5, r5)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r7.setLayoutParams(r8)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r8 = r23
            r7.setInstanceId(r8)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r7.setUnitId(r6)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r7.setWebView(r0)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            java.util.LinkedHashMap r0 = r0.b(r6, r2)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r0.put(r8, r7)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r0.put(r4, r3)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r0.<init>(r5, r5)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            r3.addView(r7, r0)     // Catch: java.lang.Exception -> L1db java.lang.Throwable -> L211
            goto L20f
        L1db:
            r0 = move-exception
            goto L1e8
        L1dd:
            r0 = move-exception
            goto L1e2
        L1df:
            r0 = move-exception
            r2 = r31
        L1e2:
            r6 = r34
            goto L1e8
        L1e5:
            r0 = move-exception
            r6 = r14
            r2 = r15
        L1e8:
            if (r42 == 0) goto L202
            r3 = 0
            java.lang.String r4 = r0.getMessage()     // Catch: java.lang.Throwable -> L211
            r36 = r42
            r37 = r21
            r38 = r33
            r39 = r34
            r40 = r31
            r41 = r35
            r42 = r3
            r43 = r4
            r36.a(r37, r38, r39, r40, r41, r42, r43)     // Catch: java.lang.Throwable -> L211
        L202:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L211
            if (r2 == 0) goto L20f
            java.lang.String r2 = "RewardCampaignsResourceManager"
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L211
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)     // Catch: java.lang.Throwable -> L211
        L20f:
            monitor-exit(r26)
            return
        L211:
            r0 = move-exception
            monitor-exit(r26)
            throw r0
    }

    public final synchronized void b() {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }
}
