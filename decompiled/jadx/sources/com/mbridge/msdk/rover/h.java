package com.mbridge.msdk.rover;

import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONObject;

/* JADX INFO: compiled from: RoverResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class h extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3964a = h.class.getSimpleName();

    public abstract void a(RoverCampaignUnit roverCampaignUnit);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        if (kVar != null) {
            a(RoverCampaignUnit.parseCampaignUnit(kVar.f3462a));
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3964a, "errorCode = " + aVar.f3429a);
    }
}
