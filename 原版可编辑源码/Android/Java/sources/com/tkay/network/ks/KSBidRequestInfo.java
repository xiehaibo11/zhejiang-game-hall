package com.tkay.network.ks;

import android.text.TextUtils;
import com.kwad.sdk.api.KsAdSDK;
import com.kwad.sdk.api.KsScene;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class KSBidRequestInfo extends TYBidRequestInfo {
    String a;
    JSONObject b = new JSONObject();
    int c;
    String d;
    String e;

    KSBidRequestInfo(Map<String, Object> map, Map<String, Object> map2) {
        try {
            String str = (String) map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.ACCOUNT_ID);
            String str2 = (String) map.get("position_id");
            if (map.containsKey("orientation")) {
                this.c = Integer.parseInt(map.get("orientation").toString());
            }
            if (map2 != null) {
                this.d = map2.get("user_id") != null ? map2.get("user_id").toString() : "";
                this.e = map2.get(TYAdConst.KEY.USER_CUSTOM_DATA) != null ? map2.get(TYAdConst.KEY.USER_CUSTOM_DATA).toString() : "";
            }
            if (!TextUtils.isEmpty(this.e) && this.e.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.e = this.e.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, String.valueOf(str2));
            }
            HashMap map3 = new HashMap();
            if (!TextUtils.isEmpty(this.d)) {
                map3.put("thirdUserId", this.d);
            }
            if (!TextUtils.isEmpty(this.e)) {
                map3.put("extraData", this.e);
            }
            KsScene.Builder builderScreenOrientation = new KsScene.Builder(Long.parseLong(str2)).adNum(1).screenOrientation(this.c == 2 ? 2 : 1);
            builderScreenOrientation = map3.isEmpty() ? builderScreenOrientation : builderScreenOrientation.rewardCallbackExtraData(map3);
            Object obj = map2.containsKey(TYAdConst.KEY.AD_WIDTH) ? map2.get(TYAdConst.KEY.AD_WIDTH) : null;
            Object obj2 = map2.containsKey(TYAdConst.KEY.AD_HEIGHT) ? map2.get(TYAdConst.KEY.AD_HEIGHT) : null;
            if (obj != null) {
                try {
                    int i = (int) Double.parseDouble(obj.toString());
                    if (i > 0) {
                        builderScreenOrientation.width(i);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
            if (obj2 != null) {
                try {
                    int i2 = (int) Double.parseDouble(obj2.toString());
                    if (i2 > 0) {
                        builderScreenOrientation.height(i2);
                    }
                } catch (Throwable th2) {
                    th2.printStackTrace();
                }
            }
            this.a = KsAdSDK.getLoadManager().getBidRequestTokenV2(builderScreenOrientation.build());
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.ACCOUNT_ID, str);
            this.b.put("unit_id", str2);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN, this.a);
        } catch (Throwable unused) {
        }
    }

    public boolean isValid() {
        return !TextUtils.isEmpty(this.a);
    }

    @Override
    public JSONObject toRequestJSONObject() {
        return this.b;
    }
}
