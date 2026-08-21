package com.kwad.sdk.core.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.ViewTreeObserver;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.bl;
import com.kwad.sdk.utils.k;
import com.kwad.sdk.widget.j;

/* JADX INFO: loaded from: classes2.dex */
public class AdBasePvFrameLayout extends AdBaseFrameLayout {
    private long axe;
    private float axf;
    private boolean axg;
    private boolean axh;
    private ViewTreeObserver.OnScrollChangedListener axi;
    private ViewTreeObserver axj;
    private bl axk;
    private j ct;
    private int mn;

    public AdBasePvFrameLayout(Context context) {
        super(context);
        this.axe = 500L;
        this.axf = 0.1f;
        this.axh = true;
        init();
    }

    public AdBasePvFrameLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.axe = 500L;
        this.axf = 0.1f;
        this.axh = true;
        init();
    }

    public AdBasePvFrameLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.axe = 500L;
        this.axf = 0.1f;
        this.axh = true;
        init();
    }

    private void DS() {
        if (DU()) {
            DT();
        } else {
            DV();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean DU() {
        return this.axk.Ke() && ((float) Math.abs(this.axk.aKq.height() - getHeight())) <= ((float) getHeight()) * (1.0f - this.axf) && getHeight() > 0 && getWidth() > 0 && this.axk.aKq.bottom > 0 && this.axk.aKq.top < this.mn;
    }

    private void DV() {
        if (this.axi == null) {
            this.axi = new ViewTreeObserver.OnScrollChangedListener() { // from class: com.kwad.sdk.core.view.AdBasePvFrameLayout.1
                @Override // android.view.ViewTreeObserver.OnScrollChangedListener
                public final void onScrollChanged() {
                    if (AdBasePvFrameLayout.this.DU()) {
                        AdBasePvFrameLayout.this.DT();
                    }
                }
            };
            ViewTreeObserver viewTreeObserver = getViewTreeObserver();
            this.axj = viewTreeObserver;
            if (viewTreeObserver != null) {
                viewTreeObserver.addOnScrollChangedListener(this.axi);
            }
        }
    }

    private void DW() {
        try {
            if (this.axi != null && this.axj != null && this.axj.isAlive()) {
                this.axj.removeOnScrollChangedListener(this.axi);
            }
            this.axi = null;
        } catch (Exception e) {
            c.printStackTrace(e);
        }
    }

    private void init() {
        this.axk = new bl(this);
        this.mn = k.getScreenHeight(getContext());
        this.axh = true;
    }

    private void nX() {
        if (this.axh) {
            DS();
        }
    }

    protected final void DT() {
        DW();
        j jVar = this.ct;
        if (jVar != null) {
            jVar.am();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        DV();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        DW();
        this.axg = false;
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        boolean z = true;
        if (this.axg || (i3 | i4) != 0 || (i | i2) == 0) {
            z = false;
        } else {
            this.axg = true;
        }
        super.onSizeChanged(i, i2, i3, i4);
        if (z) {
            nX();
        }
    }

    public void setCheckDefaultImpressionLogThreshold(float f) {
        this.axf = f;
    }

    public void setVisibleListener(j jVar) {
        this.ct = jVar;
    }
}
