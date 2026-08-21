package com.mbridge.msdk.widget.custom;

public class DownloadMessageDialog extends android.app.Dialog {
    private float a;
    private int b;
    private int c;
    private com.mbridge.msdk.widget.custom.CustomViewMessageWrap d;
    private com.mbridge.msdk.widget.custom.a e;
    private boolean f;
    private android.view.OrientationEventListener g;
    private com.mbridge.msdk.widget.custom.b h;
    private android.animation.AnimatorSet i;
    private com.mbridge.msdk.widget.custom.DownloadMessageDialog.a j;
    private com.mbridge.msdk.widget.custom.a k;



    public interface a {
        void a(int r1);
    }

    public DownloadMessageDialog(android.content.Context r5, boolean r6, android.content.DialogInterface.OnCancelListener r7, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r8, com.mbridge.msdk.widget.custom.a r9) {
            r4 = this;
            java.lang.String r0 = "mbridge_dialog_fullscreen_bottom"
            java.lang.String r1 = "style"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r5, r0, r1)
            r4.<init>(r5, r0)
            r0 = 1061997773(0x3f4ccccd, float:0.8)
            r4.a = r0
            r0 = 0
            r4.f = r0
            r0 = 0
            r4.g = r0
            com.mbridge.msdk.widget.custom.DownloadMessageDialog$1 r0 = new com.mbridge.msdk.widget.custom.DownloadMessageDialog$1
            r0.<init>(r4)
            r4.k = r0
            r4.setCancelable(r6)
            r4.setOnCancelListener(r7)
            if (r8 != 0) goto L2d
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r6 = new com.mbridge.msdk.widget.custom.CustomViewMessageWrap
            r6.<init>()
            r4.d = r6
            goto L2f
        L2d:
            r4.d = r8
        L2f:
            r4.e = r9
            if (r8 == 0) goto L42
            java.lang.String r6 = r8.getApplicationImage()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L42
            r6 = 1058642330(0x3f19999a, float:0.6)
            r4.a = r6
        L42:
            android.content.Context r6 = r4.getContext()     // Catch: java.lang.Exception -> Lf9
            android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Exception -> Lf9
            android.util.DisplayMetrics r6 = r6.getDisplayMetrics()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.widget.custom.a r7 = r4.k     // Catch: java.lang.Exception -> Lf9
            r7.a(r4, r8)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.widget.custom.b r7 = new com.mbridge.msdk.widget.custom.b     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r9 = r4.d     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.widget.custom.a r0 = r4.k     // Catch: java.lang.Exception -> Lf9
            r7.<init>(r4, r5, r9, r0)     // Catch: java.lang.Exception -> Lf9
            r4.h = r7     // Catch: java.lang.Exception -> Lf9
            android.content.Context r5 = r4.getContext()     // Catch: java.lang.Exception -> Lf9
            boolean r5 = isScreenOrientationPortrait(r5)     // Catch: java.lang.Exception -> Lf9
            if (r5 == 0) goto L71
            int r5 = r6.widthPixels     // Catch: java.lang.Exception -> Lf9
            r4.c = r5     // Catch: java.lang.Exception -> Lf9
            int r5 = r6.heightPixels     // Catch: java.lang.Exception -> Lf9
            r4.b = r5     // Catch: java.lang.Exception -> Lf9
            goto L79
        L71:
            int r5 = r6.widthPixels     // Catch: java.lang.Exception -> Lf9
            r4.b = r5     // Catch: java.lang.Exception -> Lf9
            int r5 = r6.heightPixels     // Catch: java.lang.Exception -> Lf9
            r4.c = r5     // Catch: java.lang.Exception -> Lf9
        L79:
            com.mbridge.msdk.widget.custom.b r5 = r4.h     // Catch: java.lang.Exception -> Lf9
            int r7 = r4.c     // Catch: java.lang.Exception -> Lf9
            int r9 = r4.b     // Catch: java.lang.Exception -> Lf9
            android.view.View r5 = r5.a(r7, r9)     // Catch: java.lang.Exception -> Lf9
            if (r5 == 0) goto Lec
            r7 = 1
            r4.requestWindowFeature(r7)     // Catch: java.lang.Exception -> Lf9
            r4.setContentView(r5)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.widget.custom.a r5 = r4.k     // Catch: java.lang.Exception -> Lf9
            r5.b(r4, r8)     // Catch: java.lang.Exception -> Lf9
            r4.f = r7     // Catch: java.lang.Exception -> Lf9
            android.content.Context r5 = r4.getContext()     // Catch: java.lang.Exception -> Lf9
            boolean r5 = isScreenOrientationPortrait(r5)     // Catch: java.lang.Exception -> Lf9
            r7 = -1
            if (r5 == 0) goto Lc5
            int r5 = r6.widthPixels     // Catch: java.lang.Exception -> Lf9
            r4.c = r5     // Catch: java.lang.Exception -> Lf9
            int r5 = r6.heightPixels     // Catch: java.lang.Exception -> Lf9
            r4.b = r5     // Catch: java.lang.Exception -> Lf9
            android.view.Window r5 = r4.getWindow()     // Catch: java.lang.Exception -> Lf9
            android.view.WindowManager$LayoutParams r5 = r5.getAttributes()     // Catch: java.lang.Exception -> Lf9
            int r6 = r4.b     // Catch: java.lang.Exception -> Lf9
            float r6 = (float) r6     // Catch: java.lang.Exception -> Lf9
            float r9 = r4.a     // Catch: java.lang.Exception -> Lf9
            float r6 = r6 * r9
            int r6 = (int) r6     // Catch: java.lang.Exception -> Lf9
            r5.width = r7     // Catch: java.lang.Exception -> Lf9
            r5.height = r6     // Catch: java.lang.Exception -> Lf9
            r6 = 80
            r5.gravity = r6     // Catch: java.lang.Exception -> Lf9
            android.view.Window r6 = r4.getWindow()     // Catch: java.lang.Exception -> Lf9
            r6.setAttributes(r5)     // Catch: java.lang.Exception -> Lf9
            goto L108
        Lc5:
            int r5 = r6.widthPixels     // Catch: java.lang.Exception -> Lf9
            r4.c = r5     // Catch: java.lang.Exception -> Lf9
            int r5 = r6.heightPixels     // Catch: java.lang.Exception -> Lf9
            r4.b = r5     // Catch: java.lang.Exception -> Lf9
            android.view.Window r5 = r4.getWindow()     // Catch: java.lang.Exception -> Lf9
            android.view.WindowManager$LayoutParams r5 = r5.getAttributes()     // Catch: java.lang.Exception -> Lf9
            int r6 = r4.c     // Catch: java.lang.Exception -> Lf9
            double r0 = (double) r6     // Catch: java.lang.Exception -> Lf9
            r2 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            double r0 = r0 * r2
            int r6 = (int) r0     // Catch: java.lang.Exception -> Lf9
            r5.width = r6     // Catch: java.lang.Exception -> Lf9
            r5.height = r7     // Catch: java.lang.Exception -> Lf9
            r6 = 17
            r5.gravity = r6     // Catch: java.lang.Exception -> Lf9
            android.view.Window r6 = r4.getWindow()     // Catch: java.lang.Exception -> Lf9
            r6.setAttributes(r5)     // Catch: java.lang.Exception -> Lf9
            goto L108
        Lec:
            com.mbridge.msdk.widget.custom.a r5 = r4.k     // Catch: java.lang.Exception -> Lf9
            java.lang.Exception r6 = new java.lang.Exception     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = "view is null"
            r6.<init>(r7)     // Catch: java.lang.Exception -> Lf9
            r5.a(r4, r8, r6)     // Catch: java.lang.Exception -> Lf9
            goto L108
        Lf9:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            java.lang.String r7 = "DownloadMessageDialog"
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
            com.mbridge.msdk.widget.custom.a r6 = r4.k
            r6.a(r4, r8, r5)
        L108:
            return
    }

    public DownloadMessageDialog(android.content.Context r7, boolean r8, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r9, com.mbridge.msdk.widget.custom.a r10) {
            r6 = this;
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    static com.mbridge.msdk.widget.custom.a a(com.mbridge.msdk.widget.custom.DownloadMessageDialog r0) {
            com.mbridge.msdk.widget.custom.a r0 = r0.e
            return r0
    }

    static android.animation.AnimatorSet b(com.mbridge.msdk.widget.custom.DownloadMessageDialog r0) {
            android.animation.AnimatorSet r0 = r0.i
            return r0
    }

    static com.mbridge.msdk.widget.custom.DownloadMessageDialog.a c(com.mbridge.msdk.widget.custom.DownloadMessageDialog r0) {
            com.mbridge.msdk.widget.custom.DownloadMessageDialog$a r0 = r0.j
            return r0
    }

    static float d(com.mbridge.msdk.widget.custom.DownloadMessageDialog r0) {
            float r0 = r0.a
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

    @Override
    public void cancel() {
            r2 = this;
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L9
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1b
            r0.cancel()     // Catch: java.lang.Exception -> L1b
        L9:
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L25
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            boolean r0 = r0.canDetectOrientation()     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L25
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            r0.disable()     // Catch: java.lang.Exception -> L1b
            goto L25
        L1b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "DownloadMessageDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L25:
            super.cancel()
            return
    }

    @Override
    public void dismiss() {
            r2 = this;
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L9
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1b
            r0.cancel()     // Catch: java.lang.Exception -> L1b
        L9:
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L25
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            boolean r0 = r0.canDetectOrientation()     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L25
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1b
            r0.disable()     // Catch: java.lang.Exception -> L1b
            goto L25
        L1b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "DownloadMessageDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L25:
            android.view.Window r0 = r2.getWindow()
            if (r0 != 0) goto L2c
            return
        L2c:
            android.view.View r0 = r0.getDecorView()
            if (r0 == 0) goto L3b
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L3b
            super.dismiss()
        L3b:
            return
    }

    public void hideNavigationBar(android.view.Window r3) {
            r2 = this;
            if (r3 == 0) goto L34
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
            return
    }

    @Override
    public void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    @Override
    protected void onStart() {
            r0 = this;
            super.onStart()
            return
    }

    @Override
    protected void onStop() {
            r2 = this;
            super.onStop()
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto Lc
            android.animation.AnimatorSet r0 = r2.i     // Catch: java.lang.Exception -> L1e
            r0.cancel()     // Catch: java.lang.Exception -> L1e
        Lc:
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L28
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1e
            boolean r0 = r0.canDetectOrientation()     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L28
            android.view.OrientationEventListener r0 = r2.g     // Catch: java.lang.Exception -> L1e
            r0.disable()     // Catch: java.lang.Exception -> L1e
            goto L28
        L1e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "DownloadMessageDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L28:
            return
    }

    public void registerOrientationListener(com.mbridge.msdk.widget.custom.DownloadMessageDialog.a r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setRenderListener(com.mbridge.msdk.widget.custom.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public void show() {
            r9 = this;
            boolean r0 = r9.f     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L19c
            android.view.Window r0 = r9.getWindow()     // Catch: java.lang.Exception -> L192
            if (r0 != 0) goto L19
            com.mbridge.msdk.widget.custom.a r0 = r9.k     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r1 = r9.d     // Catch: java.lang.Exception -> L192
            java.lang.Exception r2 = new java.lang.Exception     // Catch: java.lang.Exception -> L192
            java.lang.String r3 = "window is null"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L192
            r0.a(r9, r1, r2)     // Catch: java.lang.Exception -> L192
            return
        L19:
            r1 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L192
            r2 = 8
            r0.setFlags(r2, r2)     // Catch: java.lang.Exception -> L192
            android.view.View r3 = r0.getDecorView()     // Catch: java.lang.Exception -> L192
            r4 = 256(0x100, float:3.59E-43)
            r3.setSystemUiVisibility(r4)     // Catch: java.lang.Exception -> L192
            android.view.View r3 = r0.getDecorView()     // Catch: java.lang.Exception -> L192
            r4 = 512(0x200, float:7.17E-43)
            r3.setSystemUiVisibility(r4)     // Catch: java.lang.Exception -> L192
            android.view.View r3 = r0.getDecorView()     // Catch: java.lang.Exception -> L192
            r4 = 4096(0x1000, float:5.74E-42)
            r3.setSystemUiVisibility(r4)     // Catch: java.lang.Exception -> L192
            android.view.View r3 = r0.getDecorView()     // Catch: java.lang.Exception -> L192
            r3.setSystemUiVisibility(r1)     // Catch: java.lang.Exception -> L192
            android.view.View r1 = r0.getDecorView()     // Catch: java.lang.Exception -> L192
            r3 = 4
            r1.setSystemUiVisibility(r3)     // Catch: java.lang.Exception -> L192
            r0.clearFlags(r2)     // Catch: java.lang.Exception -> L192
            android.view.Window r0 = r9.getWindow()     // Catch: java.lang.Exception -> L189
            r0.setFlags(r2, r2)     // Catch: java.lang.Exception -> L189
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> L189
            if (r0 == 0) goto L89
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> L189
            android.view.ContextThemeWrapper r0 = (android.view.ContextThemeWrapper) r0     // Catch: java.lang.Exception -> L189
            android.content.Context r1 = r0.getBaseContext()     // Catch: java.lang.Exception -> L189
            boolean r1 = r1 instanceof android.app.Activity     // Catch: java.lang.Exception -> L189
            if (r1 == 0) goto L89
            android.content.Context r0 = r0.getBaseContext()     // Catch: java.lang.Exception -> L189
            android.app.Activity r0 = (android.app.Activity) r0     // Catch: java.lang.Exception -> L189
            boolean r1 = r0.isFinishing()     // Catch: java.lang.Exception -> L189
            if (r1 != 0) goto L88
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L189
            r3 = 17
            if (r1 < r3) goto L84
            boolean r0 = r0.isDestroyed()     // Catch: java.lang.Exception -> L189
            if (r0 == 0) goto L84
            goto L88
        L84:
            super.show()     // Catch: java.lang.Exception -> L189
            goto L89
        L88:
            return
        L89:
            android.view.Window r0 = r9.getWindow()     // Catch: java.lang.Exception -> L189
            r9.hideNavigationBar(r0)     // Catch: java.lang.Exception -> L189
            android.view.Window r0 = r9.getWindow()     // Catch: java.lang.Exception -> L189
            r0.clearFlags(r2)     // Catch: java.lang.Exception -> L189
            com.mbridge.msdk.widget.custom.a r0 = r9.k     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r1 = r9.d     // Catch: java.lang.Exception -> L192
            r0.c(r9, r1)     // Catch: java.lang.Exception -> L192
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L192
            r1 = 20
            r2 = 0
            if (r0 > r1) goto Lbf
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r9.d     // Catch: java.lang.Exception -> Lb5
            java.lang.String r1 = "download"
            android.view.View r0 = r0.getView(r1)     // Catch: java.lang.Exception -> Lb5
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = (com.mbridge.msdk.widget.custom.baseview.MBButton) r0     // Catch: java.lang.Exception -> Lb5
            if (r0 == 0) goto Lbf
            r0.setPadding(r2, r2, r2, r2)     // Catch: java.lang.Exception -> Lb5
            goto Lbf
        Lb5:
            r0 = move-exception
            java.lang.String r1 = "dialog"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Exception -> L192
        Lbf:
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            r1 = 1
            if (r0 != 0) goto Le3
            com.mbridge.msdk.widget.custom.DownloadMessageDialog$2 r0 = new com.mbridge.msdk.widget.custom.DownloadMessageDialog$2     // Catch: java.lang.Exception -> L192
            android.content.Context r3 = r9.getContext()     // Catch: java.lang.Exception -> L192
            r0.<init>(r9, r3, r1)     // Catch: java.lang.Exception -> L192
            r9.g = r0     // Catch: java.lang.Exception -> L192
            boolean r0 = r0.canDetectOrientation()     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto Ldb
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            r0.enable()     // Catch: java.lang.Exception -> L192
            goto Le3
        Ldb:
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            r0.disable()     // Catch: java.lang.Exception -> L192
            r0 = 0
            r9.g = r0     // Catch: java.lang.Exception -> L192
        Le3:
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L124
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            boolean r0 = r0.canDetectOrientation()     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L124
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r0 = r9.d     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.getCampaignEx()     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L11d
            int r3 = r0.getAdType()     // Catch: java.lang.Exception -> L192
            r4 = 94
            if (r3 == r4) goto L107
            int r3 = r0.getAdType()     // Catch: java.lang.Exception -> L192
            r4 = 287(0x11f, float:4.02E-43)
            if (r3 != r4) goto L11d
        L107:
            com.mbridge.msdk.foundation.entity.CampaignEx$c r3 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L192
            if (r3 == 0) goto L124
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()     // Catch: java.lang.Exception -> L192
            int r0 = r0.c()     // Catch: java.lang.Exception -> L192
            if (r0 != 0) goto L124
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            r0.enable()     // Catch: java.lang.Exception -> L192
            goto L124
        L11d:
            if (r0 == 0) goto L124
            android.view.OrientationEventListener r0 = r9.g     // Catch: java.lang.Exception -> L192
            r0.enable()     // Catch: java.lang.Exception -> L192
        L124:
            com.mbridge.msdk.widget.custom.b r0 = r9.h     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L19c
            com.mbridge.msdk.widget.custom.b r0 = r9.h     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r0.a()     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L19c
            com.mbridge.msdk.widget.custom.b r0 = r9.h     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r0.a()     // Catch: java.lang.Exception -> L192
            if (r0 == 0) goto L19c
            java.lang.CharSequence r3 = r0.getContentDescription()     // Catch: java.lang.Exception -> L192
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L192
            java.lang.String r4 = "anim"
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Exception -> L192
            if (r3 == 0) goto L19c
            java.lang.String r3 = "scaleX"
            r4 = 2
            float[] r5 = new float[r4]     // Catch: java.lang.Exception -> L192
            r6 = 1067030938(0x3f99999a, float:1.2)
            r5[r2] = r6     // Catch: java.lang.Exception -> L192
            r7 = 1061997773(0x3f4ccccd, float:0.8)
            r5[r1] = r7     // Catch: java.lang.Exception -> L192
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r0, r3, r5)     // Catch: java.lang.Exception -> L192
            r5 = -1
            r3.setRepeatCount(r5)     // Catch: java.lang.Exception -> L192
            java.lang.String r8 = "scaleY"
            float[] r4 = new float[r4]     // Catch: java.lang.Exception -> L192
            r4[r2] = r6     // Catch: java.lang.Exception -> L192
            r4[r1] = r7     // Catch: java.lang.Exception -> L192
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r8, r4)     // Catch: java.lang.Exception -> L192
            r0.setRepeatCount(r5)     // Catch: java.lang.Exception -> L192
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet     // Catch: java.lang.Exception -> L192
            r1.<init>()     // Catch: java.lang.Exception -> L192
            r9.i = r1     // Catch: java.lang.Exception -> L192
            android.animation.AnimatorSet$Builder r1 = r1.play(r3)     // Catch: java.lang.Exception -> L192
            r1.with(r0)     // Catch: java.lang.Exception -> L192
            android.animation.AnimatorSet r0 = r9.i     // Catch: java.lang.Exception -> L192
            r1 = 2000(0x7d0, double:9.88E-321)
            r0.setDuration(r1)     // Catch: java.lang.Exception -> L192
            android.animation.AnimatorSet r0 = r9.i     // Catch: java.lang.Exception -> L192
            r0.start()     // Catch: java.lang.Exception -> L192
            goto L19c
        L189:
            r0 = move-exception
            com.mbridge.msdk.widget.custom.a r1 = r9.k     // Catch: java.lang.Exception -> L192
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2 = r9.d     // Catch: java.lang.Exception -> L192
            r1.a(r9, r2, r0)     // Catch: java.lang.Exception -> L192
            return
        L192:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "DownloadMessageDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L19c:
            return
    }
}
