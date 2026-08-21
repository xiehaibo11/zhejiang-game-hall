package com.kwad.components.core.p;

import android.text.TextUtils;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.o;
import com.kwad.sdk.utils.s;
import com.kwad.sdk.utils.t;
import com.kwad.sdk.utils.y;
import java.util.Collection;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class a extends com.kwad.sdk.core.network.d {
    private static boolean PC = true;
    com.kwad.components.core.p.a.b Lj;
    private int PB;

    public a(com.kwad.components.core.p.a.a aVar) {
        this(aVar.Lj, aVar.PJ, aVar.PK, aVar.PM);
        this.PB = aVar.PL ? 1 : 0;
    }

    public a(com.kwad.components.core.p.a.b bVar) {
        this(bVar, null);
    }

    private a(com.kwad.components.core.p.a.b bVar, com.kwad.components.core.p.a.d dVar) {
        this(bVar, null, false, null);
    }

    public a(com.kwad.components.core.p.a.b bVar, List<String> list, boolean z, com.kwad.components.core.p.a.d dVar) {
        super(c(bVar), bVar.PN);
        putBody("timestamp", System.currentTimeMillis());
        this.Lj = bVar;
        com.kwad.sdk.internal.api.a aVarPJ = bVar.pJ();
        if (aVarPJ != null && !aVarPJ.FE()) {
            a(com.kwad.sdk.core.request.model.a.Cr(), aVarPJ);
        }
        JSONArray jSONArray = new JSONArray();
        t.putValue(jSONArray, bVar.toJson());
        putBody("impInfo", jSONArray);
        putBody("universePhotoInfo", dVar);
        int i = this.PB;
        if (i > 0) {
            putBody("calledUnionType", i);
        }
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        String strYP = TextUtils.isEmpty("") ? ((DevelopMangerComponents) com.kwad.sdk.components.c.f(DevelopMangerComponents.class)).yP() : "";
        if (!TextUtils.isEmpty(strYP)) {
            putBody("universeDebugParam", strYP);
        }
        String strD = d(bVar);
        if (!TextUtils.isEmpty(strD)) {
            putBody("sdkDebugReqInfo", strD);
        }
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        if (list != null) {
            putBody("preloadIdList", new JSONArray((Collection<Object>) list));
            putBody("preloadCheck", z);
        }
        putBody("appTag", y.Iy());
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        String strAv = this.Lj.av("thirdUserId");
        com.kwad.sdk.core.request.model.g gVarCy = com.kwad.sdk.core.request.model.g.Cy();
        if (strAv != null) {
            gVarCy.dC(strAv);
        }
        if (aVarPJ != null && !aVarPJ.FD()) {
            a(gVarCy, aVarPJ);
        }
        putBody("userInfo", gVarCy);
    }

    private static void a(com.kwad.sdk.core.request.model.g gVar, com.kwad.sdk.internal.api.a aVar) {
        if (aVar.ajr != 0) {
            gVar.ajr = aVar.ajr;
        }
        if (aVar.ajs != 0) {
            gVar.ajs = aVar.ajs;
        }
        if (TextUtils.isEmpty(aVar.ajt)) {
            return;
        }
        gVar.ajt = aVar.ajt;
    }

    private void a(JSONObject jSONObject, com.kwad.sdk.internal.api.a aVar) {
        JSONObject jSONObject2 = new JSONObject();
        if (!TextUtils.isEmpty(aVar.aju)) {
            t.putValue(jSONObject2, "prevTitle", aVar.aju);
        }
        if (!TextUtils.isEmpty(aVar.ajv)) {
            t.putValue(jSONObject2, "postTitle", aVar.ajv);
        }
        if (!TextUtils.isEmpty(aVar.ajw)) {
            t.putValue(jSONObject2, "historyTitle", aVar.ajw);
        }
        if (!TextUtils.isEmpty(aVar.ajx)) {
            t.putValue(jSONObject2, "channel", aVar.ajx);
        }
        t.putValue(jSONObject, "content", jSONObject2);
        putBody("appInfo", jSONObject);
    }

    private static int c(com.kwad.components.core.p.a.b bVar) {
        try {
            return bVar.PN.getScreenOrientation();
        } catch (Throwable unused) {
            return 0;
        }
    }

    private static String d(com.kwad.components.core.p.a.b bVar) {
        com.kwad.sdk.service.a.e eVar;
        if (PC && (eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)) != null) {
            try {
                return (String) s.h(Class.forName("com.kwad.devTools.PosConfigFetcher").newInstance(), "getConfigParamByPosId", Long.valueOf(bVar.PN.getPosId()), eVar.getContext());
            } catch (Exception unused) {
                PC = false;
            }
        }
        return "";
    }

    public final void aC(int i) {
        this.PB = i;
    }

    public final int getAdNum() {
        return this.Lj.PN.getAdNum();
    }

    @Override
    public SceneImpl getScene() {
        com.kwad.components.core.p.a.b bVar = this.Lj;
        if (bVar != null) {
            return bVar.PN;
        }
        return null;
    }

    @Override
    public String getUrl() {
        return com.kwad.sdk.h.xa();
    }

    @Override
    public boolean needAppList() {
        return true;
    }

    @Override
    public void onCreate() {
        o.bE(true);
        super.onCreate();
    }
}
