package com.tkay.core.basead.ui.web;

import android.webkit.WebView;
import com.tkay.core.common.f.h;
import java.util.HashMap;
import java.util.Iterator;
import org.json.JSONObject;

public final class b {
    h a;
    JSONObject b;
    HashMap<String, Boolean> c = new HashMap<>(3);

    public b(h hVar) {
        JSONObject jSONObject;
        this.a = hVar;
        if (hVar != null) {
            try {
                jSONObject = new JSONObject(hVar.M());
            } catch (Throwable unused) {
                return;
            }
        } else {
            jSONObject = null;
        }
        this.b = jSONObject;
    }

    private void a(WebView webView, String str) {
        JSONObject jSONObject = this.b;
        if (jSONObject == null) {
            return;
        }
        try {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                if (next != null && str != null && str.contains(next) && this.c.get(next) == null) {
                    this.c.put(next, Boolean.TRUE);
                    webView.loadUrl(this.b.optString(next));
                }
            }
        } catch (Throwable unused) {
        }
    }
}
