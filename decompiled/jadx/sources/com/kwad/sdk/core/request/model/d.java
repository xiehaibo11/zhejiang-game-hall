package com.kwad.sdk.core.request.model;

import android.content.Context;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.at;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements com.kwad.sdk.core.b {
    private String aun;
    private int auo;
    private int aup;

    public static d Cv() {
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        d dVar = new d();
        dVar.aun = au.cw(context);
        dVar.auo = ag.cj(context);
        dVar.aup = ag.d(context, au.cz(context), at.Jg());
        return dVar;
    }

    public static d Cw() {
        d dVar = new d();
        dVar.auo = ag.cj(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext());
        return dVar;
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "mac", this.aun);
        t.putValue(jSONObject, "connectionType", this.auo);
        t.putValue(jSONObject, "operatorType", this.aup);
        return jSONObject;
    }
}
