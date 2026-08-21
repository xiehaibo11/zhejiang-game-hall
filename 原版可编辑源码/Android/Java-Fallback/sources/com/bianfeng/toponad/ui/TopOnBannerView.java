package com.bianfeng.toponad.ui;

public class TopOnBannerView implements com.tkay.banner.api.TYBannerListener {
    private static com.bianfeng.toponad.ui.TopOnBannerView showView;
    private static boolean toponadBanner_loadFlag;
    private android.app.Activity activity;
    private java.lang.String adid;
    private android.view.ViewGroup container;
    private int height;
    com.tkay.banner.api.TYBannerView mBannerView;
    private android.widget.LinearLayout mFloatLayout;
    private android.view.WindowManager mWindowManager;
    private java.lang.String position;
    private int width;
    private int x;
    private int y;


    static {
            return
    }

    private TopOnBannerView(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
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

    static android.widget.LinearLayout access$000(com.bianfeng.toponad.ui.TopOnBannerView r0) {
            android.widget.LinearLayout r0 = r0.mFloatLayout
            return r0
    }

    static android.view.WindowManager access$100(com.bianfeng.toponad.ui.TopOnBannerView r0) {
            android.view.WindowManager r0 = r0.mWindowManager
            return r0
    }

    private void displayAD() {
            r2 = this;
            com.tkay.banner.api.TYBannerView r0 = new com.tkay.banner.api.TYBannerView
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r2.mBannerView = r0
            java.lang.String r1 = r2.adid
            r0.setPlacementId(r1)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.banner.api.TYBannerView r1 = r2.mBannerView
            r1.setLocalExtra(r0)
            com.tkay.banner.api.TYBannerView r0 = r2.mBannerView
            r0.setBannerAdListener(r2)
            com.tkay.banner.api.TYBannerView r0 = r2.mBannerView
            r0.loadAd()
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "BANNERAD"
            r0.onAdLoadApi(r1)
            return
    }

    public static com.bianfeng.toponad.ui.TopOnBannerView getInstance(android.app.Activity r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            com.bianfeng.toponad.ui.TopOnBannerView r0 = com.bianfeng.toponad.ui.TopOnBannerView.showView
            if (r0 != 0) goto L14
            com.bianfeng.toponad.ui.TopOnBannerView r0 = new com.bianfeng.toponad.ui.TopOnBannerView
            r1 = r0
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            com.bianfeng.toponad.ui.TopOnBannerView.showView = r0
            goto L29
        L14:
            boolean r9 = com.bianfeng.toponad.ui.TopOnBannerView.toponadBanner_loadFlag
            java.lang.String r10 = "BANNERAD"
            if (r9 == 0) goto L22
            com.bianfeng.toponad.ui.TopOnAdCallBack r9 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r9.onAdLoaded(r10)
            goto L29
        L22:
            com.bianfeng.toponad.ui.TopOnAdCallBack r9 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r9.onAdLoading(r10)
        L29:
            com.bianfeng.toponad.ui.TopOnBannerView r9 = com.bianfeng.toponad.ui.TopOnBannerView.showView
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
            java.lang.String r4 = "R.layout.activity_topon_banner_ad"
            int r3 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r3, r4)
            r4 = 0
            android.view.View r2 = r2.inflate(r3, r4)
            android.widget.LinearLayout r2 = (android.widget.LinearLayout) r2
            r5.mFloatLayout = r2
            android.view.WindowManager r3 = r5.mWindowManager
            r3.addView(r2, r0)
            android.widget.LinearLayout r0 = r5.mFloatLayout
            android.app.Activity r2 = r5.activity
            java.lang.String r3 = "R.id.topon_banner_container"
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
            r2 = this;
            r0 = 0
            com.bianfeng.toponad.ui.TopOnBannerView.toponadBanner_loadFlag = r0
            com.tkay.banner.api.TYBannerView r0 = r2.mBannerView     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto Lc
            com.tkay.banner.api.TYBannerView r0 = r2.mBannerView     // Catch: java.lang.Exception -> Lc
            r0.destroy()     // Catch: java.lang.Exception -> Lc
        Lc:
            r0 = 0
            com.bianfeng.toponad.ui.TopOnBannerView.showView = r0     // Catch: java.lang.Exception -> L1d
            android.widget.LinearLayout r0 = r2.mFloatLayout     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L1d
            android.app.Activity r0 = r2.activity     // Catch: java.lang.Exception -> L1d
            com.bianfeng.toponad.ui.TopOnBannerView$1 r1 = new com.bianfeng.toponad.ui.TopOnBannerView$1     // Catch: java.lang.Exception -> L1d
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1d
            r0.runOnUiThread(r1)     // Catch: java.lang.Exception -> L1d
        L1d:
            return
    }

    @Override
    public void onBannerAutoRefreshFail(com.tkay.core.api.AdError r1) {
            r0 = this;
            java.lang.String r1 = "onBannerAutoRefreshFail"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onBannerAutoRefreshed(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            java.lang.String r1 = "onBannerAutoRefreshed"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onBannerClicked(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onBannerClicked"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "BANNERAD"
            r2.onADClicked(r0)
            return
    }

    @Override
    public void onBannerClose(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onBannerClose"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "BANNERAD"
            r2.onADDismissed(r0)
            r1.closeAd()
            return
    }

    @Override
    public void onBannerFailed(com.tkay.core.api.AdError r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onBannerFailed"
            r0.append(r1)
            java.lang.String r1 = r4.getFullErrorInfo()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r3.closeAd()
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.getCode()
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r4 = r4.getFullErrorInfo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "BANNERAD"
            r0.onNoAD(r1, r4)
            return
    }

    @Override
    public void onBannerLoaded() {
            r2 = this;
            java.lang.String r0 = "onBannerLoaded"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r0 = 1
            com.bianfeng.toponad.ui.TopOnBannerView.toponadBanner_loadFlag = r0
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r1 = "BANNERAD"
            r0.onAdReady(r1)
            return
    }

    @Override
    public void onBannerShow(com.tkay.core.api.TYAdInfo r2) {
            r1 = this;
            java.lang.String r2 = "onBannerShow"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r2 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            java.lang.String r0 = "BANNERAD"
            r2.onADPresent(r0)
            return
    }

    public void showAd() {
            r3 = this;
            android.view.ViewGroup r0 = r3.container
            java.lang.String r1 = "BANNERAD"
            if (r0 == 0) goto L1d
            android.widget.LinearLayout r2 = r3.mFloatLayout
            if (r2 == 0) goto L1d
            com.tkay.banner.api.TYBannerView r2 = r3.mBannerView
            r0.addView(r2)
            android.widget.LinearLayout r0 = r3.mFloatLayout
            r2 = 0
            r0.setVisibility(r2)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r0.onAdShowApi(r1)
            goto L27
        L1d:
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.getYSDKAdCallBack()
            r0.onAdShowCheckFail(r1)
            r3.closeAd()
        L27:
            return
    }
}
