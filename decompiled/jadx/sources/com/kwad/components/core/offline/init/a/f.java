package com.kwad.components.core.offline.init.a;

import android.content.Context;
import com.kwad.components.offline.api.core.api.INet;
import com.kwad.sdk.core.network.idc.DomainException;
import com.kwad.sdk.utils.ag;

/* JADX INFO: loaded from: classes2.dex */
final class f implements INet {
    f() {
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final int getActiveNetworkType(Context context) {
        return ag.getActiveNetworkType(context);
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final String getCurrHost(String str, String str2) {
        return com.kwad.sdk.core.network.idc.a.Bo().P(str, str2);
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final void handleSwitchHost(String str, String str2, int i, Throwable th) {
        com.kwad.sdk.core.network.idc.a.Bo().a(str, str2, new DomainException(i, th));
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final boolean isMobileConnected(Context context) {
        return ag.isMobileConnected(context);
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final boolean isNetworkConnected(Context context) {
        return ag.isNetworkConnected(context);
    }

    @Override // com.kwad.components.offline.api.core.api.INet
    public final boolean isWifiConnected(Context context) {
        return ag.isWifiConnected(context);
    }
}
