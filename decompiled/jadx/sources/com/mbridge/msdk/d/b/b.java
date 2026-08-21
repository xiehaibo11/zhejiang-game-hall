package com.mbridge.msdk.d.b;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: ShortCutsResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class b extends f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3179a = b.class.getSimpleName();
    private long b;

    public abstract void a(int i, String str, CampaignUnit campaignUnit);

    public abstract void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onPreExecute() {
        super.onPreExecute();
        this.b = System.currentTimeMillis();
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        CampaignUnit campaignUnit;
        if (kVar == null || kVar.c == null) {
            return;
        }
        List<com.mbridge.msdk.foundation.same.net.c.b> list = kVar.c.d;
        JSONObject jSONObject = kVar.f3462a;
        int iOptInt = jSONObject.optInt("status");
        if (1 == iOptInt) {
            calcRequestTime(System.currentTimeMillis());
            if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject.optString("version"))) {
                campaignUnit = CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"));
            } else {
                campaignUnit = CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"));
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
                a(iOptInt, msg, campaignUnit);
                return;
            }
        }
        a(iOptInt, jSONObject.optString("msg"), null);
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3179a, "errorCode = " + aVar.f3429a);
        a(aVar.f3429a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar), null);
    }
}
