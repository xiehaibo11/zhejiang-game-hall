package com.kwad.components.core.n;

import android.os.Bundle;
import com.kwad.sdk.api.proxy.IFragmentActivityProxy;

public class b extends IFragmentActivityProxy {
    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        finish();
    }
}
