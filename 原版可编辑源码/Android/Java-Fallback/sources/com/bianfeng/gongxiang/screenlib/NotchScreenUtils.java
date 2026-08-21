package com.bianfeng.gongxiang.screenlib;

class NotchScreenUtils {
    private static com.bianfeng.gongxiang.screenlib.NotchScreenUtils notchScreenUtils;
    private int size;


    private NotchScreenUtils() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.size = r0
            return
    }

    static int access$000(com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0) {
            int r0 = r0.size
            return r0
    }

    static int access$002(com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0, int r1) {
            r0.size = r1
            return r1
    }

    static boolean access$100(com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0, android.app.Activity r1) {
            boolean r0 = r0.isLand(r1)
            return r0
    }

    private int getActivityOrientation(android.app.Activity r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L11
            android.content.ComponentName r3 = r3.getComponentName()     // Catch: java.lang.Exception -> L11
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r3 = r0.getActivityInfo(r3, r1)     // Catch: java.lang.Exception -> L11
            int r3 = r3.screenOrientation     // Catch: java.lang.Exception -> L11
            return r3
        L11:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    public static com.bianfeng.gongxiang.screenlib.NotchScreenUtils getInstance() {
            com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0 = com.bianfeng.gongxiang.screenlib.NotchScreenUtils.notchScreenUtils
            if (r0 != 0) goto Lb
            com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0 = new com.bianfeng.gongxiang.screenlib.NotchScreenUtils
            r0.<init>()
            com.bianfeng.gongxiang.screenlib.NotchScreenUtils.notchScreenUtils = r0
        Lb:
            com.bianfeng.gongxiang.screenlib.NotchScreenUtils r0 = com.bianfeng.gongxiang.screenlib.NotchScreenUtils.notchScreenUtils
            return r0
    }

    private int getStatusBarHeight(android.app.Activity r4) {
            r3 = this;
            boolean r0 = com.bianfeng.gongxiang.screenlib.RomUtils.isMeizu()
            if (r0 == 0) goto L11
            boolean r0 = com.bianfeng.gongxiang.screenlib.FlymeUtils.hasNotch(r4)
            if (r0 == 0) goto L11
            int r4 = com.bianfeng.gongxiang.screenlib.FlymeUtils.getNotHeight(r4)
            return r4
        L11:
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r0 = "status_bar_height"
            java.lang.String r1 = "dimen"
            java.lang.String r2 = "android"
            int r0 = r4.getIdentifier(r0, r1, r2)
            int r4 = r4.getDimensionPixelSize(r0)
            return r4
    }

    private boolean isLand(android.app.Activity r2) {
            r1 = this;
            int r0 = r1.getActivityOrientation(r2)
            android.content.res.Resources r2 = r2.getResources()
            r2.getConfiguration()
            r2 = 2
            if (r0 != r2) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    public int getNotSize() {
            r1 = this;
            int r0 = r1.size
            return r0
    }

    public void setOnApplyWindowInsetsListener(android.app.Activity r4) {
            r3 = this;
            boolean r0 = com.bianfeng.gongxiang.screenlib.RomUtils.isVivo()
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
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            com.bianfeng.gongxiang.screenlib.NotchScreenUtils$1 r1 = new com.bianfeng.gongxiang.screenlib.NotchScreenUtils$1
            r1.<init>(r3, r4)
            r0.setOnApplyWindowInsetsListener(r1)
            return
    }
}
