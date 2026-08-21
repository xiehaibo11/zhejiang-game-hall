package com.mbridge.msdk.rover;

import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONObject;

public abstract class h extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {
    private static final String a = h.class.getSimpleName();

    public abstract void a(RoverCampaignUnit roverCampaignUnit);

    @Override
    public void onSuccess(k<JSONObject> kVar) {
        if (kVar != null) {
            a(RoverCampaignUnit.parseCampaignUnit(kVar.a));
        }
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(a, "errorCode = " + aVar.a);
    }
}
