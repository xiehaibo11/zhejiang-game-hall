package com.tkay.core.api;

import com.tkay.core.api.TYAdConst;
import com.tkay.core.c.d;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.v;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYBidRequestInfo {
    public static final String BIDDING_REQUEST_TIMEOUT_TYPE = "Request Timeout.";
    public static final String BIDTOKEN_EMPTY_ERROR_TYPE = "Network BidToken or Custom bid info is Empty.";
    public static final String BIDTOKEN_OBTAIN_TIMEOUT_TYPE = "Request Token or Custom bid info Timeout.";
    public static final String INIT_ERROR_TYPE = "Network init error.";
    public static final String NO_ADAPTER_ERROR_TYPE = "There is no Network Adapter.";
    public static final String NO_SUPPORT_BIDDING_TYPE = "This network don't support header bidding in current TY's version.";
    public static final String RETURN_PARAMS_ERROR_TYPE = "The parameter is abnormal.";

    public abstract JSONObject toRequestJSONObject();

    public static void fillBaseCommonParams(JSONObject jSONObject, String str, d dVar, aj ajVar) {
        if (jSONObject != null) {
            try {
                jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.FORMAT, str);
                jSONObject.put("ad_source_id", ajVar.t());
                jSONObject.put("nw_firm_id", ajVar.c());
                jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BIDDING_FLOOR, ajVar.a(dVar));
                if (m.a().t()) {
                    jSONObject.put("test", 1);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public String getExtInfoForBuyerId(String str) {
        return v.a().f(str);
    }
}
