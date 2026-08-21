package com.mbridge.msdk.mbnative.c;

public class a implements com.mbridge.msdk.out.NativeListener.NativeAdListener {
    private static final java.lang.String a = null;
    private com.mbridge.msdk.out.NativeListener.NativeAdListener b;
    private boolean c;
    private java.lang.String d;
    private android.content.Context e;
    private boolean f;

    static {
            java.lang.Class<com.mbridge.msdk.mbnative.c.a> r0 = com.mbridge.msdk.mbnative.c.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbnative.c.a.a = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    public a(com.mbridge.msdk.out.NativeListener.NativeAdListener r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.b = r2
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public final void b() {
            r1 = this;
            r0 = 1
            r1.c = r0
            return
    }

    @Override
    public void onAdClick(com.mbridge.msdk.out.Campaign r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbnative.c.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onAdClick,campaign:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.out.NativeListener$NativeAdListener r0 = r3.b
            if (r0 == 0) goto L1d
            r0.onAdClick(r4)
        L1d:
            return
    }

    @Override
    public void onAdFramesLoaded(java.util.List<com.mbridge.msdk.out.Frame> r2) {
            r1 = this;
            com.mbridge.msdk.out.NativeListener$NativeAdListener r0 = r1.b
            if (r0 == 0) goto L7
            r0.onAdFramesLoaded(r2)
        L7:
            return
    }

    @Override
    public void onAdLoadError(java.lang.String r4) {
            r3 = this;
            r0 = 0
            r3.c = r0
            java.lang.String r0 = com.mbridge.msdk.mbnative.c.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onAdLoadError,message:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.out.NativeListener$NativeAdListener r0 = r3.b
            if (r0 == 0) goto L3f
            r0.onAdLoadError(r4)
            android.content.Context r0 = r3.e
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r3.e = r0
        L2e:
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            android.content.Context r0 = r3.e
            java.lang.String r1 = r3.d
            boolean r2 = r3.f
            com.mbridge.msdk.mbnative.d.a.a(r0, r4, r1, r2)
        L3f:
            return
    }

    @Override
    public void onAdLoaded(java.util.List<com.mbridge.msdk.out.Campaign> r3, int r4) {
            r2 = this;
            r0 = 0
            r2.c = r0     // Catch: java.lang.Exception -> L23
            monitor-enter(r3)     // Catch: java.lang.Exception -> L23
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L20
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            com.mbridge.msdk.out.NativeListener$NativeAdListener r1 = r2.b     // Catch: java.lang.Exception -> L23
            if (r1 == 0) goto L27
            int r1 = r0.size()     // Catch: java.lang.Exception -> L23
            if (r1 <= 0) goto L1a
            com.mbridge.msdk.out.NativeListener$NativeAdListener r3 = r2.b     // Catch: java.lang.Exception -> L23
            r3.onAdLoaded(r0, r4)     // Catch: java.lang.Exception -> L23
            goto L27
        L1a:
            com.mbridge.msdk.out.NativeListener$NativeAdListener r0 = r2.b     // Catch: java.lang.Exception -> L23
            r0.onAdLoaded(r3, r4)     // Catch: java.lang.Exception -> L23
            goto L27
        L20:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            throw r4     // Catch: java.lang.Exception -> L23
        L23:
            r3 = move-exception
            r3.printStackTrace()
        L27:
            return
    }

    @Override
    public void onLoggingImpression(int r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbnative.c.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onLoggingImpression,adsourceType:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.out.NativeListener$NativeAdListener r0 = r3.b
            if (r0 == 0) goto L1d
            r0.onLoggingImpression(r4)
        L1d:
            return
    }
}
