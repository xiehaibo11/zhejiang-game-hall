package com.tkay.expressad.video.dynview.widget;

public class ObservableScrollView extends android.widget.HorizontalScrollView {
    private com.tkay.expressad.video.dynview.widget.a a;

    public ObservableScrollView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            return
    }

    public ObservableScrollView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.a = r1
            return
    }

    public ObservableScrollView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.a = r1
            return
    }

    @Override
    public void fling(int r1) {
            r0 = this;
            int r1 = r1 / 4
            super.fling(r1)
            return
    }

    @Override
    protected void onScrollChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onScrollChanged(r1, r2, r3, r4)
            return
    }
}
