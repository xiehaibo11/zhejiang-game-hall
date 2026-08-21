package com.mbridge.msdk.advanced.e;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Frame;
import java.util.List;
import org.json.JSONObject;

public abstract class b extends f<JSONObject> {
    private static final String a = b.class.getSimpleName();
    private int b;
    private String c;

    public abstract void a(List<Frame> list);

    public abstract void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit);

    public abstract void b(int i, String str);

    public final void a(String str) {
        this.c = str;
    }

    @Override
    public void onPreExecute() {
        super.onPreExecute();
    }

    @Override
    public void onSuccess(k<JSONObject> kVar) {
        CampaignUnit campaignUnit;
        String msg;
        CampaignUnit campaignUnit2;
        super.onSuccess(kVar);
        if (kVar == null || kVar.c == null) {
            return;
        }
        int i = this.b;
        if (i == 0) {
            List<com.mbridge.msdk.foundation.same.net.c.b> list = kVar.c.d;
            JSONObject jSONObject = kVar.a;
            int iOptInt = jSONObject.optInt("status");
            if (1 == iOptInt) {
                calcRequestTime(System.currentTimeMillis());
                if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject.optString("version"))) {
                    campaignUnit2 = CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"), this.c);
                } else {
                    campaignUnit2 = CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"), this.c);
                }
                if (campaignUnit2 != null && campaignUnit2.getAds() != null && campaignUnit2.getAds().size() > 0) {
                    a(list, campaignUnit2);
                    saveRequestTime(campaignUnit2.getAds().size());
                    return;
                } else {
                    msg = campaignUnit2 != null ? campaignUnit2.getMsg() : null;
                    if (TextUtils.isEmpty(msg)) {
                        msg = jSONObject.optString("msg");
                    }
                    b(iOptInt, msg);
                    return;
                }
            }
            b(iOptInt, jSONObject.optString("msg"));
            return;
        }
        if (i == 1) {
            List<com.mbridge.msdk.foundation.same.net.c.b> list2 = kVar.c.d;
            JSONObject jSONObject2 = kVar.a;
            int iOptInt2 = jSONObject2.optInt("status");
            if (1 == iOptInt2) {
                calcRequestTime(System.currentTimeMillis());
                if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject2.optString("version"))) {
                    campaignUnit = CampaignUnit.parseV5CampaignUnit(jSONObject2.optJSONObject("data"), this.c);
                } else {
                    campaignUnit = CampaignUnit.parseCampaignUnit(jSONObject2.optJSONObject("data"), this.c);
                }
                if (campaignUnit != null && campaignUnit.getListFrames() != null && campaignUnit.getListFrames().size() > 0) {
                    List<Frame> listFrames = campaignUnit.getListFrames();
                    a(listFrames);
                    saveRequestTime(listFrames.size());
                    return;
                } else {
                    msg = campaignUnit != null ? campaignUnit.getMsg() : null;
                    if (TextUtils.isEmpty(msg)) {
                        msg = jSONObject2.optString("msg");
                    }
                    b(iOptInt2, msg);
                    return;
                }
            }
            b(iOptInt2, jSONObject2.optString("msg"));
        }
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(a, "errorCode = " + aVar.a);
        b(aVar.a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
