package com.kwad.sdk.core.imageloader;

import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.b;

public class GlobalImageListener implements OnRenderResultListener<AdTemplate> {
    @Override
    public void onRenderResult(boolean z, AdTemplate adTemplate, String str, String str2) {
        if (!z) {
            ((b) ServiceProvider.get(b.class)).C(str, str2);
        }
        if (z) {
            return;
        }
        ((b) ServiceProvider.get(b.class)).ab(adTemplate);
    }
}
