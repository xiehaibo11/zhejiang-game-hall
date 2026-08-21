package com.mbridge.msdk.mbjscommon.windvane;

import android.content.Context;
import java.util.HashMap;

/* JADX INFO: compiled from: WindVaneApiManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HashMap<String, Class> f3736a = new HashMap<>();
    private Context b;
    private Object c;
    private WindVaneWebView d;

    public g(Context context, WindVaneWebView windVaneWebView) {
        this.b = context;
        this.d = windVaneWebView;
        a(MvBridge.class);
        try {
            a((Class) Class.forName("com.mbridge.msdk.offerwall.jscommon.OfferWall"));
        } catch (ClassNotFoundException unused) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.interstitial.jscommon.interstitial"));
        } catch (ClassNotFoundException unused2) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.video.js.bridge.RewardJs"));
        } catch (ClassNotFoundException unused3) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.video.js.bridge.VideoBridge"));
        } catch (ClassNotFoundException unused4) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin"));
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.mbjscommon.authority.jscommon.PrivateAuthorityJSBridge"));
        } catch (ClassNotFoundException unused5) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.interactiveads.jscommon.Interactive"));
        } catch (ClassNotFoundException unused6) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.mbjscommon.mraid.MraidJSBridge"));
        } catch (ClassNotFoundException unused7) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.mbjscommon.bridge.BannerJSPlugin"));
        } catch (ClassNotFoundException unused8) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.splash.js.SplashJs"));
        } catch (ClassNotFoundException unused9) {
        }
        try {
            a((Class) Class.forName("com.mbridge.msdk.mbjscommon.webEnvCheck.WebGLCheckjs"));
        } catch (ClassNotFoundException unused10) {
        }
    }

    public final void a(Context context) {
        this.b = context;
    }

    public final void a(Object obj) {
        this.c = obj;
    }

    private Object a(String str, WindVaneWebView windVaneWebView, Context context) {
        Class cls = f3736a.get(str);
        if (cls == null) {
            return null;
        }
        try {
            if (!j.class.isAssignableFrom(cls)) {
                return null;
            }
            j jVar = (j) cls.newInstance();
            jVar.initialize(context, windVaneWebView);
            jVar.initialize(this.c, windVaneWebView);
            return jVar;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public final void a(Class cls) {
        if (f3736a == null) {
            f3736a = new HashMap<>();
        }
        f3736a.put(cls.getSimpleName(), cls);
    }

    public final Object a(String str) {
        if (f3736a == null) {
            f3736a = new HashMap<>();
        }
        return a(str, this.d, this.b);
    }
}
