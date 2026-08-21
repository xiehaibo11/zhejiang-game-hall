package com.bianfeng.gongxiang.screenlib;

class SplashViewUtils {
    private static com.bianfeng.gongxiang.screenlib.SplashViewUtils viewUtils;
    private android.graphics.Bitmap bitmap;
    private int height;
    private android.widget.ImageView ret_img;
    private int width;


    private SplashViewUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.widget.ImageView access$000(com.bianfeng.gongxiang.screenlib.SplashViewUtils r0) {
            android.widget.ImageView r0 = r0.ret_img
            return r0
    }

    static android.graphics.Bitmap access$100(com.bianfeng.gongxiang.screenlib.SplashViewUtils r0) {
            android.graphics.Bitmap r0 = r0.bitmap
            return r0
    }

    static android.graphics.Bitmap access$102(com.bianfeng.gongxiang.screenlib.SplashViewUtils r0, android.graphics.Bitmap r1) {
            r0.bitmap = r1
            return r1
    }

    private int calculateInSampleSize(android.graphics.BitmapFactory.Options r4, android.graphics.Bitmap r5) {
            r3 = this;
            int r5 = r4.outWidth
            int r4 = r4.outHeight
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "height111111111=="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "width=="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk111"
            android.util.Log.i(r1, r0)
            int r0 = r3.height
            r1 = 1
            if (r4 > r0) goto L2b
            int r0 = r3.width
            if (r5 <= r0) goto L3e
        L2b:
            int r4 = r4 / 2
            int r5 = r5 / 2
        L2f:
            int r0 = r5 / r1
            int r2 = r3.height
            if (r0 < r2) goto L3e
            int r0 = r4 / r1
            int r2 = r3.width
            if (r0 < r2) goto L3e
            int r1 = r1 * 2
            goto L2f
        L3e:
            return r1
    }

    private android.graphics.Bitmap getBitmap(android.app.Activity r4, java.lang.String r5) {
            r3 = this;
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            android.content.res.Resources r1 = r4.getResources()
            int r2 = r3.getId(r4, r5)
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeResource(r1, r2, r0)
            int r1 = r3.calculateInSampleSize(r0, r1)
            r0.inSampleSize = r1
            r1 = 0
            r0.inJustDecodeBounds = r1
            android.content.res.Resources r1 = r4.getResources()
            int r4 = r3.getId(r4, r5)
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeResource(r1, r4, r0)
            return r4
    }

    private int getId(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "\\."
            java.lang.String[] r4 = r4.split(r0)
            r0 = 2
            r0 = r4[r0]
            r1 = 1
            r4 = r4[r1]
            int r3 = r2.getId(r3, r0, r4)
            return r3
    }

    private int getId(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> Ld
            int r2 = r0.getIdentifier(r3, r4, r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public static com.bianfeng.gongxiang.screenlib.SplashViewUtils getInstance() {
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r0 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.viewUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.gongxiang.screenlib.SplashViewUtils> r0 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.class
            monitor-enter(r0)
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r1 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.viewUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r1 = new com.bianfeng.gongxiang.screenlib.SplashViewUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.gongxiang.screenlib.SplashViewUtils.viewUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r0 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.viewUtils
            return r0
    }

    private void getScreenSize(android.app.Activity r2) {
            r1 = this;
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.WindowManager r2 = r2.getWindowManager()
            android.view.Display r2 = r2.getDefaultDisplay()
            r2.getMetrics(r0)
            int r2 = r0.widthPixels
            r1.width = r2
            int r2 = r0.heightPixels
            r1.height = r2
            return
    }

    public void removeView(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.gongxiang.screenlib.SplashViewUtils$1 r0 = new com.bianfeng.gongxiang.screenlib.SplashViewUtils$1     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r2.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r2 = move-exception
            r2.printStackTrace()
        Ld:
            return
    }

    public void showSplashView(android.app.Activity r3, java.lang.String r4) {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView     // Catch: java.lang.Exception -> L28
            r0.<init>(r3)     // Catch: java.lang.Exception -> L28
            r2.ret_img = r0     // Catch: java.lang.Exception -> L28
            r2.getScreenSize(r3)     // Catch: java.lang.Exception -> L28
            android.graphics.Bitmap r4 = r2.getBitmap(r3, r4)     // Catch: java.lang.Exception -> L28
            r2.bitmap = r4     // Catch: java.lang.Exception -> L28
            android.widget.ImageView r0 = r2.ret_img     // Catch: java.lang.Exception -> L28
            r0.setImageBitmap(r4)     // Catch: java.lang.Exception -> L28
            android.widget.ImageView r4 = r2.ret_img     // Catch: java.lang.Exception -> L28
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.Exception -> L28
            r4.setScaleType(r0)     // Catch: java.lang.Exception -> L28
            android.widget.ImageView r4 = r2.ret_img     // Catch: java.lang.Exception -> L28
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams     // Catch: java.lang.Exception -> L28
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L28
            r3.addContentView(r4, r0)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()
        L2c:
            return
    }
}
