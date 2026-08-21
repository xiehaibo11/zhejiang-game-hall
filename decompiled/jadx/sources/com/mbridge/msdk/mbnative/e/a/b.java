package com.mbridge.msdk.mbnative.e.a;

import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Frame;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: NativeResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class b extends f<JSONObject> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3795a = b.class.getSimpleName();
    private int b;
    private String c;

    public abstract void a(int i, String str);

    public abstract void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit);

    public abstract void b(List<Frame> list);

    public final void a(String str) {
        this.c = str;
    }

    public final String a() {
        return this.c;
    }

    public final void e(int i) {
        this.b = i;
    }

    public final int b() {
        return this.b;
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onPreExecute() {
        super.onPreExecute();
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onSuccess(k<JSONObject> kVar) {
        CampaignUnit campaignUnit;
        super.onSuccess(kVar);
        if (kVar == null || kVar.c == null) {
            return;
        }
        int i = this.b;
        if (i == 0) {
            final List<com.mbridge.msdk.foundation.same.net.c.b> list = kVar.c.d;
            final JSONObject jSONObject = kVar.f3462a;
            final int iOptInt = jSONObject.optInt("status");
            if (1 == iOptInt) {
                calcRequestTime(System.currentTimeMillis());
                final String strOptString = jSONObject.optString("version");
                com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.mbnative.e.a.b.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        final CampaignUnit campaignUnit2;
                        if (com.tkay.expressad.foundation.g.a.i.equals(strOptString)) {
                            campaignUnit2 = CampaignUnit.parseV5CampaignUnit(jSONObject.optJSONObject("data"));
                        } else {
                            campaignUnit2 = CampaignUnit.parseCampaignUnit(jSONObject.optJSONObject("data"));
                        }
                        com.mbridge.msdk.foundation.same.f.b.g().post(new Runnable() { // from class: com.mbridge.msdk.mbnative.e.a.b.1.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                CampaignUnit campaignUnit3 = campaignUnit2;
                                if (campaignUnit3 != null && campaignUnit3.getAds() != null && campaignUnit2.getAds().size() > 0) {
                                    b.this.a(list, campaignUnit2);
                                    b.this.saveRequestTime(campaignUnit2.getAds().size());
                                } else {
                                    b.this.a(iOptInt, jSONObject.optString("msg"));
                                }
                            }
                        });
                    }
                });
                return;
            }
            a(iOptInt, jSONObject.optString("msg"));
            return;
        }
        if (i == 1) {
            List<com.mbridge.msdk.foundation.same.net.c.b> list2 = kVar.c.d;
            JSONObject jSONObject2 = kVar.f3462a;
            int iOptInt2 = jSONObject2.optInt("status");
            if (1 == iOptInt2) {
                calcRequestTime(System.currentTimeMillis());
                if (com.tkay.expressad.foundation.g.a.i.equals(jSONObject2.optString("version"))) {
                    campaignUnit = CampaignUnit.parseV5CampaignUnit(jSONObject2.optJSONObject("data"));
                } else {
                    campaignUnit = CampaignUnit.parseCampaignUnit(jSONObject2.optJSONObject("data"));
                }
                if (campaignUnit != null && campaignUnit.getListFrames() != null && campaignUnit.getListFrames().size() > 0) {
                    b(campaignUnit.getListFrames());
                    saveRequestTime(campaignUnit.getListFrames().size());
                    return;
                } else {
                    a(iOptInt2, jSONObject2.optString("msg"));
                    return;
                }
            }
            a(iOptInt2, jSONObject2.optString("msg"));
        }
    }

    @Override // com.mbridge.msdk.foundation.same.net.f, com.mbridge.msdk.foundation.same.net.e
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(f3795a, "errorCode = " + aVar.f3429a);
        a(aVar.f3429a, com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
