package com.kwad.sdk.core.video;

public final class a extends android.view.TextureView {
    private int videoHeight;
    private int videoWidth;

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final void adaptVideoSize(int r2, int r3) {
            r1 = this;
            int r0 = r1.videoWidth
            if (r0 == r2) goto Lf
            int r0 = r1.videoHeight
            if (r0 == r3) goto Lf
            r1.videoWidth = r2
            r1.videoHeight = r3
            r1.requestLayout()
        Lf:
            return
    }

    @Override
    protected final void onMeasure(int r7, int r8) {
            r6 = this;
            float r0 = r6.getRotation()
            r1 = 1119092736(0x42b40000, float:90.0)
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 == 0) goto L10
            r1 = 1132920832(0x43870000, float:270.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L13
        L10:
            r5 = r8
            r8 = r7
            r7 = r5
        L13:
            int r0 = r6.videoWidth
            int r0 = getDefaultSize(r0, r7)
            int r1 = r6.videoHeight
            int r1 = getDefaultSize(r1, r8)
            int r2 = r6.videoWidth
            if (r2 <= 0) goto L9b
            int r2 = r6.videoHeight
            if (r2 <= 0) goto L9b
            int r0 = android.view.View.MeasureSpec.getMode(r7)
            int r7 = android.view.View.MeasureSpec.getSize(r7)
            int r1 = android.view.View.MeasureSpec.getMode(r8)
            int r8 = android.view.View.MeasureSpec.getSize(r8)
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 != r2) goto L58
            if (r1 != r2) goto L58
            int r0 = r6.videoWidth
            int r1 = r0 * r8
            int r2 = r6.videoHeight
            int r3 = r7 * r2
            if (r1 >= r3) goto L4a
            int r0 = r0 * r8
            int r0 = r0 / r2
            goto L56
        L4a:
            int r1 = r0 * r8
            int r3 = r7 * r2
            if (r1 <= r3) goto L55
            int r2 = r2 * r7
            int r1 = r2 / r0
        L53:
            r0 = r7
            goto L9b
        L55:
            r0 = r7
        L56:
            r1 = r8
            goto L9b
        L58:
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 != r2) goto L6e
            int r0 = r6.videoHeight
            int r2 = r7 * r0
            int r4 = r6.videoWidth
            int r2 = r2 / r4
            if (r1 != r3) goto L6b
            if (r2 <= r8) goto L6b
            int r4 = r4 * r8
            int r0 = r4 / r0
            goto L56
        L6b:
            r0 = r7
            r1 = r2
            goto L9b
        L6e:
            if (r1 != r2) goto L82
            int r1 = r6.videoWidth
            int r2 = r8 * r1
            int r4 = r6.videoHeight
            int r2 = r2 / r4
            if (r0 != r3) goto L7f
            if (r2 <= r7) goto L7f
            int r4 = r4 * r7
            int r1 = r4 / r1
            goto L53
        L7f:
            r1 = r8
        L80:
            r0 = r2
            goto L9b
        L82:
            int r2 = r6.videoWidth
            int r4 = r6.videoHeight
            if (r1 != r3) goto L8e
            if (r4 <= r8) goto L8e
            int r2 = r2 * r8
            int r2 = r2 / r4
            r1 = r8
            goto L8f
        L8e:
            r1 = r4
        L8f:
            if (r0 != r3) goto L80
            if (r2 <= r7) goto L80
            int r8 = r6.videoHeight
            int r8 = r8 * r7
            int r0 = r6.videoWidth
            int r1 = r8 / r0
            goto L53
        L9b:
            r6.setMeasuredDimension(r0, r1)
            return
    }

    @Override
    public final void setRotation(float r2) {
            r1 = this;
            float r0 = r1.getRotation()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto Le
            super.setRotation(r2)
            r1.requestLayout()
        Le:
            return
    }
}
