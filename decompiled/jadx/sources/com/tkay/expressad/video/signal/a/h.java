package com.tkay.expressad.video.signal.a;

import android.content.res.Configuration;
import android.util.Base64;
import android.webkit.WebView;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class h extends a {
    private static final String g = "orientation";
    private static final String h = "onSystemPause";
    private static final String i = "onSystemResume";
    private static final String j = "onSystemDestory";
    private static final String k = "onSystemBackPressed";
    private static final String l = "portrait";
    private static final String m = "landscape";
    private WebView n;
    private int o = 0;

    public h(WebView webView) {
        this.n = webView;
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void a() {
        super.a();
        this.o = 1;
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.n, "onSystemPause", "");
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void b() {
        super.b();
        this.o = 0;
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.n, "onSystemResume", "");
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void c() {
        super.c();
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.n, "onSystemDestory", "");
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void a(Configuration configuration) {
        super.a(configuration);
        try {
            JSONObject jSONObject = new JSONObject();
            if (configuration.orientation == 2) {
                jSONObject.put("orientation", m);
            } else {
                jSONObject.put("orientation", l);
            }
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.n, "orientation", strEncodeToString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void g() {
        super.g();
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.n, k, "");
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final void a(int i2) {
        super.a(i2);
        this.o = i2;
    }

    @Override // com.tkay.expressad.video.signal.a.a, com.tkay.expressad.video.signal.a
    public final int h() {
        return this.o;
    }
}
