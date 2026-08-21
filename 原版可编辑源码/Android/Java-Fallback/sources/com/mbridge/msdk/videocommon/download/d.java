package com.mbridge.msdk.videocommon.download;

public final class d {
    com.mbridge.msdk.c.d a;
    com.mbridge.msdk.c.d b;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c;
    private boolean d;
    private com.mbridge.msdk.videocommon.listener.a e;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> f;
    private com.mbridge.msdk.videocommon.download.c g;
    private java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> h;
    private android.content.Context i;
    private java.util.concurrent.ExecutorService j;
    private long k;
    private java.lang.String l;
    private com.mbridge.msdk.videocommon.d.c m;
    private int n;
    private int o;



    public d(android.content.Context r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, java.util.concurrent.ExecutorService r5, java.lang.String r6, int r7) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.c = r3
            r3 = 1
            r2.d = r3
            com.mbridge.msdk.videocommon.download.d$1 r0 = new com.mbridge.msdk.videocommon.download.d$1
            r0.<init>(r2)
            r2.g = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.h = r0
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.k = r0
            r2.n = r3
            r2.o = r3
            r3 = 0
            r2.a = r3
            r2.b = r3
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            r2.i = r3
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r2.c
            if (r3 == 0) goto L3b
            if (r4 == 0) goto L3b
            r3.add(r4)
        L3b:
            r2.j = r5
            r2.l = r6
            r2.o = r7
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r2.c
            r2.b(r3)
            return
    }

    public d(android.content.Context r3, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4, java.util.concurrent.ExecutorService r5, java.lang.String r6, int r7) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.c = r3
            r3 = 1
            r2.d = r3
            com.mbridge.msdk.videocommon.download.d$1 r0 = new com.mbridge.msdk.videocommon.download.d$1
            r0.<init>(r2)
            r2.g = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.h = r0
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.k = r0
            r2.n = r3
            r2.o = r3
            r3 = 0
            r2.a = r3
            r2.b = r3
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            r2.i = r3
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r2.c
            if (r3 == 0) goto L3b
            if (r4 == 0) goto L3b
            r3.addAll(r4)
        L3b:
            r2.j = r5
            r2.l = r6
            r2.o = r7
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r2.c
            r2.b(r3)
            return
    }

    static com.mbridge.msdk.videocommon.listener.a a(com.mbridge.msdk.videocommon.download.d r0) {
            com.mbridge.msdk.videocommon.listener.a r0 = r0.e
            return r0
    }

    private boolean a(int r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6) {
            r3 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "check template "
            r4.append(r0)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "UnitCacheCtroller"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            boolean r4 = r5.isDynamicView()
            r1 = 1
            if (r4 == 0) goto L1e
            return r1
        L1e:
            java.util.ArrayList r4 = r5.getRsIgnoreCheckRule()
            if (r4 == 0) goto L42
            java.util.ArrayList r4 = r5.getRsIgnoreCheckRule()
            int r4 = r4.size()
            if (r4 <= 0) goto L42
            java.util.ArrayList r4 = r5.getRsIgnoreCheckRule()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r4 = r4.contains(r2)
            if (r4 == 0) goto L42
            java.lang.String r4 = "Is not check template download status"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)
            return r1
        L42:
            boolean r4 = android.text.TextUtils.isEmpty(r6)
            if (r4 != 0) goto L76
            int r4 = r5.getLoadTimeoutState()
            if (r4 != 0) goto L76
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "check template 下载情况："
            r4.append(r5)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r5 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r5 = r5.getH5ResAddress(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r4 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r4 = r4.getH5ResAddress(r6)
            if (r4 != 0) goto L76
            r4 = 0
            return r4
        L76:
            return r1
    }

    public static boolean a(com.mbridge.msdk.videocommon.download.a r8, int r9) {
            long r0 = r8.h()
            long r2 = r8.e()
            java.lang.String r4 = r8.a()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r5 = 1
            if (r4 == 0) goto L1b
            java.lang.String r8 = "UnitCacheCtroller"
            java.lang.String r9 = "checkVideoDownload video done return true"
            com.mbridge.msdk.foundation.tools.z.a(r8, r9)
            return r5
        L1b:
            r4 = 0
            if (r9 != 0) goto L33
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.g()
            if (r9 == 0) goto L53
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.g()
            java.lang.String r8 = r8.getVideoUrlEncode()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L53
            return r5
        L33:
            r6 = 0
            int r6 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r6 <= 0) goto L53
            r6 = 100
            long r0 = r0 * r6
            long r6 = (long) r9
            long r2 = r2 * r6
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L53
            r0 = 100
            if (r9 != r0) goto L52
            int r9 = r8.f()
            r0 = 5
            if (r9 != r0) goto L4e
            return r5
        L4e:
            r8.m()
            return r4
        L52:
            return r5
        L53:
            return r4
    }

    private static boolean a(com.mbridge.msdk.videocommon.download.a r9, int r10, boolean r11) {
            long r0 = r9.h()
            long r2 = r9.e()
            java.lang.String r4 = r9.a()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r5 = "UnitCacheCtroller"
            r6 = 1
            if (r4 == 0) goto L1b
            java.lang.String r9 = "checkVideoDownload video done return true"
            com.mbridge.msdk.foundation.tools.z.a(r5, r9)
            return r6
        L1b:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r9.g()
            if (r4 == 0) goto L74
            java.util.ArrayList r7 = r4.getRsIgnoreCheckRule()
            if (r7 == 0) goto L46
            java.util.ArrayList r7 = r4.getRsIgnoreCheckRule()
            int r7 = r7.size()
            if (r7 <= 0) goto L46
            java.util.ArrayList r7 = r4.getRsIgnoreCheckRule()
            r8 = 0
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            boolean r7 = r7.contains(r8)
            if (r7 == 0) goto L46
            java.lang.String r9 = "Is not check video download status"
            com.mbridge.msdk.foundation.tools.z.b(r5, r9)
            return r6
        L46:
            int r5 = r4.getIsTimeoutCheckVideoStatus()
            if (r5 != r6) goto L53
            int r5 = r4.getVideoCheckType()
            if (r5 != r6) goto L53
            return r6
        L53:
            if (r11 == 0) goto L74
            int r11 = r4.getVideoCheckType()
            if (r11 != r6) goto L74
            if (r10 != 0) goto L5e
            return r6
        L5e:
            r7 = 0
            int r11 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r11 != 0) goto L68
            int r11 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r11 == 0) goto L74
        L68:
            int r11 = r10 / 100
            long r7 = (long) r11
            long r7 = r7 * r2
            int r11 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r11 < 0) goto L74
            r4.setIsTimeoutCheckVideoStatus(r6)
            return r6
        L74:
            boolean r9 = a(r9, r10)
            return r9
    }

    static boolean a(com.mbridge.msdk.videocommon.download.d r0, boolean r1) {
            r0.d = r1
            return r1
    }

    private boolean a(java.lang.String r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            r4 = this;
            java.lang.String r0 = "UnitCacheCtroller"
            java.util.ArrayList r1 = r6.getRsIgnoreCheckRule()     // Catch: java.lang.Throwable -> L5c
            r2 = 1
            if (r1 == 0) goto L37
            java.util.ArrayList r1 = r6.getRsIgnoreCheckRule()     // Catch: java.lang.Throwable -> L5c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L5c
            if (r1 <= 0) goto L37
            java.util.ArrayList r1 = r6.getRsIgnoreCheckRule()     // Catch: java.lang.Throwable -> L5c
            r3 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L5c
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L37
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r6.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "Is not check endCard download status : "
            r6.append(r1)     // Catch: java.lang.Throwable -> L5c
            r6.append(r5)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L5c
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L5c
            return r2
        L37:
            boolean r1 = r6.isDynamicView()     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L44
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.j(r5)     // Catch: java.lang.Throwable -> L5c
            if (r1 != 0) goto L44
            return r2
        L44:
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.a(r5)     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L50
            java.lang.String r5 = "checkEndcardDownload endcardUrl is null return true"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L5c
            return r2
        L50:
            boolean r5 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L64
            java.lang.String r5 = "checkEndcardDownload endcardUrl done return true"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L5c
            return r2
        L5c:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r6, r5)
        L64:
            java.lang.String r5 = "checkEndcardDownload endcardUrl return false"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)
            r5 = 0
            return r5
    }

    private boolean a(java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r4) {
            r3 = this;
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L35
        L4:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L3d
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L35
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L13
            goto L4
        L13:
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L35
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L35
        L1b:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L4
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L35
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L35
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.videocommon.download.a r1 = (com.mbridge.msdk.videocommon.download.a) r1     // Catch: java.lang.Throwable -> L35
            int r1 = r1.f()     // Catch: java.lang.Throwable -> L35
            r2 = 1
            if (r1 != r2) goto L1b
            return r2
        L35:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L3d
            r4.printStackTrace()
        L3d:
            r4 = 0
            return r4
    }

    private int b(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            r0 = -1
            if (r4 == 0) goto L3c
            int r1 = r4.getReady_rate()
            java.lang.String r2 = "UnitCacheCtroller"
            if (r1 == r0) goto L24
            int r0 = r4.getReady_rate()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "ready_rate(campaign): "
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r4)
            goto L3c
        L24:
            int r0 = r3.e(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "ready_rate(reward_unit_setting): "
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r4)
        L3c:
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap b(com.mbridge.msdk.videocommon.download.d r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r0 = r0.f
            return r0
    }

    private void b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13) {
            r12 = this;
            if (r13 == 0) goto L211
            int r0 = r13.size()
            if (r0 != 0) goto La
            goto L211
        La:
            r12.e()
            r12.d()
            int r0 = r12.o
            r1 = 94
            r2 = 287(0x11f, float:4.02E-43)
            r3 = 1
            if (r0 == r3) goto Lee
            if (r0 == r2) goto L9f
            r4 = 298(0x12a, float:4.18E-43)
            if (r0 == r4) goto L61
            if (r0 == r1) goto L9f
            r4 = 95
            if (r0 == r4) goto L27
            goto L128
        L27:
            java.lang.String r0 = r12.l     // Catch: java.lang.Exception -> L59
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L59
            if (r0 != 0) goto L128
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L59
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> L59
            java.lang.String r5 = r12.l     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.c.d r0 = r0.e(r4, r5)     // Catch: java.lang.Exception -> L59
            if (r0 != 0) goto L49
            java.lang.String r0 = r12.l     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.e(r0)     // Catch: java.lang.Exception -> L59
        L49:
            if (r0 == 0) goto L128
            long r4 = r0.i()     // Catch: java.lang.Exception -> L59
            r12.k = r4     // Catch: java.lang.Exception -> L59
            int r0 = r0.k()     // Catch: java.lang.Exception -> L59
            r12.n = r0     // Catch: java.lang.Exception -> L59
            goto L128
        L59:
            java.lang.String r13 = "UnitCacheCtroller"
            java.lang.String r0 = "make sure your had put feeds jar into your project"
            com.mbridge.msdk.foundation.tools.z.d(r13, r0)
            return
        L61:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            java.lang.String r5 = r12.l
            com.mbridge.msdk.c.d r0 = r0.f(r4, r5)
            r12.b = r0
            if (r0 != 0) goto L8b
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            java.lang.String r5 = r12.l
            com.mbridge.msdk.c.d r0 = r0.d(r4, r5)
            r12.b = r0
        L8b:
            com.mbridge.msdk.c.d r0 = r12.b
            if (r0 == 0) goto L128
            long r4 = r0.i()
            r12.k = r4
            com.mbridge.msdk.c.d r0 = r12.b
            int r0 = r0.k()
            r12.n = r0
            goto L128
        L9f:
            java.lang.String r0 = "com.mbridge.msdk.videocommon.d.a"
            java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> Le6
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> Le6
            com.mbridge.msdk.videocommon.d.a r0 = r0.b()     // Catch: java.lang.Exception -> Le6
            if (r0 != 0) goto Lb5
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> Le6
            r4.c()     // Catch: java.lang.Exception -> Le6
        Lb5:
            if (r0 == 0) goto Lbd
            long r4 = r0.f()     // Catch: java.lang.Exception -> Le6
            r12.k = r4     // Catch: java.lang.Exception -> Le6
        Lbd:
            java.lang.String r0 = r12.l     // Catch: java.lang.Exception -> Le6
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Le6
            if (r0 != 0) goto Ld9
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> Le6
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le6
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> Le6
            java.lang.String r5 = r12.l     // Catch: java.lang.Exception -> Le6
            com.mbridge.msdk.videocommon.d.c r0 = r0.a(r4, r5)     // Catch: java.lang.Exception -> Le6
            r12.m = r0     // Catch: java.lang.Exception -> Le6
        Ld9:
            com.mbridge.msdk.videocommon.d.c r0 = r12.m     // Catch: java.lang.Exception -> Le6
            if (r0 == 0) goto L128
            com.mbridge.msdk.videocommon.d.c r0 = r12.m     // Catch: java.lang.Exception -> Le6
            int r0 = r0.w()     // Catch: java.lang.Exception -> Le6
            r12.n = r0     // Catch: java.lang.Exception -> Le6
            goto L128
        Le6:
            java.lang.String r13 = "UnitCacheCtroller"
            java.lang.String r0 = "make sure your had put reward jar into your project"
            com.mbridge.msdk.foundation.tools.z.d(r13, r0)
            return
        Lee:
            java.lang.String r0 = r12.l     // Catch: java.lang.Exception -> L20a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L20a
            if (r0 != 0) goto L128
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L20a
            java.lang.String r4 = r4.k()     // Catch: java.lang.Exception -> L20a
            java.lang.String r5 = r12.l     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.c.d r0 = r0.e(r4, r5)     // Catch: java.lang.Exception -> L20a
            r12.a = r0     // Catch: java.lang.Exception -> L20a
            if (r0 != 0) goto L114
            java.lang.String r0 = r12.l     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r0)     // Catch: java.lang.Exception -> L20a
            r12.a = r0     // Catch: java.lang.Exception -> L20a
        L114:
            com.mbridge.msdk.c.d r0 = r12.a     // Catch: java.lang.Exception -> L20a
            if (r0 == 0) goto L128
            com.mbridge.msdk.c.d r0 = r12.a     // Catch: java.lang.Exception -> L20a
            long r4 = r0.i()     // Catch: java.lang.Exception -> L20a
            r12.k = r4     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.c.d r0 = r12.a     // Catch: java.lang.Exception -> L20a
            int r0 = r0.k()     // Catch: java.lang.Exception -> L20a
            r12.n = r0     // Catch: java.lang.Exception -> L20a
        L128:
            r0 = 0
            r4 = r0
        L12a:
            int r5 = r13.size()
            if (r4 >= r5) goto L1fa
            java.lang.Object r5 = r13.get(r4)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5
            if (r5 == 0) goto L1f6
            int r6 = r12.o
            if (r6 == r1) goto L15e
            if (r6 != r2) goto L13f
            goto L15e
        L13f:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r5.getId()
            r6.append(r7)
            java.lang.String r7 = r5.getVideoUrlEncode()
            r6.append(r7)
            java.lang.String r7 = r5.getBidToken()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            goto L17c
        L15e:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r5.getRequestId()
            r6.append(r7)
            java.lang.String r7 = r5.getId()
            r6.append(r7)
            java.lang.String r7 = r5.getVideoUrlEncode()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
        L17c:
            boolean r7 = r12.c(r5)
            if (r7 != 0) goto L18d
            java.lang.String r7 = r5.getVideoUrlEncode()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L18d
            goto L1f6
        L18d:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r7 = r12.h
            if (r7 == 0) goto L1f6
            monitor-enter(r7)
            r8 = r0
        L193:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r9 = r12.h     // Catch: java.lang.Throwable -> L1f1
            int r9 = r9.size()     // Catch: java.lang.Throwable -> L1f1
            if (r8 >= r9) goto L1cc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r9 = r12.h     // Catch: java.lang.Throwable -> L1f1
            java.lang.Object r9 = r9.get(r8)     // Catch: java.lang.Throwable -> L1f1
            java.util.Map r9 = (java.util.Map) r9     // Catch: java.lang.Throwable -> L1f1
            if (r9 == 0) goto L1c9
            boolean r10 = r9.containsKey(r6)     // Catch: java.lang.Throwable -> L1f1
            if (r10 == 0) goto L1c9
            java.lang.Object r10 = r9.get(r6)     // Catch: java.lang.Throwable -> L1f1
            com.mbridge.msdk.videocommon.download.a r10 = (com.mbridge.msdk.videocommon.download.a) r10     // Catch: java.lang.Throwable -> L1f1
            r10.a(r5)     // Catch: java.lang.Throwable -> L1f1
            int r11 = r12.n     // Catch: java.lang.Throwable -> L1f1
            r10.a(r11)     // Catch: java.lang.Throwable -> L1f1
            r10.a(r0)     // Catch: java.lang.Throwable -> L1f1
            r9.remove(r6)     // Catch: java.lang.Throwable -> L1f1
            r9.put(r6, r10)     // Catch: java.lang.Throwable -> L1f1
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r10 = r12.h     // Catch: java.lang.Throwable -> L1f1
            r10.set(r8, r9)     // Catch: java.lang.Throwable -> L1f1
            r8 = r3
            goto L1cd
        L1c9:
            int r8 = r8 + 1
            goto L193
        L1cc:
            r8 = r0
        L1cd:
            if (r8 != 0) goto L1f1
            com.mbridge.msdk.videocommon.download.a r8 = new com.mbridge.msdk.videocommon.download.a     // Catch: java.lang.Throwable -> L1f1
            android.content.Context r9 = r12.i     // Catch: java.lang.Throwable -> L1f1
            java.lang.String r10 = r12.l     // Catch: java.lang.Throwable -> L1f1
            int r11 = r12.n     // Catch: java.lang.Throwable -> L1f1
            r8.<init>(r9, r5, r10, r11)     // Catch: java.lang.Throwable -> L1f1
            int r5 = r12.n     // Catch: java.lang.Throwable -> L1f1
            r8.a(r5)     // Catch: java.lang.Throwable -> L1f1
            int r5 = r12.o     // Catch: java.lang.Throwable -> L1f1
            r8.d(r5)     // Catch: java.lang.Throwable -> L1f1
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1f1
            r5.<init>()     // Catch: java.lang.Throwable -> L1f1
            r5.put(r6, r8)     // Catch: java.lang.Throwable -> L1f1
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r6 = r12.h     // Catch: java.lang.Throwable -> L1f1
            r6.add(r5)     // Catch: java.lang.Throwable -> L1f1
        L1f1:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L1f3
            goto L1f6
        L1f3:
            r13 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L1f3
            throw r13
        L1f6:
            int r4 = r4 + 1
            goto L12a
        L1fa:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13 = r12.c
            if (r13 == 0) goto L209
            int r13 = r13.size()
            if (r13 <= 0) goto L209
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13 = r12.c
            r13.clear()
        L209:
            return
        L20a:
            java.lang.String r13 = "UnitCacheCtroller"
            java.lang.String r0 = "make sure your had put feeds jar into your project"
            com.mbridge.msdk.foundation.tools.z.d(r13, r0)
        L211:
            return
    }

    private boolean b(java.lang.String r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r3 = this;
            boolean r0 = r5.isMraid()
            java.lang.String r1 = "UnitCacheCtroller"
            r2 = 1
            if (r0 != 0) goto Lae
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L11
            goto Lae
        L11:
            int r0 = r5.getLoadTimeoutState()
            if (r0 != r2) goto L1e
            boolean r0 = r3.c(r5)
            if (r0 != 0) goto L1e
            return r2
        L1e:
            java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()
            if (r0 == 0) goto L52
            java.util.ArrayList r0 = r5.getRsIgnoreCheckRule()
            int r0 = r0.size()
            if (r0 <= 0) goto L52
            java.util.ArrayList r5 = r5.getRsIgnoreCheckRule()
            r0 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            boolean r5 = r5.contains(r0)
            if (r5 == 0) goto L52
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Is not check endCard download status : "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
            return r2
        L52:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r5 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r5 = r5.getH5ResAddress(r4)
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.b(r5)
            if (r5 == 0) goto L75
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endcard zip 下载完成 return true endcardUrl:"
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
            return r2
        L75:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r5 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()
            java.lang.String r5 = r5.getHtmlContentFromUrl(r4)
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.b(r5)
            if (r5 == 0) goto L98
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endcard url 源码 下载完成 return true endcardUrl:"
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
            return r2
        L98:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "checkEndcardZipOrSourceDownLoad endcardUrl return false endcardUrl:"
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
            r4 = 0
            return r4
        Lae:
            java.lang.String r4 = "Campaign is Mraid, do not need download endcardurl or Campaign load timeout"
            com.mbridge.msdk.foundation.tools.z.b(r1, r4)
            return r2
    }

    private boolean c(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
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

    private int d(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            r2 = 100
            com.mbridge.msdk.c.d r0 = r1.a     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto Lc
            com.mbridge.msdk.c.d r0 = r1.a     // Catch: java.lang.Exception -> Lc
            int r2 = r0.f()     // Catch: java.lang.Exception -> Lc
        Lc:
            return r2
    }

    private void d() {
            r14 = this;
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()
            r1 = 1
            java.lang.String r2 = "u_n_c_e_d"
            boolean r0 = r0.a(r2, r1)
            if (r0 == 0) goto Le
            return
        Le:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r14.h
            if (r0 != 0) goto L13
            return
        L13:
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L95
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L92
            r4 = 0
        L19:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r5 = r14.h     // Catch: java.lang.Throwable -> L92
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L92
            if (r4 >= r5) goto L90
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r5 = r14.h     // Catch: java.lang.Throwable -> L92
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L92
            java.util.Map r5 = (java.util.Map) r5     // Catch: java.lang.Throwable -> L92
            java.util.Set r6 = r5.entrySet()     // Catch: java.lang.Throwable -> L92
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L92
        L31:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L92
            if (r7 == 0) goto L8d
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L92
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7     // Catch: java.lang.Throwable -> L92
            java.lang.Object r7 = r7.getValue()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.videocommon.download.a r7 = (com.mbridge.msdk.videocommon.download.a) r7     // Catch: java.lang.Throwable -> L92
            if (r7 != 0) goto L46
            goto L31
        L46:
            long r8 = r7.c()     // Catch: java.lang.Throwable -> L92
            long r8 = r2 - r8
            long r10 = r14.k     // Catch: java.lang.Throwable -> L92
            r12 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r12
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 <= 0) goto L6f
            int r8 = r7.f()     // Catch: java.lang.Throwable -> L92
            if (r8 != r1) goto L6f
            java.lang.String r8 = "download timeout"
            r7.b(r8)     // Catch: java.lang.Throwable -> L92
            int r8 = r14.n     // Catch: java.lang.Throwable -> L92
            r7.a(r8)     // Catch: java.lang.Throwable -> L92
            r7.m()     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r8 = r14.h     // Catch: java.lang.Throwable -> L92
            r8.remove(r5)     // Catch: java.lang.Throwable -> L92
            int r4 = r4 + (-1)
        L6f:
            int r8 = r7.f()     // Catch: java.lang.Throwable -> L92
            if (r8 == r1) goto L31
            int r8 = r7.f()     // Catch: java.lang.Throwable -> L92
            r9 = 5
            if (r8 == r9) goto L31
            int r8 = r7.f()     // Catch: java.lang.Throwable -> L92
            if (r8 == 0) goto L31
            r7.m()     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r7 = r14.h     // Catch: java.lang.Throwable -> L92
            r7.remove(r5)     // Catch: java.lang.Throwable -> L92
            int r4 = r4 + (-1)
            goto L31
        L8d:
            int r4 = r4 + 1
            goto L19
        L90:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L92
            goto L99
        L92:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L92
            throw r1     // Catch: java.lang.Throwable -> L95
        L95:
            r0 = move-exception
            r0.printStackTrace()
        L99:
            return
    }

    private int e(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            int r0 = r4.getAdType()     // Catch: java.lang.Throwable -> L55
            r1 = 298(0x12a, float:4.18E-43)
            if (r0 != r1) goto L27
            com.mbridge.msdk.c.d r4 = r3.b     // Catch: java.lang.Throwable -> L55
            if (r4 != 0) goto L20
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = r3.l     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.c.d r4 = r4.c(r0, r1)     // Catch: java.lang.Throwable -> L55
            r3.b = r4     // Catch: java.lang.Throwable -> L55
        L20:
            com.mbridge.msdk.c.d r4 = r3.b     // Catch: java.lang.Throwable -> L55
            int r4 = r4.f()     // Catch: java.lang.Throwable -> L55
            return r4
        L27:
            int r4 = r4.getAdType()     // Catch: java.lang.Throwable -> L55
            r0 = 42
            if (r4 != r0) goto L35
            r4 = 0
            int r4 = r3.d(r4)     // Catch: java.lang.Throwable -> L55
            return r4
        L35:
            com.mbridge.msdk.videocommon.d.c r4 = r3.m     // Catch: java.lang.Throwable -> L55
            if (r4 != 0) goto L4e
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = r3.l     // Catch: java.lang.Throwable -> L55
            r2 = 0
            com.mbridge.msdk.videocommon.d.c r4 = r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L55
            r3.m = r4     // Catch: java.lang.Throwable -> L55
        L4e:
            com.mbridge.msdk.videocommon.d.c r4 = r3.m     // Catch: java.lang.Throwable -> L55
            int r4 = r4.r()     // Catch: java.lang.Throwable -> L55
            return r4
        L55:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            java.lang.String r1 = "UnitCacheCtroller"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r4)
            r4 = 100
            return r4
    }

    private void e() {
            r6 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r6.h
            if (r0 == 0) goto L59
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L52
            r1 = 0
        L6:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r6.h     // Catch: java.lang.Throwable -> L4f
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L4f
            if (r1 >= r2) goto L4d
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r6.h     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L4f
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L4f
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L4f
        L1e:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r4 == 0) goto L4a
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L4f
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L4f
            com.mbridge.msdk.videocommon.download.a r4 = (com.mbridge.msdk.videocommon.download.a) r4     // Catch: java.lang.Throwable -> L4f
            if (r4 == 0) goto L1e
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.g()     // Catch: java.lang.Throwable -> L4f
            if (r5 != 0) goto L39
            goto L1e
        L39:
            boolean r5 = r4.b()     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L1e
            r4.l()     // Catch: java.lang.Throwable -> L4f
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r4 = r6.h     // Catch: java.lang.Throwable -> L4f
            r4.remove(r2)     // Catch: java.lang.Throwable -> L4f
            int r1 = r1 + (-1)
            goto L1e
        L4a:
            int r1 = r1 + 1
            goto L6
        L4d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            goto L59
        L4f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r1     // Catch: java.lang.Throwable -> L52
        L52:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r1 = "cleanDisplayTask ERROR"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L59:
            return
    }

    public final com.mbridge.msdk.videocommon.download.a a(int r24, boolean r25) {
            r23 = this;
            r1 = r23
            r0 = r24
            r2 = r25
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "isReady unitID "
            r3.append(r4)
            java.lang.String r4 = r1.l
            r3.append(r4)
            java.lang.String r4 = " ad_type "
            r3.append(r4)
            int r4 = r1.o
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "UnitCacheCtroller"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r3 = r1.h
            r4 = 0
            if (r3 == 0) goto L399
            monitor-enter(r3)
            int r5 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r6 = 287(0x11f, float:4.02E-43)
            r7 = 94
            r8 = 1
            if (r5 == r7) goto L4a
            int r5 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r5 != r6) goto L3c
            goto L4a
        L3c:
            com.mbridge.msdk.videocommon.a.a r5 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r9 = r1.l     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.concurrent.CopyOnWriteArrayList r5 = r5.a(r9, r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r5 != 0) goto L88
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r4
        L4a:
            com.mbridge.msdk.videocommon.a.a r5 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r9 = r1.l     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.List r5 = r5.a(r9, r8, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r5 == 0) goto L5c
            int r9 = r5.size()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r9 != 0) goto L6c
        L5c:
            if (r0 == r7) goto L60
            if (r0 != r6) goto L6c
        L60:
            com.mbridge.msdk.videocommon.a.a r5 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r9 = r1.l     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r10 = ""
            java.util.List r5 = r5.c(r9, r8, r2, r10)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L6c:
            if (r5 == 0) goto L384
            java.lang.String r9 = "UnitCacheCtroller"
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r10.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = "UnitCache isReady ===== campaignList = "
            r10.append(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r11 = r5.size()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r10.append(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.a(r9, r10)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L88:
            long r9 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r12 = 0
        L8d:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r13 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r13 = r13.size()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r12 >= r13) goto L394
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r13 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.Object r13 = r13.get(r12)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.Map r13 = (java.util.Map) r13     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.Set r14 = r13.entrySet()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.Iterator r14 = r14.iterator()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        La5:
            boolean r15 = r14.hasNext()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r15 == 0) goto L378
            java.lang.Object r15 = r14.next()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.Map$Entry r15 = (java.util.Map.Entry) r15     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.Object r15 = r15.getValue()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.videocommon.download.a r15 = (com.mbridge.msdk.videocommon.download.a) r15     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r15 == 0) goto L366
            com.mbridge.msdk.foundation.entity.CampaignEx r16 = r15.g()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r16 != 0) goto Lc1
            goto L366
        Lc1:
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r15.g()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.Iterator r17 = r5.iterator()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r4 = 0
        Lca:
            boolean r18 = r17.hasNext()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r18 == 0) goto Le8
            java.lang.Object r18 = r17.next()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.entity.CampaignEx r18 = (com.mbridge.msdk.foundation.entity.CampaignEx) r18     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = r8.getId()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r6 = r18.getId()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r6 = r11.equals(r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 == 0) goto Le5
            r4 = 1
        Le5:
            r6 = 287(0x11f, float:4.02E-43)
            goto Lca
        Le8:
            if (r4 != 0) goto L105
            java.lang.String r6 = "UnitCacheCtroller"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r8.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = "UnitCache isReady ==== Campaign isAvailable = "
            r8.append(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r8.append(r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r4 = r8.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.b(r6, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L100:
            r2 = 1
        L101:
            r8 = 287(0x11f, float:4.02E-43)
            goto L36f
        L105:
            if (r2 == 0) goto L10d
            boolean r4 = r8.isBidCampaign()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r4 == 0) goto L115
        L10d:
            if (r2 != 0) goto L138
            boolean r4 = r8.isBidCampaign()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r4 == 0) goto L138
        L115:
            java.lang.String r4 = "UnitCacheCtroller"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r6.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = "UnitCache isReady ==== isBidCampaign = "
            r6.append(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r6.append(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = " campaign.isBidCampaign() = "
            r6.append(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r8 = r8.isBidCampaign()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r6.append(r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.b(r4, r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            goto L100
        L138:
            java.lang.String r4 = r8.getendcard_url()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r6 = r8.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = ""
            if (r8 == 0) goto L152
            com.mbridge.msdk.foundation.entity.CampaignEx$c r17 = r8.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r17 == 0) goto L152
            com.mbridge.msdk.foundation.entity.CampaignEx$c r11 = r8.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = r11.e()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L152:
            r8.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r2 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 == r7) goto L15d
            r2 = 287(0x11f, float:4.02E-43)
            if (r0 != r2) goto L1b5
        L15d:
            boolean r2 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != 0) goto L17b
            java.lang.String r2 = "cmpt=1"
            boolean r2 = r11.contains(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != 0) goto L17b
            int r2 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r2 = r1.a(r2, r8, r11)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != 0) goto L17b
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r4 = "UnitCache isReady ====  templateZipDownload check false continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            goto L100
        L17b:
            boolean r2 = r1.b(r4, r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 == 0) goto L1b5
            boolean r2 = r15.b()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 == 0) goto L193
            r15.l()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r4 = "isready endcard下载完 但是offer展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            goto L100
        L193:
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 == 0) goto L1a2
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "endcard为基准 endcard和图片下载完成 videourl为空不用下载 return task"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L1a2:
            int r2 = r1.b(r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r2 = a(r15, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 == 0) goto L1b5
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "endcard为基准 endcard 图片 和 videourl 下载完成 return task"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L1b5:
            java.lang.String r2 = r15.k()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r6 = r15.f()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = "UnitCacheCtroller"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r0 = "isready unit state:"
            r7.append(r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7.append(r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.a(r11, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r0 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7 = 298(0x12a, float:4.18E-43)
            if (r0 != r7) goto L1e9
            int r0 = r1.b(r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r0 = a(r15, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r0 == 0) goto L1e9
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L1e9:
            r0 = 5
            r7 = 95
            if (r6 != r0) goto L262
            boolean r0 = r15.b()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r0 == 0) goto L211
            r15.l()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r0.remove(r13)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r12 = r12 + (-1)
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready state == DownLoadConstant.DOWNLOAD_DONE 但是offer展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L205:
            r0 = r24
            r2 = r25
            r4 = 0
            r6 = 287(0x11f, float:4.02E-43)
            r7 = 94
            r8 = 1
            goto La5
        L211:
            if (r2 != 0) goto L249
            r0 = 0
            r15.a(r0, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r4 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r4 != r7) goto L23d
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r4.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r5 = "isready ==========done but isEffectivePath:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r4.append(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r2 = " is feed"
            r4.append(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r2 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r4.append(r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L23d:
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r4 = "isready !isEffectivePath continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2 = 1
            r7 = 94
            goto L101
        L249:
            boolean r0 = r1.a(r4, r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r0 == 0) goto L258
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready videourl为基准 state＝done endcard 图片 和 videourl 下载完成 return task"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L258:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready done but continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            r2 = 0
            return r2
        L262:
            r0 = 0
            com.mbridge.msdk.foundation.tools.ab r2 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r11 = "u_n_c_e_d"
            r0 = 1
            boolean r2 = r2.a(r11, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != 0) goto L2aa
            long r19 = r15.c()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r2 = r15.f()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != r0) goto L2aa
            long r19 = r9 - r19
            r0 = r8
            long r7 = r1.k     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r21 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r21
            int r7 = (r19 > r7 ? 1 : (r19 == r7 ? 0 : -1))
            if (r7 <= 0) goto L2ab
            java.lang.String r7 = "download timeout"
            r15.b(r7)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r15.m()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r7 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7.remove(r13)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r12 = r12 + (-1)
            int r7 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r8 = 1
            if (r7 == r8) goto L2a1
            int r7 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r8 = 94
            if (r7 != r8) goto L2ab
        L2a1:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready download !timeout continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            goto L205
        L2aa:
            r0 = r8
        L2ab:
            int r7 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2 = 95
            if (r7 != r2) goto L2dd
            boolean r0 = r15.b()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r0 == 0) goto L2c3
            r15.l()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r0.remove(r13)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r12 = r12 + (-1)
            goto L205
        L2c3:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r4 = "==========isready ad_type is :"
            r2.append(r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r4 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2.append(r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L2dd:
            com.mbridge.msdk.foundation.tools.ab r2 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r7 = "u_n_c_e_d"
            r8 = 1
            boolean r2 = r2.a(r7, r8)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r2 != 0) goto L303
            r2 = 4
            if (r6 == r2) goto L2f0
            r2 = 2
            if (r6 != r2) goto L303
        L2f0:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r0.remove(r13)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r15.m()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            int r12 = r12 + (-1)
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready stop continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            goto L205
        L303:
            r2 = 1
            if (r6 != r2) goto L345
            boolean r6 = r15.b()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 == 0) goto L317
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r4 = "isready run 已经被展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7 = 94
            goto L101
        L317:
            boolean r6 = com.mbridge.msdk.MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 != 0) goto L345
            int r6 = r1.b(r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r6 = a(r15, r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 == 0) goto L345
            boolean r6 = r1.a(r4, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 == 0) goto L345
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2.<init>()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r4 = "isready  IS_DOWANLOAD_FINSH_PLAY is :"
            r2.append(r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r4 = com.mbridge.msdk.MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r2.append(r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L345:
            int r6 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r7 = 94
            if (r6 == r7) goto L352
            int r6 = r1.o     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            r8 = 287(0x11f, float:4.02E-43)
            if (r6 != r8) goto L36f
            goto L354
        L352:
            r8 = 287(0x11f, float:4.02E-43)
        L354:
            int r6 = r1.b(r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            boolean r6 = a(r15, r6)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r6 == 0) goto L36f
            boolean r0 = r1.a(r4, r0)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            if (r0 == 0) goto L36f
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            return r15
        L366:
            r2 = r8
            r8 = r6
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r4 = "UnitCache isReady ==== task 或者 campaign为空 continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
        L36f:
            r0 = r24
            r6 = r8
            r4 = 0
            r8 = r2
            r2 = r25
            goto La5
        L378:
            r2 = r8
            r8 = r6
            int r12 = r12 + 1
            r0 = r24
            r4 = 0
            r8 = r2
            r2 = r25
            goto L8d
        L384:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "UnitCache isReady ===== campaignList = 0"
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> L38e java.lang.Exception -> L390
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            r2 = 0
            return r2
        L38e:
            r0 = move-exception
            goto L397
        L390:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L38e
        L394:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            r2 = 0
            goto L39a
        L397:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L38e
            throw r0
        L399:
            r2 = r4
        L39a:
            return r2
    }

    public final com.mbridge.msdk.videocommon.download.a a(java.lang.String r5) {
            r4 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r4.h
            if (r0 == 0) goto L33
            monitor-enter(r0)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r4.h     // Catch: java.lang.Throwable -> L27
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L27
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L27
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L27
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L27
            if (r2 == 0) goto Lb
            boolean r3 = r2.containsKey(r5)     // Catch: java.lang.Throwable -> L27
            if (r3 == 0) goto Lb
            java.lang.Object r5 = r2.get(r5)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.videocommon.download.a r5 = (com.mbridge.msdk.videocommon.download.a) r5     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r5
        L27:
            java.lang.String r5 = "UnitCacheCtroller"
            java.lang.String r1 = "failed to get campaignTast by cid"
            com.mbridge.msdk.foundation.tools.z.d(r5, r1)     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            goto L33
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
        L33:
            r5 = 0
            return r5
    }

    public final java.util.List<com.mbridge.msdk.videocommon.download.a> a(java.lang.String r24, int r25, boolean r26, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r27, boolean r28) {
            r23 = this;
            r1 = r23
            r0 = r25
            r2 = r26
            r3 = r28
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r5 = r1.h
            if (r5 == 0) goto L2e4
            monitor-enter(r5)
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r9 = 0
        L17:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r10 = r1.h     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r10 = r10.size()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r9 >= r10) goto L2e0
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r10 = r1.h     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.Object r10 = r10.get(r9)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.Map r10 = (java.util.Map) r10     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.Set r11 = r10.entrySet()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.Iterator r11 = r11.iterator()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
        L2f:
            boolean r12 = r11.hasNext()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r12 == 0) goto L2d4
            java.lang.Object r12 = r11.next()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.Map$Entry r12 = (java.util.Map.Entry) r12     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.Object r12 = r12.getValue()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.videocommon.download.a r12 = (com.mbridge.msdk.videocommon.download.a) r12     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r12 == 0) goto L2c5
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.g()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r13 != 0) goto L4b
            goto L2c5
        L4b:
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r12.g()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.Iterator r14 = r27.iterator()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r15 = 0
        L54:
            boolean r16 = r14.hasNext()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r16 == 0) goto L9d
            java.lang.Object r16 = r14.next()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.entity.CampaignEx r16 = (com.mbridge.msdk.foundation.entity.CampaignEx) r16     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r13 == 0) goto L98
            if (r16 == 0) goto L98
            java.lang.String r17 = r13.getRequestId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r17 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r17 != 0) goto L98
            java.lang.String r17 = r16.getRequestId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r17 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r17 != 0) goto L98
            java.lang.String r8 = r13.getId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r18 = r11
            java.lang.String r11 = r16.getId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r8 = r8.equals(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r8 == 0) goto L9a
            java.lang.String r8 = r13.getRequestId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = r16.getRequestId()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r8 = r8.equals(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r8 == 0) goto L9a
            r15 = 1
            goto L9a
        L98:
            r18 = r11
        L9a:
            r11 = r18
            goto L54
        L9d:
            r18 = r11
            if (r15 != 0) goto Lb9
            java.lang.String r8 = "UnitCacheCtroller"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r11.<init>()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r12 = "UnitCache isReady ==== Campaign isAvailable = "
            r11.append(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r11.append(r15)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.tools.z.b(r8, r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        Lb9:
            if (r2 == 0) goto Lc1
            boolean r8 = r13.isBidCampaign()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r8 == 0) goto Lc9
        Lc1:
            if (r2 != 0) goto Led
            boolean r8 = r13.isBidCampaign()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r8 == 0) goto Led
        Lc9:
            java.lang.String r8 = "UnitCacheCtroller"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r11.<init>()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r12 = "UnitCache isReady ==== isBidCampaign = "
            r11.append(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r11.append(r2)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r12 = " campaign.isBidCampaign() = "
            r11.append(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r12 = r13.isBidCampaign()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r11.append(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.tools.z.b(r8, r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        Led:
            java.lang.String r8 = r13.getendcard_url()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = r13.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r14 = ""
            if (r13 == 0) goto L107
            com.mbridge.msdk.foundation.entity.CampaignEx$c r15 = r13.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r15 == 0) goto L107
            com.mbridge.msdk.foundation.entity.CampaignEx$c r14 = r13.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r14 = r14.e()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
        L107:
            r13.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r15 = 287(0x11f, float:4.02E-43)
            r2 = 94
            if (r0 == r2) goto L112
            if (r0 != r15) goto L16f
        L112:
            boolean r16 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r16 != 0) goto L12f
            java.lang.String r15 = "cmpt=1"
            boolean r15 = r14.contains(r15)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r15 != 0) goto L12f
            boolean r14 = r1.a(r0, r13, r14)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r14 != 0) goto L12f
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r8 = "UnitCache isReady ====  templateZipDownload check false continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L12f:
            boolean r14 = r1.b(r8, r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r14 == 0) goto L16f
            boolean r14 = r12.b()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r14 == 0) goto L147
            r12.l()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r8 = "isready endcard下载完 但是offer展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L147:
            boolean r11 = com.mbridge.msdk.foundation.tools.ai.a(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r11 == 0) goto L159
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r8 = "endcard为基准 endcard和图片下载完成 videourl为空不用下载 return task"
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L159:
            int r11 = r1.b(r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r11 = a(r12, r11, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r11 == 0) goto L16f
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r8 = "endcard为基准 endcard 图片 和 videourl 下载完成 return task"
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L16f:
            java.lang.String r11 = r12.k()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r14 = r12.f()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r15 = "UnitCacheCtroller"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2.<init>()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r3 = "isready unit state:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2.append(r14)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.tools.z.a(r15, r2)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2 = 5
            if (r14 != r2) goto L204
            boolean r2 = r12.b()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L1b1
            r12.l()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r1.h     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2.remove(r10)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r9 = r9 + (-1)
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r3 = "isready state == DownLoadConstant.DOWNLOAD_DONE 但是offer展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
        L1ab:
            r2 = r26
            r3 = r28
            goto L2d0
        L1b1:
            if (r11 != 0) goto L1e8
            r2 = 0
            r12.a(r2, r2)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r3 = 95
            if (r0 != r3) goto L1dd
            java.lang.String r3 = "UnitCacheCtroller"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r8.<init>()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r13 = "isready ==========done but isEffectivePath:"
            r8.append(r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r8.append(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = " is feed"
            r8.append(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r8.append(r0)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.tools.z.b(r3, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L1e4
        L1dd:
            java.lang.String r3 = "UnitCacheCtroller"
            java.lang.String r8 = "isready !isEffectivePath continue"
            com.mbridge.msdk.foundation.tools.z.b(r3, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
        L1e4:
            r3 = r28
            goto L2ce
        L1e8:
            r2 = 0
            boolean r3 = r1.a(r8, r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r3 == 0) goto L1fa
            java.lang.String r3 = "UnitCacheCtroller"
            java.lang.String r8 = "isready videourl为基准 state＝done endcard 图片 和 videourl 下载完成 return task"
            com.mbridge.msdk.foundation.tools.z.b(r3, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L1e4
        L1fa:
            java.lang.String r0 = "UnitCacheCtroller"
            java.lang.String r2 = "isready done but continue"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r0 = 0
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L2da
            return r0
        L204:
            r2 = 0
            com.mbridge.msdk.foundation.tools.ab r3 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = "u_n_c_e_d"
            r15 = 1
            boolean r3 = r3.a(r11, r15)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r3 != 0) goto L263
            long r19 = r12.c()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r3 = r12.f()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r3 != r15) goto L247
            long r19 = r6 - r19
            long r2 = r1.k     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r21 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r21
            int r2 = (r19 > r2 ? 1 : (r19 == r2 ? 0 : -1))
            if (r2 <= 0) goto L247
            java.lang.String r2 = "download timeout"
            r12.b(r2)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r12.m()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r1.h     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2.remove(r10)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r9 = r9 + (-1)
            r2 = 1
            if (r0 == r2) goto L23e
            r2 = 94
            if (r0 != r2) goto L247
        L23e:
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r3 = "isready download !timeout continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L1ab
        L247:
            r2 = 4
            if (r14 == r2) goto L250
            r2 = 2
            if (r14 != r2) goto L24e
            goto L250
        L24e:
            r2 = 1
            goto L264
        L250:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r1.h     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r2.remove(r10)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r12.m()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            int r9 = r9 + (-1)
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r3 = "isready stop continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L1ab
        L263:
            r2 = r15
        L264:
            if (r14 != r2) goto L2a7
            boolean r2 = r12.b()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L275
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r3 = "isready run 已经被展示过 continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L1e4
        L275:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 != 0) goto L2a7
            int r2 = r1.b(r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r3 = r28
            boolean r2 = a(r12, r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L2a9
            boolean r2 = r1.a(r8, r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L2a9
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r8.<init>()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r11 = "isready  IS_DOWANLOAD_FINSH_PLAY is :"
            r8.append(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r11 = com.mbridge.msdk.MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r8.append(r11)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L2a7:
            r3 = r28
        L2a9:
            r2 = 94
            if (r0 == r2) goto L2b1
            r2 = 287(0x11f, float:4.02E-43)
            if (r0 != r2) goto L2ce
        L2b1:
            int r2 = r1.b(r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            boolean r2 = a(r12, r2, r3)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L2ce
            boolean r2 = r1.a(r8, r13)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            if (r2 == 0) goto L2ce
            r4.add(r12)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
            goto L2ce
        L2c5:
            r18 = r11
            java.lang.String r2 = "UnitCacheCtroller"
            java.lang.String r8 = "UnitCache isReady ==== task 或者 campaign为空 continue"
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Throwable -> L2da java.lang.Exception -> L2dc
        L2ce:
            r2 = r26
        L2d0:
            r11 = r18
            goto L2f
        L2d4:
            int r9 = r9 + 1
            r2 = r26
            goto L17
        L2da:
            r0 = move-exception
            goto L2e2
        L2dc:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2da
        L2e0:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L2da
            goto L2e4
        L2e2:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L2da
            throw r0
        L2e4:
            return r4
    }

    public final void a() {
            r16 = this;
            r1 = r16
            r16.d()
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r2 = r1.h
            if (r2 == 0) goto L1f6
            monitor-enter(r2)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h     // Catch: java.lang.Throwable -> L1f3
            boolean r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L1f3
            r3 = 1
            if (r0 != 0) goto L15
            r1.d = r3     // Catch: java.lang.Throwable -> L1f3
        L15:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h     // Catch: java.lang.Throwable -> L1f3
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1f3
        L1b:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L1f3
            if (r4 == 0) goto L1f1
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L1f3
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L1f3
            if (r4 != 0) goto L2a
            goto L1b
        L2a:
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L1f3
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L1f3
        L32:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L1f3
            if (r5 == 0) goto L1b
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L1f3
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L1f3
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.videocommon.download.a r5 = (com.mbridge.msdk.videocommon.download.a) r5     // Catch: java.lang.Throwable -> L1f3
            if (r5 != 0) goto L47
            goto L32
        L47:
            boolean r6 = r5.b()     // Catch: java.lang.Throwable -> L1f3
            if (r6 == 0) goto L4e
            goto L32
        L4e:
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            r7 = 95
            if (r6 != r7) goto L56
            r1.d = r3     // Catch: java.lang.Throwable -> L1f3
        L56:
            int r6 = r5.f()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r5.g()     // Catch: java.lang.Throwable -> L1f3
            if (r8 == 0) goto L72
            if (r6 != 0) goto L72
            com.mbridge.msdk.videocommon.download.b r6 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r9 = r8.getId()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r10 = r8.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L1f3
            int r6 = r6.b(r9, r10)     // Catch: java.lang.Throwable -> L1f3
        L72:
            com.mbridge.msdk.videocommon.download.d$2 r9 = new com.mbridge.msdk.videocommon.download.d$2     // Catch: java.lang.Throwable -> L1f3
            r9.<init>(r1, r8)     // Catch: java.lang.Throwable -> L1f3
            r5.a(r9)     // Catch: java.lang.Throwable -> L1f3
            int r9 = r1.b(r8)     // Catch: java.lang.Throwable -> L1f3
            int r10 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r10 != r3) goto L92
            com.mbridge.msdk.c.d r9 = r1.a     // Catch: java.lang.Throwable -> L1f3
            if (r9 != 0) goto L8e
            java.lang.String r9 = r1.l     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.c.d r9 = com.mbridge.msdk.c.d.d(r9)     // Catch: java.lang.Throwable -> L1f3
            r1.a = r9     // Catch: java.lang.Throwable -> L1f3
        L8e:
            int r9 = r1.d(r8)     // Catch: java.lang.Throwable -> L1f3
        L92:
            r5.c(r9)     // Catch: java.lang.Throwable -> L1f3
            int r10 = r1.o     // Catch: java.lang.Throwable -> L1f3
            r11 = 94
            r12 = 298(0x12a, float:4.18E-43)
            r13 = 287(0x11f, float:4.02E-43)
            if (r10 == r11) goto Lf7
            int r10 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r10 == r13) goto Lf7
            int r10 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r10 != r7) goto La8
            goto Lf7
        La8:
            int r10 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r10 != r12) goto Lcf
            com.mbridge.msdk.c.d r10 = r1.b     // Catch: java.lang.Throwable -> L1f3
            if (r10 != 0) goto Lc4
            com.mbridge.msdk.c.b r10 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.foundation.controller.a r15 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r15 = r15.k()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r14 = r1.l     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.c.d r10 = r10.c(r15, r14)     // Catch: java.lang.Throwable -> L1f3
            r1.b = r10     // Catch: java.lang.Throwable -> L1f3
        Lc4:
            com.mbridge.msdk.c.d r10 = r1.b     // Catch: java.lang.Throwable -> L1f3
            if (r10 == 0) goto Lcf
            com.mbridge.msdk.c.d r10 = r1.b     // Catch: java.lang.Throwable -> L1f3
            int r10 = r10.g()     // Catch: java.lang.Throwable -> L1f3
            goto Ld0
        Lcf:
            r10 = 0
        Ld0:
            int r14 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r14 != r3) goto L122
            com.mbridge.msdk.c.d r14 = r1.a     // Catch: java.lang.Throwable -> L1f3
            if (r14 != 0) goto Lec
            com.mbridge.msdk.c.b r14 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.foundation.controller.a r15 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r15 = r15.k()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r7 = r1.l     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.c.d r7 = r14.c(r15, r7)     // Catch: java.lang.Throwable -> L1f3
            r1.a = r7     // Catch: java.lang.Throwable -> L1f3
        Lec:
            com.mbridge.msdk.c.d r7 = r1.a     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L122
            com.mbridge.msdk.c.d r7 = r1.a     // Catch: java.lang.Throwable -> L1f3
            int r10 = r7.g()     // Catch: java.lang.Throwable -> L1f3
            goto L122
        Lf7:
            com.mbridge.msdk.videocommon.d.c r7 = r1.m     // Catch: java.lang.Throwable -> L1f3
            if (r7 != 0) goto L116
            com.mbridge.msdk.videocommon.d.b r7 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r10 = r10.k()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r14 = r1.l     // Catch: java.lang.Throwable -> L1f3
            int r15 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r15 != r13) goto L10f
            r15 = r3
            goto L110
        L10f:
            r15 = 0
        L110:
            com.mbridge.msdk.videocommon.d.c r7 = r7.a(r10, r14, r15)     // Catch: java.lang.Throwable -> L1f3
            r1.m = r7     // Catch: java.lang.Throwable -> L1f3
        L116:
            com.mbridge.msdk.videocommon.d.c r7 = r1.m     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L121
            com.mbridge.msdk.videocommon.d.c r7 = r1.m     // Catch: java.lang.Throwable -> L1f3
            int r10 = r7.s()     // Catch: java.lang.Throwable -> L1f3
            goto L122
        L121:
            r10 = 0
        L122:
            r5.b(r10)     // Catch: java.lang.Throwable -> L1f3
            if (r8 == 0) goto L12c
            int r7 = r8.getVideoCtnType()     // Catch: java.lang.Throwable -> L1f3
            goto L12d
        L12c:
            r7 = r3
        L12d:
            r5.e(r7)     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r14 = "UnitCacheCtroller"
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f3
            r15.<init>()     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r13 = "ready_rate : "
            r15.append(r13)     // Catch: java.lang.Throwable -> L1f3
            r15.append(r9)     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r13 = " cd_rate : "
            r15.append(r13)     // Catch: java.lang.Throwable -> L1f3
            r15.append(r10)     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r10 = " videoCtnType : "
            r15.append(r10)     // Catch: java.lang.Throwable -> L1f3
            r15.append(r7)     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r7 = r15.toString()     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.foundation.tools.z.d(r14, r7)     // Catch: java.lang.Throwable -> L1f3
            int r7 = r1.b(r8)     // Catch: java.lang.Throwable -> L1f3
            boolean r7 = a(r5, r7)     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L19a
            com.mbridge.msdk.videocommon.listener.a r7 = r1.e     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L177
            int r7 = r1.o     // Catch: java.lang.Throwable -> L1f3
            r10 = 297(0x129, float:4.16E-43)
            if (r7 == r10) goto L16e
            int r7 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r7 != r12) goto L177
        L16e:
            com.mbridge.msdk.videocommon.listener.a r7 = r1.e     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r10 = r8.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L1f3
            r7.a(r10)     // Catch: java.lang.Throwable -> L1f3
        L177:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r7 = r1.f     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L19a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r7 = r1.f     // Catch: java.lang.Throwable -> L1f3
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L1f3
            if (r7 <= 0) goto L19a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r7 = r1.f     // Catch: java.lang.Throwable -> L1f3
            java.lang.String r10 = r8.getRequestId()     // Catch: java.lang.Throwable -> L1f3
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Throwable -> L1f3
            com.mbridge.msdk.videocommon.listener.a r7 = (com.mbridge.msdk.videocommon.listener.a) r7     // Catch: java.lang.Throwable -> L1f3
            if (r7 == 0) goto L19a
            if (r8 == 0) goto L19a
            java.lang.String r8 = r8.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L1f3
            r7.a(r8)     // Catch: java.lang.Throwable -> L1f3
        L19a:
            if (r6 == r3) goto L32
            r7 = 5
            if (r6 != r7) goto L1a5
            boolean r7 = a(r5, r9)     // Catch: java.lang.Throwable -> L1f3
            if (r7 != 0) goto L32
        L1a5:
            r7 = 4
            if (r6 == r7) goto L32
            android.content.Context r7 = r1.i     // Catch: java.lang.Throwable -> L1f3
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r7)     // Catch: java.lang.Throwable -> L1f3
            r8 = 9
            r10 = 2
            if (r7 == r8) goto L1b9
            int r7 = r1.n     // Catch: java.lang.Throwable -> L1f3
            if (r7 != r10) goto L1b9
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1f3
            return
        L1b9:
            if (r6 == r10) goto L1c1
            boolean r6 = r1.d     // Catch: java.lang.Throwable -> L1f3
            if (r6 != 0) goto L1c1
            goto L32
        L1c1:
            com.mbridge.msdk.videocommon.download.c r6 = r1.g     // Catch: java.lang.Throwable -> L1f3
            r5.a(r6)     // Catch: java.lang.Throwable -> L1f3
            boolean r6 = a(r5, r9)     // Catch: java.lang.Throwable -> L1f3
            if (r6 == 0) goto L1db
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r6 == r11) goto L1d6
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            r7 = 287(0x11f, float:4.02E-43)
            if (r6 != r7) goto L32
        L1d6:
            r5.i()     // Catch: java.lang.Throwable -> L1f3
            goto L32
        L1db:
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r6 == r3) goto L1e9
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            r7 = 95
            if (r6 == r7) goto L1e9
            int r6 = r1.o     // Catch: java.lang.Throwable -> L1f3
            if (r6 != r12) goto L1ec
        L1e9:
            r6 = 0
            r1.d = r6     // Catch: java.lang.Throwable -> L1f3
        L1ec:
            r5.i()     // Catch: java.lang.Throwable -> L1f3
            goto L32
        L1f1:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1f3
            goto L1f6
        L1f3:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1f3
            throw r0
        L1f6:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.add(r2)
        L9:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.c
            r1.b(r2)
            return
    }

    public final void a(com.mbridge.msdk.videocommon.listener.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(java.lang.String r2, com.mbridge.msdk.videocommon.listener.a r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r0 = r1.f
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.f = r0
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.listener.a> r0 = r1.f
            r0.put(r2, r3)
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.c
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.addAll(r2)
        L9:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r1.c
            r1.b(r2)
            return
    }

    public final com.mbridge.msdk.videocommon.download.a b(int r2, boolean r3) {
            r1 = this;
            com.mbridge.msdk.videocommon.download.a r2 = r1.a(r2, r3)     // Catch: java.lang.Throwable -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r0 = "UnitCacheCtroller"
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
            r2 = 0
            return r2
    }

    public final void b() {
            r7 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r7.h
            if (r0 == 0) goto L59
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L59
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r7.h     // Catch: java.lang.Throwable -> L56
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L56
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L54
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L56
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L1a
            goto Lb
        L1a:
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L56
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L56
        L22:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L56
            if (r4 == 0) goto Lb
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L56
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L56
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L56
            com.mbridge.msdk.videocommon.download.a r4 = (com.mbridge.msdk.videocommon.download.a) r4     // Catch: java.lang.Throwable -> L56
            if (r4 != 0) goto L37
            goto L22
        L37:
            int r5 = r4.f()     // Catch: java.lang.Throwable -> L56
            r6 = 1
            if (r5 != r6) goto L22
            java.lang.String r1 = "UnitCacheCtroller"
            java.lang.String r3 = "暂停所有下载"
            com.mbridge.msdk.foundation.tools.z.b(r1, r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "playing and stop download"
            r4.b(r1)     // Catch: java.lang.Throwable -> L56
            r4.m()     // Catch: java.lang.Throwable -> L56
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r7.h     // Catch: java.lang.Throwable -> L56
            r1.remove(r2)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L54:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            goto L59
        L56:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            throw r1     // Catch: java.lang.Throwable -> L59
        L59:
            return
    }

    public final void b(java.lang.String r6) {
            r5 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r5.h     // Catch: java.lang.Exception -> L56
            monitor-enter(r0)     // Catch: java.lang.Exception -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L53
            if (r1 != 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r5.h     // Catch: java.lang.Throwable -> L53
            if (r1 == 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r5.h     // Catch: java.lang.Throwable -> L53
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L53
            if (r1 <= 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r1 = r5.h     // Catch: java.lang.Throwable -> L53
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L53
        L1b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L51
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L53
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L1b
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L53
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L53
        L31:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L1b
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L53
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L31
            java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Throwable -> L53
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4     // Catch: java.lang.Throwable -> L53
            boolean r4 = android.text.TextUtils.equals(r4, r6)     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L31
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r4 = r5.h     // Catch: java.lang.Throwable -> L53
            r4.remove(r2)     // Catch: java.lang.Throwable -> L53
            goto L31
        L51:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            goto L56
        L53:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            throw r6     // Catch: java.lang.Exception -> L56
        L56:
            return
    }

    public final java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> c() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>> r0 = r1.h
            return r0
    }
}
