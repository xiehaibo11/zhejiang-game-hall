package com.mbridge.msdk.videocommon.download;

public class b {
    private static volatile com.mbridge.msdk.videocommon.download.b a;
    private java.util.concurrent.ThreadPoolExecutor b;
    private boolean c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> d;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>>> e;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> f;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> g;

    private b() {
            r9 = this;
            r9.<init>()
            r0 = 0
            r9.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r9.d = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r7 = new java.util.concurrent.LinkedBlockingDeque
            r7.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r8.<init>()
            r2 = 5
            r3 = 15
            r4 = 15
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.b = r0
            r1 = 1
            r0.allowCoreThreadTimeOut(r1)
            return
    }

    public static com.mbridge.msdk.videocommon.download.b getInstance() {
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.videocommon.download.b> r0 = com.mbridge.msdk.videocommon.download.b.class
            monitor-enter(r0)
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.videocommon.download.b r1 = new com.mbridge.msdk.videocommon.download.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.videocommon.download.b.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.a
            return r0
    }

    public final com.mbridge.msdk.videocommon.download.a a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.videocommon.download.d r1 = r0.c(r1)
            if (r1 == 0) goto Lb
            com.mbridge.msdk.videocommon.download.a r1 = r1.a(r2)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.f
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r0 = r1.f
            java.lang.Object r2 = r0.get(r2)
            java.util.concurrent.CopyOnWriteArrayList r2 = (java.util.concurrent.CopyOnWriteArrayList) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    public final void a() {
            r7 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r0 = r7.d
            if (r0 == 0) goto L88
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L88
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.mbridge.msdk.videocommon.download.d r2 = (com.mbridge.msdk.videocommon.download.d) r2
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r3 = 2
            java.lang.String r4 = "com.mbridge.msdk.videocommon.d.a"
            java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.videocommon.d.b r4 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = r5.k()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.videocommon.d.c r4 = r4.a(r5, r1)     // Catch: java.lang.Exception -> L4b
            if (r4 != 0) goto L3d
            goto Lc
        L3d:
            int r4 = r4.w()     // Catch: java.lang.Exception -> L4b
            if (r4 != r3) goto L47
            r2.b()     // Catch: java.lang.Exception -> L4b
            goto Lc
        L47:
            r2.a()     // Catch: java.lang.Exception -> L4b
            goto Lc
        L4b:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "DownLoadManager"
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L7f
            if (r4 != 0) goto Lc
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L7f
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L7f
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L7f
            com.mbridge.msdk.c.d r4 = r4.e(r6, r1)     // Catch: java.lang.Exception -> L7f
            if (r4 != 0) goto L71
            com.mbridge.msdk.c.d r4 = com.mbridge.msdk.c.d.e(r1)     // Catch: java.lang.Exception -> L7f
        L71:
            int r1 = r4.k()     // Catch: java.lang.Exception -> L7f
            if (r1 != r3) goto L7b
            r2.b()     // Catch: java.lang.Exception -> L7f
            goto Lc
        L7b:
            r2.a()     // Catch: java.lang.Exception -> L7f
            goto Lc
        L7f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r1)
            goto Lc
        L88:
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            r1.c = r2
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r2 = r1.d
            if (r2 == 0) goto L26
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        Le:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getValue()
            com.mbridge.msdk.videocommon.download.d r0 = (com.mbridge.msdk.videocommon.download.d) r0
            if (r0 == 0) goto Le
            r0.b()
            goto Le
        L26:
            return
    }

    public final boolean a(int r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.videocommon.download.d r3 = r1.c(r3)     // Catch: java.lang.Exception -> L11
            if (r3 == 0) goto L19
            com.mbridge.msdk.videocommon.download.a r2 = r3.a(r2, r4)     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Le
            goto L19
        Le:
            r2 = 1
            r0 = r2
            goto L19
        L11:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L19
            r2.printStackTrace()
        L19:
            return r0
    }

    public final boolean a(int r10, java.lang.String r11, boolean r12, int r13, boolean r14, int r15, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r16) {
            r9 = this;
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            boolean r0 = r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return r0
    }

    public final boolean a(int r15, java.lang.String r16, boolean r17, int r18, boolean r19, int r20, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r21, boolean r22) {
            r14 = this;
            r1 = r14
            r0 = r16
            r8 = r21
            r9 = 0
            if (r8 == 0) goto L24c
            int r2 = r21.size()     // Catch: java.lang.Exception -> L244
            if (r2 != 0) goto L10
            goto L24c
        L10:
            com.mbridge.msdk.videocommon.download.d r2 = r14.c(r0)     // Catch: java.lang.Exception -> L244
            if (r2 == 0) goto L24c
            r3 = r16
            r4 = r15
            r5 = r17
            r6 = r21
            r7 = r22
            java.util.List r2 = r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L244
            r3 = 1
            if (r2 == 0) goto L18c
            int r4 = r2.size()     // Catch: java.lang.Exception -> L244
            if (r4 != 0) goto L2e
            goto L18c
        L2e:
            if (r19 == 0) goto L12e
            int r4 = r21.size()     // Catch: java.lang.Exception -> L244
            if (r4 <= 0) goto L65
            java.lang.Object r4 = r8.get(r9)     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L244
            if (r4 == 0) goto L65
            java.util.ArrayList r5 = r4.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L244
            if (r5 == 0) goto L65
            java.util.ArrayList r5 = r4.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L244
            int r5 = r5.size()     // Catch: java.lang.Exception -> L244
            if (r5 <= 0) goto L65
            java.util.ArrayList r4 = r4.getRsIgnoreCheckRule()     // Catch: java.lang.Exception -> L244
            java.lang.Integer r5 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Exception -> L244
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Exception -> L244
            if (r4 == 0) goto L65
            java.lang.String r4 = "DownLoadManager"
            java.lang.String r5 = "Is not check video download status with TPL"
            com.mbridge.msdk.foundation.tools.z.b(r4, r5)     // Catch: java.lang.Exception -> L244
            r4 = r3
            goto L66
        L65:
            r4 = r9
        L66:
            if (r20 != 0) goto Lca
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L12a
            r5.<init>()     // Catch: java.lang.Exception -> L12a
            java.util.Iterator r6 = r2.iterator()     // Catch: java.lang.Exception -> L12a
        L71:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Exception -> L12a
            if (r7 == 0) goto Lbf
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.videocommon.download.a r7 = (com.mbridge.msdk.videocommon.download.a) r7     // Catch: java.lang.Exception -> L12a
            java.util.Iterator r9 = r21.iterator()     // Catch: java.lang.Exception -> L12a
        L81:
            boolean r10 = r9.hasNext()     // Catch: java.lang.Exception -> L12a
            if (r10 == 0) goto L71
            java.lang.Object r10 = r9.next()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10     // Catch: java.lang.Exception -> L12a
            if (r7 == 0) goto L81
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r7.g()     // Catch: java.lang.Exception -> L12a
            if (r11 == 0) goto L81
            if (r10 == 0) goto L81
            java.lang.String r11 = r10.getId()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = r7.g()     // Catch: java.lang.Exception -> L12a
            java.lang.String r12 = r12.getId()     // Catch: java.lang.Exception -> L12a
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Exception -> L12a
            if (r11 == 0) goto L81
            java.lang.String r10 = r10.getRequestId()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r7.g()     // Catch: java.lang.Exception -> L12a
            java.lang.String r11 = r11.getRequestId()     // Catch: java.lang.Exception -> L12a
            boolean r10 = r10.equals(r11)     // Catch: java.lang.Exception -> L12a
            if (r10 == 0) goto L81
            r5.add(r7)     // Catch: java.lang.Exception -> L12a
            goto L81
        Lbf:
            int r5 = r5.size()     // Catch: java.lang.Exception -> L12a
            if (r5 <= 0) goto Lc7
            goto L18b
        Lc7:
            r9 = r4
            goto L18c
        Lca:
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L12a
            r5.<init>()     // Catch: java.lang.Exception -> L12a
            java.util.Iterator r6 = r2.iterator()     // Catch: java.lang.Exception -> L12a
        Ld3:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Exception -> L12a
            if (r7 == 0) goto L121
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.videocommon.download.a r7 = (com.mbridge.msdk.videocommon.download.a) r7     // Catch: java.lang.Exception -> L12a
            java.util.Iterator r10 = r21.iterator()     // Catch: java.lang.Exception -> L12a
        Le3:
            boolean r11 = r10.hasNext()     // Catch: java.lang.Exception -> L12a
            if (r11 == 0) goto Ld3
            java.lang.Object r11 = r10.next()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = (com.mbridge.msdk.foundation.entity.CampaignEx) r11     // Catch: java.lang.Exception -> L12a
            if (r7 == 0) goto Le3
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = r7.g()     // Catch: java.lang.Exception -> L12a
            if (r12 == 0) goto Le3
            if (r11 == 0) goto Le3
            java.lang.String r12 = r11.getId()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r13 = r7.g()     // Catch: java.lang.Exception -> L12a
            java.lang.String r13 = r13.getId()     // Catch: java.lang.Exception -> L12a
            boolean r12 = r12.equals(r13)     // Catch: java.lang.Exception -> L12a
            if (r12 == 0) goto Le3
            java.lang.String r11 = r11.getRequestId()     // Catch: java.lang.Exception -> L12a
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = r7.g()     // Catch: java.lang.Exception -> L12a
            java.lang.String r12 = r12.getRequestId()     // Catch: java.lang.Exception -> L12a
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Exception -> L12a
            if (r11 == 0) goto Le3
            r5.add(r7)     // Catch: java.lang.Exception -> L12a
            goto Le3
        L121:
            int r4 = r5.size()     // Catch: java.lang.Exception -> L12a
            r5 = r18
            if (r4 < r5) goto L18c
            goto L18b
        L12a:
            r0 = move-exception
            r9 = r4
            goto L245
        L12e:
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L244
            r4.<init>()     // Catch: java.lang.Exception -> L244
            java.util.Iterator r5 = r2.iterator()     // Catch: java.lang.Exception -> L244
        L137:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Exception -> L244
            if (r6 == 0) goto L185
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.videocommon.download.a r6 = (com.mbridge.msdk.videocommon.download.a) r6     // Catch: java.lang.Exception -> L244
            java.util.Iterator r7 = r21.iterator()     // Catch: java.lang.Exception -> L244
        L147:
            boolean r10 = r7.hasNext()     // Catch: java.lang.Exception -> L244
            if (r10 == 0) goto L137
            java.lang.Object r10 = r7.next()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10     // Catch: java.lang.Exception -> L244
            if (r6 == 0) goto L147
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r6.g()     // Catch: java.lang.Exception -> L244
            if (r11 == 0) goto L147
            if (r10 == 0) goto L147
            java.lang.String r11 = r10.getId()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = r6.g()     // Catch: java.lang.Exception -> L244
            java.lang.String r12 = r12.getId()     // Catch: java.lang.Exception -> L244
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Exception -> L244
            if (r11 == 0) goto L147
            java.lang.String r10 = r10.getRequestId()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r6.g()     // Catch: java.lang.Exception -> L244
            java.lang.String r11 = r11.getRequestId()     // Catch: java.lang.Exception -> L244
            boolean r10 = r10.equals(r11)     // Catch: java.lang.Exception -> L244
            if (r10 == 0) goto L147
            r4.add(r6)     // Catch: java.lang.Exception -> L244
            goto L147
        L185:
            int r4 = r4.size()     // Catch: java.lang.Exception -> L244
            if (r4 <= 0) goto L18c
        L18b:
            r9 = r3
        L18c:
            if (r9 == 0) goto L24c
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>>> r3 = r1.e     // Catch: java.lang.Exception -> L244
            if (r3 != 0) goto L19a
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L244
            r3.<init>()     // Catch: java.lang.Exception -> L244
            r1.e = r3     // Catch: java.lang.Exception -> L244
            goto L1a7
        L19a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>>> r3 = r1.e     // Catch: java.lang.Exception -> L244
            boolean r3 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L244
            if (r3 == 0) goto L1a7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>>> r3 = r1.e     // Catch: java.lang.Exception -> L244
            r3.remove(r0)     // Catch: java.lang.Exception -> L244
        L1a7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r3 = r1.g     // Catch: java.lang.Exception -> L244
            if (r3 != 0) goto L1b3
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L244
            r3.<init>()     // Catch: java.lang.Exception -> L244
            r1.g = r3     // Catch: java.lang.Exception -> L244
            goto L1c0
        L1b3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r3 = r1.g     // Catch: java.lang.Exception -> L244
            boolean r3 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L244
            if (r3 == 0) goto L1c0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r3 = r1.g     // Catch: java.lang.Exception -> L244
            r3.remove(r0)     // Catch: java.lang.Exception -> L244
        L1c0:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r3 = r1.f     // Catch: java.lang.Exception -> L244
            if (r3 != 0) goto L1cc
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L244
            r3.<init>()     // Catch: java.lang.Exception -> L244
            r1.f = r3     // Catch: java.lang.Exception -> L244
            goto L1d9
        L1cc:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r3 = r1.f     // Catch: java.lang.Exception -> L244
            boolean r3 = r3.containsKey(r0)     // Catch: java.lang.Exception -> L244
            if (r3 == 0) goto L1d9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r3 = r1.f     // Catch: java.lang.Exception -> L244
            r3.remove(r0)     // Catch: java.lang.Exception -> L244
        L1d9:
            if (r2 == 0) goto L24c
            int r3 = r2.size()     // Catch: java.lang.Exception -> L244
            if (r3 <= 0) goto L24c
            java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L244
            r3.<init>()     // Catch: java.lang.Exception -> L244
            java.util.concurrent.CopyOnWriteArrayList r4 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L244
            r4.<init>()     // Catch: java.lang.Exception -> L244
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L244
            r5.<init>()     // Catch: java.lang.Exception -> L244
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L244
        L1f4:
            boolean r6 = r2.hasNext()     // Catch: java.lang.Exception -> L244
            if (r6 == 0) goto L234
            java.lang.Object r6 = r2.next()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.videocommon.download.a r6 = (com.mbridge.msdk.videocommon.download.a) r6     // Catch: java.lang.Exception -> L244
            java.util.concurrent.ConcurrentHashMap r7 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L244
            r7.<init>()     // Catch: java.lang.Exception -> L244
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r6.g()     // Catch: java.lang.Exception -> L244
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L244
            r10.<init>()     // Catch: java.lang.Exception -> L244
            java.lang.String r11 = r8.getId()     // Catch: java.lang.Exception -> L244
            r10.append(r11)     // Catch: java.lang.Exception -> L244
            java.lang.String r11 = r8.getVideoUrlEncode()     // Catch: java.lang.Exception -> L244
            r10.append(r11)     // Catch: java.lang.Exception -> L244
            java.lang.String r11 = r8.getBidToken()     // Catch: java.lang.Exception -> L244
            r10.append(r11)     // Catch: java.lang.Exception -> L244
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L244
            r7.put(r10, r6)     // Catch: java.lang.Exception -> L244
            r3.add(r7)     // Catch: java.lang.Exception -> L244
            r4.add(r8)     // Catch: java.lang.Exception -> L244
            r5.add(r6)     // Catch: java.lang.Exception -> L244
            goto L1f4
        L234:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.download.a>>> r2 = r1.e     // Catch: java.lang.Exception -> L244
            r2.put(r0, r3)     // Catch: java.lang.Exception -> L244
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx>> r2 = r1.f     // Catch: java.lang.Exception -> L244
            r2.put(r0, r4)     // Catch: java.lang.Exception -> L244
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r2 = r1.g     // Catch: java.lang.Exception -> L244
            r2.put(r0, r5)     // Catch: java.lang.Exception -> L244
            goto L24c
        L244:
            r0 = move-exception
        L245:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L24c
            r0.printStackTrace()
        L24c:
            return r9
    }

    public final int b(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r8 = r7.d
            r0 = 0
            if (r8 == 0) goto L78
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        Ld:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L78
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.mbridge.msdk.videocommon.download.d r1 = (com.mbridge.msdk.videocommon.download.d) r1
            if (r1 != 0) goto L22
            goto Ld
        L22:
            java.util.concurrent.CopyOnWriteArrayList r1 = r1.c()
            if (r1 != 0) goto L29
            goto Ld
        L29:
            int r2 = r1.size()
            r3 = r0
        L2e:
            if (r3 >= r2) goto Ld
            java.lang.Object r4 = r1.get(r3)
            java.util.Map r4 = (java.util.Map) r4
            if (r4 == 0) goto L75
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L75
            java.lang.Object r4 = r4.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r4 = r4.getValue()
            com.mbridge.msdk.videocommon.download.a r4 = (com.mbridge.msdk.videocommon.download.a) r4
            if (r4 == 0) goto L75
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.g()
            if (r5 == 0) goto L75
            java.lang.String r5 = r5.getVideoUrlEncode()
            boolean r6 = android.text.TextUtils.isEmpty(r9)
            if (r6 != 0) goto L75
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L75
            boolean r5 = r9.equals(r5)
            if (r5 == 0) goto L75
            int r8 = r4.f()
            return r8
        L75:
            int r3 = r3 + 1
            goto L2e
        L78:
            return r0
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a> b(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r0 = r1.g
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.a>> r0 = r1.g
            java.lang.Object r2 = r0.get(r2)
            java.util.concurrent.CopyOnWriteArrayList r2 = (java.util.concurrent.CopyOnWriteArrayList) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    public final void b(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L7
            boolean r2 = r1.c
            if (r2 == 0) goto La
            return
        L7:
            r2 = 0
            r1.c = r2
        La:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r2 = r1.d
            if (r2 == 0) goto L2c
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L16:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r2.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getValue()
            com.mbridge.msdk.videocommon.download.d r0 = (com.mbridge.msdk.videocommon.download.d) r0
            r0.a()
            goto L16
        L2c:
            return
    }

    public final com.mbridge.msdk.videocommon.download.d c(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r0 = r1.d
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r0 = r1.d
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.videocommon.download.d r2 = (com.mbridge.msdk.videocommon.download.d) r2
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    public com.mbridge.msdk.videocommon.download.d createUnitCache(android.content.Context r8, java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, int r11, com.mbridge.msdk.videocommon.listener.a r12) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L49
            if (r10 != 0) goto L9
            goto L49
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r0 = r7.d
            boolean r0 = r0.containsKey(r9)
            if (r0 == 0) goto L31
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r8 = r7.d
            java.lang.Object r8 = r8.get(r9)
            com.mbridge.msdk.videocommon.download.d r8 = (com.mbridge.msdk.videocommon.download.d) r8
            r9 = 94
            if (r11 == r9) goto L26
            r9 = 287(0x11f, float:4.02E-43)
            if (r11 != r9) goto L22
            goto L26
        L22:
            r8.a(r12)
            goto L2d
        L26:
            java.lang.String r9 = r10.getRequestId()
            r8.a(r9, r12)
        L2d:
            r8.a(r10)
            goto L48
        L31:
            com.mbridge.msdk.videocommon.download.d r6 = new com.mbridge.msdk.videocommon.download.d
            java.util.concurrent.ThreadPoolExecutor r3 = r7.b
            r0 = r6
            r1 = r8
            r2 = r10
            r4 = r9
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            if (r12 == 0) goto L42
            r6.a(r12)
        L42:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r8 = r7.d
            r8.put(r9, r6)
            r8 = r6
        L48:
            return r8
        L49:
            r8 = 0
            return r8
    }

    public com.mbridge.msdk.videocommon.download.d createUnitCache(android.content.Context r8, java.lang.String r9, java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r10, int r11, com.mbridge.msdk.videocommon.listener.a r12) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L56
            if (r10 == 0) goto L56
            int r0 = r10.size()
            if (r0 != 0) goto Lf
            goto L56
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r0 = r7.d
            boolean r0 = r0.containsKey(r9)
            if (r0 == 0) goto L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r8 = r7.d
            java.lang.Object r8 = r8.get(r9)
            com.mbridge.msdk.videocommon.download.d r8 = (com.mbridge.msdk.videocommon.download.d) r8
            r9 = 94
            if (r11 == r9) goto L2c
            r9 = 287(0x11f, float:4.02E-43)
            if (r11 != r9) goto L28
            goto L2c
        L28:
            r8.a(r12)
            goto L3a
        L2c:
            r9 = 0
            java.lang.Object r9 = r10.get(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9
            java.lang.String r9 = r9.getRequestId()
            r8.a(r9, r12)
        L3a:
            r8.a(r10)
            goto L55
        L3e:
            com.mbridge.msdk.videocommon.download.d r6 = new com.mbridge.msdk.videocommon.download.d
            java.util.concurrent.ThreadPoolExecutor r3 = r7.b
            r0 = r6
            r1 = r8
            r2 = r10
            r4 = r9
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            if (r12 == 0) goto L4f
            r6.a(r12)
        L4f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.download.d> r8 = r7.d
            r8.put(r9, r6)
            r8 = r6
        L55:
            return r8
        L56:
            r8 = 0
            return r8
    }

    public void load(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.videocommon.download.d r1 = r0.c(r1)
            if (r1 == 0) goto L9
            r1.a()
        L9:
            return
    }
}
