package com.tkay.network.toutiao;

public class TTTYInterstitialAdapter extends com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter {
    java.lang.String a;
    int b;
    int c;
    java.lang.String d;
    java.lang.String e;
    int f;
    java.lang.String g;
    boolean h;
    com.bykv.vk.openvk.TTVfNative.InteractionViListener i;
    com.bykv.vk.openvk.TTInteractionVi.AdInteractionListener j;
    com.bykv.vk.openvk.TTVfNative.FullScreenVideoAdListener k;
    com.bykv.vk.openvk.TTFullVideoObject.FullVideoVsInteractionListener l;
    com.bykv.vk.openvk.TTVfNative.NtExpressVfListener m;
    com.bykv.vk.openvk.TTNtExpressObject.NtInteractionListener n;
    com.bykv.vk.openvk.TTAppDownloadListener o;
    private final java.lang.String p;
    private com.bykv.vk.openvk.TTInteractionVi q;
    private com.bykv.vk.openvk.TTFullVideoObject r;
    private com.bykv.vk.openvk.TTNtExpressObject s;
    private java.util.Map<java.lang.String, java.lang.Object> t;
    private boolean u;







    final class 7 implements java.lang.Runnable {
        final java.util.Map a;
        final android.content.Context b;
        final java.util.Map c;
        final com.tkay.network.toutiao.TTTYInterstitialAdapter d;

        7(com.tkay.network.toutiao.TTTYInterstitialAdapter r1, java.util.Map r2, android.content.Context r3, java.util.Map r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r11 = this;
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d
                java.lang.String r0 = r0.e
                java.lang.String r1 = ":"
                java.lang.String[] r0 = r0.split(r1)
                int r1 = r0.length
                r2 = 0
                r3 = 1
                if (r1 <= 0) goto L21
                r1 = r0[r2]     // Catch: java.lang.Exception -> L16
                int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L16
                goto L22
            L16:
                com.tkay.network.toutiao.TTTYInterstitialAdapter r1 = r11.d
                java.lang.String r1 = com.tkay.network.toutiao.TTTYInterstitialAdapter.J(r1)
                java.lang.String r4 = "size set invalidate width"
                android.util.Log.w(r1, r4)
            L21:
                r1 = r3
            L22:
                int r4 = r0.length
                if (r4 <= r3) goto L37
                r0 = r0[r3]     // Catch: java.lang.Exception -> L2c
                int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L2c
                goto L38
            L2c:
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d
                java.lang.String r0 = com.tkay.network.toutiao.TTTYInterstitialAdapter.J(r0)
                java.lang.String r4 = "size set invalidate height"
                android.util.Log.w(r0, r4)
            L37:
                r0 = r3
            L38:
                com.bykv.vk.openvk.TTVfManager r4 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
                java.util.Map r5 = r11.a     // Catch: java.lang.Exception -> L51
                if (r5 == 0) goto L51
                java.util.Map r5 = r11.a     // Catch: java.lang.Exception -> L51
                java.lang.String r6 = "key_width"
                java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Exception -> L51
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L51
                int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L51
                goto L52
            L51:
                r5 = r2
            L52:
                java.util.Map r6 = r11.a     // Catch: java.lang.Exception -> L67
                if (r6 == 0) goto L67
                java.util.Map r6 = r11.a     // Catch: java.lang.Exception -> L67
                java.lang.String r7 = "key_height"
                java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Exception -> L67
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L67
                int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L67
                goto L68
            L67:
                r6 = r2
            L68:
                android.content.Context r7 = r11.b
                com.bykv.vk.openvk.TTVfNative r4 = r4.createVfNative(r7)
                com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r7 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
                com.tkay.network.toutiao.TTTYInterstitialAdapter r8 = r11.d
                java.lang.String r8 = r8.a
                java.util.Map r9 = r11.c
                java.util.Map r10 = r11.a
                r7.<init>(r8, r9, r10)
                android.content.Context r8 = r11.b
                android.content.res.Resources r8 = r8.getResources()
                android.util.DisplayMetrics r8 = r8.getDisplayMetrics()
                int r8 = r8.widthPixels
                android.content.Context r9 = r11.b
                android.content.res.Resources r9 = r9.getResources()
                android.util.DisplayMetrics r9 = r9.getDisplayMetrics()
                int r9 = r9.heightPixels
                r7.setAdCount(r3)
                com.tkay.network.toutiao.TTTYInterstitialAdapter r3 = r11.d
                int r3 = r3.b
                if (r3 == 0) goto Lec
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d     // Catch: java.lang.Throwable -> Ld5
                int r0 = r0.b     // Catch: java.lang.Throwable -> Ld5
                r1 = 2
                if (r0 == r1) goto Lb9
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d     // Catch: java.lang.Throwable -> Ld5
                java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> Ld5
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Ld5
                if (r0 != 0) goto Ld9
                java.lang.String r0 = "1"
                com.tkay.network.toutiao.TTTYInterstitialAdapter r1 = r11.d     // Catch: java.lang.Throwable -> Ld5
                java.lang.String r1 = r1.d     // Catch: java.lang.Throwable -> Ld5
                boolean r0 = android.text.TextUtils.equals(r0, r1)     // Catch: java.lang.Throwable -> Ld5
                if (r0 == 0) goto Ld9
            Lb9:
                if (r5 <= 0) goto Lbc
                goto Lbd
            Lbc:
                r5 = r8
            Lbd:
                if (r6 <= 0) goto Lc0
                goto Lc1
            Lc0:
                r6 = r9
            Lc1:
                android.content.Context r0 = r11.b     // Catch: java.lang.Throwable -> Ld5
                float r1 = (float) r5     // Catch: java.lang.Throwable -> Ld5
                int r0 = com.tkay.network.toutiao.TTTYInterstitialAdapter.a(r0, r1)     // Catch: java.lang.Throwable -> Ld5
                float r0 = (float) r0     // Catch: java.lang.Throwable -> Ld5
                android.content.Context r1 = r11.b     // Catch: java.lang.Throwable -> Ld5
                float r2 = (float) r6     // Catch: java.lang.Throwable -> Ld5
                int r1 = com.tkay.network.toutiao.TTTYInterstitialAdapter.a(r1, r2)     // Catch: java.lang.Throwable -> Ld5
                float r1 = (float) r1     // Catch: java.lang.Throwable -> Ld5
                r7.setExpressViewAcceptedSize(r0, r1)     // Catch: java.lang.Throwable -> Ld5
                goto Ld9
            Ld5:
                r0 = move-exception
                r0.printStackTrace()
            Ld9:
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d
                int r0 = r0.f
                r7.setOrientation(r0)
                com.bykv.vk.openvk.VfSlot r0 = r7.build()
                com.tkay.network.toutiao.TTTYInterstitialAdapter r1 = r11.d
                com.bykv.vk.openvk.TTVfNative$FullScreenVideoAdListener r1 = r1.k
                r4.loadFullVideoVs(r0, r1)
                return
            Lec:
                android.content.Context r3 = r11.b
                android.content.res.Resources r3 = r3.getResources()
                android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
                float r3 = r3.density
                if (r5 > 0) goto L104
                int r5 = java.lang.Math.min(r8, r9)
                float r5 = (float) r5
                r8 = 1106247680(0x41f00000, float:30.0)
                float r8 = r8 * r3
                float r5 = r5 - r8
                goto L105
            L104:
                float r5 = (float) r5
            L105:
                float r5 = r5 / r3
                int r5 = (int) r5
                if (r6 > 0) goto L10a
                goto L10d
            L10a:
                float r2 = (float) r6
                float r2 = r2 / r3
                int r2 = (int) r2
            L10d:
                if (r2 != 0) goto L113
                int r1 = r5 / r1
                int r2 = r1 * r0
            L113:
                com.tkay.network.toutiao.TTTYInterstitialAdapter r0 = r11.d
                java.lang.String r0 = com.tkay.network.toutiao.TTTYInterstitialAdapter.J(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r3 = "expressWidth: "
                r1.<init>(r3)
                r1.append(r5)
                java.lang.String r3 = ", expressHeight: "
                r1.append(r3)
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r0, r1)
                float r0 = (float) r5
                float r1 = (float) r2
                r7.setExpressViewAcceptedSize(r0, r1)
                com.bykv.vk.openvk.VfSlot r0 = r7.build()
                com.tkay.network.toutiao.TTTYInterstitialAdapter r1 = r11.d
                com.bykv.vk.openvk.TTVfNative$NtExpressVfListener r1 = r1.m
                r4.loadItExpressVi(r0, r1)
                return
        }
    }



    public TTTYInterstitialAdapter() {
            r3 = this;
            r3.<init>()
            java.lang.Class r0 = r3.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r3.p = r0
            java.lang.String r0 = ""
            r3.a = r0
            r1 = 0
            r3.b = r1
            r3.c = r1
            r3.d = r0
            java.lang.String r2 = "1:1"
            r3.e = r2
            r2 = 1
            r3.f = r2
            r3.g = r0
            r3.h = r1
            com.tkay.network.toutiao.TTTYInterstitialAdapter$1 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$1
            r0.<init>(r3)
            r3.i = r0
            com.tkay.network.toutiao.TTTYInterstitialAdapter$2 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$2
            r0.<init>(r3)
            r3.j = r0
            com.tkay.network.toutiao.TTTYInterstitialAdapter$3 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$3
            r0.<init>(r3)
            r3.k = r0
            com.tkay.network.toutiao.TTTYInterstitialAdapter$4 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$4
            r0.<init>(r3)
            r3.l = r0
            com.tkay.network.toutiao.TTTYInterstitialAdapter$5 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$5
            r0.<init>(r3)
            r3.m = r0
            com.tkay.network.toutiao.TTTYInterstitialAdapter$6 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$6
            r0.<init>(r3)
            r3.n = r0
            r3.u = r1
            com.tkay.network.toutiao.TTTYInterstitialAdapter$9 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$9
            r0.<init>(r3)
            r3.o = r0
            return
    }

    static com.bykv.vk.openvk.TTNtExpressObject A(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.bykv.vk.openvk.TTNtExpressObject r0 = r0.s
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener B(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener C(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener D(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener E(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener F(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener G(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener H(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener I(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static java.lang.String J(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            java.lang.String r0 = r0.p
            return r0
    }

    static boolean K(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            boolean r0 = r0.u
            return r0
    }

    static boolean L(com.tkay.network.toutiao.TTTYInterstitialAdapter r1) {
            r0 = 1
            r1.u = r0
            return r0
    }

    static com.tkay.core.api.TYEventInterface M(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface N(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface O(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface P(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Q(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface R(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface S(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface T(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface U(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface V(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface W(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface X(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Y(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Z(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static int a(android.content.Context r1, float r2) {
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            r0 = 0
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1065353216(0x3f800000, float:1.0)
        L11:
            float r2 = r2 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    static com.bykv.vk.openvk.TTFullVideoObject a(com.tkay.network.toutiao.TTTYInterstitialAdapter r0, com.bykv.vk.openvk.TTFullVideoObject r1) {
            r0.r = r1
            return r1
    }

    static com.bykv.vk.openvk.TTInteractionVi a(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.bykv.vk.openvk.TTInteractionVi r0 = r0.q
            return r0
    }

    static com.bykv.vk.openvk.TTInteractionVi a(com.tkay.network.toutiao.TTTYInterstitialAdapter r0, com.bykv.vk.openvk.TTInteractionVi r1) {
            r0.q = r1
            return r1
    }

    static com.bykv.vk.openvk.TTNtExpressObject a(com.tkay.network.toutiao.TTTYInterstitialAdapter r0, com.bykv.vk.openvk.TTNtExpressObject r1) {
            r0.s = r1
            return r1
    }

    static java.util.Map a(com.tkay.network.toutiao.TTTYInterstitialAdapter r0, java.util.Map r1) {
            r0.t = r1
            return r1
    }

    private void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYInterstitialAdapter$7 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$7
            r0.<init>(r1, r4, r2, r3)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYInterstitialAdapter r1, android.content.Context r2, java.util.Map r3, java.util.Map r4) {
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYInterstitialAdapter$7 r0 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$7
            r0.<init>(r1, r4, r2, r3)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            java.lang.String r0 = "app_id"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "slot_id"
            java.lang.Object r1 = r3.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r2.a = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L97
            java.lang.String r0 = r2.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            goto L97
        L22:
            java.lang.String r0 = "is_video"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L38
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r2.b = r0
        L38:
            java.lang.String r0 = "layout_type"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L4e
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r2.c = r0
        L4e:
            java.lang.String r0 = "size"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L60
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = r0.toString()
            r2.e = r0
        L60:
            java.lang.String r0 = "personalized_template"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r2.d = r0
            r0 = 1
            java.lang.String r1 = "ad_orientation"
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> L84
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L84
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Exception -> L84
            r1 = 2
            if (r4 == r0) goto L82
            if (r4 == r1) goto L7f
            goto L84
        L7f:
            r2.f = r0     // Catch: java.lang.Exception -> L84
            goto L84
        L82:
            r2.f = r1     // Catch: java.lang.Exception -> L84
        L84:
            java.lang.String r4 = "payload"
            boolean r1 = r3.containsKey(r4)
            if (r1 == 0) goto L96
            java.lang.Object r3 = r3.get(r4)
            java.lang.String r3 = r3.toString()
            r2.g = r3
        L96:
            return r0
        L97:
            r3 = 0
            return r3
    }

    static com.tkay.core.api.TYEventInterface aa(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ab(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ac(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ad(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    private static int b(android.content.Context r1, float r2) {
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            r0 = 0
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1065353216(0x3f800000, float:1.0)
        L11:
            float r2 = r2 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    static java.util.Map b(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.t
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener e(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener f(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener g(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener h(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener i(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener j(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener k(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener l(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.bykv.vk.openvk.TTFullVideoObject m(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.bykv.vk.openvk.TTFullVideoObject r0 = r0.r
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener n(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener p(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener q(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener s(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener t(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener u(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener v(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener w(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener x(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener y(com.tkay.network.toutiao.TTTYInterstitialAdapter r0) {
            com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener r0 = r0.mImpressListener
            return r0
    }

    static int z(com.tkay.network.toutiao.TTTYInterstitialAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.bykv.vk.openvk.TTFullVideoObject r0 = r2.r
            r1 = 0
            if (r0 == 0) goto La
            r0.setFullScreenVideoAdInteractionListener(r1)
            r2.r = r1
        La:
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q
            if (r0 == 0) goto L18
            r0.setViInteractionListener(r1)
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q
            r0.setDownloadListener(r1)
            r2.q = r1
        L18:
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s
            if (r0 == 0) goto L26
            r0.setExpressInteractionListener(r1)
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s
            r0.destroy()
            r2.s = r1
        L26:
            r2.j = r1
            r2.i = r1
            r2.l = r1
            r2.k = r1
            r2.m = r1
            r2.n = r1
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.t
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.bykv.vk.openvk.TTInteractionVi r0 = r1.q
            if (r0 != 0) goto Lf
            com.bykv.vk.openvk.TTFullVideoObject r0 = r1.r
            if (r0 != 0) goto Lf
            com.bykv.vk.openvk.TTNtExpressObject r0 = r1.s
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            boolean r0 = r2.a(r4, r5)
            if (r0 != 0) goto Le
            java.lang.String r3 = ""
            java.lang.String r4 = "app_id or slot_id is empty!"
            r2.notifyATLoadFail(r3, r4)
            return
        Le:
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.tkay.network.toutiao.TTTYInterstitialAdapter$8 r1 = new com.tkay.network.toutiao.TTTYInterstitialAdapter$8
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public void show(android.app.Activity r3) {
            r2 = this;
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L19
            if (r3 == 0) goto L19
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTInteractionVi$AdInteractionListener r1 = r2.j     // Catch: java.lang.Exception -> L4c
            r0.setViInteractionListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r2.o     // Catch: java.lang.Exception -> L4c
            r0.setDownloadListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTInteractionVi r0 = r2.q     // Catch: java.lang.Exception -> L4c
            r0.showInteractionVi(r3)     // Catch: java.lang.Exception -> L4c
        L19:
            com.bykv.vk.openvk.TTFullVideoObject r0 = r2.r     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L32
            if (r3 == 0) goto L32
            com.bykv.vk.openvk.TTFullVideoObject r0 = r2.r     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTFullVideoObject$FullVideoVsInteractionListener r1 = r2.l     // Catch: java.lang.Exception -> L4c
            r0.setFullScreenVideoAdInteractionListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTFullVideoObject r0 = r2.r     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r2.o     // Catch: java.lang.Exception -> L4c
            r0.setDownloadListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTFullVideoObject r0 = r2.r     // Catch: java.lang.Exception -> L4c
            r0.showFullVideoVs(r3)     // Catch: java.lang.Exception -> L4c
        L32:
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L4b
            if (r3 == 0) goto L4b
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTNtExpressObject$NtInteractionListener r1 = r2.n     // Catch: java.lang.Exception -> L4c
            r0.setExpressInteractionListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r2.o     // Catch: java.lang.Exception -> L4c
            r0.setDownloadListener(r1)     // Catch: java.lang.Exception -> L4c
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.s     // Catch: java.lang.Exception -> L4c
            r0.showInteractionExpressAd(r3)     // Catch: java.lang.Exception -> L4c
        L4b:
            return
        L4c:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.h = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
