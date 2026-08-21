package com.bumptech.glide.request.target;

public class GlideDrawableImageViewTarget extends com.bumptech.glide.request.target.ImageViewTarget<com.bumptech.glide.load.resource.drawable.GlideDrawable> {
    private static final float SQUARE_RATIO_MARGIN = 0.05f;
    private int maxLoopCount;
    private com.bumptech.glide.load.resource.drawable.GlideDrawable resource;

    public GlideDrawableImageViewTarget(android.widget.ImageView r2) {
            r1 = this;
            r0 = -1
            r1.<init>(r2, r0)
            return
    }

    public GlideDrawableImageViewTarget(android.widget.ImageView r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.maxLoopCount = r2
            return
    }

    public void onResourceReady(com.bumptech.glide.load.resource.drawable.GlideDrawable r5, com.bumptech.glide.request.animation.GlideAnimation<? super com.bumptech.glide.load.resource.drawable.GlideDrawable> r6) {
            r4 = this;
            boolean r0 = r5.isAnimated()
            if (r0 != 0) goto L49
            T extends android.view.View r0 = r4.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            int r0 = r0.getWidth()
            float r0 = (float) r0
            T extends android.view.View r1 = r4.view
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            int r1 = r1.getHeight()
            float r1 = (float) r1
            float r0 = r0 / r1
            int r1 = r5.getIntrinsicWidth()
            float r1 = (float) r1
            int r2 = r5.getIntrinsicHeight()
            float r2 = (float) r2
            float r1 = r1 / r2
            r2 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 - r2
            float r0 = java.lang.Math.abs(r0)
            r3 = 1028443341(0x3d4ccccd, float:0.05)
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L49
            float r1 = r1 - r2
            float r0 = java.lang.Math.abs(r1)
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L49
            com.bumptech.glide.request.target.SquaringDrawable r0 = new com.bumptech.glide.request.target.SquaringDrawable
            T extends android.view.View r1 = r4.view
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            int r1 = r1.getWidth()
            r0.<init>(r5, r1)
            r5 = r0
        L49:
            super.onResourceReady(r5, r6)
            r4.resource = r5
            int r6 = r4.maxLoopCount
            r5.setLoopCount(r6)
            r5.start()
            return
    }

    @Override
    public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation r2) {
            r0 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r1 = (com.bumptech.glide.load.resource.drawable.GlideDrawable) r1
            r0.onResourceReady(r1, r2)
            return
    }

    @Override
    public void onStart() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.resource
            if (r0 == 0) goto L7
            r0.start()
        L7:
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r0 = r1.resource
            if (r0 == 0) goto L7
            r0.stop()
        L7:
            return
    }

    protected void setResource(com.bumptech.glide.load.resource.drawable.GlideDrawable r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageDrawable(r2)
            return
    }

    @Override
    protected void setResource(com.bumptech.glide.load.resource.drawable.GlideDrawable r1) {
            r0 = this;
            com.bumptech.glide.load.resource.drawable.GlideDrawable r1 = (com.bumptech.glide.load.resource.drawable.GlideDrawable) r1
            r0.setResource(r1)
            return
    }
}
