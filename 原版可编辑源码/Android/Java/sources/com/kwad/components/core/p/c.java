package com.kwad.components.core.p;

import com.kwad.components.core.response.model.AdResultData;

public class c extends b {
    @Override
    public void a(int i, String str, boolean z) {
        onError(i, str);
    }

    @Override
    public void a(AdResultData adResultData) {
    }

    @Override
    public void a(AdResultData adResultData, boolean z) {
        a(adResultData);
    }

    @Override
    public void onError(int i, String str) {
    }
}
