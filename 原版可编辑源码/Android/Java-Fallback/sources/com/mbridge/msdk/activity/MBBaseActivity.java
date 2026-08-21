package com.mbridge.msdk.activity;

public abstract class MBBaseActivity extends android.app.Activity {
    private android.view.OrientationEventListener a;
    private android.view.Display b;
    private int c;



    public MBBaseActivity() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.c = r0
            return
    }

    private int a() {
            r2 = this;
            android.view.Display r0 = r2.b
            if (r0 != 0) goto L1f
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 < r1) goto L11
            android.view.Display r0 = r2.getDisplay()
            r2.b = r0
            goto L1f
        L11:
            java.lang.String r0 = "window"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.Display r0 = r0.getDefaultDisplay()
            r2.b = r0
        L1f:
            android.view.Display r0 = r2.b
            if (r0 == 0) goto L28
            int r0 = r0.getRotation()
            goto L29
        L28:
            r0 = -1
        L29:
            return r0
    }

    static int a(com.mbridge.msdk.activity.MBBaseActivity r0, int r1) {
            r0.c = r1
            return r1
    }

    static android.view.Display a(com.mbridge.msdk.activity.MBBaseActivity r0) {
            android.view.Display r0 = r0.b
            return r0
    }

    static int b(com.mbridge.msdk.activity.MBBaseActivity r0) {
            int r0 = r0.a()
            return r0
    }

    private void b() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2a
            r1 = 19
            if (r0 < r1) goto L1d
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            r1 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r1)     // Catch: java.lang.Throwable -> L2a
            r0 = 4098(0x1002, float:5.743E-42)
            android.view.Window r1 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.Throwable -> L2a
            r1.setSystemUiVisibility(r0)     // Catch: java.lang.Throwable -> L2a
            goto L34
        L1d:
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L2a
            r1 = 2
            r0.setSystemUiVisibility(r1)     // Catch: java.lang.Throwable -> L2a
            goto L34
        L2a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBBaseActivity"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L34:
            return
    }

    static int c(com.mbridge.msdk.activity.MBBaseActivity r0) {
            int r0 = r0.c
            return r0
    }

    static android.view.OrientationEventListener d(com.mbridge.msdk.activity.MBBaseActivity r0) {
            android.view.OrientationEventListener r0 = r0.a
            return r0
    }

    static void e(com.mbridge.msdk.activity.MBBaseActivity r2) {
            com.mbridge.msdk.activity.MBBaseActivity$2 r0 = new com.mbridge.msdk.activity.MBBaseActivity$2
            r1 = 1
            r0.<init>(r2, r2, r1)
            r2.a = r0
            boolean r0 = r0.canDetectOrientation()
            if (r0 == 0) goto L14
            android.view.OrientationEventListener r2 = r2.a
            r2.enable()
            goto L1c
        L14:
            android.view.OrientationEventListener r0 = r2.a
            r0.disable()
            r0 = 0
            r2.a = r0
        L1c:
            return
    }

    public void getNotchParams() {
            r4 = this;
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            com.mbridge.msdk.activity.MBBaseActivity$1 r1 = new com.mbridge.msdk.activity.MBBaseActivity$1
            r1.<init>(r4)
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            r3 = 1
            r2.requestWindowFeature(r3)     // Catch: java.lang.Exception -> L37
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            r1 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L37
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            r1 = 512(0x200, float:7.17E-43)
            r0.addFlags(r1)     // Catch: java.lang.Exception -> L37
            r2.b()     // Catch: java.lang.Exception -> L37
            r2.a()     // Catch: java.lang.Exception -> L37
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L37
            r1 = 28
            if (r0 < r1) goto L41
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()     // Catch: java.lang.Exception -> L37
            r0.layoutInDisplayCutoutMode = r3     // Catch: java.lang.Exception -> L37
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            r3.setAttributes(r0)     // Catch: java.lang.Exception -> L37
            goto L41
        L37:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBBaseActivity"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L41:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.view.OrientationEventListener r0 = r1.a
            if (r0 == 0) goto Ld
            r0.disable()
            r0 = 0
            r1.a = r0
        Ld:
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 == 0) goto L8
            return
        L8:
            r1.getNotchParams()
            r1.b()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            r0.b()
            return
    }

    public abstract void setTopControllerPadding(int r1, int r2, int r3, int r4, int r5);
}
