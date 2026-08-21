package com.kwad.components.ad.interstitial.monitor;

import android.text.TextUtils;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.videocache.f;
import com.kwad.sdk.utils.q;
import java.io.File;

public final class a {
    /* JADX WARN: Removed duplicated region for block: B:23:0x0080  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean h(AdTemplate adTemplate) {
        int i;
        String strF = com.kwad.sdk.core.response.b.a.F(d.cg(adTemplate));
        if (TextUtils.isEmpty(strF)) {
            return false;
        }
        b.cL();
        b.i(adTemplate);
        int iZz = com.kwad.sdk.core.config.d.zz();
        String str = "";
        if (iZz < 0) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
            if (!q.L(fileBR)) {
                a.a aVar = new a.a();
                boolean zA = com.kwad.sdk.core.diskcache.b.a.Au().a(strF, aVar);
                str = aVar.msg;
                zA = zA;
            }
            adTemplate.setDownloadSize(fileBR != null ? fileBR.length() : 0L);
            i = 2;
        } else {
            if (iZz <= 0) {
                adTemplate.setDownloadSize(0L);
                adTemplate.setDownloadType(1);
                if (!zA) {
                    b.cL();
                    b.a(adTemplate, str);
                }
                return zA;
            }
            a.a aVar2 = new a.a();
            f fVarBj = com.kwad.sdk.core.videocache.c.a.bj(KsAdSDKImpl.get().getContext());
            zA = fVarBj.dP(strF) ? true : fVarBj.a(strF, iZz * 1024, aVar2);
            str = aVar2.msg;
            adTemplate.setDownloadSize(iZz * 1024);
            i = 3;
        }
        adTemplate.setDownloadType(i);
        if (!zA) {
        }
        return zA;
    }
}
