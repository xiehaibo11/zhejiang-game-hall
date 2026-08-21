package com.mbridge.msdk.video.js.a;

import android.content.res.Configuration;
import android.util.Base64;
import android.webkit.WebView;
import com.tkay.expressad.splash.js.SplashJsUtils;
import org.json.JSONObject;

/* JADX INFO: compiled from: JSActivityProxy.java */
/* JADX INFO: loaded from: classes3.dex */
public final class h extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WebView f4194a;
    private int b = 0;

    public h(WebView webView) {
        this.f4194a = webView;
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void a() {
        super.a();
        this.b = 1;
        com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4194a, SplashJsUtils.f7131a, "");
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void b() {
        super.b();
        this.b = 0;
        com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4194a, SplashJsUtils.b, "");
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void c() {
        super.c();
        com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4194a, "onSystemDestory", "");
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void a(Configuration configuration) {
        super.a(configuration);
        try {
            JSONObject jSONObject = new JSONObject();
            if (configuration.orientation == 2) {
                jSONObject.put("orientation", "landscape");
            } else {
                jSONObject.put("orientation", "portrait");
            }
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4194a, "orientation", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void g() {
        super.g();
        com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4194a, "onSystemBackPressed", "");
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final void a(int i) {
        super.a(i);
        this.b = i;
    }

    @Override // com.mbridge.msdk.video.js.a.a, com.mbridge.msdk.video.js.a
    public final int h() {
        return this.b;
    }
}
