package com.czhj.volley.toolbox;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.ImageLoader;

public class NetworkImageView extends ImageView {
    private String a;
    private int b;
    private int c;
    private ImageLoader d;
    private ImageLoader.ImageContainer e;

    class 1 implements ImageLoader.ImageListener {
        final boolean a;

        1(boolean z) {
            this.a = z;
        }

        @Override
        public void onErrorResponse(VolleyError volleyError) {
            if (NetworkImageView.this.c != 0) {
                NetworkImageView networkImageView = NetworkImageView.this;
                networkImageView.setImageResource(networkImageView.c);
            }
        }

        @Override
        public void onResponse(final ImageLoader.ImageContainer imageContainer, boolean z) {
            if (z && this.a) {
                NetworkImageView.this.post(new Runnable() {
                    @Override
                    public void run() {
                        1.this.onResponse(imageContainer, false);
                    }
                });
                return;
            }
            if (imageContainer.getBitmap() != null) {
                NetworkImageView.this.setImageBitmap(imageContainer.getBitmap());
            } else if (NetworkImageView.this.b != 0) {
                NetworkImageView networkImageView = NetworkImageView.this;
                networkImageView.setImageResource(networkImageView.b);
            }
        }
    }

    public NetworkImageView(Context context) {
        this(context, null);
    }

    public NetworkImageView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public NetworkImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    private void a() {
        int i = this.b;
        if (i != 0) {
            setImageResource(i);
        } else {
            setImageBitmap(null);
        }
    }

    void a(boolean z) {
        boolean z2;
        boolean z3;
        int width = getWidth();
        int height = getHeight();
        ImageView.ScaleType scaleType = getScaleType();
        if (getLayoutParams() != null) {
            z2 = getLayoutParams().width == -2;
            z3 = getLayoutParams().height == -2;
        } else {
            z2 = false;
            z3 = false;
        }
        boolean z4 = z2 && z3;
        if (width == 0 && height == 0 && !z4) {
            return;
        }
        if (TextUtils.isEmpty(this.a)) {
            ImageLoader.ImageContainer imageContainer = this.e;
            if (imageContainer != null) {
                imageContainer.cancelRequest();
                this.e = null;
            }
            a();
            return;
        }
        ImageLoader.ImageContainer imageContainer2 = this.e;
        if (imageContainer2 != null && imageContainer2.getRequestUrl() != null) {
            if (this.e.getRequestUrl().equals(this.a)) {
                return;
            }
            this.e.cancelRequest();
            a();
        }
        if (z2) {
            width = 0;
        }
        this.e = this.d.get(this.a, new 1(z), width, z3 ? 0 : height, scaleType);
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        invalidate();
    }

    @Override
    protected void onDetachedFromWindow() {
        ImageLoader.ImageContainer imageContainer = this.e;
        if (imageContainer != null) {
            imageContainer.cancelRequest();
            setImageBitmap(null);
            this.e = null;
        }
        super.onDetachedFromWindow();
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        a(true);
    }

    public void setDefaultImageResId(int i) {
        this.b = i;
    }

    public void setErrorImageResId(int i) {
        this.c = i;
    }

    public void setImageUrl(String str, ImageLoader imageLoader) {
        Threads.a();
        this.a = str;
        this.d = imageLoader;
        a(false);
    }
}
