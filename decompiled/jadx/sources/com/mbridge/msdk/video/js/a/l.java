package com.mbridge.msdk.video.js.a;

import android.support.v4.app.NotificationCompat;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.tkay.expressad.foundation.d.r;
import org.json.JSONObject;

/* JADX INFO: compiled from: JSNotifyProxy.java */
/* JADX INFO: loaded from: classes3.dex */
public final class l extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WebView f4199a;

    public l(WebView webView) {
        this.f4199a = webView;
    }

    @Override // com.mbridge.msdk.video.js.a.e, com.mbridge.msdk.video.js.f
    public final void a(int i) {
        super.a(i);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("status", i);
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4199a, "onVideoStatusNotify", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.e, com.mbridge.msdk.video.js.f
    public final void a(int i, String str) {
        super.a(i, str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("type", i);
            jSONObject.put(AdvertisementOption.PRIORITY_VALID_TIME, str);
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4199a, "onJSClick", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.mbridge.msdk.video.js.a.e, com.mbridge.msdk.video.js.f
    public final void a(MBridgeVideoView.a aVar) {
        super.a(aVar);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NotificationCompat.CATEGORY_PROGRESS, a(aVar.f4365a, aVar.b));
            jSONObject.put("time", String.valueOf(aVar.f4365a));
            jSONObject.put(r.ag, String.valueOf(aVar.b));
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4199a, "onVideoProgressNotify", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private String a(int i, int i2) {
        if (i2 != 0) {
            try {
                return ae.a(Double.valueOf(i / i2)) + "";
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return i2 + "";
    }

    @Override // com.mbridge.msdk.video.js.a.e, com.mbridge.msdk.video.js.f
    public final void a(Object obj) {
        super.a(obj);
        com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4199a, "webviewshow", (obj == null || !(obj instanceof String)) ? "" : Base64.encodeToString(obj.toString().getBytes(), 2));
    }

    @Override // com.mbridge.msdk.video.js.a.e, com.mbridge.msdk.video.js.f
    public final void a(int i, int i2, int i3, int i4) {
        super.a(i, i2, i3, i4);
        try {
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObject2 = new JSONObject();
            String str = "landscape";
            if (i != 2 ? i2 != 2 : i2 == 1) {
                str = "portrait";
            }
            jSONObject2.put("orientation", str);
            jSONObject2.put("screen_width", i3);
            jSONObject2.put("screen_height", i4);
            jSONObject.put("data", jSONObject2);
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(this.f4199a, "showDataInfo", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }
}
