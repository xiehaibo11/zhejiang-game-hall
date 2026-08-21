package com.tkay.network.sigmob;

import android.text.TextUtils;
import com.sigmob.windad.WindAds;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.common.c.l;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class SigmobBidRequestInfo extends TYBidRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7679a;
    JSONObject b = new JSONObject();

    SigmobBidRequestInfo(Map<String, Object> map) {
        try {
            String string = map.get("app_id").toString();
            String string2 = map.get("app_key").toString();
            String string3 = map.get(l.a.c).toString();
            this.f7679a = WindAds.sharedAds().getSDKToken();
            this.b.put("unit_id", string3);
            this.b.put("app_id", string);
            this.b.put("app_key", string2);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.NETWORK_SDK_VERSION, SigmobTYInitManager.getInstance().getNetworkVersion());
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BUYERUID, this.f7679a);
        } catch (Throwable unused) {
        }
    }

    public boolean isValid() {
        return !TextUtils.isEmpty(this.f7679a);
    }

    @Override // com.tkay.core.api.TYBidRequestInfo
    public JSONObject toRequestJSONObject() {
        return this.b;
    }
}
