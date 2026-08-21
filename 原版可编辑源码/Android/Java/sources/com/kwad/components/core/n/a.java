package com.kwad.components.core.n;

import android.os.Bundle;
import com.kwad.sdk.api.proxy.IActivityProxy;

public class a extends IActivityProxy {
    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        finish();
    }
}
