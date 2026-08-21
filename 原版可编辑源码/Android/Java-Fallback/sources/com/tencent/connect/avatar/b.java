package com.tencent.connect.avatar;

public class b extends android.view.View {
    private android.graphics.Rect a;
    private android.graphics.Paint b;

    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.b()
            return
    }

    private void b() {
            r1 = this;
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r1.b = r0
            return
    }

    public android.graphics.Rect a() {
            r5 = this;
            android.graphics.Rect r0 = r5.a
            if (r0 != 0) goto L2f
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r5.a = r0
            int r0 = r5.getMeasuredWidth()
            int r1 = r5.getMeasuredHeight()
            int r2 = r1 + (-60)
            int r2 = r2 + (-80)
            int r2 = java.lang.Math.min(r2, r0)
            r3 = 640(0x280, float:8.97E-43)
            int r2 = java.lang.Math.min(r2, r3)
            int r0 = r0 - r2
            int r0 = r0 / 2
            int r1 = r1 - r2
            int r1 = r1 / 2
            int r3 = r0 + r2
            int r2 = r2 + r1
            android.graphics.Rect r4 = r5.a
            r4.set(r0, r1, r3, r2)
        L2f:
            android.graphics.Rect r0 = r5.a
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r14) {
            r13 = this;
            super.onDraw(r14)
            android.graphics.Rect r0 = r13.a()
            int r1 = r13.getMeasuredWidth()
            int r2 = r13.getMeasuredHeight()
            android.graphics.Paint r3 = r13.b
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.FILL
            r3.setStyle(r4)
            android.graphics.Paint r3 = r13.b
            r4 = 100
            r5 = 0
            int r6 = android.graphics.Color.argb(r4, r5, r5, r5)
            r3.setColor(r6)
            float r1 = (float) r1
            int r3 = r0.top
            float r11 = (float) r3
            android.graphics.Paint r12 = r13.b
            r8 = 0
            r9 = 0
            r7 = r14
            r10 = r1
            r7.drawRect(r8, r9, r10, r11, r12)
            int r3 = r0.bottom
            float r9 = (float) r3
            float r11 = (float) r2
            android.graphics.Paint r12 = r13.b
            r7.drawRect(r8, r9, r10, r11, r12)
            int r2 = r0.top
            float r8 = (float) r2
            int r2 = r0.left
            float r9 = (float) r2
            int r2 = r0.bottom
            float r10 = (float) r2
            android.graphics.Paint r11 = r13.b
            r7 = 0
            r6 = r14
            r6.drawRect(r7, r8, r9, r10, r11)
            int r2 = r0.right
            float r8 = (float) r2
            int r2 = r0.top
            float r9 = (float) r2
            int r2 = r0.bottom
            float r11 = (float) r2
            android.graphics.Paint r12 = r13.b
            r7 = r14
            r10 = r1
            r7.drawRect(r8, r9, r10, r11, r12)
            int r1 = android.graphics.Color.argb(r4, r5, r5, r5)
            r14.drawColor(r1)
            android.graphics.Paint r1 = r13.b
            android.graphics.Paint$Style r2 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r2)
            android.graphics.Paint r1 = r13.b
            r2 = -1
            r1.setColor(r2)
            int r1 = r0.left
            float r3 = (float) r1
            int r1 = r0.top
            float r4 = (float) r1
            int r1 = r0.right
            int r1 = r1 + (-1)
            float r5 = (float) r1
            int r0 = r0.bottom
            float r6 = (float) r0
            android.graphics.Paint r7 = r13.b
            r2 = r14
            r2.drawRect(r3, r4, r5, r6, r7)
            return
    }
}
