package com.kwad.components.core.video;

import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ad;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public final class j {
    public static boolean a(String str, String str2, a.C0212a c0212a) {
        String strBp = ad.bp(str2);
        long jCurrentTimeMillis = System.currentTimeMillis();
        com.kwad.sdk.core.e.c.i("VideoCacheHelper", "start cache video key:" + strBp + "--url:" + str);
        boolean zB = com.kwad.sdk.core.diskcache.b.a.Au().b(str, str2, c0212a);
        com.kwad.sdk.core.e.c.i("VideoCacheHelper", "finish cache video key:" + strBp + "--cache time:" + (System.currentTimeMillis() - jCurrentTimeMillis) + "--success:" + zB);
        return zB;
    }

    public static boolean k(AdTemplate adTemplate) {
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
        return fileBR != null && fileBR.exists();
    }
}
