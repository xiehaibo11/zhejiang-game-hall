package com.kwad.components.offline.adLive;

import android.content.Context;
import com.kwad.components.core.offline.init.a.i;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo;
import com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig;
import com.kwad.components.offline.api.core.adlive.listener.AdLiveHttpRequestListenerDelegate;
import com.kwad.components.offline.api.core.api.IOfflineCompoWrapper;
import com.kwad.components.offline.api.core.soloader.ISoLoader;
import com.kwad.components.offline.api.core.soloader.SoLoadListener;
import com.kwad.sdk.core.network.c;
import com.kwad.sdk.g;
import com.kwad.sdk.utils.aq;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements IAdLiveOfflineCompoInitConfig {
    @Override // com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig
    public final AdLiveHttpRequestListenerDelegate getAdLiveHttpRequestListenerDelegate() {
        return new AdLiveHttpRequestListenerDelegate() { // from class: com.kwad.components.offline.adLive.b.2
            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLiveHttpRequestListenerDelegate
            public final c doPost(String str, Map<String, String> map, Map<String, String> map2, Map<String, String> map3) {
                try {
                    return g.wX().doPost(aq.appendUrl(str, map), map2, map3);
                } catch (Throwable unused) {
                    return null;
                }
            }
        };
    }

    @Override // com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig
    public final ISoLoader soLoader() {
        return new ISoLoader() { // from class: com.kwad.components.offline.adLive.b.1
            @Override // com.kwad.components.offline.api.core.soloader.ISoLoader
            public final void loadSo(Context context, SoLoadListener soLoadListener) {
                com.kwad.components.offline.adLive.a.a.a(context, soLoadListener);
            }
        };
    }

    @Override // com.kwad.components.offline.api.IOfflineCompoInitConfig
    public final IOfflineCompoWrapper wrapper() {
        return new i(IAdLiveOfflineCompo.PACKAGE_NAME);
    }
}
