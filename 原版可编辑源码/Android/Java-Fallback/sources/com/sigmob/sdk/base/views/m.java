package com.sigmob.sdk.base.views;

public class m extends android.view.View {
    private android.graphics.Paint a;
    private android.graphics.Path b;

    public m(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            android.graphics.Paint r4 = new android.graphics.Paint
            r0 = 1
            r4.<init>(r0)
            r3.a = r4
            r0 = -12303292(0xffffffffff444444, float:-2.6088314E38)
            r4.setColor(r0)
            android.graphics.Paint r4 = r3.a
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r4.setStyle(r0)
            android.graphics.Paint r4 = r3.a
            r0 = 1077936128(0x40400000, float:3.0)
            r4.setStrokeWidth(r0)
            android.graphics.Paint r4 = r3.a
            android.graphics.DashPathEffect r0 = new android.graphics.DashPathEffect
            r1 = 2
            float[] r1 = new float[r1]
            r1 = {x0038: FILL_ARRAY_DATA , data: [1092616192, 1084227584} // fill-array
            r2 = 0
            r0.<init>(r1, r2)
            r4.setPathEffect(r0)
            android.graphics.Path r4 = new android.graphics.Path
            r4.<init>()
            r3.b = r4
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r4) {
            r3 = this;
            android.graphics.Path r0 = r3.b
            r0.reset()
            r3.getHeight()
            r3.getWidth()
            android.graphics.Path r0 = r3.b
            r1 = 0
            r0.moveTo(r1, r1)
            android.graphics.Path r0 = r3.b
            int r2 = r3.getHeight()
            float r2 = (float) r2
            r0.lineTo(r1, r2)
            android.graphics.Path r0 = r3.b
            android.graphics.Paint r1 = r3.a
            r4.drawPath(r0, r1)
            return
    }
}
