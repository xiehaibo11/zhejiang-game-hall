package com.tkay.network.toutiao;

public class TTTYBannerAdapter extends com.tkay.banner.unitgroup.api.CustomBannerAdapter {
    java.lang.String a;
    android.content.Context b;
    android.view.View c;
    int d;
    int e;
    int f;
    java.lang.String g;
    boolean h;
    boolean i;
    com.bykv.vk.openvk.TTBnObject j;
    com.bykv.vk.openvk.TTVfNative.BnVfListener k;
    com.bykv.vk.openvk.TTBnObject.AdInteractionListener l;
    com.bykv.vk.openvk.TTVfNative.NtExpressVfListener m;
    com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener n;
    com.bykv.vk.openvk.TTAppDownloadListener o;
    private final java.lang.String p;
    private com.bykv.vk.openvk.TTNtExpressObject q;
    private java.util.Map<java.lang.String, java.lang.Object> r;
    private boolean s;





    final class 5 implements java.lang.Runnable {
        final java.util.Map a;
        final java.util.Map b;
        final android.content.Context c;
        final com.tkay.network.toutiao.TTTYBannerAdapter d;

        5(com.tkay.network.toutiao.TTTYBannerAdapter r1, java.util.Map r2, java.util.Map r3, android.content.Context r4) {
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
                com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
                java.util.Map r1 = r11.a
                java.lang.String r2 = "size"
                boolean r1 = r1.containsKey(r2)
                if (r1 == 0) goto L19
                java.util.Map r1 = r11.a
                java.lang.Object r1 = r1.get(r2)
                java.lang.String r1 = r1.toString()
                goto L1b
            L19:
                java.lang.String r1 = ""
            L1b:
                java.util.Map r2 = r11.a
                java.lang.String r3 = "layout_type"
                boolean r2 = r2.containsKey(r3)
                r4 = 0
                if (r2 == 0) goto L35
                java.util.Map r2 = r11.a
                java.lang.Object r2 = r2.get(r3)
                java.lang.String r2 = r2.toString()
                int r2 = java.lang.Integer.parseInt(r2)
                goto L36
            L35:
                r2 = r4
            L36:
                java.util.Map r3 = r11.a
                java.lang.String r5 = "media_size"
                boolean r3 = r3.containsKey(r5)
                if (r3 == 0) goto L4f
                java.util.Map r3 = r11.a
                java.lang.Object r3 = r3.get(r5)
                java.lang.String r3 = r3.toString()
                int r3 = java.lang.Integer.parseInt(r3)
                goto L50
            L4f:
                r3 = r4
            L50:
                r5 = 100
                r6 = 1
                r7 = 600(0x258, float:8.41E-43)
                if (r2 != r6) goto L77
                switch(r3) {
                    case 0: goto L74;
                    case 1: goto L72;
                    case 2: goto L6f;
                    case 3: goto L6c;
                    case 4: goto L69;
                    case 5: goto L66;
                    case 6: goto L63;
                    case 7: goto L60;
                    case 8: goto L5d;
                    default: goto L5a;
                }
            L5a:
                r1 = r4
                r7 = r1
                goto L9a
            L5d:
                r1 = 500(0x1f4, float:7.0E-43)
                goto L9a
            L60:
                r1 = 400(0x190, float:5.6E-43)
                goto L9a
            L63:
                r1 = 388(0x184, float:5.44E-43)
                goto L9a
            L66:
                r1 = 200(0xc8, float:2.8E-43)
                goto L9a
            L69:
                r1 = 286(0x11e, float:4.01E-43)
                goto L9a
            L6c:
                r1 = 250(0xfa, float:3.5E-43)
                goto L9a
            L6f:
                r1 = 150(0x96, float:2.1E-43)
                goto L9a
            L72:
                r1 = r5
                goto L9a
            L74:
                r1 = 90
                goto L9a
            L77:
                boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L94
                if (r2 != 0) goto L5a
                java.lang.String r2 = "x"
                java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Exception -> L94
                r2 = r1[r4]     // Catch: java.lang.Exception -> L94
                int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L94
                r1 = r1[r6]     // Catch: java.lang.Exception -> L91
                int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L91
                r7 = r2
                goto L9a
            L91:
                r1 = move-exception
                r7 = r2
                goto L96
            L94:
                r1 = move-exception
                r7 = r4
            L96:
                r1.printStackTrace()
                r1 = r4
            L9a:
                if (r7 == 0) goto La1
                if (r1 != 0) goto L9f
                goto La1
            L9f:
                r5 = r1
                goto La3
            La1:
                r7 = 640(0x280, float:8.97E-43)
            La3:
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r11.d
                r1.d = r7
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r11.d
                r1.e = r5
                java.util.Map r1 = r11.b
                if (r1 == 0) goto L10a
                java.lang.String r2 = "key_width"
                boolean r1 = r1.containsKey(r2)
                if (r1 == 0) goto Ld9
                java.util.Map r1 = r11.b
                java.lang.Object r1 = r1.get(r2)
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Ld5
                double r1 = java.lang.Double.parseDouble(r1)     // Catch: java.lang.Throwable -> Ld5
                android.content.Context r3 = r11.c     // Catch: java.lang.Throwable -> Ld5
                android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> Ld5
                android.util.DisplayMetrics r3 = r3.getDisplayMetrics()     // Catch: java.lang.Throwable -> Ld5
                float r3 = r3.density     // Catch: java.lang.Throwable -> Ld5
                double r8 = (double) r3
                double r1 = r1 / r8
                int r1 = (int) r1
                goto Lda
            Ld5:
                r1 = move-exception
                r1.printStackTrace()
            Ld9:
                r1 = r4
            Lda:
                java.util.Map r2 = r11.b
                java.lang.String r3 = "key_height"
                boolean r2 = r2.containsKey(r3)
                if (r2 == 0) goto L106
                java.util.Map r2 = r11.b
                java.lang.Object r2 = r2.get(r3)
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L102
                double r2 = java.lang.Double.parseDouble(r2)     // Catch: java.lang.Throwable -> L102
                android.content.Context r5 = r11.c     // Catch: java.lang.Throwable -> L102
                android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Throwable -> L102
                android.util.DisplayMetrics r5 = r5.getDisplayMetrics()     // Catch: java.lang.Throwable -> L102
                float r4 = r5.density     // Catch: java.lang.Throwable -> L102
                double r4 = (double) r4
                double r2 = r2 / r4
                int r4 = (int) r2
                goto L106
            L102:
                r2 = move-exception
                r2.printStackTrace()
            L106:
                r10 = r4
                r4 = r1
                r1 = r10
                goto L10b
            L10a:
                r1 = r4
            L10b:
                android.content.Context r2 = r11.c
                com.bykv.vk.openvk.TTVfNative r0 = r0.createVfNative(r2)
                com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r2 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
                com.tkay.network.toutiao.TTTYBannerAdapter r3 = r11.d
                java.lang.String r3 = r3.a
                java.util.Map r5 = r11.a
                java.util.Map r8 = r11.b
                r2.<init>(r3, r5, r8)
                r2.setAdCount(r6)
                if (r4 > 0) goto L127
                int r7 = r7 / 2
                float r3 = (float) r7
                goto L128
            L127:
                float r3 = (float) r4
            L128:
                if (r1 > 0) goto L12c
                r1 = 0
                goto L12d
            L12c:
                float r1 = (float) r1
            L12d:
                r2.setExpressViewAcceptedSize(r3, r1)
                com.bykv.vk.openvk.VfSlot r1 = r2.build()
                com.tkay.network.toutiao.TTTYBannerAdapter r2 = r11.d
                com.bykv.vk.openvk.TTVfNative$NtExpressVfListener r2 = r2.m
                r0.loadBnExpressVb(r1, r2)
                return
        }
    }

    final class 6 implements com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback {
        final com.tkay.network.toutiao.TTTYBannerAdapter a;

        6(com.tkay.network.toutiao.TTTYBannerAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCancel() {
                r0 = this;
                return
        }

        @java.lang.Deprecated
        public final void onRefuse() {
                r0 = this;
                return
        }

        @java.lang.Deprecated
        public final void onSelected(int r1, java.lang.String r2) {
                r0 = this;
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.toutiao.TTTYBannerAdapter.r(r1)
                if (r1 == 0) goto L11
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.toutiao.TTTYBannerAdapter.s(r1)
                r1.onBannerAdClose()
            L11:
                return
        }

        @Override
        public final void onSelected(int r1, java.lang.String r2, boolean r3) {
                r0 = this;
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.toutiao.TTTYBannerAdapter.p(r1)
                if (r1 == 0) goto L11
                com.tkay.network.toutiao.TTTYBannerAdapter r1 = r0.a
                com.tkay.banner.unitgroup.api.CustomBannerEventListener r1 = com.tkay.network.toutiao.TTTYBannerAdapter.q(r1)
                r1.onBannerAdClose()
            L11:
                return
        }

        @Override
        public final void onShow() {
                r0 = this;
                return
        }
    }



    public TTTYBannerAdapter() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.p = r0
            java.lang.String r0 = ""
            r2.a = r0
            r0 = 0
            r2.i = r0
            com.tkay.network.toutiao.TTTYBannerAdapter$1 r1 = new com.tkay.network.toutiao.TTTYBannerAdapter$1
            r1.<init>(r2)
            r2.k = r1
            com.tkay.network.toutiao.TTTYBannerAdapter$2 r1 = new com.tkay.network.toutiao.TTTYBannerAdapter$2
            r1.<init>(r2)
            r2.l = r1
            com.tkay.network.toutiao.TTTYBannerAdapter$3 r1 = new com.tkay.network.toutiao.TTTYBannerAdapter$3
            r1.<init>(r2)
            r2.m = r1
            com.tkay.network.toutiao.TTTYBannerAdapter$4 r1 = new com.tkay.network.toutiao.TTTYBannerAdapter$4
            r1.<init>(r2)
            r2.n = r1
            r2.s = r0
            com.tkay.network.toutiao.TTTYBannerAdapter$8 r0 = new com.tkay.network.toutiao.TTTYBannerAdapter$8
            r0.<init>(r2)
            r2.o = r0
            return
    }

    static com.tkay.core.api.TYEventInterface A(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface B(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface C(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface D(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface E(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface F(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface G(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface H(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface I(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface J(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface K(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface L(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface M(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.bykv.vk.openvk.TTNtExpressObject a(com.tkay.network.toutiao.TTTYBannerAdapter r0, com.bykv.vk.openvk.TTNtExpressObject r1) {
            r0.q = r1
            return r1
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static java.util.Map a(com.tkay.network.toutiao.TTTYBannerAdapter r0, java.util.Map r1) {
            r0.r = r1
            return r1
    }

    private void a() {
            r3 = this;
            com.bykv.vk.openvk.TTNtExpressObject r0 = r3.q
            if (r0 == 0) goto L22
            com.bykv.vk.openvk.TTNtExpressObject$ExpressNtInteractionListener r1 = r3.n
            r0.setExpressInteractionListener(r1)
            com.bykv.vk.openvk.TTNtExpressObject r0 = r3.q
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r3.o
            r0.setDownloadListener(r1)
            android.content.Context r0 = r3.b
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L22
            android.app.Activity r0 = (android.app.Activity) r0
            com.bykv.vk.openvk.TTNtExpressObject r1 = r3.q
            com.tkay.network.toutiao.TTTYBannerAdapter$6 r2 = new com.tkay.network.toutiao.TTTYBannerAdapter$6
            r2.<init>(r3)
            r1.setDislikeCallback(r0, r2)
        L22:
            return
    }

    private void a(android.app.Activity r2, com.bykv.vk.openvk.TTNtExpressObject r3) {
            r1 = this;
            com.tkay.network.toutiao.TTTYBannerAdapter$6 r0 = new com.tkay.network.toutiao.TTTYBannerAdapter$6
            r0.<init>(r1)
            r3.setDislikeCallback(r2, r0)
            return
    }

    private void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYBannerAdapter$5 r0 = new com.tkay.network.toutiao.TTTYBannerAdapter$5
            r0.<init>(r1, r3, r4, r2)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYBannerAdapter r1, android.content.Context r2, java.util.Map r3, java.util.Map r4) {
            android.content.Context r2 = r2.getApplicationContext()
            com.tkay.network.toutiao.TTTYBannerAdapter$5 r0 = new com.tkay.network.toutiao.TTTYBannerAdapter$5
            r0.<init>(r1, r3, r4, r2)
            r1.runOnNetworkRequestThread(r0)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "nw_rft"
            java.lang.String r1 = "app_id"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "slot_id"
            java.lang.Object r2 = r4.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r3.a = r2
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            if (r1 != 0) goto L55
            java.lang.String r1 = r3.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L24
            goto L55
        L24:
            r3.f = r2
            boolean r1 = r4.containsKey(r0)     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L41
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L3d
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L3d
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L3d
            r3.f = r0     // Catch: java.lang.Throwable -> L3d
            goto L41
        L3d:
            r0 = move-exception
            r0.printStackTrace()
        L41:
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L53
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r4 = r4.toString()
            r3.g = r4
        L53:
            r4 = 1
            return r4
        L55:
            return r2
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener c(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener d(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener e(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener f(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.bykv.vk.openvk.TTNtExpressObject g(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.bykv.vk.openvk.TTNtExpressObject r0 = r0.q
            return r0
    }

    static void h(com.tkay.network.toutiao.TTTYBannerAdapter r3) {
            com.bykv.vk.openvk.TTNtExpressObject r0 = r3.q
            if (r0 == 0) goto L22
            com.bykv.vk.openvk.TTNtExpressObject$ExpressNtInteractionListener r1 = r3.n
            r0.setExpressInteractionListener(r1)
            com.bykv.vk.openvk.TTNtExpressObject r0 = r3.q
            com.bykv.vk.openvk.TTAppDownloadListener r1 = r3.o
            r0.setDownloadListener(r1)
            android.content.Context r0 = r3.b
            boolean r1 = r0 instanceof android.app.Activity
            if (r1 == 0) goto L22
            android.app.Activity r0 = (android.app.Activity) r0
            com.bykv.vk.openvk.TTNtExpressObject r1 = r3.q
            com.tkay.network.toutiao.TTTYBannerAdapter$6 r2 = new com.tkay.network.toutiao.TTTYBannerAdapter$6
            r2.<init>(r3)
            r1.setDislikeCallback(r0, r2)
        L22:
            return
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener i(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener j(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener k(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener l(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static java.util.Map m(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.r
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener n(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener p(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener q(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener r(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static com.tkay.banner.unitgroup.api.CustomBannerEventListener s(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.banner.unitgroup.api.CustomBannerEventListener r0 = r0.mImpressionEventListener
            return r0
    }

    static boolean t(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            boolean r0 = r0.s
            return r0
    }

    static boolean u(com.tkay.network.toutiao.TTTYBannerAdapter r1) {
            r0 = 1
            r1.s = r0
            return r0
    }

    static com.tkay.core.api.TYEventInterface v(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface w(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface x(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface y(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface z(com.tkay.network.toutiao.TTTYBannerAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    @Override
    public void destory() {
            r2 = this;
            r0 = 0
            r2.c = r0
            com.bykv.vk.openvk.TTNtExpressObject r1 = r2.q
            if (r1 == 0) goto L11
            r1.setExpressInteractionListener(r0)
            com.bykv.vk.openvk.TTNtExpressObject r1 = r2.q
            r1.destroy()
            r2.q = r0
        L11:
            r2.l = r0
            r2.k = r0
            r2.n = r0
            r2.m = r0
            r2.b = r0
            return
    }

    @Override
    public android.view.View getBannerView() {
            r1 = this;
            android.view.View r0 = r1.c
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.r
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
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            boolean r0 = r2.a(r4)
            java.lang.String r1 = ""
            if (r0 != 0) goto Le
            java.lang.String r3 = "app_id or slot_id is empty!"
            r2.notifyATLoadFail(r1, r3)
            return
        Le:
            boolean r0 = r3 instanceof android.app.Activity
            if (r0 != 0) goto L18
            java.lang.String r3 = "Context must be activity."
            r2.notifyATLoadFail(r1, r3)
            return
        L18:
            r2.b = r3
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.tkay.network.toutiao.TTTYBannerAdapter$7 r1 = new com.tkay.network.toutiao.TTTYBannerAdapter$7
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.i = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
