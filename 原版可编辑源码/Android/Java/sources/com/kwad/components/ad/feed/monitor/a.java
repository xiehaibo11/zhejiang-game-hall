package com.kwad.components.ad.feed.monitor;

import android.text.TextUtils;
import android.util.Pair;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.videocache.f;
import com.kwad.sdk.utils.q;
import java.io.File;

public final class a {
    public static Pair<Integer, String> d(AdTemplate adTemplate) {
        String strF = com.kwad.sdk.core.response.b.a.F(d.cg(adTemplate));
        if (TextUtils.isEmpty(strF)) {
            return new Pair<>(2, "empty videoUrl");
        }
        int iZz = com.kwad.sdk.core.config.d.zz();
        String str = "";
        long length = 0;
        int i = 1;
        if (iZz >= 0) {
            if (iZz > 0) {
                a.a aVar = new a.a();
                f fVarBj = com.kwad.sdk.core.videocache.c.a.bj(KsAdSDKImpl.get().getContext());
                if (!fVarBj.dP(strF)) {
                    i = fVarBj.a(strF, iZz * 1024, aVar) ? 1 : 2;
                }
                str = aVar.msg;
                adTemplate.setDownloadSize(iZz * 1024);
            }
            return new Pair<>(Integer.valueOf(i), str);
        }
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
        if (!q.L(fileBR)) {
            a.a aVar2 = new a.a();
            int i2 = com.kwad.sdk.core.diskcache.b.a.Au().a(strF, aVar2) ? 1 : 2;
            str = aVar2.msg;
            i = i2;
        }
        if (fileBR != null) {
            length = fileBR.length();
        }
        adTemplate.setDownloadSize(length);
        return new Pair<>(Integer.valueOf(i), str);
    }
}
