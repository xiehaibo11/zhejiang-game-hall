package com.kwad.components.ad.reward.c;

public class a {
    private static volatile com.kwad.components.ad.reward.c.a ro;
    private com.kwad.components.ad.reward.j qx;
    private com.kwad.components.ad.reward.c.b rp;
    private volatile boolean rq;
    private volatile boolean rr;
    private java.util.List<java.lang.ref.WeakReference<com.kwad.components.core.webview.jshandler.e>> rs;

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rq = r0
            r1.rr = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.rs = r0
            return
    }

    public static com.kwad.components.ad.reward.c.a gW() {
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.ro
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.ad.reward.c.a> r0 = com.kwad.components.ad.reward.c.a.class
            monitor-enter(r0)
            com.kwad.components.ad.reward.c.a r1 = com.kwad.components.ad.reward.c.a.ro     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.ad.reward.c.a r1 = new com.kwad.components.ad.reward.c.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.ad.reward.c.a.ro = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.ro
            return r0
    }

    private synchronized boolean gY() {
            r2 = this;
            monitor-enter(r2)
            com.kwad.components.ad.reward.c.b r0 = r2.rp     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L10
            com.kwad.components.ad.reward.c.b r0 = r2.rp     // Catch: java.lang.Throwable -> L12
            int r0 = r0.rw     // Catch: java.lang.Throwable -> L12
            int r1 = com.kwad.components.ad.reward.c.b.rt     // Catch: java.lang.Throwable -> L12
            if (r0 != r1) goto L10
            r0 = 1
        Le:
            monitor-exit(r2)
            return r0
        L10:
            r0 = 0
            goto Le
        L12:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final void O(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.gY()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "checkStatusAndToast isCurrentHadExtra: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r2 = ", hadToast: "
            r1.append(r2)
            boolean r2 = r3.rr
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "CurrentExtraRewardHolder"
            com.kwad.sdk.core.e.c.d(r2, r1)
            boolean r1 = r3.rr
            if (r1 != 0) goto L2f
            if (r0 == 0) goto L2f
            r0 = 1
            r3.rr = r0
            java.lang.String r0 = "恭喜获得第2份奖励"
            com.kwad.sdk.utils.v.L(r4, r0)
        L2f:
            return
    }

    public final void a(com.kwad.components.core.webview.jshandler.e r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "addGetNativeHandler: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CurrentExtraRewardHolder"
            com.kwad.sdk.core.e.c.d(r1, r0)
            if (r3 == 0) goto L1f
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.core.webview.jshandler.e>> r0 = r2.rs
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.add(r1)
        L1f:
            return
    }

    public final synchronized void a(com.kwad.sdk.core.response.model.AdTemplate r5, com.kwad.components.ad.reward.c.b r6) {
            r4 = this;
            monitor-enter(r4)
            if (r5 != 0) goto L5
            monitor-exit(r4)
            return
        L5:
            java.lang.String r0 = "CurrentExtraRewardHolder"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = "updateExtraReward: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L88
            org.json.JSONObject r2 = r6.toJson()     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88
            r1.append(r2)     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L88
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L88
            r4.rp = r6     // Catch: java.lang.Throwable -> L88
            int r6 = r6.rw     // Catch: java.lang.Throwable -> L88
            int r0 = com.kwad.components.ad.reward.c.b.rt     // Catch: java.lang.Throwable -> L88
            if (r6 != r0) goto L3f
            boolean r6 = r4.rq     // Catch: java.lang.Throwable -> L88
            if (r6 != 0) goto L3f
            r6 = 1
            r4.rq = r6     // Catch: java.lang.Throwable -> L88
            com.kwad.components.ad.reward.c.b r6 = r4.rp     // Catch: java.lang.Throwable -> L88
            java.lang.String r0 = r5.getUniqueId()     // Catch: java.lang.Throwable -> L88
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.KSRewardVideoActivityProxy.a.A(r0)     // Catch: java.lang.Throwable -> L88
            com.kwad.components.ad.reward.c.c.a(r6, r0)     // Catch: java.lang.Throwable -> L88
            com.kwad.sdk.core.report.a.aH(r5)     // Catch: java.lang.Throwable -> L88
        L3f:
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.core.webview.jshandler.e>> r5 = r4.rs     // Catch: java.lang.Throwable -> L88
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L88
        L45:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L86
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L88
            java.lang.ref.WeakReference r6 = (java.lang.ref.WeakReference) r6     // Catch: java.lang.Throwable -> L88
            java.lang.Object r0 = r6.get()     // Catch: java.lang.Throwable -> L88
            if (r0 != 0) goto L5d
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.core.webview.jshandler.e>> r0 = r4.rs     // Catch: java.lang.Throwable -> L88
            r0.remove(r6)     // Catch: java.lang.Throwable -> L88
            goto L45
        L5d:
            com.kwad.components.ad.reward.c.b r0 = r4.gX()     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = "CurrentExtraRewardHolder"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = "GetNativeDataHandler callback: "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L88
            org.json.JSONObject r3 = r0.toJson()     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L88
            r2.append(r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L88
            java.lang.Object r6 = r6.get()     // Catch: java.lang.Throwable -> L88
            com.kwad.components.core.webview.jshandler.e r6 = (com.kwad.components.core.webview.jshandler.e) r6     // Catch: java.lang.Throwable -> L88
            r6.a(r0)     // Catch: java.lang.Throwable -> L88
            goto L45
        L86:
            monitor-exit(r4)
            return
        L88:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void d(com.kwad.sdk.core.response.model.AdTemplate r4, int r5) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "CurrentExtraRewardHolder"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "updateExtraReward: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L41
            r1.append(r5)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L41
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L41
            com.kwad.components.ad.reward.j r0 = r3.qx     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L2d
            com.kwad.components.ad.reward.j r0 = r3.qx     // Catch: java.lang.Throwable -> L41
            boolean r0 = r0.gc()     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L2d
            int r0 = com.kwad.components.ad.reward.c.b.STATUS_NONE     // Catch: java.lang.Throwable -> L41
            if (r5 != r0) goto L2d
            java.lang.String r4 = "CurrentExtraRewardHolder"
            java.lang.String r5 = "updateExtraReward: cant update to status 2"
            com.kwad.sdk.core.e.c.d(r4, r5)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r3)
            return
        L2d:
            com.kwad.components.ad.reward.c.a r0 = gW()     // Catch: java.lang.Throwable -> L41
            com.kwad.components.ad.reward.c.b r0 = r0.gX()     // Catch: java.lang.Throwable -> L41
            r0.L(r5)     // Catch: java.lang.Throwable -> L41
            com.kwad.components.ad.reward.c.a r5 = gW()     // Catch: java.lang.Throwable -> L41
            r5.a(r4, r0)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r3)
            return
        L41:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized com.kwad.components.ad.reward.c.b gX() {
            r3 = this;
            monitor-enter(r3)
            com.kwad.components.ad.reward.c.b r0 = r3.rp     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto Le
            com.kwad.components.ad.reward.c.b r0 = com.kwad.components.ad.reward.c.c.ha()     // Catch: java.lang.Throwable -> L29
            r3.rp = r0     // Catch: java.lang.Throwable -> L29
            r1 = 0
            r0.rw = r1     // Catch: java.lang.Throwable -> L29
        Le:
            java.lang.String r0 = "CurrentExtraRewardHolder"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "getCurrentExtraReward: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L29
            com.kwad.components.ad.reward.c.b r2 = r3.rp     // Catch: java.lang.Throwable -> L29
            int r2 = r2.rw     // Catch: java.lang.Throwable -> L29
            r1.append(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L29
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L29
            com.kwad.components.ad.reward.c.b r0 = r3.rp     // Catch: java.lang.Throwable -> L29
            monitor-exit(r3)
            return r0
        L29:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized void reset() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            r2.rp = r0     // Catch: java.lang.Throwable -> Ld
            r1 = 0
            r2.rr = r1     // Catch: java.lang.Throwable -> Ld
            r2.rq = r1     // Catch: java.lang.Throwable -> Ld
            r2.qx = r0     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final void setCallerContext(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.qx = r1
            return
    }
}
