package com.mbridge.msdk.video.dynview.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.HorizontalScrollView;

public class ObservableScrollView extends HorizontalScrollView {
    private a a;

    public ObservableScrollView(Context context) {
        super(context);
        this.a = null;
    }

    public ObservableScrollView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = null;
    }

    public ObservableScrollView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = null;
    }

    @Override
    public void fling(int i) {
        super.fling(i / 4);
    }

    @Override
    protected void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(this, i, i2, i3, i4);
        }
    }
}
