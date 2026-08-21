package com.tkay.network.toutiao;

public class TTTYSplashAdapter extends com.tkay.splashad.unitgroup.api.CustomSplashAdapter implements com.bykv.vk.openvk.CSJSplashAd.SplashAdListener {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    com.bykv.vk.openvk.CSJSplashAd d;
    boolean e;
    com.tkay.network.toutiao.TTTYSplashEyeAd f;
    android.view.View g;
    java.lang.String h;
    boolean i;
    com.bykv.vk.openvk.TTAppDownloadListener j;
    private final java.lang.String k;
    private boolean l;
    private java.util.Map<java.lang.String, java.lang.Object> m;
    private boolean n;


    final class 2 implements java.lang.Runnable {
        final com.bykv.vk.openvk.VfSlot.Builder a;
        final com.bykv.vk.openvk.TTVfNative b;
        final com.tkay.network.toutiao.TTTYSplashAdapter c;


        2(com.tkay.network.toutiao.TTTYSplashAdapter r1, com.bykv.vk.openvk.VfSlot.Builder r2, com.bykv.vk.openvk.TTVfNative r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r4 = this;
                com.bykv.vk.openvk.VfSlot$Builder r0 = r4.a     // Catch: java.lang.Exception -> L17
                com.bykv.vk.openvk.VfSlot r0 = r0.build()     // Catch: java.lang.Exception -> L17
                com.bykv.vk.openvk.TTVfNative r1 = r4.b     // Catch: java.lang.Exception -> L17
                com.tkay.network.toutiao.TTTYSplashAdapter$2$1 r2 = new com.tkay.network.toutiao.TTTYSplashAdapter$2$1     // Catch: java.lang.Exception -> L17
                r2.<init>(r4)     // Catch: java.lang.Exception -> L17
                com.tkay.network.toutiao.TTTYSplashAdapter r3 = r4.c     // Catch: java.lang.Exception -> L17
                int r3 = com.tkay.network.toutiao.TTTYSplashAdapter.d(r3)     // Catch: java.lang.Exception -> L17
                r1.loadSphVs(r0, r2, r3)     // Catch: java.lang.Exception -> L17
                return
            L17:
                r0 = move-exception
                com.tkay.network.toutiao.TTTYSplashAdapter r1 = r4.c
                java.lang.String r0 = r0.getMessage()
                java.lang.String r2 = ""
                r1.notifyATLoadFail(r2, r0)
                return
        }
    }

    final class 3 implements com.bykv.vk.openvk.CSJSplashAd.SplashClickEyeListener {
        final com.tkay.network.toutiao.TTTYSplashAdapter a;

        3(com.tkay.network.toutiao.TTTYSplashAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onSplashClickEyeClick() {
                r1 = this;
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.toutiao.TTTYSplashAdapter.e(r0)
                if (r0 == 0) goto L11
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r1.a
                com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = com.tkay.network.toutiao.TTTYSplashAdapter.f(r0)
                r0.onSplashAdClicked()
            L11:
                return
        }

        @Override
        public final void onSplashClickEyeClose() {
                r3 = this;
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r3.a
                boolean r0 = r0.e
                if (r0 == 0) goto L1c
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r3.a
                com.tkay.network.toutiao.TTTYSplashEyeAd r0 = r0.f
                if (r0 == 0) goto L1c
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r3.a
                com.tkay.network.toutiao.TTTYSplashEyeAd r0 = r0.f
                com.tkay.splashad.api.TYSplashEyeAdListener r0 = r0.getSplashEyeAdListener()
                if (r0 == 0) goto L1c
                r1 = 1
                java.lang.String r2 = ""
                r0.onAdDismiss(r1, r2)
            L1c:
                return
        }

        @Override
        public final void onSplashClickEyeReadyToShow(com.bykv.vk.openvk.CSJSplashAd r4) {
                r3 = this;
                com.tkay.network.toutiao.TTTYSplashAdapter r4 = r3.a
                r0 = 1
                r4.e = r0
                com.tkay.network.toutiao.TTTYSplashAdapter r4 = r3.a
                com.tkay.network.toutiao.TTTYSplashEyeAd r0 = new com.tkay.network.toutiao.TTTYSplashEyeAd
                com.tkay.network.toutiao.TTTYSplashAdapter r1 = r3.a
                com.bykv.vk.openvk.CSJSplashAd r2 = r1.d
                r0.<init>(r1, r2)
                r4.f = r0
                com.tkay.network.toutiao.TTTYSplashAdapter r4 = r3.a
                com.tkay.network.toutiao.TTTYSplashEyeAd r4 = r4.f
                com.tkay.network.toutiao.TTTYSplashAdapter r0 = r3.a
                android.view.View r0 = r0.g
                r4.setSplashView(r0)
                return
        }
    }


    public TTTYSplashAdapter() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.k = r0
            java.lang.String r0 = ""
            r2.a = r0
            r2.b = r0
            r2.c = r0
            r1 = 0
            r2.l = r1
            r2.h = r0
            r2.i = r1
            r2.n = r1
            com.tkay.network.toutiao.TTTYSplashAdapter$4 r0 = new com.tkay.network.toutiao.TTTYSplashAdapter$4
            r0.<init>(r2)
            r2.j = r0
            return
    }

    private static int a(android.content.Context r1, float r2) {
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

    static java.util.Map a(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.m
            return r0
    }

    static java.util.Map a(com.tkay.network.toutiao.TTTYSplashAdapter r0, java.util.Map r1) {
            r0.m = r1
            return r1
    }

    private void a() {
            r2 = this;
            boolean r0 = r2.l
            if (r0 == 0) goto Le
            com.bykv.vk.openvk.CSJSplashAd r0 = r2.d
            com.tkay.network.toutiao.TTTYSplashAdapter$3 r1 = new com.tkay.network.toutiao.TTTYSplashAdapter$3
            r1.<init>(r2)
            r0.setSplashClickEyeListener(r1)
        Le:
            return
    }

    private void a(android.content.Context r9, java.util.Map<java.lang.String, java.lang.Object> r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r8 = this;
            java.lang.String r0 = "button_type"
            java.lang.String r1 = "zoomoutad_sw"
            java.lang.String r2 = "key_height"
            java.lang.String r3 = "key_width"
            com.bykv.vk.openvk.TTVfManager r4 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            android.content.Context r9 = r9.getApplicationContext()
            com.bykv.vk.openvk.TTVfNative r4 = r4.createVfNative(r9)
            com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r5 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
            java.lang.String r6 = r8.b
            r5.<init>(r6, r10, r11)
            r6 = 0
            boolean r7 = r11.containsKey(r3)     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L2f
            java.lang.Object r3 = r11.get(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L31
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L31
            goto L36
        L2f:
            r3 = r6
            goto L36
        L31:
            r3 = move-exception
            r3.printStackTrace()
            goto L2f
        L36:
            boolean r7 = r11.containsKey(r2)     // Catch: java.lang.Throwable -> L4a
            if (r7 == 0) goto L4e
            java.lang.Object r11 = r11.get(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L4a
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.Throwable -> L4a
            r6 = r11
            goto L4e
        L4a:
            r11 = move-exception
            r11.printStackTrace()
        L4e:
            if (r3 > 0) goto L5a
            android.content.res.Resources r11 = r9.getResources()
            android.util.DisplayMetrics r11 = r11.getDisplayMetrics()
            int r3 = r11.widthPixels
        L5a:
            if (r6 > 0) goto L66
            android.content.res.Resources r11 = r9.getResources()
            android.util.DisplayMetrics r11 = r11.getDisplayMetrics()
            int r6 = r11.heightPixels
        L66:
            r5.setImageAcceptedSize(r3, r6)
            float r11 = (float) r3
            int r11 = a(r9, r11)
            float r11 = (float) r11
            float r2 = (float) r6
            int r9 = a(r9, r2)
            float r9 = (float) r9
            r5.setExpressViewAcceptedSize(r11, r9)
            boolean r9 = r10.containsKey(r1)     // Catch: java.lang.Exception -> L8e
            if (r9 == 0) goto L8e
            java.lang.String r9 = "2"
            java.lang.Object r11 = r10.get(r1)     // Catch: java.lang.Exception -> L8e
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L8e
            boolean r9 = android.text.TextUtils.equals(r9, r11)     // Catch: java.lang.Exception -> L8e
            r8.l = r9     // Catch: java.lang.Exception -> L8e
        L8e:
            boolean r9 = r10.containsKey(r0)     // Catch: java.lang.Exception -> L97
            if (r9 == 0) goto L97
            r10.get(r0)     // Catch: java.lang.Exception -> L97
        L97:
            com.tkay.network.toutiao.TTTYSplashAdapter$2 r9 = new com.tkay.network.toutiao.TTTYSplashAdapter$2
            r9.<init>(r8, r5, r4)
            r8.postOnMainThread(r9)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYSplashAdapter r8, android.content.Context r9, java.util.Map r10, java.util.Map r11) {
            java.lang.String r0 = "button_type"
            java.lang.String r1 = "zoomoutad_sw"
            java.lang.String r2 = "key_height"
            java.lang.String r3 = "key_width"
            com.bykv.vk.openvk.TTVfManager r4 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            android.content.Context r9 = r9.getApplicationContext()
            com.bykv.vk.openvk.TTVfNative r4 = r4.createVfNative(r9)
            com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r5 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
            java.lang.String r6 = r8.b
            r5.<init>(r6, r10, r11)
            r6 = 0
            boolean r7 = r11.containsKey(r3)     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L2f
            java.lang.Object r3 = r11.get(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L31
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L31
            goto L36
        L2f:
            r3 = r6
            goto L36
        L31:
            r3 = move-exception
            r3.printStackTrace()
            goto L2f
        L36:
            boolean r7 = r11.containsKey(r2)     // Catch: java.lang.Throwable -> L4a
            if (r7 == 0) goto L4e
            java.lang.Object r11 = r11.get(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L4a
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.Throwable -> L4a
            r6 = r11
            goto L4e
        L4a:
            r11 = move-exception
            r11.printStackTrace()
        L4e:
            if (r3 > 0) goto L5a
            android.content.res.Resources r11 = r9.getResources()
            android.util.DisplayMetrics r11 = r11.getDisplayMetrics()
            int r3 = r11.widthPixels
        L5a:
            if (r6 > 0) goto L66
            android.content.res.Resources r11 = r9.getResources()
            android.util.DisplayMetrics r11 = r11.getDisplayMetrics()
            int r6 = r11.heightPixels
        L66:
            r5.setImageAcceptedSize(r3, r6)
            float r11 = (float) r3
            int r11 = a(r9, r11)
            float r11 = (float) r11
            float r2 = (float) r6
            int r9 = a(r9, r2)
            float r9 = (float) r9
            r5.setExpressViewAcceptedSize(r11, r9)
            boolean r9 = r10.containsKey(r1)     // Catch: java.lang.Exception -> L8e
            if (r9 == 0) goto L8e
            java.lang.String r9 = "2"
            java.lang.Object r11 = r10.get(r1)     // Catch: java.lang.Exception -> L8e
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L8e
            boolean r9 = android.text.TextUtils.equals(r9, r11)     // Catch: java.lang.Exception -> L8e
            r8.l = r9     // Catch: java.lang.Exception -> L8e
        L8e:
            boolean r9 = r10.containsKey(r0)     // Catch: java.lang.Exception -> L97
            if (r9 == 0) goto L97
            r10.get(r0)     // Catch: java.lang.Exception -> L97
        L97:
            com.tkay.network.toutiao.TTTYSplashAdapter$2 r9 = new com.tkay.network.toutiao.TTTYSplashAdapter$2
            r9.<init>(r8, r5, r4)
            r8.postOnMainThread(r9)
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
            r2.b = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L49
        L21:
            java.lang.String r0 = "0"
            r2.c = r0
            java.lang.String r0 = "personalized_template"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L35
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r2.c = r0
        L35:
            java.lang.String r0 = "payload"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L47
            java.lang.Object r3 = r3.get(r0)
            java.lang.String r3 = r3.toString()
            r2.h = r3
        L47:
            r3 = 1
            return r3
        L49:
            r3 = 0
            return r3
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static int d(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            int r0 = r0.mFetchAdTimeout
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener e(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static com.tkay.splashad.unitgroup.api.CustomSplashEventListener f(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r0 = r0.mImpressionListener
            return r0
    }

    static boolean g(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            boolean r0 = r0.n
            return r0
    }

    static boolean h(com.tkay.network.toutiao.TTTYSplashAdapter r1) {
            r0 = 1
            r1.n = r0
            return r0
    }

    static com.tkay.core.api.TYEventInterface i(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface j(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface k(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface l(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface m(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface n(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface o(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface p(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface q(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface r(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface s(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface t(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface u(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface v(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface w(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface x(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface y(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface z(com.tkay.network.toutiao.TTTYSplashAdapter r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    @Override
    public void destory() {
            r0 = this;
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.m
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
            java.lang.String r0 = r1.b
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
    public com.tkay.splashad.api.ITYSplashEyeAd getSplashEyeAd() {
            r1 = this;
            com.tkay.network.toutiao.TTTYSplashEyeAd r0 = r1.f
            return r0
    }

    @Override
    public boolean isAdReady() {
            r1 = this;
            com.bykv.vk.openvk.CSJSplashAd r0 = r1.d
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public boolean isSupportCustomSkipView() {
            r1 = this;
            r0 = 1
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
            r2.b = r1
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L49
        L21:
            java.lang.String r0 = "0"
            r2.c = r0
            java.lang.String r0 = "personalized_template"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L35
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r2.c = r0
        L35:
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L47
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = r0.toString()
            r2.h = r0
        L47:
            r0 = 1
            goto L4a
        L49:
            r0 = 0
        L4a:
            if (r0 != 0) goto L54
            java.lang.String r3 = ""
            java.lang.String r4 = "app_id or slot_id is empty!"
            r2.notifyATLoadFail(r3, r4)
            return
        L54:
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.tkay.network.toutiao.TTTYSplashAdapter$1 r1 = new com.tkay.network.toutiao.TTTYSplashAdapter$1
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public void onSplashAdClick(com.bykv.vk.openvk.CSJSplashAd r1) {
            r0 = this;
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = r0.mImpressionListener
            if (r1 == 0) goto L9
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r1 = r0.mImpressionListener
            r1.onSplashAdClicked()
        L9:
            return
    }

    @Override
    public void onSplashAdClose(com.bykv.vk.openvk.CSJSplashAd r3, int r4) {
            r2 = this;
            r0 = 1
            r1 = 2
            if (r4 == r0) goto L11
            r3 = 3
            if (r4 == r1) goto Le
            if (r4 == r3) goto La
            goto L1c
        La:
            r3 = 4
            r2.mDismissType = r3
            goto L1c
        Le:
            r2.mDismissType = r3
            goto L1c
        L11:
            r2.mDismissType = r1
            boolean r4 = r2.l
            if (r4 == 0) goto L1c
            if (r3 == 0) goto L1c
            r3.startClickEye()
        L1c:
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3 = r2.mImpressionListener
            if (r3 == 0) goto L25
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r3 = r2.mImpressionListener
            r3.onSplashAdDismiss()
        L25:
            return
    }

    @Override
    public void onSplashAdShow(com.bykv.vk.openvk.CSJSplashAd r4) {
            r3 = this;
            com.tkay.network.toutiao.TTTYInitManager r4 = com.tkay.network.toutiao.TTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L16
            com.tkay.core.common.f.d r0 = r3.getTrackingInfo()     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = r0.l()     // Catch: java.lang.Throwable -> L16
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L16
            com.bykv.vk.openvk.CSJSplashAd r2 = r3.d     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            r4.a(r0, r1)     // Catch: java.lang.Throwable -> L16
        L16:
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r4 = r3.mImpressionListener
            if (r4 == 0) goto L1f
            com.tkay.splashad.unitgroup.api.CustomSplashEventListener r4 = r3.mImpressionListener
            r4.onSplashAdShow()
        L1f:
            return
    }

    @Override
    public void show(android.app.Activity r3, android.view.ViewGroup r4) {
            r2 = this;
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            if (r3 == 0) goto L49
            boolean r3 = r2.isCustomSkipView()
            if (r3 == 0) goto Lf
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            r3.hideSkipButton()
        Lf:
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            com.bykv.vk.openvk.TTAppDownloadListener r0 = r2.j
            r3.setDownloadListener(r0)
            boolean r3 = r2.l
            if (r3 == 0) goto L24
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            com.tkay.network.toutiao.TTTYSplashAdapter$3 r0 = new com.tkay.network.toutiao.TTTYSplashAdapter$3
            r0.<init>(r2)
            r3.setSplashClickEyeListener(r0)
        L24:
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            r3.setSplashAdListener(r2)
            com.bykv.vk.openvk.CSJSplashAd r3 = r2.d
            android.view.View r3 = r3.getSplashView()
            if (r3 == 0) goto L49
            boolean r0 = r2.l
            r1 = -1
            if (r0 == 0) goto L41
            r2.g = r3
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r1)
            r4.addView(r3, r0)
            return
        L41:
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r1)
            r4.addView(r3, r0)
        L49:
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBiddingListener r5) {
            r1 = this;
            r5 = 1
            r1.i = r5
            int r0 = r1.getMixedFormatAdType()
            if (r0 != 0) goto Lb
            r2 = 0
            return r2
        Lb:
            r1.loadCustomNetworkAd(r2, r3, r4)
            return r5
    }

    @Override
    public void startSplashCustomSkipViewClickEye() {
            r1 = this;
            com.bykv.vk.openvk.CSJSplashAd r0 = r1.d
            if (r0 == 0) goto L7
            r0.startClickEye()
        L7:
            return
    }
}
