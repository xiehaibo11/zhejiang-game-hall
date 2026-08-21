package com.kwad.components.ad.c;

import android.text.TextUtils;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.q;
import java.io.File;

public final class a {
    /* JADX WARN: Removed duplicated region for block: B:25:0x007c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(AdTemplate adTemplate, boolean z) {
        AdInfo adInfoCg = d.cg(adTemplate);
        boolean z2 = true;
        if (z && com.kwad.sdk.core.response.b.a.bK(adInfoCg)) {
            return true;
        }
        String strF = com.kwad.sdk.core.response.b.a.F(adInfoCg);
        if (TextUtils.isEmpty(strF)) {
            return false;
        }
        int iZz = com.kwad.sdk.core.config.d.zz();
        String str = "";
        if (iZz < 0) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
            if (!q.L(fileBR)) {
                a.a aVar = new a.a();
                boolean zA = com.kwad.sdk.core.diskcache.b.a.Au().a(strF, aVar);
                str = aVar.msg;
                z2 = zA;
            }
            length = fileBR != null ? fileBR.length() : 0L;
            adTemplate.setDownloadType(2);
        } else {
            if (iZz > 0) {
                a.a aVar2 = new a.a();
                int i = iZz * 1024;
                boolean zA2 = com.kwad.sdk.core.videocache.c.a.bj(KsAdSDKImpl.get().getContext()).a(strF, i, aVar2);
                str = aVar2.msg;
                adTemplate.setDownloadType(3);
                adTemplate.setDownloadSize(i);
                z2 = zA2;
                if (!z2) {
                    com.kwad.components.ad.reward.monitor.a.a(z, adTemplate, str);
                }
                return z2;
            }
            adTemplate.setDownloadType(1);
        }
        adTemplate.setDownloadSize(length);
        if (!z2) {
        }
        return z2;
    }
}
