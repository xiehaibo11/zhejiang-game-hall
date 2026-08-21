package com.kwad.components.ad.reward;

import com.kwad.components.ad.reward.model.RewardCallBackRespInfo;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class n {
    public static void a(final int i, final j jVar) {
        com.kwad.sdk.core.network.m<com.kwad.components.core.p.d, RewardCallBackRespInfo> mVar = new com.kwad.sdk.core.network.m<com.kwad.components.core.p.d, RewardCallBackRespInfo>() { // from class: com.kwad.components.ad.reward.n.1
            private static RewardCallBackRespInfo M(String str) {
                JSONObject jSONObject = new JSONObject(str);
                RewardCallBackRespInfo rewardCallBackRespInfo = new RewardCallBackRespInfo();
                rewardCallBackRespInfo.parseJson(jSONObject);
                return rewardCallBackRespInfo;
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.a
            /* JADX INFO: renamed from: gy, reason: merged with bridge method [inline-methods] */
            public com.kwad.components.core.p.d createRequest() {
                return new com.kwad.components.core.p.d(i, jVar.mAdTemplate);
            }

            @Override // com.kwad.sdk.core.network.m
            public final /* synthetic */ BaseResultData parseData(String str) {
                return M(str);
            }
        };
        if (i == 1) {
            mVar.request(n(jVar));
        } else if (i == 2) {
            mVar.request(o(jVar));
        }
    }

    public static void a(j jVar, long j, long j2, long j3) {
        boolean zP = p(jVar);
        long jCH = zP ? com.kwad.sdk.core.response.b.a.cH(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate)) : 0L;
        if (jVar.ps || !zP || !jVar.mCheckExposureResult || j <= ((j2 - 800) - j3) - jCH || jCH <= 0) {
            return;
        }
        if (com.kwad.sdk.core.response.b.a.cI(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate))) {
            jVar.pr = 1;
            a(2, jVar);
        } else {
            jVar.mAdOpenInteractionListener.onRewardVerify();
        }
        jVar.ps = true;
    }

    private static com.kwad.sdk.core.network.p<com.kwad.components.core.p.d, RewardCallBackRespInfo> n(final j jVar) {
        return new com.kwad.sdk.core.network.p<com.kwad.components.core.p.d, RewardCallBackRespInfo>() { // from class: com.kwad.components.ad.reward.n.2
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onStartRequest(com.kwad.components.core.p.d dVar) {
                dVar.PD = System.currentTimeMillis();
                com.kwad.components.ad.reward.check.a.c(jVar.mAdTemplate, 1);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(com.kwad.components.core.p.d dVar, int i, String str) {
                super.onError(dVar, i, str);
                bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.n.2.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        jVar.mCheckExposureResult = false;
                    }
                });
                com.kwad.components.ad.reward.check.a.a(jVar.mAdTemplate, 1, System.currentTimeMillis() - dVar.PD, i, str);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onSuccess(com.kwad.components.core.p.d dVar, final RewardCallBackRespInfo rewardCallBackRespInfo) {
                bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.n.2.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        jVar.mCheckExposureResult = rewardCallBackRespInfo.result == 1;
                    }
                });
                com.kwad.components.ad.reward.check.a.a(jVar.mAdTemplate, 1, System.currentTimeMillis() - dVar.PD, rewardCallBackRespInfo.result, rewardCallBackRespInfo.errorMsg);
            }
        };
    }

    private static com.kwad.sdk.core.network.p<com.kwad.components.core.p.d, RewardCallBackRespInfo> o(final j jVar) {
        return new com.kwad.sdk.core.network.p<com.kwad.components.core.p.d, RewardCallBackRespInfo>() { // from class: com.kwad.components.ad.reward.n.3
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onStartRequest(com.kwad.components.core.p.d dVar) {
                dVar.PD = System.currentTimeMillis();
                com.kwad.components.ad.reward.check.a.c(jVar.mAdTemplate, 2);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(com.kwad.components.core.p.d dVar, int i, String str) {
                super.onError(dVar, i, str);
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.n.3.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        jVar.pr = 2;
                    }
                });
                com.kwad.components.ad.reward.check.a.a(jVar.mAdTemplate, 2, System.currentTimeMillis() - dVar.PD, i, str);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onSuccess(com.kwad.components.core.p.d dVar, final RewardCallBackRespInfo rewardCallBackRespInfo) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.n.3.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        j jVar2;
                        int i = 1;
                        if (rewardCallBackRespInfo.result == 1) {
                            jVar2 = jVar;
                        } else {
                            jVar2 = jVar;
                            i = 2;
                        }
                        jVar2.pr = i;
                        jVar.mAdOpenInteractionListener.onRewardVerify();
                    }
                });
                com.kwad.components.ad.reward.check.a.a(jVar.mAdTemplate, 2, System.currentTimeMillis() - dVar.PD, rewardCallBackRespInfo.result, rewardCallBackRespInfo.errorMsg);
            }
        };
    }

    private static boolean p(j jVar) {
        return !jVar.ps && com.kwad.sdk.core.response.b.a.cJ(com.kwad.sdk.core.response.b.d.cg(jVar.mAdTemplate));
    }
}
