package com.kwad.sdk.api.core.fragment;

class DelegateFragmentLifecycleCallbacks extends android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks {
    private final com.kwad.sdk.api.core.fragment.KsFragmentManager.FragmentLifecycleCallbacks mBase;
    private final com.kwad.sdk.api.core.fragment.KsFragmentManager mFragmentManager;

    DelegateFragmentLifecycleCallbacks(com.kwad.sdk.api.core.fragment.KsFragmentManager r1, com.kwad.sdk.api.core.fragment.KsFragmentManager.FragmentLifecycleCallbacks r2) {
            r0 = this;
            r0.<init>()
            r0.mBase = r2
            r0.mFragmentManager = r1
            return
    }

    @Override
    public void onFragmentActivityCreated(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.os.Bundle r4) {
            r1 = this;
            super.onFragmentActivityCreated(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentActivityCreated(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentAttached(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.content.Context r4) {
            r1 = this;
            super.onFragmentAttached(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentAttached(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentCreated(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.os.Bundle r4) {
            r1 = this;
            super.onFragmentCreated(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentCreated(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentDestroyed(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentDestroyed(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentDestroyed(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentDetached(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentDetached(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentDetached(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentPaused(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentPaused(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentPaused(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentPreAttached(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.content.Context r4) {
            r1 = this;
            super.onFragmentPreAttached(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentPreAttached(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentPreCreated(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.os.Bundle r4) {
            r1 = this;
            super.onFragmentPreCreated(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentPreCreated(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentResumed(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentResumed(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentResumed(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentSaveInstanceState(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.os.Bundle r4) {
            r1 = this;
            super.onFragmentSaveInstanceState(r2, r3, r4)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentSaveInstanceState(r0, r2, r4)
        L14:
            return
    }

    @Override
    public void onFragmentStarted(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentStarted(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentStarted(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentStopped(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentStopped(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentStopped(r0, r2)
        L14:
            return
    }

    @Override
    public void onFragmentViewCreated(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3, android.view.View r4, android.os.Bundle r5) {
            r1 = this;
            super.onFragmentViewCreated(r2, r3, r4, r5)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentViewCreated(r0, r2, r4, r5)
        L14:
            return
    }

    @Override
    public void onFragmentViewDestroyed(android.support.v4.app.FragmentManager r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            super.onFragmentViewDestroyed(r2, r3)
            boolean r2 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r2 == 0) goto L14
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r2 = r3.getBase()
            com.kwad.sdk.api.core.fragment.KsFragmentManager$FragmentLifecycleCallbacks r3 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r1.mFragmentManager
            r3.onFragmentViewDestroyed(r0, r2)
        L14:
            return
    }
}
