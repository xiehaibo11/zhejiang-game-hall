package com.kwad.components.ad.reward;

import android.text.TextUtils;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class h {

    static class a {
        private static h oS = new h(0);
    }

    static class b extends com.kwad.sdk.core.network.m<i, BaseResultData> {
        private AdTemplate adTemplate;
        private com.kwad.sdk.core.network.p<i, BaseResultData> oT = new com.kwad.sdk.core.network.p<i, BaseResultData>() { // from class: com.kwad.components.ad.reward.h.b.1
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(i iVar, int i, String str) {
                super.onError(iVar, i, str);
                com.kwad.components.core.o.a.pA().d(b.this.adTemplate, 1, str);
                com.kwad.sdk.core.e.c.i("RewardCallbackVerifyHelper", "callbackUrlInfo verify failed");
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onSuccess(i iVar, BaseResultData baseResultData) {
                super.onSuccess(iVar, baseResultData);
                com.kwad.components.core.o.a.pA().d(b.this.adTemplate, 0, "success");
                com.kwad.sdk.core.e.c.i("RewardCallbackVerifyHelper", "callbackUrlInfo verify success");
            }
        };

        public b(AdTemplate adTemplate) {
            this.adTemplate = adTemplate;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // com.kwad.sdk.core.network.a
        /* JADX INFO: renamed from: fJ, reason: merged with bridge method [inline-methods] */
        public i createRequest() {
            return new i(this.adTemplate);
        }

        public final void fI() {
            request(this.oT);
        }

        @Override // com.kwad.sdk.core.network.m
        public final BaseResultData parseData(String str) {
            BaseResultData baseResultData = new BaseResultData() { // from class: com.kwad.components.ad.reward.RewardCallbackVerifyHelper$ServerCallbackNetworking$2
            };
            if (!TextUtils.isEmpty(str)) {
                try {
                    baseResultData.parseJson(new JSONObject(str));
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
            }
            return baseResultData;
        }
    }

    private h() {
    }

    /* synthetic */ h(byte b2) {
        this();
    }

    public static h fG() {
        return a.oS;
    }

    private static void q(AdTemplate adTemplate) {
        new b(adTemplate).fI();
    }

    public final void p(AdTemplate adTemplate) {
        com.kwad.sdk.core.e.c.d("RewardCallbackVerifyHelper", "handleRewardVerify");
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        if (TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.bD(adInfoCg))) {
            q.b(adTemplate, adInfoCg);
        } else {
            q(adTemplate);
        }
    }
}
