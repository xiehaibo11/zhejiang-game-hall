package com.bianfeng.splitscreenwindow.ui;

public class SplitScreenWindow {
    private android.app.Activity mActivity;
    private android.view.WindowManager mWindowManager;
    private com.bianfeng.splitscreenwindow.ui.ViewWebGroup webGroup;
    private android.view.WindowManager.LayoutParams wmParams;

    public SplitScreenWindow(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            r1.mActivity = r2
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams
            r0.<init>()
            r1.wmParams = r0
            java.lang.String r0 = "window"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            r1.mWindowManager = r0
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            r0.hideBar(r2)
            return
    }

    protected void remove() {
            r3 = this;
            android.app.Activity r0 = r3.mActivity
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto L38
            android.view.WindowManager r0 = r3.mWindowManager
            if (r0 == 0) goto L38
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r3.webGroup
            if (r0 == 0) goto L38
            android.view.WindowManager$LayoutParams r0 = r3.wmParams
            r1 = 8
            r0.flags = r1
            android.view.WindowManager r0 = r3.mWindowManager     // Catch: java.lang.Exception -> L24
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r1 = r3.webGroup     // Catch: java.lang.Exception -> L24
            android.widget.RelativeLayout r1 = r1.getFloatLayout()     // Catch: java.lang.Exception -> L24
            android.view.WindowManager$LayoutParams r2 = r3.wmParams     // Catch: java.lang.Exception -> L24
            r0.updateViewLayout(r1, r2)     // Catch: java.lang.Exception -> L24
            goto L28
        L24:
            r0 = move-exception
            r0.printStackTrace()
        L28:
            android.view.WindowManager r0 = r3.mWindowManager     // Catch: java.lang.Exception -> L34
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r1 = r3.webGroup     // Catch: java.lang.Exception -> L34
            android.widget.RelativeLayout r1 = r1.getFloatLayout()     // Catch: java.lang.Exception -> L34
            r0.removeView(r1)     // Catch: java.lang.Exception -> L34
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()
        L38:
            return
    }

    public void showFenping(com.bianfeng.splitscreenwindow.ui.ViewWebGroup r3) {
            r2 = this;
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            if (r0 == 0) goto L12
            android.view.WindowManager r0 = r2.mWindowManager     // Catch: java.lang.Exception -> Le
            android.widget.RelativeLayout r1 = r3.getFloatLayout()     // Catch: java.lang.Exception -> Le
            r0.removeView(r1)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            r2.webGroup = r3
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.UtilsSdk.getNotchScreen()
            int r0 = r0.getNotSize()
            r3.x = r0
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r3 = com.bianfeng.thridlibrary.ThridSdk.getYmnDatafun()
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5_finping
            r3.onClickWithH5Fenping(r0)
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r3 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r0 = r0.getLoginCallback()
            java.lang.String r1 = "SplitScreen"
            r3.onCallWithHashmap(r0, r1)
            com.bianfeng.utilslib.ConfigurationUtils r3 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            android.app.Activity r0 = r2.mActivity
            boolean r3 = r3.isLand(r0)
            if (r3 == 0) goto L65
            com.bianfeng.utilslib.ConfigurationUtils r3 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r3 = r3.getWidth()
            int r3 = r3 / 4
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.UtilsSdk.getNotchScreen()
            int r0 = r0.getNotSize()
            int r3 = r3 - r0
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r0 = r0.getHeight()
            r2.updateView(r3, r0)
            goto L83
        L65:
            com.bianfeng.utilslib.ConfigurationUtils r3 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r3 = r3.getWidth()
            int r3 = r3 / 4
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.UtilsSdk.getNotchScreen()
            int r0 = r0.getNotSize()
            int r3 = r3 - r0
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r0 = r0.getWidth()
            r2.updateView(r0, r3)
        L83:
            return
    }

    protected void showQuanping(com.bianfeng.splitscreenwindow.ui.ViewWebGroup r3) {
            r2 = this;
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup
            if (r0 == 0) goto L12
            android.view.WindowManager r0 = r2.mWindowManager     // Catch: java.lang.Exception -> Le
            android.widget.RelativeLayout r1 = r3.getFloatLayout()     // Catch: java.lang.Exception -> Le
            r0.removeView(r1)     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            r2.webGroup = r3
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r0 = 0
            r3.x = r0
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r3 = com.bianfeng.thridlibrary.ThridSdk.getYmnDatafun()
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5_quanping
            r3.onClickWithH5Fenping(r0)
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r3 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r0 = r0.getLoginCallback()
            java.lang.String r1 = "FullScreen"
            r3.onCallWithHashmap(r0, r1)
            com.bianfeng.utilslib.ConfigurationUtils r3 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r3 = r3.getWidth()
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            int r0 = r0.getHeight()
            r2.updateView(r3, r0)
            return
    }

    protected void updateView(int r3, int r4) {
            r2 = this;
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = com.bianfeng.utilslib.UtilsSdk.getFullScreen()
            android.app.Activity r1 = r2.mActivity
            r0.hideBar(r1)
            android.view.WindowManager$LayoutParams r0 = r2.wmParams
            r0.width = r3
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r3.height = r4
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r4 = 17385(0x43e9, float:2.4362E-41)
            r3.flags = r4
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r4 = 1000(0x3e8, float:1.401E-42)
            r3.type = r4
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r4 = 51
            r3.gravity = r4
            android.view.WindowManager r3 = r2.mWindowManager     // Catch: java.lang.Exception -> L31
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r4 = r2.webGroup     // Catch: java.lang.Exception -> L31
            android.widget.RelativeLayout r4 = r4.getFloatLayout()     // Catch: java.lang.Exception -> L31
            android.view.WindowManager$LayoutParams r0 = r2.wmParams     // Catch: java.lang.Exception -> L31
            r3.addView(r4, r0)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r3 = move-exception
            r3.printStackTrace()
        L35:
            return
    }

    protected void updateViewY(int r3) {
            r2 = this;
            android.view.WindowManager$LayoutParams r0 = r2.wmParams
            if (r0 != 0) goto Le
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "updateViewY wmParams is null"
            r3.e(r0)
            return
        Le:
            com.bianfeng.utilslib.screen.NotchScreenUtils r1 = com.bianfeng.utilslib.UtilsSdk.getNotchScreen()
            int r1 = r1.getNotSize()
            r0.x = r1
            android.view.WindowManager$LayoutParams r0 = r2.wmParams
            r0.y = r3
            android.view.WindowManager$LayoutParams r3 = r2.wmParams
            r0 = 83
            r3.gravity = r0
            android.view.WindowManager r3 = r2.mWindowManager     // Catch: java.lang.Exception -> L30
            com.bianfeng.splitscreenwindow.ui.ViewWebGroup r0 = r2.webGroup     // Catch: java.lang.Exception -> L30
            android.widget.RelativeLayout r0 = r0.getFloatLayout()     // Catch: java.lang.Exception -> L30
            android.view.WindowManager$LayoutParams r1 = r2.wmParams     // Catch: java.lang.Exception -> L30
            r3.updateViewLayout(r0, r1)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r3 = move-exception
            r3.printStackTrace()
        L34:
            return
    }
}
