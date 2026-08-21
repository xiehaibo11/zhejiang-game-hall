package com.sigmob.sdk.base.views;

public class p extends android.view.View {
    android.graphics.Paint a;
    private final float b;

    public p(android.content.Context r1, float r2) {
            r0 = this;
            r0.<init>(r1)
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    private android.graphics.Path a(float r4, float r5) {
            r3 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1 = 288(0x120, float:4.04E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.moveTo(r2, r1)
            r1 = 108(0x6c, float:1.51E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 144(0x90, float:2.02E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.lineTo(r2, r1)
            r1 = 180(0xb4, float:2.52E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 216(0xd8, float:3.03E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r4 = r4 * r1
            r0.lineTo(r2, r4)
            r4 = 252(0xfc, float:3.53E-43)
            float r1 = r3.a(r4)
            float r1 = r1 * r5
            float r4 = r3.b(r4)
            float r5 = r5 * r4
            r0.lineTo(r1, r5)
            r0.close()
            return r0
    }

    private android.graphics.Path b(float r4, float r5) {
            r3 = this;
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1 = 0
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.moveTo(r2, r1)
            r1 = 36
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 72
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.lineTo(r2, r1)
            r1 = 108(0x6c, float:1.51E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 144(0x90, float:2.02E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.lineTo(r2, r1)
            r1 = 180(0xb4, float:2.52E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 216(0xd8, float:3.03E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r1 = r1 * r4
            r0.lineTo(r2, r1)
            r1 = 252(0xfc, float:3.53E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r5
            float r1 = r3.b(r1)
            float r1 = r1 * r5
            r0.lineTo(r2, r1)
            r1 = 288(0x120, float:4.04E-43)
            float r2 = r3.a(r1)
            float r2 = r2 * r4
            float r1 = r3.b(r1)
            float r4 = r4 * r1
            r0.lineTo(r2, r4)
            r4 = 324(0x144, float:4.54E-43)
            float r1 = r3.a(r4)
            float r1 = r1 * r5
            float r4 = r3.b(r4)
            float r5 = r5 * r4
            r0.lineTo(r1, r5)
            r0.close()
            return r0
    }

    float a(int r5) {
            r4 = this;
            double r0 = (double) r5
            r2 = 4614256656552045848(0x400921fb54442d18, double:3.141592653589793)
            double r0 = r0 * r2
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            double r0 = r0 / r2
            double r0 = java.lang.Math.cos(r0)
            float r5 = (float) r0
            return r5
    }

    float b(int r5) {
            r4 = this;
            double r0 = (double) r5
            r2 = 4614256656552045848(0x400921fb54442d18, double:3.141592653589793)
            double r0 = r0 * r2
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            double r0 = r0 / r2
            double r0 = java.lang.Math.sin(r0)
            float r5 = (float) r0
            return r5
    }

    @Override
    protected void onDraw(android.graphics.Canvas r12) {
            r11 = this;
            super.onDraw(r12)
            int r0 = r11.getHeight()
            float r1 = r11.b
            int r1 = (int) r1
            float r2 = (float) r0
            r3 = 1077936128(0x40400000, float:3.0)
            float r2 = r2 / r3
            r3 = 18
            float r3 = r11.b(r3)
            float r3 = r3 * r2
            r4 = 126(0x7e, float:1.77E-43)
            float r4 = r11.b(r4)
            float r3 = r3 / r4
            android.graphics.Paint r4 = r11.a
            r5 = 1
            r4.setAntiAlias(r5)
            android.graphics.Paint r4 = r11.a
            java.lang.String r6 = "#FFA500"
            int r7 = android.graphics.Color.parseColor(r6)
            r4.setColor(r7)
            r4 = r1
        L2e:
            r7 = -1047527424(0xffffffffc1900000, float:-18.0)
            r8 = 0
            r9 = 1074580685(0x400ccccd, float:2.2)
            r10 = 1099956224(0x41900000, float:18.0)
            if (r4 <= 0) goto L6e
            if (r5 != 0) goto L42
            r12.rotate(r10)
            float r9 = r9 * r2
            r12.translate(r9, r8)
            goto L4c
        L42:
            r5 = 0
            r8 = 1073741824(0x40000000, float:2.0)
            float r8 = r8 + r2
            int r9 = r0 / 2
            float r9 = (float) r9
            r12.translate(r8, r9)
        L4c:
            r12.rotate(r7)
            android.graphics.Path r7 = r11.b(r2, r3)
            android.graphics.Paint r8 = r11.a
            android.graphics.Paint$Style r9 = android.graphics.Paint.Style.STROKE
            r8.setStyle(r9)
            android.graphics.Paint r8 = r11.a
            r12.drawPath(r7, r8)
            android.graphics.Paint r8 = r11.a
            android.graphics.Paint$Style r9 = android.graphics.Paint.Style.FILL
            r8.setStyle(r9)
            android.graphics.Paint r8 = r11.a
            r12.drawPath(r7, r8)
            int r4 = r4 + (-1)
            goto L2e
        L6e:
            float r0 = r11.b
            float r1 = (float) r1
            int r4 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r4 <= 0) goto L105
            float r0 = r0 - r1
            r1 = 1048576000(0x3e800000, float:0.25)
            float r0 = r0 + r1
            r1 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 < 0) goto Lb0
            r12.rotate(r10)
            float r0 = r2 * r9
            r12.translate(r0, r8)
            r12.rotate(r7)
            android.graphics.Path r0 = r11.b(r2, r3)
            android.graphics.Paint r1 = r11.a
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r4)
            android.graphics.Paint r1 = r11.a
            int r4 = android.graphics.Color.parseColor(r6)
            r1.setColor(r4)
            android.graphics.Paint r1 = r11.a
            r12.drawPath(r0, r1)
        La3:
            android.graphics.Paint r1 = r11.a
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.FILL
            r1.setStyle(r4)
        Laa:
            android.graphics.Paint r1 = r11.a
            r12.drawPath(r0, r1)
            goto L105
        Lb0:
            r1 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r12.rotate(r10)
            if (r0 < 0) goto Le8
            float r0 = r2 * r9
            r12.translate(r0, r8)
            r12.rotate(r7)
            android.graphics.Path r0 = r11.b(r2, r3)
            android.graphics.Paint r1 = r11.a
            int r4 = android.graphics.Color.parseColor(r6)
            r1.setColor(r4)
            android.graphics.Paint r1 = r11.a
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r4)
            android.graphics.Paint r1 = r11.a
            r12.drawPath(r0, r1)
            android.graphics.Path r0 = r11.a(r2, r3)
            android.graphics.Paint r1 = r11.a
            int r4 = android.graphics.Color.parseColor(r6)
            r1.setColor(r4)
            goto La3
        Le8:
            float r0 = r2 * r9
            r12.translate(r0, r8)
            r12.rotate(r7)
            android.graphics.Path r0 = r11.b(r2, r3)
            android.graphics.Paint r1 = r11.a
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r4)
            android.graphics.Paint r1 = r11.a
            int r4 = android.graphics.Color.parseColor(r6)
            r1.setColor(r4)
            goto Laa
        L105:
            r0 = 1084227584(0x40a00000, float:5.0)
            float r1 = r11.b
            float r0 = r0 - r1
            int r0 = (int) r0
        L10b:
            if (r0 <= 0) goto L134
            r12.rotate(r10)
            float r1 = r2 * r9
            r12.translate(r1, r8)
            r12.rotate(r7)
            android.graphics.Path r1 = r11.b(r2, r3)
            android.graphics.Paint r4 = r11.a
            android.graphics.Paint$Style r5 = android.graphics.Paint.Style.STROKE
            r4.setStyle(r5)
            android.graphics.Paint r4 = r11.a
            int r5 = android.graphics.Color.parseColor(r6)
            r4.setColor(r5)
            android.graphics.Paint r4 = r11.a
            r12.drawPath(r1, r4)
            int r0 = r0 + (-1)
            goto L10b
        L134:
            return
    }
}
