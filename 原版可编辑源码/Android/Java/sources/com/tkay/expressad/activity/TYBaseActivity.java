package com.tkay.expressad.activity;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.view.Display;
import android.view.DisplayCutout;
import android.view.OrientationEventListener;
import android.view.WindowInsets;
import android.view.WindowManager;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.foundation.f.b;

public abstract class TYBaseActivity extends Activity {
    private static final String a = "TYBaseActivity";
    private OrientationEventListener b;
    private Display c;
    private int d = -1;

    public abstract void a(int i, int i2, int i3, int i4, int i5);

    @Override
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

    @Override
    protected void onResume() {
        super.onResume();
        if (b.c) {
            return;
        }
        a();
        d();
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        d();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        OrientationEventListener orientationEventListener = this.b;
        if (orientationEventListener != null) {
            orientationEventListener.disable();
            this.b = null;
        }
    }

    public final void a() {
        getWindow().getDecorView().postDelayed(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:36:0x00b2 A[Catch: all -> 0x00b8, TRY_LEAVE, TryCatch #0 {all -> 0x00b8, blocks: (B:2:0x0000, B:4:0x0006, B:6:0x0018, B:8:0x001e, B:10:0x0024, B:12:0x0067, B:22:0x007a, B:34:0x00a5, B:36:0x00b2), top: B:41:0x0000 }] */
            /* JADX WARN: Removed duplicated region for block: B:44:? A[RETURN, SYNTHETIC] */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final void run() {
                int safeInsetLeft;
                int safeInsetRight;
                int safeInsetTop;
                int i;
                DisplayCutout displayCutout;
                try {
                    if (Build.VERSION.SDK_INT < 23) {
                        return;
                    }
                    WindowInsets rootWindowInsets = TYBaseActivity.this.getWindow().getDecorView().getRootWindowInsets();
                    int i2 = -1;
                    int i3 = 0;
                    if (rootWindowInsets == null || Build.VERSION.SDK_INT < 28 || (displayCutout = rootWindowInsets.getDisplayCutout()) == null) {
                        safeInsetLeft = 0;
                        safeInsetRight = 0;
                        safeInsetTop = 0;
                        i = 0;
                    } else {
                        safeInsetLeft = displayCutout.getSafeInsetLeft();
                        safeInsetRight = displayCutout.getSafeInsetRight();
                        safeInsetTop = displayCutout.getSafeInsetTop();
                        int safeInsetBottom = displayCutout.getSafeInsetBottom();
                        StringBuilder sb = new StringBuilder("NOTCH Left:");
                        sb.append(safeInsetLeft);
                        sb.append(" Right:");
                        sb.append(safeInsetRight);
                        sb.append(" Top:");
                        sb.append(safeInsetTop);
                        sb.append(" Bottom:");
                        sb.append(safeInsetBottom);
                        int iC = TYBaseActivity.this.c();
                        if (TYBaseActivity.this.d == -1) {
                            TYBaseActivity.this.d = iC == 0 ? 3 : iC == 1 ? 1 : iC == 2 ? 4 : iC == 3 ? 2 : -1;
                            new StringBuilder().append(TYBaseActivity.this.d);
                        }
                        if (iC == 0) {
                            i = safeInsetBottom;
                            TYBaseActivity.this.a(i3, safeInsetLeft, safeInsetRight, safeInsetTop, i);
                            if (TYBaseActivity.this.b != null) {
                                TYBaseActivity.d(TYBaseActivity.this);
                                return;
                            }
                            return;
                        }
                        if (iC == 1) {
                            i2 = 90;
                        } else if (iC == 2) {
                            i2 = 180;
                        } else if (iC == 3) {
                            i2 = 270;
                        }
                        i = safeInsetBottom;
                    }
                    i3 = i2;
                    TYBaseActivity.this.a(i3, safeInsetLeft, safeInsetRight, safeInsetTop, i);
                    if (TYBaseActivity.this.b != null) {
                    }
                } catch (Throwable th) {
                    th.getMessage();
                }
            }
        }, 500L);
    }

    final class 2 extends OrientationEventListener {
        2(Context context) {
            super(context, 1);
        }

        @Override
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
        2 r0 = new 2(this);
        this.b = r0;
        if (r0.canDetectOrientation()) {
            this.b.enable();
        } else {
            this.b.disable();
            this.b = null;
        }
    }

    private int c() {
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

    static void d(TYBaseActivity tYBaseActivity) {
        2 r0 = tYBaseActivity.new 2(tYBaseActivity);
        tYBaseActivity.b = r0;
        if (r0.canDetectOrientation()) {
            tYBaseActivity.b.enable();
        } else {
            tYBaseActivity.b.disable();
            tYBaseActivity.b = null;
        }
    }
}
