package com.tkay.expressad.atsignalcommon.windvane;

import android.text.TextUtils;
import android.webkit.ConsoleMessage;
import android.webkit.JsPromptResult;
import android.webkit.WebChromeClient;
import android.webkit.WebView;

public class o extends WebChromeClient {
    private static final String b = "H5_ENTRY";
    WindVaneWebView a;
    private e c;

    public o(WindVaneWebView windVaneWebView) {
        this.a = windVaneWebView;
    }

    public final void a(e eVar) {
        this.c = eVar;
    }

    @Override
    public boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
        new StringBuilder().append(str2);
        d signalCommunication = this.a.getSignalCommunication();
        if (signalCommunication == null || str3 == null || !signalCommunication.a(str3)) {
            return false;
        }
        signalCommunication.c(str2);
        jsPromptResult.confirm("");
        return true;
    }

    @Override
    public void onProgressChanged(WebView webView, int i) {
        super.onProgressChanged(webView, i);
        e eVar = this.c;
        if (eVar != null) {
            eVar.onProgressChanged(webView, i);
        }
    }

    @Override
    public boolean onConsoleMessage(ConsoleMessage consoleMessage) {
        if (consoleMessage.messageLevel() != ConsoleMessage.MessageLevel.LOG) {
            return super.onConsoleMessage(consoleMessage);
        }
        d signalCommunication = this.a.getSignalCommunication();
        if (signalCommunication != null && consoleMessage != null) {
            String strMessage = consoleMessage.message();
            if (TextUtils.isEmpty(strMessage) || !strMessage.startsWith("mv://")) {
                return false;
            }
            StringBuilder sb = new StringBuilder("onConsoleMessage: message.length() = ");
            sb.append(strMessage.length());
            sb.append(" ");
            sb.append(strMessage);
            if (strMessage.contains("wv_hybrid:") && signalCommunication.a("wv_hybrid:")) {
                signalCommunication.c(strMessage.substring(0, strMessage.lastIndexOf(" ") + 1));
                return true;
            }
        }
        return super.onConsoleMessage(consoleMessage);
    }
}
