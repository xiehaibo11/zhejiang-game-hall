package com.tkay.expressad.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.webkit.WebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.video.bt.a.c;
import org.json.JSONObject;

public class TkayBTLayout extends BTBaseView {
    private static final String p = "portrait";
    private static final String q = "landscape";
    private WebView r;

    @Override
    public void init(Context context) {
    }

    @Override
    public void onDestory() {
    }

    public TkayBTLayout(Context context) {
        super(context);
    }

    public TkayBTLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public void setWebView(WebView webView) {
        this.r = webView;
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        if (this.r != null) {
            try {
                if (this.b == null || !this.b.j()) {
                    JSONObject jSONObject = new JSONObject();
                    if (configuration.orientation == 2) {
                        jSONObject.put("orientation", q);
                    } else {
                        jSONObject.put("orientation", p);
                    }
                    jSONObject.put("instanceId", this.d);
                    String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
                    j.a();
                    j.a(this.r, "orientation", strEncodeToString);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void onBackPressed() {
        if (this.r != null) {
            c.a();
            c.a(this.r, "onSystemBackPressed", this.d);
        }
    }

    public void broadcast(String str, JSONObject jSONObject) {
        if (this.r != null) {
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", n);
                jSONObject2.put("id", getInstanceId());
                jSONObject2.put("eventName", str);
                jSONObject2.put("data", jSONObject);
                j.a();
                j.a(this.r, "broadcast", Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception unused) {
                c.a();
                c.a(this.r, "broadcast", getInstanceId());
            }
        }
    }

    public void notifyEvent(String str) {
        WebView webView = this.r;
        if (webView != null) {
            a(webView, str, this.d);
        }
    }
}
