package com.tkay.basead.ui;

public class CountDownView extends android.view.View {
    private android.graphics.Paint a;
    private android.graphics.Paint b;
    private android.graphics.Paint c;
    private float d;
    private float e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private android.graphics.RectF l;
    private float m;
    private java.lang.String n;
    private android.graphics.Rect o;
    private int p;
    private float q;
    private android.graphics.Paint.FontMetrics r;

    public CountDownView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CountDownView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            android.content.res.Resources r4 = r3.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            r0 = 1
            r1 = 1075838976(0x40200000, float:2.5)
            float r4 = android.util.TypedValue.applyDimension(r0, r1, r4)
            r2.d = r4
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            r4 = 1092616192(0x41200000, float:10.0)
            float r3 = android.util.TypedValue.applyDimension(r0, r4, r3)
            r2.e = r3
            java.lang.String r3 = "#66000000"
            int r3 = android.graphics.Color.parseColor(r3)
            r2.f = r3
            java.lang.String r3 = "#CC000000"
            int r3 = android.graphics.Color.parseColor(r3)
            r2.g = r3
            r3 = -1
            r2.h = r3
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.a = r3
            r3.setAntiAlias(r0)
            android.graphics.Paint r3 = r2.a
            android.graphics.Paint$Cap r4 = android.graphics.Paint.Cap.ROUND
            r3.setStrokeCap(r4)
            android.graphics.Paint r3 = r2.a
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r3.setStyle(r4)
            android.graphics.Paint r3 = r2.a
            float r4 = r2.d
            r3.setStrokeWidth(r4)
            android.graphics.Paint r3 = new android.graphics.Paint
            android.graphics.Paint r4 = r2.a
            r3.<init>(r4)
            r2.b = r3
            int r4 = r2.f
            r3.setColor(r4)
            android.graphics.Paint r3 = r2.b
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.FILL
            r3.setStyle(r4)
            android.graphics.Paint r3 = new android.graphics.Paint
            r3.<init>()
            r2.c = r3
            r3.setAntiAlias(r0)
            android.graphics.Paint r3 = r2.c
            float r4 = r2.e
            r3.setTextSize(r4)
            android.graphics.Paint r3 = r2.c
            int r4 = r2.h
            r3.setColor(r4)
            android.graphics.RectF r3 = new android.graphics.RectF
            r3.<init>()
            r2.l = r3
            android.graphics.Rect r3 = new android.graphics.Rect
            r3.<init>()
            r2.o = r3
            return
    }

    private void a() {
            r5 = this;
            float r0 = r5.d
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 * r1
            android.graphics.RectF r1 = r5.l
            r2 = 0
            float r2 = r2 + r0
            int r3 = r5.i
            float r3 = (float) r3
            float r3 = r3 - r0
            int r4 = r5.j
            float r4 = (float) r4
            float r4 = r4 - r0
            r1.set(r2, r2, r3, r4)
            android.graphics.RectF r0 = r5.l
            float r0 = r0.width()
            int r0 = (int) r0
            int r0 = r0 >> 1
            r5.k = r0
            return
    }

    private void a(android.content.Context r4) {
            r3 = this;
            android.content.res.Resources r0 = r4.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            r1 = 1
            r2 = 1075838976(0x40200000, float:2.5)
            float r0 = android.util.TypedValue.applyDimension(r1, r2, r0)
            r3.d = r0
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            r0 = 1092616192(0x41200000, float:10.0)
            float r4 = android.util.TypedValue.applyDimension(r1, r0, r4)
            r3.e = r4
            java.lang.String r4 = "#66000000"
            int r4 = android.graphics.Color.parseColor(r4)
            r3.f = r4
            java.lang.String r4 = "#CC000000"
            int r4 = android.graphics.Color.parseColor(r4)
            r3.g = r4
            r4 = -1
            r3.h = r4
            android.graphics.Paint r4 = new android.graphics.Paint
            r4.<init>()
            r3.a = r4
            r4.setAntiAlias(r1)
            android.graphics.Paint r4 = r3.a
            android.graphics.Paint$Cap r0 = android.graphics.Paint.Cap.ROUND
            r4.setStrokeCap(r0)
            android.graphics.Paint r4 = r3.a
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r4.setStyle(r0)
            android.graphics.Paint r4 = r3.a
            float r0 = r3.d
            r4.setStrokeWidth(r0)
            android.graphics.Paint r4 = new android.graphics.Paint
            android.graphics.Paint r0 = r3.a
            r4.<init>(r0)
            r3.b = r4
            int r0 = r3.f
            r4.setColor(r0)
            android.graphics.Paint r4 = r3.b
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.FILL
            r4.setStyle(r0)
            android.graphics.Paint r4 = new android.graphics.Paint
            r4.<init>()
            r3.c = r4
            r4.setAntiAlias(r1)
            android.graphics.Paint r4 = r3.c
            float r0 = r3.e
            r4.setTextSize(r0)
            android.graphics.Paint r4 = r3.c
            int r0 = r3.h
            r4.setColor(r0)
            android.graphics.RectF r4 = new android.graphics.RectF
            r4.<init>()
            r3.l = r4
            android.graphics.Rect r4 = new android.graphics.Rect
            r4.<init>()
            r3.o = r4
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r9) {
            r8 = this;
            super.onDraw(r9)
            android.graphics.RectF r0 = r8.l
            float r0 = r0.centerX()
            android.graphics.RectF r1 = r8.l
            float r1 = r1.centerY()
            int r2 = r8.k
            float r2 = (float) r2
            android.graphics.Paint r3 = r8.b
            r9.drawCircle(r0, r1, r2, r3)
            android.graphics.Paint r0 = r8.a
            int r1 = r8.g
            r0.setColor(r1)
            android.graphics.RectF r3 = r8.l
            android.graphics.Paint r7 = r8.a
            r4 = 0
            r5 = 1135869952(0x43b40000, float:360.0)
            r6 = 0
            r2 = r9
            r2.drawArc(r3, r4, r5, r6, r7)
            android.graphics.Paint r0 = r8.a
            int r1 = r8.h
            r0.setColor(r1)
            android.graphics.RectF r3 = r8.l
            float r5 = r8.m
            android.graphics.Paint r7 = r8.a
            r4 = -1028390912(0xffffffffc2b40000, float:-90.0)
            r2.drawArc(r3, r4, r5, r6, r7)
            java.lang.String r0 = r8.n
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8d
            android.graphics.Paint r0 = r8.c
            java.lang.String r1 = r8.n
            r2 = 0
            int r3 = r1.length()
            android.graphics.Rect r4 = r8.o
            r0.getTextBounds(r1, r2, r3, r4)
            android.graphics.Paint r0 = r8.c
            java.lang.String r1 = r8.n
            float r0 = r0.measureText(r1)
            r8.q = r0
            android.graphics.Paint r0 = r8.c
            android.graphics.Paint$FontMetrics r0 = r0.getFontMetrics()
            r8.r = r0
            java.lang.String r0 = r8.n
            android.graphics.RectF r1 = r8.l
            float r1 = r1.centerX()
            float r2 = r8.q
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            float r1 = r1 - r2
            android.graphics.RectF r2 = r8.l
            float r2 = r2.centerY()
            android.graphics.Paint$FontMetrics r4 = r8.r
            float r4 = r4.bottom
            android.graphics.Paint$FontMetrics r5 = r8.r
            float r5 = r5.top
            float r4 = r4 - r5
            float r4 = r4 / r3
            android.graphics.Paint$FontMetrics r3 = r8.r
            float r3 = r3.bottom
            float r4 = r4 - r3
            float r2 = r2 + r4
            android.graphics.Paint r3 = r8.c
            r9.drawText(r0, r1, r2, r3)
        L8d:
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            r0.i = r1
            r0.j = r2
            r0.a()
            return
    }

    public void refresh(int r6) {
            r5 = this;
            float r0 = (float) r6
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            int r1 = r5.p
            float r1 = (float) r1
            float r0 = r0 / r1
            r1 = 1135869952(0x43b40000, float:360.0)
            float r0 = r0 * r1
            r5.m = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.p
            int r1 = r1 - r6
            double r1 = (double) r1
            r3 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r1 = r1 / r3
            double r1 = java.lang.Math.ceil(r1)
            int r6 = (int) r1
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.n = r6
            r5.invalidate()
            return
    }

    public void setBgColor(int r2) {
            r1 = this;
            r1.f = r2
            android.graphics.Paint r0 = r1.b
            r0.setColor(r2)
            return
    }

    public void setDuration(int r2) {
            r1 = this;
            r1.p = r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r2 / 1000
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.n = r2
            return
    }

    public void setThickInPx(int r2) {
            r1 = this;
            float r2 = (float) r2
            r1.d = r2
            android.graphics.Paint r0 = r1.a
            r0.setStrokeWidth(r2)
            r1.a()
            return
    }

    public void setUnderRingColor(int r1) {
            r0 = this;
            r0.g = r1
            return
    }
}
