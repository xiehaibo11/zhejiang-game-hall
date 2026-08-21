package com.kwad.sdk.d.a;

public final class a {
    private static int ajG;
    private static long ajH;

    public static boolean B(android.view.View r1) {
            int r1 = r1.getSystemUiVisibility()
            r0 = 1024(0x400, float:1.435E-42)
            r1 = r1 & r0
            if (r1 != r0) goto Lb
            r1 = 1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static void C(android.view.View r2) {
            if (r2 != 0) goto L3
            return
        L3:
            android.view.ViewParent r0 = r2.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto Lc
            return
        Lc:
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            r1 = -1
            r0.width = r1
            r0.height = r1
            r2.setLayoutParams(r0)
            return
    }

    public static int[] D(android.view.View r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            r0 = 2
            int[] r1 = new int[r0]
            r5.getLocationInWindow(r1)
            int r2 = r5.getWidth()
            int r5 = r5.getHeight()
            r3 = 0
            r4 = r1[r3]
            int r2 = r2 / r0
            int r4 = r4 + r2
            r1[r3] = r4
            r2 = 1
            r3 = r1[r2]
            int r5 = r5 / r0
            int r3 = r3 + r5
            r1[r2] = r3
            return r1
    }

    public static int E(android.view.View r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            boolean r1 = r2 instanceof android.widget.FrameLayout.LayoutParams
            if (r1 == 0) goto L11
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            int r2 = r2.gravity
            return r2
        L11:
            return r0
    }

    public static int a(android.content.Context r0, float r1) {
            if (r0 != 0) goto L7
            r0 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 * r0
        L5:
            int r0 = (int) r1
            return r0
        L7:
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            goto L5
    }

    public static android.view.View a(android.view.ViewGroup r1, int r2, boolean r3) {
            android.content.Context r3 = r1.getContext()
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r3)
            r0 = 1
            android.view.View r1 = r3.inflate(r2, r1, r0)
            return r1
    }

    public static void a(android.view.View.OnClickListener r3, android.view.View... r4) {
            int r0 = r4.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lc
            r2 = r4[r1]
            r2.setOnClickListener(r3)
            int r1 = r1 + 1
            goto L2
        Lc:
            return
    }

    public static void a(android.widget.TextView r13, java.lang.String r14, android.graphics.Bitmap r15) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r14 = " "
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            android.text.TextPaint r1 = r13.getPaint()
            android.graphics.Paint$FontMetrics r2 = r1.getFontMetrics()
            float r3 = r2.descent
            float r2 = r2.top
            float r3 = r3 - r2
            double r2 = (double) r3
            double r2 = java.lang.Math.ceil(r2)
            int r2 = (int) r2
            int r2 = r2 + 2
            android.graphics.drawable.BitmapDrawable r3 = new android.graphics.drawable.BitmapDrawable
            android.content.Context r4 = r13.getContext()
            android.content.res.Resources r4 = r4.getResources()
            r3.<init>(r4, r15)
            int r4 = r3.getIntrinsicWidth()
            int r4 = r4 * r2
            int r5 = r3.getIntrinsicHeight()
            int r4 = r4 / r5
            android.content.Context r5 = r13.getContext()
            r6 = 1065353216(0x3f800000, float:1.0)
            int r5 = a(r5, r6)
            r6 = 0
            r3.setBounds(r6, r5, r4, r2)
            int r2 = r13.getWidth()
            float r3 = r1.measureText(r0)
            float r2 = (float) r2
            int r3 = (r3 > r2 ? 1 : (r3 == r2 ? 0 : -1))
            r5 = 1
            if (r3 <= 0) goto Lba
            r7 = r5
            r8 = r7
            r3 = r6
            r9 = r3
        L5d:
            java.lang.String r10 = r0.substring(r3, r7)
            float r10 = r1.measureText(r10)
            int r11 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r11 >= 0) goto Laa
            int r11 = r13.getMaxLines()
            if (r8 != r11) goto La7
            float r11 = (float) r4
            float r10 = r10 + r11
            float r11 = r1.measureText(r14)
            float r11 = r11 + r10
            int r11 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r11 >= 0) goto La3
            java.lang.String r11 = "..."
            float r12 = r1.measureText(r11)
            float r10 = r10 + r12
            float r12 = r1.measureText(r14)
            float r10 = r10 + r12
            int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r10 >= 0) goto La3
            if (r9 == 0) goto La7
            java.lang.String r0 = r0.substring(r6, r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r11)
            r1.append(r14)
            java.lang.String r0 = r1.toString()
            goto Lba
        La3:
            int r7 = r7 + (-1)
            r9 = r5
            goto Lae
        La7:
            int r7 = r7 + 1
            goto Lae
        Laa:
            int r3 = r7 + (-1)
            int r8 = r8 + 1
        Lae:
            int r10 = r0.length()
            if (r7 > r10) goto Lba
            int r10 = r13.getMaxLines()
            if (r8 <= r10) goto L5d
        Lba:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            r14.append(r0)
            java.lang.String r0 = "*"
            r14.append(r0)
            java.lang.String r14 = r14.toString()
            android.text.SpannableString r0 = new android.text.SpannableString
            r0.<init>(r14)
            com.kwad.sdk.core.view.a r1 = new com.kwad.sdk.core.view.a
            android.content.Context r2 = r13.getContext()
            r1.<init>(r2, r15)
            int r15 = r14.length()
            int r15 = r15 - r5
            int r14 = r14.length()
            r2 = 33
            r0.setSpan(r1, r15, r14, r2)
            r13.setText(r0)
            return
    }

    @java.lang.Deprecated
    public static int aG(android.content.Context r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r0 = "window"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.view.WindowManager r3 = (android.view.WindowManager) r3
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            android.view.Display r3 = r3.getDefaultDisplay()
            if (r1 < r2) goto L1f
            r3.getRealMetrics(r0)
            goto L22
        L1f:
            r3.getMetrics(r0)
        L22:
            int r3 = r0.heightPixels
            return r3
    }

    public static float aH(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            return r0
    }

    public static int b(android.content.Context r0, float r1) {
            if (r0 != 0) goto L7
            r0 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r0
        L5:
            int r0 = (int) r1
            return r0
        L7:
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 / r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            goto L5
    }

    public static void b(android.view.View r1, int r2, int r3, int r4, int r5) {
            android.view.ViewGroup$LayoutParams r5 = r1.getLayoutParams()
            boolean r5 = r5 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r5 == 0) goto L15
            android.view.ViewGroup$LayoutParams r5 = r1.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r5 = (android.view.ViewGroup.MarginLayoutParams) r5
            r0 = 0
            r5.setMargins(r2, r3, r4, r0)
            r1.requestLayout()
        L15:
            return
    }

    public static boolean b(android.app.Activity r0) {
            android.view.Window r0 = r0.getWindow()
            boolean r0 = b(r0)
            return r0
    }

    private static boolean b(android.view.Window r1) {
            android.view.WindowManager$LayoutParams r1 = r1.getAttributes()
            int r1 = r1.flags
            r0 = 1024(0x400, float:1.435E-42)
            r1 = r1 & r0
            if (r1 != r0) goto Ld
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    private static android.view.View c(android.app.Activity r0) {
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = c(r0)
            return r0
    }

    private static android.view.View c(android.view.Window r1) {
            android.view.View r1 = r1.getDecorView()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r1 = r1.findViewById(r0)
            return r1
    }

    public static int d(android.app.Activity r0) {
            android.view.View r0 = c(r0)
            int r0 = r0.getWidth()
            return r0
    }

    public static void d(android.view.View r5, int r6, int r7) {
            if (r5 != 0) goto L3
            return
        L3:
            if (r6 == 0) goto L4b
            if (r7 != 0) goto L8
            goto L4b
        L8:
            android.view.ViewParent r0 = r5.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L11
            return
        L11:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L4b
            if (r0 != 0) goto L1e
            goto L4b
        L1e:
            android.view.ViewGroup$LayoutParams r2 = r5.getLayoutParams()
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = -1
            if (r1 <= r0) goto L36
            if (r6 <= r7) goto L2a
            goto L38
        L2a:
            float r6 = (float) r6
            float r7 = (float) r7
            float r7 = r7 * r3
            float r6 = r6 / r7
            float r7 = (float) r0
            float r6 = r6 * r7
            int r6 = (int) r6
            r2.width = r6
            r2.height = r0
            goto L48
        L36:
            if (r7 <= r6) goto L3d
        L38:
            r2.width = r4
            r2.height = r4
            goto L48
        L3d:
            r2.width = r1
            float r7 = (float) r7
            float r6 = (float) r6
            float r6 = r6 * r3
            float r7 = r7 / r6
            float r6 = (float) r1
            float r7 = r7 * r6
            int r6 = (int) r7
            r2.height = r6
        L48:
            r5.setLayoutParams(r2)
        L4b:
            return
    }

    public static int e(android.app.Activity r0) {
            android.view.View r0 = c(r0)
            int r0 = r0.getHeight()
            return r0
    }

    public static void e(android.view.View r4, int r5, int r6) {
            if (r4 != 0) goto L3
            return
        L3:
            if (r5 == 0) goto L40
            if (r6 != 0) goto L8
            goto L40
        L8:
            android.view.ViewParent r0 = r4.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L11
            return
        L11:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L40
            if (r0 != 0) goto L1e
            goto L40
        L1e:
            android.view.ViewGroup$LayoutParams r2 = r4.getLayoutParams()
            r3 = 1065353216(0x3f800000, float:1.0)
            if (r5 <= r6) goto L32
            r2.width = r1
            float r6 = (float) r6
            float r5 = (float) r5
            float r5 = r5 * r3
            float r6 = r6 / r5
            float r5 = (float) r1
            float r6 = r6 * r5
            int r5 = (int) r6
            r2.height = r5
            goto L3d
        L32:
            float r5 = (float) r5
            float r6 = (float) r6
            float r6 = r6 * r3
            float r5 = r5 / r6
            float r6 = (float) r0
            float r5 = r5 * r6
            int r5 = (int) r5
            r2.width = r5
            r2.height = r0
        L3d:
            r4.setLayoutParams(r2)
        L40:
            return
    }

    public static void f(android.view.View r4, int r5, int r6) {
            if (r4 != 0) goto L3
            return
        L3:
            if (r5 == 0) goto L42
            if (r6 != 0) goto L8
            goto L42
        L8:
            android.view.ViewParent r0 = r4.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L11
            return
        L11:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L42
            if (r0 != 0) goto L1e
            goto L42
        L1e:
            android.view.ViewGroup$LayoutParams r2 = r4.getLayoutParams()
            r3 = 1065353216(0x3f800000, float:1.0)
            if (r1 <= r0) goto L34
            if (r5 > r6) goto L34
            float r5 = (float) r5
            float r6 = (float) r6
            float r6 = r6 * r3
            float r5 = r5 / r6
            float r6 = (float) r0
            float r5 = r5 * r6
            int r5 = (int) r5
            r2.width = r5
            r2.height = r0
            goto L3f
        L34:
            r2.width = r1
            float r6 = (float) r6
            float r5 = (float) r5
            float r5 = r5 * r3
            float r6 = r6 / r5
            float r5 = (float) r1
            float r6 = r6 * r5
            int r5 = (int) r6
            r2.height = r5
        L3f:
            r4.setLayoutParams(r2)
        L42:
            return
    }

    public static int g(android.content.Context r0, int r1) {
            if (r0 == 0) goto Le
            if (r1 != 0) goto L5
            goto Le
        L5:
            android.content.res.Resources r0 = r0.getResources()
            int r0 = r0.getDimensionPixelSize(r1)
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static int getColor(android.content.Context r0, int r1) {
            android.content.res.Resources r0 = r0.getResources()
            int r0 = r0.getColor(r1)
            return r0
    }

    @java.lang.Deprecated
    public static int getScreenHeight(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
            int r1 = r0.heightPixels
            return r1
    }

    @java.lang.Deprecated
    public static int getScreenWidth(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
            int r1 = r0.widthPixels
            return r1
    }

    public static int getStatusBarHeight(android.content.Context r4) {
            int r0 = com.kwad.sdk.d.a.a.ajG
            if (r0 <= 0) goto L5
            return r0
        L5:
            if (r4 != 0) goto L8
            return r0
        L8:
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "status_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L23
            android.content.res.Resources r1 = r4.getResources()
            int r0 = r1.getDimensionPixelSize(r0)
            com.kwad.sdk.d.a.a.ajG = r0
            goto L3e
        L23:
            java.lang.String r0 = "com.android.internal.R$dimen"
            java.lang.Object r0 = com.kwad.sdk.utils.s.f(r0, r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L3a
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L3a
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Throwable -> L3a
            int r0 = r1.getDimensionPixelSize(r0)     // Catch: java.lang.Throwable -> L3a
            com.kwad.sdk.d.a.a.ajG = r0     // Catch: java.lang.Throwable -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            int r0 = com.kwad.sdk.d.a.a.ajG
            if (r0 > 0) goto L4a
            r0 = 1103626240(0x41c80000, float:25.0)
            int r4 = a(r4, r0)
            com.kwad.sdk.d.a.a.ajG = r4
        L4a:
            int r4 = com.kwad.sdk.d.a.a.ajG
            return r4
    }

    public static void m(android.view.View r1, int r2) {
            if (r1 != 0) goto L3
            return
        L3:
            if (r2 != 0) goto L6
            return
        L6:
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            r0.height = r2
            r1.setLayoutParams(r0)
            return
    }

    public static void n(android.view.View r1, int r2) {
            if (r1 != 0) goto L3
            return
        L3:
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r0 = r1 instanceof android.widget.FrameLayout.LayoutParams
            if (r0 == 0) goto Lf
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            r1.gravity = r2
        Lf:
            return
    }

    public static boolean yD() {
            long r0 = android.os.SystemClock.uptimeMillis()
            long r2 = com.kwad.sdk.d.a.a.ajH
            long r2 = r0 - r2
            long r2 = java.lang.Math.abs(r2)
            r4 = 500(0x1f4, double:2.47E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            com.kwad.sdk.d.a.a.ajH = r0
            if (r2 >= 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }
}
