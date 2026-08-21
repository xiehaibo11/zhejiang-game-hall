package com.kwad.sdk.core.report;

import android.text.TextUtils;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.ReportResultData;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ag;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.List;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public abstract class y extends com.kwad.sdk.core.network.a<z> {
    private ReportResultData asF;

    private ReportResultData a(com.kwad.sdk.core.network.c cVar) {
        if (this.asF == null) {
            this.asF = new ReportResultData() { // from class: com.kwad.sdk.core.report.ReportNetwork$1
                @Override // com.kwad.sdk.core.network.BaseResultData, com.kwad.sdk.core.b
                public void parseJson(JSONObject jSONObject) {
                    super.parseJson(jSONObject);
                }
            };
        }
        if (cVar != null) {
            try {
                this.asF.parseJson(new JSONObject(cVar.aoM));
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return this.asF;
    }

    private void a(z zVar) {
        try {
            List<String> listCp = zVar.Cp();
            for (String str : listCp) {
                com.kwad.sdk.core.network.c cVarDoGetWithoutResponse = com.kwad.sdk.g.wX().doGetWithoutResponse(str, null);
                if (!isValidUrl(str) || cVarDoGetWithoutResponse.code != 200) {
                    KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_track").W("trackUrlError", str).aK(zVar.getAdTemplate()).report();
                }
            }
            a(zVar.getAdTemplate(), listCp);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private static void a(AdTemplate adTemplate, List<String> list) {
        if (adTemplate.mTrackUrlReported || list == null || list.isEmpty()) {
            return;
        }
        adTemplate.mTrackUrlReported = true;
        r rVar = new r(10217L, adTemplate);
        rVar.ash = com.kwad.sdk.utils.t.toJsonArray(list);
        i.a(rVar);
    }

    private static void a(String str, int i, AdTemplate adTemplate, com.kwad.sdk.core.network.c cVar) {
        if (TextUtils.isEmpty(str) || str.contains(" ") || !str.startsWith("http") || cVar.code != 200) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_track").W(i == 1 ? "showUrlError" : i == 2 ? "clickUrlError" : "convertUrlError", str).aK(adTemplate).report();
        }
    }

    private static boolean isValidUrl(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            URI uri = new URI(str);
            if (uri.getHost() == null) {
                return false;
            }
            return uri.getScheme().equalsIgnoreCase("http") || uri.getScheme().equalsIgnoreCase("https");
        } catch (URISyntaxException unused) {
            return false;
        }
    }

    @Override // com.kwad.sdk.core.network.a
    public void fetch() {
        super.fetch();
    }

    @Override // com.kwad.sdk.core.network.a
    public void fetchImpl() {
        String url;
        String str;
        if (!ag.isNetworkConnected(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext())) {
            com.kwad.sdk.core.e.c.w("ReportNetwork", "no network while report log");
            return;
        }
        z zVarCreateRequest = createRequest();
        com.kwad.sdk.core.network.c cVarDoPost = null;
        try {
            url = zVarCreateRequest.getUrl();
            try {
                cVarDoPost = com.kwad.sdk.g.wX().doPost(url, (Map<String, String>) null, zVarCreateRequest.getBody());
                if (cVarDoPost == null || cVarDoPost.code != 200) {
                    str = "report fail result is null";
                } else {
                    str = "report success actionType:" + zVarCreateRequest.asG;
                }
                com.kwad.sdk.core.e.c.d("ReportNetwork", str);
            } catch (Exception e) {
                e = e;
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        } catch (Exception e2) {
            e = e2;
            url = null;
        }
        ReportResultData reportResultDataA = a(cVarDoPost);
        if (reportResultDataA.isCheatingFlow()) {
            zVarCreateRequest.getAdTemplate().setCheatingFlow(reportResultDataA.isCheatingFlow());
        }
        if (!zVarCreateRequest.getAdTemplate().mCheatingFlow) {
            a(zVarCreateRequest);
        }
        a(url, zVarCreateRequest.getActionType(), zVarCreateRequest.getAdTemplate(), cVarDoPost);
        if (!com.kwad.framework.a.a.ml.booleanValue() || reportResultDataA.isResultOk()) {
            return;
        }
        throw new RuntimeException("请求返回失败 code:" + reportResultDataA.result + ", errorMsg:" + reportResultDataA.errorMsg + "\n url=" + url);
    }

    @Override // com.kwad.sdk.core.network.a
    public /* bridge */ /* synthetic */ void onResponse(com.kwad.sdk.core.network.g gVar, com.kwad.sdk.core.network.c cVar) {
    }
}
