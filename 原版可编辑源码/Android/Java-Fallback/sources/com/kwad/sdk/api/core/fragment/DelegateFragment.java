package com.kwad.sdk.api.core.fragment;

abstract class DelegateFragment extends android.support.v4.app.Fragment implements com.kwad.sdk.api.core.fragment.IDelegateFragment {
    private static final java.lang.String REAL_BASE_CLASS = "real_base_class";
    private com.kwad.sdk.api.core.fragment.IFragmentLifecycle mBase;

    protected DelegateFragment(com.kwad.sdk.api.core.fragment.KsFragment r1) {
            r0 = this;
            r0.<init>()
            r0.mBase = r1
            return
    }

    @Override
    public android.app.Activity getActivity2() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.getActivity()
            return r0
    }

    @Override
    public com.kwad.sdk.api.core.fragment.KsFragment getBase() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            com.kwad.sdk.api.core.fragment.KsFragment r0 = (com.kwad.sdk.api.core.fragment.KsFragment) r0
            return r0
    }

    @Override
    @java.lang.Deprecated
    public void onActivityCreated(android.os.Bundle r2) {
            r1 = this;
            super.onActivityCreated(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onActivityCreated(r2)
            return
    }

    @Override
    public void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onActivityResult(r2, r3, r4)
            return
    }

    @Override
    public void onAttach(android.app.Activity r2) {
            r1 = this;
            super.onAttach(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onAttach(r2)
            return
    }

    @Override
    public void onAttach(android.content.Context r2) {
            r1 = this;
            super.onAttach(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onAttach(r2)
            return
    }

    @Override
    public void onAttachFragment(android.support.v4.app.Fragment r3) {
            r2 = this;
            boolean r0 = r3 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r0 == 0) goto L10
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r2.mBase
            com.kwad.sdk.api.core.fragment.IDelegateFragment r3 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r3
            com.kwad.sdk.api.core.fragment.KsFragment r3 = r3.getBase()
            r0.onAttachFragment(r3)
            return
        L10:
            if (r3 != 0) goto L19
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r3 = r2.mBase
            r0 = 0
            r3.onAttachFragment(r0)
            return
        L19:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " is not a DelegateFragment or DelegateDialogFragment"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onConfigurationChanged(r2)
            return
    }

    @Override
    public boolean onContextItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            boolean r2 = r0.onContextItemSelected(r2)
            return r2
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            if (r3 == 0) goto L26
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()     // Catch: java.lang.Exception -> L23
            java.lang.ClassLoader r0 = r0.getRealClassLoader()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "real_base_class"
            java.lang.Object r1 = r3.get(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L23
            java.lang.Class r0 = r0.loadClass(r1)     // Catch: java.lang.Exception -> L23
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L23
            com.kwad.sdk.api.core.fragment.KsFragment r0 = (com.kwad.sdk.api.core.fragment.KsFragment) r0     // Catch: java.lang.Exception -> L23
            r2.mBase = r0     // Catch: java.lang.Exception -> L23
            com.kwad.sdk.api.core.fragment.KsFragment r0 = (com.kwad.sdk.api.core.fragment.KsFragment) r0     // Catch: java.lang.Exception -> L23
            r0.setBase(r2)     // Catch: java.lang.Exception -> L23
        L23:
            r3.clear()
        L26:
            super.onCreate(r3)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r2.mBase
            r0.onCreate(r3)
            return
    }

    @Override
    public android.view.animation.Animation onCreateAnimation(int r2, boolean r3, int r4) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            android.view.animation.Animation r2 = r0.onCreateAnimation(r2, r3, r4)
            return r2
    }

    @Override
    public android.animation.Animator onCreateAnimator(int r2, boolean r3, int r4) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            android.animation.Animator r2 = r0.onCreateAnimator(r2, r3, r4)
            return r2
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r2, android.view.View r3, android.view.ContextMenu.ContextMenuInfo r4) {
            r1 = this;
            super.onCreateContextMenu(r2, r3, r4)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onCreateContextMenu(r2, r3, r4)
            return
    }

    @Override
    public void onCreateOptionsMenu(android.view.Menu r2, android.view.MenuInflater r3) {
            r1 = this;
            super.onCreateOptionsMenu(r2, r3)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onCreateOptionsMenu(r2, r3)
            return
    }

    @Override
    public android.view.View onCreateView(android.view.LayoutInflater r2, android.view.ViewGroup r3, android.os.Bundle r4) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            android.view.View r2 = r0.onCreateView(r2, r3, r4)
            return r2
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onDestroy()
            return
    }

    @Override
    public void onDestroyOptionsMenu() {
            r1 = this;
            super.onDestroyOptionsMenu()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onDestroyOptionsMenu()
            return
    }

    @Override
    public void onDestroyView() {
            r1 = this;
            super.onDestroyView()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onDestroyView()
            return
    }

    @Override
    public void onDetach() {
            r1 = this;
            super.onDetach()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onDetach()
            return
    }

    @Override
    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = super.onGetLayoutInflater(r1)
            return r1
    }

    @Override
    public void onHiddenChanged(boolean r2) {
            r1 = this;
            super.onHiddenChanged(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onHiddenChanged(r2)
            return
    }

    @Override
    public void onInflate(android.app.Activity r2, android.util.AttributeSet r3, android.os.Bundle r4) {
            r1 = this;
            super.onInflate(r2, r3, r4)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onInflate(r2, r3, r4)
            return
    }

    @Override
    public void onInflate(android.content.Context r2, android.util.AttributeSet r3, android.os.Bundle r4) {
            r1 = this;
            super.onInflate(r2, r3, r4)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onInflate(r2, r3, r4)
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            super.onLowMemory()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onLowMemory()
            return
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2) {
            r1 = this;
            super.onMultiWindowModeChanged(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onMultiWindowModeChanged(r2)
            return
    }

    @Override
    public boolean onOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            boolean r2 = r0.onOptionsItemSelected(r2)
            return r2
    }

    @Override
    public void onOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            super.onOptionsMenuClosed(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onOptionsMenuClosed(r2)
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onPause()
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            super.onPictureInPictureModeChanged(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onPictureInPictureModeChanged(r2)
            return
    }

    @Override
    public void onPrepareOptionsMenu(android.view.Menu r2) {
            r1 = this;
            super.onPrepareOptionsMenu(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onPrepareOptionsMenu(r2)
            return
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            super.onRequestPermissionsResult(r2, r3, r4)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onRequestPermissionsResult(r2, r3, r4)
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onResume()
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            super.onSaveInstanceState(r3)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r2.mBase
            r0.onSaveInstanceState(r3)
            if (r3 == 0) goto L19
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r2.mBase
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "real_base_class"
            r3.putString(r1, r0)
        L19:
            return
    }

    @Override
    public void onStart() {
            r1 = this;
            super.onStart()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onStart()
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            super.onStop()
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onStop()
            return
    }

    @Override
    public void onViewCreated(android.view.View r2, android.os.Bundle r3) {
            r1 = this;
            super.onViewCreated(r2, r3)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onViewCreated(r2, r3)
            return
    }

    @Override
    public void onViewStateRestored(android.os.Bundle r2) {
            r1 = this;
            super.onViewStateRestored(r2)
            com.kwad.sdk.api.core.fragment.IFragmentLifecycle r0 = r1.mBase
            r0.onViewStateRestored(r2)
            return
    }

    void setBase(com.kwad.sdk.api.core.fragment.KsFragment r1) {
            r0 = this;
            r0.mBase = r1
            return
    }
}
