package com.mbridge.msdk.mbnative.e;

import android.content.Context;
import android.content.res.Resources;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbnative.controller.NativeController;
import com.mbridge.msdk.mbnative.controller.b;
import com.mbridge.msdk.out.AdMobClickListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: NativeProvider.java */
/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private NativeController f3793a;
    private Handler b = new Handler(Looper.getMainLooper());
    private com.mbridge.msdk.mbnative.c.a c;
    private NativeListener.NativeTrackingListener d;

    public final void a(com.mbridge.msdk.mbnative.c.a aVar) {
        this.c = aVar;
    }

    public final void a(NativeListener.NativeTrackingListener nativeTrackingListener) {
        this.d = nativeTrackingListener;
    }

    public a() {
    }

    public a(com.mbridge.msdk.mbnative.c.a aVar, NativeListener.NativeTrackingListener nativeTrackingListener) {
        this.c = aVar;
        this.d = nativeTrackingListener;
    }

    public final void a(Context context, Resources resources, Map<String, Object> map) {
        this.f3793a = new NativeController(this.c, this.d, map, context);
    }

    public final void a() {
        a(0, "");
    }

    public final void a(String str) {
        a(0, str);
    }

    public final void b() {
        a(1, "");
    }

    public final void d() {
        try {
            this.f3793a.a();
        } catch (Exception unused) {
            z.d("NativeProvider", "release failed");
        }
    }

    public final void a(View view, List<View> list, Campaign campaign) {
        z.b("NativeProvider", "native provider registerView");
        NativeController nativeController = this.f3793a;
        if (nativeController == null) {
            return;
        }
        nativeController.a(campaign, view, list);
    }

    public final void a(View view, Campaign campaign) {
        z.b("NativeProvider", "native provider registerView");
        NativeController nativeController = this.f3793a;
        if (nativeController == null) {
            return;
        }
        nativeController.a(campaign, view);
    }

    public final void b(View view, Campaign campaign) {
        z.b("NativeProvider", "native provider unregisterView");
        NativeController nativeController = this.f3793a;
        if (nativeController == null) {
            return;
        }
        nativeController.b(campaign, view);
    }

    public final void b(View view, List<View> list, Campaign campaign) {
        z.b("NativeProvider", "native provider unregisterView");
        NativeController nativeController = this.f3793a;
        if (nativeController == null) {
            return;
        }
        nativeController.b(campaign, view, list);
    }

    public static void preload(Map<String, Object> map, int i, AdMobClickListener adMobClickListener) {
        z.b("NativeProvider", "native provider preload");
        new b().a(map, i, adMobClickListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        this.c.onAdLoadError("current request is loading");
        this.c.b();
    }

    private void a(int i, String str) {
        if (this.f3793a != null) {
            com.mbridge.msdk.mbnative.c.a aVar = this.c;
            if (aVar != null && aVar.a()) {
                if (ae.b()) {
                    f();
                    return;
                } else {
                    this.b.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.e.a.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            a.this.f();
                        }
                    });
                    return;
                }
            }
            com.mbridge.msdk.mbnative.c.a aVar2 = this.c;
            if (aVar2 != null) {
                aVar2.b();
            }
            this.f3793a.a(i, str);
        }
    }

    public final String e() {
        NativeController nativeController = this.f3793a;
        return nativeController != null ? nativeController.b() : "";
    }

    public final void c() {
        try {
            x.a();
        } catch (Exception unused) {
            z.d("NativeProvider", "clear cache failed");
        }
    }
}
