package com.mbridge.msdk.reward.adapter;

public final class d implements com.mbridge.msdk.reward.adapter.a {
    private boolean A;
    private boolean B;
    private java.lang.String C;
    private int D;
    private int E;
    private int F;
    private com.mbridge.msdk.foundation.entity.CampaignUnit G;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> H;
    private boolean I;
    private long J;
    private android.os.Handler K;
    private boolean L;
    private long M;
    private java.lang.String N;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> O;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> P;
    public java.lang.Object a;
    public java.lang.String b;
    public java.lang.String c;
    boolean d;
    volatile boolean e;
    volatile boolean f;
    volatile boolean g;
    volatile boolean h;
    volatile boolean i;
    private android.content.Context j;
    private java.lang.String k;
    private java.lang.String l;
    private int m;
    private int n;
    private int o;
    private boolean p;
    private java.lang.String q;
    private java.lang.String r;
    private com.mbridge.msdk.video.bt.module.b.h s;
    private volatile com.mbridge.msdk.reward.adapter.b t;
    private com.mbridge.msdk.videocommon.d.c u;
    private com.mbridge.msdk.reward.adapter.d.e v;
    private boolean w;
    private boolean x;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> y;
    private int z;



    final class 3 implements com.mbridge.msdk.reward.adapter.c.c {
        final boolean a;
        final com.mbridge.msdk.foundation.entity.CampaignEx b;
        final int c;
        final com.mbridge.msdk.reward.adapter.d d;




        3(com.mbridge.msdk.reward.adapter.d r1, boolean r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r22, java.lang.String r23, java.lang.String r24, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r25) {
                r21 = this;
                r8 = r21
                r0 = r23
                r9 = r25
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Campaign 下载成功： "
                r1.append(r2)
                int r2 = r25.size()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "RewardMVVideoAdapter"
                com.mbridge.msdk.foundation.tools.z.a(r2, r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                r10 = 1
                r1.e = r10
                r11 = 0
                if (r9 == 0) goto L71
                int r1 = r25.size()
                if (r1 <= 0) goto L71
                java.lang.Object r1 = r9.get(r11)     // Catch: java.lang.Exception -> L71
                r12 = r1
                com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12     // Catch: java.lang.Exception -> L71
                com.mbridge.msdk.reward.adapter.d r1 = r8.d     // Catch: java.lang.Exception -> L71
                android.content.Context r13 = com.mbridge.msdk.reward.adapter.d.j(r1)     // Catch: java.lang.Exception -> L71
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
                r1.<init>()     // Catch: java.lang.Exception -> L71
                java.lang.String r2 = "resource download success is tpl :"
                r1.append(r2)     // Catch: java.lang.Exception -> L71
                boolean r2 = r8.a     // Catch: java.lang.Exception -> L71
                r1.append(r2)     // Catch: java.lang.Exception -> L71
                java.lang.String r14 = r1.toString()     // Catch: java.lang.Exception -> L71
                com.mbridge.msdk.reward.adapter.d r1 = r8.d     // Catch: java.lang.Exception -> L71
                java.lang.String r15 = com.mbridge.msdk.reward.adapter.d.f(r1)     // Catch: java.lang.Exception -> L71
                com.mbridge.msdk.reward.adapter.d r1 = r8.d     // Catch: java.lang.Exception -> L71
                boolean r16 = com.mbridge.msdk.reward.adapter.d.h(r1)     // Catch: java.lang.Exception -> L71
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Exception -> L71
                java.lang.String r18 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L71
                long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L71
                com.mbridge.msdk.reward.adapter.d r3 = r8.d     // Catch: java.lang.Exception -> L71
                long r3 = com.mbridge.msdk.reward.adapter.d.i(r3)     // Catch: java.lang.Exception -> L71
                long r19 = r1 - r3
                r17 = r24
                com.mbridge.msdk.reward.b.a.a(r12, r13, r14, r15, r16, r17, r18, r19)     // Catch: java.lang.Exception -> L71
            L71:
                boolean r1 = r8.a
                if (r1 != 0) goto L239
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 非大模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                java.util.Iterator r12 = r25.iterator()
            L80:
                boolean r1 = r12.hasNext()
                if (r1 == 0) goto L2ae
                java.lang.Object r1 = r12.next()
                r14 = r1
                com.mbridge.msdk.foundation.entity.CampaignEx r14 = (com.mbridge.msdk.foundation.entity.CampaignEx) r14
                if (r14 == 0) goto Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r14.getRewardTemplateMode()
                if (r1 == 0) goto Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r14.getRewardTemplateMode()
                java.lang.String r1 = r1.e()
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ldd
                com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r14.getRewardTemplateMode()
                java.lang.String r1 = r1.e()
                java.lang.String r2 = "cmpt=1"
                boolean r1 = r1.contains(r2)
                if (r1 != 0) goto Ldd
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                if (r1 == 0) goto Ldd
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 非大模板，开始预加载播放模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r13 = com.mbridge.msdk.reward.adapter.d.k(r1)
                com.mbridge.msdk.reward.adapter.d$3$1 r15 = new com.mbridge.msdk.reward.adapter.d$3$1
                r1 = r15
                r2 = r21
                r3 = r14
                r4 = r22
                r5 = r23
                r6 = r24
                r7 = r25
                r1.<init>(r2, r3, r4, r5, r6, r7)
                r13.post(r15)
                goto L80
            Ldd:
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 非大模板，不存在播放模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.util.concurrent.CopyOnWriteArrayList r2 = com.mbridge.msdk.reward.adapter.d.e(r1)
                boolean r3 = r8.a
                int r4 = r8.c
                boolean r1 = r1.a(r2, r3, r4)
                r2 = 5
                if (r1 == 0) goto L192
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r3 = "Campaign 下载成功： 非大模板，不存在播放模板,isReay true"
                com.mbridge.msdk.foundation.tools.z.a(r1, r3)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r3 = "模板加载成功 requestId "
                r1.append(r3)
                java.lang.Object r3 = r9.get(r11)
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
                java.lang.String r3 = r3.getRequestId()
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                java.lang.String r3 = "HBOPTIMIZE"
                com.mbridge.msdk.foundation.tools.z.a(r3, r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.lang.String r3 = com.mbridge.msdk.reward.adapter.d.f(r1)
                com.mbridge.msdk.reward.adapter.d r4 = r8.d
                java.util.List r4 = com.mbridge.msdk.reward.adapter.d.g(r4)
                com.mbridge.msdk.reward.adapter.d r5 = r8.d
                boolean r5 = com.mbridge.msdk.reward.adapter.d.h(r5)
                com.mbridge.msdk.reward.adapter.d.a(r1, r3, r9, r4, r5)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                if (r1 == 0) goto L142
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                r1.removeMessages(r2)
            L142:
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                com.mbridge.msdk.reward.adapter.b r1 = com.mbridge.msdk.reward.adapter.d.c(r1)
                if (r1 == 0) goto L80
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.h
                if (r1 != 0) goto L80
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                r1.h = r10
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.lang.String r1 = com.mbridge.msdk.reward.adapter.d.f(r1)
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L180
                long r1 = java.lang.System.currentTimeMillis()
                com.mbridge.msdk.reward.adapter.d r3 = r8.d
                long r3 = com.mbridge.msdk.reward.adapter.d.i(r3)
                long r1 = r1 - r3
                com.mbridge.msdk.reward.adapter.d r3 = r8.d
                android.content.Context r3 = com.mbridge.msdk.reward.adapter.d.j(r3)
                com.mbridge.msdk.reward.adapter.d r4 = r8.d
                java.util.concurrent.CopyOnWriteArrayList r4 = com.mbridge.msdk.reward.adapter.d.e(r4)
                com.mbridge.msdk.reward.adapter.d r5 = r8.d
                java.lang.String r5 = com.mbridge.msdk.reward.adapter.d.f(r5)
                com.mbridge.msdk.reward.b.a.a(r3, r4, r5, r1)
            L180:
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                com.mbridge.msdk.reward.adapter.b r1 = com.mbridge.msdk.reward.adapter.d.c(r1)
                r1.a()
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 非大模板，播放模板预加载成功,isReay true onVideoLoadSuccess"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                goto L80
            L192:
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r3 = "Campaign 下载成功： 非大模板，不存在播放模板,isReay false"
                com.mbridge.msdk.foundation.tools.z.a(r1, r3)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r3 = "模板加载失败 requestId "
                r1.append(r3)
                java.lang.Object r3 = r9.get(r11)
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
                java.lang.String r3 = r3.getRequestId()
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                java.lang.String r3 = "HBOPTIMIZE"
                com.mbridge.msdk.foundation.tools.z.d(r3, r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r1)
                com.mbridge.msdk.reward.adapter.d r4 = r8.d
                boolean r4 = com.mbridge.msdk.reward.adapter.d.h(r4)
                com.mbridge.msdk.reward.adapter.d.a(r1, r0, r3, r4)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                if (r1 == 0) goto L1d9
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                r1.removeMessages(r2)
            L1d9:
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                com.mbridge.msdk.reward.adapter.b r1 = com.mbridge.msdk.reward.adapter.d.c(r1)
                if (r1 == 0) goto L80
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.i
                if (r1 != 0) goto L80
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                r1.i = r10
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.lang.String r1 = com.mbridge.msdk.reward.adapter.d.f(r1)
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L225
                if (r14 == 0) goto L208
                java.lang.String r1 = r14.getRequestIdNotice()
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L208
                java.lang.String r1 = r14.getRequestIdNotice()
                goto L20a
            L208:
                java.lang.String r1 = ""
            L20a:
                r19 = r1
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.content.Context r13 = com.mbridge.msdk.reward.adapter.d.j(r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.lang.String r16 = com.mbridge.msdk.reward.adapter.d.f(r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r17 = com.mbridge.msdk.reward.adapter.d.h(r1)
                java.lang.String r15 = "have no temp but isReady false"
                r18 = r24
                com.mbridge.msdk.reward.b.a.a(r13, r14, r15, r16, r17, r18, r19)
            L225:
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                com.mbridge.msdk.reward.adapter.b r1 = com.mbridge.msdk.reward.adapter.d.c(r1)
                java.lang.String r2 = "errorCode: 3503 errorMessage: have no temp but isReady false"
                r1.a(r2)
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 非大模板，不存在播放模板,isReay false onVideoLoadFail"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                goto L80
            L239:
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 大模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.f
                if (r1 == 0) goto L288
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.g
                if (r1 != 0) goto L288
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                if (r1 == 0) goto L288
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.String r2 = "Campaign 下载成功： 大模板，大模板下载成功，开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                java.lang.Object r1 = r1.a
                monitor-enter(r1)
                com.mbridge.msdk.reward.adapter.d r2 = r8.d     // Catch: java.lang.Throwable -> L285
                boolean r2 = r2.g     // Catch: java.lang.Throwable -> L285
                if (r2 == 0) goto L268
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L285
                return
            L268:
                com.mbridge.msdk.reward.adapter.d r2 = r8.d     // Catch: java.lang.Throwable -> L285
                r2.g = r10     // Catch: java.lang.Throwable -> L285
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L285
                java.lang.String r1 = "test_pre_load_tpl"
                java.lang.String r2 = "Campaign 下载成功，大模板下载成功，开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)
                com.mbridge.msdk.reward.adapter.d$3$2 r2 = new com.mbridge.msdk.reward.adapter.d$3$2
                r3 = r24
                r2.<init>(r8, r3, r0, r9)
                r1.post(r2)
                goto L2ae
            L285:
                r0 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L285
                throw r0
            L288:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Campaign 下载成功： 大模板，大模板下载不成功： isCampaignTPLDownloadSuccess： "
                r0.append(r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.f
                r0.append(r1)
                java.lang.String r1 = "  isCampaignTPLProLoad： "
                r0.append(r1)
                com.mbridge.msdk.reward.adapter.d r1 = r8.d
                boolean r1 = r1.g
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RewardMVVideoAdapter"
                com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            L2ae:
                return
        }

        @Override
        public final void a(java.lang.String r17, java.lang.String r18, java.lang.String r19, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r20, java.lang.String r21) {
                r16 = this;
                r6 = r16
                r3 = r20
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Campaign 下载失败： "
                r0.append(r1)
                int r1 = r20.size()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RewardMVVideoAdapter"
                com.mbridge.msdk.foundation.tools.z.a(r1, r0)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "模板加载失败 requestId "
                r0.append(r1)
                r5 = r19
                r0.append(r5)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "HBOPTIMIZE"
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                com.mbridge.msdk.reward.adapter.d r0 = r6.d
                r1 = 0
                r0.e = r1
                if (r3 == 0) goto L91
                int r0 = r20.size()
                if (r0 <= 0) goto L91
                java.lang.Object r0 = r3.get(r1)     // Catch: java.lang.Exception -> L91
                r7 = r0
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = (com.mbridge.msdk.foundation.entity.CampaignEx) r7     // Catch: java.lang.Exception -> L91
                com.mbridge.msdk.reward.adapter.d r0 = r6.d     // Catch: java.lang.Exception -> L91
                android.content.Context r8 = com.mbridge.msdk.reward.adapter.d.j(r0)     // Catch: java.lang.Exception -> L91
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L91
                r0.<init>()     // Catch: java.lang.Exception -> L91
                java.lang.String r1 = "resource download failed: "
                r0.append(r1)     // Catch: java.lang.Exception -> L91
                r4 = r21
                r0.append(r4)     // Catch: java.lang.Exception -> L93
                java.lang.String r1 = " is tpl: "
                r0.append(r1)     // Catch: java.lang.Exception -> L93
                boolean r1 = r6.a     // Catch: java.lang.Exception -> L93
                r0.append(r1)     // Catch: java.lang.Exception -> L93
                java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L93
                com.mbridge.msdk.reward.adapter.d r0 = r6.d     // Catch: java.lang.Exception -> L93
                java.lang.String r10 = com.mbridge.msdk.reward.adapter.d.f(r0)     // Catch: java.lang.Exception -> L93
                com.mbridge.msdk.reward.adapter.d r0 = r6.d     // Catch: java.lang.Exception -> L93
                boolean r11 = com.mbridge.msdk.reward.adapter.d.h(r0)     // Catch: java.lang.Exception -> L93
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b     // Catch: java.lang.Exception -> L93
                java.lang.String r13 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L93
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L93
                com.mbridge.msdk.reward.adapter.d r2 = r6.d     // Catch: java.lang.Exception -> L93
                long r14 = com.mbridge.msdk.reward.adapter.d.i(r2)     // Catch: java.lang.Exception -> L93
                long r14 = r0 - r14
                r12 = r19
                com.mbridge.msdk.reward.b.a.a(r7, r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Exception -> L93
                goto L93
            L91:
                r4 = r21
            L93:
                com.mbridge.msdk.reward.adapter.d r0 = r6.d
                com.mbridge.msdk.reward.adapter.b r0 = com.mbridge.msdk.reward.adapter.d.c(r0)
                if (r0 == 0) goto Lbc
                com.mbridge.msdk.reward.adapter.d r0 = r6.d
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)
                if (r0 == 0) goto Lbc
                com.mbridge.msdk.reward.adapter.d r0 = r6.d
                android.os.Handler r7 = com.mbridge.msdk.reward.adapter.d.k(r0)
                com.mbridge.msdk.reward.adapter.d$3$3 r8 = new com.mbridge.msdk.reward.adapter.d$3$3
                r0 = r8
                r1 = r16
                r2 = r18
                r3 = r20
                r4 = r21
                r5 = r19
                r0.<init>(r1, r2, r3, r4, r5)
                r7.post(r8)
            Lbc:
                return
        }
    }


    final class 5 implements com.mbridge.msdk.reward.adapter.c.i {
        final com.mbridge.msdk.foundation.entity.CampaignEx a;
        final boolean b;
        final int c;
        final com.mbridge.msdk.reward.adapter.d d;


        5(com.mbridge.msdk.reward.adapter.d r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, boolean r3, int r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18) {
                r14 = this;
                r1 = r14
                java.lang.String r0 = "RewardMVVideoAdapter"
                java.lang.String r2 = "大模板业务，大模板下载成功"
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r1.a     // Catch: java.lang.Exception -> L45
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Exception -> L45
                android.content.Context r4 = com.mbridge.msdk.reward.adapter.d.j(r0)     // Catch: java.lang.Exception -> L45
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L45
                r0.<init>()     // Catch: java.lang.Exception -> L45
                java.lang.String r2 = "resource download success is tpl :"
                r0.append(r2)     // Catch: java.lang.Exception -> L45
                boolean r2 = r1.b     // Catch: java.lang.Exception -> L45
                r0.append(r2)     // Catch: java.lang.Exception -> L45
                java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L45
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Exception -> L45
                java.lang.String r6 = com.mbridge.msdk.reward.adapter.d.f(r0)     // Catch: java.lang.Exception -> L45
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Exception -> L45
                boolean r7 = com.mbridge.msdk.reward.adapter.d.h(r0)     // Catch: java.lang.Exception -> L45
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.a     // Catch: java.lang.Exception -> L45
                java.lang.String r9 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L45
                long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L45
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Exception -> L45
                long r12 = com.mbridge.msdk.reward.adapter.d.i(r0)     // Catch: java.lang.Exception -> L45
                long r10 = r10 - r12
                r8 = r17
                com.mbridge.msdk.reward.b.a.a(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L45
            L45:
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                r2 = 1
                r0.f = r2
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                boolean r0 = r0.e
                if (r0 == 0) goto L95
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                boolean r0 = r0.g
                if (r0 != 0) goto L95
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)
                if (r0 == 0) goto L95
                java.lang.String r0 = "RewardMVVideoAdapter"
                java.lang.String r3 = "大模板业务，大模板下载成功，Campaign 下载成功，开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                java.lang.String r0 = "test_pre_load_tpl"
                java.lang.String r3 = "大模板下载成功，Campaign 下载成功，开始预加载大模板"
                com.mbridge.msdk.foundation.tools.z.a(r0, r3)
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                java.lang.Object r3 = r0.a
                monitor-enter(r3)
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Throwable -> L92
                boolean r0 = r0.g     // Catch: java.lang.Throwable -> L92
                if (r0 == 0) goto L79
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
                return
            L79:
                com.mbridge.msdk.reward.adapter.d r0 = r1.d     // Catch: java.lang.Throwable -> L92
                r0.g = r2     // Catch: java.lang.Throwable -> L92
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
                com.mbridge.msdk.reward.adapter.d r0 = r1.d
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)
                com.mbridge.msdk.reward.adapter.d$5$1 r2 = new com.mbridge.msdk.reward.adapter.d$5$1
                r3 = r15
                r4 = r16
                r5 = r17
                r2.<init>(r14, r5, r15, r4)
                r0.post(r2)
                goto Lbb
            L92:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L92
                throw r0
            L95:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "大模板业务，大模板下载成功，Campaign 下载不成功，isCampaignsDownloadSuccess： "
                r0.append(r2)
                com.mbridge.msdk.reward.adapter.d r2 = r1.d
                boolean r2 = r2.e
                r0.append(r2)
                java.lang.String r2 = "  isCampaignTPLProLoad： "
                r0.append(r2)
                com.mbridge.msdk.reward.adapter.d r2 = r1.d
                boolean r2 = r2.g
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r2 = "RewardMVVideoAdapter"
                com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            Lbb:
                return
        }

        @Override
        public final void a(java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22) {
                r17 = this;
                r0 = r17
                r1 = r22
                java.lang.String r2 = "RewardMVVideoAdapter"
                java.lang.String r3 = "大模板业务，大模板下载失败"
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "模板加载成功 requestId "
                r3.append(r4)
                r4 = r20
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                java.lang.String r5 = "HBOPTIMIZE"
                com.mbridge.msdk.foundation.tools.z.d(r5, r3)
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)
                r14 = 0
                java.lang.Object r3 = r3.get(r14)
                if (r3 == 0) goto L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)
                int r3 = r3.size()
                if (r3 <= 0) goto L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)     // Catch: java.lang.Exception -> L96
                java.lang.Object r3 = r3.get(r14)     // Catch: java.lang.Exception -> L96
                r5 = r3
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                android.content.Context r6 = com.mbridge.msdk.reward.adapter.d.j(r3)     // Catch: java.lang.Exception -> L96
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L96
                r3.<init>()     // Catch: java.lang.Exception -> L96
                java.lang.String r7 = "resource download failed: "
                r3.append(r7)     // Catch: java.lang.Exception -> L96
                r3.append(r1)     // Catch: java.lang.Exception -> L96
                java.lang.String r7 = " is tpl: "
                r3.append(r7)     // Catch: java.lang.Exception -> L96
                boolean r7 = r0.b     // Catch: java.lang.Exception -> L96
                r3.append(r7)     // Catch: java.lang.Exception -> L96
                java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                java.lang.String r8 = com.mbridge.msdk.reward.adapter.d.f(r3)     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                boolean r9 = com.mbridge.msdk.reward.adapter.d.h(r3)     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)     // Catch: java.lang.Exception -> L96
                java.lang.Object r3 = r3.get(r14)     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Exception -> L96
                java.lang.String r11 = r3.getRequestIdNotice()     // Catch: java.lang.Exception -> L96
                long r12 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L96
                com.mbridge.msdk.reward.adapter.d r3 = r0.d     // Catch: java.lang.Exception -> L96
                long r15 = com.mbridge.msdk.reward.adapter.d.i(r3)     // Catch: java.lang.Exception -> L96
                long r12 = r12 - r15
                r10 = r20
                com.mbridge.msdk.reward.b.a.a(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L96
            L96:
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.a
                java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
                if (r3 == 0) goto Lea
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.a
                java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
                int r3 = r3.size()
                if (r3 <= 0) goto Lea
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.a
                java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
                r5 = 3
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                boolean r3 = r3.contains(r5)
                if (r3 == 0) goto Lc1
                java.lang.String r1 = "tpl download fail but hit ignoreCheckRule"
                com.mbridge.msdk.foundation.tools.z.b(r2, r1)
                return
            Lc1:
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.a
                java.lang.String r3 = r3.getCMPTEntryUrl()
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r0.a
                java.lang.String r5 = r5.getendcard_url()
                boolean r3 = r3.equals(r5)
                if (r3 == 0) goto Lea
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.a
                java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
                r5 = 2
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                boolean r3 = r3.contains(r5)
                if (r3 == 0) goto Lea
                java.lang.String r1 = "endcard download fail but hit ignoreCheckRule at 3203"
                com.mbridge.msdk.foundation.tools.z.b(r2, r1)
                return
            Lea:
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                r3.f = r14
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r5 = com.mbridge.msdk.reward.adapter.d.d(r3)
                com.mbridge.msdk.reward.adapter.d r6 = r0.d
                boolean r6 = com.mbridge.msdk.reward.adapter.d.h(r6)
                r7 = r19
                com.mbridge.msdk.reward.adapter.d.a(r3, r7, r5, r6)
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                android.os.Handler r3 = com.mbridge.msdk.reward.adapter.d.k(r3)
                if (r3 == 0) goto L111
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                android.os.Handler r3 = com.mbridge.msdk.reward.adapter.d.k(r3)
                r5 = 5
                r3.removeMessages(r5)
            L111:
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                com.mbridge.msdk.reward.adapter.b r3 = com.mbridge.msdk.reward.adapter.d.c(r3)
                if (r3 == 0) goto L183
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                boolean r3 = r3.i
                if (r3 != 0) goto L183
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                r5 = 1
                r3.i = r5
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)
                if (r3 == 0) goto L173
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)
                int r3 = r3.size()
                if (r3 <= 0) goto L173
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                android.content.Context r5 = com.mbridge.msdk.reward.adapter.d.j(r3)
                com.mbridge.msdk.reward.adapter.d r3 = r0.d
                java.util.List r3 = com.mbridge.msdk.reward.adapter.d.d(r3)
                java.lang.Object r3 = r3.get(r14)
                r6 = r3
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r7 = ""
                r3.append(r7)
                r3.append(r1)
                java.lang.String r7 = r3.toString()
                com.mbridge.msdk.reward.adapter.d r1 = r0.d
                java.lang.String r8 = com.mbridge.msdk.reward.adapter.d.f(r1)
                com.mbridge.msdk.reward.adapter.d r1 = r0.d
                boolean r9 = com.mbridge.msdk.reward.adapter.d.h(r1)
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.a
                java.lang.String r11 = r1.getRequestIdNotice()
                r10 = r20
                com.mbridge.msdk.reward.b.a.a(r5, r6, r7, r8, r9, r10, r11)
            L173:
                com.mbridge.msdk.reward.adapter.d r1 = r0.d
                com.mbridge.msdk.reward.adapter.b r1 = com.mbridge.msdk.reward.adapter.d.c(r1)
                java.lang.String r3 = "errorCode: 3203 errorMessage: tpl temp resource download failed"
                r1.a(r3)
                java.lang.String r1 = "大模板业务，大模板下载失败 onVideoLoadFail"
                com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            L183:
                return
        }
    }


    private static class a extends com.mbridge.msdk.mbjscommon.c.a {
        private com.mbridge.msdk.reward.adapter.d a;
        private java.lang.String b;
        private java.lang.String c;
        private com.mbridge.msdk.videocommon.a.a d;
        private com.mbridge.msdk.foundation.entity.CampaignEx e;
        private boolean f;
        private boolean g;
        private com.mbridge.msdk.reward.adapter.d.b h;
        private android.os.Handler i;

        public a(java.lang.String r1, java.lang.String r2, com.mbridge.msdk.videocommon.a.a r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, com.mbridge.msdk.reward.adapter.d r5, com.mbridge.msdk.reward.adapter.d.b r6, android.os.Handler r7) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                r0.c = r2
                r0.d = r3
                if (r5 == 0) goto Ld
                r0.a = r5
            Ld:
                r0.e = r4
                r0.h = r6
                r0.i = r7
                return
        }

        @Override
        public final void a(android.webkit.WebView r4, int r5) {
                r3 = this;
                boolean r4 = r3.g
                if (r4 != 0) goto L173
                com.mbridge.msdk.reward.adapter.d$b r4 = r3.h
                if (r4 == 0) goto Lf
                android.os.Handler r0 = r3.i
                if (r0 == 0) goto Lf
                r0.removeCallbacks(r4)
            Lf:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = "CampaignTPL templete preload readyState state = "
                r4.append(r0)
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                java.lang.String r5 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r5, r4)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.String r5 = r3.b
                r0 = 1
                r4.setTemplatePreLoadDone(r5, r0)
                com.mbridge.msdk.videocommon.a$a r4 = r3.d
                if (r4 == 0) goto L36
                r4.a(r0)
            L36:
                com.mbridge.msdk.videocommon.a.a r4 = com.mbridge.msdk.videocommon.a.a.a()
                java.lang.String r5 = r3.c
                com.mbridge.msdk.reward.adapter.d r1 = r3.a
                boolean r1 = com.mbridge.msdk.reward.adapter.d.h(r1)
                java.util.List r4 = r4.a(r5, r0, r1)
                if (r4 == 0) goto L102
                int r5 = r4.size()
                if (r5 <= 0) goto L102
                java.util.Iterator r4 = r4.iterator()
            L52:
                boolean r5 = r4.hasNext()
                if (r5 == 0) goto L102
                java.lang.Object r5 = r4.next()
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
                com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r5.getRewardTemplateMode()
                if (r5 == 0) goto L52
                java.lang.String r1 = r5.e()
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L52
                java.lang.String r1 = r5.e()
                java.lang.String r2 = "cmpt=1"
                boolean r1 = r1.contains(r2)
                if (r1 != 0) goto L52
                java.lang.String r5 = r5.e()
                java.lang.String r1 = r3.b
                boolean r5 = android.text.TextUtils.equals(r5, r1)
                if (r5 == 0) goto L52
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                java.lang.String r5 = r5.getCMPTEntryUrl()
                boolean r5 = android.text.TextUtils.isEmpty(r5)
                if (r5 == 0) goto La1
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                int r5 = r5.getMof_tplid()
                r1 = -1
                if (r5 != r1) goto La1
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                r5.getRequestIdNotice()
                goto Lab
            La1:
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                r5.getMof_tplid()
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                r5.getRequestIdNotice()
            Lab:
                com.mbridge.msdk.reward.adapter.d r5 = r3.a
                if (r5 == 0) goto Ldb
                boolean r5 = com.mbridge.msdk.reward.adapter.d.p(r5)
                if (r5 == 0) goto Ldb
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                boolean r5 = r5.isBidCampaign()
                if (r5 == 0) goto Ld2
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "Tempalte put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r5, r1)
                r5 = 287(0x11f, float:4.02E-43)
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e
                java.lang.String r1 = r1.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r2 = r3.d
                com.mbridge.msdk.videocommon.a.a(r5, r1, r2)
                goto L52
            Ld2:
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "Tempalte put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r5, r1)
                goto L52
            Ldb:
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.e
                boolean r5 = r5.isBidCampaign()
                if (r5 == 0) goto Lf9
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "Tempalte put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r5, r1)
                r5 = 94
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e
                java.lang.String r1 = r1.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r2 = r3.d
                com.mbridge.msdk.videocommon.a.a(r5, r1, r2)
                goto L52
            Lf9:
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "Tempalte put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r5, r1)
                goto L52
            L102:
                java.lang.String r4 = "RVWindVaneWebView"
                java.lang.String r5 = "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS "
                com.mbridge.msdk.foundation.tools.z.d(r4, r5)     // Catch: java.lang.Throwable -> L167
                com.mbridge.msdk.reward.adapter.d r4 = r3.a     // Catch: java.lang.Throwable -> L167
                if (r4 == 0) goto L15f
                com.mbridge.msdk.reward.adapter.d r4 = r3.a     // Catch: java.lang.Throwable -> L167
                monitor-enter(r4)     // Catch: java.lang.Throwable -> L167
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "CampaignTPL adapter 341"
                com.mbridge.msdk.foundation.tools.z.d(r5, r1)     // Catch: java.lang.Throwable -> L15c
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L15c
                if (r5 == 0) goto L15a
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L15c
                boolean r5 = r5.b()     // Catch: java.lang.Throwable -> L15c
                if (r5 == 0) goto L15a
                java.lang.String r5 = "RVWindVaneWebView"
                java.lang.String r1 = "CampaignTPL TempalteWindVaneWebviewClient tempalte load  callback success"
                com.mbridge.msdk.foundation.tools.z.d(r5, r1)     // Catch: java.lang.Throwable -> L15c
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L15c
                android.os.Handler r5 = com.mbridge.msdk.reward.adapter.d.k(r5)     // Catch: java.lang.Throwable -> L15c
                if (r5 == 0) goto L15a
                android.os.Message r5 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L15c
                r1 = 6
                r5.what = r1     // Catch: java.lang.Throwable -> L15c
                java.lang.String r1 = "RVWindVaneWebView"
                java.lang.String r2 = "WHAT_ON_RES_LOAD_SUCCESS TPL"
                com.mbridge.msdk.foundation.tools.z.a(r1, r2)     // Catch: java.lang.Throwable -> L15c
                com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.e     // Catch: java.lang.Throwable -> L15c
                r5.obj = r1     // Catch: java.lang.Throwable -> L15c
                com.mbridge.msdk.reward.adapter.d r1 = r3.a     // Catch: java.lang.Throwable -> L15c
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)     // Catch: java.lang.Throwable -> L15c
                r1.sendMessage(r5)     // Catch: java.lang.Throwable -> L15c
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L15c
                android.os.Handler r5 = com.mbridge.msdk.reward.adapter.d.k(r5)     // Catch: java.lang.Throwable -> L15c
                r1 = 5
                r5.removeMessages(r1)     // Catch: java.lang.Throwable -> L15c
                r5 = 0
                r3.a = r5     // Catch: java.lang.Throwable -> L15c
            L15a:
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L15c
                goto L171
            L15c:
                r5 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L15c
                throw r5     // Catch: java.lang.Throwable -> L167
            L15f:
                java.lang.String r4 = "RVWindVaneWebView"
                java.lang.String r5 = "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null"
                com.mbridge.msdk.foundation.tools.z.d(r4, r5)     // Catch: java.lang.Throwable -> L167
                goto L171
            L167:
                r4 = move-exception
                java.lang.String r5 = r4.getMessage()
                java.lang.String r1 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.c(r1, r5, r4)
            L171:
                r3.g = r0
            L173:
                return
        }

        @Override
        public final void a(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.a(r2, r3, r4, r5)
                java.lang.String r2 = "RVWindVaneWebView"
                java.lang.String r3 = "CampaignTPL TempalteWindVaneWebviewClient tempalte load failed"
                com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Throwable -> L25
                com.mbridge.msdk.reward.adapter.d r2 = r1.a     // Catch: java.lang.Throwable -> L25
                if (r2 == 0) goto L2f
                com.mbridge.msdk.reward.adapter.d r2 = r1.a     // Catch: java.lang.Throwable -> L25
                monitor-enter(r2)     // Catch: java.lang.Throwable -> L25
                java.lang.String r3 = "RVWindVaneWebView"
                java.lang.String r0 = "CampaignTPL TempalteWindVaneWebviewClient tempalte load callback failed"
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)     // Catch: java.lang.Throwable -> L22
                com.mbridge.msdk.reward.adapter.d r3 = r1.a     // Catch: java.lang.Throwable -> L22
                com.mbridge.msdk.reward.adapter.d.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L22
                r3 = 0
                r1.a = r3     // Catch: java.lang.Throwable -> L22
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
                goto L2f
            L22:
                r3 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
                throw r3     // Catch: java.lang.Throwable -> L25
            L25:
                r2 = move-exception
                java.lang.String r3 = r2.getMessage()
                java.lang.String r4 = "RVWindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.c(r4, r3, r2)
            L2f:
                return
        }

        @Override
        public final void a(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                boolean r2 = r0.f
                if (r2 != 0) goto L11
                com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()
                r2.a(r1)
                r1 = 1
                r0.f = r1
            L11:
                return
        }

        @Override
        public final void a(android.webkit.WebView r1, java.lang.String r2, java.lang.String r3, int r4, int r5) {
                r0 = this;
                return
        }
    }

    private class b implements java.lang.Runnable {
        final com.mbridge.msdk.reward.adapter.d a;
        private java.lang.String b;
        private com.mbridge.msdk.foundation.entity.CampaignEx c;
        private java.lang.String d;
        private java.lang.String e;
        private com.mbridge.msdk.videocommon.d.c f;
        private int g;
        private com.mbridge.msdk.reward.adapter.d h;

        public b(com.mbridge.msdk.reward.adapter.d r1, java.lang.String r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.videocommon.d.c r6, int r7, com.mbridge.msdk.reward.adapter.d r8) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                return
        }

        @Override
        public final void run() {
                r12 = this;
                java.lang.String r0 = "RewardMVVideoAdapter"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.<init>()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r2 = "retry load tpl url = "
                r1.append(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r2 = r12.d     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.append(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.videocommon.a$a r5 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r5.<init>()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.<init>(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r5.a(r1)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.video.bt.a.c r2 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r2 = r2.b()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r5.a(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.reward.adapter.d r3 = r12.a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignUnit r3 = com.mbridge.msdk.reward.adapter.d.n(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.util.ArrayList r3 = r3.getAds()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r4 = 0
                if (r3 == 0) goto L67
                com.mbridge.msdk.reward.adapter.d r3 = r12.a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignUnit r3 = com.mbridge.msdk.reward.adapter.d.n(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.util.ArrayList r3 = r3.getAds()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                int r3 = r3.size()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                if (r3 <= 0) goto L67
                com.mbridge.msdk.video.js.a.j r3 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r12.c     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.reward.adapter.d r7 = r12.a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignUnit r7 = com.mbridge.msdk.reward.adapter.d.n(r7)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.util.ArrayList r7 = r7.getAds()     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r3.<init>(r4, r6, r7)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                goto L6e
            L67:
                com.mbridge.msdk.video.js.a.j r3 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r12.c     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
            L6e:
                r10 = r3
                int r3 = r12.g     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r10.a(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r3 = r12.e     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r10.a(r3)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r10.c(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.videocommon.d.c r2 = r12.f     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r10.a(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.reward.adapter.d r2 = r12.a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                boolean r2 = com.mbridge.msdk.reward.adapter.d.o(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r10.e(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.reward.adapter.d$a r11 = new com.mbridge.msdk.reward.adapter.d$a     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r3 = r12.d     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r4 = r12.b     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r12.c     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                com.mbridge.msdk.reward.adapter.d r7 = r12.h     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r8 = 0
                r9 = 0
                r2 = r11
                r2.<init>(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.setWebViewListener(r11)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.setObject(r10)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                java.lang.String r2 = r12.d     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                r1.loadUrl(r2)     // Catch: java.lang.Throwable -> La6 java.lang.Exception -> La8
                goto Lb9
            La6:
                r1 = move-exception
                goto Laa
            La8:
                r0 = move-exception
                goto Lb2
            Laa:
                java.lang.String r1 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                goto Lb9
            Lb2:
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto Lb9
                r0.printStackTrace()
            Lb9:
                return
        }
    }

    private class c implements java.lang.Runnable {
        final com.mbridge.msdk.reward.adapter.d a;
        private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView b;
        private java.lang.String c;
        private com.mbridge.msdk.foundation.entity.CampaignEx d;
        private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> e;
        private java.lang.String f;
        private java.lang.String g;
        private com.mbridge.msdk.videocommon.d.c h;
        private int i;
        private com.mbridge.msdk.reward.adapter.d j;

        public c(com.mbridge.msdk.reward.adapter.d r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2, java.lang.String r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5, java.lang.String r6, java.lang.String r7, com.mbridge.msdk.videocommon.d.c r8, int r9, com.mbridge.msdk.reward.adapter.d r10) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                r0.i = r9
                r0.j = r10
                return
        }

        @Override
        public final void run() {
                r13 = this;
                java.lang.String r0 = "RewardMVVideoAdapter"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.<init>()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r2 = "retry load template url = "
                r1.append(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r2 = r13.f     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.append(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.videocommon.a$a r6 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r6.<init>()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r6.a(r1)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r13.e     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r3 = 0
                if (r2 == 0) goto L44
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r13.e     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                int r2 = r2.size()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                if (r2 <= 0) goto L44
                com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r13.d     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r13.e     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r2.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                goto L4b
            L44:
                com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r13.d     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            L4b:
                r11 = r2
                int r2 = r13.i     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r11.a(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r2 = r13.g     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r11.a(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.videocommon.d.c r2 = r13.h     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r11.a(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.reward.adapter.d r2 = r13.a     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                boolean r2 = com.mbridge.msdk.reward.adapter.d.o(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r11.e(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.reward.adapter.d$f r12 = new com.mbridge.msdk.reward.adapter.d$f     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r13.b     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r4 = r13.f     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r5 = r13.c     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = r13.d     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                com.mbridge.msdk.reward.adapter.d r8 = r13.j     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r9 = 0
                r10 = 0
                r2 = r12
                r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.setWebViewListener(r12)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.setObject(r11)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                java.lang.String r2 = r13.f     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                r1.loadUrl(r2)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
                goto L95
            L82:
                r1 = move-exception
                goto L86
            L84:
                r0 = move-exception
                goto L8e
            L86:
                java.lang.String r1 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
                goto L95
            L8e:
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L95
                r0.printStackTrace()
            L95:
                return
        }
    }

    public class d implements java.lang.Runnable {
        final com.mbridge.msdk.reward.adapter.d a;
        private java.lang.String b;

        public d(com.mbridge.msdk.reward.adapter.d r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.String r0 = "  mExcludes:"
                java.lang.String r1 = "RewardMVVideoAdapter"
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L158
                r2.<init>()     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = "=====getTtcRunnable 开始获取 mTtcIds:"
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = com.mbridge.msdk.reward.adapter.d.a(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r0)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = com.mbridge.msdk.reward.adapter.d.b(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                android.content.Context r2 = com.mbridge.msdk.reward.adapter.d.j(r2)     // Catch: java.lang.Exception -> L158
                if (r2 == 0) goto L54
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                android.content.Context r2 = com.mbridge.msdk.reward.adapter.d.j(r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L158
                if (r2 == 0) goto L54
                com.mbridge.msdk.foundation.db.c r2 = com.mbridge.msdk.foundation.db.c.a(r2)     // Catch: java.lang.Exception -> L158
                r2.a()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r4 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r4 = com.mbridge.msdk.reward.adapter.d.f(r4)     // Catch: java.lang.Exception -> L158
                java.lang.String r2 = r2.a(r4)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d.b(r3, r2)     // Catch: java.lang.Exception -> L158
            L54:
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                android.content.Context r3 = com.mbridge.msdk.reward.adapter.d.j(r3)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r4 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r4 = com.mbridge.msdk.reward.adapter.d.f(r4)     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d.c(r2, r3)     // Catch: java.lang.Exception -> L158
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L158
                r2.<init>()     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = "=====getTtcRunnable 获取完毕 mTtcIds:"
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = com.mbridge.msdk.reward.adapter.d.a(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r0)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = com.mbridge.msdk.reward.adapter.d.b(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                boolean r2 = com.mbridge.msdk.reward.adapter.d.u(r2)     // Catch: java.lang.Exception -> L158
                java.lang.String r3 = " mIsGetTtcExcIdsSuccess:"
                if (r2 == 0) goto Lc0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L158
                r0.<init>()     // Catch: java.lang.Exception -> L158
                java.lang.String r2 = "=====getTtcRunnable 获取ttcid和excludeids超时 mIsGetTtcExcIdsTimeout："
                r0.append(r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                boolean r2 = com.mbridge.msdk.reward.adapter.d.u(r2)     // Catch: java.lang.Exception -> L158
                r0.append(r2)     // Catch: java.lang.Exception -> L158
                r0.append(r3)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                boolean r2 = com.mbridge.msdk.reward.adapter.d.v(r2)     // Catch: java.lang.Exception -> L158
                r0.append(r2)     // Catch: java.lang.Exception -> L158
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L158
                return
            Lc0:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L158
                r2.<init>()     // Catch: java.lang.Exception -> L158
                java.lang.String r4 = "=====getTtcRunnable 获取ttcid和excludeids没有超时 mIsGetTtcExcIdsTimeout:"
                r2.append(r4)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r4 = r5.a     // Catch: java.lang.Exception -> L158
                boolean r4 = com.mbridge.msdk.reward.adapter.d.u(r4)     // Catch: java.lang.Exception -> L158
                r2.append(r4)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                boolean r3 = com.mbridge.msdk.reward.adapter.d.v(r3)     // Catch: java.lang.Exception -> L158
                r2.append(r3)     // Catch: java.lang.Exception -> L158
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d$e r2 = com.mbridge.msdk.reward.adapter.d.w(r2)     // Catch: java.lang.Exception -> L158
                if (r2 == 0) goto L10a
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                android.os.Handler r2 = com.mbridge.msdk.reward.adapter.d.k(r2)     // Catch: java.lang.Exception -> L158
                if (r2 == 0) goto L10a
                java.lang.String r2 = "=====getTtcRunnable 删除 获取ttcid的超时任务"
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                android.os.Handler r2 = com.mbridge.msdk.reward.adapter.d.k(r2)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r3 = r5.a     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d$e r3 = com.mbridge.msdk.reward.adapter.d.w(r3)     // Catch: java.lang.Exception -> L158
                r2.removeCallbacks(r3)     // Catch: java.lang.Exception -> L158
            L10a:
                com.mbridge.msdk.reward.adapter.d r2 = r5.a     // Catch: java.lang.Exception -> L158
                r3 = 1
                com.mbridge.msdk.reward.adapter.d.a(r2, r3)     // Catch: java.lang.Exception -> L158
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L158
                r2.<init>()     // Catch: java.lang.Exception -> L158
                java.lang.String r4 = "=====getTtcRunnable 给handler发送消息 mTtcIds:"
                r2.append(r4)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r4 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r4 = com.mbridge.msdk.reward.adapter.d.a(r4)     // Catch: java.lang.Exception -> L158
                r2.append(r4)     // Catch: java.lang.Exception -> L158
                r2.append(r0)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r0 = r5.a     // Catch: java.lang.Exception -> L158
                java.lang.String r0 = com.mbridge.msdk.reward.adapter.d.b(r0)     // Catch: java.lang.Exception -> L158
                r2.append(r0)     // Catch: java.lang.Exception -> L158
                java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r0 = r5.a     // Catch: java.lang.Exception -> L158
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)     // Catch: java.lang.Exception -> L158
                if (r0 == 0) goto L15c
                com.mbridge.msdk.reward.adapter.d r0 = r5.a     // Catch: java.lang.Exception -> L158
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)     // Catch: java.lang.Exception -> L158
                android.os.Message r0 = r0.obtainMessage()     // Catch: java.lang.Exception -> L158
                java.lang.String r1 = r5.b     // Catch: java.lang.Exception -> L158
                r0.obj = r1     // Catch: java.lang.Exception -> L158
                r0.what = r3     // Catch: java.lang.Exception -> L158
                com.mbridge.msdk.reward.adapter.d r1 = r5.a     // Catch: java.lang.Exception -> L158
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)     // Catch: java.lang.Exception -> L158
                r1.sendMessage(r0)     // Catch: java.lang.Exception -> L158
                goto L15c
            L158:
                r0 = move-exception
                r0.printStackTrace()
            L15c:
                return
        }
    }

    public class e implements java.lang.Runnable {
        final com.mbridge.msdk.reward.adapter.d a;
        private java.lang.String b;

        public e(com.mbridge.msdk.reward.adapter.d r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.lang.String r0 = "RewardMVVideoAdapter"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
                r1.<init>()     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = "=====超时task 开始执行 mTtcIds:"
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r2 = r4.a     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = com.mbridge.msdk.reward.adapter.d.a(r2)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = "  RewardMVVideoAdapter.this.mExcludes:"
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r2 = r4.a     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = com.mbridge.msdk.reward.adapter.d.b(r2)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r1 = r4.a     // Catch: java.lang.Exception -> Laf
                boolean r1 = com.mbridge.msdk.reward.adapter.d.v(r1)     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = " mIsGetTtcExcIdsSuccess:"
                if (r1 == 0) goto L60
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
                r1.<init>()     // Catch: java.lang.Exception -> Laf
                java.lang.String r3 = "超时task 已经成功获取ttcid excludeids mIsGetTtcExcIdsTimeout:"
                r1.append(r3)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r3 = r4.a     // Catch: java.lang.Exception -> Laf
                boolean r3 = com.mbridge.msdk.reward.adapter.d.u(r3)     // Catch: java.lang.Exception -> Laf
                r1.append(r3)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r2 = r4.a     // Catch: java.lang.Exception -> Laf
                boolean r2 = com.mbridge.msdk.reward.adapter.d.v(r2)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                java.lang.String r2 = "超时task不做处理"
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> Laf
                return
            L60:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
                r1.<init>()     // Catch: java.lang.Exception -> Laf
                java.lang.String r3 = "获取ttcid excludeids超时 mIsGetTtcExcIdsTimeout:"
                r1.append(r3)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r3 = r4.a     // Catch: java.lang.Exception -> Laf
                boolean r3 = com.mbridge.msdk.reward.adapter.d.u(r3)     // Catch: java.lang.Exception -> Laf
                r1.append(r3)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r2 = r4.a     // Catch: java.lang.Exception -> Laf
                boolean r2 = com.mbridge.msdk.reward.adapter.d.v(r2)     // Catch: java.lang.Exception -> Laf
                r1.append(r2)     // Catch: java.lang.Exception -> Laf
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r0 = r4.a     // Catch: java.lang.Exception -> Laf
                r1 = 1
                com.mbridge.msdk.reward.adapter.d.b(r0, r1)     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r0 = r4.a     // Catch: java.lang.Exception -> Laf
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)     // Catch: java.lang.Exception -> Laf
                if (r0 == 0) goto Lb3
                com.mbridge.msdk.reward.adapter.d r0 = r4.a     // Catch: java.lang.Exception -> Laf
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)     // Catch: java.lang.Exception -> Laf
                android.os.Message r0 = r0.obtainMessage()     // Catch: java.lang.Exception -> Laf
                java.lang.String r1 = r4.b     // Catch: java.lang.Exception -> Laf
                r0.obj = r1     // Catch: java.lang.Exception -> Laf
                r1 = 2
                r0.what = r1     // Catch: java.lang.Exception -> Laf
                com.mbridge.msdk.reward.adapter.d r1 = r4.a     // Catch: java.lang.Exception -> Laf
                android.os.Handler r1 = com.mbridge.msdk.reward.adapter.d.k(r1)     // Catch: java.lang.Exception -> Laf
                r1.sendMessage(r0)     // Catch: java.lang.Exception -> Laf
                goto Lb3
            Laf:
                r0 = move-exception
                r0.printStackTrace()
            Lb3:
                return
        }
    }

    private static class f extends com.mbridge.msdk.mbjscommon.c.b {
        private com.mbridge.msdk.reward.adapter.d a;
        private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView b;
        private java.lang.String c;
        private java.lang.String d;
        private com.mbridge.msdk.videocommon.a.a e;
        private com.mbridge.msdk.foundation.entity.CampaignEx f;
        private boolean g;
        private boolean h;
        private com.mbridge.msdk.reward.adapter.d.c i;
        private android.os.Handler j;

        public f(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1, java.lang.String r2, java.lang.String r3, com.mbridge.msdk.videocommon.a.a r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, com.mbridge.msdk.reward.adapter.d r6, com.mbridge.msdk.reward.adapter.d.c r7, android.os.Handler r8) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                r0.c = r2
                r0.d = r3
                r0.e = r4
                if (r6 == 0) goto Lf
                r0.a = r6
            Lf:
                r0.f = r5
                r0.i = r7
                r0.j = r8
                return
        }

        @Override
        public final void a(android.webkit.WebView r4, int r5) {
                r3 = this;
                boolean r4 = r3.h
                if (r4 != 0) goto L13c
                com.mbridge.msdk.reward.adapter.d$c r4 = r3.i
                if (r4 == 0) goto Lf
                android.os.Handler r0 = r3.j
                if (r0 == 0) goto Lf
                r0.removeCallbacks(r4)
            Lf:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = r3.d
                r4.append(r0)
                java.lang.String r0 = "_"
                r4.append(r0)
                java.lang.String r0 = r3.c
                r4.append(r0)
                java.lang.String r4 = r4.toString()
                com.mbridge.msdk.videocommon.a$a r0 = r3.e
                r1 = 1
                if (r0 == 0) goto L2f
                r0.a(r1)
            L2f:
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r2 = "type"
                r0.put(r2, r1)     // Catch: org.json.JSONException -> L46
                java.lang.String r2 = "id"
                r0.put(r2, r4)     // Catch: org.json.JSONException -> L46
                java.lang.String r4 = "unitid"
                java.lang.String r2 = r3.d     // Catch: org.json.JSONException -> L46
                r0.put(r4, r2)     // Catch: org.json.JSONException -> L46
                goto L4a
            L46:
                r4 = move-exception
                r4.printStackTrace()
            L4a:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = "Tempalte templete preload readyState state = "
                r4.append(r0)
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                java.lang.String r5 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.a(r5, r4)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
                java.lang.String r5 = r3.c
                r4.setTemplatePreLoadDone(r5, r1)
                com.mbridge.msdk.videocommon.a.a r4 = com.mbridge.msdk.videocommon.a.a.a()
                java.lang.String r5 = r3.d
                com.mbridge.msdk.reward.adapter.d r0 = r3.a
                boolean r0 = com.mbridge.msdk.reward.adapter.d.h(r0)
                r4.a(r5, r1, r0)
                com.mbridge.msdk.reward.adapter.d r4 = r3.a
                if (r4 == 0) goto La7
                boolean r4 = com.mbridge.msdk.reward.adapter.d.p(r4)
                if (r4 == 0) goto La7
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.f
                boolean r4 = r4.isBidCampaign()
                if (r4 == 0) goto L9f
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte put templeteCache in bidIVCache "
                com.mbridge.msdk.foundation.tools.z.a(r4, r5)
                r4 = 287(0x11f, float:4.02E-43)
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.f
                java.lang.String r5 = r5.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r3.e
                com.mbridge.msdk.videocommon.a.a(r4, r5, r0)
                goto Lcb
            L9f:
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte put templeteCache in iVCache "
                com.mbridge.msdk.foundation.tools.z.a(r4, r5)
                goto Lcb
            La7:
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.f
                boolean r4 = r4.isBidCampaign()
                if (r4 == 0) goto Lc4
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte put templeteCache in bidRVCache "
                com.mbridge.msdk.foundation.tools.z.a(r4, r5)
                r4 = 94
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r3.f
                java.lang.String r5 = r5.getRequestIdNotice()
                com.mbridge.msdk.videocommon.a$a r0 = r3.e
                com.mbridge.msdk.videocommon.a.a(r4, r5, r0)
                goto Lcb
            Lc4:
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte put templeteCache in rVCache "
                com.mbridge.msdk.foundation.tools.z.a(r4, r5)
            Lcb:
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS "
                com.mbridge.msdk.foundation.tools.z.d(r4, r5)     // Catch: java.lang.Throwable -> L130
                com.mbridge.msdk.reward.adapter.d r4 = r3.a     // Catch: java.lang.Throwable -> L130
                if (r4 == 0) goto L128
                com.mbridge.msdk.reward.adapter.d r4 = r3.a     // Catch: java.lang.Throwable -> L130
                monitor-enter(r4)     // Catch: java.lang.Throwable -> L130
                java.lang.String r5 = "WindVaneWebView"
                java.lang.String r0 = "Tempalte adapter 341"
                com.mbridge.msdk.foundation.tools.z.d(r5, r0)     // Catch: java.lang.Throwable -> L125
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L125
                if (r5 == 0) goto L123
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L125
                boolean r5 = r5.b()     // Catch: java.lang.Throwable -> L125
                if (r5 == 0) goto L123
                java.lang.String r5 = "WindVaneWebView"
                java.lang.String r0 = "Tempalte TempalteWindVaneWebviewClient tempalte load  callback success"
                com.mbridge.msdk.foundation.tools.z.d(r5, r0)     // Catch: java.lang.Throwable -> L125
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L125
                android.os.Handler r5 = com.mbridge.msdk.reward.adapter.d.k(r5)     // Catch: java.lang.Throwable -> L125
                if (r5 == 0) goto L123
                android.os.Message r5 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L125
                r0 = 6
                r5.what = r0     // Catch: java.lang.Throwable -> L125
                java.lang.String r0 = "WindVaneWebView"
                java.lang.String r2 = "WHAT_ON_RES_LOAD_SUCCESS Template"
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> L125
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.f     // Catch: java.lang.Throwable -> L125
                r5.obj = r0     // Catch: java.lang.Throwable -> L125
                com.mbridge.msdk.reward.adapter.d r0 = r3.a     // Catch: java.lang.Throwable -> L125
                android.os.Handler r0 = com.mbridge.msdk.reward.adapter.d.k(r0)     // Catch: java.lang.Throwable -> L125
                r0.sendMessage(r5)     // Catch: java.lang.Throwable -> L125
                com.mbridge.msdk.reward.adapter.d r5 = r3.a     // Catch: java.lang.Throwable -> L125
                android.os.Handler r5 = com.mbridge.msdk.reward.adapter.d.k(r5)     // Catch: java.lang.Throwable -> L125
                r0 = 5
                r5.removeMessages(r0)     // Catch: java.lang.Throwable -> L125
                r5 = 0
                r3.a = r5     // Catch: java.lang.Throwable -> L125
            L123:
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L125
                goto L13a
            L125:
                r5 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L125
                throw r5     // Catch: java.lang.Throwable -> L130
            L128:
                java.lang.String r4 = "WindVaneWebView"
                java.lang.String r5 = "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null"
                com.mbridge.msdk.foundation.tools.z.d(r4, r5)     // Catch: java.lang.Throwable -> L130
                goto L13a
            L130:
                r4 = move-exception
                java.lang.String r5 = r4.getMessage()
                java.lang.String r0 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
            L13a:
                r3.h = r1
            L13c:
                return
        }

        @Override
        public final void a(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.a(r2, r3, r4, r5)
                java.lang.String r2 = "WindVaneWebView"
                java.lang.String r3 = "Tempalte TempalteWindVaneWebviewClient tempalte load failed"
                com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Throwable -> L25
                com.mbridge.msdk.reward.adapter.d r2 = r1.a     // Catch: java.lang.Throwable -> L25
                if (r2 == 0) goto L2f
                com.mbridge.msdk.reward.adapter.d r2 = r1.a     // Catch: java.lang.Throwable -> L25
                monitor-enter(r2)     // Catch: java.lang.Throwable -> L25
                java.lang.String r3 = "WindVaneWebView"
                java.lang.String r0 = "Tempalte TempalteWindVaneWebviewClient tempalte load callback failed"
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)     // Catch: java.lang.Throwable -> L22
                com.mbridge.msdk.reward.adapter.d r3 = r1.a     // Catch: java.lang.Throwable -> L22
                com.mbridge.msdk.reward.adapter.d.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L22
                r3 = 0
                r1.a = r3     // Catch: java.lang.Throwable -> L22
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
                goto L2f
            L22:
                r3 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L22
                throw r3     // Catch: java.lang.Throwable -> L25
            L25:
                r2 = move-exception
                java.lang.String r3 = r2.getMessage()
                java.lang.String r4 = "WindVaneWebView"
                com.mbridge.msdk.foundation.tools.z.c(r4, r3, r2)
            L2f:
                return
        }

        @Override
        public final void a(android.webkit.WebView r1, java.lang.String r2) {
                r0 = this;
                super.a(r1, r2)
                boolean r2 = r0.g
                if (r2 != 0) goto L11
                com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()
                r2.a(r1)
                r1 = 1
                r0.g = r1
            L11:
                return
        }
    }

    public d(android.content.Context r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.w = r0
            r6.x = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r6.a = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r6.y = r1
            r1 = 2
            r6.z = r1
            java.lang.String r1 = ""
            r6.C = r1
            r6.I = r0
            r6.b = r1
            r6.c = r1
            r2 = 0
            r6.J = r2
            com.mbridge.msdk.reward.adapter.d$1 r4 = new com.mbridge.msdk.reward.adapter.d$1
            android.os.Looper r5 = android.os.Looper.getMainLooper()
            r4.<init>(r6, r5)
            r6.K = r4
            r6.d = r0
            r6.L = r0
            r6.M = r2
            r6.e = r0
            r6.f = r0
            r6.g = r0
            r6.h = r0
            r6.i = r0
            r6.N = r1
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L4f
            r6.j = r7     // Catch: java.lang.Exception -> L4f
            r6.k = r9     // Catch: java.lang.Exception -> L4f
            r6.l = r8     // Catch: java.lang.Exception -> L4f
            goto L53
        L4f:
            r7 = move-exception
            r7.printStackTrace()
        L53:
            return
    }

    static long a(com.mbridge.msdk.reward.adapter.d r0, long r1) {
            r0.J = r1
            return r1
    }

    static java.lang.String a(com.mbridge.msdk.reward.adapter.d r0) {
            java.lang.String r0 = r0.q
            return r0
    }

    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a(com.mbridge.msdk.foundation.entity.CampaignUnit r13) {
            r12 = this;
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            java.util.ArrayList r1 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.videocommon.d.c r1 = r12.u     // Catch: java.lang.Exception -> L1f7
            if (r1 == 0) goto L16
            com.mbridge.msdk.videocommon.d.c r1 = r12.u     // Catch: java.lang.Exception -> L1f7
            int r1 = r1.u()     // Catch: java.lang.Exception -> L1f7
        L16:
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r13 == 0) goto L1fb
            java.util.ArrayList r2 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            if (r2 == 0) goto L1fb
            java.util.ArrayList r2 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            int r2 = r2.size()     // Catch: java.lang.Exception -> L1f7
            if (r2 <= 0) goto L1fb
            java.util.ArrayList r2 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            r12.O = r2     // Catch: java.lang.Exception -> L1f7
            r3 = 0
            if (r13 == 0) goto L60
            java.util.ArrayList r4 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            if (r4 == 0) goto L60
            java.util.ArrayList r4 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            int r4 = r4.size()     // Catch: java.lang.Exception -> L1f7
            if (r4 <= 0) goto L60
            java.util.ArrayList r13 = r13.getAds()     // Catch: java.lang.Exception -> L1f7
            r4 = r3
        L49:
            int r5 = r13.size()     // Catch: java.lang.Exception -> L1f7
            if (r4 >= r5) goto L60
            java.lang.Object r5 = r13.get(r4)     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L1f7
            java.lang.String r6 = r12.k     // Catch: java.lang.Exception -> L1f7
            r5.setCampaignUnitId(r6)     // Catch: java.lang.Exception -> L1f7
            r13.set(r4, r5)     // Catch: java.lang.Exception -> L1f7
            int r4 = r4 + 1
            goto L49
        L60:
            r13 = r3
        L61:
            int r4 = r2.size()     // Catch: java.lang.Exception -> L1f7
            if (r13 >= r4) goto L1dc
            if (r13 >= r1) goto L1dc
            java.lang.Object r4 = r2.get(r13)     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L1f7
            boolean r5 = r4.isMraid()     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L15a
            java.lang.String r5 = r4.getMraid()     // Catch: java.lang.Exception -> L1f7
            java.lang.String r5 = r5.trim()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L1f7
            if (r5 != 0) goto L1d8
            r5 = 0
            int r6 = r4.getAdType()     // Catch: java.lang.Exception -> L1f7
            r7 = 287(0x11f, float:4.02E-43)
            java.lang.String r8 = ""
            if (r6 != r7) goto L91
            java.lang.String r6 = "3"
            goto La8
        L91:
            int r6 = r4.getAdType()     // Catch: java.lang.Exception -> L1f7
            r7 = 94
            if (r6 != r7) goto L9c
            java.lang.String r6 = "1"
            goto La8
        L9c:
            int r6 = r4.getAdType()     // Catch: java.lang.Exception -> L1f7
            r7 = 42
            if (r6 != r7) goto La7
            java.lang.String r6 = "2"
            goto La8
        La7:
            r6 = r8
        La8:
            com.mbridge.msdk.foundation.same.b.c r7 = com.mbridge.msdk.foundation.same.b.c.g     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.lang.String r7 = com.mbridge.msdk.foundation.same.b.e.b(r7)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.lang.String r9 = r4.getMraid()     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r9)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            if (r10 == 0) goto Lc4
            long r9 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
        Lc4:
            java.lang.String r10 = ".html"
            java.lang.String r9 = r9.concat(r10)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.io.File r10 = new java.io.File     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            r10.<init>(r7, r9)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.io.FileOutputStream r7 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            r7.<init>(r10)     // Catch: java.lang.Throwable -> L11b java.lang.Exception -> L11d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r5.<init>()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r9 = "<script>"
            r5.append(r9)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            com.mbridge.msdk.c.b.b r9 = com.mbridge.msdk.c.b.b.a()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r9 = r9.b()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r5.append(r9)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r9 = "</script>"
            r5.append(r9)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r9 = r4.getMraid()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r5.append(r9)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r7.write(r5)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r7.flush()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r5 = r10.getAbsolutePath()     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r4.setMraid(r5)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            java.lang.String r5 = r12.k     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            com.mbridge.msdk.foundation.same.report.c.a(r4, r8, r5, r6)     // Catch: java.lang.Throwable -> L113 java.lang.Exception -> L116
            r7.close()     // Catch: java.lang.Exception -> L1f7
            goto L132
        L113:
            r13 = move-exception
            r5 = r7
            goto L154
        L116:
            r5 = move-exception
            r11 = r7
            r7 = r5
            r5 = r11
            goto L11e
        L11b:
            r13 = move-exception
            goto L154
        L11d:
            r7 = move-exception
        L11e:
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L11b
            r4.setMraid(r8)     // Catch: java.lang.Throwable -> L11b
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L11b
            java.lang.String r8 = r12.k     // Catch: java.lang.Throwable -> L11b
            com.mbridge.msdk.foundation.same.report.c.a(r4, r7, r8, r6)     // Catch: java.lang.Throwable -> L11b
            if (r5 == 0) goto L132
            r5.close()     // Catch: java.lang.Exception -> L1f7
        L132:
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> L1f7
            java.lang.String r6 = r4.getMraid()     // Catch: java.lang.Exception -> L1f7
            r5.<init>(r6)     // Catch: java.lang.Exception -> L1f7
            boolean r6 = r5.exists()     // Catch: java.lang.Exception -> L1f7
            if (r6 == 0) goto L14d
            boolean r6 = r5.isFile()     // Catch: java.lang.Exception -> L1f7
            if (r6 == 0) goto L14d
            boolean r5 = r5.canRead()     // Catch: java.lang.Exception -> L1f7
            if (r5 != 0) goto L15a
        L14d:
            java.lang.String r4 = "mraid resource write fail"
            r12.c(r4)     // Catch: java.lang.Exception -> L1f7
            goto L1d8
        L154:
            if (r5 == 0) goto L159
            r5.close()     // Catch: java.lang.Exception -> L1f7
        L159:
            throw r13     // Catch: java.lang.Exception -> L1f7
        L15a:
            if (r4 == 0) goto L1d8
            int r5 = r4.getOfferType()     // Catch: java.lang.Exception -> L1f7
            r6 = 99
            if (r5 == r6) goto L1d8
            boolean r5 = r12.b(r4)     // Catch: java.lang.Exception -> L1f7
            r6 = 1
            if (r5 == 0) goto L180
            java.lang.String r5 = r4.getendcard_url()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.a(r5)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L18c
            java.lang.String r5 = r4.getMraid()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L18c
            goto L18a
        L180:
            java.lang.String r5 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.a(r5)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L18c
        L18a:
            r5 = r3
            goto L18d
        L18c:
            r5 = r6
        L18d:
            if (r5 == 0) goto L1d4
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.b(r4)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L1a7
            android.content.Context r5 = r12.j     // Catch: java.lang.Exception -> L1f7
            java.lang.String r7 = r4.getPackageName()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r5, r7)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L1a3
            r5 = r6
            goto L1a4
        L1a3:
            r5 = 2
        L1a4:
            r4.setRtinsType(r5)     // Catch: java.lang.Exception -> L1f7
        L1a7:
            int r5 = r4.getWtick()     // Catch: java.lang.Exception -> L1f7
            if (r5 == r6) goto L1d0
            android.content.Context r5 = r12.j     // Catch: java.lang.Exception -> L1f7
            java.lang.String r6 = r4.getPackageName()     // Catch: java.lang.Exception -> L1f7
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r5, r6)     // Catch: java.lang.Exception -> L1f7
            if (r5 != 0) goto L1ba
            goto L1d0
        L1ba:
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.b(r4)     // Catch: java.lang.Exception -> L1f7
            if (r5 == 0) goto L1c4
            r0.add(r4)     // Catch: java.lang.Exception -> L1f7
            goto L1d8
        L1c4:
            java.lang.String r5 = r12.k     // Catch: java.lang.Exception -> L1f7
            int r6 = com.mbridge.msdk.foundation.same.a.E     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.foundation.tools.ae.a(r5, r4, r6)     // Catch: java.lang.Exception -> L1f7
            java.lang.String r4 = "APP ALREADY INSTALLED"
            r12.N = r4     // Catch: java.lang.Exception -> L1f7
            goto L1d8
        L1d0:
            r0.add(r4)     // Catch: java.lang.Exception -> L1f7
            goto L1d8
        L1d4:
            java.lang.String r4 = "No video campaign"
            r12.N = r4     // Catch: java.lang.Exception -> L1f7
        L1d8:
            int r13 = r13 + 1
            goto L61
        L1dc:
            java.lang.String r13 = "RewardMVVideoAdapter"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f7
            r1.<init>()     // Catch: java.lang.Exception -> L1f7
            java.lang.String r2 = "onload 返回有以下带有视频素材的compaign："
            r1.append(r2)     // Catch: java.lang.Exception -> L1f7
            int r2 = r0.size()     // Catch: java.lang.Exception -> L1f7
            r1.append(r2)     // Catch: java.lang.Exception -> L1f7
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1f7
            com.mbridge.msdk.foundation.tools.z.b(r13, r1)     // Catch: java.lang.Exception -> L1f7
            goto L1fb
        L1f7:
            r13 = move-exception
            r13.printStackTrace()
        L1fb:
            return r0
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            java.lang.String r0 = "RewardMVVideoAdapter"
            com.mbridge.msdk.videocommon.a.a r1 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24
            r2.<init>()     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = "删除 Campaign id： "
            r2.append(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> L24
            r2.append(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto L2c
            r1.a(r5)     // Catch: java.lang.Throwable -> L24
            goto L2c
        L24:
            r5 = move-exception
            java.lang.String r1 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r5)
        L2c:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r19, com.mbridge.msdk.foundation.entity.CampaignUnit r20) {
            r1 = r19
            r0 = r20
            r1.G = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Campaign 请求成功： "
            r2.append(r3)
            java.util.ArrayList r3 = r20.getAds()
            int r3 = r3.size()
            r2.append(r3)
            java.lang.String r3 = " 条"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            java.util.concurrent.CopyOnWriteArrayList r2 = r19.a(r20)
            r1.H = r2
            r2 = 1
            r3 = 0
            java.util.ArrayList r4 = r20.getAds()     // Catch: java.lang.Exception -> L78
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Exception -> L78
            r5 = r4
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L78
            android.content.Context r6 = r1.j     // Catch: java.lang.Exception -> L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78
            r4.<init>()     // Catch: java.lang.Exception -> L78
            java.lang.String r7 = "start download resource tpl "
            r4.append(r7)     // Catch: java.lang.Exception -> L78
            java.util.ArrayList r7 = r20.getAds()     // Catch: java.lang.Exception -> L78
            java.lang.Object r7 = r7.get(r3)     // Catch: java.lang.Exception -> L78
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = (com.mbridge.msdk.foundation.entity.CampaignEx) r7     // Catch: java.lang.Exception -> L78
            java.lang.String r7 = r7.getCMPTEntryUrl()     // Catch: java.lang.Exception -> L78
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L78
            if (r7 != 0) goto L5e
            r7 = r2
            goto L5f
        L5e:
            r7 = r3
        L5f:
            r4.append(r7)     // Catch: java.lang.Exception -> L78
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> L78
            java.lang.String r8 = r1.k     // Catch: java.lang.Exception -> L78
            boolean r9 = r1.B     // Catch: java.lang.Exception -> L78
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            long r12 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L78
            long r14 = r1.M     // Catch: java.lang.Exception -> L78
            long r12 = r12 - r14
            com.mbridge.msdk.reward.b.a.a(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L78
        L78:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.H
            com.mbridge.msdk.reward.adapter.d$6 r4 = new com.mbridge.msdk.reward.adapter.d$6
            r4.<init>(r1, r0)
            java.util.concurrent.ThreadPoolExecutor r5 = com.mbridge.msdk.foundation.same.f.b.a()
            r5.execute(r4)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.H
            if (r4 == 0) goto L1fd
            int r4 = r4.size()
            if (r4 <= 0) goto L1fd
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "onload load成功 size:"
            r4.append(r5)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.H
            int r5 = r5.size()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.b(r5, r4)
            android.os.Handler r4 = r1.K
            if (r4 == 0) goto Lb4
            r5 = 3
            r4.sendEmptyMessage(r5)
        Lb4:
            if (r0 == 0) goto Ld8
            java.lang.String r0 = r20.getSessionId()
            boolean r4 = com.mbridge.msdk.foundation.tools.ai.b(r0)
            if (r4 == 0) goto Ld8
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "onload sessionId:"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.b(r5, r4)
            com.mbridge.msdk.reward.a.a.a = r0
        Ld8:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.H
            if (r0 == 0) goto Leb
            int r4 = r0.size()     // Catch: java.lang.Exception -> L12a
            if (r4 <= 0) goto Leb
            int r4 = r1.m     // Catch: java.lang.Exception -> L12a
            int r0 = r0.size()     // Catch: java.lang.Exception -> L12a
            int r4 = r4 + r0
            r1.m = r4     // Catch: java.lang.Exception -> L12a
        Leb:
            com.mbridge.msdk.videocommon.d.c r0 = r1.u     // Catch: java.lang.Exception -> L12a
            if (r0 == 0) goto Lf9
            int r0 = r1.m     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.videocommon.d.c r4 = r1.u     // Catch: java.lang.Exception -> L12a
            int r4 = r4.v()     // Catch: java.lang.Exception -> L12a
            if (r0 <= r4) goto L102
        Lf9:
            java.lang.String r0 = "RewardMVVideoAdapter"
            java.lang.String r4 = "onload 重置offset为0"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L12a
            r1.m = r3     // Catch: java.lang.Exception -> L12a
        L102:
            java.lang.String r0 = "RewardMVVideoAdapter"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L12a
            r4.<init>()     // Catch: java.lang.Exception -> L12a
            java.lang.String r5 = "onload 算出 下次的offset是:"
            r4.append(r5)     // Catch: java.lang.Exception -> L12a
            int r5 = r1.m     // Catch: java.lang.Exception -> L12a
            r4.append(r5)     // Catch: java.lang.Exception -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L12a
            java.lang.String r0 = r1.k     // Catch: java.lang.Exception -> L12a
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Exception -> L12a
            if (r0 == 0) goto L12e
            java.lang.String r0 = r1.k     // Catch: java.lang.Exception -> L12a
            int r4 = r1.m     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.reward.a.a.a(r0, r4)     // Catch: java.lang.Exception -> L12a
            goto L12e
        L12a:
            r0 = move-exception
            r0.printStackTrace()
        L12e:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.H
            if (r0 == 0) goto L167
            int r0 = r0.size()
            if (r0 <= 0) goto L167
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "#######onload 把广告存在本地 size:"
            r0.append(r4)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r4 = r1.H
            int r4 = r4.size()
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)
            java.lang.String r0 = r1.l
            java.lang.String r4 = r1.k
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = r1.H
            com.mbridge.msdk.videocommon.a.a r6 = com.mbridge.msdk.videocommon.a.a.a()
            if (r6 == 0) goto L167
            com.mbridge.msdk.videocommon.a.a r6 = com.mbridge.msdk.videocommon.a.a.a()
            r6.a(r0, r4, r5)
        L167:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.H
            java.lang.Object r0 = r0.get(r3)
            r6 = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6
            java.lang.String r0 = r6.getCMPTEntryUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ r2
            int r2 = r6.getNscpt()
            r1.e = r3
            r1.f = r3
            java.lang.Object r4 = r1.a
            monitor-enter(r4)
            boolean r5 = r1.g     // Catch: java.lang.Throwable -> L1fa
            if (r5 == 0) goto L18a
            r1.g = r3     // Catch: java.lang.Throwable -> L1fa
        L18a:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1fa
            r1.i = r3
            r1.h = r3
            boolean r3 = r1.B
            if (r3 == 0) goto L1b0
            if (r6 == 0) goto L1b0
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            com.mbridge.msdk.foundation.db.b r3 = com.mbridge.msdk.foundation.db.b.a(r3)
            java.lang.String r4 = r6.getBidToken()
            java.lang.String r5 = r6.getCampaignUnitId()
            java.lang.String r7 = r6.getEncryptPrice()
            r3.a(r4, r5, r7)
        L1b0:
            com.mbridge.msdk.reward.adapter.c r7 = com.mbridge.msdk.reward.adapter.c.m.a()
            android.content.Context r8 = r1.j
            boolean r11 = r1.B
            boolean r3 = r1.A
            if (r3 == 0) goto L1bf
            r3 = 287(0x11f, float:4.02E-43)
            goto L1c1
        L1bf:
            r3 = 94
        L1c1:
            r12 = r3
            java.lang.String r13 = r1.l
            java.lang.String r14 = r1.k
            java.lang.String r15 = r6.getRequestId()
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r1.H
            com.mbridge.msdk.reward.adapter.d$3 r4 = new com.mbridge.msdk.reward.adapter.d$3
            r4.<init>(r1, r0, r6, r2)
            com.mbridge.msdk.reward.adapter.d$4 r5 = new com.mbridge.msdk.reward.adapter.d$4
            r5.<init>(r1, r0, r6, r2)
            r9 = r0
            r10 = r2
            r16 = r3
            r17 = r4
            r18 = r5
            r7.a(r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            if (r0 == 0) goto L215
            com.mbridge.msdk.reward.adapter.c r4 = com.mbridge.msdk.reward.adapter.c.m.a()
            android.content.Context r5 = r1.j
            java.lang.String r7 = r1.l
            java.lang.String r8 = r1.k
            java.lang.String r9 = r6.getRequestId()
            com.mbridge.msdk.reward.adapter.d$5 r10 = new com.mbridge.msdk.reward.adapter.d$5
            r10.<init>(r1, r6, r0, r2)
            r4.a(r5, r6, r7, r8, r9, r10)
            goto L215
        L1fa:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L1fa
            throw r0
        L1fd:
            java.lang.String r0 = "RewardMVVideoAdapter"
            java.lang.String r2 = "onload load失败 返回的compaign 没有带视频素材"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            java.lang.String r0 = r1.N
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L210
            java.lang.String r0 = "APP ALREADY INSTALLED"
            r1.N = r0
        L210:
            java.lang.String r0 = r1.N
            r1.c(r0)
        L215:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r17, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r18, java.lang.String r19, com.mbridge.msdk.foundation.entity.CampaignEx r20, java.util.List r21, java.lang.String r22, java.lang.String r23, com.mbridge.msdk.videocommon.d.c r24, java.lang.String r25) {
            r0 = r17
            r12 = r20
            r6 = r21
            com.mbridge.msdk.videocommon.a$a r13 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r13.<init>()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r14 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r14.<init>(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r13.a(r14)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r1 = 0
            if (r6 == 0) goto L2a
            int r2 = r21.size()     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            if (r2 <= 0) goto L2a
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r2.<init>(r1, r12, r6)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            goto L2f
        L2a:
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r2.<init>(r1, r12)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
        L2f:
            r15 = r2
            int r1 = r0.z     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r15.a(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r11 = r23
            r15.a(r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r9 = r24
            r15.a(r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            boolean r1 = r0.I     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r15.e(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            com.mbridge.msdk.reward.adapter.d$c r10 = new com.mbridge.msdk.reward.adapter.d$c     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            int r8 = r0.z     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r1 = r10
            r2 = r17
            r3 = r18
            r4 = r23
            r5 = r20
            r6 = r21
            r7 = r22
            r16 = r8
            r8 = r23
            r9 = r24
            r21 = r10
            r10 = r16
            r11 = r17
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            com.mbridge.msdk.reward.adapter.d$f r10 = new com.mbridge.msdk.reward.adapter.d$f     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            android.os.Handler r9 = r0.K     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r1 = r10
            r2 = r18
            r3 = r19
            r4 = r23
            r5 = r13
            r6 = r20
            r7 = r17
            r8 = r21
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r14.setWebViewListener(r10)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r14.setObject(r15)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r1 = r22
            r14.loadUrl(r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            android.os.Handler r0 = r0.K     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            r1 = 5000(0x1388, double:2.4703E-320)
            r3 = r21
            r0.postDelayed(r3, r1)     // Catch: java.lang.Throwable -> L8e java.lang.Exception -> L99
            goto La1
        L8e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            goto La1
        L99:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto La1
            r0.printStackTrace()
        La1:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r16, java.lang.String r17, com.mbridge.msdk.foundation.entity.CampaignEx r18, java.lang.String r19, java.lang.String r20, com.mbridge.msdk.videocommon.d.c r21) {
            r0 = r16
            r10 = r18
            com.mbridge.msdk.videocommon.a$a r11 = new com.mbridge.msdk.videocommon.a$a     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r11.<init>()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r12 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r12.<init>(r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r11.a(r12)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.video.bt.a.c r1 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r11.a(r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = r0.G     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r3 = 0
            if (r2 == 0) goto L49
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = r0.G     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            java.util.ArrayList r2 = r2.getAds()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            if (r2 == 0) goto L49
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = r0.G     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            java.util.ArrayList r2 = r2.getAds()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            int r2 = r2.size()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            if (r2 <= 0) goto L49
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.entity.CampaignUnit r4 = r0.G     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            java.util.ArrayList r4 = r4.getAds()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r2.<init>(r3, r10, r4)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            goto L4e
        L49:
            com.mbridge.msdk.video.js.a.j r2 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r2.<init>(r3, r10)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
        L4e:
            r13 = r2
            int r2 = r0.z     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r13.a(r2)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r14 = r20
            r13.a(r14)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r13.c(r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r7 = r21
            r13.a(r7)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            boolean r1 = r0.I     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r13.e(r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.reward.adapter.d$b r15 = new com.mbridge.msdk.reward.adapter.d$b     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            int r8 = r0.z     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r1 = r15
            r2 = r16
            r3 = r20
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            com.mbridge.msdk.reward.adapter.d$a r9 = new com.mbridge.msdk.reward.adapter.d$a     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            android.os.Handler r8 = r0.K     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r1 = r9
            r2 = r17
            r3 = r20
            r4 = r11
            r5 = r18
            r6 = r16
            r7 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r12.setWebViewListener(r9)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r12.setObject(r13)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r1 = r19
            r12.loadUrl(r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            android.os.Handler r0 = r0.K     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            r1 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r15, r1)     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> Lac
            goto Lb4
        La1:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            goto Lb4
        Lac:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto Lb4
            r0.printStackTrace()
        Lb4:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r9, java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "====del campaign and callback failed"
            java.lang.String r1 = "RewardMVVideoAdapter"
            r2 = 5
            java.lang.String r3 = "====delCampaignFromDownLoadCampaignListByUrld"
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)     // Catch: java.lang.Throwable -> Le2
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r9.y     // Catch: java.lang.Throwable -> Le2
            if (r3 == 0) goto Lc9
            boolean r3 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> Le2
            if (r3 != 0) goto Lc9
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r9.y     // Catch: java.lang.Throwable -> Le2
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> Le2
        L1a:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> Le2
            if (r4 == 0) goto La4
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> Le2
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Throwable -> Le2
            if (r4 == 0) goto L1a
            java.lang.String r5 = r4.getVideoUrlEncode()     // Catch: java.lang.Throwable -> Le2
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Le2
            if (r6 != 0) goto L41
            boolean r5 = r11.equals(r5)     // Catch: java.lang.Throwable -> Le2
            if (r5 == 0) goto L41
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r9.y     // Catch: java.lang.Throwable -> Le2
            r11.remove(r4)     // Catch: java.lang.Throwable -> Le2
            r9.a(r4)     // Catch: java.lang.Throwable -> Le2
            goto La4
        L41:
            java.lang.String r5 = r4.getendcard_url()     // Catch: java.lang.Throwable -> Le2
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Le2
            if (r6 != 0) goto L5a
            boolean r5 = r11.equals(r5)     // Catch: java.lang.Throwable -> Le2
            if (r5 == 0) goto L5a
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r9.y     // Catch: java.lang.Throwable -> Le2
            r11.remove(r4)     // Catch: java.lang.Throwable -> Le2
            r9.a(r4)     // Catch: java.lang.Throwable -> Le2
            goto La4
        L5a:
            com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r4.getRewardTemplateMode()     // Catch: java.lang.Throwable -> Le2
            if (r5 == 0) goto L1a
            java.util.List r6 = r5.f()     // Catch: java.lang.Throwable -> Le2
            if (r6 == 0) goto L8c
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> Le2
        L6a:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> Le2
            if (r7 == 0) goto L8c
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> Le2
            com.mbridge.msdk.foundation.entity.CampaignEx$c$a r7 = (com.mbridge.msdk.foundation.entity.CampaignEx.c.a) r7     // Catch: java.lang.Throwable -> Le2
            if (r7 == 0) goto L6a
            java.util.List<java.lang.String> r8 = r7.b     // Catch: java.lang.Throwable -> Le2
            if (r8 == 0) goto L6a
            java.util.List<java.lang.String> r7 = r7.b     // Catch: java.lang.Throwable -> Le2
            boolean r7 = r7.contains(r11)     // Catch: java.lang.Throwable -> Le2
            if (r7 == 0) goto L6a
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r6 = r9.y     // Catch: java.lang.Throwable -> Le2
            r6.remove(r4)     // Catch: java.lang.Throwable -> Le2
            r9.a(r4)     // Catch: java.lang.Throwable -> Le2
        L8c:
            java.lang.String r5 = r5.e()     // Catch: java.lang.Throwable -> Le2
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Le2
            if (r6 != 0) goto L1a
            boolean r5 = r11.equals(r5)     // Catch: java.lang.Throwable -> Le2
            if (r5 == 0) goto L1a
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r9.y     // Catch: java.lang.Throwable -> Le2
            r11.remove(r4)     // Catch: java.lang.Throwable -> Le2
            r9.a(r4)     // Catch: java.lang.Throwable -> Le2
        La4:
            com.mbridge.msdk.reward.adapter.b r11 = r9.t     // Catch: java.lang.Throwable -> Le2
            if (r11 == 0) goto L106
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r9.y     // Catch: java.lang.Throwable -> Le2
            if (r11 == 0) goto L106
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r11 = r9.y     // Catch: java.lang.Throwable -> Le2
            int r11 = r11.size()     // Catch: java.lang.Throwable -> Le2
            if (r11 != 0) goto L106
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Le2
            if (r11 == 0) goto Lbd
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Le2
            r11.removeMessages(r2)     // Catch: java.lang.Throwable -> Le2
        Lbd:
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> Le2
            r9.c(r10)     // Catch: java.lang.Throwable -> Le2
            com.mbridge.msdk.reward.adapter.b r11 = r9.t     // Catch: java.lang.Throwable -> Le2
            r11.a(r10)     // Catch: java.lang.Throwable -> Le2
            goto L106
        Lc9:
            com.mbridge.msdk.reward.adapter.b r11 = r9.t     // Catch: java.lang.Throwable -> Le2
            if (r11 == 0) goto L106
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Le2
            if (r11 == 0) goto Ld6
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Le2
            r11.removeMessages(r2)     // Catch: java.lang.Throwable -> Le2
        Ld6:
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> Le2
            r9.c(r10)     // Catch: java.lang.Throwable -> Le2
            com.mbridge.msdk.reward.adapter.b r11 = r9.t     // Catch: java.lang.Throwable -> Le2
            r11.a(r10)     // Catch: java.lang.Throwable -> Le2
            goto L106
        Le2:
            r11 = move-exception
            java.lang.String r3 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r3, r11)
            com.mbridge.msdk.reward.adapter.b r11 = r9.t     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto L106
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Lf7
            android.os.Handler r11 = r9.K     // Catch: java.lang.Throwable -> Lfe
            r11.removeMessages(r2)     // Catch: java.lang.Throwable -> Lfe
        Lf7:
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> Lfe
            r9.c(r10)     // Catch: java.lang.Throwable -> Lfe
            goto L106
        Lfe:
            r9 = move-exception
            java.lang.String r10 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r10, r9)
        L106:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r5, java.lang.String r6, java.util.List r7, java.util.List r8, boolean r9) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            r0.a(r6, r7, r8, r9)
            if (r8 == 0) goto L94
            int r0 = r8.size()
            if (r0 <= 0) goto L94
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "标记缓存数据 ： "
            r0.append(r1)
            int r1 = r8.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "test_isReay_db"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            java.util.Iterator r0 = r8.iterator()
        L39:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L94
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r1.getRewardTemplateMode()
            if (r2 == 0) goto L39
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r1.getRewardTemplateMode()
            java.lang.String r2 = r2.e()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L39
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "_"
            r2.append(r3)
            java.lang.String r4 = r1.getId()
            r2.append(r4)
            r2.append(r3)
            java.lang.String r4 = r1.getRequestId()
            r2.append(r4)
            r2.append(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r1.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.videocommon.a.b(r2)
            int r2 = r1.getAdType()
            com.mbridge.msdk.videocommon.a.b(r2, r1)
            goto L39
        L94:
            if (r9 == 0) goto L99
            r5.a(r6, r7, r8)
        L99:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r1, java.lang.String r2, java.util.List r3, boolean r4) {
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L3b
            if (r3 == 0) goto L3b
            int r1 = r3.size()
            if (r1 <= 0) goto L3b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "删除失败的数据 ： "
            r1.append(r0)
            int r0 = r3.size()
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)
            r1.a(r2, r3, r4)
        L3b:
            return
    }

    static void a(com.mbridge.msdk.reward.adapter.d r9, java.util.List r10) {
            java.lang.String r0 = "RewardMVVideoAdapter"
            java.lang.String r1 = "onload 开始 更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            android.content.Context r1 = r9.j
            if (r1 == 0) goto La0
            if (r10 == 0) goto La0
            int r1 = r10.size()
            if (r1 != 0) goto L15
            goto La0
        L15:
            android.content.Context r1 = r9.j
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.l r1 = com.mbridge.msdk.foundation.db.l.a(r1)
            r2 = 0
            r3 = r2
            r4 = r3
        L22:
            int r5 = r10.size()
            if (r3 >= r5) goto L91
            java.lang.Object r5 = r10.get(r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            if (r5 == 0) goto L8e
            android.content.Context r6 = r9.j
            java.lang.String r7 = r5.getPackageName()
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.c(r6, r7)
            if (r6 == 0) goto L58
            java.util.Set r6 = com.mbridge.msdk.foundation.controller.a.e()
            if (r6 == 0) goto L8e
            com.mbridge.msdk.foundation.entity.i r4 = new com.mbridge.msdk.foundation.entity.i
            java.lang.String r6 = r5.getId()
            java.lang.String r5 = r5.getPackageName()
            r4.<init>(r6, r5)
            java.util.Set r5 = com.mbridge.msdk.foundation.controller.a.e()
            r5.add(r4)
            r4 = 1
            goto L8e
        L58:
            if (r1 == 0) goto L8e
            java.lang.String r6 = r5.getId()
            boolean r6 = r1.a(r6)
            if (r6 != 0) goto L8e
            com.mbridge.msdk.foundation.entity.h r6 = new com.mbridge.msdk.foundation.entity.h
            r6.<init>()
            java.lang.String r7 = r5.getId()
            r6.a(r7)
            int r7 = r5.getFca()
            r6.a(r7)
            int r5 = r5.getFcb()
            r6.b(r5)
            r6.d(r2)
            r6.c(r2)
            long r7 = java.lang.System.currentTimeMillis()
            r6.a(r7)
            r1.a(r6)
        L8e:
            int r3 = r3 + 1
            goto L22
        L91:
            if (r4 == 0) goto La5
            java.lang.String r9 = "更新安装列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r9)
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            r9.h()
            goto La5
        La0:
            java.lang.String r9 = "onload 列表为空 不做更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r9)
        La5:
            return
    }

    private void a(java.lang.String r11, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r12, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13) {
            r10 = this;
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            if (r0 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r10.G
            if (r0 == 0) goto L11
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            r0.b(r11)
        L11:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            if (r0 == 0) goto L28
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r10.G
            if (r0 == 0) goto L28
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r10.G
            int r1 = r1.getVcn()
            r0.b(r11, r1)
        L28:
            if (r12 == 0) goto L98
            int r0 = r12.size()
            if (r0 <= 0) goto L98
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "最新返回的数据RequestId "
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r10.G
            java.lang.String r1 = r1.getRequestId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HBOPTIMIZE"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r10.G
            if (r0 == 0) goto L6a
            r0 = 0
            java.lang.Object r1 = r12.get(r0)
            if (r1 == 0) goto L6a
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = r10.G
            java.lang.String r1 = r1.getRequestId()
            java.lang.Object r0 = r12.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r0 = r0.getBidToken()
            com.mbridge.msdk.reward.a.a.a(r1, r0)
        L6a:
            java.util.Iterator r12 = r12.iterator()
        L6e:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L98
            java.lang.Object r0 = r12.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto L6e
            java.lang.String r1 = r0.getCampaignUnitId()
            java.lang.String r2 = r0.getRequestId()
            java.lang.String r3 = r0.getId()
            long r4 = r0.getPlct()
            long r6 = r0.getPlctb()
            long r8 = r0.getTimestamp()
            com.mbridge.msdk.foundation.same.a.d.a(r1, r2, r3, r4, r6, r8)
            goto L6e
        L98:
            if (r13 == 0) goto Ld0
            int r12 = r13.size()
            if (r12 <= 0) goto Ld0
            java.util.Iterator r12 = r13.iterator()
        La4:
            boolean r13 = r12.hasNext()
            if (r13 == 0) goto Lbe
            java.lang.Object r13 = r12.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = (com.mbridge.msdk.foundation.entity.CampaignEx) r13
            if (r13 == 0) goto La4
            java.lang.String r0 = r13.getCampaignUnitId()
            java.lang.String r13 = r13.getRequestId()
            com.mbridge.msdk.foundation.same.a.d.d(r0, r13)
            goto La4
        Lbe:
            com.mbridge.msdk.foundation.same.a.d.a(r11)
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r11 = r11.j()
            com.mbridge.msdk.foundation.db.b r11 = com.mbridge.msdk.foundation.db.b.a(r11)
            r11.a()
        Ld0:
            return
    }

    private void a(java.lang.String r3, boolean r4) {
            r2 = this;
            com.mbridge.msdk.reward.adapter.d$d r0 = new com.mbridge.msdk.reward.adapter.d$d
            r0.<init>(r2, r3)
            java.lang.Thread r1 = new java.lang.Thread
            r1.<init>(r0)
            r1.start()
            android.os.Handler r0 = r2.K
            if (r0 == 0) goto L21
            com.mbridge.msdk.reward.adapter.d$e r4 = new com.mbridge.msdk.reward.adapter.d$e
            r4.<init>(r2, r3)
            r2.v = r4
            android.os.Handler r3 = r2.K
            r0 = 90000(0x15f90, double:4.4466E-319)
            r3.postDelayed(r4, r0)
            goto L2b
        L21:
            java.lang.String r0 = "RewardMVVideoAdapter"
            java.lang.String r1 = "handler 为空 直接load"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            r2.b(r3, r4)
        L2b:
            return
    }

    static boolean a(com.mbridge.msdk.reward.adapter.d r0, boolean r1) {
            r0.w = r1
            return r1
    }

    static java.lang.String b(com.mbridge.msdk.reward.adapter.d r0) {
            java.lang.String r0 = r0.r
            return r0
    }

    static java.lang.String b(com.mbridge.msdk.reward.adapter.d r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    private void b(java.lang.String r17, boolean r18) {
            r16 = this;
            r1 = r16
            r0 = r17
            java.lang.String r2 = "RewardMVVideoAdapter"
            android.content.Context r3 = r1.j     // Catch: java.lang.Exception -> L16b
            if (r3 != 0) goto L10
            java.lang.String r0 = "Context is null"
            r1.c(r0)     // Catch: java.lang.Exception -> L16b
            return
        L10:
            java.lang.String r3 = r1.k     // Catch: java.lang.Exception -> L16b
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.a(r3)     // Catch: java.lang.Exception -> L16b
            if (r3 == 0) goto L1e
            java.lang.String r0 = "UnitId is null"
            r1.c(r0)     // Catch: java.lang.Exception -> L16b
            return
        L1e:
            com.mbridge.msdk.videocommon.d.c r3 = r1.u     // Catch: java.lang.Exception -> L16b
            if (r3 != 0) goto L28
            java.lang.String r0 = "RewardUnitSetting is null"
            r1.c(r0)     // Catch: java.lang.Exception -> L16b
            return
        L28:
            boolean r3 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Exception -> L16b
            if (r3 == 0) goto L48
            com.mbridge.msdk.videocommon.d.c r3 = r1.u     // Catch: java.lang.Exception -> L16b
            int r3 = r3.b()     // Catch: java.lang.Exception -> L16b
            int r3 = r3 * 1000
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L16b
            long r6 = r1.J     // Catch: java.lang.Exception -> L16b
            long r4 = r4 - r6
            long r6 = (long) r3     // Catch: java.lang.Exception -> L16b
            int r3 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r3 >= 0) goto L48
            java.lang.String r0 = "EXCEPTION_RETURN_EMPTY"
            r1.c(r0)     // Catch: java.lang.Exception -> L16b
            return
        L48:
            java.lang.String r3 = "load 开始准备请求参数"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.foundation.same.net.g.d r4 = r16.f()     // Catch: java.lang.Exception -> L16b
            if (r4 != 0) goto L5e
            java.lang.String r0 = "load 请求参数为空 load失败"
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)     // Catch: java.lang.Exception -> L16b
            java.lang.String r0 = "Load param is null"
            r1.c(r0)     // Catch: java.lang.Exception -> L16b
            return
        L5e:
            if (r4 == 0) goto L6b
            boolean r2 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Exception -> L16b
            if (r2 != 0) goto L6b
            java.lang.String r2 = "token"
            r4.a(r2, r0)     // Catch: java.lang.Exception -> L16b
        L6b:
            boolean r2 = r1.A     // Catch: java.lang.Exception -> L16b
            java.lang.String r3 = "0"
            java.lang.String r5 = "1"
            if (r2 == 0) goto L89
            int r2 = r1.D     // Catch: java.lang.Exception -> L16b
            int r6 = com.mbridge.msdk.foundation.same.a.x     // Catch: java.lang.Exception -> L16b
            java.lang.String r7 = "ivrwd"
            if (r2 == r6) goto L86
            int r2 = r1.D     // Catch: java.lang.Exception -> L16b
            int r6 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> L16b
            if (r2 != r6) goto L82
            goto L86
        L82:
            r4.a(r7, r3)     // Catch: java.lang.Exception -> L16b
            goto L89
        L86:
            r4.a(r7, r5)     // Catch: java.lang.Exception -> L16b
        L89:
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L16b
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L16b
            java.lang.String r7 = r1.k     // Catch: java.lang.Exception -> L16b
            boolean r8 = r1.A     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.videocommon.d.c r2 = r2.a(r6, r7, r8)     // Catch: java.lang.Exception -> L16b
            if (r2 == 0) goto Lb2
            java.lang.String r6 = r2.a()     // Catch: java.lang.Exception -> L16b
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L16b
            if (r6 != 0) goto Lb2
            java.lang.String r6 = "u_stid"
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> L16b
            r4.a(r6, r2)     // Catch: java.lang.Exception -> L16b
        Lb2:
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.videocommon.d.a r2 = r2.b()     // Catch: java.lang.Exception -> L16b
            if (r2 == 0) goto Lcf
            java.lang.String r6 = r2.b()     // Catch: java.lang.Exception -> L16b
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L16b
            if (r6 != 0) goto Lcf
            java.lang.String r6 = "r_stid"
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L16b
            r4.a(r6, r2)     // Catch: java.lang.Exception -> L16b
        Lcf:
            java.lang.String r2 = "rw_plus"
            if (r18 == 0) goto Ld4
            r3 = r5
        Ld4:
            r4.a(r2, r3)     // Catch: java.lang.Exception -> L16b
            java.lang.String r2 = r1.k     // Catch: java.lang.Exception -> L16b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ae.g(r2)     // Catch: java.lang.Exception -> L16b
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L16b
            if (r3 != 0) goto Le8
            java.lang.String r3 = "j"
            r4.a(r3, r2)     // Catch: java.lang.Exception -> L16b
        Le8:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L16b
            r1.M = r2     // Catch: java.lang.Exception -> L16b
            r5 = 0
            android.content.Context r6 = r1.j     // Catch: java.lang.Exception -> L106
            java.lang.String r7 = "start load offer from server"
            java.lang.String r8 = r1.k     // Catch: java.lang.Exception -> L106
            boolean r9 = r1.B     // Catch: java.lang.Exception -> L106
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L106
            long r12 = r1.M     // Catch: java.lang.Exception -> L106
            long r12 = r2 - r12
            com.mbridge.msdk.reward.b.a.a(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L106
        L106:
            com.mbridge.msdk.reward.c.b r2 = new com.mbridge.msdk.reward.c.b     // Catch: java.lang.Exception -> L16b
            android.content.Context r3 = r1.j     // Catch: java.lang.Exception -> L16b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.reward.adapter.d$2 r5 = new com.mbridge.msdk.reward.adapter.d$2     // Catch: java.lang.Exception -> L16b
            r5.<init>(r1)     // Catch: java.lang.Exception -> L16b
            r5.a(r0)     // Catch: java.lang.Exception -> L16b
            java.lang.String r3 = r1.k     // Catch: java.lang.Exception -> L16b
            r5.setUnitId(r3)     // Catch: java.lang.Exception -> L16b
            java.lang.String r3 = r1.l     // Catch: java.lang.Exception -> L16b
            r5.setPlacementId(r3)     // Catch: java.lang.Exception -> L16b
            boolean r3 = r1.A     // Catch: java.lang.Exception -> L16b
            if (r3 == 0) goto L126
            r3 = 287(0x11f, float:4.02E-43)
            goto L128
        L126:
            r3 = 94
        L128:
            r5.setAdType(r3)     // Catch: java.lang.Exception -> L16b
            int r3 = com.mbridge.msdk.foundation.same.a.N     // Catch: java.lang.Exception -> L16b
            int r6 = com.mbridge.msdk.foundation.same.a.O     // Catch: java.lang.Exception -> L16b
            int r7 = com.mbridge.msdk.foundation.same.a.M     // Catch: java.lang.Exception -> L16b
            int r8 = com.mbridge.msdk.foundation.same.a.S     // Catch: java.lang.Exception -> L16b
            com.mbridge.msdk.c.b r9 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L155
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L155
            java.lang.String r10 = r10.k()     // Catch: java.lang.Exception -> L155
            com.mbridge.msdk.c.a r9 = r9.g(r10)     // Catch: java.lang.Exception -> L155
            if (r9 == 0) goto L155
            int r3 = r9.x()     // Catch: java.lang.Exception -> L155
            int r6 = r9.y()     // Catch: java.lang.Exception -> L155
            int r7 = r9.z()     // Catch: java.lang.Exception -> L155
            int r8 = r9.A()     // Catch: java.lang.Exception -> L155
        L155:
            r11 = r3
            r12 = r6
            r10 = r7
            r14 = r8
            com.mbridge.msdk.foundation.same.net.b r7 = new com.mbridge.msdk.foundation.same.net.b     // Catch: java.lang.Exception -> L16b
            int r3 = r1.o     // Catch: java.lang.Exception -> L16b
            int r13 = r3 * 1000
            r15 = 4
            r9 = r7
            r9.<init>(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> L16b
            r3 = 1
            r6 = r17
            r2.choiceV3OrV5BySetting(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L16b
            goto L177
        L16b:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "Load exception"
            r1.c(r0)
            r16.i()
        L177:
            return
    }

    private boolean b(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            if (r2 == 0) goto L13
            int r2 = r2.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> Lb
            r0 = 2
            if (r2 != r0) goto L13
            r2 = 1
            return r2
        Lb:
            r2 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L13
            r2.printStackTrace()
        L13:
            r2 = 0
            return r2
    }

    static boolean b(com.mbridge.msdk.reward.adapter.d r0, boolean r1) {
            r0.x = r1
            return r1
    }

    static com.mbridge.msdk.reward.adapter.b c(com.mbridge.msdk.reward.adapter.d r0) {
            com.mbridge.msdk.reward.adapter.b r0 = r0.t
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.reward.adapter.d r0, java.lang.String r1) {
            r0.r = r1
            return r1
    }

    private void c(java.lang.String r3) {
            r2 = this;
            android.os.Handler r0 = r2.K
            if (r0 == 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 4
            if (r0 == 0) goto L11
            android.os.Handler r3 = r2.K
            r3.sendEmptyMessage(r1)
            goto L2c
        L11:
            android.os.Message r0 = android.os.Message.obtain()
            r0.what = r1
            r0.obj = r3
            java.lang.String r1 = "exception"
            boolean r3 = r3.contains(r1)
            if (r3 == 0) goto L27
            android.os.Handler r3 = r2.K
            r3.sendMessageAtFrontOfQueue(r0)
            goto L2c
        L27:
            android.os.Handler r3 = r2.K
            r3.sendMessage(r0)
        L2c:
            return
    }

    static java.util.List d(com.mbridge.msdk.reward.adapter.d r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.O
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList e(com.mbridge.msdk.reward.adapter.d r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.H
            return r0
    }

    private void e() {
            r5 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.b r0 = com.mbridge.msdk.foundation.db.b.a(r0)
            java.lang.String r1 = r5.k
            java.lang.String r2 = r5.c
            java.util.List r0 = r0.b(r1, r2)
            if (r0 == 0) goto La6
            int r1 = r0.size()
            java.lang.String r2 = r5.k
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.d.b(r2)
            if (r1 != 0) goto L23
            return
        L23:
            r3 = 1
            java.lang.String r4 = ""
            if (r1 != r3) goto L44
            r1 = 0
            java.lang.Object r3 = r0.get(r1)     // Catch: java.lang.Exception -> L9c
            if (r3 == 0) goto L6f
            java.lang.Object r3 = r0.get(r1)     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.entity.d r3 = (com.mbridge.msdk.foundation.entity.d) r3     // Catch: java.lang.Exception -> L9c
            java.lang.String r4 = r3.c()     // Catch: java.lang.Exception -> L9c
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.entity.d r0 = (com.mbridge.msdk.foundation.entity.d) r0     // Catch: java.lang.Exception -> L9c
            java.lang.String r0 = r0.b()     // Catch: java.lang.Exception -> L9c
            goto L70
        L44:
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L9c
            if (r1 != 0) goto L6f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L9c
        L4e:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto L6f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.entity.d r1 = (com.mbridge.msdk.foundation.entity.d) r1     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto L4e
            java.lang.String r3 = r1.a()     // Catch: java.lang.Exception -> L9c
            boolean r3 = r2.equals(r3)     // Catch: java.lang.Exception -> L9c
            if (r3 == 0) goto L4e
            java.lang.String r4 = r1.c()     // Catch: java.lang.Exception -> L9c
            java.lang.String r0 = r1.b()     // Catch: java.lang.Exception -> L9c
            goto L70
        L6f:
            r0 = r4
        L70:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L9c
            if (r1 != 0) goto La6
            java.lang.String r1 = r5.c     // Catch: java.lang.Exception -> L9c
            boolean r1 = r4.equals(r1)     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto La6
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.db.b r1 = com.mbridge.msdk.foundation.db.b.a(r1)     // Catch: java.lang.Exception -> L9c
            java.lang.String r3 = r5.k     // Catch: java.lang.Exception -> L9c
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L9c
            java.lang.String r1 = r5.k     // Catch: java.lang.Exception -> L9c
            java.lang.String r2 = r5.c     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.same.a.d.a(r1, r2, r0)     // Catch: java.lang.Exception -> L9c
            java.lang.String r0 = r5.k     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.same.a.d.a(r0)     // Catch: java.lang.Exception -> L9c
            goto La6
        L9c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        La6:
            return
    }

    private com.mbridge.msdk.foundation.same.net.g.d f() {
            r14 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            r1.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.l()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            boolean r2 = r14.p
            if (r2 == 0) goto L31
            r2 = 2
            goto L32
        L31:
            r2 = 3
        L32:
            com.mbridge.msdk.videocommon.d.c r3 = r14.u
            r4 = 0
            if (r3 == 0) goto L42
            int r4 = r3.t()
            com.mbridge.msdk.videocommon.d.c r3 = r14.u
            int r3 = r3.u()
            goto L43
        L42:
            r3 = r4
        L43:
            java.lang.String r5 = r14.r
            java.lang.String r6 = r14.q
            java.lang.String r7 = r14.k
            java.lang.String r8 = "reward"
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.d.a(r7, r8)
            java.lang.String r8 = r14.k()
            int r9 = r14.h()
            r14.m = r9
            java.lang.String r9 = r14.j()
            int r10 = r14.n
            boolean r11 = r14.A
            if (r11 == 0) goto L66
            r11 = 287(0x11f, float:4.02E-43)
            goto L68
        L66:
            r11 = 94
        L68:
            com.mbridge.msdk.foundation.same.net.g.d r12 = new com.mbridge.msdk.foundation.same.net.g.d
            r12.<init>()
            java.lang.String r13 = "app_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r13, r0)
            java.lang.String r0 = r14.k
            java.lang.String r13 = "unit_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r13, r0)
            java.lang.String r0 = r14.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L88
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r13 = r14.l
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r13)
        L88:
            java.lang.String r0 = "sign"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "req_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_num"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r2 = r14.A
            if (r2 == 0) goto Lc1
            r3 = 1
        Lc1:
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "tnum"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "1"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "only_impression"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r3, r0)
            java.lang.String r0 = "ping_mode"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r2)
            java.lang.String r0 = "ttc_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r6)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.b
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r7)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r5)
            java.lang.String r0 = "install_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_source_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r2, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.a
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r0, r9)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r14.m
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "offset"
            com.mbridge.msdk.foundation.same.net.f.b.a(r12, r1, r0)
            return r12
    }

    static java.lang.String f(com.mbridge.msdk.reward.adapter.d r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static java.util.List g(com.mbridge.msdk.reward.adapter.d r0) {
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.P
            return r0
    }

    private void g() {
            r4 = this;
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            if (r0 == 0) goto L39
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L31
            if (r0 != 0) goto L20
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L31
        L20:
            long r0 = r0.W()     // Catch: java.lang.Exception -> L31
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            com.mbridge.msdk.videocommon.a.a r2 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = r4.k     // Catch: java.lang.Exception -> L31
            r2.a(r0, r3)     // Catch: java.lang.Exception -> L31
            goto L39
        L31:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L39
            r0.printStackTrace()
        L39:
            return
    }

    private int h() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = r3.k     // Catch: java.lang.Exception -> L20
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L10
            java.lang.String r1 = r3.k     // Catch: java.lang.Exception -> L20
            int r1 = com.mbridge.msdk.reward.a.a.a(r1)     // Catch: java.lang.Exception -> L20
            goto L11
        L10:
            r1 = r0
        L11:
            com.mbridge.msdk.videocommon.d.c r2 = r3.u     // Catch: java.lang.Exception -> L20
            if (r2 == 0) goto L24
            com.mbridge.msdk.videocommon.d.c r2 = r3.u     // Catch: java.lang.Exception -> L20
            int r2 = r2.v()     // Catch: java.lang.Exception -> L20
            if (r1 <= r2) goto L1e
            goto L24
        L1e:
            r0 = r1
            goto L24
        L20:
            r1 = move-exception
            r1.printStackTrace()
        L24:
            return r0
    }

    static boolean h(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.B
            return r0
    }

    static long i(com.mbridge.msdk.reward.adapter.d r2) {
            long r0 = r2.M
            return r0
    }

    private void i() {
            r2 = this;
            java.lang.String r0 = r2.k     // Catch: java.lang.Exception -> Lf
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.k     // Catch: java.lang.Exception -> Lf
            r1 = 0
            com.mbridge.msdk.reward.a.a.a(r0, r1)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r0 = move-exception
            r0.printStackTrace()
        L13:
            return
    }

    static android.content.Context j(com.mbridge.msdk.reward.adapter.d r0) {
            android.content.Context r0 = r0.j
            return r0
    }

    private java.lang.String j() {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = com.mbridge.msdk.reward.a.a.a     // Catch: java.lang.Exception -> Ld
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto L11
            java.lang.String r0 = com.mbridge.msdk.reward.a.a.a     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return r0
    }

    static android.os.Handler k(com.mbridge.msdk.reward.adapter.d r0) {
            android.os.Handler r0 = r0.K
            return r0
    }

    private java.lang.String k() {
            r5 = this;
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            java.util.List r2 = r2.i()     // Catch: java.lang.Exception -> L3a
            if (r2 == 0) goto L2f
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3a
            if (r3 <= 0) goto L2f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L3a
        L1b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L3a
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L3a
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L3a
            r1.put(r3)     // Catch: java.lang.Exception -> L3a
            goto L1b
        L2f:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L3a
            if (r2 <= 0) goto L3e
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            return r0
    }

    private void l() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> L12
            int r0 = r0.size()     // Catch: java.lang.Exception -> L12
            if (r0 <= 0) goto L1a
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.mbridge.msdk.foundation.same.a.d.a     // Catch: java.lang.Exception -> L12
            r0.clear()     // Catch: java.lang.Exception -> L12
            goto L1a
        L12:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L1a
            r0.printStackTrace()
        L1a:
            return
    }

    static boolean l(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.L
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList m(com.mbridge.msdk.reward.adapter.d r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.y
            return r0
    }

    private void m() {
            r2 = this;
            android.content.Context r0 = r2.j     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.foundation.db.k r0 = com.mbridge.msdk.foundation.db.k.a(r0)     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = r2.k     // Catch: java.lang.Exception -> L10
            r0.a(r1)     // Catch: java.lang.Exception -> L10
            goto L18
        L10:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L18
            r0.printStackTrace()
        L18:
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignUnit n(com.mbridge.msdk.reward.adapter.d r0) {
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = r0.G
            return r0
    }

    static boolean o(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.I
            return r0
    }

    static boolean p(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.A
            return r0
    }

    static void q(com.mbridge.msdk.reward.adapter.d r0) {
            r0.i()
            return
    }

    static int r(com.mbridge.msdk.reward.adapter.d r0) {
            int r0 = r0.z
            return r0
    }

    static com.mbridge.msdk.videocommon.d.c s(com.mbridge.msdk.reward.adapter.d r0) {
            com.mbridge.msdk.videocommon.d.c r0 = r0.u
            return r0
    }

    static java.lang.String t(com.mbridge.msdk.reward.adapter.d r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    static boolean u(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.x
            return r0
    }

    static boolean v(com.mbridge.msdk.reward.adapter.d r0) {
            boolean r0 = r0.w
            return r0
    }

    static com.mbridge.msdk.reward.adapter.d.e w(com.mbridge.msdk.reward.adapter.d r0) {
            com.mbridge.msdk.reward.adapter.d$e r0 = r0.v
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public final void a(int r1, int r2, int r3) {
            r0 = this;
            r0.D = r1
            r0.E = r2
            r0.F = r3
            return
    }

    public final void a(int r7, int r8, boolean r9) {
            r6 = this;
            boolean r5 = r6.I
            java.lang.String r4 = ""
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void a(int r1, int r2, boolean r3, java.lang.String r4, boolean r5) {
            r0 = this;
            r0.n = r1
            r0.o = r2
            r0.p = r3
            r0.I = r5
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r0.H
            if (r1 == 0) goto Lf
            r1.clear()
        Lf:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r0.O
            if (r1 == 0) goto L16
            r1.clear()
        L16:
            r1 = 0
            r0.e = r1
            r0.f = r1
            java.lang.Object r2 = r0.a
            monitor-enter(r2)
            boolean r3 = r0.g     // Catch: java.lang.Throwable -> L6d
            if (r3 == 0) goto L24
            r0.g = r1     // Catch: java.lang.Throwable -> L6d
        L24:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            r0.i = r1
            r0.h = r1
            android.content.Context r2 = r0.j     // Catch: java.lang.Exception -> L2f
            boolean r1 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(r2)     // Catch: java.lang.Exception -> L2f
        L2f:
            if (r1 != 0) goto L37
            java.lang.String r1 = "WebView is not available"
            r0.c(r1)
            return
        L37:
            android.content.Context r1 = r0.j
            if (r1 != 0) goto L41
            java.lang.String r1 = "Context is null"
            r0.c(r1)
            return
        L41:
            java.lang.String r1 = r0.k
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.a(r1)
            if (r1 == 0) goto L4f
            java.lang.String r1 = "UnitId is null"
            r0.c(r1)
            return
        L4f:
            com.mbridge.msdk.videocommon.d.c r1 = r0.u
            if (r1 != 0) goto L59
            java.lang.String r1 = "RewardUnitSetting is null"
            r0.c(r1)
            return
        L59:
            r0.l()
            r0.m()
            java.lang.String r1 = "RewardMVVideoAdapter"
            java.lang.String r2 = "load 开始清除过期数据"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            r0.g()
            r0.a(r4, r5)
            return
        L6d:
            r1 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L6d
            throw r1
    }

    @Override
    public final void a(com.mbridge.msdk.reward.adapter.b r3) {
            r2 = this;
            java.lang.String r0 = "RewardMVVideoAdapter"
            if (r3 == 0) goto La
            java.lang.String r1 = "======set listener is not null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            goto Lf
        La:
            java.lang.String r1 = "======set listener is  null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
        Lf:
            r2.t = r3
            return
    }

    public final void a(com.mbridge.msdk.video.bt.module.b.h r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8) {
            r3 = this;
            java.lang.String r0 = "RewardMVVideoAdapter"
            r3.s = r4     // Catch: java.lang.Exception -> L11e
            java.lang.String r4 = "show 进来"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L11e
            android.content.Context r4 = r3.j     // Catch: java.lang.Exception -> L11e
            if (r4 == 0) goto L10d
            java.lang.String r4 = r3.k     // Catch: java.lang.Exception -> L11e
            boolean r4 = com.mbridge.msdk.foundation.tools.ai.a(r4)     // Catch: java.lang.Exception -> L11e
            if (r4 == 0) goto L17
            goto L10d
        L17:
            java.lang.String r4 = "show isReady true 打开播放器页面"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L11e
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L11e
            android.content.Context r1 = r3.j     // Catch: java.lang.Exception -> L11e
            java.lang.Class<com.mbridge.msdk.reward.player.MBRewardVideoActivity> r2 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.class
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L11e
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r1)     // Catch: java.lang.Exception -> L11e
            java.lang.String r1 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_UNITID     // Catch: java.lang.Exception -> L11e
            java.lang.String r2 = r3.k     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r1, r2)     // Catch: java.lang.Exception -> L11e
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID     // Catch: java.lang.Exception -> L11e
            java.lang.String r2 = r3.l     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r1, r2)     // Catch: java.lang.Exception -> L11e
            java.lang.String r1 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_REWARD     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r1, r5)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_MUTE     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISIV     // Catch: java.lang.Exception -> L11e
            boolean r7 = r3.A     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISBID     // Catch: java.lang.Exception -> L11e
            boolean r7 = r3.B     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_EXTRADATA     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r8)     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.videocommon.download.b r5 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L11e
            java.lang.String r7 = r3.k     // Catch: java.lang.Exception -> L11e
            java.util.concurrent.CopyOnWriteArrayList r5 = r5.a(r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r7 = "HBOPTIMIZE"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L11e
            r8.<init>()     // Catch: java.lang.Exception -> L11e
            java.lang.String r1 = "当前展示的Offer requestId"
            r8.append(r1)     // Catch: java.lang.Exception -> L11e
            r1 = 0
            java.lang.Object r2 = r5.get(r1)     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L11e
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Exception -> L11e
            r8.append(r2)     // Catch: java.lang.Exception -> L11e
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.foundation.tools.z.d(r7, r8)     // Catch: java.lang.Exception -> L11e
            if (r5 == 0) goto Lc0
            int r7 = r5.size()     // Catch: java.lang.Exception -> L11e
            if (r7 <= 0) goto Lc0
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L11e
            r7.<init>()     // Catch: java.lang.Exception -> L11e
            java.lang.String r8 = "可以 show 的数据： "
            r7.append(r8)     // Catch: java.lang.Exception -> L11e
            int r8 = r5.size()     // Catch: java.lang.Exception -> L11e
            r7.append(r8)     // Catch: java.lang.Exception -> L11e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> L11e
            if (r5 == 0) goto Lae
            java.lang.String r7 = r5.getRequestId()     // Catch: java.lang.Exception -> L11e
            r3.c = r7     // Catch: java.lang.Exception -> L11e
        Lae:
            if (r5 == 0) goto Lbc
            java.lang.String r5 = r5.getCMPTEntryUrl()     // Catch: java.lang.Exception -> L11e
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L11e
            if (r5 != 0) goto Lbc
            r5 = 1
            r1 = r5
        Lbc:
            r3.e()     // Catch: java.lang.Exception -> L11e
            goto Ld1
        Lc0:
            java.lang.String r5 = "可以 show 的数据： 0"
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.video.bt.module.b.h r5 = r3.s     // Catch: java.lang.Exception -> L11e
            if (r5 == 0) goto Ld1
            com.mbridge.msdk.video.bt.module.b.h r4 = r3.s     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = "load failed"
            r4.a(r5)     // Catch: java.lang.Exception -> L11e
            return
        Ld1:
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_ISBIG_OFFER     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r1)     // Catch: java.lang.Exception -> L11e
            boolean r5 = r3.A     // Catch: java.lang.Exception -> L11e
            if (r5 == 0) goto Lef
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_MODETYPE     // Catch: java.lang.Exception -> L11e
            int r7 = r3.D     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_VALUETYPE     // Catch: java.lang.Exception -> L11e
            int r7 = r3.E     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_IVREWARD_VALUE     // Catch: java.lang.Exception -> L11e
            int r7 = r3.F     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r7)     // Catch: java.lang.Exception -> L11e
        Lef:
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L11e
            if (r5 != 0) goto Lfa
            java.lang.String r5 = com.mbridge.msdk.reward.player.MBRewardVideoActivity.INTENT_USERID     // Catch: java.lang.Exception -> L11e
            r4.putExtra(r5, r6)     // Catch: java.lang.Exception -> L11e
        Lfa:
            com.mbridge.msdk.reward.adapter.RewardUnitCacheManager r5 = com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.getInstance()     // Catch: java.lang.Exception -> L11e
            java.lang.String r6 = r3.l     // Catch: java.lang.Exception -> L11e
            java.lang.String r7 = r3.k     // Catch: java.lang.Exception -> L11e
            com.mbridge.msdk.videocommon.d.c r8 = r3.u     // Catch: java.lang.Exception -> L11e
            r5.add(r6, r7, r8)     // Catch: java.lang.Exception -> L11e
            android.content.Context r5 = r3.j     // Catch: java.lang.Exception -> L11e
            r5.startActivity(r4)     // Catch: java.lang.Exception -> L11e
            goto L13e
        L10d:
            com.mbridge.msdk.video.bt.module.b.h r4 = r3.s     // Catch: java.lang.Exception -> L11e
            if (r4 == 0) goto L118
            com.mbridge.msdk.video.bt.module.b.h r4 = r3.s     // Catch: java.lang.Exception -> L11e
            java.lang.String r5 = "context or unitid is null"
            r4.a(r5)     // Catch: java.lang.Exception -> L11e
        L118:
            java.lang.String r4 = "show context munitid null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L11e
            return
        L11e:
            r4 = move-exception
            r4.printStackTrace()
            com.mbridge.msdk.video.bt.module.b.h r5 = r3.s
            if (r5 == 0) goto L13e
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "show failed, exception is "
            r6.append(r7)
            java.lang.String r4 = r4.getMessage()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.a(r4)
        L13e:
            return
    }

    public final void a(com.mbridge.msdk.videocommon.d.c r3) {
            r2 = this;
            r2.u = r3     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L23
            int r3 = r3.J()     // Catch: java.lang.Throwable -> L19
            int r3 = r3 * 1000
            int r0 = com.mbridge.msdk.foundation.same.a.v     // Catch: java.lang.Throwable -> L19
            if (r3 == r0) goto L23
            com.mbridge.msdk.videocommon.d.c r3 = r2.u     // Catch: java.lang.Throwable -> L19
            int r3 = r3.J()     // Catch: java.lang.Throwable -> L19
            int r3 = r3 * 1000
            com.mbridge.msdk.foundation.same.a.v = r3     // Catch: java.lang.Throwable -> L19
            goto L23
        L19:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "RewardMVVideoAdapter"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r3)
        L23:
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.P = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public final boolean a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2, boolean r3, int r4) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    public final boolean a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r14, boolean r15, int r16, boolean r17) {
            r13 = this;
            r0 = r13
            r8 = r14
            r10 = 0
            java.lang.String r11 = "RewardVideoController"
            if (r8 == 0) goto L133
            int r1 = r14.size()
            if (r1 <= 0) goto L133
            java.lang.Object r1 = r14.get(r10)
            r12 = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()
            r2 = 94
            java.lang.String r3 = r0.k
            boolean r4 = r0.B
            int r5 = r14.size()
            r6 = r15
            r7 = r16
            r8 = r14
            r9 = r17
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
            if (r1 == 0) goto L138
            java.lang.String r1 = "RewardMVVideoAdapter"
            java.lang.String r2 = "_"
            r3 = 1
            if (r15 == 0) goto Lb6
            boolean r4 = r12.isDynamicView()
            if (r4 == 0) goto L3c
            return r3
        L3c:
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            if (r4 == 0) goto L84
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            int r4 = r4.size()
            if (r4 <= 0) goto L84
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            r5 = 3
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto L61
            java.lang.String r2 = "Is not check big template download status"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return r3
        L61:
            java.lang.String r4 = r12.getCMPTEntryUrl()
            java.lang.String r5 = r12.getendcard_url()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L84
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            r5 = 2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto L84
            java.lang.String r2 = "Is not check big template ENDCARD download status"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return r3
        L84:
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r1 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r0.k
            r4.append(r5)
            r4.append(r2)
            java.lang.String r5 = r12.getRequestId()
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r12.getCMPTEntryUrl()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            boolean r1 = r1.checkPreLoadState(r2)
            if (r1 == 0) goto L138
            java.lang.String r1 = "大模板业务，开始检查大模板预加载情况，大模板预加载成功"
            com.mbridge.msdk.foundation.tools.z.a(r11, r1)
            return r3
        Lb6:
            if (r12 == 0) goto Lbf
            boolean r4 = r12.isDynamicView()
            if (r4 == 0) goto Lbf
            return r3
        Lbf:
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            if (r4 == 0) goto Le3
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            int r4 = r4.size()
            if (r4 <= 0) goto Le3
            java.util.ArrayList r4 = r12.getRsIgnoreCheckRule()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto Le3
            java.lang.String r2 = "Is not check template download status"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            return r3
        Le3:
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r12.getRewardTemplateMode()
            if (r1 == 0) goto L12d
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r12.getRewardTemplateMode()
            java.lang.String r1 = r1.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L12d
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r1 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r0.k
            r4.append(r5)
            r4.append(r2)
            java.lang.String r5 = r12.getRequestId()
            r4.append(r5)
            r4.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r2 = r12.getRewardTemplateMode()
            java.lang.String r2 = r2.e()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            boolean r1 = r1.checkPreLoadState(r2)
            if (r1 == 0) goto L138
            java.lang.String r1 = "非大模板业务，存在播放模板，播放模板预加载成功"
            com.mbridge.msdk.foundation.tools.z.a(r11, r1)
            return r3
        L12d:
            java.lang.String r1 = "非大模板 没有 template"
            com.mbridge.msdk.foundation.tools.z.a(r11, r1)
            return r3
        L133:
            java.lang.String r1 = "数据为空"
            com.mbridge.msdk.foundation.tools.z.a(r11, r1)
        L138:
            return r10
    }

    public final void b(java.lang.String r6) {
            r5 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r5.u
            if (r0 == 0) goto L39
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L39
            com.mbridge.msdk.videocommon.d.c r0 = r5.u
            int r0 = r0.c()
            int r0 = r0 * 1000
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.P
            if (r1 == 0) goto L39
            int r1 = r1.size()
            if (r1 <= 0) goto L39
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r5.P
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1
            long r1 = r1.getTimestamp()
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r1
            long r0 = (long) r0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L39
            java.lang.String r6 = "hit ltorwc"
            r5.c(r6)
            return
        L39:
            boolean r0 = r5.I
            r5.b(r6, r0)
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final boolean b() {
            r8 = this;
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r8.k
            boolean r2 = r8.B
            java.lang.String r3 = r8.C
            r4 = 1
            java.util.concurrent.CopyOnWriteArrayList r0 = r0.a(r1, r4, r2, r3)
            r1 = 0
            if (r0 == 0) goto L55
            int r2 = r0.size()
            if (r2 <= 0) goto L55
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            com.mbridge.msdk.videocommon.a.a r3 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r5 = r8.k
            boolean r6 = r8.B
            java.lang.String r7 = r8.C
            int r3 = r3.b(r5, r4, r6, r7)
            java.lang.String r5 = r2.getCMPTEntryUrl()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L43
            int r5 = r2.getNscpt()
            if (r5 != r4) goto L43
            int r5 = r0.size()
            if (r5 >= r3) goto L43
            return r1
        L43:
            java.lang.String r1 = r2.getCMPTEntryUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r1 = r1 ^ r4
            int r2 = r2.getNscpt()
            boolean r0 = r8.a(r0, r1, r2)
            return r0
        L55:
            java.lang.String r0 = "RewardVideoController"
            java.lang.String r2 = "数据库可用的缓存数据条数：0"
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)
            return r1
    }

    public final java.lang.String c(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L2e
            java.lang.String r2 = r1.c
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L2b
            com.mbridge.msdk.videocommon.download.b r2 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r0 = r1.k
            java.util.concurrent.CopyOnWriteArrayList r2 = r2.a(r0)
            if (r2 == 0) goto L2b
            int r0 = r2.size()
            if (r0 <= 0) goto L2b
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            if (r2 == 0) goto L2b
            java.lang.String r2 = r2.getRequestId()
            r1.c = r2
        L2b:
            java.lang.String r2 = r1.c
            return r2
        L2e:
            java.lang.String r2 = r1.b
            return r2
    }

    public final boolean c() {
            r8 = this;
            java.lang.String r0 = "test_isReay_db"
            java.lang.String r1 = "isRisSpareOfferReady check"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.videocommon.a.a r1 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r2 = r8.k
            boolean r3 = r8.B
            java.lang.String r4 = r8.C
            r5 = 1
            java.util.List r1 = r1.c(r2, r5, r3, r4)
            r2 = 0
            if (r1 == 0) goto L5c
            int r3 = r1.size()
            if (r3 <= 0) goto L5c
            java.lang.Object r0 = r1.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            com.mbridge.msdk.videocommon.a.a r3 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r4 = r8.k
            boolean r6 = r8.B
            java.lang.String r7 = r8.C
            int r3 = r3.b(r4, r5, r6, r7)
            java.lang.String r4 = r0.getCMPTEntryUrl()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L4a
            int r4 = r0.getNscpt()
            if (r4 != r5) goto L4a
            int r4 = r1.size()
            if (r4 >= r3) goto L4a
            return r2
        L4a:
            java.lang.String r2 = r0.getCMPTEntryUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r2 = r2 ^ r5
            int r0 = r0.getNscpt()
            boolean r0 = r8.a(r1, r2, r0)
            return r0
        L5c:
            java.lang.String r1 = "数据库可用的缓存数据条数：0"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return r2
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> d() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.H
            return r0
    }

    public final void d(boolean r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public final void e(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L3
            goto L18
        L3:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r2.H
            if (r3 == 0) goto L18
            int r3 = r3.size()
            if (r3 <= 0) goto L18
            com.mbridge.msdk.videocommon.a.a r3 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r0 = r2.k
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r2.H
            r3.a(r0, r1)
        L18:
            return
    }

    public final void f(boolean r8) {
            r7 = this;
            java.lang.String r0 = "load_timeout"
            java.lang.String r1 = "_"
            r2 = 0
            if (r8 == 0) goto L76
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.P
            if (r8 == 0) goto Le4
            int r8 = r8.size()
            if (r8 <= 0) goto Le4
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.P
            java.util.Iterator r8 = r8.iterator()
        L17:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto L6a
            java.lang.Object r3 = r8.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            if (r3 == 0) goto L17
            r3.setLoadTimeoutState(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            if (r4 == 0) goto L17
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            java.lang.String r4 = r4.e()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L17
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.k
            r5.append(r6)
            r5.append(r1)
            java.lang.String r6 = r3.getRequestId()
            r5.append(r6)
            r5.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r3.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.setTemplatePreLoadDone(r3, r2)
            goto L17
        L6a:
            com.mbridge.msdk.videocommon.a.a r8 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r7.k
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.P
            r8.a(r1, r3, r0, r2)
            goto Le4
        L76:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.H
            if (r8 == 0) goto Le4
            int r8 = r8.size()
            if (r8 <= 0) goto Le4
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.H
            java.util.Iterator r8 = r8.iterator()
        L86:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto Ld9
            java.lang.Object r3 = r8.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            if (r3 == 0) goto L86
            r3.setLoadTimeoutState(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            if (r4 == 0) goto L86
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            java.lang.String r4 = r4.e()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L86
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.k
            r5.append(r6)
            r5.append(r1)
            java.lang.String r6 = r3.getRequestId()
            r5.append(r6)
            r5.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r3.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.setTemplatePreLoadDone(r3, r2)
            goto L86
        Ld9:
            com.mbridge.msdk.videocommon.a.a r8 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r7.k
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.H
            r8.a(r1, r3, r0, r2)
        Le4:
            return
    }

    public final boolean g(boolean r8) {
            r7 = this;
            java.lang.String r0 = "load_timeout"
            java.lang.String r1 = "_"
            r2 = 1
            if (r8 == 0) goto L76
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.P
            if (r8 == 0) goto Le5
            int r8 = r8.size()
            if (r8 <= 0) goto Le5
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.P
            java.util.Iterator r8 = r8.iterator()
        L17:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto L6a
            java.lang.Object r3 = r8.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            if (r3 == 0) goto L17
            r3.setLoadTimeoutState(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            if (r4 == 0) goto L17
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            java.lang.String r4 = r4.e()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L17
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.k
            r5.append(r6)
            r5.append(r1)
            java.lang.String r6 = r3.getRequestId()
            r5.append(r6)
            r5.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r3.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.setTemplatePreLoadDone(r3, r2)
            goto L17
        L6a:
            com.mbridge.msdk.videocommon.a.a r8 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r7.k
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.P
            r8.a(r1, r3, r0, r2)
            return r2
        L76:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.H
            if (r8 == 0) goto Le5
            int r8 = r8.size()
            if (r8 <= 0) goto Le5
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r8 = r7.H
            java.util.Iterator r8 = r8.iterator()
        L86:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto Ld9
            java.lang.Object r3 = r8.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            if (r3 == 0) goto L86
            r3.setLoadTimeoutState(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            if (r4 == 0) goto L86
            com.mbridge.msdk.foundation.entity.CampaignEx$c r4 = r3.getRewardTemplateMode()
            java.lang.String r4 = r4.e()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L86
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r4 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.getInstance()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r7.k
            r5.append(r6)
            r5.append(r1)
            java.lang.String r6 = r3.getRequestId()
            r5.append(r6)
            r5.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r3.getRewardTemplateMode()
            java.lang.String r3 = r3.e()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.setTemplatePreLoadDone(r3, r2)
            goto L86
        Ld9:
            com.mbridge.msdk.videocommon.a.a r8 = com.mbridge.msdk.videocommon.a.a.a()
            java.lang.String r1 = r7.k
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r7.H
            r8.a(r1, r3, r0, r2)
            return r2
        Le5:
            r8 = 0
            return r8
    }
}
