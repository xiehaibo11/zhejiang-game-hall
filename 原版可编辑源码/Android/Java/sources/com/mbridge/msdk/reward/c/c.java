package com.mbridge.msdk.reward.c;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Frame;
import java.util.List;
import org.json.JSONObject;

public abstract class c extends f<JSONObject> {
    private static final String a = c.class.getSimpleName();
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
        super.onSuccess(kVar);
        if (kVar == null || kVar.c == null) {
            return;
        }
        int i = this.b;
        if (i == 0) {
            final List<com.mbridge.msdk.foundation.same.net.c.b> list = kVar.c.d;
            final JSONObject jSONObject = kVar.a;
            final int iOptInt = jSONObject.optInt("status");
            if (1 == iOptInt) {
                calcRequestTime(System.currentTimeMillis());
                final String strOptString = jSONObject.optString("version");
                com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                    @Override
                    public final void run() {
                        final CampaignUnit v5CampaignUnit = com.tkay.expressad.foundation.g.a.i.equals(strOptString) ? CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"), c.this.c) : CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"), c.this.c);
                        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                            @Override
                            public final void run() {
                                CampaignUnit campaignUnit2 = v5CampaignUnit;
                                if (campaignUnit2 != null && campaignUnit2.getAds() != null && v5CampaignUnit.getAds().size() > 0) {
                                    c.this.a(list, v5CampaignUnit);
                                    c.this.saveRequestTime(v5CampaignUnit.getAds().size());
                                    return;
                                }
                                CampaignUnit campaignUnit3 = v5CampaignUnit;
                                String msg = campaignUnit3 != null ? campaignUnit3.getMsg() : null;
                                if (TextUtils.isEmpty(msg)) {
                                    msg = jSONObject.optString("msg");
                                }
                                c.this.b(iOptInt, msg);
                            }
                        });
                    }
                });
                return;
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
                    String msg = campaignUnit != null ? campaignUnit.getMsg() : null;
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
