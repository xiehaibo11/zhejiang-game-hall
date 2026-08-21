package com.kwad.components.ad.f;

import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import java.util.ArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    public static void loadNativeAd(KsScene ksScene, final KsLoadManager.NativeAdListener nativeAdListener) {
        final SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        boolean zA = k.qo().a(sceneImplCovert, "loadNativeAd");
        sceneImplCovert.setAdStyle(10000);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.C0159a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.f.c.1
            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void a(AdResultData adResultData) {
                final ArrayList arrayList = new ArrayList();
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "dataReady").report();
                for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                    if (adTemplate != null) {
                        adTemplate.mAdScene = sceneImplCovert;
                        arrayList.add(new d(adTemplate));
                    }
                }
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.1.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        KsAdLoadManager.M().b(arrayList);
                        nativeAdListener.onNativeAdLoad(arrayList);
                    }
                });
            }

            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void onError(final int i, final String str) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.d("KsAdNativeLoadManager", "loadNativeAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                        nativeAdListener.onError(i, str);
                    }
                });
            }
        }).pI());
    }

    public static void loadNativeAd(String str, final KsLoadManager.NativeAdListener nativeAdListener) {
        if (k.qo().a((SceneImpl) null, "loadNativeAdByJson") && k.qo().qp() == 1) {
            return;
        }
        if (TextUtils.isEmpty(str)) {
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.2
                @Override // java.lang.Runnable
                public final void run() {
                    com.kwad.sdk.core.e.c.e("KsAdNativeLoadManager", "method parseJson params jsonResult is empty");
                    nativeAdListener.onError(com.kwad.sdk.core.network.f.aoU.errorCode, com.kwad.sdk.core.network.f.aoU.msg);
                }
            });
        }
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "requestFinish").be(true).report();
        try {
            JSONObject jSONObject = new JSONObject(str);
            final AdResultData adResultData = new AdResultData();
            adResultData.parseJson(jSONObject);
            if (adResultData.result != 1) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.3
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.e("KsAdNativeLoadManager", "loadNativeAd onError:" + String.format("%s__%s", Integer.valueOf(adResultData.result), adResultData.errorMsg));
                        nativeAdListener.onError(adResultData.result, adResultData.errorMsg);
                    }
                });
                return;
            }
            if (adResultData.isAdResultDataEmpty()) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.4
                    @Override // java.lang.Runnable
                    public final void run() {
                        nativeAdListener.onError(com.kwad.sdk.core.network.f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? com.kwad.sdk.core.network.f.aoU.msg : adResultData.testErrorMsg);
                    }
                });
                return;
            }
            final ArrayList arrayList = new ArrayList();
            for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                if (adTemplate != null) {
                    arrayList.add(new d(adTemplate));
                }
            }
            KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "dataReady").be(true).report();
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.f.c.5
                @Override // java.lang.Runnable
                public final void run() {
                    nativeAdListener.onNativeAdLoad(arrayList);
                }
            });
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            nativeAdListener.onError(com.kwad.sdk.core.network.f.aoT.errorCode, com.kwad.sdk.core.network.f.aoT.msg);
        }
    }
}
