package com.tkay.basead.mraid;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewTreeObserver;
import com.sigmob.sdk.base.h;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver;
import com.tkay.expressad.mbbanner.view.TYBannerWebView;
import java.lang.ref.WeakReference;

public class MraidWebView extends TYBannerWebView {
    public static String TAG = MraidWebView.class.getSimpleName();
    b a;
    boolean b;
    MraidVolumeChangeReceiver c;
    boolean d;

    public MraidWebView(Context context) {
        super(context);
        this.b = false;
    }

    public MraidWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = false;
    }

    public MraidWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = false;
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0010  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final String a(String str) {
        boolean z = false;
        if (!TextUtils.isEmpty(str)) {
            if (!str.contains("../")) {
                if (str.startsWith(h.x)) {
                    String path = Uri.parse(str).getPath();
                    if (TextUtils.isEmpty(path) || !path.contains(com.tkay.core.common.res.d.a(m.a().f()).a())) {
                        z = true;
                    }
                }
            }
        }
        if (!z) {
            return str;
        }
        Log.e("tkay_express", "illegal URL: ".concat(String.valueOf(str)));
        return com.tkay.core.common.res.d.a;
    }

    public void setNeedRegisterVolumeChangeReceiver(boolean z) {
        this.d = z;
    }

    public void prepare(Context context, b bVar) {
        this.a = bVar;
        getViewTreeObserver().addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() {
            @Override
            public final boolean onPreDraw() {
                try {
                    if (!MraidWebView.this.b) {
                        MraidWebView.this.getViewTreeObserver().removeOnPreDrawListener(this);
                        MraidWebView.this.b = true;
                        int[] iArr = new int[2];
                        MraidWebView.this.getLocationInWindow(iArr);
                        com.tkay.expressad.mbbanner.a.a.a.a(MraidWebView.this, iArr[0], iArr[1]);
                        com.tkay.expressad.mbbanner.a.a.a.a(MraidWebView.this, iArr[0], iArr[1], MraidWebView.this.getWidth(), MraidWebView.this.getHeight());
                        MraidWebView.a(MraidWebView.this);
                        if (MraidWebView.this.d) {
                            MraidWebView.b(MraidWebView.this);
                        }
                        if (MraidWebView.this.a != null) {
                            MraidWebView.this.a.a();
                        }
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                return false;
            }
        });
    }

    private void b() {
        Object object = getObject();
        com.tkay.expressad.atsignalcommon.base.b baseWebViewClient = getBaseWebViewClient();
        if (object instanceof a) {
            Context context = getContext();
            if (context instanceof Activity) {
                ((a) object).b = new WeakReference<>((Activity) context);
            }
            ((a) object).a(this.a);
        }
        if (baseWebViewClient instanceof e) {
            ((e) baseWebViewClient).c = this.a;
        }
    }

    private void c() {
        MraidVolumeChangeReceiver mraidVolumeChangeReceiver = new MraidVolumeChangeReceiver(getContext());
        this.c = mraidVolumeChangeReceiver;
        mraidVolumeChangeReceiver.registerReceiver();
        this.c.getCurrentVolume();
        this.c.setVolumeChangeListener(new 2());
    }

    final class 2 implements MraidVolumeChangeReceiver.VolumeChangeListener {
        2() {
        }

        @Override
        public final void onVolumeChanged(double d) {
            String str = MraidWebView.TAG;
            try {
                CallMraidJS.getInstance().fireAudioVolumeChange(MraidWebView.this, d);
            } catch (Exception e) {
                String str2 = MraidWebView.TAG;
                e.getMessage();
            }
        }
    }

    @Override
    public void release() {
        super.release();
        setWebViewListener(null);
        MraidVolumeChangeReceiver mraidVolumeChangeReceiver = this.c;
        if (mraidVolumeChangeReceiver != null) {
            mraidVolumeChangeReceiver.unregisterReceiver();
        }
    }

    static void a(MraidWebView mraidWebView) {
        Object object = mraidWebView.getObject();
        com.tkay.expressad.atsignalcommon.base.b baseWebViewClient = mraidWebView.getBaseWebViewClient();
        if (object instanceof a) {
            Context context = mraidWebView.getContext();
            if (context instanceof Activity) {
                ((a) object).b = new WeakReference<>((Activity) context);
            }
            ((a) object).a(mraidWebView.a);
        }
        if (baseWebViewClient instanceof e) {
            ((e) baseWebViewClient).c = mraidWebView.a;
        }
    }

    static void b(MraidWebView mraidWebView) {
        MraidVolumeChangeReceiver mraidVolumeChangeReceiver = new MraidVolumeChangeReceiver(mraidWebView.getContext());
        mraidWebView.c = mraidVolumeChangeReceiver;
        mraidVolumeChangeReceiver.registerReceiver();
        mraidWebView.c.getCurrentVolume();
        mraidWebView.c.setVolumeChangeListener(mraidWebView.new 2());
    }
}
