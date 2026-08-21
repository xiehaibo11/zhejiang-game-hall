package com.kwad.sdk.core.report;

import android.text.TextUtils;
import com.huawei.updatesdk.service.otaupdate.UpdateKey;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ab;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.bc;
import com.qq.e.comm.pi.IBidding;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class z extends com.kwad.sdk.core.network.b {
    int asG;
    private final b asH;
    private final JSONObject asI;
    private final AdTemplate mAdTemplate;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String asK;
        public int asL;
        public int asM;
        public int asN;
        public JSONObject asO;
        public int asP;
        public int asQ;
        public AdTrackLog asR;
        public String templateId;
        public int asJ = -1;
        public long duration = -1;
        public int showLiveStatus = -1;
        public int showLiveStyle = -1;

        @Override // com.kwad.sdk.core.response.a.a
        public void afterToJson(JSONObject jSONObject) {
            super.afterToJson(jSONObject);
            int i = this.asJ;
            if (i != -1) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "shield_reason", i);
            }
            long j = this.duration;
            if (j != -1) {
                com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.foundation.d.r.ag, j);
            }
            int i2 = this.showLiveStatus;
            if (i2 != -1) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "show_live_status", i2);
            }
            int i3 = this.showLiveStyle;
            if (i3 != -1) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "show_live_style", i3);
            }
            AdTrackLog adTrackLog = this.asR;
            if (adTrackLog != null) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "ad_track_log", adTrackLog.toJson().toString());
            }
            JSONObject jSONObject2 = this.asO;
            if (jSONObject2 != null) {
                try {
                    Iterator<String> itKeys = jSONObject2.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        jSONObject.putOpt(next, this.asO.get(next));
                    }
                } catch (Throwable unused) {
                }
            }
        }

        public final AdTrackLog c(AdTemplate adTemplate, String str, String str2) {
            com.kwad.sdk.service.a.f fVar;
            if (adTemplate == null || (fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)) == null || !fVar.xN()) {
                return null;
            }
            AdTrackLog adTrackLog = new AdTrackLog(str, str2);
            this.asR = adTrackLog;
            adTrackLog.bindABParams(adTemplate);
            return this.asR;
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public long Kh;
        public String UP;
        public String adnName;
        public int adnType;
        public int arz;
        public int asS;
        public int asT;
        public int asU;
        public int asV;
        public String asW;
        public int atA;
        public int atB;
        public int atC;
        public String atF;
        public int atc;
        public String atd;
        public int ate;
        public int atf;
        public String ath;
        public int ati;
        public String atj;
        public String atk;
        public int atl;
        public int atm;
        public long atn;
        public long ato;
        public int ats;
        public a att;
        public int atu;
        public int atv;
        public String aty;
        public int downloadSource;
        public int jG;
        public ac.a jI;
        public double jJ;
        public long vy;
        public long asX = -1;
        public int asY = -1;
        public long asZ = -1;
        public int ata = -1;
        public int atb = 0;
        public String atg = "";
        public int atp = -1;
        public int atq = -1;
        public int atr = 0;
        public int atw = -1;
        public int atx = -1;
        public int atz = -1;
        public int adxResult = -1;
        public int atD = -1;
        public int atE = 0;

        public final void a(k kVar) {
            if (kVar != null) {
                this.atF = kVar.Cc();
            }
        }

        public final void cu(int i) {
            if (i == 0) {
                this.atB = 1;
            } else if (i == 1) {
                this.atB = 2;
            } else {
                if (i != 2) {
                    return;
                }
                this.atB = 3;
            }
        }
    }

    z(AdTemplate adTemplate, int i, b bVar, JSONObject jSONObject) {
        this.mAdTemplate = adTemplate;
        this.asG = i;
        this.asH = bVar;
        this.asI = jSONObject;
    }

    private void B(JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        try {
            jSONObject.put("clientTimestamp", System.currentTimeMillis());
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        putBody("extData", jSONObject.toString());
    }

    private void a(String str, b bVar) {
        if (bVar == null || TextUtils.isEmpty(str)) {
            return;
        }
        if (bVar.atw >= 0) {
            putBody("adOrder", bVar.atw);
        }
        if (bVar.atx >= 0) {
            putBody("adInterstitialSource", bVar.atx);
        }
        if (!TextUtils.isEmpty(bVar.asW)) {
            putBody("adRenderArea", bVar.asW);
        }
        putBody("adxResult", bVar.adxResult);
        if (bVar.atB != 0) {
            putBody("fingerSwipeType", bVar.atB);
        }
        if (bVar.atC != 0) {
            putBody("fingerSwipeDistance", bVar.atC);
        }
        if (bVar.atq != -1) {
            putBody("installStatus", bVar.atq);
        }
        if (bVar.att != null) {
            putBody("clientExtData", bVar.att.toJson().toString());
        }
        if (bVar.atF != null) {
            putBody("clientPkFailAdInfo", bVar.atF);
        }
        if (bVar.atD != -1) {
            putBody("triggerType", bVar.atD);
        }
        if (bVar.atb != 0) {
            putBody("photoSizeStyle", bVar.atb);
        }
    }

    private void a(String str, AdTemplate adTemplate, b bVar) {
        if (TextUtils.isEmpty(str) || adTemplate == null) {
            return;
        }
        if (adTemplate.mInitVoiceStatus != 0) {
            putBody("initVoiceStatus", adTemplate.mInitVoiceStatus);
        }
        putBody("ecpmType", this.mAdTemplate.mBidEcpm == 0 ? 2 : 1);
        if (bVar == null) {
            return;
        }
        if (bVar.arz != 0) {
            putBody("adAggPageSource", bVar.arz);
        }
        if (TextUtils.isEmpty(bVar.UP)) {
            return;
        }
        putBody("payload", bVar.UP);
    }

    private void b(String str, b bVar) {
        if (bVar == null || TextUtils.isEmpty(str)) {
            return;
        }
        if (bVar.jG != 0) {
            putBody("itemClickType", bVar.jG);
        }
        if (!TextUtils.isEmpty(bVar.UP)) {
            putBody("payload", bVar.UP);
        }
        if (bVar.arz != 0) {
            putBody("adAggPageSource", bVar.arz);
        }
        if (bVar.atw >= 0) {
            putBody("adOrder", bVar.atw);
        }
        if (bVar.atx >= 0) {
            putBody("adInterstitialSource", bVar.atx);
        }
        if (bVar.atD != -1) {
            putBody("triggerType", bVar.atD);
        }
        if (bVar.atE != 0) {
            putBody("cardCloseType", bVar.atE);
        }
        putBody("adxResult", bVar.adxResult);
        if (bVar.jJ > 0.0d) {
            putBody("splashShakeAcceleration", bVar.jJ);
        }
        if (!TextUtils.isEmpty(bVar.aty)) {
            putBody("splashInteractionRotateAngle", bVar.aty);
        }
        if (bVar.atB != 0) {
            putBody("fingerSwipeType", bVar.atB);
        }
        if (bVar.atC != 0) {
            putBody("fingerSwipeDistance", bVar.atC);
        }
        if (bVar.vy > 0) {
            putBody("playedDuration", bVar.vy);
        }
        if (bVar.atv > 0) {
            putBody("playedRate", bVar.atv);
        }
        if (bVar.atF != null) {
            putBody("clientPkFailAdInfo", bVar.atF);
        }
        if (bVar.ata != -1) {
            putBody("retainCodeType", bVar.ata);
        }
        if (bVar.att != null) {
            putBody("clientExtData", bVar.att.toJson().toString());
        }
        if (bVar.atb != 0) {
            putBody("photoSizeStyle", bVar.atb);
        }
    }

    private void c(String str, b bVar) {
        if (bVar == null || TextUtils.isEmpty(str)) {
            return;
        }
        if (bVar.asU != 0) {
            putBody("itemCloseType", bVar.asU);
        }
        if (bVar.asS > 0) {
            putBody("photoPlaySecond", bVar.asS);
        }
        if (bVar.asT != 0) {
            putBody("awardReceiveStage", bVar.asT);
        }
        if (bVar.asV != 0) {
            putBody("elementType", bVar.asV);
        }
        if (!TextUtils.isEmpty(bVar.UP)) {
            putBody("payload", bVar.UP);
        }
        if (bVar.att != null) {
            putBody("clientExtData", bVar.att.toJson().toString());
        }
        if (bVar.atc > 0) {
            putBody("deeplinkType", bVar.atc);
        }
        if (!TextUtils.isEmpty(bVar.atd)) {
            putBody("deeplinkAppName", bVar.atd);
        }
        if (bVar.ate != 0) {
            putBody("deeplinkFailedReason", bVar.ate);
        }
        if (bVar.downloadSource > 0) {
            putBody("downloadSource", bVar.downloadSource);
        }
        if (bVar.atE != 0) {
            putBody("cardCloseType", bVar.atE);
        }
        if (bVar.atf > 0) {
            putBody("isPackageChanged", bVar.atf);
        }
        putBody("installedFrom", bVar.atg);
        putBody("isChangedEndcard", bVar.ati);
        if (bVar.arz != 0) {
            putBody("adAggPageSource", bVar.arz);
        }
        if (bVar.ath != null) {
            putBody("downloadFailedReason", bVar.ath);
        }
        if (!bc.isNullString(bVar.atk)) {
            putBody("installedPackageName", bVar.atk);
        }
        if (!bc.isNullString(bVar.atj)) {
            putBody("serverPackageName", bVar.atj);
        }
        if (bVar.atm > 0) {
            putBody("closeButtonClickTime", bVar.atm);
        }
        if (bVar.atl > 0) {
            putBody("closeButtonImpressionTime", bVar.atl);
        }
        if (bVar.atr >= 0) {
            putBody(UpdateKey.MARKET_DLD_STATUS, bVar.atr);
        }
        if (bVar.atn > 0) {
            putBody("landingPageLoadedDuration", bVar.atn);
        }
        if (bVar.Kh > 0) {
            putBody("leaveTime", bVar.Kh);
        }
        if (bVar.ato > 0) {
            putBody("adItemClickBackDuration", bVar.ato);
        }
        if (bVar.ata != -1) {
            putBody("retainCodeType", bVar.ata);
        }
        if (bVar.asX > -1) {
            putBody(IBidding.HIGHEST_LOSS_PRICE, bVar.asX);
        }
        if (bVar.asY >= 0) {
            putBody("impFailReason", bVar.asY);
        }
        if (bVar.asZ > -1) {
            putBody("winEcpm", bVar.asZ);
        }
        if (bVar.adnType > 0) {
            putBody("adnType", bVar.adnType);
        }
        if (!TextUtils.isEmpty(bVar.adnName)) {
            putBody("adnName", bVar.adnName);
        }
        putBody("downloadCardType", bVar.ats);
        putBody("landingPageType", bVar.atu);
        if (bVar.atx >= 0) {
            putBody("adInterstitialSource", bVar.atx);
        }
        if (bVar.atz > 0) {
            putBody("downloadInstallType", bVar.atz);
        }
        if (bVar.atB != 0) {
            putBody("fingerSwipeType", bVar.atB);
        }
        if (bVar.atC != 0) {
            putBody("fingerSwipeDistance", bVar.atC);
        }
        if (bVar.atA > 0) {
            putBody("businessSceneType", bVar.atA);
        }
        if (bVar.vy > 0) {
            putBody("playedDuration", bVar.vy);
        }
        if (bVar.atv > 0) {
            putBody("playedRate", bVar.atv);
        }
        if (bVar.atp != -1) {
            putBody("appStorePageType", bVar.atp);
        }
        if (bVar.atD != -1) {
            putBody("triggerType", bVar.atD);
        }
        if (bVar.atb != 0) {
            putBody("photoSizeStyle", bVar.atb);
        }
    }

    final List<String> Cp() {
        ac.a aVar;
        AdInfo.AdTrackInfo next;
        b bVar;
        ArrayList arrayList = new ArrayList();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        if (!adInfoCg.adTrackInfoList.isEmpty()) {
            Iterator<AdInfo.AdTrackInfo> it = adInfoCg.adTrackInfoList.iterator();
            while (true) {
                aVar = null;
                if (!it.hasNext()) {
                    next = null;
                    break;
                }
                next = it.next();
                if (next.type == this.asG && next.urls != null) {
                    break;
                }
            }
            if (next != null) {
                if (next.type == 2 && (bVar = this.asH) != null) {
                    aVar = bVar.jI;
                }
                Iterator<String> it2 = next.urls.iterator();
                while (it2.hasNext()) {
                    arrayList.add(ab.a(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext(), it2.next(), aVar, com.kwad.sdk.core.response.b.a.at(adInfoCg)));
                }
            }
        }
        return arrayList;
    }

    @Override // com.kwad.sdk.core.network.b
    public final void buildBaseBody() {
    }

    @Override // com.kwad.sdk.core.network.b
    public final void buildBaseHeader() {
    }

    public final int getActionType() {
        return this.asG;
    }

    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override // com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final JSONObject getBody() {
        return this.mBodyParams;
    }

    @Override // com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final String getUrl() {
        String strReplaceFirst;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        int i = this.asG;
        if (i == 1) {
            strReplaceFirst = adInfoCg.adBaseInfo.showUrl.replaceFirst("__PR__", (this.mAdTemplate.mBidEcpm == 0 && ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xC()) ? String.valueOf(com.kwad.sdk.core.response.b.a.aJ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) : String.valueOf(this.mAdTemplate.mBidEcpm)).replaceFirst("__TYPE__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerType)).replaceFirst("__BEHAVIOR__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerBehavior));
            a(strReplaceFirst, this.asH);
        } else {
            AdInfo.AdBaseInfo adBaseInfo = adInfoCg.adBaseInfo;
            if (i != 2) {
                strReplaceFirst = adBaseInfo.convUrl.replaceFirst("__ACTION__", String.valueOf(this.asG)).replaceFirst("__PR__", String.valueOf(this.mAdTemplate.mBidEcpm)).replaceFirst("__TYPE__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerType)).replaceFirst("__BEHAVIOR__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerBehavior));
                c(strReplaceFirst, this.asH);
                B(this.asI);
                return strReplaceFirst;
            }
            String strA = adBaseInfo.clickUrl;
            if (this.asH != null) {
                ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
                strA = ac.a(strA, this.asH.jI);
            }
            strReplaceFirst = ac.aj(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext(), strA).replaceFirst("__PR__", String.valueOf(this.mAdTemplate.mBidEcpm)).replaceFirst("__TYPE__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerType)).replaceFirst("__BEHAVIOR__", String.valueOf(this.mAdTemplate.mVideoPlayerStatus.mVideoPlayerBehavior));
            b(strReplaceFirst, this.asH);
        }
        a(strReplaceFirst, this.mAdTemplate, this.asH);
        B(this.asI);
        return strReplaceFirst;
    }
}
