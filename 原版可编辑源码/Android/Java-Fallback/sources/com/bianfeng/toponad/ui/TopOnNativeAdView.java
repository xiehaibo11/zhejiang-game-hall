package com.bianfeng.toponad.ui;

public class TopOnNativeAdView implements com.tkay.nativead.api.TYNativeEventListener, com.tkay.nativead.api.TYNativeNetworkListener {
    private static com.bianfeng.toponad.ui.TopOnNativeAdView showView;
    private static boolean toponadNative_loadFlag;
    private android.app.Activity activity;
    private java.lang.String adid;
    com.tkay.nativead.api.TYNative atNatives;
    private android.view.ViewGroup container;
    private int height;
    private android.widget.LinearLayout mFloatLayout;
    private android.view.WindowManager mWindowManager;
    private java.lang.String position;
    private int width;
    private int x;
    private int y;

    static {
            return
    }

    private TopOnNativeAdView(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            r0.position = r3
            r0.adid = r2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            int r1 = r1.intValue()
            r0.x = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            int r1 = r1.intValue()
            r0.y = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r6)
            int r1 = r1.intValue()
            r0.width = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r7)
            int r1 = r1.intValue()
            r0.height = r1
            r0.initview()
            r0.displayAD()
            return
    }

    private void displayAD() {
            r3 = this;
            com.tkay.nativead.api.TYNative r0 = new com.tkay.nativead.api.TYNative
            android.app.Activity r1 = r3.activity
            java.lang.String r2 = r3.adid
            r0.<init>(r1, r2, r3)
            r3.atNatives = r0
            if (r0 == 0) goto L32
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            int r1 = r3.width
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "key_width"
            r0.put(r2, r1)
            int r1 = r3.height
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "key_height"
            r0.put(r2, r1)
            com.tkay.nativead.api.TYNative r1 = r3.atNatives
            r1.setLocalExtra(r0)
            com.tkay.nativead.api.TYNative r0 = r3.atNatives
            r0.makeAdRequest()
        L32:
            return
    }

    public static com.bianfeng.toponad.ui.TopOnNativeAdView getInstance(android.app.Activity r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            com.bianfeng.toponad.ui.TopOnNativeAdView r0 = com.bianfeng.toponad.ui.TopOnNativeAdView.showView
            if (r0 != 0) goto L14
            com.bianfeng.toponad.ui.TopOnNativeAdView r0 = new com.bianfeng.toponad.ui.TopOnNativeAdView
            r1 = r0
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            com.bianfeng.toponad.ui.TopOnNativeAdView.showView = r0
            goto L29
        L14:
            boolean r9 = com.bianfeng.toponad.ui.TopOnNativeAdView.toponadNative_loadFlag
            java.lang.String r10 = "NATIVAD"
            if (r9 == 0) goto L22
            com.bianfeng.toponad.ui.TopOnAdCallBack r9 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r9.onAdLoaded(r10)
            goto L29
        L22:
            com.bianfeng.toponad.ui.TopOnAdCallBack r9 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r9.onAdLoading(r10)
        L29:
            com.bianfeng.toponad.ui.TopOnNativeAdView r9 = com.bianfeng.toponad.ui.TopOnNativeAdView.showView
            return r9
    }

    private void initview() {
            r5 = this;
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams
            r0.<init>()
            android.app.Activity r1 = r5.activity
            java.lang.String r2 = "window"
            java.lang.Object r1 = r1.getSystemService(r2)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            r5.mWindowManager = r1
            java.lang.String r1 = r5.position
            java.lang.String r2 = "leftcenter"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L21
            r1 = 19
            r0.gravity = r1
            goto L9c
        L21:
            java.lang.String r1 = r5.position
            java.lang.String r2 = "leftbottom"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L31
            r1 = 83
            r0.gravity = r1
            goto L9c
        L31:
            java.lang.String r1 = r5.position
            java.lang.String r2 = "lefttop"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L40
            r1 = 51
            r0.gravity = r1
            goto L9c
        L40:
            java.lang.String r1 = r5.position
            java.lang.String r2 = "centerbottom"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L4f
            r1 = 81
            r0.gravity = r1
            goto L9c
        L4f:
            java.lang.String r1 = r5.position
            java.lang.String r2 = "centertop"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L5e
            r1 = 49
            r0.gravity = r1
            goto L9c
        L5e:
            java.lang.String r1 = r5.position
            java.lang.String r2 = "center"
            boolean r1 = r2.equalsIgnoreCase(r1)
            r2 = 17
            if (r1 == 0) goto L6d
            r0.gravity = r2
            goto L9c
        L6d:
            java.lang.String r1 = r5.position
            java.lang.String r3 = "righttop"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L7c
            r1 = 53
            r0.gravity = r1
            goto L9c
        L7c:
            java.lang.String r1 = r5.position
            java.lang.String r3 = "rightbottom"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L8b
            r1 = 85
            r0.gravity = r1
            goto L9c
        L8b:
            java.lang.String r1 = r5.position
            java.lang.String r3 = "rightcenter"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L9a
            r1 = 21
            r0.gravity = r1
            goto L9c
        L9a:
            r0.gravity = r2
        L9c:
            int r1 = r5.width
            r2 = -2
            if (r1 == 0) goto La4
            r0.width = r1
            goto La6
        La4:
            r0.width = r2
        La6:
            int r1 = r5.height
            if (r1 == 0) goto Lad
            r0.height = r1
            goto Laf
        Lad:
            r0.height = r2
        Laf:
            r1 = 8
            r0.flags = r1
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.type = r2
            int r2 = r5.y
            r0.y = r2
            int r2 = r5.x
            r0.x = r2
            android.app.Activity r2 = r5.activity
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            android.app.Activity r3 = r5.activity
            java.lang.String r4 = "R.layout.activity_topon_native_ad"
            int r3 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r3, r4)
            r4 = 0
            android.view.View r2 = r2.inflate(r3, r4)
            android.widget.LinearLayout r2 = (android.widget.LinearLayout) r2
            r5.mFloatLayout = r2
            android.view.WindowManager r3 = r5.mWindowManager
            r3.addView(r2, r0)
            android.widget.LinearLayout r0 = r5.mFloatLayout
            android.app.Activity r2 = r5.activity
            java.lang.String r3 = "R.id.topon_native_container"
            int r2 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r2, r3)
            android.view.View r0 = r0.findViewById(r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r5.container = r0
            android.widget.LinearLayout r0 = r5.mFloatLayout
            r2 = 0
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r2)
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r2)
            r0.measure(r3, r2)
            android.widget.LinearLayout r0 = r5.mFloatLayout
            r0.setVisibility(r1)
            return
    }

    public void closeAd() {
            r1 = this;
            r0 = 0
            com.bianfeng.toponad.ui.TopOnNativeAdView.toponadNative_loadFlag = r0
            r0 = 0
            com.bianfeng.toponad.ui.TopOnNativeAdView.showView = r0
            return
    }

    @Override
    public void onAdClicked(com.tkay.nativead.api.TYNativeAdView r1, com.tkay.core.api.TYAdInfo r2) {
            r0 = this;
            java.lang.String r1 = "onAdClicked"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onAdImpressed(com.tkay.nativead.api.TYNativeAdView r1, com.tkay.core.api.TYAdInfo r2) {
            r0 = this;
            java.lang.String r1 = "onAdImpressed"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onAdVideoEnd(com.tkay.nativead.api.TYNativeAdView r1) {
            r0 = this;
            java.lang.String r1 = "onAdVideoEnd"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onAdVideoProgress(com.tkay.nativead.api.TYNativeAdView r1, int r2) {
            r0 = this;
            java.lang.String r1 = "onAdVideoProgress"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onAdVideoStart(com.tkay.nativead.api.TYNativeAdView r1) {
            r0 = this;
            java.lang.String r1 = "onAdVideoStart"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onNativeAdLoadFail(com.tkay.core.api.AdError r1) {
            r0 = this;
            java.lang.String r1 = "onNativeAdLoadFail"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            r1 = 0
            com.bianfeng.toponad.ui.TopOnNativeAdView.toponadNative_loadFlag = r1
            return
    }

    @Override
    public void onNativeAdLoaded() {
            r1 = this;
            java.lang.String r0 = "onNativeAdLoaded"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 1
            com.bianfeng.toponad.ui.TopOnNativeAdView.toponadNative_loadFlag = r0
            return
    }

    public void showAd() {
            r1 = this;
            com.tkay.nativead.api.TYNative r0 = r1.atNatives
            if (r0 != 0) goto L5
            return
        L5:
            r0.getNativeAd()
            return
    }
}
