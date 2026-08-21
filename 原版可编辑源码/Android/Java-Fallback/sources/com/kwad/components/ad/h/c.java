package com.kwad.components.ad.h;

public final class c implements java.lang.Runnable {
    private static final android.os.Handler nV = null;
    private static volatile boolean nZ;
    private final long nW;
    private final com.kwad.sdk.core.response.model.AdTemplate nX;
    private boolean nY;
    private com.kwad.components.ad.h.d oa;




    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.components.ad.h.c.nV = r0
            return
    }

    public c(com.kwad.components.core.internal.api.a r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.nY = r0
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()
            r2.nX = r3
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            int r3 = com.kwad.sdk.core.response.b.a.cE(r3)
            long r0 = (long) r3
            r2.nW = r0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "PushAdManager create adTemplate: "
            r3.<init>(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.nX
            int r0 = r0.hashCode()
            r3.append(r0)
            java.lang.String r0 = ", "
            r3.append(r0)
            long r0 = r2.nW
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "PushAdManager"
            com.kwad.sdk.core.e.c.d(r0, r3)
            return
    }

    static com.kwad.components.ad.h.d a(com.kwad.components.ad.h.c r0, com.kwad.components.ad.h.d r1) {
            r0.oa = r1
            return r1
    }

    private static void a(int r1, java.lang.Runnable r2, long r3) {
            android.os.Handler r0 = com.kwad.components.ad.h.c.nV
            android.os.Message r2 = android.os.Message.obtain(r0, r2)
            r2.what = r1
            android.os.Handler r1 = com.kwad.components.ad.h.c.nV
            r1.sendMessageDelayed(r2, r3)
            return
    }

    static boolean access$002(boolean r0) {
            r0 = 0
            com.kwad.components.ad.h.c.nZ = r0
            return r0
    }

    static void b(com.kwad.components.ad.h.c r0) {
            r0.ff()
            return
    }

    private void ff() {
            r2 = this;
            com.kwad.components.ad.h.b r0 = com.kwad.components.ad.h.b.fa()
            boolean r0 = r0.fc()
            if (r0 != 0) goto L12
            java.lang.String r0 = "PushAdManager"
            java.lang.String r1 = "run preCheckResult false"
            com.kwad.sdk.core.e.c.d(r0, r1)
            return
        L12:
            r0 = 0
            com.kwad.components.ad.h.c.nZ = r0
            boolean r0 = r2.nY
            if (r0 == 0) goto L1a
            return
        L1a:
            com.kwad.components.ad.h.d r0 = r2.oa
            if (r0 == 0) goto L31
            boolean r0 = r0.fk()
            if (r0 == 0) goto L31
            r0 = 1
            r2.nY = r0
            com.kwad.components.ad.h.d r0 = r2.oa
            com.kwad.components.ad.h.c$3 r1 = new com.kwad.components.ad.h.c$3
            r1.<init>(r2)
            r0.c(r1)
        L31:
            return
    }

    public final void d(com.kwad.components.core.internal.api.a r6) {
            r5 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.getAdTemplate()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.nX
            boolean r1 = r0.equals(r1)
            java.lang.String r2 = "PushAdManager"
            if (r1 != 0) goto L14
            java.lang.String r6 = "onAdExit not current ad"
            com.kwad.sdk.core.e.c.d(r2, r6)
            return
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "onAdExit showPushAdDelayTime: "
            r1.<init>(r3)
            long r3 = r5.nW
            r1.append(r3)
            java.lang.String r3 = ", adTemplate: "
            r1.append(r3)
            int r0 = r0.hashCode()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.kwad.sdk.core.e.c.d(r2, r0)
            boolean r6 = r6.ae()
            if (r6 == 0) goto L41
            r6 = 1000001(0xf4241, float:1.4013E-39)
            long r0 = r5.nW
            a(r6, r5, r0)
        L41:
            return
    }

    public final void fe() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "startRequestPushAd processingPush: "
            r0.<init>(r1)
            boolean r1 = com.kwad.components.ad.h.c.nZ
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushAdManager"
            com.kwad.sdk.core.e.c.w(r1, r0)
            boolean r0 = com.kwad.components.ad.h.c.nZ
            if (r0 == 0) goto L1a
            return
        L1a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.nX
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            if (r0 == 0) goto L2f
            r0 = 1
            com.kwad.components.ad.h.c.nZ = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.nX
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            com.kwad.components.ad.h.c$1 r1 = new com.kwad.components.ad.h.c$1
            r1.<init>(r2)
            com.kwad.components.core.i.a.b(r0, r1)
        L2f:
            return
    }

    public final void fg() {
            r3 = this;
            java.lang.String r0 = "PushAdManager"
            java.lang.String r1 = "onOutSDKPage: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.os.Handler r1 = com.kwad.components.ad.h.c.nV
            r2 = 1000001(0xf4241, float:1.4013E-39)
            boolean r1 = r1.hasMessages(r2)
            if (r1 != 0) goto L1f
            java.lang.String r1 = "onOutSDKPage: sendMessageDelay MSG_WHAT_PAGE_OUT"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 1000002(0xf4242, float:1.401301E-39)
            r1 = 500(0x1f4, double:2.47E-321)
            a(r0, r3, r1)
        L1f:
            return
    }

    @Override
    public final void run() {
            r2 = this;
            com.kwad.components.core.e.a.e r0 = com.kwad.components.core.e.a.e.mN()
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L17
            com.kwad.components.core.e.a.e r0 = com.kwad.components.core.e.a.e.mN()
            com.kwad.components.ad.h.c$2 r1 = new com.kwad.components.ad.h.c$2
            r1.<init>(r2)
            r0.a(r1)
            return
        L17:
            r2.ff()
            return
    }
}
