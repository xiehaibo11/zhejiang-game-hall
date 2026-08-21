package com.tkay.network.toutiao;

public class TTTYRewardedVideoAdapter extends com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter {
    java.lang.String a;
    boolean b;
    java.lang.String c;
    boolean d;
    com.bykv.vk.openvk.TTVfNative.RdVideoVfListener e;
    com.bykv.vk.openvk.TTRdVideoObject.RdVrInteractionListener f;
    com.bykv.vk.openvk.TTAppDownloadListener g;
    private final java.lang.String h;
    private com.bykv.vk.openvk.TTRdVideoObject i;
    private java.util.Map<java.lang.String, java.lang.Object> j;
    private boolean k;



    final class 3 implements java.lang.Runnable {
        final android.content.Context a;
        final java.util.Map b;
        final java.util.Map c;
        final com.tkay.network.toutiao.TTTYRewardedVideoAdapter d;

        3(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r1, android.content.Context r2, java.util.Map r3, java.util.Map r4) {
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
                r7 = this;
                com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
                android.content.Context r1 = r7.a
                com.bykv.vk.openvk.TTVfNative r0 = r0.createVfNative(r1)
                com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r1 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = r2.a
                java.util.Map r3 = r7.b
                java.util.Map r4 = r7.c
                r1.<init>(r2, r3, r4)
                android.content.Context r2 = r7.a
                android.content.res.Resources r2 = r2.getResources()
                android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
                int r2 = r2.widthPixels
                android.content.Context r3 = r7.a
                android.content.res.Resources r3 = r3.getResources()
                android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
                int r3 = r3.heightPixels
                java.util.Map r4 = r7.b     // Catch: java.lang.Throwable -> L5d
                java.lang.String r5 = "personalized_template"
                java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L5d
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L5d
                boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5d
                if (r5 != 0) goto L61
                java.lang.String r5 = "1"
                boolean r4 = android.text.TextUtils.equals(r5, r4)     // Catch: java.lang.Throwable -> L5d
                if (r4 == 0) goto L61
                android.content.Context r4 = r7.a     // Catch: java.lang.Throwable -> L5d
                float r2 = (float) r2     // Catch: java.lang.Throwable -> L5d
                int r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.a(r4, r2)     // Catch: java.lang.Throwable -> L5d
                float r2 = (float) r2     // Catch: java.lang.Throwable -> L5d
                android.content.Context r4 = r7.a     // Catch: java.lang.Throwable -> L5d
                float r3 = (float) r3     // Catch: java.lang.Throwable -> L5d
                int r3 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.a(r4, r3)     // Catch: java.lang.Throwable -> L5d
                float r3 = (float) r3     // Catch: java.lang.Throwable -> L5d
                r1.setExpressViewAcceptedSize(r2, r3)     // Catch: java.lang.Throwable -> L5d
                goto L61
            L5d:
                r2 = move-exception
                r2.printStackTrace()
            L61:
                java.util.Map r2 = r7.c
                r3 = 1
                if (r2 == 0) goto L92
                java.lang.String r4 = "ad_is_support_deep_link"
                java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L75
                java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> L75
                boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L75
                r1.setSupportDeepLink(r2)     // Catch: java.lang.Exception -> L75
            L75:
                java.util.Map r2 = r7.c     // Catch: java.lang.Exception -> L92
                java.lang.String r4 = "ad_orientation"
                java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L92
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L92
                int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L92
                if (r2 == r3) goto L8f
                r4 = 2
                if (r2 == r4) goto L8b
                goto L92
            L8b:
                r1.setOrientation(r4)     // Catch: java.lang.Exception -> L92
                goto L92
            L8f:
                r1.setOrientation(r3)     // Catch: java.lang.Exception -> L92
            L92:
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.u(r2)
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto La7
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.v(r2)
                r1.setUserID(r2)
            La7:
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.w(r2)
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto Ldb
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.x(r2)
                java.lang.String r4 = "{network_placement_id}"
                boolean r2 = r2.contains(r4)
                if (r2 == 0) goto Ld2
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r5 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.y(r2)
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r6 = r7.d
                java.lang.String r6 = r6.a
                java.lang.String r4 = r5.replace(r4, r6)
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter.a(r2, r4)
            Ld2:
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                java.lang.String r2 = com.tkay.network.toutiao.TTTYRewardedVideoAdapter.z(r2)
                r1.setMediaExtra(r2)
            Ldb:
                r1.setAdCount(r3)
                com.bykv.vk.openvk.VfSlot r1 = r1.build()
                com.tkay.network.toutiao.TTTYRewardedVideoAdapter r2 = r7.d
                com.bykv.vk.openvk.TTVfNative$RdVideoVfListener r2 = r2.e
                r0.loadRdVideoVr(r1, r2)
                return
        }
    }




    public TTTYRewardedVideoAdapter() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.h = r0
            java.lang.String r0 = ""
            r2.a = r0
            r2.c = r0
            r0 = 0
            r2.d = r0
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$1 r1 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$1
            r1.<init>(r2)
            r2.e = r1
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$2 r1 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$2
            r1.<init>(r2)
            r2.f = r1
            r2.k = r0
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$6 r0 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$6
            r0.<init>(r2)
            r2.g = r0
            return
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener A(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener B(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener C(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener D(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener E(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener F(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener G(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener H(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener I(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener J(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static boolean K(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            boolean r0 = r0.k
            return r0
    }

    static boolean L(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r1) {
            r0 = 1
            r1.k = r0
            return r0
    }

    static com.tkay.core.api.TYEventInterface M(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface N(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface O(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface P(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Q(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface R(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface S(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface T(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface U(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface V(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface W(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface X(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Y(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface Z(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
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

    static com.bykv.vk.openvk.TTRdVideoObject a(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.bykv.vk.openvk.TTRdVideoObject r0 = r0.i
            return r0
    }

    static com.bykv.vk.openvk.TTRdVideoObject a(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0, com.bykv.vk.openvk.TTRdVideoObject r1) {
            r0.i = r1
            return r1
    }

    static java.lang.String a(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0, java.lang.String r1) {
            r0.mUserData = r1
            return r1
    }

    static java.util.Map a(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0, java.util.Map r1) {
            r0.j = r1
            return r1
    }

    private void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$3 r0 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$3
            r0.<init>(r1, r2, r3, r4)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r1, android.content.Context r2, java.util.Map r3, java.util.Map r4) {
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$3 r0 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$3
            r0.<init>(r1, r2, r3, r4)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            java.lang.String r0 = "app_id"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "slot_id"
            java.lang.Object r1 = r3.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r2.a = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L35
            java.lang.String r0 = r2.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L35
        L21:
            java.lang.String r0 = "payload"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L33
            java.lang.Object r3 = r3.get(r0)
            java.lang.String r3 = r3.toString()
            r2.c = r3
        L33:
            r3 = 1
            return r3
        L35:
            r3 = 0
            return r3
    }

    static com.tkay.core.api.TYEventInterface aa(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ab(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ac(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface ad(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
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

    static java.util.Map b(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.j
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener g(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener h(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener i(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener j(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener k(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener l(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener m(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener n(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static int o(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r1) {
            r0 = 2
            r1.mDismissType = r0
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener p(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener q(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static java.lang.String r(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener s(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener t(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener r0 = r0.mImpressionListener
            return r0
    }

    static java.lang.String u(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserId
            return r0
    }

    static java.lang.String v(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserId
            return r0
    }

    static java.lang.String w(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserData
            return r0
    }

    static java.lang.String x(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserData
            return r0
    }

    static java.lang.String y(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserData
            return r0
    }

    static java.lang.String z(com.tkay.network.toutiao.TTTYRewardedVideoAdapter r0) {
            java.lang.String r0 = r0.mUserData
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            r1 = 0
            if (r0 == 0) goto Lf
            r0.setRdVrInteractionListener(r1)
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            r0.setRewardPlayAgainInteractionListener(r1)
            r2.i = r1
        Lf:
            r2.e = r1
            r2.f = r1
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.j
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
            com.bykv.vk.openvk.TTRdVideoObject r0 = r1.i
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r0 = "app_id"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "slot_id"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r2.a = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L35
            java.lang.String r0 = r2.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L35
        L21:
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L33
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = r0.toString()
            r2.c = r0
        L33:
            r0 = 1
            goto L36
        L35:
            r0 = 0
        L36:
            if (r0 != 0) goto L40
            java.lang.String r3 = ""
            java.lang.String r4 = "app_id or slot_id is empty!"
            r2.notifyATLoadFail(r3, r4)
            return
        L40:
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$5 r1 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$5
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public void show(android.app.Activity r3) {
            r2 = this;
            if (r3 == 0) goto L21
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            if (r0 == 0) goto L21
            com.bykv.vk.openvk.TTRdVideoObject$RdVrInteractionListener r1 = r2.f
            r0.setRdVrInteractionListener(r1)
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r2.g
            r0.setDownloadListener(r1)
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            com.tkay.network.toutiao.TTTYRewardedVideoAdapter$4 r1 = new com.tkay.network.toutiao.TTTYRewardedVideoAdapter$4
            r1.<init>(r2)
            r0.setRewardPlayAgainInteractionListener(r1)
            com.bykv.vk.openvk.TTRdVideoObject r0 = r2.i
            r0.showRdVideoVr(r3)
        L21:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.d = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
