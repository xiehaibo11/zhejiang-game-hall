package com.tkay.expressad.activity;

public abstract class TYBaseActivity extends android.app.Activity {
    private static final java.lang.String a = "TYBaseActivity";
    private android.view.OrientationEventListener b;
    private android.view.Display c;
    private int d;


    final class 2 extends android.view.OrientationEventListener {
        final com.tkay.expressad.activity.TYBaseActivity a;

        2(com.tkay.expressad.activity.TYBaseActivity r1, android.content.Context r2) {
                r0 = this;
                r0.a = r1
                r1 = 1
                r0.<init>(r2, r1)
                return
        }

        @Override
        public final void onOrientationChanged(int r4) {
                r3 = this;
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                int r4 = com.tkay.expressad.activity.TYBaseActivity.a(r4)
                if (r4 >= 0) goto L9
                r4 = 0
            L9:
                r0 = 1
                if (r4 != r0) goto L1f
                com.tkay.expressad.activity.TYBaseActivity r1 = r3.a
                int r1 = com.tkay.expressad.activity.TYBaseActivity.b(r1)
                if (r1 == r0) goto L1f
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                com.tkay.expressad.activity.TYBaseActivity.a(r4, r0)
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                r4.a()
                return
            L1f:
                r0 = 2
                r1 = 3
                if (r4 != r1) goto L36
                com.tkay.expressad.activity.TYBaseActivity r2 = r3.a
                int r2 = com.tkay.expressad.activity.TYBaseActivity.b(r2)
                if (r2 == r0) goto L36
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                com.tkay.expressad.activity.TYBaseActivity.a(r4, r0)
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                r4.a()
                return
            L36:
                if (r4 != 0) goto L4b
                com.tkay.expressad.activity.TYBaseActivity r2 = r3.a
                int r2 = com.tkay.expressad.activity.TYBaseActivity.b(r2)
                if (r2 == r1) goto L4b
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                com.tkay.expressad.activity.TYBaseActivity.a(r4, r1)
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                r4.a()
                return
            L4b:
                if (r4 != r0) goto L60
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                int r4 = com.tkay.expressad.activity.TYBaseActivity.b(r4)
                r0 = 4
                if (r4 == r0) goto L60
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                com.tkay.expressad.activity.TYBaseActivity.a(r4, r0)
                com.tkay.expressad.activity.TYBaseActivity r4 = r3.a
                r4.a()
            L60:
                return
        }
    }

    public TYBaseActivity() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.d = r0
            return
    }

    static int a(com.tkay.expressad.activity.TYBaseActivity r0) {
            int r0 = r0.c()
            return r0
    }

    static int a(com.tkay.expressad.activity.TYBaseActivity r0, int r1) {
            r0.d = r1
            return r1
    }

    static int b(com.tkay.expressad.activity.TYBaseActivity r0) {
            int r0 = r0.d
            return r0
    }

    private void b() {
            r1 = this;
            com.tkay.expressad.activity.TYBaseActivity$2 r0 = new com.tkay.expressad.activity.TYBaseActivity$2
            r0.<init>(r1, r1)
            r1.b = r0
            boolean r0 = r0.canDetectOrientation()
            if (r0 == 0) goto L13
            android.view.OrientationEventListener r0 = r1.b
            r0.enable()
            return
        L13:
            android.view.OrientationEventListener r0 = r1.b
            r0.disable()
            r0 = 0
            r1.b = r0
            return
    }

    private int c() {
            r2 = this;
            android.view.Display r0 = r2.c
            if (r0 != 0) goto L1f
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 < r1) goto L11
            android.view.Display r0 = r2.getDisplay()
            r2.c = r0
            goto L1f
        L11:
            java.lang.String r0 = "window"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.Display r0 = r0.getDefaultDisplay()
            r2.c = r0
        L1f:
            android.view.Display r0 = r2.c
            if (r0 == 0) goto L28
            int r0 = r0.getRotation()     // Catch: java.lang.Throwable -> L28
            return r0
        L28:
            r0 = -1
            return r0
    }

    static android.view.OrientationEventListener c(com.tkay.expressad.activity.TYBaseActivity r0) {
            android.view.OrientationEventListener r0 = r0.b
            return r0
    }

    private void d() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L2a
            r1 = 19
            if (r0 < r1) goto L1d
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            r1 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r1)     // Catch: java.lang.Throwable -> L2a
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L2a
            r1 = 4098(0x1002, float:5.743E-42)
            r0.setSystemUiVisibility(r1)     // Catch: java.lang.Throwable -> L2a
            return
        L1d:
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L2a
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> L2a
            r1 = 2
            r0.setSystemUiVisibility(r1)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static void d(com.tkay.expressad.activity.TYBaseActivity r1) {
            com.tkay.expressad.activity.TYBaseActivity$2 r0 = new com.tkay.expressad.activity.TYBaseActivity$2
            r0.<init>(r1, r1)
            r1.b = r0
            boolean r0 = r0.canDetectOrientation()
            if (r0 == 0) goto L13
            android.view.OrientationEventListener r1 = r1.b
            r1.enable()
            return
        L13:
            android.view.OrientationEventListener r0 = r1.b
            r0.disable()
            r0 = 0
            r1.b = r0
            return
    }

    public final void a() {
            r4 = this;
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            com.tkay.expressad.activity.TYBaseActivity$1 r1 = new com.tkay.expressad.activity.TYBaseActivity$1
            r1.<init>(r4)
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)
            return
    }

    public abstract void a(int r1, int r2, int r3, int r4, int r5);

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
            r2.d()     // Catch: java.lang.Exception -> L37
            r2.c()     // Catch: java.lang.Exception -> L37
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L37
            r1 = 28
            if (r0 < r1) goto L36
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()     // Catch: java.lang.Exception -> L37
            r0.layoutInDisplayCutoutMode = r3     // Catch: java.lang.Exception -> L37
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Exception -> L37
            r3.setAttributes(r0)     // Catch: java.lang.Exception -> L37
        L36:
            return
        L37:
            r3 = move-exception
            r3.getMessage()
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.view.OrientationEventListener r0 = r1.b
            if (r0 == 0) goto Ld
            r0.disable()
            r0 = 0
            r1.b = r0
        Ld:
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 == 0) goto L8
            return
        L8:
            r1.a()
            r1.d()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            r0.d()
            return
    }
}
