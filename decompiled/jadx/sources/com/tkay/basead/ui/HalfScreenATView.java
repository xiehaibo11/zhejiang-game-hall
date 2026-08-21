package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.RelativeLayout;
import com.tkay.basead.a.e;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public class HalfScreenATView extends BaseScreenATView {
    public static final String TAG = HalfScreenATView.class.getSimpleName();
    private int ae;
    private RelativeLayout af;

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void F() {
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final boolean c(int i) {
        return true;
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void y() {
    }

    public HalfScreenATView(Context context) {
        super(context);
    }

    public HalfScreenATView(Context context, i iVar, h hVar, String str, int i, int i2) {
        super(context, iVar, hVar, str, i, i2);
        setId(com.tkay.core.common.l.h.a(getContext(), "myoffer_half_screen_view_id", "id"));
        this.G = 1;
    }

    private boolean L() {
        return this.aa <= this.ab;
    }

    @Override // com.tkay.basead.ui.BaseScreenATView, com.tkay.basead.ui.BaseATView
    protected final void d() {
        super.d();
        if (!e.a(this.d)) {
            this.ae = 7;
        } else if (L()) {
            this.ae = 3;
        } else {
            this.ae = 4;
        }
    }

    @Override // com.tkay.basead.ui.BaseScreenATView, com.tkay.basead.ui.BaseATView
    protected final void a() {
        int i = this.ae;
        if (i == 3) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_half_screen_vertical", "layout"), this);
        } else if (i == 7) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_half_screen_empty_info", "layout"), this);
        } else {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_half_screen_horizontal", "layout"), this);
        }
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void b() {
        super.b();
        this.af = (RelativeLayout) this.w.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_rl_container", "id"));
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final int q() {
        return this.Q;
    }

    private boolean M() {
        return !e.a(this.d);
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void w() {
        if (this.y != null) {
            this.Q = this.ae;
            this.y.setLayoutType(this.Q);
            if (this.ae == 7) {
                if (this.c.m.x() == 0) {
                    this.y.getCTAButton().setVisibility(8);
                }
                if (m()) {
                    this.R = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_view", "id"));
                    this.S = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_border_view", "id"));
                    o();
                    a(this.R, this.S);
                }
            }
        }
        super.E();
    }

    private void N() {
        int i;
        int i2;
        int i3;
        int iA;
        int i4;
        int i5;
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.w.getLayoutParams();
        int i6 = layoutParams2.leftMargin;
        int i7 = layoutParams2.rightMargin;
        int i8 = layoutParams2.topMargin;
        int i9 = layoutParams2.bottomMargin;
        RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) this.x.getLayoutParams();
        RelativeLayout.LayoutParams layoutParams4 = (RelativeLayout.LayoutParams) this.af.getLayoutParams();
        int iB = com.tkay.core.common.l.h.b(getContext());
        if (iB <= 0) {
            iB = com.tkay.core.common.l.h.a(getContext(), 25.0f);
        }
        int i10 = this.ae;
        if (i10 == 7) {
            if (this.t == 2) {
                i2 = (this.D - i8) - i9;
                i3 = (int) (i2 * 1.75f);
                iA = com.tkay.core.common.l.h.a(getContext(), 120.0f);
                if (i8 < iB) {
                    layoutParams2.topMargin = (int) (iB * 1.1f);
                }
                layoutParams2.width = i3;
                this.w.setLayoutParams(layoutParams2);
            } else if (L()) {
                i3 = (this.C - i6) - i7;
                i2 = (int) (i3 / 0.5714286f);
                iA = com.tkay.core.common.l.h.a(getContext(), 240.0f);
            } else {
                i3 = (this.C - i6) - i7;
                i2 = (int) (i3 / 1.032258f);
                iA = com.tkay.core.common.l.h.a(getContext(), 120.0f);
            }
            this.O = i3;
            this.P = i2;
        } else {
            if (i10 == 3) {
                if (this.t == 1) {
                    View viewFindViewById = this.y.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
                    i = viewFindViewById != null ? ((RelativeLayout.LayoutParams) viewFindViewById.getLayoutParams()).topMargin : 0;
                    i3 = (this.C - i6) - i7;
                    float f = i3;
                    i2 = (int) (f / 0.5714286f);
                    if (this.D < (com.tkay.core.common.l.h.a(getContext(), 28.0f) * 2) + i2) {
                        iA = (int) (f / 1.8181819f);
                        this.O = i3;
                        this.P = (i2 - iA) + i;
                    } else {
                        this.O = i3;
                        this.P = (int) (this.O / 0.8f);
                        i4 = this.P;
                        iA = (i2 - i4) + i;
                    }
                } else {
                    if (i8 < iB) {
                        i8 = (int) (iB * 1.1f);
                        layoutParams2.topMargin = i8;
                    }
                    i2 = (this.D - i8) - i9;
                    i3 = (int) (i2 * 1.6f);
                    this.P = i2;
                    this.O = (int) (this.P * 0.56f);
                    i5 = i3 - this.O;
                    layoutParams2.width = i3;
                    this.w.setLayoutParams(layoutParams2);
                    iA = i2;
                }
            } else {
                View viewFindViewById2 = this.y.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
                i = viewFindViewById2 != null ? ((RelativeLayout.LayoutParams) viewFindViewById2.getLayoutParams()).topMargin : 0;
                if (this.t == 1) {
                    i3 = (this.C - i6) - i7;
                    i2 = (int) (i3 / 1.032258f);
                    this.O = i3;
                    this.P = (int) (this.O / 2.0f);
                    i4 = this.P;
                    iA = (i2 - i4) + i;
                } else {
                    if (i8 < iB) {
                        i8 = (int) (iB * 1.1f);
                        layoutParams2.topMargin = i8;
                    }
                    i2 = (this.D - i8) - i9;
                    i3 = (int) (i2 * 1.032258f);
                    this.O = i3;
                    this.P = (int) (this.O / 2.0f);
                    iA = (i2 - this.P) + i;
                    layoutParams2.width = i3;
                    this.w.setLayoutParams(layoutParams2);
                }
            }
            layoutParams4.width = i3;
            layoutParams4.height = i2;
            this.af.setLayoutParams(layoutParams4);
            layoutParams3.width = this.O;
            layoutParams3.height = this.P;
            this.x.setLayoutParams(layoutParams3);
            layoutParams.width = i5;
            layoutParams.height = iA;
            this.y.setLayoutParams(layoutParams);
        }
        i5 = i3;
        layoutParams4.width = i3;
        layoutParams4.height = i2;
        this.af.setLayoutParams(layoutParams4);
        layoutParams3.width = this.O;
        layoutParams3.height = this.P;
        this.x.setLayoutParams(layoutParams3);
        layoutParams.width = i5;
        layoutParams.height = iA;
        this.y.setLayoutParams(layoutParams);
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void I() {
        if (this.x != null) {
            this.af.removeView(this.x);
            this.x = null;
        }
        if (this.H != null) {
            this.H.setVisibility(8);
        }
        this.I.setClickAreaScaleFactor(this.N);
        if (this.K != null) {
            this.K.setVisibility(8);
        }
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void H() {
        if (this.af == null || this.z == null) {
            return;
        }
        this.af.addView(this.z, 1, this.x.getLayoutParams());
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void A() {
        super.B();
        super.C();
    }

    private void K() {
        if (!e.a(this.d)) {
            this.ae = 7;
        } else if (L()) {
            this.ae = 3;
        } else {
            this.ae = 4;
        }
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void J() {
        int i;
        int i2;
        int i3;
        int iA;
        int i4;
        int i5;
        try {
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
            RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.w.getLayoutParams();
            int i6 = layoutParams2.leftMargin;
            int i7 = layoutParams2.rightMargin;
            int i8 = layoutParams2.topMargin;
            int i9 = layoutParams2.bottomMargin;
            RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) this.x.getLayoutParams();
            RelativeLayout.LayoutParams layoutParams4 = (RelativeLayout.LayoutParams) this.af.getLayoutParams();
            int iB = com.tkay.core.common.l.h.b(getContext());
            if (iB <= 0) {
                iB = com.tkay.core.common.l.h.a(getContext(), 25.0f);
            }
            if (this.ae == 7) {
                if (this.t == 2) {
                    i2 = (this.D - i8) - i9;
                    i3 = (int) (i2 * 1.75f);
                    iA = com.tkay.core.common.l.h.a(getContext(), 120.0f);
                    if (i8 < iB) {
                        layoutParams2.topMargin = (int) (iB * 1.1f);
                    }
                    layoutParams2.width = i3;
                    this.w.setLayoutParams(layoutParams2);
                } else if (L()) {
                    i3 = (this.C - i6) - i7;
                    i2 = (int) (i3 / 0.5714286f);
                    iA = com.tkay.core.common.l.h.a(getContext(), 240.0f);
                } else {
                    i3 = (this.C - i6) - i7;
                    i2 = (int) (i3 / 1.032258f);
                    iA = com.tkay.core.common.l.h.a(getContext(), 120.0f);
                }
                this.O = i3;
                this.P = i2;
            } else {
                if (this.ae == 3) {
                    if (this.t == 1) {
                        View viewFindViewById = this.y.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
                        i = viewFindViewById != null ? ((RelativeLayout.LayoutParams) viewFindViewById.getLayoutParams()).topMargin : 0;
                        i3 = (this.C - i6) - i7;
                        float f = i3;
                        i2 = (int) (f / 0.5714286f);
                        if (this.D < (com.tkay.core.common.l.h.a(getContext(), 28.0f) * 2) + i2) {
                            iA = (int) (f / 1.8181819f);
                            this.O = i3;
                            this.P = (i2 - iA) + i;
                        } else {
                            this.O = i3;
                            this.P = (int) (this.O / 0.8f);
                            i4 = this.P;
                            iA = (i2 - i4) + i;
                        }
                    } else {
                        if (i8 < iB) {
                            i8 = (int) (iB * 1.1f);
                            layoutParams2.topMargin = i8;
                        }
                        i2 = (this.D - i8) - i9;
                        i3 = (int) (i2 * 1.6f);
                        this.P = i2;
                        this.O = (int) (this.P * 0.56f);
                        i5 = i3 - this.O;
                        layoutParams2.width = i3;
                        this.w.setLayoutParams(layoutParams2);
                        iA = i2;
                    }
                } else {
                    View viewFindViewById2 = this.y.findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_view_blank", "id"));
                    i = viewFindViewById2 != null ? ((RelativeLayout.LayoutParams) viewFindViewById2.getLayoutParams()).topMargin : 0;
                    if (this.t == 1) {
                        i3 = (this.C - i6) - i7;
                        i2 = (int) (i3 / 1.032258f);
                        this.O = i3;
                        this.P = (int) (this.O / 2.0f);
                        i4 = this.P;
                        iA = (i2 - i4) + i;
                    } else {
                        if (i8 < iB) {
                            i8 = (int) (iB * 1.1f);
                            layoutParams2.topMargin = i8;
                        }
                        i2 = (this.D - i8) - i9;
                        i3 = (int) (i2 * 1.032258f);
                        this.O = i3;
                        this.P = (int) (this.O / 2.0f);
                        iA = (i2 - this.P) + i;
                        layoutParams2.width = i3;
                        this.w.setLayoutParams(layoutParams2);
                    }
                }
                layoutParams4.width = i3;
                layoutParams4.height = i2;
                this.af.setLayoutParams(layoutParams4);
                layoutParams3.width = this.O;
                layoutParams3.height = this.P;
                this.x.setLayoutParams(layoutParams3);
                layoutParams.width = i5;
                layoutParams.height = iA;
                this.y.setLayoutParams(layoutParams);
            }
            i5 = i3;
            layoutParams4.width = i3;
            layoutParams4.height = i2;
            this.af.setLayoutParams(layoutParams4);
            layoutParams3.width = this.O;
            layoutParams3.height = this.P;
            this.x.setLayoutParams(layoutParams3);
            layoutParams.width = i5;
            layoutParams.height = iA;
            this.y.setLayoutParams(layoutParams);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
