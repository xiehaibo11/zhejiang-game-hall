package com.tkay.network.mintegral;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.mbbid.out.BidManager;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import java.util.Map;
import org.json.JSONObject;

public class MintegralBidRequestInfo extends TYBidRequestInfo {
    String a;
    JSONObject b = new JSONObject();

    public MintegralBidRequestInfo(Context context, Map<String, Object> map, String str) {
        try {
            String string = map.get("appid").toString();
            String string2 = map.get("unitid").toString();
            this.a = BidManager.getBuyerUid(context);
            this.b.put("app_id", string);
            this.b.put("unit_id", string2);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BUYERUID, this.a);
            this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.NETWORK_SDK_VERSION, str);
        } catch (Throwable unused) {
        }
    }

    public void fillBannerData(Map<String, Object> map) {
        try {
            String string = map.get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE).toString();
            if (TextUtils.isEmpty(string)) {
                return;
            }
            String[] strArrSplit = string.split("x");
            if (strArrSplit.length == 2) {
                this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_WIDTH, Integer.parseInt(strArrSplit[0]));
                this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_HEIGHT, Integer.parseInt(strArrSplit[1]));
            }
        } catch (Throwable unused) {
        }
    }

    public void fillNativeExpressData(Map<String, Object> map, Map<String, Object> map2) {
        int i;
        try {
            if (TextUtils.equals(map.containsKey("unit_type") ? map.get("unit_type").toString() : "", "1")) {
                int i2 = 0;
                try {
                    i = Integer.parseInt(map2.get(TYAdConst.KEY.AD_WIDTH).toString());
                    try {
                        i2 = Integer.parseInt(map2.get(TYAdConst.KEY.AD_HEIGHT).toString());
                    } catch (Throwable th) {
                        th = th;
                        th.printStackTrace();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    i = 0;
                }
                if (i <= 0 || i2 <= 0) {
                    return;
                }
                this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_WIDTH, i);
                this.b.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_HEIGHT, i2);
            }
        } catch (Throwable th3) {
            th3.printStackTrace();
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
