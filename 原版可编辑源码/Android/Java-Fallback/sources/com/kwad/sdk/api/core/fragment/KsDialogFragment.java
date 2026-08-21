package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class KsDialogFragment extends com.kwad.sdk.api.core.fragment.KsFragment implements com.kwad.sdk.api.core.fragment.IDialogFragmentLifecycle {
    private com.kwad.sdk.api.core.fragment.DelegateDialogFragment mBase;

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public KsDialogFragment() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            com.kwad.sdk.api.core.fragment.ResDialogFragment r0 = new com.kwad.sdk.api.core.fragment.ResDialogFragment
            r0.<init>(r1)
            r1.mBase = r0
            r1.setBase(r0)
            return
    }

    KsDialogFragment(com.kwad.sdk.api.core.fragment.DelegateDialogFragment r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mBase = r1
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void dismiss() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.dismiss()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void dismissAllowingStateLoss() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.dismissAllowingStateLoss()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.app.Dialog getDialog() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            android.app.Dialog r0 = r0.getDialog()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean getShowsDialog() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            boolean r0 = r0.getShowsDialog()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public int getTheme() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            int r0 = r0.getTheme()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean isCancelable() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            boolean r0 = r0.isCancelable()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onCancel(android.content.DialogInterface r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.superOnCancel(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.app.Dialog onCreateDialog(android.os.Bundle r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            android.app.Dialog r2 = r0.superOnCreateDialog(r2)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onDismiss(android.content.DialogInterface r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.superOnDismiss(r2)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setCancelable(boolean r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.setCancelable(r2)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setShowsDialog(boolean r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.setShowsDialog(r2)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setStyle(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.setStyle(r2, r3)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setupDialog(android.app.Dialog r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            r0.setupDialog(r2, r3)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public int show(com.kwad.sdk.api.core.fragment.KsFragmentTransaction r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            android.support.v4.app.FragmentTransaction r2 = r2.getBase()
            int r2 = r0.show(r2, r3)
            return r2
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void show(com.kwad.sdk.api.core.fragment.KsFragmentManager r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.DelegateDialogFragment r0 = r1.mBase
            android.support.v4.app.FragmentManager r2 = r2.getBase()
            r0.show(r2, r3)
            return
    }
}
