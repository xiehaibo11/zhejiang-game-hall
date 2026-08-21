package com.bumptech.glide.request.target;

import android.widget.ImageView;
import com.bumptech.glide.load.resource.drawable.GlideDrawable;
import com.bumptech.glide.request.animation.GlideAnimation;

public class GlideDrawableImageViewTarget extends ImageViewTarget<GlideDrawable> {
    private static final float SQUARE_RATIO_MARGIN = 0.05f;
    private int maxLoopCount;
    private GlideDrawable resource;

    @Override
    public void onResourceReady(Object obj, GlideAnimation glideAnimation) {
        onResourceReady((GlideDrawable) obj, (GlideAnimation<? super GlideDrawable>) glideAnimation);
    }

    public GlideDrawableImageViewTarget(ImageView imageView) {
        this(imageView, -1);
    }

    public GlideDrawableImageViewTarget(ImageView imageView, int i) {
        super(imageView);
        this.maxLoopCount = i;
    }

    public void onResourceReady(GlideDrawable glideDrawable, GlideAnimation<? super GlideDrawable> glideAnimation) {
        if (!glideDrawable.isAnimated()) {
            float intrinsicWidth = glideDrawable.getIntrinsicWidth() / glideDrawable.getIntrinsicHeight();
            if (Math.abs((((ImageView) this.view).getWidth() / ((ImageView) this.view).getHeight()) - 1.0f) <= SQUARE_RATIO_MARGIN && Math.abs(intrinsicWidth - 1.0f) <= SQUARE_RATIO_MARGIN) {
                glideDrawable = new SquaringDrawable(glideDrawable, ((ImageView) this.view).getWidth());
            }
        }
        super.onResourceReady(glideDrawable, glideAnimation);
        this.resource = glideDrawable;
        glideDrawable.setLoopCount(this.maxLoopCount);
        glideDrawable.start();
    }

    @Override
    protected void setResource(GlideDrawable glideDrawable) {
        ((ImageView) this.view).setImageDrawable(glideDrawable);
    }

    @Override
    public void onStart() {
        GlideDrawable glideDrawable = this.resource;
        if (glideDrawable != null) {
            glideDrawable.start();
        }
    }

    @Override
    public void onStop() {
        GlideDrawable glideDrawable = this.resource;
        if (glideDrawable != null) {
            glideDrawable.stop();
        }
    }
}
