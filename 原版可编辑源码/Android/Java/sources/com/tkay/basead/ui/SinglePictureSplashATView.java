package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.Log;
import android.view.LayoutInflater;
import android.widget.ImageView;
import android.widget.TextView;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.tkay.basead.c.f;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;

public class SinglePictureSplashATView extends BaseSdkSplashATView {
    public SinglePictureSplashATView(Context context) {
        super(context);
    }

    public SinglePictureSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
    }

    @Override
    protected final void a() {
        if (this.c.m.q() == 2) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_layout_single_land", "layout"), this);
        } else {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_layout_single_port", "layout"), this);
        }
        o();
    }

    @Override
    protected final void b() {
        TextView textView = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_install_btn", "id"));
        final RoundImageView roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_bg", "id"));
        com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.u()), getResources().getDisplayMetrics().widthPixels, (getResources().getDisplayMetrics().widthPixels * 627) / SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS, new b.a() {
            @Override
            public final void onFail(String str, String str2) {
            }

            @Override
            public final void onSuccess(String str, final Bitmap bitmap) {
                if (TextUtils.equals(str, SinglePictureSplashATView.this.d.u())) {
                    SinglePictureSplashATView singlePictureSplashATView = SinglePictureSplashATView.this;
                    final WrapRoundImageView wrapRoundImageView = (WrapRoundImageView) singlePictureSplashATView.findViewById(com.tkay.core.common.l.h.a(singlePictureSplashATView.getContext(), "myoffer_splash_ad_content_image_area", "id"));
                    if (SinglePictureSplashATView.this.c.m.j() == 2) {
                        wrapRoundImageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
                        wrapRoundImageView.setImageBitmap(bitmap);
                    } else {
                        wrapRoundImageView.setScaleType(ImageView.ScaleType.FIT_CENTER);
                        wrapRoundImageView.post(new Runnable() {
                            @Override
                            public final void run() {
                                wrapRoundImageView.setBitmapAndResize(bitmap, SinglePictureSplashATView.this.getWidth(), SinglePictureSplashATView.this.getHeight());
                            }
                        });
                    }
                    if (roundImageView != null) {
                        roundImageView.setImageBitmap(com.tkay.core.common.l.b.a(SinglePictureSplashATView.this.getContext(), bitmap));
                    }
                }
            }
        });
        if (this.c.m == null || textView == null) {
            return;
        }
        if (this.c.m.x() != 0 && !m()) {
            textView.setVisibility(0);
            if (!TextUtils.isEmpty(this.d.w())) {
                textView.setText(this.d.w());
            } else {
                textView.setText(com.tkay.basead.a.e.a(getContext(), this.d));
            }
            this.r.add(textView);
            return;
        }
        textView.setVisibility(8);
    }

    @Override
    protected final void c() {
        super.a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new Runnable() {
            @Override
            public final void run() {
                if (SinglePictureSplashATView.this.F == null) {
                    return;
                }
                int width = SinglePictureSplashATView.this.getWidth();
                int height = SinglePictureSplashATView.this.getHeight();
                int i = (int) (((double) SinglePictureSplashATView.this.getResources().getDisplayMetrics().widthPixels) * 0.5d);
                int i2 = (int) (((double) SinglePictureSplashATView.this.getResources().getDisplayMetrics().heightPixels) * 0.5d);
                if (width < i) {
                    SinglePictureSplashATView.this.a(f.a(f.k, "Splash display width is less than 50% of screen width!"));
                    Log.e("tkay", "Splash display width is less than 50% of screen width!");
                } else if (height >= i2) {
                    SinglePictureSplashATView.super.h();
                } else {
                    SinglePictureSplashATView.this.a(f.a(f.k, "Splash display height is less than 50% of screen height!"));
                    Log.e("tkay", "Splash display height is less than 50% of screen height!");
                }
            }
        });
    }
}
