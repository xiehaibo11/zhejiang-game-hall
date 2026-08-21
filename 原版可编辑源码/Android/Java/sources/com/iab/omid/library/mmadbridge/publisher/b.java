package com.iab.omid.library.mmadbridge.publisher;

import android.os.Handler;
import android.webkit.WebView;
import com.iab.omid.library.mmadbridge.adsession.AdSessionContext;
import com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource;
import com.iab.omid.library.mmadbridge.internal.g;
import com.iab.omid.library.mmadbridge.utils.c;
import com.iab.omid.library.mmadbridge.utils.f;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import org.json.JSONObject;

public class b extends AdSessionStatePublisher {
    private WebView f;
    private Long g = null;
    private final Map<String, VerificationScriptResource> h;
    private final String i;

    class a implements Runnable {
        private final WebView a;

        a() {
            this.a = b.this.f;
        }

        @Override
        public void run() {
            this.a.destroy();
        }
    }

    public b(Map<String, VerificationScriptResource> map, String str) {
        this.h = map;
        this.i = str;
    }

    @Override
    public void a(com.iab.omid.library.mmadbridge.adsession.a aVar, AdSessionContext adSessionContext) {
        JSONObject jSONObject = new JSONObject();
        Map<String, VerificationScriptResource> injectedResourcesMap = adSessionContext.getInjectedResourcesMap();
        for (String str : injectedResourcesMap.keySet()) {
            c.a(jSONObject, str, injectedResourcesMap.get(str).toJsonObject());
        }
        a(aVar, adSessionContext, jSONObject);
    }

    @Override
    public void b() {
        super.b();
        new Handler().postDelayed(new a(), Math.max(4000 - (this.g == null ? 4000L : TimeUnit.MILLISECONDS.convert(f.b() - this.g.longValue(), TimeUnit.NANOSECONDS)), 2000L));
        this.f = null;
    }

    @Override
    public void i() {
        super.i();
        j();
    }

    void j() {
        WebView webView = new WebView(com.iab.omid.library.mmadbridge.internal.f.b().a());
        this.f = webView;
        webView.getSettings().setJavaScriptEnabled(true);
        this.f.getSettings().setAllowContentAccess(false);
        a(this.f);
        g.a().c(this.f, this.i);
        for (String str : this.h.keySet()) {
            g.a().a(this.f, this.h.get(str).getResourceUrl().toExternalForm(), str);
        }
        this.g = Long.valueOf(f.b());
    }
}
