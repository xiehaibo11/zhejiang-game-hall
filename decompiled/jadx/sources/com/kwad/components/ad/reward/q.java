package com.kwad.components.ad.reward;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bc;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class q {

    static class a {
        private String errorMsg;
        private boolean qB;

        public a(String str) {
            JSONObject jSONObject;
            this.errorMsg = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
            try {
                jSONObject = new JSONObject(str);
            } catch (Throwable th) {
                th.printStackTrace();
                this.qB = false;
                this.errorMsg = "数据解析失败";
                jSONObject = null;
            }
            parseJson(jSONObject);
        }

        private void parseJson(JSONObject jSONObject) {
            if (jSONObject != null) {
                this.qB = jSONObject.optBoolean("isValid");
                this.errorMsg = jSONObject.toString();
            }
        }

        public final boolean isValid() {
            return this.qB;
        }
    }

    public static void b(final AdTemplate adTemplate, AdInfo adInfo) {
        final String strBC = com.kwad.sdk.core.response.b.a.bC(adInfo);
        com.kwad.sdk.core.e.c.d("ServerCallbackHandle", "handleRewardVerify callbackUrl: " + strBC);
        if (bc.isNullString(strBC)) {
            return;
        }
        com.kwad.sdk.utils.g.execute(new Runnable() { // from class: com.kwad.components.ad.reward.q.1
            private void N(String str) {
                com.kwad.components.core.o.a.pA().d(adTemplate, 1, str);
            }

            private void gB() {
                com.kwad.components.core.o.a.pA().d(adTemplate, 0, "success");
            }

            @Override // java.lang.Runnable
            public final void run() {
                String str;
                try {
                    com.kwad.sdk.core.network.c cVarDoGet = com.kwad.sdk.g.wX().doGet(strBC, null);
                    if (cVarDoGet == null) {
                        str = "Network Error: url invalid";
                    } else if (cVarDoGet.code != 200) {
                        N("Network Error: " + cVarDoGet.aoM);
                        return;
                    } else {
                        a aVar = new a(cVarDoGet.aoM);
                        if (aVar.isValid()) {
                            gB();
                            return;
                        }
                        str = aVar.errorMsg;
                    }
                    N(str);
                } catch (Throwable th) {
                    N("Request Error: " + th.getMessage());
                }
            }
        });
    }
}
