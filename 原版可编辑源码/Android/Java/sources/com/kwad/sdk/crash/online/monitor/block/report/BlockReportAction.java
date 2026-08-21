package com.kwad.sdk.crash.online.monitor.block.report;

import com.kwad.sdk.core.report.g;
import com.kwad.sdk.utils.t;
import java.io.Serializable;
import java.util.UUID;
import org.json.JSONObject;

public class BlockReportAction extends g implements Serializable {
    private static final long serialVersionUID = 8432448382850235426L;
    public String msg;

    public BlockReportAction(String str) {
        this.actionId = UUID.randomUUID().toString();
        this.msg = str;
    }

    public BlockReportAction(JSONObject jSONObject) {
        parseJson(jSONObject);
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        this.actionId = jSONObject.optString("actionId");
        this.msg = jSONObject.optString("msg");
    }

    @Override
    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "actionId", this.actionId);
        t.putValue(jSONObject, "msg", this.msg);
        return jSONObject;
    }
}
