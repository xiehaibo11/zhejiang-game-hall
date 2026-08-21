package com.mbridge.msdk.mbjscommon.windvane;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import org.json.JSONObject;

/* JADX INFO: compiled from: WindVaneCallJs.java */
/* JADX INFO: loaded from: classes2.dex */
public final class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static h f3737a = new h();

    private h() {
    }

    public static h a() {
        return f3737a;
    }

    public final void a(Object obj, String str, String str2) {
        String str3;
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str2)) {
                str3 = String.format("javascript:window.WindVane.fireEvent('%s', '');", str);
            } else {
                str3 = String.format("javascript:window.WindVane.fireEvent('%s','%s');", str, k.c(str2));
            }
            if (aVar.f3733a == null || aVar.f3733a.isDestoryed()) {
                return;
            }
            try {
                aVar.f3733a.loadUrl(str3);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public final void a(WebView webView, String str, String str2) {
        String str3;
        if (TextUtils.isEmpty(str2)) {
            str3 = String.format("javascript:window.WindVane.fireEvent('%s', '');", str);
        } else {
            str3 = String.format("javascript:window.WindVane.fireEvent('%s','%s');", str, k.c(str2));
        }
        if (webView != null) {
            if ((webView instanceof WindVaneWebView) && ((WindVaneWebView) webView).isDestoryed()) {
                return;
            }
            try {
                webView.loadUrl(str3);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.WindVane.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.WindVane.onSuccess(%s,'%s');", aVar.g, k.c(str));
            if (aVar.f3733a == null || aVar.f3733a.isDestoryed()) {
                return;
            }
            try {
                aVar.f3733a.loadUrl(str2);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public final void b(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str)) {
                String.format("javascript:window.WindVane.onFailure(%s,'');", aVar.g);
            } else {
                str = k.c(str);
            }
            String str2 = String.format("javascript:window.WindVane.onFailure(%s,'%s');", aVar.g, str);
            if (aVar.f3733a == null || aVar.f3733a.isDestoryed()) {
                return;
            }
            try {
                aVar.f3733a.loadUrl(str2);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public final void a(WebView webView) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("api_version", "1.0.0");
            f3737a.a(webView, "onJSBridgeConnected", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception unused) {
            f3737a.a(webView, "onJSBridgeConnected", "");
        } catch (Throwable unused2) {
            f3737a.a(webView, "onJSBridgeConnected", "");
        }
    }
}
