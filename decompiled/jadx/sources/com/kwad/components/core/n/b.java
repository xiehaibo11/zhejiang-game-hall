package com.kwad.components.core.n;

import android.os.Bundle;
import com.kwad.sdk.api.proxy.IFragmentActivityProxy;

/* JADX INFO: loaded from: classes2.dex */
public class b extends IFragmentActivityProxy {
    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        finish();
    }
}
