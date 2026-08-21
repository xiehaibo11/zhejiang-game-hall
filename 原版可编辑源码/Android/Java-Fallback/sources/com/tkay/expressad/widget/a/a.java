package com.tkay.expressad.widget.a;

public final class a extends android.app.Dialog {
    private static final java.lang.String a = "ATFeedBackDialog";
    private com.tkay.expressad.widget.a.c b;
    private android.widget.TextView c;
    private android.widget.LinearLayout d;
    private android.widget.Button e;
    private android.widget.Button f;
    private int g;
    private int h;

    final class 1 implements android.view.View.OnClickListener {
        final com.tkay.expressad.widget.a.a a;

        1(com.tkay.expressad.widget.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                if (r1 == 0) goto L11
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                r1.a()
            L11:
                com.tkay.expressad.widget.a.a r1 = r0.a
                r1.dismiss()
                return
        }
    }

    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.expressad.widget.a.a a;

        2(com.tkay.expressad.widget.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                if (r1 == 0) goto L11
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                r1.b()
            L11:
                com.tkay.expressad.widget.a.a r1 = r0.a
                r1.dismiss()
                return
        }
    }

    final class 3 implements android.content.DialogInterface.OnCancelListener {
        final com.tkay.expressad.widget.a.a a;

        3(com.tkay.expressad.widget.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCancel(android.content.DialogInterface r1) {
                r0 = this;
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                if (r1 == 0) goto L11
                com.tkay.expressad.widget.a.a r1 = r0.a
                com.tkay.expressad.widget.a.c r1 = com.tkay.expressad.widget.a.a.a(r1)
                r1.b()
            L11:
                return
        }
    }

    public a(android.content.Context r8, com.tkay.expressad.widget.a.c r9) {
            r7 = this;
            java.lang.String r0 = "id"
            r7.<init>(r8)
            android.view.Window r1 = r7.getWindow()
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable
            r3 = 0
            r2.<init>(r3)
            r1.setBackgroundDrawable(r2)
            r1 = 1
            r7.requestWindowFeature(r1)
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r8)
            java.lang.String r4 = "tkay_cm_feedbackview"
            java.lang.String r5 = "layout"
            int r4 = com.tkay.expressad.foundation.h.i.a(r8, r4, r5)
            r5 = 0
            android.view.View r2 = r2.inflate(r4, r5)
            android.content.Context r4 = r7.getContext()
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            android.content.Context r5 = r7.getContext()
            android.content.res.Resources r5 = r5.getResources()
            android.content.res.Configuration r5 = r5.getConfiguration()
            int r5 = r5.orientation
            if (r5 != r1) goto L44
            goto L45
        L44:
            r1 = r3
        L45:
            r5 = -1
            if (r1 == 0) goto L70
            int r1 = r4.widthPixels
            r7.h = r1
            int r1 = r4.heightPixels
            r7.g = r1
            android.view.Window r1 = r7.getWindow()
            android.view.WindowManager$LayoutParams r1 = r1.getAttributes()
            int r4 = r7.g
            float r4 = (float) r4
            r6 = 1061997773(0x3f4ccccd, float:0.8)
            float r4 = r4 * r6
            int r4 = (int) r4
            r1.width = r5
            r1.height = r4
            r4 = 80
            r1.gravity = r4
            android.view.Window r4 = r7.getWindow()
            r4.setAttributes(r1)
            goto L96
        L70:
            int r1 = r4.heightPixels
            r7.h = r1
            int r1 = r4.widthPixels
            r7.g = r1
            android.view.Window r1 = r7.getWindow()
            android.view.WindowManager$LayoutParams r1 = r1.getAttributes()
            int r4 = r7.g
            float r4 = (float) r4
            r6 = 1056964608(0x3f000000, float:0.5)
            float r4 = r4 * r6
            int r4 = (int) r4
            r1.width = r4
            r1.height = r5
            r4 = 17
            r1.gravity = r4
            android.view.Window r4 = r7.getWindow()
            r4.setAttributes(r1)
        L96:
            r7.b = r9
            if (r2 == 0) goto Ldf
            r7.setContentView(r2)
            java.lang.String r9 = "tkay_video_common_alertview_titleview"
            int r9 = com.tkay.expressad.foundation.h.i.a(r8, r9, r0)     // Catch: java.lang.Exception -> Lac
            android.view.View r9 = r2.findViewById(r9)     // Catch: java.lang.Exception -> Lac
            android.widget.TextView r9 = (android.widget.TextView) r9     // Catch: java.lang.Exception -> Lac
            r7.c = r9     // Catch: java.lang.Exception -> Lac
            goto Lb0
        Lac:
            r9 = move-exception
            r9.getMessage()
        Lb0:
            java.lang.String r9 = "tkay_video_common_alertview_contentview"
            int r9 = com.tkay.expressad.foundation.h.i.a(r8, r9, r0)     // Catch: java.lang.Exception -> Ldb
            android.view.View r9 = r2.findViewById(r9)     // Catch: java.lang.Exception -> Ldb
            android.widget.LinearLayout r9 = (android.widget.LinearLayout) r9     // Catch: java.lang.Exception -> Ldb
            r7.d = r9     // Catch: java.lang.Exception -> Ldb
            java.lang.String r9 = "tkay_video_common_alertview_confirm_button"
            int r9 = com.tkay.expressad.foundation.h.i.a(r8, r9, r0)     // Catch: java.lang.Exception -> Ldb
            android.view.View r9 = r2.findViewById(r9)     // Catch: java.lang.Exception -> Ldb
            android.widget.Button r9 = (android.widget.Button) r9     // Catch: java.lang.Exception -> Ldb
            r7.e = r9     // Catch: java.lang.Exception -> Ldb
            java.lang.String r9 = "tkay_video_common_alertview_cancel_button"
            int r8 = com.tkay.expressad.foundation.h.i.a(r8, r9, r0)     // Catch: java.lang.Exception -> Ldb
            android.view.View r8 = r2.findViewById(r8)     // Catch: java.lang.Exception -> Ldb
            android.widget.Button r8 = (android.widget.Button) r8     // Catch: java.lang.Exception -> Ldb
            r7.f = r8     // Catch: java.lang.Exception -> Ldb
            goto Ldf
        Ldb:
            r8 = move-exception
            r8.getMessage()
        Ldf:
            r7.setCanceledOnTouchOutside(r3)
            r7.setCancelable(r3)
            android.widget.Button r8 = r7.f
            if (r8 == 0) goto Lf1
            com.tkay.expressad.widget.a.a$1 r9 = new com.tkay.expressad.widget.a.a$1
            r9.<init>(r7)
            r8.setOnClickListener(r9)
        Lf1:
            android.widget.Button r8 = r7.e
            if (r8 == 0) goto Lfd
            com.tkay.expressad.widget.a.a$2 r9 = new com.tkay.expressad.widget.a.a$2
            r9.<init>(r7)
            r8.setOnClickListener(r9)
        Lfd:
            com.tkay.expressad.widget.a.a$3 r8 = new com.tkay.expressad.widget.a.a$3
            r8.<init>(r7)
            r7.setOnCancelListener(r8)
            return
    }

    static com.tkay.expressad.widget.a.c a(com.tkay.expressad.widget.a.a r0) {
            com.tkay.expressad.widget.a.c r0 = r0.b
            return r0
    }

    private void a() {
            r2 = this;
            android.widget.Button r0 = r2.f
            if (r0 == 0) goto Lc
            com.tkay.expressad.widget.a.a$1 r1 = new com.tkay.expressad.widget.a.a$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        Lc:
            android.widget.Button r0 = r2.e
            if (r0 == 0) goto L18
            com.tkay.expressad.widget.a.a$2 r1 = new com.tkay.expressad.widget.a.a$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L18:
            com.tkay.expressad.widget.a.a$3 r0 = new com.tkay.expressad.widget.a.a$3
            r0.<init>(r2)
            r2.setOnCancelListener(r0)
            return
    }

    private static void a(android.view.Window r2) {
            if (r2 == 0) goto L46
            r0 = 1024(0x400, float:1.435E-42)
            r2.setFlags(r0, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1c
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r2.addFlags(r0)
            android.view.View r0 = r2.getDecorView()
            r1 = 4098(0x1002, float:5.743E-42)
            r0.setSystemUiVisibility(r1)
            goto L24
        L1c:
            android.view.View r0 = r2.getDecorView()
            r1 = 2
            r0.setSystemUiVisibility(r1)
        L24:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L34
            android.view.WindowManager$LayoutParams r0 = r2.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r2.setAttributes(r0)
        L34:
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 0
            r0.<init>(r1)
            r2.setBackgroundDrawable(r0)
            r0 = -1
            r2.setLayout(r0, r0)
            r0 = 17
            r2.setGravity(r0)
        L46:
            return
    }

    private void a(java.lang.String r1, android.view.ViewGroup r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.a(r1)
            r0.a(r2)
            r0.b(r3)
            r0.c(r4)
            return
    }

    private static boolean a(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r0 = 1
            if (r1 != r0) goto Le
            return r0
        Le:
            r1 = 0
            return r1
    }

    private void b() {
            r1 = this;
            com.tkay.expressad.widget.a.c r0 = r1.b
            if (r0 == 0) goto L7
            r0 = 0
            r1.b = r0
        L7:
            return
    }

    private com.tkay.expressad.widget.a.c c() {
            r1 = this;
            com.tkay.expressad.widget.a.c r0 = r1.b
            return r0
    }

    private void d() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            android.content.Context r1 = r4.getContext()
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r2 = 1
            if (r1 != r2) goto L1e
            goto L1f
        L1e:
            r2 = 0
        L1f:
            r1 = -1
            if (r2 == 0) goto L4a
            int r2 = r0.widthPixels
            r4.h = r2
            int r0 = r0.heightPixels
            r4.g = r0
            android.view.Window r0 = r4.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            int r2 = r4.g
            float r2 = (float) r2
            r3 = 1061997773(0x3f4ccccd, float:0.8)
            float r2 = r2 * r3
            int r2 = (int) r2
            r0.width = r1
            r0.height = r2
            r1 = 80
            r0.gravity = r1
            android.view.Window r1 = r4.getWindow()
            r1.setAttributes(r0)
            return
        L4a:
            int r2 = r0.heightPixels
            r4.h = r2
            int r0 = r0.widthPixels
            r4.g = r0
            android.view.Window r0 = r4.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            int r2 = r4.g
            float r2 = (float) r2
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 * r3
            int r2 = (int) r2
            r0.width = r2
            r0.height = r1
            r1 = 17
            r0.gravity = r1
            android.view.Window r1 = r4.getWindow()
            r1.setAttributes(r0)
            return
    }

    public final void a(android.view.ViewGroup r4) {
            r3 = this;
            android.widget.LinearLayout r0 = r3.d
            if (r0 == 0) goto L5b
            r0.removeAllViews()
            android.view.ViewParent r0 = r4.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L12
            r0.removeView(r4)
        L12:
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1108869120(0x42180000, float:38.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.leftMargin = r1
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.topMargin = r1
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1103101952(0x41c00000, float:24.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.bottomMargin = r1
            android.widget.LinearLayout r1 = r3.d
            r1.addView(r4, r0)
        L5b:
            return
    }

    public final void a(com.tkay.expressad.widget.a.c r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.c
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            android.widget.Button r0 = r1.f
            if (r0 == 0) goto L7
            r0.setClickable(r2)
        L7:
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.e
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public final void c(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.f
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    @Override
    public final void show() {
            r4 = this;
            super.show()
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            r1 = 8
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L61
            super.show()     // Catch: java.lang.Exception -> L61
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto L59
            r2 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r2, r2)     // Catch: java.lang.Exception -> L61
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L61
            r3 = 19
            if (r2 < r3) goto L2f
            r2 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r2)     // Catch: java.lang.Exception -> L61
            android.view.View r2 = r0.getDecorView()     // Catch: java.lang.Exception -> L61
            r3 = 4098(0x1002, float:5.743E-42)
            r2.setSystemUiVisibility(r3)     // Catch: java.lang.Exception -> L61
            goto L37
        L2f:
            android.view.View r2 = r0.getDecorView()     // Catch: java.lang.Exception -> L61
            r3 = 2
            r2.setSystemUiVisibility(r3)     // Catch: java.lang.Exception -> L61
        L37:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L61
            r3 = 28
            if (r2 < r3) goto L47
            android.view.WindowManager$LayoutParams r2 = r0.getAttributes()     // Catch: java.lang.Exception -> L61
            r3 = 1
            r2.layoutInDisplayCutoutMode = r3     // Catch: java.lang.Exception -> L61
            r0.setAttributes(r2)     // Catch: java.lang.Exception -> L61
        L47:
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable     // Catch: java.lang.Exception -> L61
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Exception -> L61
            r0.setBackgroundDrawable(r2)     // Catch: java.lang.Exception -> L61
            r2 = -1
            r0.setLayout(r2, r2)     // Catch: java.lang.Exception -> L61
            r2 = 17
            r0.setGravity(r2)     // Catch: java.lang.Exception -> L61
        L59:
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            r0.clearFlags(r1)     // Catch: java.lang.Exception -> L61
            return
        L61:
            r0 = move-exception
            r0.getMessage()
            super.show()
            return
    }
}
