package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;

/* JADX INFO: loaded from: classes3.dex */
public class AsseblemSplashATView extends BaseSdkSplashATView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    View f5718a;

    public AsseblemSplashATView(Context context) {
        super(context);
    }

    public AsseblemSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a() {
        if (this.c.m.q() == 2) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_layout_asseblem_vertical_land", "layout"), this);
        } else {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_layout_asseblem_vertical_port", "layout"), this);
        }
        o();
    }

    @Override // com.tkay.basead.ui.BaseSdkSplashATView
    protected final void b() {
        TextView textView = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_title", "id"));
        TextView textView2 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_install_btn", "id"));
        TextView textView3 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_desc", "id"));
        final FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_ad_content_image_area", "id"));
        final RoundImageView roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_bg", "id"));
        final RoundImageView roundImageView2 = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_icon", "id"));
        this.f5718a = textView2;
        if (!TextUtils.isEmpty(this.d.t())) {
            roundImageView2.setVisibility(0);
            roundImageView2.setNeedRadiu(true);
            roundImageView2.setRadiusInDip(12);
            int i = roundImageView2.getLayoutParams().width;
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.t()), i, i, new b.a() { // from class: com.tkay.basead.ui.AsseblemSplashATView.1
                @Override // com.tkay.core.common.res.b.a
                public final void onFail(String str, String str2) {
                }

                @Override // com.tkay.core.common.res.b.a
                public final void onSuccess(String str, Bitmap bitmap) {
                    if (TextUtils.equals(str, AsseblemSplashATView.this.d.t())) {
                        roundImageView2.setImageBitmap(bitmap);
                    }
                }
            });
        } else {
            com.tkay.basead.ui.a.a.a(roundImageView2);
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) roundImageView2.getLayoutParams();
            if (layoutParams != null) {
                layoutParams.rightMargin = 0;
                roundImageView2.setLayoutParams(layoutParams);
            }
            if (textView != null) {
                textView.setGravity(17);
            }
            if (textView3 != null) {
                textView3.setGravity(17);
            }
        }
        this.r.add(roundImageView2);
        frameLayout.removeAllViews();
        final WrapRoundImageView wrapRoundImageView = new WrapRoundImageView(getContext());
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-1, -1);
        layoutParams2.gravity = 17;
        wrapRoundImageView.setLayoutParams(layoutParams2);
        wrapRoundImageView.setNeedRadiu(false);
        wrapRoundImageView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        wrapRoundImageView.setVisibility(4);
        frameLayout.addView(wrapRoundImageView, layoutParams2);
        frameLayout.setVisibility(0);
        roundImageView.setNeedRadiu(false);
        if (TextUtils.isEmpty(this.d.u())) {
            roundImageView.setBackgroundColor(Color.parseColor("#EFEFEF"));
        } else {
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.u()), getResources().getDisplayMetrics().widthPixels, (getResources().getDisplayMetrics().widthPixels * 627) / SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS, new b.a() { // from class: com.tkay.basead.ui.AsseblemSplashATView.2
                @Override // com.tkay.core.common.res.b.a
                public final void onFail(String str, String str2) {
                }

                @Override // com.tkay.core.common.res.b.a
                public final void onSuccess(String str, final Bitmap bitmap) {
                    if (TextUtils.equals(str, AsseblemSplashATView.this.d.u())) {
                        frameLayout.post(new Runnable() { // from class: com.tkay.basead.ui.AsseblemSplashATView.2.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                wrapRoundImageView.setBitmapAndResize(bitmap, frameLayout.getWidth(), frameLayout.getHeight());
                                wrapRoundImageView.setVisibility(0);
                            }
                        });
                        roundImageView.setImageBitmap(com.tkay.core.common.l.b.a(AsseblemSplashATView.this.getContext(), bitmap));
                    }
                }
            });
            this.r.add(wrapRoundImageView);
        }
        if (!TextUtils.isEmpty(this.d.r())) {
            textView.setText(this.d.r());
            textView.setVisibility(0);
        } else {
            textView.setVisibility(4);
        }
        this.r.add(textView);
        if (!TextUtils.isEmpty(this.d.w())) {
            textView2.setText(this.d.w());
        } else {
            textView2.setText(com.tkay.basead.a.e.a(getContext(), this.d));
        }
        this.r.add(textView2);
        if (textView3 != null) {
            if (!TextUtils.isEmpty(this.d.s())) {
                textView3.setText(this.d.s());
            } else {
                textView3.setVisibility(8);
            }
            this.r.add(textView3);
        }
    }

    @Override // com.tkay.basead.ui.BaseSdkSplashATView
    protected void c() {
        super.a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new Runnable() { // from class: com.tkay.basead.ui.AsseblemSplashATView.3
            @Override // java.lang.Runnable
            public final void run() {
                if (AsseblemSplashATView.this.F == null) {
                    return;
                }
                AsseblemSplashATView.super.h();
            }
        });
    }
}
