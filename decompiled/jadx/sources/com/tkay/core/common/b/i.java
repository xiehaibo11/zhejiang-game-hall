package com.tkay.core.common.b;

import android.text.TextUtils;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYCustomRuleKeys;
import com.tkay.core.api.TYRewardInfo;
import com.tkay.core.c.d;
import com.tkay.core.common.b.f;
import com.tkay.core.common.c.k;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class i extends TYAdInfo {
    private Map<String, Object> C;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TYBaseAdAdapter f6069a;
    private Map<String, Object> x;
    private int b = -1;
    private String c = "";
    private int d = -1;
    private double e = 0.0d;
    private int f = 0;
    private String g = "";
    private Double h = Double.valueOf(0.0d);
    private String i = "";
    private String j = "";
    private String k = "";
    private String l = "";
    private String m = "unknow";
    private String n = "Network";
    private String o = "";
    private int p = 1;
    private int q = 0;
    private String r = "";
    private String s = "";
    private int t = 0;
    private String u = "";
    private String v = "";
    private Map<String, Object> w = null;
    private String y = "";
    private int z = 0;
    private String A = "";
    private int B = 0;

    @Override // com.tkay.core.api.TYAdInfo
    public final int getNetworkFirmId() {
        return this.b;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getAdsourceId() {
        return this.c;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getAdsourceIndex() {
        return this.d;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final double getEcpm() {
        return this.e;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int isHeaderBiddingAdsource() {
        return this.f;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getShowId() {
        return this.g;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final Double getPublisherRevenue() {
        return this.h;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getCurrency() {
        return this.i;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getCountry() {
        return this.j;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getTYPlacementId() {
        return this.k;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getTYAdFormat() {
        return this.l;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getEcpmPrecision() {
        return this.m;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getAdNetworkType() {
        return this.n;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getNetworkPlacementId() {
        return this.o;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getEcpmLevel() {
        return this.p;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getSegmentId() {
        return this.q;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getScenarioId() {
        return this.r;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getScenarioRewardName() {
        return this.s;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getScenarioRewardNumber() {
        return this.t;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getSubChannel() {
        return this.u;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getChannel() {
        return this.v;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getCustomRule() {
        return this.w != null ? new JSONObject(this.w).toString() : "";
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final Map<String, Object> getExtInfoMap() {
        return this.x;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getRewardUserCustomData() {
        TYBaseAdAdapter tYBaseAdAdapter = this.f6069a;
        return tYBaseAdAdapter != null ? tYBaseAdAdapter.getUserCustomData() : "";
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final Map<String, Object> getLocalExtra() {
        return this.C;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final String getTpBidId() {
        return this.y;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getABTestId() {
        return this.B;
    }

    @Override // com.tkay.core.api.TYAdInfo
    public final int getDismissType() {
        return this.z;
    }

    public static i a(n nVar) {
        if (nVar != null) {
            return a(a(nVar.getTrackingInfo()), nVar);
        }
        return new i();
    }

    public static i a(BaseAd baseAd) {
        if (baseAd != null) {
            i iVarA = a(baseAd.getDetail());
            iVarA.x = baseAd.getNetworkInfoMap();
            return iVarA;
        }
        return new i();
    }

    public static i a(com.tkay.core.common.f.d dVar, n nVar) {
        return a(a(dVar), nVar);
    }

    private static i a(com.tkay.core.common.f.d dVar) {
        i iVar = new i();
        return dVar != null ? a(iVar, dVar) : iVar;
    }

    private static i a(i iVar, n nVar) {
        if (nVar != null && (nVar instanceof TYBaseAdAdapter)) {
            TYBaseAdAdapter tYBaseAdAdapter = (TYBaseAdAdapter) nVar;
            iVar.f6069a = tYBaseAdAdapter;
            iVar.x = tYBaseAdAdapter.getNetworkInfoMap();
        }
        return iVar;
    }

    private static i a(i iVar, com.tkay.core.common.f.d dVar) {
        TYRewardInfo tYRewardInfoR;
        TYRewardInfo tYRewardInfo;
        iVar.b = dVar.H();
        iVar.c = dVar.x();
        iVar.d = dVar.A();
        iVar.f = dVar.v();
        iVar.e = dVar.f();
        iVar.i = dVar.h();
        iVar.g = dVar.l();
        iVar.h = Double.valueOf(iVar.e / 1000.0d);
        iVar.j = dVar.o();
        iVar.l = com.tkay.core.common.l.g.d(dVar.Y());
        iVar.k = dVar.W();
        iVar.m = dVar.n();
        if (dVar.H() == 35) {
            iVar.n = "Cross_Promotion";
        } else if (dVar.H() == 66) {
            iVar.n = "Adx";
        } else {
            iVar.n = "Network";
        }
        iVar.o = dVar.k();
        iVar.p = dVar.m();
        iVar.q = dVar.I();
        iVar.r = dVar.C;
        if (TextUtils.equals(f.g.b, iVar.l)) {
            Map<String, TYRewardInfo> mapQ = dVar.q();
            if (mapQ != null && mapQ.containsKey(iVar.r) && (tYRewardInfo = mapQ.get(iVar.r)) != null) {
                iVar.s = tYRewardInfo.rewardName;
                iVar.t = tYRewardInfo.rewardNumber;
            }
            if ((TextUtils.isEmpty(iVar.s) || iVar.t == 0) && (tYRewardInfoR = dVar.r()) != null) {
                iVar.s = tYRewardInfoR.rewardName;
                iVar.t = tYRewardInfoR.rewardNumber;
            }
        }
        iVar.v = m.a().m();
        iVar.u = m.a().n();
        iVar.w = dVar.s();
        iVar.y = dVar.e();
        iVar.z = dVar.M();
        iVar.A = dVar.P();
        iVar.B = dVar.U();
        Map<String, Object> mapA = dVar.a();
        if (mapA != null) {
            iVar.C = new HashMap(mapA);
        }
        return iVar;
    }

    public final String toString() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("id", this.g);
            jSONObject.put("publisher_revenue", this.h);
            jSONObject.put("currency", this.i);
            jSONObject.put("country", this.j);
            jSONObject.put("adunit_id", this.k);
            jSONObject.put("adunit_format", this.l);
            jSONObject.put(com.tkay.core.common.l.P, this.m);
            jSONObject.put("network_type", this.n);
            jSONObject.put("network_placement_id", this.o);
            jSONObject.put(com.tkay.core.common.l.O, this.p);
            jSONObject.put(TYCustomRuleKeys.SEGMENT_ID, this.q);
            if (!TextUtils.isEmpty(this.r)) {
                jSONObject.put("scenario_id", this.r);
            }
            if (!TextUtils.isEmpty(this.s) && this.t != 0) {
                jSONObject.put("scenario_reward_name", this.s);
                jSONObject.put("scenario_reward_number", this.t);
            }
            if (!TextUtils.isEmpty(this.v)) {
                jSONObject.put("channel", this.v);
            }
            if (!TextUtils.isEmpty(this.u)) {
                jSONObject.put("sub_channel", this.u);
            }
            if (this.w != null && this.w.size() > 0) {
                jSONObject.put("custom_rule", new JSONObject(this.w));
            }
            jSONObject.put(k.a.d, this.b);
            jSONObject.put("adsource_id", this.c);
            jSONObject.put("adsource_index", this.d);
            jSONObject.put("adsource_price", this.e);
            jSONObject.put("adsource_isheaderbidding", this.f);
            if (this.x != null && this.x.size() > 0) {
                jSONObject.put("ext_info", new JSONObject(this.x));
            }
            if (this.f6069a != null) {
                jSONObject.put("reward_custom_data", this.f6069a.getUserCustomData());
            }
            if (!TextUtils.isEmpty(this.y)) {
                jSONObject.put("tp_bid_id", this.y);
            }
            if (this.z != 0) {
                jSONObject.put("dismiss_type", this.z);
            }
            if (!TextUtils.isEmpty(this.A)) {
                jSONObject.put(d.a.U, this.A);
            }
            jSONObject.put(com.tkay.core.common.h.c.I, this.B);
            if (this.C != null && this.C.size() > 0) {
                jSONObject.put("user_load_extra_data", new JSONObject(this.C));
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return jSONObject.toString();
    }
}
