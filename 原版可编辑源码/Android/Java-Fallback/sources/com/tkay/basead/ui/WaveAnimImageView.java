package com.tkay.basead.ui;

public class WaveAnimImageView extends android.widget.ImageView {
    int a;
    int b;
    private android.graphics.Paint c;
    private com.tkay.basead.ui.WaveAnimImageView.a d;

    public static class a {
        float a;
        float b;
        float c;

        public a(float r1, float r2, float r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    public WaveAnimImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public WaveAnimImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public WaveAnimImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    private void a() {
            r2 = this;
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r2.c = r0
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r2.c
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r2.c
            java.lang.String r1 = "#FFFFFF"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setColor(r1)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r5) {
            r4 = this;
            super.onDraw(r5)
            com.tkay.basead.ui.WaveAnimImageView$a r0 = r4.d
            if (r0 == 0) goto L2a
            android.graphics.Paint r1 = r4.c
            r2 = 1132396544(0x437f0000, float:255.0)
            float r0 = r0.c
            float r0 = r0 * r2
            int r0 = (int) r0
            r1.setAlpha(r0)
            android.graphics.Paint r0 = r4.c
            com.tkay.basead.ui.WaveAnimImageView$a r1 = r4.d
            float r1 = r1.b
            r0.setStrokeWidth(r1)
            int r0 = r4.a
            float r0 = (float) r0
            int r1 = r4.b
            float r1 = (float) r1
            com.tkay.basead.ui.WaveAnimImageView$a r2 = r4.d
            float r2 = r2.a
            android.graphics.Paint r3 = r4.c
            r5.drawCircle(r0, r1, r2, r3)
        L2a:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            int r1 = r0.getWidth()
            int r1 = r1 / 2
            r0.a = r1
            int r1 = r0.getHeight()
            int r1 = r1 / 2
            r0.b = r1
            return
    }

    public void setWaveAnimParams(com.tkay.basead.ui.WaveAnimImageView.a r1) {
            r0 = this;
            r0.d = r1
            r0.invalidate()
            return
    }
}
