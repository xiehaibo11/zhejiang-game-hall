package com.tkay.expressad.activity;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.view.Display;
import android.view.OrientationEventListener;
import android.view.WindowManager;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.foundation.f.b;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYBaseActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6354a = "TYBaseActivity";
    private OrientationEventListener b;
    private Display c;
    private int d = -1;

    public abstract void a(int i, int i2, int i3, int i4, int i5);

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            requestWindowFeature(1);
            getWindow().setFlags(1024, 1024);
            getWindow().addFlags(512);
            d();
            c();
            if (Build.VERSION.SDK_INT >= 28) {
                WindowManager.LayoutParams attributes = getWindow().getAttributes();
                attributes.layoutInDisplayCutoutMode = 1;
                getWindow().setAttributes(attributes);
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (b.c) {
            return;
        }
        a();
        d();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        d();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        OrientationEventListener orientationEventListener = this.b;
        if (orientationEventListener != null) {
            orientationEventListener.disable();
            this.b = null;
        }
    }

    public final void a() {
        getWindow().getDecorView().postDelayed(new Runnable() { // from class: com.tkay.expressad.activity.TYBaseActivity.1
            /* JADX WARN: Removed duplicated region for block: B:36:0x00b2 A[Catch: all -> 0x00b8, TRY_LEAVE, TryCatch #0 {all -> 0x00b8, blocks: (B:2:0x0000, B:4:0x0006, B:6:0x0018, B:8:0x001e, B:10:0x0024, B:12:0x0067, B:22:0x007a, B:34:0x00a5, B:36:0x00b2), top: B:41:0x0000 }] */
            /* JADX WARN: Removed duplicated region for block: B:44:? A[RETURN, SYNTHETIC] */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    r12 = this;
                    int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb8
                    r1 = 23
                    if (r0 < r1) goto Lb7
                    com.tkay.expressad.activity.TYBaseActivity r0 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    android.view.Window r0 = r0.getWindow()     // Catch: java.lang.Throwable -> Lb8
                    android.view.View r0 = r0.getDecorView()     // Catch: java.lang.Throwable -> Lb8
                    android.view.WindowInsets r0 = r0.getRootWindowInsets()     // Catch: java.lang.Throwable -> Lb8
                    r1 = -1
                    r2 = 0
                    if (r0 == 0) goto La0
                    int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb8
                    r4 = 28
                    if (r3 < r4) goto La0
                    android.view.DisplayCutout r0 = r0.getDisplayCutout()     // Catch: java.lang.Throwable -> Lb8
                    if (r0 == 0) goto La0
                    int r3 = r0.getSafeInsetLeft()     // Catch: java.lang.Throwable -> Lb8
                    int r4 = r0.getSafeInsetRight()     // Catch: java.lang.Throwable -> Lb8
                    int r5 = r0.getSafeInsetTop()     // Catch: java.lang.Throwable -> Lb8
                    int r0 = r0.getSafeInsetBottom()     // Catch: java.lang.Throwable -> Lb8
                    java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
                    java.lang.String r7 = "NOTCH Left:"
                    r6.<init>(r7)     // Catch: java.lang.Throwable -> Lb8
                    r6.append(r3)     // Catch: java.lang.Throwable -> Lb8
                    java.lang.String r7 = " Right:"
                    r6.append(r7)     // Catch: java.lang.Throwable -> Lb8
                    r6.append(r4)     // Catch: java.lang.Throwable -> Lb8
                    java.lang.String r7 = " Top:"
                    r6.append(r7)     // Catch: java.lang.Throwable -> Lb8
                    r6.append(r5)     // Catch: java.lang.Throwable -> Lb8
                    java.lang.String r7 = " Bottom:"
                    r6.append(r7)     // Catch: java.lang.Throwable -> Lb8
                    r6.append(r0)     // Catch: java.lang.Throwable -> Lb8
                    com.tkay.expressad.activity.TYBaseActivity r6 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    int r6 = com.tkay.expressad.activity.TYBaseActivity.a(r6)     // Catch: java.lang.Throwable -> Lb8
                    com.tkay.expressad.activity.TYBaseActivity r7 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    int r7 = com.tkay.expressad.activity.TYBaseActivity.b(r7)     // Catch: java.lang.Throwable -> Lb8
                    r8 = 3
                    r9 = 2
                    r10 = 1
                    if (r7 != r1) goto L8b
                    com.tkay.expressad.activity.TYBaseActivity r7 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    if (r6 != 0) goto L6d
                    r11 = r8
                    goto L7a
                L6d:
                    if (r6 != r10) goto L71
                    r11 = r10
                    goto L7a
                L71:
                    if (r6 != r9) goto L75
                    r11 = 4
                    goto L7a
                L75:
                    if (r6 != r8) goto L79
                    r11 = r9
                    goto L7a
                L79:
                    r11 = r1
                L7a:
                    com.tkay.expressad.activity.TYBaseActivity.a(r7, r11)     // Catch: java.lang.Throwable -> Lb8
                    java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
                    r7.<init>()     // Catch: java.lang.Throwable -> Lb8
                    com.tkay.expressad.activity.TYBaseActivity r11 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    int r11 = com.tkay.expressad.activity.TYBaseActivity.b(r11)     // Catch: java.lang.Throwable -> Lb8
                    r7.append(r11)     // Catch: java.lang.Throwable -> Lb8
                L8b:
                    if (r6 == 0) goto L9e
                    if (r6 == r10) goto L9b
                    if (r6 == r9) goto L98
                    if (r6 == r8) goto L95
                L93:
                    r6 = r0
                    goto La4
                L95:
                    r1 = 270(0x10e, float:3.78E-43)
                    goto L93
                L98:
                    r1 = 180(0xb4, float:2.52E-43)
                    goto L93
                L9b:
                    r1 = 90
                    goto L93
                L9e:
                    r6 = r0
                    goto La5
                La0:
                    r3 = r2
                    r4 = r3
                    r5 = r4
                    r6 = r5
                La4:
                    r2 = r1
                La5:
                    com.tkay.expressad.activity.TYBaseActivity r1 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Lb8
                    com.tkay.expressad.activity.TYBaseActivity r0 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    android.view.OrientationEventListener r0 = com.tkay.expressad.activity.TYBaseActivity.c(r0)     // Catch: java.lang.Throwable -> Lb8
                    if (r0 != 0) goto Lb7
                    com.tkay.expressad.activity.TYBaseActivity r0 = com.tkay.expressad.activity.TYBaseActivity.this     // Catch: java.lang.Throwable -> Lb8
                    com.tkay.expressad.activity.TYBaseActivity.d(r0)     // Catch: java.lang.Throwable -> Lb8
                Lb7:
                    return
                Lb8:
                    r0 = move-exception
                    r0.getMessage()
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.activity.TYBaseActivity.AnonymousClass1.run():void");
            }
        }, 500L);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.activity.TYBaseActivity$2, reason: invalid class name */
    final class AnonymousClass2 extends OrientationEventListener {
        AnonymousClass2(Context context) {
            super(context, 1);
        }

        @Override // android.view.OrientationEventListener
        public final void onOrientationChanged(int i) {
            int iC = TYBaseActivity.this.c();
            if (iC < 0) {
                iC = 0;
            }
            if (iC != 1 || TYBaseActivity.this.d == 1) {
                if (iC != 3 || TYBaseActivity.this.d == 2) {
                    if (iC != 0 || TYBaseActivity.this.d == 3) {
                        if (iC != 2 || TYBaseActivity.this.d == 4) {
                            return;
                        }
                        TYBaseActivity.this.d = 4;
                        TYBaseActivity.this.a();
                        return;
                    }
                    TYBaseActivity.this.d = 3;
                    TYBaseActivity.this.a();
                    return;
                }
                TYBaseActivity.this.d = 2;
                TYBaseActivity.this.a();
                return;
            }
            TYBaseActivity.this.d = 1;
            TYBaseActivity.this.a();
        }
    }

    private void b() {
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(this);
        this.b = anonymousClass2;
        if (anonymousClass2.canDetectOrientation()) {
            this.b.enable();
        } else {
            this.b.disable();
            this.b = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int c() {
        if (this.c == null) {
            if (Build.VERSION.SDK_INT >= 30) {
                this.c = getDisplay();
            } else {
                this.c = ((WindowManager) getSystemService("window")).getDefaultDisplay();
            }
        }
        Display display = this.c;
        if (display == null) {
            return -1;
        }
        try {
            return display.getRotation();
        } catch (Throwable unused) {
            return -1;
        }
    }

    private void d() {
        try {
            if (Build.VERSION.SDK_INT >= 19) {
                getWindow().addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                getWindow().getDecorView().setSystemUiVisibility(4098);
            } else {
                getWindow().getDecorView().setSystemUiVisibility(2);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    static /* synthetic */ void d(TYBaseActivity tYBaseActivity) {
        AnonymousClass2 anonymousClass2 = tYBaseActivity.new AnonymousClass2(tYBaseActivity);
        tYBaseActivity.b = anonymousClass2;
        if (anonymousClass2.canDetectOrientation()) {
            tYBaseActivity.b.enable();
        } else {
            tYBaseActivity.b.disable();
            tYBaseActivity.b = null;
        }
    }
}
