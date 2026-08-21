package com.mbridge.msdk.widget.dialog;

public class MBFeedBackDialog extends android.app.Dialog {
    private com.mbridge.msdk.widget.dialog.a a;
    private android.widget.TextView b;
    private android.widget.LinearLayout c;
    private android.widget.Button d;
    private android.widget.Button e;
    private int f;
    private int g;




    public MBFeedBackDialog(android.content.Context r7, com.mbridge.msdk.widget.dialog.a r8) {
            r6 = this;
            java.lang.String r0 = "MBAlertDialog"
            java.lang.String r1 = "id"
            r6.<init>(r7)
            android.view.Window r2 = r6.getWindow()
            android.graphics.drawable.ColorDrawable r3 = new android.graphics.drawable.ColorDrawable
            r4 = 0
            r3.<init>(r4)
            r2.setBackgroundDrawable(r3)
            r2 = 1
            r6.requestWindowFeature(r2)
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r7)
            java.lang.String r3 = "mbridge_cm_feedbackview"
            java.lang.String r5 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r5)
            r5 = 0
            android.view.View r2 = r2.inflate(r3, r5)
            r3 = 1056964608(0x3f000000, float:0.5)
            r5 = 1061997773(0x3f4ccccd, float:0.8)
            r6.setDialogWidthAndHeight(r3, r5)
            r6.a = r8
            if (r2 == 0) goto L82
            r6.setContentView(r2)
            java.lang.String r8 = "mbridge_video_common_alertview_titleview"
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r7, r8, r1)     // Catch: java.lang.Exception -> L47
            android.view.View r8 = r2.findViewById(r8)     // Catch: java.lang.Exception -> L47
            android.widget.TextView r8 = (android.widget.TextView) r8     // Catch: java.lang.Exception -> L47
            r6.b = r8     // Catch: java.lang.Exception -> L47
            goto L4f
        L47:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L4f:
            java.lang.String r8 = "mbridge_video_common_alertview_contentview"
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r7, r8, r1)     // Catch: java.lang.Exception -> L7a
            android.view.View r8 = r2.findViewById(r8)     // Catch: java.lang.Exception -> L7a
            android.widget.LinearLayout r8 = (android.widget.LinearLayout) r8     // Catch: java.lang.Exception -> L7a
            r6.c = r8     // Catch: java.lang.Exception -> L7a
            java.lang.String r8 = "mbridge_video_common_alertview_confirm_button"
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r7, r8, r1)     // Catch: java.lang.Exception -> L7a
            android.view.View r8 = r2.findViewById(r8)     // Catch: java.lang.Exception -> L7a
            android.widget.Button r8 = (android.widget.Button) r8     // Catch: java.lang.Exception -> L7a
            r6.d = r8     // Catch: java.lang.Exception -> L7a
            java.lang.String r8 = "mbridge_video_common_alertview_cancel_button"
            int r7 = com.mbridge.msdk.foundation.tools.s.a(r7, r8, r1)     // Catch: java.lang.Exception -> L7a
            android.view.View r7 = r2.findViewById(r7)     // Catch: java.lang.Exception -> L7a
            android.widget.Button r7 = (android.widget.Button) r7     // Catch: java.lang.Exception -> L7a
            r6.e = r7     // Catch: java.lang.Exception -> L7a
            goto L82
        L7a:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        L82:
            r6.setCanceledOnTouchOutside(r4)
            r6.setCancelable(r4)
            android.widget.Button r7 = r6.e
            if (r7 == 0) goto L94
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog$1 r8 = new com.mbridge.msdk.widget.dialog.MBFeedBackDialog$1
            r8.<init>(r6)
            r7.setOnClickListener(r8)
        L94:
            android.widget.Button r7 = r6.d
            if (r7 == 0) goto La0
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog$2 r8 = new com.mbridge.msdk.widget.dialog.MBFeedBackDialog$2
            r8.<init>(r6)
            r7.setOnClickListener(r8)
        La0:
            com.mbridge.msdk.widget.dialog.MBFeedBackDialog$3 r7 = new com.mbridge.msdk.widget.dialog.MBFeedBackDialog$3
            r7.<init>(r6)
            r6.setOnCancelListener(r7)
            return
    }

    static com.mbridge.msdk.widget.dialog.a a(com.mbridge.msdk.widget.dialog.MBFeedBackDialog r0) {
            com.mbridge.msdk.widget.dialog.a r0 = r0.a
            return r0
    }

    public static boolean isScreenOrientationPortrait(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r0 = 1
            if (r1 != r0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public void clear() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.a r0 = r1.a
            if (r0 == 0) goto L7
            r0 = 0
            r1.a = r0
        L7:
            return
    }

    public com.mbridge.msdk.widget.dialog.a getListener() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.a r0 = r1.a
            return r0
    }

    public void hideNavigationBar(android.view.Window r3) {
            r2 = this;
            if (r3 == 0) goto L46
            r0 = 1024(0x400, float:1.435E-42)
            r3.setFlags(r0, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1c
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r3.addFlags(r0)
            r0 = 4098(0x1002, float:5.743E-42)
            android.view.View r1 = r3.getDecorView()
            r1.setSystemUiVisibility(r0)
            goto L24
        L1c:
            android.view.View r0 = r3.getDecorView()
            r1 = 2
            r0.setSystemUiVisibility(r1)
        L24:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L34
            android.view.WindowManager$LayoutParams r0 = r3.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r3.setAttributes(r0)
        L34:
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 0
            r0.<init>(r1)
            r3.setBackgroundDrawable(r0)
            r0 = -1
            r3.setLayout(r0, r0)
            r0 = 17
            r3.setGravity(r0)
        L46:
            return
    }

    public void setCancelButtonClickable(boolean r2) {
            r1 = this;
            android.widget.Button r0 = r1.e
            if (r0 == 0) goto L7
            r0.setClickable(r2)
        L7:
            return
    }

    public void setCancelText(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.e
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public void setConfirmText(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.d
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public void setContent(android.view.ViewGroup r4) {
            r3 = this;
            android.widget.LinearLayout r0 = r3.c
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
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 1108869120(0x42180000, float:38.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.leftMargin = r1
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.rightMargin = r1
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 1101004800(0x41a00000, float:20.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.topMargin = r1
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 1103101952(0x41c00000, float:24.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.bottomMargin = r1
            android.widget.LinearLayout r1 = r3.c
            r1.addView(r4, r0)
        L5b:
            return
    }

    public void setDialogWidthAndHeight(float r4, float r5) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            android.content.Context r1 = r3.getContext()
            boolean r1 = isScreenOrientationPortrait(r1)
            r2 = -1
            if (r1 == 0) goto L3c
            int r4 = r0.widthPixels
            r3.g = r4
            int r4 = r0.heightPixels
            r3.f = r4
            android.view.Window r4 = r3.getWindow()
            android.view.WindowManager$LayoutParams r4 = r4.getAttributes()
            int r0 = r3.f
            float r0 = (float) r0
            float r0 = r0 * r5
            int r5 = (int) r0
            r4.width = r2
            r4.height = r5
            r5 = 80
            r4.gravity = r5
            android.view.Window r5 = r3.getWindow()
            r5.setAttributes(r4)
            goto L60
        L3c:
            int r5 = r0.heightPixels
            r3.g = r5
            int r5 = r0.widthPixels
            r3.f = r5
            android.view.Window r5 = r3.getWindow()
            android.view.WindowManager$LayoutParams r5 = r5.getAttributes()
            int r0 = r3.f
            float r0 = (float) r0
            float r0 = r0 * r4
            int r4 = (int) r0
            r5.width = r4
            r5.height = r2
            r4 = 17
            r5.gravity = r4
            android.view.Window r4 = r3.getWindow()
            r4.setAttributes(r5)
        L60:
            return
    }

    public void setListener(com.mbridge.msdk.widget.dialog.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setTitle(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.b
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    @Override
    public void show() {
            r2 = this;
            super.show()
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r1 = 8
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L1e
            super.show()     // Catch: java.lang.Exception -> L1e
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r2.hideNavigationBar(r0)     // Catch: java.lang.Exception -> L1e
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r0.clearFlags(r1)     // Catch: java.lang.Exception -> L1e
            goto L2b
        L1e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBAlertDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            super.show()
        L2b:
            return
    }
}
