package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.basead.ui.BaseShakeView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.l.l;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;
import java.util.ArrayList;
import java.util.List;

public class PanelView extends RelativeLayout {
    public static final int TYPE_FULL_SCREEN_BANNER = 0;
    public static final int TYPE_FULL_SCREEN_EMPTY_INFO = 8;
    public static final int TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_LANDSCAPE = 6;
    public static final int TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_PORTRAIT = 1;
    public static final int TYPE_FULL_SCREEN_ENDCARD_VERTICAL_LANDSCAPE = 2;
    public static final int TYPE_FULL_SCREEN_ENDCARD_VERTICAL_PORTRAIT = 5;
    public static final int TYPE_HALF_SCREEN_EMPTY_INFO = 7;
    public static final int TYPE_HALF_SCREEN_HORIZONTAL = 4;
    public static final int TYPE_HALF_SCREEN_VERTICAL = 3;
    private View a;
    private ImageView b;
    private ImageView c;
    private TextView d;
    private TextView e;
    private Button f;
    private BaseShakeView g;
    private a h;
    private int i;
    private j j;
    private i k;
    private h l;
    private int m;
    private ViewGroup n;
    private TextView o;
    private TextView p;
    private TextView q;
    private TextView r;
    private boolean s;
    private boolean t;
    private boolean u;
    private List<View> v;
    private final View.OnClickListener w;

    public interface a {
        void a();

        boolean b();
    }

    public PanelView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.m = 0;
        this.s = false;
        this.t = false;
        this.u = false;
        this.w = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (PanelView.this.j != null) {
                    if (PanelView.this.j.x() == 1) {
                        if (view != PanelView.this.f || PanelView.this.h == null) {
                            return;
                        }
                        PanelView.this.h.a();
                        return;
                    }
                    if (PanelView.this.h != null) {
                        PanelView.this.h.a();
                    }
                }
            }
        };
    }

    public void init(h hVar, i iVar, int i, boolean z, a aVar) {
        this.h = aVar;
        this.i = i;
        this.l = hVar;
        this.k = iVar;
        this.j = iVar.m;
        this.u = z;
        this.s = hVar.K();
        this.t = this.j.o() == 1;
        this.v = new ArrayList();
    }

    public void setLayoutType(int i) {
        this.m = i;
        switch (i) {
            case 1:
                if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_portrait_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_horizontal_portrait", "layout"), (ViewGroup) this, true);
                }
                break;
            case 2:
            case 6:
                if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_landscape_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_landscape", "layout"), (ViewGroup) this, true);
                }
                break;
            case 3:
                if (this.i == 1) {
                    if (TextUtils.isEmpty(this.l.t())) {
                        this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_horizontal_without_icon", "layout"), (ViewGroup) this, true);
                    } else {
                        this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_horizontal", "layout"), (ViewGroup) this, true);
                    }
                } else if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_vertical_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_vertical", "layout"), (ViewGroup) this, true);
                }
                break;
            case 4:
                if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_horizontal_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_horizontal", "layout"), (ViewGroup) this, true);
                }
                break;
            case 5:
                if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_portrait_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_endcard_vertical_portrait", "layout"), (ViewGroup) this, true);
                }
                break;
            case 7:
                this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_empty_info", "layout"), (ViewGroup) this, true);
                break;
            case 8:
                this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_full_screen_empty_info", "layout"), (ViewGroup) this, true);
                break;
            default:
                if (TextUtils.isEmpty(this.l.t())) {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_bottom_banner_without_icon", "layout"), (ViewGroup) this, true);
                } else {
                    this.a = LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_bottom_banner", "layout"), (ViewGroup) this, true);
                }
                break;
        }
        d();
        h hVar = this.l;
        if (this.b != null) {
            String strT = hVar.t();
            if (!TextUtils.isEmpty(strT)) {
                ViewGroup.LayoutParams layoutParams = this.b.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strT), layoutParams.width, layoutParams.height, new 1(strT));
            }
            if (TextUtils.isEmpty(hVar.t())) {
                this.b.setVisibility(8);
            }
        }
        if (this.c != null) {
            String strV = hVar.v();
            if (!TextUtils.isEmpty(strV)) {
                ViewGroup.LayoutParams layoutParams2 = this.c.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strV), layoutParams2.width, layoutParams2.height, new 2(strV, layoutParams2));
            } else {
                this.c.setVisibility(8);
            }
        }
        if (this.e != null) {
            if (!TextUtils.isEmpty(hVar.s())) {
                this.e.setText(hVar.s());
            } else {
                this.e.setVisibility(8);
            }
        }
        if (this.d != null) {
            if (!TextUtils.isEmpty(hVar.r())) {
                this.d.setText(hVar.r());
            } else {
                this.d.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(hVar.w())) {
            this.f.setText(hVar.w());
        } else {
            this.f.setText(com.tkay.basead.a.e.a(getContext(), this.l));
        }
        b(hVar);
        ImageView imageView = this.b;
        if (imageView != null) {
            imageView.setOnClickListener(this.w);
            this.v.add(this.b);
        }
        TextView textView = this.d;
        if (textView != null) {
            textView.setOnClickListener(this.w);
            this.v.add(this.d);
        }
        TextView textView2 = this.e;
        if (textView2 != null) {
            textView2.setOnClickListener(this.w);
            this.v.add(this.e);
        }
        this.f.setOnClickListener(this.w);
        this.v.add(this.f);
        ImageView imageView2 = this.c;
        if (imageView2 != null) {
            imageView2.setOnClickListener(this.w);
            this.v.add(this.c);
        }
        BaseShakeView baseShakeView = this.g;
        if (baseShakeView != null && this.u) {
            baseShakeView.setOnClickListener(new 7());
            this.g.setOnShakeListener(new 8(), this.j);
        }
        View viewFindViewById = this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
        if (viewFindViewById != null) {
            viewFindViewById.setOnClickListener(this.w);
            this.v.add(viewFindViewById);
        } else {
            this.a.setOnClickListener(this.w);
            this.v.add(this.a);
        }
        ImageView imageView3 = this.b;
        if (imageView3 instanceof RoundImageView) {
            ((RoundImageView) imageView3).setNeedRadiu(true);
            int i2 = this.m;
            if (i2 == 2 || i2 == 6) {
                ((RoundImageView) this.b).setRadiusInDip(8);
            } else {
                ((RoundImageView) this.b).setRadiusInDip(12);
            }
            this.b.invalidate();
        }
    }

    private boolean a() {
        return this.s && !this.t;
    }

    private void b() {
        d();
        h hVar = this.l;
        if (this.b != null) {
            String strT = hVar.t();
            if (!TextUtils.isEmpty(strT)) {
                ViewGroup.LayoutParams layoutParams = this.b.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strT), layoutParams.width, layoutParams.height, new 1(strT));
            }
            if (TextUtils.isEmpty(hVar.t())) {
                this.b.setVisibility(8);
            }
        }
        if (this.c != null) {
            String strV = hVar.v();
            if (!TextUtils.isEmpty(strV)) {
                ViewGroup.LayoutParams layoutParams2 = this.c.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strV), layoutParams2.width, layoutParams2.height, new 2(strV, layoutParams2));
            } else {
                this.c.setVisibility(8);
            }
        }
        if (this.e != null) {
            if (!TextUtils.isEmpty(hVar.s())) {
                this.e.setText(hVar.s());
            } else {
                this.e.setVisibility(8);
            }
        }
        if (this.d != null) {
            if (!TextUtils.isEmpty(hVar.r())) {
                this.d.setText(hVar.r());
            } else {
                this.d.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(hVar.w())) {
            this.f.setText(hVar.w());
        } else {
            this.f.setText(com.tkay.basead.a.e.a(getContext(), this.l));
        }
        b(hVar);
        ImageView imageView = this.b;
        if (imageView != null) {
            imageView.setOnClickListener(this.w);
            this.v.add(this.b);
        }
        TextView textView = this.d;
        if (textView != null) {
            textView.setOnClickListener(this.w);
            this.v.add(this.d);
        }
        TextView textView2 = this.e;
        if (textView2 != null) {
            textView2.setOnClickListener(this.w);
            this.v.add(this.e);
        }
        this.f.setOnClickListener(this.w);
        this.v.add(this.f);
        ImageView imageView2 = this.c;
        if (imageView2 != null) {
            imageView2.setOnClickListener(this.w);
            this.v.add(this.c);
        }
        BaseShakeView baseShakeView = this.g;
        if (baseShakeView != null && this.u) {
            baseShakeView.setOnClickListener(new 7());
            this.g.setOnShakeListener(new 8(), this.j);
        }
        View viewFindViewById = this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
        if (viewFindViewById != null) {
            viewFindViewById.setOnClickListener(this.w);
            this.v.add(viewFindViewById);
        } else {
            this.a.setOnClickListener(this.w);
            this.v.add(this.a);
        }
        ImageView imageView3 = this.b;
        if (imageView3 instanceof RoundImageView) {
            ((RoundImageView) imageView3).setNeedRadiu(true);
            int i = this.m;
            if (i == 2 || i == 6) {
                ((RoundImageView) this.b).setRadiusInDip(8);
            } else {
                ((RoundImageView) this.b).setRadiusInDip(12);
            }
            this.b.invalidate();
        }
    }

    private void c() {
        ImageView imageView = this.b;
        if (imageView instanceof RoundImageView) {
            ((RoundImageView) imageView).setNeedRadiu(true);
            int i = this.m;
            if (i == 2 || i == 6) {
                ((RoundImageView) this.b).setRadiusInDip(8);
            } else {
                ((RoundImageView) this.b).setRadiusInDip(12);
            }
            this.b.invalidate();
        }
    }

    private void d() {
        this.v.clear();
        this.b = (ImageView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_iv_banner_icon", "id"));
        this.d = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_tv_banner_title", "id"));
        this.e = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_tv_banner_desc", "id"));
        this.f = (Button) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_btn_banner_cta", "id"));
        this.c = (ImageView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_ad_logo", "id"));
        this.n = (ViewGroup) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_four_element_container", "id"));
        this.o = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_version_name", "id"));
        this.p = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_publisher_name", "id"));
        this.q = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_permission_manage", "id"));
        this.r = (TextView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_privacy_agreement", "id"));
        try {
            this.g = (BaseShakeView) this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_hint_text", "id"));
        } catch (Throwable unused) {
        }
        e();
    }

    private void e() {
        BaseShakeView baseShakeView;
        if (!this.u || (baseShakeView = this.g) == null || this.m == 8) {
            return;
        }
        baseShakeView.setVisibility(0);
    }

    private void a(h hVar) {
        if (this.b != null) {
            String strT = hVar.t();
            if (!TextUtils.isEmpty(strT)) {
                ViewGroup.LayoutParams layoutParams = this.b.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strT), layoutParams.width, layoutParams.height, new 1(strT));
            }
            if (TextUtils.isEmpty(hVar.t())) {
                this.b.setVisibility(8);
            }
        }
        if (this.c != null) {
            String strV = hVar.v();
            if (!TextUtils.isEmpty(strV)) {
                ViewGroup.LayoutParams layoutParams2 = this.c.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strV), layoutParams2.width, layoutParams2.height, new 2(strV, layoutParams2));
            } else {
                this.c.setVisibility(8);
            }
        }
        if (this.e != null) {
            if (!TextUtils.isEmpty(hVar.s())) {
                this.e.setText(hVar.s());
            } else {
                this.e.setVisibility(8);
            }
        }
        if (this.d != null) {
            if (!TextUtils.isEmpty(hVar.r())) {
                this.d.setText(hVar.r());
            } else {
                this.d.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(hVar.w())) {
            this.f.setText(hVar.w());
        } else {
            this.f.setText(com.tkay.basead.a.e.a(getContext(), this.l));
        }
        b(hVar);
    }

    final class 1 implements b.a {
        final String a;

        @Override
        public final void onFail(String str, String str2) {
        }

        1(String str) {
            this.a = str;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(str, this.a)) {
                PanelView.this.b.setImageBitmap(bitmap);
            }
        }
    }

    final class 2 implements b.a {
        final String a;
        final ViewGroup.LayoutParams b;

        2(String str, ViewGroup.LayoutParams layoutParams) {
            this.a = str;
            this.b = layoutParams;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(str, this.a)) {
                PanelView.this.c.setImageBitmap(bitmap);
                int i = this.b.height;
                this.b.width = (int) (i * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                this.b.height = i;
                PanelView.this.c.setLayoutParams(this.b);
                PanelView.this.c.setScaleType(ImageView.ScaleType.FIT_XY);
                PanelView.this.c.setImageBitmap(bitmap);
                PanelView.this.c.setVisibility(0);
            }
        }

        @Override
        public final void onFail(String str, String str2) {
            PanelView.this.c.setVisibility(8);
        }
    }

    private void b(final h hVar) {
        if (a()) {
            this.o.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), hVar.G()));
            this.p.setText(hVar.F());
            this.r.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    l.a(m.a().f(), hVar.H());
                }
            });
            this.q.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    l.a(m.a().f(), hVar.I());
                }
            });
            this.o.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                }
            });
            this.p.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                }
            });
            ViewGroup viewGroup = this.n;
            if (viewGroup != null) {
                viewGroup.setVisibility(0);
            }
            TextView textView = this.o;
            if (textView != null) {
                textView.setVisibility(0);
            }
            TextView textView2 = this.p;
            if (textView2 != null) {
                textView2.setVisibility(0);
            }
            TextView textView3 = this.r;
            if (textView3 != null) {
                textView3.setVisibility(0);
            }
            TextView textView4 = this.q;
            if (textView4 != null) {
                textView4.setVisibility(0);
                return;
            }
            return;
        }
        ViewGroup viewGroup2 = this.n;
        if (viewGroup2 != null) {
            viewGroup2.setVisibility(8);
        }
        TextView textView5 = this.o;
        if (textView5 != null) {
            textView5.setVisibility(8);
        }
        TextView textView6 = this.p;
        if (textView6 != null) {
            textView6.setVisibility(8);
        }
        TextView textView7 = this.r;
        if (textView7 != null) {
            textView7.setVisibility(8);
        }
        TextView textView8 = this.q;
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

    private void f() {
        ImageView imageView = this.b;
        if (imageView != null) {
            imageView.setOnClickListener(this.w);
            this.v.add(this.b);
        }
        TextView textView = this.d;
        if (textView != null) {
            textView.setOnClickListener(this.w);
            this.v.add(this.d);
        }
        TextView textView2 = this.e;
        if (textView2 != null) {
            textView2.setOnClickListener(this.w);
            this.v.add(this.e);
        }
        this.f.setOnClickListener(this.w);
        this.v.add(this.f);
        ImageView imageView2 = this.c;
        if (imageView2 != null) {
            imageView2.setOnClickListener(this.w);
            this.v.add(this.c);
        }
        BaseShakeView baseShakeView = this.g;
        if (baseShakeView != null && this.u) {
            baseShakeView.setOnClickListener(new 7());
            this.g.setOnShakeListener(new 8(), this.j);
        }
        View viewFindViewById = this.a.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
        if (viewFindViewById != null) {
            viewFindViewById.setOnClickListener(this.w);
            this.v.add(viewFindViewById);
        } else {
            this.a.setOnClickListener(this.w);
            this.v.add(this.a);
        }
    }

    final class 7 implements View.OnClickListener {
        7() {
        }

        @Override
        public final void onClick(View view) {
            PanelView.this.w.onClick(PanelView.this.f);
        }
    }

    final class 8 implements BaseShakeView.a {
        8() {
        }

        @Override
        public final boolean a() {
            return PanelView.this.h.b();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    public List<View> getClickViews() {
        return this.v;
    }

    @Override
    protected void dispatchDraw(Canvas canvas) {
        if (this.m == 0) {
            int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
            super.dispatchDraw(canvas);
            u.a(canvas, getWidth(), getHeight(), com.tkay.core.common.l.h.a(getContext(), 7.0f));
            canvas.restoreToCount(iSaveLayer);
            return;
        }
        super.dispatchDraw(canvas);
    }

    public View getCTAButton() {
        return this.f;
    }

    public View getShakeView() {
        return this.g;
    }
}
