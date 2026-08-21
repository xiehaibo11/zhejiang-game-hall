package com.tkay.core.basead.ui.web;

public class WebProgressBarView extends android.view.View {
    int a;
    int b;
    android.graphics.Paint c;

    public WebProgressBarView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public WebProgressBarView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public WebProgressBarView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    private void a() {
            r2 = this;
            r0 = -14575885(0xffffffffff2196f3, float:-2.1478948E38)
            r2.b = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r2.c = r0
            int r1 = r2.b
            r0.setColor(r1)
            android.graphics.Paint r0 = r2.c
            r1 = 1
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = r2.c
            r0.setDither(r1)
            r0 = 0
            r2.a = r0
            r0 = 16777215(0xffffff, float:2.3509886E-38)
            r2.setBackgroundColor(r0)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r8) {
            r7 = this;
            super.onDraw(r8)
            r8.save()
            int r0 = r7.getWidth()
            int r1 = r7.a
            int r0 = r0 * r1
            int r0 = r0 / 100
            float r4 = (float) r0
            int r0 = r7.getHeight()
            float r5 = (float) r0
            android.graphics.Paint r6 = r7.c
            r2 = 0
            r3 = 0
            r1 = r8
            r1.drawRect(r2, r3, r4, r5, r6)
            r8.restore()
            return
    }

    public void setProgress(int r1) {
            r0 = this;
            r0.a = r1
            r0.postInvalidate()
            return
    }
}
