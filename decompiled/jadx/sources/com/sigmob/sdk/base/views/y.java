package com.sigmob.sdk.base.views;

import android.content.Context;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.Dips;

/* JADX INFO: loaded from: classes3.dex */
public class y extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private s f4993a;
    private final int b;

    public y(Context context) {
        super(context);
        s sVar = new s(context);
        this.f4993a = sVar;
        setImageDrawable(sVar);
        this.b = Dips.dipsToIntPixels(2.0f, context);
    }

    public void a(int i) {
        this.f4993a.a(i);
    }

    public void a(int i, int i2) {
        this.f4993a.a(i, i2);
        setVisibility(0);
    }

    @Deprecated
    s getImageViewDrawable() {
        return this.f4993a;
    }

    public void setAnchorId(int i) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, this.b);
        layoutParams.addRule(12, i);
        setLayoutParams(layoutParams);
    }

    @Deprecated
    void setImageViewDrawable(s sVar) {
        this.f4993a = sVar;
    }
}
