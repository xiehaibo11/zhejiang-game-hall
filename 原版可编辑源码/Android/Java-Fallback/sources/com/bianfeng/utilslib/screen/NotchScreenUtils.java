package com.bianfeng.utilslib.screen;

public class NotchScreenUtils {
    private static com.bianfeng.utilslib.screen.NotchScreenUtils notchScreenUtils;
    private int size;


    private NotchScreenUtils() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.size = r0
            return
    }

    static int access$000(com.bianfeng.utilslib.screen.NotchScreenUtils r0) {
            int r0 = r0.size
            return r0
    }

    static int access$002(com.bianfeng.utilslib.screen.NotchScreenUtils r0, int r1) {
            r0.size = r1
            return r1
    }

    public static com.bianfeng.utilslib.screen.NotchScreenUtils getInstance() {
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.screen.NotchScreenUtils.notchScreenUtils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = new com.bianfeng.utilslib.screen.NotchScreenUtils
            r0.<init>()
            com.bianfeng.utilslib.screen.NotchScreenUtils.notchScreenUtils = r0
        Lb:
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.screen.NotchScreenUtils.notchScreenUtils
            return r0
    }

    private int getStatusBarHeight(android.app.Activity r4) {
            r3 = this;
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isMeizu()
            if (r0 == 0) goto L11
            boolean r0 = com.bianfeng.utilslib.screen.FlymeUtils.hasNotch(r4)
            if (r0 == 0) goto L11
            int r4 = com.bianfeng.utilslib.screen.FlymeUtils.getNotHeight(r4)
            return r4
        L11:
            boolean r0 = com.bianfeng.utilslib.screen.XiaoMiUtils.hasNotch(r4)
            if (r0 != 0) goto L2c
            boolean r0 = com.bianfeng.utilslib.screen.HuaWeiUtils.hasNotch(r4)
            if (r0 != 0) goto L2c
            boolean r0 = com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasOppoNotch(r4)
            if (r0 != 0) goto L2c
            boolean r0 = com.bianfeng.utilslib.screen.VivoAndOppoUtils.hasVivoNotch(r4)
            if (r0 == 0) goto L2a
            goto L2c
        L2a:
            r4 = 0
            return r4
        L2c:
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r0 = "status_bar_height"
            java.lang.String r1 = "dimen"
            java.lang.String r2 = "android"
            int r0 = r4.getIdentifier(r0, r1, r2)
            int r4 = r4.getDimensionPixelSize(r0)
            return r4
    }

    public int getNotSize() {
            r1 = this;
            int r0 = r1.size
            return r0
    }

    public void setOnApplyWindowInsetsListener(android.app.Activity r4) {
            r3 = this;
            boolean r0 = com.bianfeng.utilslib.screen.RomUtils.isVivo()
            r1 = 0
            if (r0 == 0) goto La
            r3.size = r1
            return
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r0 >= r2) goto L13
            r3.size = r1
            return
        L13:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L20
            int r4 = r3.getStatusBarHeight(r4)
            r3.size = r4
            return
        L20:
            android.view.Window r4 = r4.getWindow()
            android.view.View r4 = r4.getDecorView()
            com.bianfeng.utilslib.screen.NotchScreenUtils$1 r0 = new com.bianfeng.utilslib.screen.NotchScreenUtils$1
            r0.<init>(r3)
            r4.setOnApplyWindowInsetsListener(r0)
            return
    }
}
