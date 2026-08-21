package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class KsFragmentActivity extends android.support.v4.app.FragmentActivity {
    private com.kwad.sdk.api.core.fragment.KsFragmentManager mFragmentManager;

    public KsFragmentActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final android.support.v4.app.FragmentManager getSupportFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentManager r0 = super.getSupportFragmentManager()
            return r0
    }

    public final com.kwad.sdk.api.core.fragment.KsFragmentManager getSupportFragmentManager2() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mFragmentManager
            if (r0 != 0) goto Lf
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = new com.kwad.sdk.api.core.fragment.KsFragmentManager
            android.support.v4.app.FragmentManager r1 = super.getSupportFragmentManager()
            r0.<init>(r1)
            r2.mFragmentManager = r0
        Lf:
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mFragmentManager
            return r0
    }

    @Override
    public final void onAttachFragment(android.support.v4.app.Fragment r2) {
            r1 = this;
            super.onAttachFragment(r2)
            boolean r0 = r2 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r0 == 0) goto L10
            com.kwad.sdk.api.core.fragment.IDelegateFragment r2 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r2
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r2.getBase()
            r1.onAttachFragment(r2)
        L10:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onAttachFragment(com.kwad.sdk.api.core.fragment.KsFragment r1) {
            r0 = this;
            return
    }

    @Override
    protected void onDestroy() {
            r0 = this;
            super.onDestroy()
            com.kwad.sdk.api.core.ComponentDestroyer.destroyActivity(r0)
            return
    }

    @Override
    public final void startActivityFromFragment(android.support.v4.app.Fragment r1, android.content.Intent r2, int r3) {
            r0 = this;
            super.startActivityFromFragment(r1, r2, r3)
            return
    }

    @Override
    public final void startActivityFromFragment(android.support.v4.app.Fragment r1, android.content.Intent r2, int r3, android.os.Bundle r4) {
            r0 = this;
            super.startActivityFromFragment(r1, r2, r3, r4)
            return
    }

    @Override
    public void supportFinishAfterTransition() {
            r0 = this;
            super.supportFinishAfterTransition()
            return
    }
}
