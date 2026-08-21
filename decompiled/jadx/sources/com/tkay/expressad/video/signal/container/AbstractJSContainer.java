package com.tkay.expressad.video.signal.container;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.f.b;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.factory.IJSFactory;
import com.tkay.expressad.video.signal.factory.a;
import com.tkay.expressad.video.signal.g;
import com.tkay.expressad.video.signal.i;
import com.tkay.expressad.video.signal.j;
import com.tkay.expressad.videocommon.a;
import com.tkay.expressad.videocommon.c.c;
import com.tkay.expressad.videocommon.e.d;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class AbstractJSContainer extends FrameLayout implements IJSFactory {
    protected static final String k = "AbstractJSContainer";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7446a;
    private int b;
    protected Activity l;
    protected String m;
    protected String n;
    protected d o;
    protected String p;
    protected c q;
    protected String r;
    protected int s;
    protected boolean t;
    protected boolean u;
    protected int v;
    protected int w;
    protected int x;
    protected boolean y;
    protected IJSFactory z;

    public AbstractJSContainer(Context context) {
        super(context);
        this.f7446a = 0;
        this.b = 1;
        this.s = 2;
        this.t = false;
        this.u = false;
        this.y = false;
        this.z = new a();
    }

    public AbstractJSContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f7446a = 0;
        this.b = 1;
        this.s = 2;
        this.t = false;
        this.u = false;
        this.y = false;
        this.z = new a();
    }

    public void registerJsFactory(IJSFactory iJSFactory) {
        this.z = iJSFactory;
    }

    public void onResume() {
        if (b.c) {
            return;
        }
        if (getJSCommon().g()) {
            getActivityProxy().b();
        }
        getActivityProxy().a(0);
    }

    public void onPause() {
        if (getJSCommon().g()) {
            getActivityProxy().a();
        }
        getActivityProxy().a(1);
    }

    public void onStop() {
        if (getJSCommon().g()) {
            getActivityProxy();
        }
        getActivityProxy().a(3);
    }

    public void onRestart() {
        if (getJSCommon().g()) {
            getActivityProxy();
        }
        getActivityProxy().a(4);
    }

    public void onStart() {
        if (getJSCommon().g()) {
            getActivityProxy();
        }
        getActivityProxy().a(2);
    }

    public void onDestroy() {
        if (getJSCommon().g()) {
            getActivityProxy().c();
        }
    }

    @Override // android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        if (getJSCommon().g()) {
            getActivityProxy().a(configuration);
        }
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.a getActivityProxy() {
        return this.z.getActivityProxy();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.c getJSCommon() {
        return this.z.getJSCommon();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public j getJSVideoModule() {
        return this.z.getJSVideoModule();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public g getJSNotifyProxy() {
        return this.z.getJSNotifyProxy();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public e getJSContainerModule() {
        return this.z.getJSContainerModule();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public i getIJSRewardVideoV1() {
        return this.z.getIJSRewardVideoV1();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.b getJSBTModule() {
        return this.z.getJSBTModule();
    }

    protected final void a(Object obj) {
        com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, a(this.f7446a));
    }

    private static void b(Object obj, String str) {
        com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, Base64.encodeToString(str.getBytes(), 2));
    }

    private void b(Object obj) {
        com.tkay.expressad.atsignalcommon.windvane.j.a().b(obj, a(this.b));
    }

    protected static void a(Object obj, String str) {
        com.tkay.expressad.atsignalcommon.windvane.j.a().b(obj, Base64.encodeToString(str.getBytes(), 2));
    }

    private static void a(WindVaneWebView windVaneWebView, String str, String str2) {
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, str, Base64.encodeToString(str2.getBytes(), 2));
    }

    private static String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public void setRewardId(String str) {
        this.r = str;
    }

    public void setUserId(String str) {
        this.p = str;
    }

    public void setUnitId(String str) {
        this.m = str;
    }

    public String getUnitId() {
        return this.m;
    }

    public String getPlacementId() {
        return this.n;
    }

    public void setPlacementId(String str) {
        this.n = str;
    }

    public void setActivity(Activity activity) {
        this.l = activity;
    }

    public void setReward(c cVar) {
        this.q = cVar;
    }

    public void setMute(int i) {
        this.s = i;
    }

    public void setIV(boolean z) {
        this.t = z;
    }

    public void setBidCampaign(boolean z) {
        this.u = z;
    }

    public void setIVRewardEnable(int i, int i2, int i3) {
        this.v = i;
        this.w = i2;
        this.x = i3;
    }

    public void setBigOffer(boolean z) {
        this.y = z;
    }

    public void setRewardUnitSetting(d dVar) {
        this.o = dVar;
    }

    protected void a(String str) {
        Activity activity = this.l;
        if (activity != null) {
            activity.finish();
        }
    }

    protected final com.tkay.expressad.video.signal.a.j b(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null) {
            return null;
        }
        a.C0482a c0482aA = com.tkay.expressad.videocommon.a.a(this.t ? com.tkay.expressad.foundation.g.a.aU : 94, cVar);
        if (c0482aA != null && c0482aA.c()) {
            WindVaneWebView windVaneWebViewA = c0482aA.a();
            if (windVaneWebViewA.getObject() instanceof com.tkay.expressad.video.signal.a.j) {
                return (com.tkay.expressad.video.signal.a.j) windVaneWebViewA.getObject();
            }
        }
        return null;
    }

    protected final int c(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.video.signal.a.j jVarB = b(cVar);
        if (jVarB != null) {
            return jVarB.d();
        }
        return 0;
    }

    protected final void a(d dVar, com.tkay.expressad.foundation.d.c cVar) {
        c.C0460c c0460cM;
        if (c(cVar) == 1) {
            return;
        }
        boolean zB = false;
        if (cVar != null && (c0460cM = cVar.M()) != null) {
            zB = b(c0460cM.c());
        }
        if (zB || dVar == null) {
            return;
        }
        b(this.o.b());
    }

    private boolean b(int i) {
        boolean z = false;
        try {
            if (i != 1) {
                if (i != 2) {
                    return false;
                }
                if (Build.VERSION.SDK_INT >= 18) {
                    this.l.setRequestedOrientation(11);
                } else {
                    this.l.setRequestedOrientation(0);
                }
            } else if (Build.VERSION.SDK_INT >= 18) {
                this.l.setRequestedOrientation(12);
            } else {
                this.l.setRequestedOrientation(1);
            }
            z = true;
            return true;
        } catch (Throwable th) {
            th.getMessage();
            return z;
        }
    }

    protected final String b() {
        d dVar;
        if (TextUtils.isEmpty(this.n) && (dVar = this.o) != null && !TextUtils.isEmpty(dVar.O())) {
            return this.o.O();
        }
        return this.n;
    }
}
