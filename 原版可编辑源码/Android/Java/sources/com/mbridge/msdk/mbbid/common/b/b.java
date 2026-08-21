package com.mbridge.msdk.mbbid.common.b;

import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbbid.common.BidResponsedEx;
import java.util.List;
import org.json.JSONObject;

public abstract class b extends f<JSONObject> {
    private static final String a = b.class.getSimpleName();

    public abstract void a(int i, String str);

    public abstract void a(BidResponsedEx bidResponsedEx);

    public b(String str, String str2) {
        this.unitId = str2;
        this.placementId = str;
    }

    @Override
    public void onSuccess(k<JSONObject> kVar) {
        super.onSuccess(kVar);
        if (kVar == null || kVar.c == null) {
            return;
        }
        List<com.mbridge.msdk.foundation.same.net.c.b> list = kVar.c.d;
        JSONObject jSONObject = kVar.a;
        int iOptInt = jSONObject.optInt("status");
        if (200 == iOptInt) {
            BidResponsedEx bidResponsedEx = BidResponsedEx.parseBidResponsedEx(jSONObject.optJSONObject("data"), this.unitId);
            if (bidResponsedEx != null) {
                a(bidResponsedEx);
                return;
            } else {
                a(iOptInt, jSONObject.optString("msg"));
                return;
            }
        }
        a(iOptInt, jSONObject.optString("msg"));
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(a, "errorCode = " + aVar.a);
        a(aVar.a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
