package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import com.tkay.basead.a.e;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.tkay.basead.ui.BaseScreenATView, com.tkay.basead.ui.BaseATView
    protected final void a() {
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_full_screen", "layout"), this);
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    public void init() {
        this.R = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_view", "id"));
        this.S = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_border_view", "id"));
        o();
        this.ae = (GuideToClickView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_guide_to_click_view", "id"));
        super.init();
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void D() {
        super.D();
        a(this.R, this.S);
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final boolean c(int i) {
        if (i == 0 || i == 1 || i == 2 || i == 5 || i == 6) {
            return e.a(this.d);
        }
        return i == 8;
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
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

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void J() {
        this.O = this.C;
        this.P = this.D;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.tkay.basead.ui.BaseScreenATView, com.tkay.basead.ui.BaseATView
    public final void b(int i) {
        super.b(i);
        GuideToClickView guideToClickView = this.ae;
        if (guideToClickView != null) {
            guideToClickView.setVisibility(8);
        }
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
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
            this.ae.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.ui.FullScreenATView.1
                @Override // android.view.View.OnClickListener
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

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final int q() {
        if (this.Q == 8) {
            return this.Q;
        }
        return this.C < this.D ? this.ac >= this.ad ? 1 : 5 : this.ac < this.ad ? 2 : 6;
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00c8  */
    @Override // com.tkay.basead.ui.BaseScreenATView
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void H() {
        /*
            Method dump skipped, instruction units count: 502
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.FullScreenATView.H():void");
    }

    @Override // com.tkay.basead.ui.BaseScreenATView
    protected final void A() {
        if (this.u) {
            C();
            return;
        }
        if (1 == this.f5737a && !this.v) {
            double dCeil = Math.ceil(this.c.m.e() / 1000.0d);
            if (this.x != null) {
                double dCeil2 = Math.ceil(((double) this.x.getVideoLength()) / 1000.0d);
                if (dCeil > dCeil2) {
                    dCeil = dCeil2;
                }
            }
            RewardExitConfirmDialogActivity.a(getContext(), String.valueOf((int) dCeil), new Runnable() { // from class: com.tkay.basead.ui.FullScreenATView.2
                @Override // java.lang.Runnable
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
