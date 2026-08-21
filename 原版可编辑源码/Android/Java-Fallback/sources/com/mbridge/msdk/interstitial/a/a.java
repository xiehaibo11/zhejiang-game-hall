package com.mbridge.msdk.interstitial.a;

public final class a {
    private android.content.Context a;
    private java.lang.String b;
    private java.lang.String c;
    private int d;
    private boolean e;
    private int f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private com.mbridge.msdk.interstitial.c.a.a j;
    private com.mbridge.msdk.c.d k;
    private android.os.Handler l;
    private com.mbridge.msdk.interstitial.a.a.b m;
    private boolean n;
    private boolean o;




    public class a implements java.lang.Runnable {
        final com.mbridge.msdk.interstitial.a.a a;

        public a(com.mbridge.msdk.interstitial.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.String r0 = "  mExcludes:"
                java.lang.String r1 = "IntersAdapter"
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L136
                r2.<init>()     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = "=====getTtcRunnable 开始获取 mTtcIds:"
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = com.mbridge.msdk.interstitial.a.a.a(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r0)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = com.mbridge.msdk.interstitial.a.a.b(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                android.content.Context r2 = com.mbridge.msdk.interstitial.a.a.g(r2)     // Catch: java.lang.Exception -> L136
                if (r2 == 0) goto L54
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                android.content.Context r2 = com.mbridge.msdk.interstitial.a.a.g(r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L136
                if (r2 == 0) goto L54
                com.mbridge.msdk.foundation.db.c r2 = com.mbridge.msdk.foundation.db.c.a(r2)     // Catch: java.lang.Exception -> L136
                r2.a()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r4 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r4 = com.mbridge.msdk.interstitial.a.a.f(r4)     // Catch: java.lang.Exception -> L136
                java.lang.String r2 = r2.a(r4)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a.c(r3, r2)     // Catch: java.lang.Exception -> L136
            L54:
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = com.mbridge.msdk.interstitial.a.a.h(r3)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a.d(r2, r3)     // Catch: java.lang.Exception -> L136
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L136
                r2.<init>()     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = "=====getTtcRunnable 获取完毕 mTtcIds:"
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = com.mbridge.msdk.interstitial.a.a.a(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r0)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = com.mbridge.msdk.interstitial.a.a.b(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                boolean r2 = com.mbridge.msdk.interstitial.a.a.i(r2)     // Catch: java.lang.Exception -> L136
                java.lang.String r3 = " mIsGetTtcExcIdsSuccess:"
                if (r2 == 0) goto Lb6
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L136
                r0.<init>()     // Catch: java.lang.Exception -> L136
                java.lang.String r2 = "=====getTtcRunnable 获取ttcid和excludeids超时 mIsGetTtcExcIdsTimeout："
                r0.append(r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                boolean r2 = com.mbridge.msdk.interstitial.a.a.i(r2)     // Catch: java.lang.Exception -> L136
                r0.append(r2)     // Catch: java.lang.Exception -> L136
                r0.append(r3)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                boolean r2 = com.mbridge.msdk.interstitial.a.a.j(r2)     // Catch: java.lang.Exception -> L136
                r0.append(r2)     // Catch: java.lang.Exception -> L136
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L136
                return
            Lb6:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L136
                r2.<init>()     // Catch: java.lang.Exception -> L136
                java.lang.String r4 = "=====getTtcRunnable 获取ttcid和excludeids没有超时 mIsGetTtcExcIdsTimeout:"
                r2.append(r4)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r4 = r5.a     // Catch: java.lang.Exception -> L136
                boolean r4 = com.mbridge.msdk.interstitial.a.a.i(r4)     // Catch: java.lang.Exception -> L136
                r2.append(r4)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                boolean r3 = com.mbridge.msdk.interstitial.a.a.j(r3)     // Catch: java.lang.Exception -> L136
                r2.append(r3)     // Catch: java.lang.Exception -> L136
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a$b r2 = com.mbridge.msdk.interstitial.a.a.k(r2)     // Catch: java.lang.Exception -> L136
                if (r2 == 0) goto Lf8
                java.lang.String r2 = "=====getTtcRunnable 删除 获取ttcid的超时任务"
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                android.os.Handler r2 = com.mbridge.msdk.interstitial.a.a.l(r2)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r3 = r5.a     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a$b r3 = com.mbridge.msdk.interstitial.a.a.k(r3)     // Catch: java.lang.Exception -> L136
                r2.removeCallbacks(r3)     // Catch: java.lang.Exception -> L136
            Lf8:
                com.mbridge.msdk.interstitial.a.a r2 = r5.a     // Catch: java.lang.Exception -> L136
                r3 = 1
                com.mbridge.msdk.interstitial.a.a.a(r2, r3)     // Catch: java.lang.Exception -> L136
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L136
                r2.<init>()     // Catch: java.lang.Exception -> L136
                java.lang.String r4 = "=====getTtcRunnable 给handler发送消息 mTtcIds:"
                r2.append(r4)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r4 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r4 = com.mbridge.msdk.interstitial.a.a.a(r4)     // Catch: java.lang.Exception -> L136
                r2.append(r4)     // Catch: java.lang.Exception -> L136
                r2.append(r0)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r0 = r5.a     // Catch: java.lang.Exception -> L136
                java.lang.String r0 = com.mbridge.msdk.interstitial.a.a.b(r0)     // Catch: java.lang.Exception -> L136
                r2.append(r0)     // Catch: java.lang.Exception -> L136
                java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L136
                com.mbridge.msdk.interstitial.a.a r0 = r5.a     // Catch: java.lang.Exception -> L136
                android.os.Handler r0 = com.mbridge.msdk.interstitial.a.a.l(r0)     // Catch: java.lang.Exception -> L136
                if (r0 == 0) goto L13a
                com.mbridge.msdk.interstitial.a.a r0 = r5.a     // Catch: java.lang.Exception -> L136
                android.os.Handler r0 = com.mbridge.msdk.interstitial.a.a.l(r0)     // Catch: java.lang.Exception -> L136
                r0.sendEmptyMessage(r3)     // Catch: java.lang.Exception -> L136
                goto L13a
            L136:
                r0 = move-exception
                r0.printStackTrace()
            L13a:
                return
        }
    }

    public class b implements java.lang.Runnable {
        final com.mbridge.msdk.interstitial.a.a a;

        public b(com.mbridge.msdk.interstitial.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.lang.String r0 = "IntersAdapter"
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9f
                r1.<init>()     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = "=====超时task 开始执行 mTtcIds:"
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r2 = r4.a     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = com.mbridge.msdk.interstitial.a.a.a(r2)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = "  mExcludes:"
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r2 = r4.a     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = com.mbridge.msdk.interstitial.a.a.b(r2)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r1 = r4.a     // Catch: java.lang.Exception -> L9f
                boolean r1 = com.mbridge.msdk.interstitial.a.a.j(r1)     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = " mIsGetTtcExcIdsSuccess:"
                if (r1 == 0) goto L60
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9f
                r1.<init>()     // Catch: java.lang.Exception -> L9f
                java.lang.String r3 = "超时task 已经成功获取ttcid excludeids mIsGetTtcExcIdsTimeout:"
                r1.append(r3)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r3 = r4.a     // Catch: java.lang.Exception -> L9f
                boolean r3 = com.mbridge.msdk.interstitial.a.a.i(r3)     // Catch: java.lang.Exception -> L9f
                r1.append(r3)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r2 = r4.a     // Catch: java.lang.Exception -> L9f
                boolean r2 = com.mbridge.msdk.interstitial.a.a.j(r2)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                java.lang.String r2 = "超时task不做处理"
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9f
                return
            L60:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9f
                r1.<init>()     // Catch: java.lang.Exception -> L9f
                java.lang.String r3 = "获取ttcid excludeids超时 mIsGetTtcExcIdsTimeout:"
                r1.append(r3)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r3 = r4.a     // Catch: java.lang.Exception -> L9f
                boolean r3 = com.mbridge.msdk.interstitial.a.a.i(r3)     // Catch: java.lang.Exception -> L9f
                r1.append(r3)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r2 = r4.a     // Catch: java.lang.Exception -> L9f
                boolean r2 = com.mbridge.msdk.interstitial.a.a.j(r2)     // Catch: java.lang.Exception -> L9f
                r1.append(r2)     // Catch: java.lang.Exception -> L9f
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r0 = r4.a     // Catch: java.lang.Exception -> L9f
                r1 = 1
                com.mbridge.msdk.interstitial.a.a.b(r0, r1)     // Catch: java.lang.Exception -> L9f
                com.mbridge.msdk.interstitial.a.a r0 = r4.a     // Catch: java.lang.Exception -> L9f
                android.os.Handler r0 = com.mbridge.msdk.interstitial.a.a.l(r0)     // Catch: java.lang.Exception -> L9f
                if (r0 == 0) goto La3
                com.mbridge.msdk.interstitial.a.a r0 = r4.a     // Catch: java.lang.Exception -> L9f
                android.os.Handler r0 = com.mbridge.msdk.interstitial.a.a.l(r0)     // Catch: java.lang.Exception -> L9f
                r1 = 2
                r0.sendEmptyMessage(r1)     // Catch: java.lang.Exception -> L9f
                goto La3
            L9f:
                r0 = move-exception
                r0.printStackTrace()
            La3:
                return
        }
    }

    public a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.n = r0
            r1.o = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            r1.i = r5
            r1.e = r6
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.d r2 = r4.e(r2, r3)
            r1.k = r2
            if (r2 != 0) goto L35
            java.lang.String r2 = "IntersAdapter"
            java.lang.String r3 = "获取默认的unitsetting"
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)
            java.lang.String r2 = r1.b
            com.mbridge.msdk.c.d r2 = com.mbridge.msdk.c.d.f(r2)
            r1.k = r2
        L35:
            com.mbridge.msdk.interstitial.a.a$1 r2 = new com.mbridge.msdk.interstitial.a.a$1
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r1, r3)
            r1.l = r2
            return
    }

    static java.lang.String a(com.mbridge.msdk.interstitial.a.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static java.util.List a(com.mbridge.msdk.interstitial.a.a r0, java.util.List r1) {
            java.util.List r0 = r0.b(r1)
            return r0
    }

    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r9) {
            r8 = this;
            java.lang.String r0 = "IntersAdapter"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            if (r9 == 0) goto Lda
            int r2 = r9.size()     // Catch: java.lang.Exception -> Ld6
            if (r2 <= 0) goto Lda
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6
            r2.<init>()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r3 = "onload 总共返回 的compaign有："
            r2.append(r3)     // Catch: java.lang.Exception -> Ld6
            int r3 = r9.size()     // Catch: java.lang.Exception -> Ld6
            r2.append(r3)     // Catch: java.lang.Exception -> Ld6
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Ld6
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> Ld6
            com.mbridge.msdk.c.d r2 = r8.k     // Catch: java.lang.Exception -> Ld6
            int r2 = r2.q()     // Catch: java.lang.Exception -> Ld6
            r3 = 0
        L2e:
            int r4 = r9.size()     // Catch: java.lang.Exception -> Ld6
            if (r3 >= r4) goto Lbd
            int r4 = r8.f     // Catch: java.lang.Exception -> Ld6
            if (r3 >= r4) goto Lbd
            int r4 = r1.size()     // Catch: java.lang.Exception -> Ld6
            if (r4 < r2) goto L40
            goto Lbd
        L40:
            java.lang.Object r4 = r9.get(r3)     // Catch: java.lang.Exception -> Ld6
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> Ld6
            r5 = 1
            if (r4 == 0) goto L5f
            int r6 = r4.getOfferType()     // Catch: java.lang.Exception -> Ld6
            if (r6 != r5) goto L5f
            java.lang.String r6 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> Ld6
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Ld6
            if (r6 == 0) goto L5f
            java.lang.String r4 = "offertype=1 但是videourl为空"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> Ld6
            goto Lb9
        L5f:
            if (r4 == 0) goto Lb9
            java.lang.String r6 = r4.getHtmlUrl()     // Catch: java.lang.Exception -> Ld6
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Ld6
            if (r6 == 0) goto L71
            boolean r6 = r4.isMraid()     // Catch: java.lang.Exception -> Ld6
            if (r6 == 0) goto Lb9
        L71:
            int r6 = r4.getOfferType()     // Catch: java.lang.Exception -> Ld6
            r7 = 99
            if (r6 == r7) goto Lb9
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.b(r4)     // Catch: java.lang.Exception -> Ld6
            if (r6 == 0) goto L91
            android.content.Context r6 = r8.a     // Catch: java.lang.Exception -> Ld6
            java.lang.String r7 = r4.getPackageName()     // Catch: java.lang.Exception -> Ld6
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.c(r6, r7)     // Catch: java.lang.Exception -> Ld6
            if (r6 == 0) goto L8d
            r6 = r5
            goto L8e
        L8d:
            r6 = 2
        L8e:
            r4.setRtinsType(r6)     // Catch: java.lang.Exception -> Ld6
        L91:
            int r6 = r4.getWtick()     // Catch: java.lang.Exception -> Ld6
            if (r6 == r5) goto Lb6
            android.content.Context r5 = r8.a     // Catch: java.lang.Exception -> Ld6
            java.lang.String r6 = r4.getPackageName()     // Catch: java.lang.Exception -> Ld6
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r5, r6)     // Catch: java.lang.Exception -> Ld6
            if (r5 != 0) goto La4
            goto Lb6
        La4:
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.b(r4)     // Catch: java.lang.Exception -> Ld6
            if (r5 == 0) goto Lae
            r1.add(r4)     // Catch: java.lang.Exception -> Ld6
            goto Lb9
        Lae:
            java.lang.String r5 = r8.b     // Catch: java.lang.Exception -> Ld6
            int r6 = com.mbridge.msdk.foundation.same.a.E     // Catch: java.lang.Exception -> Ld6
            com.mbridge.msdk.foundation.tools.ae.a(r5, r4, r6)     // Catch: java.lang.Exception -> Ld6
            goto Lb9
        Lb6:
            r1.add(r4)     // Catch: java.lang.Exception -> Ld6
        Lb9:
            int r3 = r3 + 1
            goto L2e
        Lbd:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6
            r9.<init>()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r2 = "onload 返回有以下有效的compaign："
            r9.append(r2)     // Catch: java.lang.Exception -> Ld6
            int r2 = r1.size()     // Catch: java.lang.Exception -> Ld6
            r9.append(r2)     // Catch: java.lang.Exception -> Ld6
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Ld6
            com.mbridge.msdk.foundation.tools.z.b(r0, r9)     // Catch: java.lang.Exception -> Ld6
            goto Lda
        Ld6:
            r9 = move-exception
            r9.printStackTrace()
        Lda:
            return r1
    }

    static void a(com.mbridge.msdk.interstitial.a.a r5, com.mbridge.msdk.foundation.entity.CampaignUnit r6) {
            if (r6 == 0) goto Le3
            java.util.ArrayList r0 = r6.getAds()
            if (r0 == 0) goto Le3
            java.util.ArrayList r0 = r6.getAds()
            int r0 = r0.size()
            if (r0 > 0) goto L14
            goto Le3
        L14:
            java.util.ArrayList r0 = r6.getAds()
            java.util.List r1 = r5.a(r0)
            java.lang.String r2 = "IntersAdapter"
            if (r6 == 0) goto L40
            java.lang.String r6 = r6.getSessionId()
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L40
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "onload sessionId:"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)
            com.mbridge.msdk.interstitial.c.a.a = r6
        L40:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lac
            r6.<init>()     // Catch: java.lang.Exception -> Lac
            java.lang.String r3 = "onload offset相加前 "
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            int r3 = r5.d     // Catch: java.lang.Exception -> Lac
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            java.lang.String r3 = " mTnum:"
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            int r3 = r5.f     // Catch: java.lang.Exception -> Lac
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)     // Catch: java.lang.Exception -> Lac
            int r6 = r5.d     // Catch: java.lang.Exception -> Lac
            int r3 = r5.f     // Catch: java.lang.Exception -> Lac
            int r6 = r6 + r3
            r5.d = r6     // Catch: java.lang.Exception -> Lac
            int r6 = r5.i()     // Catch: java.lang.Exception -> Lac
            int r3 = r5.d     // Catch: java.lang.Exception -> Lac
            if (r3 <= r6) goto L86
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lac
            r3.<init>()     // Catch: java.lang.Exception -> Lac
            java.lang.String r4 = "onload 重置offset为0 :"
            r3.append(r4)     // Catch: java.lang.Exception -> Lac
            r3.append(r6)     // Catch: java.lang.Exception -> Lac
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)     // Catch: java.lang.Exception -> Lac
            r6 = 0
            r5.d = r6     // Catch: java.lang.Exception -> Lac
        L86:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lac
            r6.<init>()     // Catch: java.lang.Exception -> Lac
            java.lang.String r3 = "onload 算出 下次的offset是:"
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            int r3 = r5.d     // Catch: java.lang.Exception -> Lac
            r6.append(r3)     // Catch: java.lang.Exception -> Lac
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lac
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)     // Catch: java.lang.Exception -> Lac
            java.lang.String r6 = r5.b     // Catch: java.lang.Exception -> Lac
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Lac
            if (r6 != 0) goto Lb0
            java.lang.String r6 = r5.b     // Catch: java.lang.Exception -> Lac
            int r3 = r5.d     // Catch: java.lang.Exception -> Lac
            com.mbridge.msdk.interstitial.c.a.a(r6, r3)     // Catch: java.lang.Exception -> Lac
            goto Lb0
        Lac:
            r6 = move-exception
            r6.printStackTrace()
        Lb0:
            if (r0 == 0) goto Ld2
            int r6 = r0.size()
            if (r6 <= 0) goto Ld2
            java.lang.String r6 = "在主线程 开始处理vba"
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)
            if (r0 == 0) goto Lcd
            int r6 = r0.size()
            if (r6 == 0) goto Lcd
            com.mbridge.msdk.c.d r6 = r5.k
            if (r6 == 0) goto Lcd
            android.content.Context r6 = r5.a
            if (r6 != 0) goto Ld2
        Lcd:
            java.lang.String r6 = "处理vba null retun"
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)
        Ld2:
            com.mbridge.msdk.foundation.tools.ae.a(r0)
            java.lang.Thread r6 = new java.lang.Thread
            com.mbridge.msdk.interstitial.a.a$3 r2 = new com.mbridge.msdk.interstitial.a.a$3
            r2.<init>(r5, r1, r0)
            r6.<init>(r2)
            r6.start()
            goto Le8
        Le3:
            java.lang.String r6 = "no server ads available"
            r5.b(r6)
        Le8:
            return
    }

    static void a(com.mbridge.msdk.interstitial.a.a r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    static void a(com.mbridge.msdk.interstitial.a.a r1, java.lang.String r2, java.util.List r3) {
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()
            if (r1 == 0) goto L30
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L2c
            if (r0 != 0) goto L30
            if (r3 == 0) goto L30
            int r0 = r3.size()     // Catch: java.lang.Exception -> L2c
            if (r0 <= 0) goto L30
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L2c
        L1c:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L30
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Exception -> L2c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L2c
            r1.b(r0, r2)     // Catch: java.lang.Exception -> L2c
            goto L1c
        L2c:
            r1 = move-exception
            r1.printStackTrace()
        L30:
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            android.os.Handler r0 = r1.l
            if (r0 == 0) goto L12
            android.os.Message r0 = android.os.Message.obtain()
            r0.obj = r2
            r2 = 3
            r0.what = r2
            android.os.Handler r2 = r1.l
            r2.sendMessage(r0)
        L12:
            return
    }

    static boolean a(com.mbridge.msdk.interstitial.a.a r0, boolean r1) {
            r0.n = r1
            return r1
    }

    static java.lang.String b(com.mbridge.msdk.interstitial.a.a r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r11) {
            r10 = this;
            java.lang.String r0 = "5"
            java.lang.String r1 = ""
            java.util.ArrayList r2 = new java.util.ArrayList
            int r3 = r11.size()
            r2.<init>(r3)
            java.util.Iterator r11 = r11.iterator()
        L11:
            boolean r3 = r11.hasNext()
            if (r3 == 0) goto Lf9
            java.lang.Object r3 = r11.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            boolean r4 = r3.isMraid()
            if (r4 == 0) goto Lf4
            java.lang.String r4 = r3.getMraid()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lf4
            r4 = 0
            com.mbridge.msdk.foundation.same.b.c r5 = com.mbridge.msdk.foundation.same.b.c.g     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.String r5 = com.mbridge.msdk.foundation.same.b.e.b(r5)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.String r6 = r3.getMraid()     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ak.a(r6)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r6)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            if (r7 == 0) goto L4e
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
        L4e:
            java.lang.String r7 = ".html"
            java.lang.String r6 = r6.concat(r7)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            r7.<init>(r5, r6)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            r5.<init>(r7)     // Catch: java.lang.Throwable -> Lab java.lang.Exception -> Lad
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r4.<init>()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            com.mbridge.msdk.c.b.b r6 = com.mbridge.msdk.c.b.b.a()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            java.lang.String r6 = r6.b()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            boolean r8 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            if (r8 != 0) goto L7e
            java.lang.String r8 = "<script>"
            r4.append(r8)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r4.append(r6)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            java.lang.String r6 = "</script>"
            r4.append(r6)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
        L7e:
            java.lang.String r6 = r3.getMraid()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r4.append(r6)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r5.write(r4)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r5.flush()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            java.lang.String r4 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r3.setMraid(r4)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            java.lang.String r4 = r10.b     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            com.mbridge.msdk.foundation.same.report.c.a(r3, r1, r4, r0)     // Catch: java.lang.Throwable -> La3 java.lang.Exception -> La6
            r5.close()     // Catch: java.lang.Exception -> Lc3
            goto Lc7
        La3:
            r11 = move-exception
            r4 = r5
            goto Le9
        La6:
            r4 = move-exception
            r9 = r5
            r5 = r4
            r4 = r9
            goto Lae
        Lab:
            r11 = move-exception
            goto Le9
        Lad:
            r5 = move-exception
        Lae:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> Lab
            r3.setMraid(r1)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r6 = r10.b     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.foundation.same.report.c.a(r3, r5, r6, r0)     // Catch: java.lang.Throwable -> Lab
            if (r4 == 0) goto Lc7
            r4.close()     // Catch: java.lang.Exception -> Lc3
            goto Lc7
        Lc3:
            r4 = move-exception
            r4.printStackTrace()
        Lc7:
            java.io.File r4 = new java.io.File
            java.lang.String r5 = r3.getMraid()
            r4.<init>(r5)
            boolean r5 = r4.exists()
            if (r5 == 0) goto Le2
            boolean r5 = r4.isFile()
            if (r5 == 0) goto Le2
            boolean r4 = r4.canRead()
            if (r4 != 0) goto Lf4
        Le2:
            java.lang.String r3 = "mraid resource write fail"
            r10.b(r3)
            goto L11
        Le9:
            if (r4 == 0) goto Lf3
            r4.close()     // Catch: java.lang.Exception -> Lef
            goto Lf3
        Lef:
            r0 = move-exception
            r0.printStackTrace()
        Lf3:
            throw r11
        Lf4:
            r2.add(r3)
            goto L11
        Lf9:
            return r2
    }

    static void b(com.mbridge.msdk.interstitial.a.a r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static void b(com.mbridge.msdk.interstitial.a.a r9, java.util.List r10) {
            java.lang.String r0 = "IntersAdapter"
            java.lang.String r1 = "onload 开始 更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            android.content.Context r1 = r9.a
            if (r1 == 0) goto La0
            if (r10 == 0) goto La0
            int r1 = r10.size()
            if (r1 != 0) goto L15
            goto La0
        L15:
            android.content.Context r1 = r9.a
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
            android.content.Context r6 = r9.a
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

    private void b(java.lang.String r2) {
            r1 = this;
            android.os.Handler r0 = r1.l     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L17
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L13
            r0.obj = r2     // Catch: java.lang.Exception -> L13
            r2 = 4
            r0.what = r2     // Catch: java.lang.Exception -> L13
            android.os.Handler r2 = r1.l     // Catch: java.lang.Exception -> L13
            r2.sendMessage(r0)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            return
    }

    static boolean b(com.mbridge.msdk.interstitial.a.a r0, boolean r1) {
            r0.o = r1
            return r1
    }

    static com.mbridge.msdk.interstitial.c.a.a c(com.mbridge.msdk.interstitial.a.a r0) {
            com.mbridge.msdk.interstitial.c.a$a r0 = r0.j
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.interstitial.a.a r0, java.lang.String r1) {
            r0.g = r1
            return r1
    }

    static java.lang.String d(com.mbridge.msdk.interstitial.a.a r0, java.lang.String r1) {
            r0.h = r1
            return r1
    }

    static boolean d(com.mbridge.msdk.interstitial.a.a r0) {
            boolean r0 = r0.e
            return r0
    }

    private com.mbridge.msdk.foundation.same.net.g.d e() {
            r13 = this;
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
            boolean r2 = r13.e
            if (r2 == 0) goto L31
            r2 = 3
            goto L32
        L31:
            r2 = 2
        L32:
            r3 = 1
            r13.f = r3
            com.mbridge.msdk.c.d r4 = r13.k
            int r4 = r4.q()
            if (r4 <= 0) goto L45
            com.mbridge.msdk.c.d r4 = r13.k
            int r4 = r4.q()
            r13.f = r4
        L45:
            com.mbridge.msdk.c.d r4 = r13.k
            int r4 = r4.p()
            if (r4 <= 0) goto L54
            com.mbridge.msdk.c.d r4 = r13.k
            int r4 = r4.p()
            goto L55
        L54:
            r4 = r3
        L55:
            java.lang.String r5 = r13.h
            java.lang.String r6 = r13.g
            java.lang.String r7 = r13.b
            java.lang.String r8 = "interstitial"
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.d.a(r7, r8)
            java.lang.String r8 = r13.m()
            int r9 = r13.j()
            r13.d = r9
            java.lang.String r9 = r13.l()
            r10 = 279(0x117, float:3.91E-43)
            java.lang.String r11 = r13.i
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 == 0) goto L7d
            java.lang.String r11 = "0"
            r13.i = r11
        L7d:
            com.mbridge.msdk.foundation.same.net.g.d r11 = new com.mbridge.msdk.foundation.same.net.g.d
            r11.<init>()
            java.lang.String r12 = "app_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r12, r0)
            java.lang.String r0 = r13.b
            java.lang.String r12 = "unit_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r12, r0)
            java.lang.String r0 = r13.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L9d
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r12 = r13.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r12)
        L9d:
            java.lang.String r0 = "sign"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r1)
            java.lang.String r0 = r13.i
            java.lang.String r1 = "category"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "req_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_num"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r13.f
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "tnum"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "1"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "only_impression"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r4, r0)
            java.lang.String r0 = "ping_mode"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r2)
            java.lang.String r0 = "ttc_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r6)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.b
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r7)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r5)
            java.lang.String r0 = "install_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_source_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r2, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.a
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r0, r9)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ad_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r13.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "offset"
            com.mbridge.msdk.foundation.same.net.f.b.a(r11, r1, r0)
            return r11
    }

    static void e(com.mbridge.msdk.interstitial.a.a r0) {
            r0.k()
            return
    }

    private java.lang.String f() {
            r4 = this;
            java.lang.String r0 = ""
            android.content.Context r1 = r4.a     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r4.b     // Catch: java.lang.Exception -> L2b
            org.json.JSONArray r1 = com.mbridge.msdk.foundation.tools.ae.a(r1, r2)     // Catch: java.lang.Exception -> L2b
            int r2 = r1.length()     // Catch: java.lang.Exception -> L2b
            if (r2 <= 0) goto L14
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L2b
        L14:
            java.lang.String r1 = "IntersAdapter"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2b
            r2.<init>()     // Catch: java.lang.Exception -> L2b
            java.lang.String r3 = "get excludes:"
            r2.append(r3)     // Catch: java.lang.Exception -> L2b
            r2.append(r0)     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L2b
            goto L2f
        L2b:
            r1 = move-exception
            r1.printStackTrace()
        L2f:
            return r0
    }

    static java.lang.String f(com.mbridge.msdk.interstitial.a.a r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static android.content.Context g(com.mbridge.msdk.interstitial.a.a r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    private void g() {
            r4 = this;
            com.mbridge.msdk.interstitial.b.a r0 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L31
            if (r0 == 0) goto L35
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> L31
            if (r0 != 0) goto L20
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> L31
        L20:
            long r0 = r0.ag()     // Catch: java.lang.Exception -> L31
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            com.mbridge.msdk.interstitial.b.a r2 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = r4.b     // Catch: java.lang.Exception -> L31
            r2.a(r0, r3)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            return
    }

    static java.lang.String h(com.mbridge.msdk.interstitial.a.a r0) {
            java.lang.String r0 = r0.f()
            return r0
    }

    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> h() {
            r4 = this;
            r0 = 0
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L13
            if (r1 == 0) goto L17
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L13
            java.lang.String r2 = r4.b     // Catch: java.lang.Exception -> L13
            r3 = 1
            java.util.List r0 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r1 = move-exception
            r1.printStackTrace()
        L17:
            return r0
    }

    private int i() {
            r3 = this;
            r0 = 1
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.mbridge.msdk.interstitial.c.a.d     // Catch: java.lang.Exception -> L28
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L28
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L28
            if (r2 != 0) goto L22
            if (r1 == 0) goto L22
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L28
            boolean r2 = r1.containsKey(r2)     // Catch: java.lang.Exception -> L28
            if (r2 == 0) goto L22
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L28
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L28
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L28
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L28
            goto L23
        L22:
            r1 = r0
        L23:
            if (r1 > 0) goto L26
            goto L2c
        L26:
            r0 = r1
            goto L2c
        L28:
            r1 = move-exception
            r1.printStackTrace()
        L2c:
            return r0
    }

    static boolean i(com.mbridge.msdk.interstitial.a.a r0) {
            boolean r0 = r0.o
            return r0
    }

    private int j() {
            r4 = this;
            r0 = 0
            java.lang.String r1 = r4.b     // Catch: java.lang.Exception -> L30
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L10
            java.lang.String r1 = r4.b     // Catch: java.lang.Exception -> L30
            int r1 = com.mbridge.msdk.interstitial.c.a.a(r1)     // Catch: java.lang.Exception -> L30
            goto L11
        L10:
            r1 = r0
        L11:
            int r2 = r4.i()     // Catch: java.lang.Exception -> L30
            if (r1 <= r2) goto L18
            goto L19
        L18:
            r0 = r1
        L19:
            java.lang.String r1 = "IntersAdapter"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r2.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = "getCurrentOffset:"
            r2.append(r3)     // Catch: java.lang.Exception -> L30
            r2.append(r0)     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }

    static boolean j(com.mbridge.msdk.interstitial.a.a r0) {
            boolean r0 = r0.n
            return r0
    }

    static com.mbridge.msdk.interstitial.a.a.b k(com.mbridge.msdk.interstitial.a.a r0) {
            com.mbridge.msdk.interstitial.a.a$b r0 = r0.m
            return r0
    }

    private void k() {
            r2 = this;
            java.lang.String r0 = r2.b     // Catch: java.lang.Exception -> Lf
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L13
            java.lang.String r0 = r2.b     // Catch: java.lang.Exception -> Lf
            r1 = 0
            com.mbridge.msdk.interstitial.c.a.a(r0, r1)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r0 = move-exception
            r0.printStackTrace()
        L13:
            return
    }

    static android.os.Handler l(com.mbridge.msdk.interstitial.a.a r0) {
            android.os.Handler r0 = r0.l
            return r0
    }

    private java.lang.String l() {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = com.mbridge.msdk.interstitial.c.a.a     // Catch: java.lang.Exception -> Ld
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Ld
            if (r1 != 0) goto L11
            java.lang.String r0 = com.mbridge.msdk.interstitial.c.a.a     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return r0
    }

    private java.lang.String m() {
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

    public final com.mbridge.msdk.foundation.entity.CampaignEx a() {
            r7 = this;
            java.lang.String r0 = "IntersAdapter"
            r1 = 0
            java.lang.String r2 = r7.b     // Catch: java.lang.Exception -> L85
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L85
            if (r2 == 0) goto Lc
            return r1
        Lc:
            r7.g()     // Catch: java.lang.Exception -> L85
            java.util.List r2 = r7.h()     // Catch: java.lang.Exception -> L85
            if (r2 == 0) goto L7f
            int r3 = r2.size()     // Catch: java.lang.Exception -> L85
            if (r3 > 0) goto L1c
            goto L7f
        L1c:
            r3 = 0
        L1d:
            int r4 = r2.size()     // Catch: java.lang.Exception -> L85
            if (r3 >= r4) goto L8e
            java.lang.Object r4 = r2.get(r3)     // Catch: java.lang.Exception -> L85
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4     // Catch: java.lang.Exception -> L85
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            r5.<init>()     // Catch: java.lang.Exception -> L85
            java.lang.String r6 = "html url:"
            r5.append(r6)     // Catch: java.lang.Exception -> L85
            java.lang.String r6 = r4.getHtmlUrl()     // Catch: java.lang.Exception -> L85
            r5.append(r6)     // Catch: java.lang.Exception -> L85
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L85
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)     // Catch: java.lang.Exception -> L85
            if (r4 == 0) goto L7c
            java.lang.String r5 = r4.getHtmlUrl()     // Catch: java.lang.Exception -> L85
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L85
            if (r5 == 0) goto L57
            java.lang.String r5 = r4.getMraid()     // Catch: java.lang.Exception -> L85
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L85
            if (r5 != 0) goto L7c
        L57:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            r2.<init>()     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "adapter htmlurl:"
            r2.append(r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = r4.getHtmlUrl()     // Catch: java.lang.Exception -> L85
            r2.append(r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = " id:"
            r2.append(r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = r4.getId()     // Catch: java.lang.Exception -> L85
            r2.append(r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L85
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> L85
            return r4
        L7c:
            int r3 = r3 + 1
            goto L1d
        L7f:
            java.lang.String r2 = "adapter allCamp is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> L85
            return r1
        L85:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = "==getIntersAvaCampaign 获取campaign 出错"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L8e:
            return r1
    }

    public final void a(com.mbridge.msdk.interstitial.c.a.a r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void b() {
            r4 = this;
            android.content.Context r0 = r4.a
            if (r0 != 0) goto La
            java.lang.String r0 = "context is null"
            r4.b(r0)
            return
        La:
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = "unitid is null"
            r4.b(r0)
            return
        L18:
            com.mbridge.msdk.c.d r0 = r4.k
            if (r0 != 0) goto L22
            java.lang.String r0 = "unitSetting is null please call load"
            r4.b(r0)
            return
        L22:
            int r0 = r0.p()
            java.lang.String r1 = "IntersAdapter"
            if (r0 > 0) goto L44
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "aqn为-1和0 不请求 直接返回失败 apiRepNum："
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)
            java.lang.String r0 = "controller don't request ad"
            r4.b(r0)
            return
        L44:
            java.lang.String r0 = "load 开始清除过期数据"
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)
            r4.g()
            java.util.List r0 = r4.h()
            if (r0 == 0) goto L84
            int r2 = r0.size()
            if (r2 <= 0) goto L84
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "load 本地已有缓存数量："
            r2.append(r3)
            int r3 = r0.size()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto L7e
            java.lang.String r0 = r0.getRequestId()
            goto L80
        L7e:
            java.lang.String r0 = ""
        L80:
            r4.a(r0)
            return
        L84:
            com.mbridge.msdk.interstitial.a.a$a r0 = new com.mbridge.msdk.interstitial.a.a$a
            r0.<init>(r4)
            java.lang.Thread r2 = new java.lang.Thread
            r2.<init>(r0)
            r2.start()
            android.os.Handler r0 = r4.l
            if (r0 == 0) goto La5
            com.mbridge.msdk.interstitial.a.a$b r0 = new com.mbridge.msdk.interstitial.a.a$b
            r0.<init>(r4)
            r4.m = r0
            android.os.Handler r1 = r4.l
            r2 = 90000(0x15f90, double:4.4466E-319)
            r1.postDelayed(r0, r2)
            goto Lad
        La5:
            java.lang.String r0 = "handler 为空 直接load"
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)
            r4.c()
        Lad:
            return
    }

    public final void c() {
            r5 = this;
            java.lang.String r0 = "IntersAdapter"
            android.content.Context r1 = r5.a     // Catch: java.lang.Exception -> L6d
            if (r1 != 0) goto Lc
            java.lang.String r0 = "context is null"
            r5.b(r0)     // Catch: java.lang.Exception -> L6d
            return
        Lc:
            java.lang.String r1 = r5.b     // Catch: java.lang.Exception -> L6d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L6d
            if (r1 == 0) goto L1a
            java.lang.String r0 = "unitid is null"
            r5.b(r0)     // Catch: java.lang.Exception -> L6d
            return
        L1a:
            com.mbridge.msdk.c.d r1 = r5.k     // Catch: java.lang.Exception -> L6d
            if (r1 != 0) goto L24
            java.lang.String r0 = "unitSetting is null please call load"
            r5.b(r0)     // Catch: java.lang.Exception -> L6d
            return
        L24:
            java.lang.String r1 = "load 开始准备请求参数"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L6d
            com.mbridge.msdk.foundation.same.net.g.d r1 = r5.e()     // Catch: java.lang.Exception -> L6d
            if (r1 != 0) goto L3a
            java.lang.String r1 = "load 请求参数为空 load失败"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L6d
            java.lang.String r0 = "request parameter is null"
            r5.b(r0)     // Catch: java.lang.Exception -> L6d
            return
        L3a:
            java.lang.String r0 = r5.b     // Catch: java.lang.Exception -> L6d
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.g(r0)     // Catch: java.lang.Exception -> L6d
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L6d
            if (r2 != 0) goto L4b
            java.lang.String r2 = "j"
            r1.a(r2, r0)     // Catch: java.lang.Exception -> L6d
        L4b:
            com.mbridge.msdk.interstitial.d.a r0 = new com.mbridge.msdk.interstitial.d.a     // Catch: java.lang.Exception -> L6d
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L6d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L6d
            com.mbridge.msdk.interstitial.a.a$2 r2 = new com.mbridge.msdk.interstitial.a.a$2     // Catch: java.lang.Exception -> L6d
            r2.<init>(r5)     // Catch: java.lang.Exception -> L6d
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L6d
            r2.setUnitId(r3)     // Catch: java.lang.Exception -> L6d
            java.lang.String r3 = r5.c     // Catch: java.lang.Exception -> L6d
            r2.setPlacementId(r3)     // Catch: java.lang.Exception -> L6d
            r3 = 279(0x117, float:3.91E-43)
            r2.setAdType(r3)     // Catch: java.lang.Exception -> L6d
            r3 = 1
            java.lang.String r4 = ""
            r0.choiceV3OrV5BySetting(r3, r1, r2, r4)     // Catch: java.lang.Exception -> L6d
            goto L79
        L6d:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "can't show because unknow error"
            r5.b(r0)
            r5.k()
        L79:
            return
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }
}
