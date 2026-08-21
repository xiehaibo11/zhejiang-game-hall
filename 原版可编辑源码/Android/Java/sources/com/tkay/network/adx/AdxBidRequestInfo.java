package com.tkay.network.adx;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.a.b;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public class AdxBidRequestInfo extends TYBidRequestInfo {
    JSONObject a;

    public AdxBidRequestInfo(Context context, String str) {
        JSONObject jSONObject = new JSONObject();
        this.a = jSONObject;
        try {
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SUPPORT_TEMPLATE_VERSION, 1);
            d dVarB = e.a(context).b(str);
            if (dVarB != null) {
                int iAv = dVarB.av();
                if (iAv > 0) {
                    List<com.tkay.core.common.a.d> listA = b.a().a(iAv);
                    if (listA.size() > 0) {
                        this.a.put(d.a.P, a(listA));
                    }
                }
                int iAu = dVarB.au();
                if (iAu > 0) {
                    List<com.tkay.core.common.a.d> listB = b.a().b(iAu);
                    if (listB.size() > 0) {
                        this.a.put(d.a.O, a(listB));
                    }
                }
            }
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
            int i = Integer.parseInt(strArrSplit[0]);
            int i2 = Integer.parseInt(strArrSplit[1]);
            this.a.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_WIDTH, i);
            this.a.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.AD_HEIGHT, i2);
            this.a.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.ADP_ACCEPT_TYPE, new JSONArray(TYAdConst.AD_SUPPORT_TYPE_ARRAY));
        } catch (Throwable unused) {
        }
    }

    public void fillSplashData() {
        try {
            this.a.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.GET_OFFER, 2);
            fillAdAcceptType();
        } catch (Throwable unused) {
        }
    }

    public void fillInterstitial(Map<String, Object> map) {
        try {
            if (map.containsKey("unit_type")) {
                String stringFromMap = TYInitMediation.getStringFromMap(map, "unit_type");
                if (!TextUtils.isEmpty(stringFromMap)) {
                    this.a.put("unit_type", Integer.parseInt(stringFromMap));
                }
                if (TextUtils.equals(TYInitMediation.getStringFromMap(map, "inter_type", "1"), "1")) {
                    fillAdAcceptType();
                }
            }
        } catch (Throwable unused) {
        }
    }

    private static JSONObject a(List<com.tkay.core.common.a.d> list) {
        JSONObject jSONObject = new JSONObject();
        try {
            HashMap map = new HashMap();
            for (com.tkay.core.common.a.d dVar : list) {
                List arrayList = (List) map.get(dVar.a());
                if (arrayList == null) {
                    arrayList = new ArrayList();
                    map.put(dVar.a(), arrayList);
                }
                arrayList.add(dVar.b());
            }
            for (Map.Entry entry : map.entrySet()) {
                jSONObject.put((String) entry.getKey(), new JSONArray((Collection<Object>) entry.getValue()));
            }
        } catch (Throwable unused) {
        }
        return jSONObject;
    }

    public void fillAdAcceptType() {
        try {
            if (this.a != null) {
                this.a.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.ADP_ACCEPT_TYPE, new JSONArray(TYAdConst.AD_SUPPORT_TYPE_ARRAY));
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public JSONObject toRequestJSONObject() {
        return this.a;
    }
}
