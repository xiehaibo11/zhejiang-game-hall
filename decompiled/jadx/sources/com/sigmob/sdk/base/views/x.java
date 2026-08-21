package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.ImageLoader;
import com.sigmob.sdk.base.models.BaseAdUnit;
import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class x extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ImageView f4991a;
    private int b;

    public x(Context context, int i) {
        super(context);
        int iDipsToIntPixels = Dips.dipsToIntPixels(30.0f, context);
        this.b = iDipsToIntPixels;
        a(iDipsToIntPixels / 2);
        int i2 = this.b;
        ViewGroup.LayoutParams layoutParams = new RelativeLayout.LayoutParams(i2, i2);
        int i3 = this.b / 2;
        int color = Color.parseColor("#ffffff");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(i3);
        gradientDrawable.setAlpha(102);
        setBackground(gradientDrawable);
        setLayoutParams(layoutParams);
    }

    private void a(int i) {
        this.f4991a = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(i, i);
        layoutParams.addRule(13);
        this.f4991a.setImageBitmap(o.CLOSE.a());
        this.f4991a.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.f4991a.setImageAlpha(204);
        addView(this.f4991a, layoutParams);
    }

    private void b(final String str) {
        ImageLoader imageLoader = Networking.getImageLoader();
        if (imageLoader != null) {
            imageLoader.get(str, new ImageLoader.ImageListener() { // from class: com.sigmob.sdk.base.views.x.1
                @Override // com.czhj.volley.Response.ErrorListener
                public void onErrorResponse(VolleyError volleyError) {
                    SigmobLog.d("Failed to load image.", volleyError);
                }

                @Override // com.czhj.volley.toolbox.ImageLoader.ImageListener
                public void onResponse(ImageLoader.ImageContainer imageContainer, boolean z) {
                    Bitmap bitmap = imageContainer.getBitmap();
                    if (bitmap != null) {
                        x.this.f4991a.setImageBitmap(bitmap);
                    } else {
                        SigmobLog.d(String.format("%s returned null bitmap", str));
                    }
                }
            });
        }
    }

    public void a(Bitmap bitmap) {
        this.f4991a.setImageBitmap(bitmap);
    }

    public void a(BaseAdUnit baseAdUnit) {
        ImageView imageView;
        o oVar;
        if (baseAdUnit == null || baseAdUnit.getEndcardCloseImage() != 1) {
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(0);
            setBackground(gradientDrawable);
            int i = this.b;
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(i, i);
            layoutParams.addRule(13);
            this.f4991a.setLayoutParams(layoutParams);
            imageView = this.f4991a;
            oVar = o.CLOSE_OLD;
        } else {
            imageView = this.f4991a;
            oVar = o.CLOSE;
        }
        imageView.setImageBitmap(oVar.a());
    }

    public void a(String str) {
        String lowerCase = str.toLowerCase();
        if (lowerCase.startsWith("http://") || lowerCase.startsWith("https://")) {
            b(str);
        } else if (lowerCase.startsWith("file://")) {
            try {
                this.f4991a.setImageURI(Uri.fromFile(new File(str)));
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
    }
}
