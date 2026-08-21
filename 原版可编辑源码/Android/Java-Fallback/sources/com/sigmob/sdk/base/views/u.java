package com.sigmob.sdk.base.views;

public class u extends android.graphics.drawable.Drawable {
    private static final int i = 1;
    private final android.graphics.Paint a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final int[] g;
    private android.graphics.RectF h;

    static class 1 {
    }

    public static class a {
        private int a;
        private int b;
        private int c;
        private int d;
        private int e;
        private int f;
        private int[] g;

        a() {
                r3 = this;
                r3.<init>()
                r0 = 0
                r3.e = r0
                r3.f = r0
                r1 = 1
                r3.a = r1
                r2 = 12
                r3.b = r2
                java.lang.String r2 = "#4d000000"
                int r2 = android.graphics.Color.parseColor(r2)
                r3.c = r2
                r2 = 18
                r3.d = r2
                r3.e = r0
                r3.f = r0
                int[] r1 = new int[r1]
                r3.g = r1
                r1[r0] = r0
                return
        }

        com.sigmob.sdk.base.views.u.a a(int r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a a(int[] r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        com.sigmob.sdk.base.views.u a() {
                r10 = this;
                com.sigmob.sdk.base.views.u r9 = new com.sigmob.sdk.base.views.u
                int r1 = r10.a
                int[] r2 = r10.g
                int r3 = r10.b
                int r4 = r10.c
                int r5 = r10.d
                int r6 = r10.e
                int r7 = r10.f
                r8 = 0
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        com.sigmob.sdk.base.views.u.a b(int r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a c(int r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a d(int r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a e(int r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a f(int r1) {
                r0 = this;
                r0.f = r1
                return r0
        }

        com.sigmob.sdk.base.views.u.a g(int r3) {
                r2 = this;
                int[] r0 = r2.g
                r1 = 0
                r0[r1] = r3
                return r2
        }
    }

    private u(int r1, int[] r2, int r3, int r4, int r5, int r6, int r7) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.g = r2
            r0.d = r3
            r0.b = r5
            r0.e = r6
            r0.f = r7
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.a = r1
            r2 = 0
            r1.setColor(r2)
            android.graphics.Paint r1 = r0.a
            r2 = 1
            r1.setAntiAlias(r2)
            android.graphics.Paint r1 = r0.a
            float r2 = (float) r5
            float r3 = (float) r6
            float r5 = (float) r7
            r1.setShadowLayer(r2, r3, r5, r4)
            android.graphics.Paint r1 = r0.a
            android.graphics.PorterDuffXfermode r2 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.DST_ATOP
            r2.<init>(r3)
            r1.setXfermode(r2)
            return
    }

    u(int r1, int[] r2, int r3, int r4, int r5, int r6, int r7, com.sigmob.sdk.base.views.u.1 r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(android.view.View r1, int r2, int r3, int r4, int r5, int r6, int r7) {
            com.sigmob.sdk.base.views.u$a r0 = new com.sigmob.sdk.base.views.u$a
            r0.<init>()
            com.sigmob.sdk.base.views.u$a r2 = r0.g(r2)
            com.sigmob.sdk.base.views.u$a r2 = r2.b(r3)
            com.sigmob.sdk.base.views.u$a r2 = r2.c(r4)
            com.sigmob.sdk.base.views.u$a r2 = r2.d(r5)
            com.sigmob.sdk.base.views.u$a r2 = r2.e(r6)
            com.sigmob.sdk.base.views.u$a r2 = r2.f(r7)
            com.sigmob.sdk.base.views.u r2 = r2.a()
            r3 = 1
            r4 = 0
            r1.setLayerType(r3, r4)
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 16
            if (r3 < r4) goto L30
            r1.setBackground(r2)
            goto L33
        L30:
            r1.setBackgroundDrawable(r2)
        L33:
            return
    }

    @Override
    public void draw(android.graphics.Canvas r13) {
            r12 = this;
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            int[] r1 = r12.g
            r2 = 1
            r3 = 1073741824(0x40000000, float:2.0)
            if (r1 == 0) goto L3c
            int r4 = r1.length
            if (r4 != r2) goto L16
            r4 = 0
            r1 = r1[r4]
            r0.setColor(r1)
            goto L3c
        L16:
            android.graphics.LinearGradient r1 = new android.graphics.LinearGradient
            android.graphics.RectF r4 = r12.h
            float r5 = r4.left
            android.graphics.RectF r4 = r12.h
            float r4 = r4.height()
            float r6 = r4 / r3
            android.graphics.RectF r4 = r12.h
            float r7 = r4.right
            android.graphics.RectF r4 = r12.h
            float r4 = r4.height()
            float r8 = r4 / r3
            int[] r9 = r12.g
            r10 = 0
            android.graphics.Shader$TileMode r11 = android.graphics.Shader.TileMode.CLAMP
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            r0.setShader(r1)
        L3c:
            r0.setAntiAlias(r2)
            int r1 = r12.c
            if (r1 != r2) goto L58
            android.graphics.RectF r1 = r12.h
            int r2 = r12.d
            float r3 = (float) r2
            float r2 = (float) r2
            android.graphics.Paint r4 = r12.a
            r13.drawRoundRect(r1, r3, r2, r4)
            android.graphics.RectF r1 = r12.h
            int r2 = r12.d
            float r3 = (float) r2
            float r2 = (float) r2
            r13.drawRoundRect(r1, r3, r2, r0)
            goto L9a
        L58:
            android.graphics.RectF r1 = r12.h
            float r1 = r1.centerX()
            android.graphics.RectF r2 = r12.h
            float r2 = r2.centerY()
            android.graphics.RectF r4 = r12.h
            float r4 = r4.width()
            android.graphics.RectF r5 = r12.h
            float r5 = r5.height()
            float r4 = java.lang.Math.min(r4, r5)
            float r4 = r4 / r3
            android.graphics.Paint r5 = r12.a
            r13.drawCircle(r1, r2, r4, r5)
            android.graphics.RectF r1 = r12.h
            float r1 = r1.centerX()
            android.graphics.RectF r2 = r12.h
            float r2 = r2.centerY()
            android.graphics.RectF r4 = r12.h
            float r4 = r4.width()
            android.graphics.RectF r5 = r12.h
            float r5 = r5.height()
            float r4 = java.lang.Math.min(r4, r5)
            float r4 = r4 / r3
            r13.drawCircle(r1, r2, r4, r0)
        L9a:
            return
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = -3
            return r0
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.a
            r0.setAlpha(r2)
            return
    }

    @Override
    public void setBounds(int r5, int r6, int r7, int r8) {
            r4 = this;
            super.setBounds(r5, r6, r7, r8)
            android.graphics.RectF r0 = new android.graphics.RectF
            int r1 = r4.b
            int r5 = r5 + r1
            int r2 = r4.e
            int r5 = r5 - r2
            float r5 = (float) r5
            int r6 = r6 + r1
            int r3 = r4.f
            int r6 = r6 - r3
            float r6 = (float) r6
            int r7 = r7 - r1
            int r7 = r7 - r2
            float r7 = (float) r7
            int r8 = r8 - r1
            int r8 = r8 - r3
            float r8 = (float) r8
            r0.<init>(r5, r6, r7, r8)
            r4.h = r0
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.a
            r0.setColorFilter(r2)
            return
    }
}
