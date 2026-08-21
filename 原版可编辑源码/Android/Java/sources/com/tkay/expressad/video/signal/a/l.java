package com.tkay.expressad.video.signal.a;

import android.support.v4.app.NotificationCompat;
import android.util.Base64;
import android.webkit.WebView;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.module.TkayVideoView;
import org.json.JSONObject;

public final class l extends e {
    private static final String n = "onVideoStatusNotify";
    private static final String o = "onJSClick";
    private static final String p = "onVideoProgressNotify";
    private static final String q = "webviewshow";
    private static final String r = "showDataInfo";
    private static final String s = "portrait";
    private static final String t = "landscape";
    private WebView u;

    public l(WebView webView) {
        this.u = webView;
    }

    @Override
    public final void a() {
        super.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.u);
    }

    @Override
    public final void a(int i) {
        super.a(i);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("status", i);
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.u, n, strEncodeToString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public final void a(int i, String str) {
        super.a(i, str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("type", i);
            jSONObject.put(AdvertisementOption.PRIORITY_VALID_TIME, str);
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.u, o, strEncodeToString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public final void a(TkayVideoView.a aVar) {
        super.a(aVar);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NotificationCompat.CATEGORY_PROGRESS, a(aVar.a, aVar.b));
            jSONObject.put("time", String.valueOf(aVar.a));
            jSONObject.put(r.ag, String.valueOf(aVar.b));
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.u, p, strEncodeToString);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static String a(int i, int i2) {
        if (i2 != 0) {
            double d = i / i2;
            try {
                StringBuilder sb = new StringBuilder();
                sb.append(t.a(Double.valueOf(d)));
                return sb.toString();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return String.valueOf(i2);
    }

    @Override
    public final void a(Object obj) {
        super.a(obj);
        String strEncodeToString = (obj == null || !(obj instanceof String)) ? "" : Base64.encodeToString(obj.toString().getBytes(), 2);
        com.tkay.expressad.atsignalcommon.windvane.j.a();
        com.tkay.expressad.atsignalcommon.windvane.j.a(this.u, q, strEncodeToString);
    }

    @Override
    public final void a(int i, int i2, int i3, int i4) {
        super.a(i, i2, i3, i4);
        try {
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObject2 = new JSONObject();
            String str = t;
            if (i != 2 ? i2 != 2 : i2 == 1) {
                str = s;
            }
            jSONObject2.put("orientation", str);
            jSONObject2.put("screen_width", i3);
            jSONObject2.put("screen_height", i4);
            jSONObject.put("data", jSONObject2);
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.u, r, strEncodeToString);
        } catch (Exception e) {
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
    }
}
