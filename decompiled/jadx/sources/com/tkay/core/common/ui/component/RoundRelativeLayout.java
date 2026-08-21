package com.tkay.core.common.ui.component;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.RelativeLayout;
import com.tkay.core.common.l.u;

/* JADX INFO: loaded from: classes3.dex */
public class RoundRelativeLayout extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f6319a;

    public RoundRelativeLayout(Context context) {
        this(context, null);
    }

    public RoundRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f6319a = dip2px(context, 4.0f);
    }

    public RoundRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        this(context);
    }

    private void a(Context context) {
        this.f6319a = dip2px(context, 4.0f);
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
        super.draw(canvas);
        u.a(canvas, getWidth(), getHeight(), this.f6319a);
        canvas.restoreToCount(iSaveLayer);
    }

    public static int dip2px(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }
}
