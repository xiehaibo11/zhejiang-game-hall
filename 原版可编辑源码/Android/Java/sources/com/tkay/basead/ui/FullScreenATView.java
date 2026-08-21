package com.tkay.basead.ui;

import android.content.Context;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.RelativeLayout;
import com.tkay.basead.a.e;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.ui.component.RoundImageView;

public class FullScreenATView extends BaseScreenATView {
    public static final String TAG = FullScreenATView.class.getSimpleName();
    private GuideToClickView ae;

    public FullScreenATView(Context context) {
        super(context);
    }

    public FullScreenATView(Context context, i iVar, h hVar, String str, int i, int i2) {
        super(context, iVar, hVar, str, i, i2);
        setId(com.tkay.core.common.l.h.a(getContext(), "myoffer_full_screen_view_id", "id"));
        this.G = 0;
    }

    @Override
    protected final void a() {
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_full_screen", "layout"), this);
    }

    @Override
    public void init() {
        this.R = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_view", "id"));
        this.S = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_border_view", "id"));
        o();
        this.ae = (GuideToClickView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_guide_to_click_view", "id"));
        super.init();
    }

    @Override
    protected final void D() {
        super.D();
        a(this.R, this.S);
    }

    @Override
    protected final boolean c(int i) {
        if (i == 0 || i == 1 || i == 2 || i == 5 || i == 6) {
            return e.a(this.d);
        }
        return i == 8;
    }

    @Override
    protected final void w() {
        if (this.y != null) {
            if (!e.a(this.d)) {
                this.Q = 8;
            } else {
                this.Q = 0;
            }
            this.y.setLayoutType(this.Q);
            if (this.Q == 8 && this.c.m.x() == 0) {
                this.y.getCTAButton().setVisibility(8);
            }
        }
    }

    @Override
    protected final void J() {
        this.O = this.C;
        this.P = this.D;
    }

    @Override
    protected final void b(int i) {
        super.b(i);
        GuideToClickView guideToClickView = this.ae;
        if (guideToClickView != null) {
            guideToClickView.setVisibility(8);
        }
    }

    @Override
    protected final void I() {
        GuideToClickView guideToClickView;
        if (this.x != null) {
            this.w.removeView(this.x);
            this.x = null;
        }
        if (this.H != null) {
            this.H.setVisibility(8);
        }
        this.I.setClickAreaScaleFactor(this.N);
        if (this.K != null) {
            this.K.setVisibility(8);
        }
        if (this.R != null) {
            this.R.setVisibility(8);
        }
        if (this.S != null && this.Q != 8) {
            this.S.setVisibility(8);
        }
        if (this.c.m.i() == 1 && !getHasPerformClick() && (guideToClickView = this.ae) != null) {
            guideToClickView.setVisibility(0);
            this.ae.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    FullScreenATView.this.b(1);
                }
            });
        }
        if (n()) {
            if (this.y != null) {
                this.y.setVisibility(8);
            }
            if (!m() || this.S == null) {
                return;
            }
            this.S.setVisibility(0);
        }
    }

    @Override
    protected final int q() {
        if (this.Q == 8) {
            return this.Q;
        }
        return this.C < this.D ? this.ac >= this.ad ? 1 : 5 : this.ac < this.ad ? 2 : 6;
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00c8  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void H() {
        int iA;
        if (this.w == null || this.z == null) {
            return;
        }
        this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        if (n()) {
            this.w.addView(this.z, 3);
            return;
        }
        if (c(this.Q)) {
            int i = this.Q;
            if (i == 1) {
                this.w.setBackgroundColor(-1);
                int i2 = (int) (this.D * 0.5f);
                if (TextUtils.isEmpty(this.d.t())) {
                    iA = this.D - i2;
                } else {
                    iA = (this.D - i2) + com.tkay.core.common.l.h.a(getContext(), 50.0f);
                }
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, i2));
                this.z.setNeedArc(true);
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.width = this.C;
                    layoutParams.height = iA;
                    this.y.setLayoutParams(layoutParams);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i == 2) {
                int iA2 = com.tkay.core.common.l.h.a(getContext(), 300.0f);
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(this.C - iA2, -1));
                RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams2 != null) {
                    layoutParams2.width = iA2;
                    layoutParams2.height = -1;
                    this.y.setLayoutParams(layoutParams2);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i == 5) {
                int i3 = (int) (this.D * 0.5f);
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, this.D - i3));
                RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams3 != null) {
                    layoutParams3.width = this.C;
                    layoutParams3.height = i3;
                    this.y.setLayoutParams(layoutParams3);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i != 6) {
                if (i == 8) {
                    if (this.c.m.x() != 0) {
                        if (this.R != null) {
                            this.R.setVisibility(8);
                        }
                        if (this.S != null) {
                            this.S.setVisibility(8);
                        }
                        View shakeView = this.y.getShakeView();
                        if (m()) {
                            if (shakeView != null) {
                                shakeView.setVisibility(0);
                            }
                        } else if (shakeView != null) {
                            shakeView.setVisibility(8);
                        }
                    } else if (m()) {
                        if (this.S != null) {
                            this.S.setVisibility(0);
                        }
                    } else if (this.S != null) {
                        this.S.setVisibility(8);
                    }
                }
            }
        }
        this.w.addView(this.z, 3);
        if (this.a == 1) {
            RoundImageView roundImageView = new RoundImageView(getContext());
            roundImageView.setImageResource(com.tkay.core.common.l.h.a(getContext(), "myoffer_reward_icon", com.tkay.expressad.foundation.h.i.c));
            RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(com.tkay.core.common.l.h.a(getContext(), 60.0f), com.tkay.core.common.l.h.a(getContext(), 60.0f));
            if (c(this.Q)) {
                int i4 = this.Q;
                if (i4 == 2 || i4 == 6) {
                    layoutParams4.leftMargin = this.C - com.tkay.core.common.l.h.a(getContext(), 330.0f);
                    layoutParams4.topMargin = com.tkay.core.common.l.h.a(getContext(), 22.0f);
                } else {
                    layoutParams4.leftMargin = com.tkay.core.common.l.h.a(getContext(), 12.0f);
                    layoutParams4.topMargin = com.tkay.core.common.l.h.a(getContext(), 12.0f);
                }
            } else {
                layoutParams4.leftMargin = com.tkay.core.common.l.h.a(getContext(), 12.0f);
                layoutParams4.topMargin = com.tkay.core.common.l.h.a(getContext(), 12.0f);
            }
            roundImageView.setLayoutParams(layoutParams4);
            this.w.addView(roundImageView, this.w.getChildCount() - 2);
        }
    }

    @Override
    protected final void A() {
        if (this.u) {
            C();
            return;
        }
        if (1 == this.a && !this.v) {
            double dCeil = Math.ceil(this.c.m.e() / 1000.0d);
            if (this.x != null) {
                double dCeil2 = Math.ceil(((double) this.x.getVideoLength()) / 1000.0d);
                if (dCeil > dCeil2) {
                    dCeil = dCeil2;
                }
            }
            RewardExitConfirmDialogActivity.a(getContext(), String.valueOf((int) dCeil), new Runnable() {
                @Override
                public final void run() {
                    FullScreenATView.this.B();
                    FullScreenATView.this.C();
                }
            });
            return;
        }
        B();
        p();
    }
}
