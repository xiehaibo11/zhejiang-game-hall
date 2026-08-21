package com.bianfeng.utilslib.screen;

public class FullScreenUtils {
    private static com.bianfeng.utilslib.screen.FullScreenUtils utils;

    public FullScreenUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.screen.FullScreenUtils getInstance() {
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = com.bianfeng.utilslib.screen.FullScreenUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = new com.bianfeng.utilslib.screen.FullScreenUtils
            r0.<init>()
            com.bianfeng.utilslib.screen.FullScreenUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = com.bianfeng.utilslib.screen.FullScreenUtils.utils
            return r0
    }

    private int getOtherBarSize(android.app.Activity r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    private void setFullScreenV12(android.app.Activity r3) {
            r2 = this;
            android.view.Window r0 = r3.getWindow()
            r1 = 1
            r3.requestWindowFeature(r1)
            r3 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r3, r3)
            return
    }

    private void setFullScreenV28(android.app.Activity r3) {
            r2 = this;
            android.view.Window r3 = r3.getWindow()
            android.view.View r0 = r3.getDecorView()
            r1 = 5894(0x1706, float:8.259E-42)
            r0.setSystemUiVisibility(r1)
            r0 = 0
            r3.setStatusBarColor(r0)
            android.view.WindowManager$LayoutParams r0 = r3.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r3.setAttributes(r0)
            return
    }

    public int getBarSize(android.app.Activity r1) {
            r0 = this;
            com.bianfeng.utilslib.screen.NotchScreenUtils r1 = com.bianfeng.utilslib.screen.NotchScreenUtils.getInstance()
            int r1 = r1.getNotSize()
            return r1
    }

    public int getBoomBarSize(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.utilslib.DensityUtils r0 = com.bianfeng.utilslib.DensityUtils.getInstance()
            int r0 = r0.getNavigationBarHeight(r2)
            float r0 = (float) r0
            int r2 = com.bianfeng.utilslib.DensityUtils.px2dp(r2, r0)
            return r2
    }

    public void hideBar(android.app.Activity r3) {
            r2 = this;
            android.view.Window r0 = r3.getWindow()
            android.view.View r0 = r0.getDecorView()
            int r0 = r0.getSystemUiVisibility()
            r0 = r0 | 4614(0x1206, float:6.466E-42)
            android.view.Window r1 = r3.getWindow()
            android.view.View r1 = r1.getDecorView()
            r1.setSystemUiVisibility(r0)
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.screen.NotchScreenUtils.getInstance()
            r0.setOnApplyWindowInsetsListener(r3)
            return
    }

    public void setFullScreen(android.app.Activity r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L25
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isMimu()
            if (r0 == 0) goto L17
            boolean r0 = com.bianfeng.utilslib.screen.XiaoMiUtils.hasNotch(r3)
            if (r0 == 0) goto L17
            r2.setFullScreenV28(r3)
            goto L83
        L17:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isMimu()
            if (r0 == 0) goto L21
            r2.setFullScreenV12(r3)
            goto L83
        L21:
            r2.setFullScreenV28(r3)
            goto L83
        L25:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isHuaWei()
            if (r0 == 0) goto L39
            boolean r0 = com.bianfeng.utilslib.screen.HuaWeiUtils.hasNotch(r3)
            if (r0 == 0) goto L39
            android.view.Window r0 = r3.getWindow()
            com.bianfeng.utilslib.screen.HuaWeiUtils.setFullScreenWindowLayoutInDisplayCutout(r0)
            goto L4c
        L39:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isMimu()
            if (r0 == 0) goto L4c
            boolean r0 = com.bianfeng.utilslib.screen.XiaoMiUtils.hasNotch(r3)
            if (r0 == 0) goto L4c
            android.view.Window r0 = r3.getWindow()
            com.bianfeng.utilslib.screen.XiaoMiUtils.setFullScreenWindowLayoutInDisplayCutout(r0)
        L4c:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isMeizu()
            if (r0 == 0) goto L60
            boolean r0 = com.bianfeng.utilslib.screen.FlymeUtils.hasNotch(r3)
            if (r0 == 0) goto L60
            android.view.Window r3 = r3.getWindow()
            com.bianfeng.utilslib.screen.FlymeUtils.setFullScreenWindowLayoutInDisplayCutout(r3)
            goto L83
        L60:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isVivo()
            if (r0 == 0) goto L70
            boolean r0 = com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasVivoNotch(r3)
            if (r0 == 0) goto L70
            com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasOppoNotch(r3)
            goto L83
        L70:
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isOppo()
            if (r0 == 0) goto L80
            boolean r0 = com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasOppoNotch(r3)
            if (r0 == 0) goto L80
            com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasVivoNotch(r3)
            goto L83
        L80:
            r2.setFullScreenV12(r3)
        L83:
            return
    }
}
