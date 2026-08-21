package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class BaseSystemFragment extends android.app.Fragment {
    public BaseSystemFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.app.Activity getActivity2() {
            r1 = this;
            android.app.Activity r0 = super.getActivity()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = super.getContext()
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r0)
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onAttach(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            super.onAttach(r1)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = super.onGetLayoutInflater(r1)
            android.view.LayoutInflater r1 = com.kwad.sdk.api.loader.Wrapper.wrapInflaterIfNeed(r1)
            return r1
    }
}
