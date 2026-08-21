package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.basead.ui.BaseMediaATView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.l;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;
import java.util.ArrayList;
import java.util.List;

public class MediaATView extends BaseMediaATView {
    public static final String TAG = "tkay_" + MediaATView.class.getSimpleName();
    RelativeLayout g;
    RelativeLayout h;
    TextView i;
    TextView j;
    TextView k;
    TextView l;
    final float m;
    private TextView n;
    private TextView o;
    private ImageView p;
    private ImageView q;
    private ImageView r;
    private RoundImageView s;
    private TextView t;

    public MediaATView(Context context, h hVar, i iVar, boolean z, BaseMediaATView.a aVar) {
        super(context, hVar, iVar, z, aVar);
        this.m = 1.0f;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
    }

    @Override
    public void init(int i, int i2) {
        View viewFindViewById;
        super.init(i, i2);
        View viewInflate = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_view", "layout"), (ViewGroup) null, false);
        if (this.f != null) {
            this.f.removeAllViews();
            this.f.addView(viewInflate, new ViewGroup.LayoutParams(-1, -1));
        }
        this.n = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_title", "id"));
        this.o = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_cta", "id"));
        this.p = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_bg_blur", "id"));
        this.q = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_main_image", "id"));
        this.r = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_ad_logo", "id"));
        this.s = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_icon", "id"));
        this.t = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_desc", "id"));
        this.g = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_container", "id"));
        this.h = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_four_element_container", "id"));
        this.i = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_publisher_name", "id"));
        this.j = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_privacy_agreement", "id"));
        this.k = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_permission_manage", "id"));
        this.l = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_version_name", "id"));
        String strR = this.a.r();
        if (!TextUtils.isEmpty(strR)) {
            this.n.setText(strR);
        } else {
            this.n.setVisibility(8);
            ViewGroup.LayoutParams layoutParams = this.t.getLayoutParams();
            if (layoutParams instanceof LinearLayout.LayoutParams) {
                ((LinearLayout.LayoutParams) layoutParams).topMargin = 0;
                this.t.setLayoutParams(layoutParams);
            }
        }
        String strW = this.a.w();
        if (!TextUtils.isEmpty(strW)) {
            this.o.setText(strW);
        } else {
            this.o.setText(com.tkay.core.common.l.h.a(getContext(), "myoffer_cta_learn_more", com.tkay.expressad.foundation.h.i.g));
        }
        this.q.setScaleType(ImageView.ScaleType.FIT_CENTER);
        com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.a.u()), i, i2, new b.a() {
            @Override
            public final void onSuccess(String str, final Bitmap bitmap) {
                if (TextUtils.equals(MediaATView.this.a.u(), str)) {
                    MediaATView.this.q.setImageBitmap(bitmap);
                    MediaATView.this.post(new Runnable() {
                        @Override
                        public final void run() {
                            int[] iArrA = u.a(MediaATView.this.getWidth(), MediaATView.this.getHeight(), bitmap.getWidth() / bitmap.getHeight());
                            RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) MediaATView.this.q.getLayoutParams();
                            if (layoutParams2 != null) {
                                layoutParams2.width = iArrA[0];
                                layoutParams2.height = iArrA[1];
                                layoutParams2.addRule(13);
                                MediaATView.this.q.setLayoutParams(layoutParams2);
                            }
                        }
                    });
                    Bitmap bitmapA = com.tkay.core.common.l.b.a(MediaATView.this.getContext(), bitmap);
                    MediaATView.this.p.setScaleType(ImageView.ScaleType.FIT_XY);
                    MediaATView.this.p.setImageBitmap(bitmapA);
                }
            }

            @Override
            public final void onFail(String str, String str2) {
                Log.e(MediaATView.TAG, "load: image load fail:".concat(String.valueOf(str2)));
            }
        });
        if (!TextUtils.isEmpty(this.a.v())) {
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.a.v()), new b.a() {
                @Override
                public final void onSuccess(String str, Bitmap bitmap) {
                    if (TextUtils.equals(MediaATView.this.a.v(), str)) {
                        MediaATView.this.r.setImageBitmap(bitmap);
                        ViewGroup.LayoutParams layoutParams2 = MediaATView.this.r.getLayoutParams();
                        int i3 = layoutParams2.height;
                        layoutParams2.width = (int) (i3 * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                        layoutParams2.height = i3;
                        MediaATView.this.r.setLayoutParams(layoutParams2);
                        MediaATView.this.r.setScaleType(ImageView.ScaleType.FIT_XY);
                        MediaATView.this.r.setImageBitmap(bitmap);
                        MediaATView.this.r.setVisibility(0);
                    }
                }

                @Override
                public final void onFail(String str, String str2) {
                    MediaATView.this.r.setVisibility(8);
                }
            });
        } else {
            this.r.setVisibility(8);
        }
        String strS = this.a.s();
        if (!TextUtils.isEmpty(strS)) {
            this.t.setText(strS);
        } else {
            this.t.setVisibility(8);
        }
        if (!TextUtils.isEmpty(this.a.t())) {
            this.s.setRadiusInDip(6);
            this.s.setNeedRadiu(true);
            ViewGroup.LayoutParams layoutParams2 = this.s.getLayoutParams();
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.a.t()), layoutParams2.width, layoutParams2.height, new b.a() {
                @Override
                public final void onFail(String str, String str2) {
                }

                @Override
                public final void onSuccess(String str, Bitmap bitmap) {
                    if (TextUtils.equals(MediaATView.this.a.t(), str)) {
                        MediaATView.this.s.setImageBitmap(bitmap);
                    }
                }
            });
        } else {
            this.s.setVisibility(8);
        }
        if (this.a.K()) {
            RelativeLayout relativeLayout = this.h;
            if (relativeLayout != null) {
                relativeLayout.setVisibility(0);
                this.h.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                    }
                });
            }
            TextView textView = this.i;
            if (textView != null) {
                textView.setVisibility(0);
                this.i.setText(this.a.F());
                this.i.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                    }
                });
            }
            TextView textView2 = this.j;
            if (textView2 != null) {
                textView2.setVisibility(0);
                this.j.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        l.a(m.a().f(), MediaATView.this.a.H());
                    }
                });
            }
            TextView textView3 = this.k;
            if (textView3 != null) {
                textView3.setVisibility(0);
                this.k.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        l.a(m.a().f(), MediaATView.this.a.I());
                    }
                });
            }
            TextView textView4 = this.l;
            if (textView4 != null) {
                textView4.setVisibility(0);
                this.l.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.a.G()));
                this.l.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                    }
                });
            }
        }
        if (com.tkay.basead.a.e.a(this.a) || (viewFindViewById = findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_media_ad_main_image_container", "id"))) == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams3 = viewFindViewById.getLayoutParams();
        if (layoutParams3 instanceof RelativeLayout.LayoutParams) {
            ((FrameLayout.LayoutParams) layoutParams3).bottomMargin = com.tkay.core.common.l.h.a(getContext(), 84.0f);
            viewFindViewById.setLayoutParams(layoutParams3);
        }
    }

    @Override
    public View getMonitorClickView() {
        return this.o;
    }

    @Override
    public List<View> getClickViews() {
        ArrayList arrayList = new ArrayList();
        arrayList.add(this.n);
        arrayList.add(this.q);
        arrayList.add(this.o);
        arrayList.add(this.s);
        arrayList.add(this.t);
        if (this.b != null && this.b.x() == 0) {
            arrayList.add(this.p);
            arrayList.add(this.g);
        }
        return arrayList;
    }
}
