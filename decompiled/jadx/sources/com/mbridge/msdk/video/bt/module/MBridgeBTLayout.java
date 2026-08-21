package com.mbridge.msdk.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.webkit.WebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.bt.a.c;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeBTLayout extends BTBaseView {
    private WebView p;

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    public void init(Context context) {
    }

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    public void onDestory() {
    }

    public MBridgeBTLayout(Context context) {
        super(context);
    }

    public MBridgeBTLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public void setWebView(WebView webView) {
        this.p = webView;
    }

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        if (this.p != null) {
            try {
                if (this.b == null || !this.b.isDynamicView()) {
                    JSONObject jSONObject = new JSONObject();
                    if (configuration.orientation == 2) {
                        jSONObject.put("orientation", "landscape");
                    } else {
                        jSONObject.put("orientation", "portrait");
                    }
                    jSONObject.put("instanceId", this.d);
                    h.a().a(this.p, "orientation", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void onBackPressed() {
        if (this.p != null) {
            c.a().a(this.p, "onSystemBackPressed", this.d);
        }
    }

    public void broadcast(String str, JSONObject jSONObject) {
        if (this.p != null) {
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", n);
                jSONObject2.put("id", getInstanceId());
                jSONObject2.put("eventName", str);
                jSONObject2.put("data", jSONObject);
                h.a().a(this.p, "broadcast", Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception unused) {
                c.a().a(this.p, "broadcast", getInstanceId());
            }
        }
    }

    public void notifyEvent(String str) {
        WebView webView = this.p;
        if (webView != null) {
            a(webView, str, this.d);
        }
    }
}
