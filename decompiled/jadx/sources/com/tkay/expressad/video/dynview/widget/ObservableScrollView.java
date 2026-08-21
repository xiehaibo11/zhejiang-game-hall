package com.tkay.expressad.video.dynview.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.HorizontalScrollView;

/* JADX INFO: loaded from: classes3.dex */
public class ObservableScrollView extends HorizontalScrollView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f7256a;

    public ObservableScrollView(Context context) {
        super(context);
        this.f7256a = null;
    }

    public ObservableScrollView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f7256a = null;
    }

    public ObservableScrollView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f7256a = null;
    }

    @Override // android.widget.HorizontalScrollView
    public void fling(int i) {
        super.fling(i / 4);
    }

    @Override // android.view.View
    protected void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
    }
}
