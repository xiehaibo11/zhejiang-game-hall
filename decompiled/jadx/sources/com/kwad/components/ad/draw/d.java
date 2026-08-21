package com.kwad.components.ad.draw;

import android.text.TextUtils;
import com.kwad.components.ad.KsAdLoadManager;
import com.kwad.components.core.p.a.a;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.t.k;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    public static void loadDrawAd(KsScene ksScene, final KsLoadManager.DrawAdListener drawAdListener) {
        SceneImpl sceneImplCovert = SceneImpl.covert(ksScene);
        boolean zA = k.qo().a(sceneImplCovert, "loadDrawAd");
        sceneImplCovert.setAdStyle(6);
        KsAdLoadManager.M();
        KsAdLoadManager.a(new a.C0159a().e(new com.kwad.components.core.p.a.b(sceneImplCovert)).aF(zA).a(new com.kwad.components.core.p.c() { // from class: com.kwad.components.ad.draw.d.1
            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void a(AdResultData adResultData) {
                final ArrayList arrayList = new ArrayList();
                for (AdTemplate adTemplate : adResultData.getAdTemplateList()) {
                    if (adTemplate != null && !TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)))) {
                        arrayList.add(new c(adTemplate));
                    }
                }
                if (!arrayList.isEmpty()) {
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.draw.d.1.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            KsAdLoadManager.M().b(arrayList);
                            drawAdListener.onDrawAdLoad(arrayList);
                        }
                    });
                    return;
                }
                onError(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg + "(无视频资源)" : adResultData.testErrorMsg);
            }

            @Override // com.kwad.components.core.p.c, com.kwad.components.core.p.i
            public final void onError(final int i, final String str) {
                bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.draw.d.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.sdk.core.e.c.d("KsAdDrawLoadManager", "loadDrawAd onError:" + String.format("code:%s__msg:%s", Integer.valueOf(i), str));
                        drawAdListener.onError(i, str);
                    }
                });
            }
        }).pI());
    }
}
