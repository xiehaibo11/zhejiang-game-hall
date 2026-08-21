package com.tkay.expressad.mbbanner.a.a;

import android.util.Base64;
import android.webkit.WebView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6973a = "BannerCallJS";

    public static void a(WebView webView) {
        j.a();
        j.b(webView);
    }

    public static void a(WebView webView, float f, float f2) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("startX", f);
            jSONObject.put("startY", f2);
            jSONObject.put("scale", t.c(m.a().f()));
            String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
            j.a();
            j.a(webView, "webviewshow", strEncodeToString);
        } catch (Throwable unused) {
        }
    }

    private static void a(WebView webView, int i, int i2) {
        try {
            CallMraidJS.getInstance().fireSizeChangeEvent(webView, i, i2);
        } catch (Throwable unused) {
        }
    }

    public static void a(WindVaneWebView windVaneWebView, boolean z) {
        try {
            CallMraidJS.getInstance().fireSetIsViewable(windVaneWebView, z ? "true" : "false");
        } catch (Throwable unused) {
        }
    }

    public static void a(WebView webView, int i, int i2, int i3, int i4) {
        try {
            int i5 = m.a().f().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i5 == 2 ? "landscape" : i5 == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fE = k.e(m.a().f());
            float f = k.f(m.a().f());
            HashMap mapG = k.g(m.a().f());
            int iIntValue = ((Integer) mapG.get("width")).intValue();
            int iIntValue2 = ((Integer) mapG.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.f6428a, CallMraidJS.k);
            map.put(CallMraidJS.b, "default");
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            float f2 = i;
            float f3 = i2;
            float f4 = i3;
            float f5 = i4;
            CallMraidJS.getInstance().fireSetDefaultPosition(webView, f2, f3, f4, f5);
            CallMraidJS.getInstance().fireSetCurrentPosition(webView, f2, f3, f4, f5);
            CallMraidJS.getInstance().fireSetScreenSize(webView, fE, f);
            CallMraidJS.getInstance().fireSetMaxSize(webView, iIntValue, iIntValue2);
            CallMraidJS.getInstance().fireChangeEventForPropertys(webView, map);
            CallMraidJS.getInstance().fireReadyEvent(webView);
        } catch (Throwable unused) {
        }
    }
}
