package com.mbridge.msdk.videocommon.a;

public class a {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.videocommon.a.a b;
    private com.mbridge.msdk.foundation.db.f c;

    static {
            java.lang.Class<com.mbridge.msdk.videocommon.a.a> r0 = com.mbridge.msdk.videocommon.a.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.videocommon.a.a.a = r0
            r0 = 0
            com.mbridge.msdk.videocommon.a.a.b = r0
            return
    }

    private a() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L20
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L18
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)     // Catch: java.lang.Exception -> L20
            r2.c = r0     // Catch: java.lang.Exception -> L20
            goto L24
        L18:
            java.lang.String r0 = com.mbridge.msdk.videocommon.a.a.a     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "RewardCampaignCache get Context is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r0 = move-exception
            r0.printStackTrace()
        L24:
            return
    }

    public static com.mbridge.msdk.videocommon.a.a a() {
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.videocommon.a.a> r0 = com.mbridge.msdk.videocommon.a.a.class
            monitor-enter(r0)
            com.mbridge.msdk.videocommon.a.a r1 = com.mbridge.msdk.videocommon.a.a.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.videocommon.a.a r1 = new com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.videocommon.a.a.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.videocommon.a.a r0 = com.mbridge.msdk.videocommon.a.a.b
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.c> a(java.lang.String r3) {
            r2 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf
            if (r1 != 0) goto L13
            com.mbridge.msdk.foundation.db.f r1 = r2.c     // Catch: java.lang.Exception -> Lf
            java.util.List r3 = r1.f(r3)     // Catch: java.lang.Exception -> Lf
            r0 = r3
            goto L13
        Lf:
            r3 = move-exception
            r3.printStackTrace()
        L13:
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r2, int r3, boolean r4) {
            r1 = this;
            java.lang.String r0 = ""
            java.util.concurrent.CopyOnWriteArrayList r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r14) {
            r13 = this;
            r0 = 0
            if (r14 == 0) goto L60
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L5c
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Exception -> L5c
            r2 = 0
            if (r1 == 0) goto L14
            long r4 = r1.e()     // Catch: java.lang.Exception -> L5c
            goto L15
        L14:
            r4 = r2
        L15:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5c
            if (r14 == 0) goto L60
            int r1 = r14.size()     // Catch: java.lang.Exception -> L5c
            if (r1 <= 0) goto L60
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L5c
            r1.<init>()     // Catch: java.lang.Exception -> L5c
            java.util.Iterator r14 = r14.iterator()     // Catch: java.lang.Exception -> L59
        L2a:
            boolean r0 = r14.hasNext()     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L57
            java.lang.Object r0 = r14.next()     // Catch: java.lang.Exception -> L59
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L2a
            long r8 = r0.getPlct()     // Catch: java.lang.Exception -> L59
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            long r10 = r0.getTimestamp()     // Catch: java.lang.Exception -> L59
            long r10 = r6 - r10
            int r12 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r12 <= 0) goto L4d
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 >= 0) goto L53
        L4d:
            if (r12 > 0) goto L2a
            int r8 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r8 < 0) goto L2a
        L53:
            r1.add(r0)     // Catch: java.lang.Exception -> L59
            goto L2a
        L57:
            r0 = r1
            goto L60
        L59:
            r14 = move-exception
            r0 = r1
            goto L5d
        L5c:
            r14 = move-exception
        L5d:
            r14.printStackTrace()
        L60:
            return r0
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r4, int r5) {
            r3 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L31
            if (r1 != 0) goto L30
            com.mbridge.msdk.foundation.db.f r1 = r3.c     // Catch: java.lang.Exception -> L31
            r2 = 0
            java.util.List r4 = r1.a(r4, r2, r2, r5)     // Catch: java.lang.Exception -> L31
            if (r4 == 0) goto L30
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L31
            r5.<init>()     // Catch: java.lang.Exception -> L31
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L2d
        L19:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Exception -> L2d
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L2d
            if (r0 == 0) goto L19
            r5.add(r0)     // Catch: java.lang.Exception -> L2d
            goto L19
        L2b:
            r0 = r5
            goto L30
        L2d:
            r4 = move-exception
            r0 = r5
            goto L32
        L30:
            return r0
        L31:
            r4 = move-exception
        L32:
            r4.printStackTrace()
            return r0
    }

    public final java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r16, int r17, boolean r18, java.lang.String r19) {
            r15 = this;
            r1 = r15
            r2 = 0
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L87
            com.mbridge.msdk.videocommon.d.a r0 = r0.b()     // Catch: java.lang.Exception -> L87
            r3 = 0
            if (r0 == 0) goto L13
            long r5 = r0.e()     // Catch: java.lang.Exception -> L87
            goto L14
        L13:
            r5 = r3
        L14:
            boolean r0 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Exception -> L87
            if (r0 != 0) goto L86
            if (r18 == 0) goto L2b
            com.mbridge.msdk.foundation.db.f r7 = r1.c     // Catch: java.lang.Exception -> L87
            r9 = 0
            r10 = 0
            r8 = r16
            r11 = r17
            r12 = r19
            java.util.List r0 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L87
            goto L38
        L2b:
            com.mbridge.msdk.foundation.db.f r7 = r1.c     // Catch: java.lang.Exception -> L87
            r9 = 0
            r10 = 0
            r12 = 0
            r8 = r16
            r11 = r17
            java.util.List r0 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L87
        L38:
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L87
            if (r0 == 0) goto L86
            java.util.concurrent.CopyOnWriteArrayList r9 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L87
            r9.<init>()     // Catch: java.lang.Exception -> L87
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L83
        L47:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> L83
            if (r2 == 0) goto L81
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> L83
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L83
            if (r2 == 0) goto L47
            int r10 = r2.getReadyState()     // Catch: java.lang.Exception -> L83
            if (r10 == 0) goto L62
            int r10 = r2.getLoadTimeoutState()     // Catch: java.lang.Exception -> L83
            r11 = 1
            if (r10 != r11) goto L47
        L62:
            long r10 = r2.getPlct()     // Catch: java.lang.Exception -> L83
            r12 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r12
            long r12 = r2.getTimestamp()     // Catch: java.lang.Exception -> L83
            long r12 = r7 - r12
            int r14 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r14 <= 0) goto L77
            int r10 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r10 >= 0) goto L7d
        L77:
            if (r14 > 0) goto L47
            int r10 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r10 < 0) goto L47
        L7d:
            r9.add(r2)     // Catch: java.lang.Exception -> L83
            goto L47
        L81:
            r2 = r9
            goto L86
        L83:
            r0 = move-exception
            r2 = r9
            goto L88
        L86:
            return r2
        L87:
            r0 = move-exception
        L88:
            r0.printStackTrace()
            return r2
    }

    public final synchronized void a(long r2, java.lang.String r4) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.db.f r0 = r1.c     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            r0.a(r2, r4)     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            goto L16
        L7:
            r2 = move-exception
            goto L18
        L9:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L7
            java.lang.String r3 = com.mbridge.msdk.videocommon.a.a.a     // Catch: java.lang.Throwable -> L7
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L7
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)     // Catch: java.lang.Throwable -> L7
        L16:
            monitor-exit(r1)
            return
        L18:
            monitor-exit(r1)
            throw r2
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            if (r3 == 0) goto L1e
            java.lang.String r0 = r3.getId()     // Catch: java.lang.Exception -> L1a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L1a
            if (r0 != 0) goto L1e
            com.mbridge.msdk.foundation.db.f r0 = r2.c     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r3.getId()     // Catch: java.lang.Exception -> L1a
            java.lang.String r3 = r3.getRequestId()     // Catch: java.lang.Exception -> L1a
            r0.b(r1, r3)     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r4, java.lang.String r5) {
            r3 = this;
            if (r4 == 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L27
            if (r0 != 0) goto L2b
            boolean r0 = r4.isBidCampaign()     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L15
            java.lang.String r0 = r4.getRequestId()     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.a.d.d(r5, r0)     // Catch: java.lang.Exception -> L27
        L15:
            com.mbridge.msdk.foundation.db.f r0 = r3.c     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r4.getId()     // Catch: java.lang.Exception -> L27
            boolean r2 = r4.isBidCampaign()     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = r4.getRequestId()     // Catch: java.lang.Exception -> L27
            r0.a(r1, r5, r2, r4)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r4 = move-exception
            r4.printStackTrace()
        L2b:
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.foundation.db.f r0 = r1.c
            if (r0 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lf
            com.mbridge.msdk.foundation.db.f r0 = r1.c
            r0.f(r2, r3)
        Lf:
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L19
            if (r5 == 0) goto L19
            int r0 = r5.size()     // Catch: java.lang.Exception -> L15
            if (r0 <= 0) goto L19
            com.mbridge.msdk.foundation.db.f r0 = r2.c     // Catch: java.lang.Exception -> L15
            r1 = 0
            r0.a(r5, r3, r4, r1)     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r3 = move-exception
            r3.printStackTrace()
        L19:
            return
    }

    public final void a(java.lang.String r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            if (r3 == 0) goto L15
            int r0 = r3.size()
            if (r0 <= 0) goto L15
            com.mbridge.msdk.foundation.db.f r0 = r1.c
            if (r0 == 0) goto L15
            r0.b(r2, r3)
        L15:
            return
    }

    public final void a(java.lang.String r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, java.lang.String r4, int r5) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1b
            if (r3 == 0) goto L1b
            int r0 = r3.size()
            if (r0 <= 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1b
            com.mbridge.msdk.foundation.db.f r0 = r1.c
            if (r0 == 0) goto L1b
            r0.a(r2, r3, r4, r5)
        L1b:
            return
    }

    public final int b(java.lang.String r8, int r9, boolean r10, java.lang.String r11) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L47
            if (r0 != 0) goto L4b
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L47
            r0.<init>()     // Catch: java.lang.Exception -> L47
            if (r10 == 0) goto L19
            com.mbridge.msdk.foundation.db.f r1 = r7.c     // Catch: java.lang.Exception -> L47
            r3 = 0
            r4 = 0
            r2 = r8
            r5 = r9
            r6 = r11
            java.util.List r8 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L47
            goto L24
        L19:
            com.mbridge.msdk.foundation.db.f r1 = r7.c     // Catch: java.lang.Exception -> L47
            r3 = 0
            r4 = 0
            r6 = 0
            r2 = r8
            r5 = r9
            java.util.List r8 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L47
        L24:
            if (r8 == 0) goto L4b
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Exception -> L47
        L2a:
            boolean r9 = r8.hasNext()     // Catch: java.lang.Exception -> L47
            if (r9 == 0) goto L42
            java.lang.Object r9 = r8.next()     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L47
            if (r9 == 0) goto L2a
            int r10 = r9.getReadyState()     // Catch: java.lang.Exception -> L47
            if (r10 != 0) goto L2a
            r0.add(r9)     // Catch: java.lang.Exception -> L47
            goto L2a
        L42:
            int r8 = r0.size()     // Catch: java.lang.Exception -> L47
            return r8
        L47:
            r8 = move-exception
            r8.printStackTrace()
        L4b:
            r8 = 0
            return r8
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.lang.String r8, int r9, boolean r10) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L12
            if (r0 != 0) goto L1c
            com.mbridge.msdk.foundation.db.f r1 = r7.c     // Catch: java.lang.Exception -> L12
            r3 = 0
            r4 = 0
            r2 = r8
            r5 = r9
            r6 = r10
            java.util.List r8 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L12
            return r8
        L12:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.videocommon.a.a.a
            java.lang.String r8 = r8.getLocalizedMessage()
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        L1c:
            r8 = 0
            return r8
    }

    public final void b(java.lang.String r15) {
            r14 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Exception -> L95
            if (r0 == 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.db.f r0 = r14.c     // Catch: java.lang.Exception -> L95
            java.util.concurrent.ConcurrentHashMap r0 = r0.g(r15)     // Catch: java.lang.Exception -> L95
            if (r0 == 0) goto L99
            int r1 = r0.size()     // Catch: java.lang.Exception -> L95
            if (r1 <= 0) goto L99
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.c.a r1 = r2.b(r1)     // Catch: java.lang.Exception -> L95
            if (r1 != 0) goto L2f
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L95
        L2f:
            r2 = 0
            if (r1 == 0) goto L38
            long r4 = r1.W()     // Catch: java.lang.Exception -> L95
            goto L39
        L38:
            r4 = r2
        L39:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L95
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Exception -> L95
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L95
        L45:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L95
            if (r1 == 0) goto L99
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.entity.c r1 = (com.mbridge.msdk.foundation.entity.c) r1     // Catch: java.lang.Exception -> L95
            if (r1 == 0) goto L45
            long r8 = r1.d()     // Catch: java.lang.Exception -> L95
            int r10 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r10 > 0) goto L5c
            r8 = r4
        L5c:
            long r10 = r1.e()     // Catch: java.lang.Exception -> L95
            r12 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r12
            long r10 = r10 + r8
            int r8 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r8 < 0) goto L69
            goto L45
        L69:
            java.lang.String r8 = r1.a()     // Catch: java.lang.Exception -> L95
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L95
            if (r8 != 0) goto L45
            java.lang.String r8 = "HBOPTIMIZE"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r9.<init>()     // Catch: java.lang.Exception -> L95
            java.lang.String r10 = "不在有效期范围内 删除"
            r9.append(r10)     // Catch: java.lang.Exception -> L95
            java.lang.String r10 = r1.a()     // Catch: java.lang.Exception -> L95
            r9.append(r10)     // Catch: java.lang.Exception -> L95
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.tools.z.d(r8, r9)     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = r1.a()     // Catch: java.lang.Exception -> L95
            r14.b(r15, r1)     // Catch: java.lang.Exception -> L95
            goto L45
        L95:
            r15 = move-exception
            r15.printStackTrace()
        L99:
            return
    }

    public final void b(java.lang.String r4, int r5) {
            r3 = this;
            com.mbridge.msdk.foundation.db.f r0 = r3.c     // Catch: java.lang.Exception -> L35
            java.util.List r0 = r0.f(r4)     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L39
            int r1 = r0.size()     // Catch: java.lang.Exception -> L35
            if (r1 <= 0) goto L39
            int r1 = r0.size()     // Catch: java.lang.Exception -> L35
            int r1 = r1 - r5
            if (r1 <= 0) goto L39
            r5 = 0
        L16:
            if (r5 >= r1) goto L39
            java.lang.Object r2 = r0.get(r5)     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.foundation.entity.c r2 = (com.mbridge.msdk.foundation.entity.c) r2     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> L35
            r3.b(r4, r2)     // Catch: java.lang.Exception -> L35
            java.lang.Object r2 = r0.get(r5)     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.foundation.entity.c r2 = (com.mbridge.msdk.foundation.entity.c) r2     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.foundation.same.a.d.d(r4, r2)     // Catch: java.lang.Exception -> L35
            int r5 = r5 + 1
            goto L16
        L35:
            r4 = move-exception
            r4.printStackTrace()
        L39:
            return
    }

    public final synchronized void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.db.f r0 = r1.c     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            r0.c(r3, r2)     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            goto Ld
        L7:
            r2 = move-exception
            goto Lf
        L9:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L7
        Ld:
            monitor-exit(r1)
            return
        Lf:
            monitor-exit(r1)
            throw r2
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> c(java.lang.String r17, int r18, boolean r19, java.lang.String r20) {
            r16 = this;
            r1 = r16
            r2 = 0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L96
            java.lang.String r0 = r0.k()     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.c.a r0 = r3.b(r0)     // Catch: java.lang.Exception -> L96
            r3 = 1000(0x3e8, double:4.94E-321)
            if (r0 == 0) goto L1d
            long r5 = r0.W()     // Catch: java.lang.Exception -> L96
        L1b:
            long r5 = r5 * r3
            goto L2a
        L1d:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L96
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L96
            long r5 = r0.W()     // Catch: java.lang.Exception -> L96
            goto L1b
        L2a:
            boolean r0 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Exception -> L96
            if (r0 != 0) goto L95
            if (r19 == 0) goto L41
            com.mbridge.msdk.foundation.db.f r7 = r1.c     // Catch: java.lang.Exception -> L96
            r9 = 0
            r10 = 0
            r8 = r17
            r11 = r18
            r12 = r20
            java.util.List r0 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L96
            goto L4e
        L41:
            com.mbridge.msdk.foundation.db.f r7 = r1.c     // Catch: java.lang.Exception -> L96
            r9 = 0
            r10 = 0
            r12 = 0
            r8 = r17
            r11 = r18
            java.util.List r0 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L96
        L4e:
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L96
            if (r0 == 0) goto L95
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Exception -> L96
            r9.<init>()     // Catch: java.lang.Exception -> L96
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L92
        L5d:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> L92
            if (r2 == 0) goto L90
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> L92
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L92
            if (r2 == 0) goto L5d
            int r10 = r2.getReadyState()     // Catch: java.lang.Exception -> L92
            if (r10 != 0) goto L5d
            long r10 = r2.getPlctb()     // Catch: java.lang.Exception -> L92
            long r10 = r10 * r3
            long r12 = r2.getTimestamp()     // Catch: java.lang.Exception -> L92
            long r12 = r7 - r12
            r14 = 0
            int r14 = (r10 > r14 ? 1 : (r10 == r14 ? 0 : -1))
            if (r14 > 0) goto L86
            int r15 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r15 >= 0) goto L8c
        L86:
            if (r14 <= 0) goto L5d
            int r10 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r10 < 0) goto L5d
        L8c:
            r9.add(r2)     // Catch: java.lang.Exception -> L92
            goto L5d
        L90:
            r2 = r9
            goto L95
        L92:
            r0 = move-exception
            r2 = r9
            goto L97
        L95:
            return r2
        L96:
            r0 = move-exception
        L97:
            r0.printStackTrace()
            return r2
    }

    public final synchronized void c(java.lang.String r11, int r12) {
            r10 = this;
            monitor-enter(r10)
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r0 != 0) goto L1b
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
        L1b:
            int r0 = r0.aS()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r0 != 0) goto L23
            monitor-exit(r10)
            return
        L23:
            com.mbridge.msdk.foundation.db.f r1 = r10.c     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r2 = 1
            r3 = 0
            r4 = 2
            if (r0 != r4) goto L2c
            r5 = r2
            goto L2d
        L2c:
            r5 = r3
        L2d:
            java.util.List r1 = r1.b(r11, r12, r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r1 == 0) goto L81
            int r5 = r1.size()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r5 <= 0) goto L81
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
        L3d:
            boolean r5 = r1.hasNext()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r5 == 0) goto L81
            java.lang.Object r5 = r1.next()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r6 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r7 = r5.getId()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r8 = r5.getCampaignUnitId()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r5 = r5.getCMPTEntryUrl()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r9.<init>()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r9.append(r8)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r8 = "_"
            r9.append(r8)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r9.append(r7)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r7 = "_"
            r9.append(r7)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r9.append(r6)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r6 = "_"
            r9.append(r6)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            r9.append(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            java.lang.String r5 = r9.toString()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            com.mbridge.msdk.videocommon.a.b(r5)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            goto L3d
        L81:
            com.mbridge.msdk.foundation.db.f r1 = r10.c     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            if (r0 != r4) goto L86
            goto L87
        L86:
            r2 = r3
        L87:
            r1.a(r11, r12, r2)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8d
            goto L97
        L8b:
            r11 = move-exception
            goto L99
        L8d:
            r11 = move-exception
            java.lang.String r12 = com.mbridge.msdk.videocommon.a.a.a     // Catch: java.lang.Throwable -> L8b
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L8b
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)     // Catch: java.lang.Throwable -> L8b
        L97:
            monitor-exit(r10)
            return
        L99:
            monitor-exit(r10)
            throw r11
    }
}
