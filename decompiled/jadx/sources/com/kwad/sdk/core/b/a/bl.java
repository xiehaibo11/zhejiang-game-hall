package com.kwad.sdk.core.b.a;

import com.huawei.updatesdk.service.otaupdate.UpdateKey;
import com.kwad.sdk.core.report.z;
import com.qq.e.comm.pi.IBidding;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class bl implements com.kwad.sdk.core.d<z.b> {
    private static void a(z.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.asS = jSONObject.optInt("photoPlaySecond");
        bVar.asT = jSONObject.optInt("awardReceiveStage");
        bVar.jG = jSONObject.optInt("itemClickType");
        bVar.asU = jSONObject.optInt("itemCloseType");
        bVar.asV = jSONObject.optInt("elementType");
        bVar.asW = jSONObject.optString("adRenderArea");
        if (bVar.asW == JSONObject.NULL) {
            bVar.asW = "";
        }
        bVar.asX = jSONObject.optLong(IBidding.HIGHEST_LOSS_PRICE);
        bVar.asY = jSONObject.optInt("impFailReason");
        bVar.asZ = jSONObject.optLong("winEcpm");
        bVar.adnType = jSONObject.optInt("adnType");
        bVar.adnName = jSONObject.optString("adnName");
        if (bVar.adnName == JSONObject.NULL) {
            bVar.adnName = "";
        }
        bVar.ata = jSONObject.optInt("retainCodeType");
        bVar.atb = jSONObject.optInt("photoSizeStyle");
        bVar.UP = jSONObject.optString("payload");
        if (bVar.UP == JSONObject.NULL) {
            bVar.UP = "";
        }
        bVar.atc = jSONObject.optInt("deeplinkType");
        bVar.atd = jSONObject.optString("deeplinkAppName");
        if (bVar.atd == JSONObject.NULL) {
            bVar.atd = "";
        }
        bVar.ate = jSONObject.optInt("deeplinkFailedReason");
        bVar.downloadSource = jSONObject.optInt("downloadSource");
        bVar.atf = jSONObject.optInt("isPackageChanged");
        bVar.atg = jSONObject.optString("installedFrom");
        if (bVar.atg == JSONObject.NULL) {
            bVar.atg = "";
        }
        bVar.ath = jSONObject.optString("downloadFailedReason");
        if (bVar.ath == JSONObject.NULL) {
            bVar.ath = "";
        }
        bVar.ati = jSONObject.optInt("isChangedEndcard");
        bVar.arz = jSONObject.optInt("adAggPageSource");
        bVar.atj = jSONObject.optString("serverPackageName");
        if (bVar.atj == JSONObject.NULL) {
            bVar.atj = "";
        }
        bVar.atk = jSONObject.optString("installedPackageName");
        if (bVar.atk == JSONObject.NULL) {
            bVar.atk = "";
        }
        bVar.atl = jSONObject.optInt("closeButtonImpressionTime");
        bVar.atm = jSONObject.optInt("closeButtonClickTime");
        bVar.atn = jSONObject.optLong("landingPageLoadedDuration");
        bVar.Kh = jSONObject.optLong("leaveTime");
        bVar.ato = jSONObject.optLong("adItemClickBackDuration");
        bVar.atp = jSONObject.optInt("appStorePageType");
        bVar.atq = jSONObject.optInt("installStatus");
        bVar.atr = jSONObject.optInt(UpdateKey.MARKET_DLD_STATUS);
        bVar.ats = jSONObject.optInt("downloadCardType");
        bVar.att = new z.a();
        bVar.att.parseJson(jSONObject.optJSONObject("clientExtData"));
        bVar.atu = jSONObject.optInt("landingPageType");
        bVar.vy = jSONObject.optLong("playedDuration");
        bVar.atv = jSONObject.optInt("playedRate");
        bVar.atw = jSONObject.optInt("adOrder");
        bVar.atx = jSONObject.optInt("adInterstitialSource");
        bVar.jJ = jSONObject.optDouble("splashShakeAcceleration");
        bVar.aty = jSONObject.optString("splashInteractionRotateAngle");
        if (bVar.aty == JSONObject.NULL) {
            bVar.aty = "";
        }
        bVar.atz = jSONObject.optInt("downloadInstallType");
        bVar.atA = jSONObject.optInt("businessSceneType");
        bVar.adxResult = jSONObject.optInt("adxResult");
        bVar.atB = jSONObject.optInt("fingerSwipeType");
        bVar.atC = jSONObject.optInt("fingerSwipeDistance");
        bVar.atD = jSONObject.optInt("triggerType");
        bVar.atE = jSONObject.optInt("cardCloseType");
        bVar.atF = jSONObject.optString("clientPkFailAdInfo");
        if (bVar.atF == JSONObject.NULL) {
            bVar.atF = "";
        }
    }

    private static JSONObject b(z.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.asS != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoPlaySecond", bVar.asS);
        }
        if (bVar.asT != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "awardReceiveStage", bVar.asT);
        }
        if (bVar.jG != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "itemClickType", bVar.jG);
        }
        if (bVar.asU != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "itemCloseType", bVar.asU);
        }
        if (bVar.asV != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "elementType", bVar.asV);
        }
        if (bVar.asW != null && !bVar.asW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adRenderArea", bVar.asW);
        }
        if (bVar.asX != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, IBidding.HIGHEST_LOSS_PRICE, bVar.asX);
        }
        if (bVar.asY != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "impFailReason", bVar.asY);
        }
        if (bVar.asZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "winEcpm", bVar.asZ);
        }
        if (bVar.adnType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adnType", bVar.adnType);
        }
        if (bVar.adnName != null && !bVar.adnName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adnName", bVar.adnName);
        }
        if (bVar.ata != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "retainCodeType", bVar.ata);
        }
        if (bVar.atb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoSizeStyle", bVar.atb);
        }
        if (bVar.UP != null && !bVar.UP.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "payload", bVar.UP);
        }
        if (bVar.atc != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deeplinkType", bVar.atc);
        }
        if (bVar.atd != null && !bVar.atd.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deeplinkAppName", bVar.atd);
        }
        if (bVar.ate != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deeplinkFailedReason", bVar.ate);
        }
        if (bVar.downloadSource != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadSource", bVar.downloadSource);
        }
        if (bVar.atf != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isPackageChanged", bVar.atf);
        }
        if (bVar.atg != null && !bVar.atg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "installedFrom", bVar.atg);
        }
        if (bVar.ath != null && !bVar.ath.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadFailedReason", bVar.ath);
        }
        if (bVar.ati != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isChangedEndcard", bVar.ati);
        }
        if (bVar.arz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adAggPageSource", bVar.arz);
        }
        if (bVar.atj != null && !bVar.atj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "serverPackageName", bVar.atj);
        }
        if (bVar.atk != null && !bVar.atk.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "installedPackageName", bVar.atk);
        }
        if (bVar.atl != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "closeButtonImpressionTime", bVar.atl);
        }
        if (bVar.atm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "closeButtonClickTime", bVar.atm);
        }
        if (bVar.atn != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "landingPageLoadedDuration", bVar.atn);
        }
        if (bVar.Kh != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "leaveTime", bVar.Kh);
        }
        if (bVar.ato != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adItemClickBackDuration", bVar.ato);
        }
        if (bVar.atp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appStorePageType", bVar.atp);
        }
        if (bVar.atq != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "installStatus", bVar.atq);
        }
        if (bVar.atr != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, UpdateKey.MARKET_DLD_STATUS, bVar.atr);
        }
        if (bVar.ats != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadCardType", bVar.ats);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "clientExtData", bVar.att);
        if (bVar.atu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "landingPageType", bVar.atu);
        }
        if (bVar.vy != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playedDuration", bVar.vy);
        }
        if (bVar.atv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playedRate", bVar.atv);
        }
        if (bVar.atw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adOrder", bVar.atw);
        }
        if (bVar.atx != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adInterstitialSource", bVar.atx);
        }
        if (bVar.jJ != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "splashShakeAcceleration", bVar.jJ);
        }
        if (bVar.aty != null && !bVar.aty.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "splashInteractionRotateAngle", bVar.aty);
        }
        if (bVar.atz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadInstallType", bVar.atz);
        }
        if (bVar.atA != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "businessSceneType", bVar.atA);
        }
        if (bVar.adxResult != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adxResult", bVar.adxResult);
        }
        if (bVar.atB != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fingerSwipeType", bVar.atB);
        }
        if (bVar.atC != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fingerSwipeDistance", bVar.atC);
        }
        if (bVar.atD != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "triggerType", bVar.atD);
        }
        if (bVar.atE != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardCloseType", bVar.atE);
        }
        if (bVar.atF != null && !bVar.atF.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "clientPkFailAdInfo", bVar.atF);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((z.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((z.b) bVar, jSONObject);
    }
}
