package com.kwad.components.core.t;

import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static volatile b Ri;

    private b() {
    }

    public static b qj() {
        if (Ri == null) {
            synchronized (b.class) {
                if (Ri == null) {
                    Ri = new b();
                }
            }
        }
        return Ri;
    }

    public final void a(final AdTemplate adTemplate, JSONObject jSONObject, com.kwad.sdk.core.report.j jVar) {
        if (((DevelopMangerComponents) com.kwad.sdk.components.c.f(DevelopMangerComponents.class)) != null) {
            com.kwad.sdk.core.e.c.d("AdEventHelper", "processAdImpress notImpression: false");
        }
        if (jVar != null) {
            jVar.a(adTemplate, null, null, null);
        }
        com.kwad.sdk.core.report.a.b(adTemplate, (JSONObject) null, jVar);
        com.kwad.sdk.utils.g.execute(new Runnable() { // from class: com.kwad.components.core.t.b.1
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.components.core.c.a aVarMg = com.kwad.components.core.c.a.mg();
                if (aVarMg != null) {
                    aVarMg.o(com.kwad.sdk.core.response.b.d.cq(adTemplate));
                }
            }
        });
        com.kwad.components.core.c.f.mu().J(adTemplate);
    }
}
