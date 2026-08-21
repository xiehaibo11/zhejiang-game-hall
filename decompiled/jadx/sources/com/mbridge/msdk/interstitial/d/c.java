package com.mbridge.msdk.interstitial.d;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Frame;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: InterstitialResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class c extends f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3581a = c.class.getSimpleName();
    private int b;

    public abstract void a(List<Frame> list);

    public abstract void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit);

    public abstract void b(int i, String str);

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onPreExecute() {
        super.onPreExecute();
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
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
            JSONObject jSONObject = kVar.f3462a;
            z.d("", "content = " + jSONObject);
            int iOptInt = jSONObject.optInt("status");
            if (1 == iOptInt) {
                calcRequestTime(System.currentTimeMillis());
                if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject.optString("version"))) {
                    campaignUnit2 = CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"));
                } else {
                    campaignUnit2 = CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"));
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
            JSONObject jSONObject2 = kVar.f3462a;
            z.d("", "content frames = " + jSONObject2);
            int iOptInt2 = jSONObject2.optInt("status");
            if (1 == iOptInt2) {
                calcRequestTime(System.currentTimeMillis());
                if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject2.optString("version"))) {
                    campaignUnit = CampaignUnit.parseV5CampaignUnit(jSONObject2.optJSONObject("data"));
                } else {
                    campaignUnit = CampaignUnit.parseCampaignUnit(jSONObject2.optJSONObject("data"));
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

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3581a, "errorCode = " + aVar.f3429a);
        b(aVar.f3429a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
