package com.kwad.sdk.core.request.model;

import android.location.Location;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c implements com.kwad.sdk.core.b {
    private static c auk;
    private double aul;
    private double aum;

    public static c Cu() {
        c cVar = auk;
        if (cVar != null) {
            return cVar;
        }
        Location locationBU = au.bU(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext());
        if (locationBU != null) {
            c cVar2 = new c();
            auk = cVar2;
            cVar2.aul = locationBU.getLatitude();
            auk.aum = locationBU.getLongitude();
        }
        return auk;
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "latitude", this.aul);
        t.putValue(jSONObject, "longitude", this.aum);
        return jSONObject;
    }
}
