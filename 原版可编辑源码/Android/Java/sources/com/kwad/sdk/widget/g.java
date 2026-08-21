package com.kwad.sdk.widget;

import android.view.View;
import android.view.ViewTreeObserver;
import com.kwad.sdk.utils.bl;
import com.kwad.sdk.utils.k;

public final class g {
    private final i aMk;
    private boolean aMm;
    private boolean aMn;
    private ViewTreeObserver.OnScrollChangedListener aMp;
    private final bl axk;
    private final View mView;
    private final int mn;
    private float aMl = 0.1f;
    private boolean aMo = true;

    public g(View view, i iVar) {
        this.mView = view;
        this.aMk = iVar;
        this.axk = new bl(view);
        this.mn = k.getScreenHeight(view.getContext());
    }

    private void DV() {
        if (this.aMp == null) {
            this.aMp = new ViewTreeObserver.OnScrollChangedListener() {
                @Override
                public final void onScrollChanged() {
                    if (g.this.KH()) {
                        g.this.am();
                    }
                }
            };
            ViewTreeObserver viewTreeObserver = this.mView.getViewTreeObserver();
            if (viewTreeObserver != null) {
                viewTreeObserver.addOnScrollChangedListener(this.aMp);
            }
        }
    }

    private void DW() {
        if (this.aMp == null) {
            return;
        }
        try {
            ViewTreeObserver viewTreeObserver = this.mView.getViewTreeObserver();
            if (viewTreeObserver != null) {
                viewTreeObserver.removeOnScrollChangedListener(this.aMp);
            }
            this.aMp = null;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private void KG() {
        if (KH()) {
            am();
        } else {
            DW();
            DV();
        }
    }

    private boolean KH() {
        return this.axk.Ke() && ((float) Math.abs(this.axk.aKq.height() - this.mView.getHeight())) <= ((float) this.mView.getHeight()) * (1.0f - this.aMl) && this.mView.getHeight() > 0 && this.mView.getWidth() > 0 && this.axk.aKq.bottom > 0 && this.axk.aKq.top < this.mn;
    }

    private void am() {
        DW();
        i iVar = this.aMk;
        if (iVar != null) {
            iVar.z(this.mView);
        }
    }

    private void nX() {
        if (this.aMo) {
            KG();
        }
    }

    public final void KF() {
        if (this.aMn) {
            nX();
        }
    }

    public final void b(int i, int i2, int i3, int i4) {
        this.aMn = false;
        if (this.aMm || (i3 | i4) != 0 || (i | i2) == 0) {
            return;
        }
        this.aMn = true;
        this.aMm = true;
    }

    public final void bR(boolean z) {
        this.aMo = z;
    }

    public final float getVisiblePercent() {
        return this.aMl;
    }

    public final void onAttachedToWindow() {
        DV();
    }

    public final void onDetachedFromWindow() {
        DW();
        this.aMm = false;
    }

    public final void setVisiblePercent(float f) {
        this.aMl = f;
    }
}
