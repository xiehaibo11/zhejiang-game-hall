package com.mbridge.msdk.activity;

import android.app.Activity;
import android.os.Build;
import android.os.Bundle;
import android.view.Display;
import android.view.DisplayCutout;
import android.view.OrientationEventListener;
import android.view.WindowInsets;
import android.view.WindowManager;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.tools.z;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public abstract class MBBaseActivity extends Activity {
    private OrientationEventListener a;
    private Display b;
    private int c = -1;

    public abstract void setTopControllerPadding(int i, int i2, int i3, int i4, int i5);

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            requestWindowFeature(1);
            getWindow().setFlags(1024, 1024);
            getWindow().addFlags(512);
            b();
            a();
            if (Build.VERSION.SDK_INT >= 28) {
                WindowManager.LayoutParams attributes = getWindow().getAttributes();
                attributes.layoutInDisplayCutoutMode = 1;
                getWindow().setAttributes(attributes);
            }
        } catch (Exception e) {
            z.d("MBBaseActivity", e.getMessage());
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (b.c) {
            return;
        }
        getNotchParams();
        b();
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        b();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        OrientationEventListener orientationEventListener = this.a;
        if (orientationEventListener != null) {
            orientationEventListener.disable();
            this.a = null;
        }
    }

    public void getNotchParams() {
        getWindow().getDecorView().postDelayed(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:41:0x00dd A[Catch: Exception -> 0x00e3, TRY_LEAVE, TryCatch #0 {Exception -> 0x00e3, blocks: (B:3:0x0002, B:5:0x0008, B:7:0x001a, B:9:0x0020, B:11:0x0026, B:13:0x006a, B:15:0x007b, B:17:0x0086, B:27:0x0099, B:39:0x00d0, B:41:0x00dd, B:14:0x0075), top: B:46:0x0002 }] */
            /* JADX WARN: Removed duplicated region for block: B:49:? A[RETURN, SYNTHETIC] */
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
                    WindowInsets rootWindowInsets = MBBaseActivity.this.getWindow().getDecorView().getRootWindowInsets();
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
                        z.d("MBBaseActivity", "NOTCH Left:" + safeInsetLeft + " Right:" + safeInsetRight + " Top:" + safeInsetTop + " Bottom:" + safeInsetBottom);
                        int rotation = MBBaseActivity.this.b != null ? MBBaseActivity.this.b.getRotation() : MBBaseActivity.this.a();
                        if (MBBaseActivity.this.c == -1) {
                            MBBaseActivity.this.c = rotation == 0 ? 3 : rotation == 1 ? 1 : rotation == 2 ? 4 : rotation == 3 ? 2 : -1;
                            z.d("MBBaseActivity", MBBaseActivity.this.c + "");
                        }
                        if (rotation == 0) {
                            i = safeInsetBottom;
                            MBBaseActivity.this.setTopControllerPadding(i3, safeInsetLeft, safeInsetRight, safeInsetTop, i);
                            if (MBBaseActivity.this.a != null) {
                                MBBaseActivity.e(MBBaseActivity.this);
                                return;
                            }
                            return;
                        }
                        if (rotation == 1) {
                            i2 = 90;
                        } else if (rotation == 2) {
                            i2 = 180;
                        } else if (rotation == 3) {
                            i2 = 270;
                        }
                        i = safeInsetBottom;
                    }
                    i3 = i2;
                    MBBaseActivity.this.setTopControllerPadding(i3, safeInsetLeft, safeInsetRight, safeInsetTop, i);
                    if (MBBaseActivity.this.a != null) {
                    }
                } catch (Exception e) {
                    z.d("MBBaseActivity", e.getMessage());
                }
            }
        }, 500L);
    }

    private int a() {
        if (this.b == null) {
            if (Build.VERSION.SDK_INT >= 30) {
                this.b = getDisplay();
            } else {
                this.b = ((WindowManager) getSystemService("window")).getDefaultDisplay();
            }
        }
        Display display = this.b;
        if (display != null) {
            return display.getRotation();
        }
        return -1;
    }

    private void b() {
        try {
            if (Build.VERSION.SDK_INT >= 19) {
                getWindow().addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                getWindow().getDecorView().setSystemUiVisibility(4098);
            } else {
                getWindow().getDecorView().setSystemUiVisibility(2);
            }
        } catch (Throwable th) {
            z.d("MBBaseActivity", th.getMessage());
        }
    }

    static void e(MBBaseActivity mBBaseActivity) {
        OrientationEventListener orientationEventListener = new OrientationEventListener(mBBaseActivity, 1) {
            @Override
            public final void onOrientationChanged(int i) {
                int rotation = MBBaseActivity.this.b != null ? MBBaseActivity.this.b.getRotation() : 0;
                if (rotation != 1 || MBBaseActivity.this.c == 1) {
                    if (rotation != 3 || MBBaseActivity.this.c == 2) {
                        if (rotation != 0 || MBBaseActivity.this.c == 3) {
                            if (rotation != 2 || MBBaseActivity.this.c == 4) {
                                return;
                            }
                            MBBaseActivity.this.c = 4;
                            MBBaseActivity.this.getNotchParams();
                            z.d("MBBaseActivity", "Orientation Bottom");
                            return;
                        }
                        MBBaseActivity.this.c = 3;
                        MBBaseActivity.this.getNotchParams();
                        z.d("MBBaseActivity", "Orientation Top");
                        return;
                    }
                    MBBaseActivity.this.c = 2;
                    MBBaseActivity.this.getNotchParams();
                    z.d("MBBaseActivity", "Orientation Right");
                    return;
                }
                MBBaseActivity.this.c = 1;
                MBBaseActivity.this.getNotchParams();
                z.d("MBBaseActivity", "Orientation Left");
            }
        };
        mBBaseActivity.a = orientationEventListener;
        if (orientationEventListener.canDetectOrientation()) {
            mBBaseActivity.a.enable();
        } else {
            mBBaseActivity.a.disable();
            mBBaseActivity.a = null;
        }
    }
}
