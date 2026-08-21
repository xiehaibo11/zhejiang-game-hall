package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.ImageLoader;

/* JADX INFO: loaded from: classes3.dex */
public class b extends RelativeLayout {
    private static float d = 8.0f;
    private static final float e = 1.0f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f4944a;
    private ImageView b;
    private TextView c;
    private ImageLoader.ImageContainer f;

    public b(Context context, int i) {
        super(context);
        this.f4944a = i;
        ImageView imageView = new ImageView(context);
        this.b = imageView;
        imageView.setId(ClientMetadata.generateViewId());
        TextView textView = new TextView(context);
        this.c = textView;
        textView.setTextColor(Color.parseColor("#B9B9B9"));
        this.c.setTextSize(1, 12.0f);
        int iDipsToIntPixels = Dips.dipsToIntPixels(5.0f, getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, Dips.dipsToIntPixels(16.0f, context));
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, Dips.dipsToIntPixels(16.0f, context));
        this.c.setGravity(17);
        this.b.setScaleType(ImageView.ScaleType.FIT_XY);
        if (i == 1) {
            layoutParams2.addRule(9);
            layoutParams2.addRule(12);
            int i2 = iDipsToIntPixels * 2;
            layoutParams2.setMargins(iDipsToIntPixels, 0, 0, i2);
            layoutParams.addRule(11);
            layoutParams.addRule(12);
            layoutParams.setMargins(0, 0, iDipsToIntPixels, i2);
        } else {
            layoutParams.setMargins(iDipsToIntPixels, 0, 0, 0);
            layoutParams.addRule(9);
            layoutParams.addRule(12);
            layoutParams2.setMargins(0, 0, 0, 0);
            layoutParams2.addRule(1, this.b.getId());
            layoutParams2.addRule(8, this.b.getId());
        }
        this.b.setBackgroundColor(Color.alpha(0));
        addView(this.b, layoutParams);
        addView(this.c, layoutParams2);
    }

    public void a(Bitmap bitmap) {
        if (bitmap != null) {
            this.b.setImageBitmap(bitmap);
        }
    }

    public void a(String str) {
        ImageLoader imageLoader = Networking.getImageLoader();
        if (imageLoader != null) {
            this.f = imageLoader.get(str, new ImageLoader.ImageListener() { // from class: com.sigmob.sdk.base.views.b.1
                @Override // com.czhj.volley.Response.ErrorListener
                public void onErrorResponse(VolleyError volleyError) {
                }

                @Override // com.czhj.volley.toolbox.ImageLoader.ImageListener
                public void onResponse(ImageLoader.ImageContainer imageContainer, boolean z) {
                    int iDipsToIntPixels = Dips.dipsToIntPixels(3.0f, b.this.getContext());
                    if (imageContainer.getBitmap() != null) {
                        if (b.this.f4944a != 1 && imageContainer.getBitmap().getWidth() > imageContainer.getBitmap().getHeight() * 1.5f) {
                            ((RelativeLayout.LayoutParams) b.this.b.getLayoutParams()).setMargins((-iDipsToIntPixels) * (imageContainer.getBitmap().getWidth() / imageContainer.getBitmap().getHeight()), 0, 0, 0);
                        }
                        b.this.b.setImageBitmap(imageContainer.getBitmap());
                    }
                }
            });
        }
    }

    public void b(String str) {
        try {
            this.c.setText(str);
        } catch (Throwable th) {
            SigmobLog.e("showAdText error", th);
        }
    }

    @Override // android.view.View
    public void setOnClickListener(View.OnClickListener onClickListener) {
        ImageView imageView = this.b;
        if (imageView != null) {
            imageView.setOnClickListener(onClickListener);
        }
    }
}
