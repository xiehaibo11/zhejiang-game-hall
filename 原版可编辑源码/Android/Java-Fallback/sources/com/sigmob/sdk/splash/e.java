package com.sigmob.sdk.splash;

public class e extends com.sigmob.sdk.splash.d {
    com.sigmob.sdk.base.views.r b;

    public e(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.sigmob.sdk.base.views.r r2 = new com.sigmob.sdk.base.views.r
            r2.<init>(r4)
            r3.b = r2
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.FIT_XY
            r2.setScaleType(r4)
            r3.setBackgroundColor(r1)
            com.sigmob.sdk.base.views.r r4 = r3.b
            r3.addView(r4, r0)
            return
    }

    @Override
    public void a() {
            r0 = this;
            super.a()
            return
    }

    @Override
    public boolean a(com.sigmob.sdk.base.models.BaseAdUnit r9) {
            r8 = this;
            java.lang.String r0 = r9.getSplashFilePath()
            java.lang.String r1 = "git"
            java.lang.String r2 = "jpeg"
            java.lang.String r3 = "jpg"
            java.lang.String r4 = "png"
            java.lang.String r5 = "bmp"
            java.lang.String r6 = "webp"
            java.lang.String r7 = "tif"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7}
            java.util.List r1 = java.util.Arrays.asList(r1)
            java.lang.String r2 = com.czhj.sdk.common.utils.ImageTypeUtil.getFileType(r0)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            if (r3 == 0) goto L26
            return r4
        L26:
            java.lang.String r3 = "gif"
            boolean r3 = r2.equals(r3)
            r5 = 1
            java.lang.String r6 = "com.sigmob.action.interstitial.show"
            if (r3 == 0) goto L51
            byte[] r1 = com.czhj.sdk.common.utils.FileUtil.readBytes(r0)
            byte[] r0 = com.czhj.sdk.common.utils.FileUtil.readBytes(r0)
            int r0 = r0.length
            android.graphics.Movie r0 = android.graphics.Movie.decodeByteArray(r1, r4, r0)
            if (r0 == 0) goto L6e
            com.sigmob.sdk.base.views.r r1 = r8.b
            r1.setMovie(r0)
            android.content.Context r0 = r8.getContext()
            java.lang.String r9 = r9.getUuid()
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r0, r9, r6)
            return r5
        L51:
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L6e
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeFile(r0)
            if (r0 == 0) goto L6e
            android.content.Context r1 = r8.getContext()
            java.lang.String r9 = r9.getUuid()
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r9, r6)
            com.sigmob.sdk.base.views.r r9 = r8.b
            r9.setImageBitmap(r0)
            return r5
        L6e:
            return r4
    }

    @Override
    public void b() {
            r0 = this;
            super.b()
            return
    }

    @Override
    public void c() {
            r0 = this;
            super.c()
            return
    }

    @Override
    public int getDuration() {
            r1 = this;
            int r0 = super.getDuration()
            return r0
    }
}
