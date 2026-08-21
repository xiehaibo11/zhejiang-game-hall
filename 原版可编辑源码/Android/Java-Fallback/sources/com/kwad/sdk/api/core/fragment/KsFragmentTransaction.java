package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class KsFragmentTransaction {
    private final android.support.v4.app.FragmentTransaction mBase;

    public KsFragmentTransaction(android.support.v4.app.FragmentTransaction r1) {
            r0 = this;
            r0.<init>()
            r0.mBase = r1
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction add(int r2, com.kwad.sdk.api.core.fragment.KsFragment r3) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r3 = r3.getBase()
            r0.add(r2, r3)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction add(int r2, com.kwad.sdk.api.core.fragment.KsFragment r3, java.lang.String r4) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r3 = r3.getBase()
            r0.add(r2, r3, r4)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction add(com.kwad.sdk.api.core.fragment.KsFragment r2, java.lang.String r3) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.add(r2, r3)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction addSharedElement(android.view.View r2, java.lang.String r3) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.addSharedElement(r2, r3)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction addToBackStack(java.lang.String r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.addToBackStack(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction attach(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.attach(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public int commit() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            int r0 = r0.commit()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public int commitAllowingStateLoss() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            int r0 = r0.commitAllowingStateLoss()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void commitNow() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.commitNow()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void commitNowAllowingStateLoss() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.commitNowAllowingStateLoss()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction detach(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.detach(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction disallowAddToBackStack() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.disallowAddToBackStack()
            return r1
    }

    android.support.v4.app.FragmentTransaction getBase() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction hide(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.hide(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean isAddToBackStackAllowed() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            boolean r0 = r0.isAddToBackStackAllowed()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean isEmpty() {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            boolean r0 = r0.isEmpty()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction remove(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.remove(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction replace(int r2, com.kwad.sdk.api.core.fragment.KsFragment r3) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r3 = r3.getBase()
            r0.replace(r2, r3)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction replace(int r2, com.kwad.sdk.api.core.fragment.KsFragment r3, java.lang.String r4) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r3 = r3.getBase()
            r0.replace(r2, r3, r4)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction runOnCommit(java.lang.Runnable r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.runOnCommit(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setAllowOptimization(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setAllowOptimization(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setBreadCrumbShortTitle(int r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setBreadCrumbShortTitle(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setBreadCrumbShortTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setBreadCrumbShortTitle(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setBreadCrumbTitle(int r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setBreadCrumbTitle(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setBreadCrumbTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setBreadCrumbTitle(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setCustomAnimations(int r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setCustomAnimations(r2, r3)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setCustomAnimations(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setCustomAnimations(r2, r3, r4, r5)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setPrimaryNavigationFragment(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.setPrimaryNavigationFragment(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setReorderingAllowed(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setReorderingAllowed(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setTransition(int r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setTransition(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction setTransitionStyle(int r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            r0.setTransitionStyle(r2)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentTransaction show(com.kwad.sdk.api.core.fragment.KsFragment r2) {
            r1 = this;
            android.support.v4.app.FragmentTransaction r0 = r1.mBase
            android.support.v4.app.Fragment r2 = r2.getBase()
            r0.show(r2)
            return r1
    }
}
