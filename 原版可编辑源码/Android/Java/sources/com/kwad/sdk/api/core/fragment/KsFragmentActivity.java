package com.kwad.sdk.api.core.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.FragmentManager;
import com.kwad.sdk.api.core.ComponentDestroyer;
import com.kwad.sdk.api.core.KsAdSdkDynamicApi;

@KsAdSdkDynamicApi
public class KsFragmentActivity extends FragmentActivity {
    private KsFragmentManager mFragmentManager;

    @Override
    public final FragmentManager getSupportFragmentManager() {
        return super.getSupportFragmentManager();
    }

    public final KsFragmentManager getSupportFragmentManager2() {
        if (this.mFragmentManager == null) {
            this.mFragmentManager = new KsFragmentManager(super.getSupportFragmentManager());
        }
        return this.mFragmentManager;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public final void onAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
        if (fragment instanceof IDelegateFragment) {
            onAttachFragment(((IDelegateFragment) fragment).getBase());
        }
    }

    @KsAdSdkDynamicApi
    public void onAttachFragment(KsFragment ksFragment) {
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        ComponentDestroyer.destroyActivity(this);
    }

    @Override
    public final void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        super.startActivityFromFragment(fragment, intent, i);
    }

    @Override
    public final void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        super.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public void supportFinishAfterTransition() {
        super.supportFinishAfterTransition();
    }
}
