package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

public final class RewardActionBarControl {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private android.os.Handler mHandler;
    private com.kwad.components.ad.reward.j qx;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.b uB;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.e uF;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.c uG;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.d uH;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a uI;
    private final long uJ;
    private boolean uK;
    private boolean uL;



    public enum ShowActionBarResult extends java.lang.Enum<com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult> {
        private static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult[] $VALUES = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_H5_FAILURE = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_H5_SUCCESS = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_DEFAULT = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_JINNIU = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_LIVE_SUBSCRIBE = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_ORDER = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_ORIGIN_LIVE = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_NATIVE_PLAYABLE_PORTRAIT = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult SHOW_ORDER = null;
        public static final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult TK = null;

        static {
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r1 = 0
                java.lang.String r2 = "SHOW_NATIVE_DEFAULT"
                r0.<init>(r2, r1)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r2 = 1
                java.lang.String r3 = "SHOW_H5_SUCCESS"
                r0.<init>(r3, r2)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_SUCCESS = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r3 = 2
                java.lang.String r4 = "SHOW_H5_FAILURE"
                r0.<init>(r4, r3)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_FAILURE = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r4 = 3
                java.lang.String r5 = "SHOW_ORDER"
                r0.<init>(r5, r4)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_ORDER = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r5 = 4
                java.lang.String r6 = "TK"
                r0.<init>(r6, r5)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.TK = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r6 = 5
                java.lang.String r7 = "SHOW_NATIVE_ORDER"
                r0.<init>(r7, r6)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORDER = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r7 = 6
                java.lang.String r8 = "SHOW_NATIVE_JINNIU"
                r0.<init>(r8, r7)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_JINNIU = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r8 = 7
                java.lang.String r9 = "SHOW_NATIVE_PLAYABLE_PORTRAIT"
                r0.<init>(r9, r8)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r9 = 8
                java.lang.String r10 = "SHOW_NATIVE_LIVE_SUBSCRIBE"
                r0.<init>(r10, r9)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_LIVE_SUBSCRIBE = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult
                r10 = 9
                java.lang.String r11 = "SHOW_NATIVE_ORIGIN_LIVE"
                r0.<init>(r11, r10)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORIGIN_LIVE = r0
                r11 = 10
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult[] r11 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult[r11]
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r12 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT
                r11[r1] = r12
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_SUCCESS
                r11[r2] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_FAILURE
                r11[r3] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_ORDER
                r11[r4] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.TK
                r11[r5] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORDER
                r11[r6] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_JINNIU
                r11[r7] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT
                r11[r8] = r1
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_LIVE_SUBSCRIBE
                r11[r9] = r1
                r11[r10] = r0
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.$VALUES = r11
                return
        }

        ShowActionBarResult(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult> r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = (com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult) r1
                return r1
        }

        public static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult[] values() {
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult[] r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult[] r0 = (com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult[]) r0
                return r0
        }
    }

    static class a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
        private java.util.List<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> uQ;
        private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult uR;

        private a() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                r1.uQ = r0
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a r0) {
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = r0.uR
                return r0
        }

        @Override
        public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r3, android.view.View r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "onActionBarShown result: "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "ActionBarControl"
                com.kwad.sdk.core.e.c.d(r1, r0)
                r2.uR = r3
                java.util.List<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> r0 = r2.uQ
                java.util.Iterator r0 = r0.iterator()
            L1b:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L2b
                java.lang.Object r1 = r0.next()
                com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r1 = (com.kwad.components.ad.reward.presenter.platdetail.actionbar.a) r1
                r1.a(r3, r4)
                goto L1b
            L2b:
                return
        }

        public final void c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2) {
                r1 = this;
                java.util.List<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> r0 = r1.uQ
                r0.add(r2)
                return
        }

        public final void d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2) {
                r1 = this;
                java.util.List<com.kwad.components.ad.reward.presenter.platdetail.actionbar.a> r0 = r1.uQ
                r0.remove(r2)
                return
        }
    }

    public interface b {
        void a(boolean r1, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2);
    }

    public interface c {
        void e(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r1);
    }

    public interface d {
        void f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r1);
    }

    public interface e {
        boolean g(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r1);
    }

    public RewardActionBarControl(com.kwad.components.ad.reward.j r5, android.content.Context r6, com.kwad.sdk.core.response.model.AdTemplate r7) {
            r4 = this;
            r4.<init>()
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a
            r1 = 0
            r0.<init>(r1)
            r4.uI = r0
            r4.qx = r5
            r4.mContext = r6
            r4.mAdTemplate = r7
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r7)
            r4.mAdInfo = r5
            android.os.Handler r5 = new android.os.Handler
            android.os.Looper r6 = android.os.Looper.getMainLooper()
            r5.<init>(r6)
            r4.mHandler = r5
            r4.uK = r1
            r4.uL = r1
            long r5 = com.kwad.sdk.core.response.b.b.aW(r7)
            r0 = 0
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r2 = 1000(0x3e8, double:4.94E-321)
            if (r5 <= 0) goto L37
            long r5 = com.kwad.sdk.core.response.b.b.aW(r7)
            goto L38
        L37:
            r5 = r2
        L38:
            int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r7 > 0) goto L3d
            goto L3e
        L3d:
            r2 = r5
        L3e:
            r4.uJ = r2
            return
    }

    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult R(boolean r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.d(r0)
            if (r0 == 0) goto L14
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$d r0 = r2.uH
            if (r0 == 0) goto L14
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r3 = r2.uI
            r0.f(r3)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r3 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.TK
            return r3
        L14:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.components.ad.reward.a.b.i(r0)
            if (r0 == 0) goto L28
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$c r0 = r2.uG
            if (r0 == 0) goto L28
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r3 = r2.uI
            r0.e(r3)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r3 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_ORDER
            return r3
        L28:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.aX(r0)
            if (r0 == 0) goto L62
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r0)
            if (r0 != 0) goto L62
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$e r0 = r2.uF
            if (r0 != 0) goto L3d
            goto L62
        L3d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "showWebActionBar success in "
            r3.<init>(r0)
            long r0 = r2.uJ
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "ActionBarControl"
            com.kwad.sdk.core.e.c.d(r0, r3)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$e r3 = r2.uF
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = r2.uI
            boolean r3 = r3.g(r0)
            if (r3 == 0) goto L5f
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r3 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_SUCCESS
            return r3
        L5f:
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r3 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_FAILURE
            return r3
        L62:
            r2.S(r3)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r3 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT
            return r3
    }

    private void S(boolean r3) {
            r2 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$b r0 = r2.uB
            if (r0 == 0) goto L15
            java.lang.String r0 = "ActionBarControl"
            java.lang.String r1 = "showNativeActionBar"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 1
            r2.uL = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$b r0 = r2.uB
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r1 = r2.uI
            r0.a(r3, r1)
        L15:
            return
    }

    static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.e a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0) {
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$e r0 = r0.uF
            return r0
    }

    public static void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r1, android.view.View r2, com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r3) {
            if (r1 == 0) goto La
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$2
            r0.<init>(r1, r3, r2)
            r2.post(r0)
        La:
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0, boolean r1) {
            r1 = 1
            r0.uK = r1
            return r1
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0, boolean r1) {
            r1 = 1
            r0.S(r1)
            return
    }

    static boolean b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0) {
            boolean r0 = r0.uL
            return r0
    }

    static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0) {
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = r0.uI
            return r0
    }

    static long d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r2) {
            long r0 = r2.uJ
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate e(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    public final void Q(boolean r4) {
            r3 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r4 = r3.R(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showActionBarOnVideoStart result: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ActionBarControl"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_H5_FAILURE
            if (r4 == r0) goto L1c
            return
        L1c:
            android.os.Handler r4 = r3.mHandler
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$1
            r0.<init>(r3)
            long r1 = r3.uJ
            r4.postDelayed(r0, r1)
            return
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.b r1) {
            r0 = this;
            r0.uB = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.c r1) {
            r0 = this;
            r0.uG = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.d r1) {
            r0 = this;
            r0.uH = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.e r1) {
            r0 = this;
            r0.uF = r1
            return
    }

    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2) {
            r1 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = r1.uI
            r0.c(r2)
            return
    }

    public final void b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2) {
            r1 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = r1.uI
            r0.d(r2)
            return
    }

    public final void im() {
            r2 = this;
            boolean r0 = r2.uK
            if (r0 == 0) goto Lc
            java.lang.String r0 = "ActionBarControl"
            java.lang.String r1 = "showWebActionBar time out on pageStatus"
            com.kwad.sdk.core.e.c.i(r0, r1)
            return
        Lc:
            android.os.Handler r0 = r2.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r0 = 1
            r2.R(r0)
            return
    }

    public final com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult in() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$a r0 = r1.uI
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a.a(r0)
            return r0
    }
}
