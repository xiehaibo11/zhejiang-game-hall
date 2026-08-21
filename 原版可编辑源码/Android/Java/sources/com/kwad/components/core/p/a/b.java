package com.kwad.components.core.p.a;

import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bf;
import com.kwad.sdk.utils.t;
import java.util.Map;
import org.json.JSONObject;

public final class b implements com.kwad.sdk.core.b {
    public SceneImpl PN;
    public long PO = 0;
    public long PP = 0;
    public String sdkExtraData;

    public b(SceneImpl sceneImpl) {
        this.PN = sceneImpl;
        if (bf.getPosId() != 0) {
            this.PN.setPosId(bf.getPosId());
        }
        if (bf.Ka() != 0) {
            this.PN.setAdNum((int) bf.Ka());
        }
    }

    public final String av(String str) {
        Map<String, String> rewardCallbackExtraData;
        SceneImpl sceneImpl = this.PN;
        if (sceneImpl == null || (rewardCallbackExtraData = sceneImpl.getRewardCallbackExtraData()) == null || !rewardCallbackExtraData.containsKey(str)) {
            return null;
        }
        return rewardCallbackExtraData.get(str);
    }

    public final com.kwad.sdk.internal.api.a pJ() {
        SceneImpl sceneImpl = this.PN;
        if (sceneImpl == null) {
            return null;
        }
        return sceneImpl.mKsAdLabel;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject json = this.PN.toJson();
        t.putValue(json, "pageScene", this.PO);
        t.putValue(json, "subPageScene", this.PP);
        t.putValue(json, "sdkExtraData", this.sdkExtraData);
        String strAv = av("extraData");
        if (strAv != null) {
            t.putValue(json, "extraData", strAv);
        }
        return json;
    }
}
