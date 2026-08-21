package com.mbridge.msdk.video.dynview.widget;

public class ObservableScrollView extends android.widget.HorizontalScrollView {
    private com.mbridge.msdk.video.dynview.widget.a a;

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
    protected void onScrollChanged(int r7, int r8, int r9, int r10) {
            r6 = this;
            super.onScrollChanged(r7, r8, r9, r10)
            com.mbridge.msdk.video.dynview.widget.a r0 = r6.a
            if (r0 == 0) goto Lf
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)
        Lf:
            return
    }
}
