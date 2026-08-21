package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.t;
import com.tkay.core.common.f.z;
import com.tkay.core.common.l.l;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;

public abstract class BaseSdkSplashATView extends BaseSplashATView {
    public static final int TYPE_ASSEBLEM = 1;
    public static final int TYPE_SINGLE_PICTURE = 0;
    protected RoundImageView t;
    ViewGroup u;
    TextView v;
    TextView w;
    TextView x;
    TextView y;
    protected final View.OnClickListener z;

    protected abstract void b();

    protected abstract void c();

    public BaseSdkSplashATView(Context context) {
        super(context);
        this.z = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (BaseSdkSplashATView.this.c.m == null || BaseSdkSplashATView.this.c.m.x() != 0) {
                    return;
                }
                BaseSdkSplashATView.super.b(1);
            }
        };
    }

    public BaseSdkSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
        this.z = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (BaseSdkSplashATView.this.c.m == null || BaseSdkSplashATView.this.c.m.x() != 0) {
                    return;
                }
                BaseSdkSplashATView.super.b(1);
            }
        };
        c();
        p();
        a(this.B, this.c.m.h());
    }

    protected void o() {
        b();
        this.u = (ViewGroup) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_four_element_container", "id"));
        this.v = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_publisher_name", "id"));
        this.w = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_privacy_agreement", "id"));
        this.x = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_permission_manage", "id"));
        this.y = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_version_name", "id"));
        if (this.d.K()) {
            ViewGroup viewGroup = this.u;
            if (viewGroup != null) {
                viewGroup.setVisibility(0);
            }
            TextView textView = this.v;
            if (textView != null) {
                textView.setVisibility(0);
                this.v.setText(this.d.F());
                this.r.add(this.v);
            }
            TextView textView2 = this.w;
            if (textView2 != null) {
                textView2.setVisibility(0);
                this.w.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        l.a(m.a().f(), BaseSdkSplashATView.this.d.H());
                    }
                });
            }
            TextView textView3 = this.x;
            if (textView3 != null) {
                textView3.setVisibility(0);
                this.x.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        l.a(m.a().f(), BaseSdkSplashATView.this.d.I());
                    }
                });
            }
            TextView textView4 = this.y;
            if (textView4 != null) {
                textView4.setVisibility(0);
                this.y.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                this.r.add(this.y);
            }
        } else {
            ViewGroup viewGroup2 = this.u;
            if (viewGroup2 != null) {
                viewGroup2.setVisibility(8);
            }
            TextView textView5 = this.y;
            if (textView5 != null) {
                textView5.setVisibility(8);
            }
            TextView textView6 = this.v;
            if (textView6 != null) {
                textView6.setVisibility(8);
            }
            TextView textView7 = this.w;
            if (textView7 != null) {
                textView7.setVisibility(8);
            }
            TextView textView8 = this.x;
            if (textView8 != null) {
                textView8.setVisibility(8);
            }
            try {
                View viewFindViewById = findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_four_element_container_bg", "id"));
                if (viewFindViewById != null) {
                    viewFindViewById.setBackgroundDrawable(null);
                }
            } catch (Throwable unused) {
            }
        }
        RoundImageView roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_ad_logo", "id"));
        this.t = roundImageView;
        final ViewGroup.LayoutParams layoutParams = roundImageView.getLayoutParams();
        if (!TextUtils.isEmpty(this.d.v())) {
            this.t.setVisibility(0);
            int i = layoutParams.width;
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), i, i, new b.a() {
                @Override
                public final void onSuccess(String str, Bitmap bitmap) {
                    if (TextUtils.equals(str, BaseSdkSplashATView.this.d.v())) {
                        int i2 = layoutParams.height;
                        layoutParams.width = (int) (i2 * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                        layoutParams.height = i2;
                        BaseSdkSplashATView.this.t.setLayoutParams(layoutParams);
                        BaseSdkSplashATView.this.t.setScaleType(ImageView.ScaleType.FIT_XY);
                        BaseSdkSplashATView.this.t.setImageBitmap(bitmap);
                        BaseSdkSplashATView.this.t.setVisibility(0);
                    }
                }

                @Override
                public final void onFail(String str, String str2) {
                    BaseSdkSplashATView.this.t.setVisibility(8);
                }
            });
        } else if (this.d.J() != null) {
            Bitmap bitmapJ = this.d.J();
            int i2 = layoutParams.height;
            layoutParams.width = (int) (i2 * ((bitmapJ.getWidth() * 1.0f) / bitmapJ.getHeight()));
            layoutParams.height = i2;
            this.t.setLayoutParams(layoutParams);
            this.t.setScaleType(ImageView.ScaleType.FIT_XY);
            this.t.setImageBitmap(bitmapJ);
            this.t.setImageBitmap(this.d.J());
            this.t.setVisibility(0);
        } else {
            this.t.setVisibility(8);
        }
        this.r.add(this.t);
        q();
        r();
    }

    @Override
    protected void p() {
        super.p();
        setOnClickListener(this.z);
    }

    public static boolean isSinglePicture(h hVar, j jVar) {
        return ((hVar instanceof r) && (jVar instanceof t)) ? 2 == ((t) jVar).X() : (hVar instanceof z) && 1 == ((z) hVar).Y();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }
}
