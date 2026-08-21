package com.kwad.components.core.webview;

import android.text.TextUtils;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;
import com.kwad.components.core.webview.jshandler.q;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.core.webview.c.d;
import com.kwad.sdk.core.webview.c.e;
import com.kwad.sdk.core.webview.c.f;
import com.kwad.sdk.utils.bp;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private WebView Ms;
    private final Map<String, com.kwad.sdk.core.webview.c.a> Tb = new ConcurrentHashMap(32);
    private com.kwad.sdk.core.webview.c.a Tc = new d();
    private boolean Td;

    public a(WebView webView) {
        this.Ms = webView;
        ri();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h(String str, String str2) {
        String str3;
        if (this.Td) {
            str3 = "callJS after destroy jsInterface, " + str2;
        } else {
            if (!TextUtils.isEmpty(str)) {
                com.kwad.sdk.core.e.c.d("KSAdJSBridge", "callJS callback:+ " + str + "--params: " + str2);
                WebView webView = this.Ms;
                if (webView == null) {
                    return;
                }
                bp.a(webView, str, str2);
                return;
            }
            str3 = "callJS callback is empty";
        }
        com.kwad.sdk.core.e.c.d("KSAdJSBridge", str3);
    }

    private void ri() {
        a(new com.kwad.sdk.core.webview.d.a());
        a(new com.kwad.sdk.core.webview.d.b());
        a(new q());
    }

    public final void a(com.kwad.sdk.core.webview.c.a aVar) {
        if (aVar == null || TextUtils.isEmpty(aVar.getKey())) {
            com.kwad.sdk.core.e.c.e("KSAdJSBridge", "handler and handler'key cannot be null");
            return;
        }
        if (this.Tb.containsKey(aVar.getKey())) {
            com.kwad.sdk.core.e.c.e("KSAdJSBridge", "cannot register handler again, handler: " + aVar.getKey());
        }
        this.Tb.put(aVar.getKey(), aVar);
    }

    public final void b(com.kwad.sdk.core.webview.c.a aVar) {
        if (TextUtils.isEmpty(aVar.getKey())) {
            com.kwad.sdk.core.e.c.e("KSAdJSBridge", "handler and handler'key cannot be null");
        } else {
            this.Tb.put(aVar.getKey(), aVar);
        }
    }

    @JavascriptInterface
    public final void callAdBridge(String str) {
        com.kwad.sdk.core.e.c.d("KSAdJSBridge", "callAdBridge ==" + str);
        try {
            final com.kwad.sdk.core.webview.c.b bVar = new com.kwad.sdk.core.webview.c.b();
            bVar.parseJson(new JSONObject(str));
            com.kwad.sdk.core.webview.c.a aVar = this.Tb.get(bVar.ayT);
            if (aVar == null) {
                aVar = this.Tc;
            }
            if (this.Ms != null && (this.Ms instanceof KsAdWebView)) {
                KsAdWebView ksAdWebView = (KsAdWebView) this.Ms;
                com.kwad.sdk.core.webview.b.c.b.a(ksAdWebView.getLoadUrl(), ksAdWebView.getUniqueId(), bVar.ayT, bVar.data);
            }
            if (aVar != null) {
                aVar.a(bVar.data, !TextUtils.isEmpty(bVar.ayU) ? new com.kwad.sdk.core.webview.c.c() { // from class: com.kwad.components.core.webview.a.1
                    @Override // com.kwad.sdk.core.webview.c.c
                    public final void a(com.kwad.sdk.core.b bVar2) {
                        a.this.h(bVar.ayU, new f(bVar2).toJson().toString());
                    }

                    @Override // com.kwad.sdk.core.webview.c.c
                    public final void onError(int i, String str2) {
                        a.this.h(bVar.ayU, new e(i, str2).toJson().toString());
                    }
                } : new com.kwad.sdk.core.webview.c.c() { // from class: com.kwad.components.core.webview.a.2
                    @Override // com.kwad.sdk.core.webview.c.c
                    public final void a(com.kwad.sdk.core.b bVar2) {
                    }

                    @Override // com.kwad.sdk.core.webview.c.c
                    public final void onError(int i, String str2) {
                    }
                });
            } else {
                com.kwad.sdk.core.e.c.e("KSAdJSBridge", "bridgeHandler is null");
            }
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.core.e.c.e("KSAdJSBridge", "callAdBridge JSONException:" + e);
        }
    }

    public final void destroy() {
        com.kwad.sdk.core.e.c.i("KSAdJSBridge", "destroy jsInterface");
        Iterator<Map.Entry<String, com.kwad.sdk.core.webview.c.a>> it = this.Tb.entrySet().iterator();
        while (it.hasNext()) {
            com.kwad.sdk.core.webview.c.a value = it.next().getValue();
            if (value != null) {
                value.onDestroy();
            }
        }
        this.Td = true;
    }
}
