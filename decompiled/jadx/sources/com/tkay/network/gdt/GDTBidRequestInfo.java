package com.tkay.network.gdt;

import android.text.TextUtils;
import com.qq.e.comm.managers.GDTAdSdk;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class GDTBidRequestInfo extends TYBidRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7539a;
    JSONObject b = new JSONObject();

    GDTBidRequestInfo(Map<String, Object> map) {
        try {
            String string = map.get("app_id").toString();
            String string2 = map.get("unit_id").toString();
            HashMap map2 = new HashMap();
            GDTTYInitManager.getInstance();
            GDTTYInitManager.a(map2, map);
            this.f7539a = GDTAdSdk.getGDTAdManger().getBuyerId(map2);
            this.b.put("app_id", string);
            this.b.put("unit_id", string2);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BUYERUID, this.f7539a);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, GDTAdSdk.getGDTAdManger().getSDKInfo(string2));
        } catch (Throwable unused) {
        }
    }

    public boolean isValid() {
        return !TextUtils.isEmpty(this.f7539a);
    }

    @Override // com.tkay.core.api.TYBidRequestInfo
    public JSONObject toRequestJSONObject() {
        return this.b;
    }
}
