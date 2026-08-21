package com.mbridge.msdk.mbjscommon.windvane;

import android.text.TextUtils;
import android.webkit.ConsoleMessage;
import android.webkit.JsPromptResult;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: WindVaneWebViewChromeClient.java */
/* JADX INFO: loaded from: classes2.dex */
public final class l extends WebChromeClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WindVaneWebView f3740a;
    private d b;

    public l(WindVaneWebView windVaneWebView) {
        this.f3740a = windVaneWebView;
    }

    public final void a(d dVar) {
        this.b = dVar;
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
        z.d("H5_ENTRY", str2 + "");
        b jsBridge = this.f3740a.getJsBridge();
        if (jsBridge == null || str3 == null || !jsBridge.a(str3)) {
            return false;
        }
        jsBridge.b(str2);
        jsPromptResult.confirm("");
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public final void onProgressChanged(WebView webView, int i) {
        super.onProgressChanged(webView, i);
        d dVar = this.b;
        if (dVar != null) {
            dVar.b(webView, i);
        }
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onConsoleMessage(ConsoleMessage consoleMessage) {
        if (consoleMessage.messageLevel() != ConsoleMessage.MessageLevel.LOG) {
            return super.onConsoleMessage(consoleMessage);
        }
        b jsBridge = this.f3740a.getJsBridge();
        if (jsBridge != null && consoleMessage != null) {
            String strMessage = consoleMessage.message();
            if (TextUtils.isEmpty(strMessage) || !strMessage.startsWith("mv://")) {
                return false;
            }
            z.a("H5_ENTRY", "onConsoleMessage: message.length() = " + strMessage.length() + " " + strMessage);
            if (strMessage.contains("wv_hybrid:") && jsBridge.a("wv_hybrid:")) {
                String strSubstring = strMessage.substring(0, strMessage.lastIndexOf(" ") + 1);
                z.a("H5_ENTRY", "message = " + strSubstring);
                jsBridge.b(strSubstring);
                return true;
            }
        }
        return super.onConsoleMessage(consoleMessage);
    }
}
