package com.kwad.components.core.webview.jshandler;

import android.text.TextUtils;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class u implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final boolean Ud = false;
    private com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, AdResultData> hZ;

    public static final class a implements com.kwad.sdk.core.b {
        private List<AdTemplate> Ug;

        public a(List<AdTemplate> list) {
            this.Ug = list;
        }

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            JSONArray jSONArray = new JSONArray();
            for (AdTemplate adTemplate : this.Ug) {
                if (!TextUtils.isEmpty(adTemplate.mOriginJString)) {
                    try {
                        jSONArray.put(new JSONObject(adTemplate.mOriginJString));
                    } catch (JSONException e) {
                        com.kwad.sdk.core.e.c.printStackTrace(e);
                        jSONArray.put(adTemplate.toJson());
                    }
                }
                jSONArray.put(adTemplate.toJson());
            }
            com.kwad.sdk.utils.t.putValue(jSONObject, "impAdInfo", jSONArray);
            return jSONObject;
        }
    }

    public u(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
    }

    private void a(final com.kwad.components.core.p.a.b bVar, final com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, AdResultData> mVar = this.hZ;
        if (mVar != null) {
            mVar.cancel();
        }
        com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, AdResultData> mVar2 = new com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, AdResultData>() {
            @Override
            private AdResultData parseData(String str) {
                JSONObject jSONObject = new JSONObject(str);
                AdResultData adResultData = new AdResultData(bVar.PN);
                adResultData.parseJson(jSONObject);
                return adResultData;
            }

            @Override
            private com.kwad.components.core.p.a createRequest() {
                return new com.kwad.components.core.p.a(bVar);
            }
        };
        this.hZ = mVar2;
        mVar2.request(new com.kwad.sdk.core.network.p<com.kwad.components.core.p.a, AdResultData>() {
            private void b(final AdResultData adResultData) {
                if (!adResultData.isAdResultDataEmpty()) {
                    bj.runOnUiThread(new Runnable() {
                        @Override
                        public final void run() {
                            cVar.a(new a(adResultData.getAdTemplateList()));
                        }
                    });
                    return;
                }
                StringBuilder sb = new StringBuilder("onError:");
                Object[] objArr = new Object[2];
                objArr[0] = Integer.valueOf(com.kwad.sdk.core.network.f.aoU.errorCode);
                objArr[1] = TextUtils.isEmpty(adResultData.testErrorMsg) ? com.kwad.sdk.core.network.f.aoU.msg : adResultData.testErrorMsg;
                sb.append(String.format("code:%s__msg:%s", objArr));
                com.kwad.sdk.core.e.c.d("WebCardGetKsAdDataHandler", sb.toString());
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        cVar.a(new a(new ArrayList()));
                    }
                });
            }

            private void f(int i, String str) {
                com.kwad.sdk.core.e.c.d("WebCardGetKsAdDataHandler", "requestAggregateAd onError code:" + i + " msg: " + str);
                u.this.a(cVar);
            }

            @Override
            public final void onError(com.kwad.sdk.core.network.g gVar, int i, String str) {
                f(i, str);
            }

            @Override
            public final void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                b((AdResultData) baseResultData);
            }
        });
    }

    private void a(final com.kwad.sdk.core.webview.c.c cVar) {
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                cVar.a(new a(new ArrayList()));
            }
        });
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (!this.Ud) {
            if (this.TL.DY()) {
                cVar.onError(-1, "native adTemplate is null");
                return;
            } else {
                cVar.a(new a(this.TL.DX()));
                return;
            }
        }
        AdTemplate adTemplate = this.TL.getAdTemplate();
        com.kwad.components.core.p.a.b bVar = new com.kwad.components.core.p.a.b(adTemplate.mAdScene);
        if (adTemplate.mAdScene != null) {
            bVar.PO = adTemplate.mAdScene.getPageScene();
        }
        bVar.PP = 106L;
        bVar.PN.setAdNum(12);
        bVar.sdkExtraData = com.kwad.sdk.core.response.b.d.cp(adTemplate);
        a(bVar, cVar);
    }

    @Override
    public final String getKey() {
        return "getKsAdData";
    }

    @Override
    public final void onDestroy() {
        com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, AdResultData> mVar = this.hZ;
        if (mVar != null) {
            mVar.cancel();
        }
    }
}
