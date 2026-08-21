package com.sigmob.sdk.base.views;

import android.content.Context;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.Dips;

public class y extends ImageView {
    private s a;
    private final int b;

    public y(Context context) {
        super(context);
        s sVar = new s(context);
        this.a = sVar;
        setImageDrawable(sVar);
        this.b = Dips.dipsToIntPixels(2.0f, context);
    }

    public void a(int i) {
        this.a.a(i);
    }

    public void a(int i, int i2) {
        this.a.a(i, i2);
        setVisibility(0);
    }

    @Deprecated
    s getImageViewDrawable() {
        return this.a;
    }

    public void setAnchorId(int i) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, this.b);
        layoutParams.addRule(12, i);
        setLayoutParams(layoutParams);
    }

    @Deprecated
    void setImageViewDrawable(s sVar) {
        this.a = sVar;
    }
}
