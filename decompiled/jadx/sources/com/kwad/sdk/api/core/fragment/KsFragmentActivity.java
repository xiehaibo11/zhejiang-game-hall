package com.kwad.sdk.api.core.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.FragmentManager;
import com.kwad.sdk.api.core.ComponentDestroyer;
import com.kwad.sdk.api.core.KsAdSdkDynamicApi;

/* JADX INFO: loaded from: classes2.dex */
@KsAdSdkDynamicApi
public class KsFragmentActivity extends FragmentActivity {
    private KsFragmentManager mFragmentManager;

    @Override // android.support.v4.app.FragmentActivity
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
    @Override // android.support.v4.app.FragmentActivity
    public final void onAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
        if (fragment instanceof IDelegateFragment) {
            onAttachFragment(((IDelegateFragment) fragment).getBase());
        }
    }

    @KsAdSdkDynamicApi
    public void onAttachFragment(KsFragment ksFragment) {
    }

    @Override // android.support.v4.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        ComponentDestroyer.destroyActivity(this);
    }

    @Override // android.support.v4.app.FragmentActivity
    public final void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        super.startActivityFromFragment(fragment, intent, i);
    }

    @Override // android.support.v4.app.FragmentActivity
    public final void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        super.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override // android.support.v4.app.FragmentActivity
    public void supportFinishAfterTransition() {
        super.supportFinishAfterTransition();
    }
}
