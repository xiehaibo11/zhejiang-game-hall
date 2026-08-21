package com.czhj.sdk.common.network;

class MaxWidthImageLoader extends com.czhj.volley.toolbox.ImageLoader {
    private final int a;

    MaxWidthImageLoader(com.czhj.volley.RequestQueue r1, android.content.Context r2, com.czhj.volley.toolbox.ImageLoader.ImageCache r3) {
            r0 = this;
            r0.<init>(r1, r3)
            java.lang.String r1 = "window"
            java.lang.Object r1 = r2.getSystemService(r1)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            if (r1 != 0) goto L12
            r1 = 320(0x140, float:4.48E-43)
        Lf:
            r0.a = r1
            return
        L12:
            android.view.Display r1 = r1.getDefaultDisplay()
            android.graphics.Point r2 = new android.graphics.Point
            r2.<init>()
            r1.getSize(r2)
            int r1 = r2.x
            int r2 = r2.y
            int r1 = java.lang.Math.min(r1, r2)
            goto Lf
    }

    @Override
    public com.czhj.volley.toolbox.ImageLoader.ImageContainer get(java.lang.String r3, com.czhj.volley.toolbox.ImageLoader.ImageListener r4) {
            r2 = this;
            int r0 = r2.a
            r1 = 0
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = super.get(r3, r4, r0, r1)
            return r3
    }
}
