package com.mbridge.msdk.widget.custom;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.ContextThemeWrapper;
import android.view.OrientationEventListener;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.a;
import com.mbridge.msdk.widget.custom.baseview.MBButton;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class DownloadMessageDialog extends Dialog {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private float f4415a;
    private int b;
    private int c;
    private CustomViewMessageWrap d;
    private com.mbridge.msdk.widget.custom.a e;
    private boolean f;
    private OrientationEventListener g;
    private b h;
    private AnimatorSet i;
    private a j;
    private com.mbridge.msdk.widget.custom.a k;

    public interface a {
        void a(int i);
    }

    public void setRenderListener(com.mbridge.msdk.widget.custom.a aVar) {
        this.e = aVar;
    }

    public DownloadMessageDialog(Context context, boolean z, CustomViewMessageWrap customViewMessageWrap, com.mbridge.msdk.widget.custom.a aVar) {
        this(context, z, null, customViewMessageWrap, aVar);
    }

    public DownloadMessageDialog(Context context, boolean z, DialogInterface.OnCancelListener onCancelListener, CustomViewMessageWrap customViewMessageWrap, com.mbridge.msdk.widget.custom.a aVar) {
        super(context, s.a(context, "mbridge_dialog_fullscreen_bottom", "style"));
        this.f4415a = 0.8f;
        this.f = false;
        this.g = null;
        this.k = new com.mbridge.msdk.widget.custom.a() { // from class: com.mbridge.msdk.widget.custom.DownloadMessageDialog.1
            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap2) {
                if (DownloadMessageDialog.this.e != null) {
                    DownloadMessageDialog.this.e.a(downloadMessageDialog, customViewMessageWrap2);
                }
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void b(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap2) {
                if (DownloadMessageDialog.this.e != null) {
                    DownloadMessageDialog.this.e.b(downloadMessageDialog, customViewMessageWrap2);
                }
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void c(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap2) {
                if (DownloadMessageDialog.this.e != null) {
                    DownloadMessageDialog.this.e.c(downloadMessageDialog, customViewMessageWrap2);
                }
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap2, Exception exc) {
                if (DownloadMessageDialog.this.e != null) {
                    DownloadMessageDialog.this.e.a(downloadMessageDialog, customViewMessageWrap2, exc);
                }
            }

            @Override // com.mbridge.msdk.widget.custom.a
            public final void a(DownloadMessageDialog downloadMessageDialog, CustomViewMessageWrap customViewMessageWrap2, a.EnumC0311a enumC0311a) {
                if (DownloadMessageDialog.this.e != null) {
                    if (enumC0311a == a.EnumC0311a.CLICK_EVENT_DOWNLOAD && DownloadMessageDialog.this.i != null) {
                        DownloadMessageDialog.this.i.cancel();
                    }
                    DownloadMessageDialog.this.e.a(downloadMessageDialog, customViewMessageWrap2, enumC0311a);
                }
            }
        };
        setCancelable(z);
        setOnCancelListener(onCancelListener);
        if (customViewMessageWrap == null) {
            this.d = new CustomViewMessageWrap();
        } else {
            this.d = customViewMessageWrap;
        }
        this.e = aVar;
        if (customViewMessageWrap != null && TextUtils.isEmpty(customViewMessageWrap.getApplicationImage())) {
            this.f4415a = 0.6f;
        }
        try {
            DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
            this.k.a(this, customViewMessageWrap);
            this.h = new b(this, context, this.d, this.k);
            if (isScreenOrientationPortrait(getContext())) {
                this.c = displayMetrics.widthPixels;
                this.b = displayMetrics.heightPixels;
            } else {
                this.b = displayMetrics.widthPixels;
                this.c = displayMetrics.heightPixels;
            }
            View viewA = this.h.a(this.c, this.b);
            if (viewA != null) {
                requestWindowFeature(1);
                setContentView(viewA);
                this.k.b(this, customViewMessageWrap);
                this.f = true;
                if (isScreenOrientationPortrait(getContext())) {
                    this.c = displayMetrics.widthPixels;
                    this.b = displayMetrics.heightPixels;
                    WindowManager.LayoutParams attributes = getWindow().getAttributes();
                    int i = (int) (this.b * this.f4415a);
                    attributes.width = -1;
                    attributes.height = i;
                    attributes.gravity = 80;
                    getWindow().setAttributes(attributes);
                    return;
                }
                this.c = displayMetrics.widthPixels;
                this.b = displayMetrics.heightPixels;
                WindowManager.LayoutParams attributes2 = getWindow().getAttributes();
                attributes2.width = (int) (((double) this.c) * 0.5d);
                attributes2.height = -1;
                attributes2.gravity = 17;
                getWindow().setAttributes(attributes2);
                return;
            }
            this.k.a(this, customViewMessageWrap, new Exception("view is null"));
        } catch (Exception e) {
            z.d("DownloadMessageDialog", e.getMessage());
            this.k.a(this, customViewMessageWrap, e);
        }
    }

    @Override // android.app.Dialog
    public void show() {
        MBButton mBButtonA;
        try {
            if (this.f) {
                Window window = getWindow();
                if (window == null) {
                    this.k.a(this, this.d, new Exception("window is null"));
                    return;
                }
                window.setFlags(1024, 1024);
                window.setFlags(8, 8);
                window.getDecorView().setSystemUiVisibility(256);
                window.getDecorView().setSystemUiVisibility(512);
                window.getDecorView().setSystemUiVisibility(4096);
                window.getDecorView().setSystemUiVisibility(1024);
                window.getDecorView().setSystemUiVisibility(4);
                window.clearFlags(8);
                try {
                    getWindow().setFlags(8, 8);
                    if (getContext() != null) {
                        ContextThemeWrapper contextThemeWrapper = (ContextThemeWrapper) getContext();
                        if (contextThemeWrapper.getBaseContext() instanceof Activity) {
                            Activity activity = (Activity) contextThemeWrapper.getBaseContext();
                            if (activity.isFinishing()) {
                                return;
                            }
                            if (Build.VERSION.SDK_INT >= 17 && activity.isDestroyed()) {
                                return;
                            } else {
                                super.show();
                            }
                        }
                    }
                    hideNavigationBar(getWindow());
                    getWindow().clearFlags(8);
                    this.k.c(this, this.d);
                    if (Build.VERSION.SDK_INT <= 20) {
                        try {
                            MBButton mBButton = (MBButton) this.d.getView("download");
                            if (mBButton != null) {
                                mBButton.setPadding(0, 0, 0, 0);
                            }
                        } catch (Exception e) {
                            z.d("dialog", e.getMessage());
                        }
                    }
                    int i = 1;
                    if (this.g == null) {
                        OrientationEventListener orientationEventListener = new OrientationEventListener(getContext(), i) { // from class: com.mbridge.msdk.widget.custom.DownloadMessageDialog.2
                            @Override // android.view.OrientationEventListener
                            public final void onOrientationChanged(int i2) {
                                try {
                                    WindowManager.LayoutParams attributes = DownloadMessageDialog.this.getWindow().getAttributes();
                                    DisplayMetrics displayMetrics = DownloadMessageDialog.this.getContext().getResources().getDisplayMetrics();
                                    if (DownloadMessageDialog.this.getContext().getResources().getConfiguration().orientation == 1) {
                                        if (DownloadMessageDialog.this.j != null) {
                                            DownloadMessageDialog.this.j.a(1);
                                        }
                                        attributes.width = -1;
                                        attributes.height = (int) (displayMetrics.heightPixels * DownloadMessageDialog.this.f4415a);
                                        attributes.gravity = 80;
                                    } else {
                                        if (DownloadMessageDialog.this.j != null) {
                                            DownloadMessageDialog.this.j.a(2);
                                        }
                                        attributes.width = (int) (((double) displayMetrics.widthPixels) * 0.5d);
                                        attributes.height = -1;
                                        attributes.gravity = 17;
                                    }
                                    DownloadMessageDialog.this.getWindow().setAttributes(attributes);
                                } catch (Throwable th) {
                                    z.d("DownloadMessageDialog", th.getMessage());
                                }
                            }
                        };
                        this.g = orientationEventListener;
                        if (orientationEventListener.canDetectOrientation()) {
                            this.g.enable();
                        } else {
                            this.g.disable();
                            this.g = null;
                        }
                    }
                    if (this.g != null && this.g.canDetectOrientation()) {
                        CampaignEx campaignEx = this.d.getCampaignEx();
                        if (campaignEx == null || !(campaignEx.getAdType() == 94 || campaignEx.getAdType() == 287)) {
                            if (campaignEx != null) {
                                this.g.enable();
                            }
                        } else if (campaignEx.getRewardTemplateMode() != null && campaignEx.getRewardTemplateMode().c() == 0) {
                            this.g.enable();
                        }
                    }
                    if (this.h == null || this.h.a() == null || (mBButtonA = this.h.a()) == null || !String.valueOf(mBButtonA.getContentDescription()).contains(i.f)) {
                        return;
                    }
                    ObjectAnimator objectAnimatorOfFloat = ObjectAnimator.ofFloat(mBButtonA, "scaleX", 1.2f, 0.8f);
                    objectAnimatorOfFloat.setRepeatCount(-1);
                    ObjectAnimator objectAnimatorOfFloat2 = ObjectAnimator.ofFloat(mBButtonA, "scaleY", 1.2f, 0.8f);
                    objectAnimatorOfFloat2.setRepeatCount(-1);
                    AnimatorSet animatorSet = new AnimatorSet();
                    this.i = animatorSet;
                    animatorSet.play(objectAnimatorOfFloat).with(objectAnimatorOfFloat2);
                    this.i.setDuration(2000L);
                    this.i.start();
                } catch (Exception e2) {
                    this.k.a(this, this.d, e2);
                }
            }
        } catch (Exception e3) {
            z.d("DownloadMessageDialog", e3.getMessage());
        }
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override // android.app.Dialog
    protected void onStart() {
        super.onStart();
    }

    @Override // android.app.Dialog
    protected void onStop() {
        super.onStop();
        try {
            if (this.i != null) {
                this.i.cancel();
            }
            if (this.g == null || !this.g.canDetectOrientation()) {
                return;
            }
            this.g.disable();
        } catch (Exception e) {
            z.d("DownloadMessageDialog", e.getMessage());
        }
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public void dismiss() {
        View decorView;
        try {
            if (this.i != null) {
                this.i.cancel();
            }
            if (this.g != null && this.g.canDetectOrientation()) {
                this.g.disable();
            }
        } catch (Exception e) {
            z.d("DownloadMessageDialog", e.getMessage());
        }
        Window window = getWindow();
        if (window == null || (decorView = window.getDecorView()) == null || decorView.getParent() == null) {
            return;
        }
        super.dismiss();
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public void cancel() {
        try {
            if (this.i != null) {
                this.i.cancel();
            }
            if (this.g != null && this.g.canDetectOrientation()) {
                this.g.disable();
            }
        } catch (Exception e) {
            z.d("DownloadMessageDialog", e.getMessage());
        }
        super.cancel();
    }

    public void hideNavigationBar(Window window) {
        if (window != null) {
            window.setFlags(1024, 1024);
            if (Build.VERSION.SDK_INT >= 19) {
                window.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                window.getDecorView().setSystemUiVisibility(4098);
            } else {
                window.getDecorView().setSystemUiVisibility(2);
            }
            if (Build.VERSION.SDK_INT >= 28) {
                WindowManager.LayoutParams attributes = window.getAttributes();
                attributes.layoutInDisplayCutoutMode = 1;
                window.setAttributes(attributes);
            }
        }
    }

    public void registerOrientationListener(a aVar) {
        this.j = aVar;
    }

    public static boolean isScreenOrientationPortrait(Context context) {
        return context.getResources().getConfiguration().orientation == 1;
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
    }
}
