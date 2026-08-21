package com.mbridge.msdk.video.dynview.f.a;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.c.b;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: AbsMoreOfferResponseHandler.java */
/* JADX INFO: loaded from: classes3.dex */
public abstract class a extends f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4140a;
    private String b;

    public abstract void a(int i, String str);

    public abstract void a(List<b> list, CampaignUnit campaignUnit);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onPreExecute() {
        super.onPreExecute();
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        CampaignUnit campaignUnit;
        super.onSuccess(kVar);
        if (kVar == null || kVar.c == null || this.f4140a != 0) {
            return;
        }
        List<b> list = kVar.c.d;
        JSONObject jSONObject = kVar.f3462a;
        int iOptInt = jSONObject.optInt("status");
        if (1 == iOptInt) {
            calcRequestTime(System.currentTimeMillis());
            if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject.optString("version"))) {
                campaignUnit = CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"), this.b);
            } else {
                campaignUnit = CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"), this.b);
            }
            if (campaignUnit != null && campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                a(list, campaignUnit);
                saveRequestTime(campaignUnit.getAds().size());
                return;
            } else {
                String msg = campaignUnit != null ? campaignUnit.getMsg() : null;
                if (TextUtils.isEmpty(msg)) {
                    msg = jSONObject.optString("msg");
                }
                a(iOptInt, msg);
                return;
            }
        }
        a(iOptInt, jSONObject.optString("msg"));
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        a(aVar.f3429a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
