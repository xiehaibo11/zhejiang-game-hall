package com.tkay.expressad.atsignalcommon.windvane;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class j implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static j f6444a = new j();

    private j() {
    }

    public static j a() {
        return f6444a;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void a(Object obj, String str, String str2) {
        String str3;
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str2)) {
                str3 = String.format("javascript:window.WindVane.fireEvent('%s', '');", str);
            } else {
                str3 = String.format("javascript:window.WindVane.fireEvent('%s','%s');", str, n.c(str2));
            }
            if (aVar.f6439a == null || aVar.f6439a.isDestroyed()) {
                return;
            }
            try {
                aVar.f6439a.loadUrl(str3);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(WebView webView, String str, String str2) {
        String str3;
        if (TextUtils.isEmpty(str2)) {
            str3 = String.format("javascript:window.WindVane.fireEvent('%s', '');", str);
        } else {
            str3 = String.format("javascript:window.WindVane.fireEvent('%s','%s');", str, n.c(str2));
        }
        if (webView != null) {
            if ((webView instanceof WindVaneWebView) && ((WindVaneWebView) webView).isDestroyed()) {
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

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void a(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            String str2 = TextUtils.isEmpty(str) ? String.format("javascript:window.WindVane.onSuccess(%s,'');", aVar.g) : String.format("javascript:window.WindVane.onSuccess(%s,'%s');", aVar.g, n.c(str));
            if (aVar.f6439a == null || aVar.f6439a.isDestroyed()) {
                return;
            }
            try {
                aVar.f6439a.loadUrl(str2);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.b
    public final void b(Object obj, String str) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (TextUtils.isEmpty(str)) {
                String.format("javascript:window.WindVane.onFailure(%s,'');", aVar.g);
            } else {
                str = n.c(str);
            }
            String str2 = String.format("javascript:window.WindVane.onFailure(%s,'%s');", aVar.g, str);
            if (aVar.f6439a == null || aVar.f6439a.isDestroyed()) {
                return;
            }
            try {
                aVar.f6439a.loadUrl(str2);
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public static void a(WebView webView) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("api_version", "1.0.0");
            a(webView, com.tkay.expressad.atsignalcommon.base.e.j, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception unused) {
            a(webView, com.tkay.expressad.atsignalcommon.base.e.j, "");
        } catch (Throwable unused2) {
            a(webView, com.tkay.expressad.atsignalcommon.base.e.j, "");
        }
    }

    public static void b(WebView webView) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("api_version", "1.0.0");
            a(webView, "onJSBridgeConnected", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception unused) {
            a(webView, "onJSBridgeConnected", "");
        } catch (Throwable unused2) {
            a(webView, "onJSBridgeConnected", "");
        }
    }
}
