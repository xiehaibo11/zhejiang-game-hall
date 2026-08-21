package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class KsFragment extends com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle implements com.kwad.sdk.api.core.fragment.IFragment, com.kwad.sdk.api.core.fragment.IFragmentLifecycle {
    private static final android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> sClassMap = null;
    private android.support.v4.app.Fragment mBase;
    private com.kwad.sdk.api.core.fragment.KsFragmentManager mChildFragmentManager;
    private com.kwad.sdk.api.core.fragment.KsFragmentManager mFragmentManager;
    private com.kwad.sdk.api.core.lifecycle.KsLifecycle mLifeCycle;

    static {
            android.support.v4.util.SimpleArrayMap r0 = new android.support.v4.util.SimpleArrayMap
            r0.<init>()
            com.kwad.sdk.api.core.fragment.KsFragment.sClassMap = r0
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public KsFragment() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.api.core.fragment.ResFragment r0 = new com.kwad.sdk.api.core.fragment.ResFragment
            r0.<init>(r1)
            r1.mBase = r0
            return
    }

    protected KsFragment(android.support.v4.app.Fragment r1) {
            r0 = this;
            r0.<init>()
            r0.mBase = r1
            return
    }

    public static com.kwad.sdk.api.core.fragment.KsFragment instantiate(android.content.Context r2, java.lang.String r3, android.os.Bundle r4) {
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r0 = com.kwad.sdk.api.core.fragment.KsFragment.sClassMap     // Catch: java.lang.Exception -> L37
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Exception -> L37
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L17
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> L37
            java.lang.Class r0 = r2.loadClass(r3)     // Catch: java.lang.Exception -> L37
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r2 = com.kwad.sdk.api.core.fragment.KsFragment.sClassMap     // Catch: java.lang.Exception -> L37
            r2.put(r3, r0)     // Catch: java.lang.Exception -> L37
        L17:
            r2 = 0
            java.lang.Class[] r1 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L37
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> L37
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L37
            java.lang.Object r2 = r0.newInstance(r2)     // Catch: java.lang.Exception -> L37
            com.kwad.sdk.api.core.fragment.KsFragment r2 = (com.kwad.sdk.api.core.fragment.KsFragment) r2     // Catch: java.lang.Exception -> L37
            if (r4 == 0) goto L36
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Exception -> L37
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Exception -> L37
            r4.setClassLoader(r0)     // Catch: java.lang.Exception -> L37
            r2.setArguments(r4)     // Catch: java.lang.Exception -> L37
        L36:
            return r2
        L37:
            r2 = move-exception
            android.support.v4.app.Fragment$InstantiationException r4 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Unable to instantiate fragment "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ": make sure class name exists, is public, and has an empty constructor that is public"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3, r2)
            throw r4
    }

    private boolean isAllFragmentIsHidden(android.support.v4.app.Fragment r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r2.getParentFragment()
            boolean r2 = r2.isHidden()
            if (r0 != 0) goto Lb
            return r2
        Lb:
            if (r2 != 0) goto L16
            boolean r2 = r1.isAllFragmentIsHidden(r0)
            if (r2 == 0) goto L14
            goto L16
        L14:
            r2 = 0
            return r2
        L16:
            r2 = 1
            return r2
    }

    private boolean isKsAdParentFragment() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.support.v4.app.Fragment r0 = r0.getParentFragment()
            if (r0 == 0) goto Le
            boolean r0 = r0 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.dump(r2, r3, r4, r5)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.app.Activity getActivity() {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mBase
            boolean r1 = r0 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r1 == 0) goto Ld
            com.kwad.sdk.api.core.fragment.IDelegateFragment r0 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r0
            android.app.Activity r0 = r0.getActivity2()
            return r0
        Ld:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.support.v4.app.Fragment r2 = r3.mBase
            r1.append(r2)
            java.lang.String r2 = " must be DelegateFragment or DelegateDialogFragment"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean getAllowEnterTransitionOverlap() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.getAllowEnterTransitionOverlap()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean getAllowReturnTransitionOverlap() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.getAllowReturnTransitionOverlap()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.os.Bundle getArguments() {
            r2 = this;
            android.support.v4.app.Fragment r0 = r2.mBase
            android.os.Bundle r0 = r0.getArguments()
            if (r0 == 0) goto L13
            com.kwad.sdk.api.loader.Loader r1 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r1 = r1.getRealClassLoader()
            r0.setClassLoader(r1)
        L13:
            return r0
    }

    public final android.support.v4.app.Fragment getBase() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentManager getChildFragmentManager() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mChildFragmentManager
            if (r0 != 0) goto L11
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = new com.kwad.sdk.api.core.fragment.KsFragmentManager
            android.support.v4.app.Fragment r1 = r2.mBase
            android.support.v4.app.FragmentManager r1 = r1.getChildFragmentManager()
            r0.<init>(r1)
            r2.mChildFragmentManager = r0
        L11:
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mChildFragmentManager
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public final android.content.Context getContext() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public java.lang.Object getEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getEnterTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getExitTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getExitTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.fragment.KsFragmentManager getFragmentManager() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mFragmentManager
            if (r0 != 0) goto L11
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = new com.kwad.sdk.api.core.fragment.KsFragmentManager
            android.support.v4.app.Fragment r1 = r2.mBase
            android.support.v4.app.FragmentManager r1 = r1.getFragmentManager()
            r0.<init>(r1)
            r2.mFragmentManager = r0
        L11:
            com.kwad.sdk.api.core.fragment.KsFragmentManager r0 = r2.mFragmentManager
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getHost() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getHost()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final int getId() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            int r0 = r0.getId()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.view.LayoutInflater getLayoutInflater(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.view.LayoutInflater r2 = r0.getLayoutInflater(r2)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public com.kwad.sdk.api.core.lifecycle.KsLifecycle getLifecycle() {
            r2 = this;
            com.kwad.sdk.api.core.lifecycle.KsLifecycle r0 = r2.mLifeCycle
            if (r0 != 0) goto L11
            com.kwad.sdk.api.core.lifecycle.KsLifecycle r0 = new com.kwad.sdk.api.core.lifecycle.KsLifecycle
            android.support.v4.app.Fragment r1 = r2.mBase
            android.arch.lifecycle.Lifecycle r1 = r1.getLifecycle()
            r0.<init>(r1)
            r2.mLifeCycle = r0
        L11:
            com.kwad.sdk.api.core.lifecycle.KsLifecycle r0 = r2.mLifeCycle
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final com.kwad.sdk.api.core.fragment.KsFragment getParentFragment() {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mBase
            android.support.v4.app.Fragment r0 = r0.getParentFragment()
            boolean r1 = r0 instanceof com.kwad.sdk.api.core.fragment.IDelegateFragment
            if (r1 == 0) goto L11
            com.kwad.sdk.api.core.fragment.IDelegateFragment r0 = (com.kwad.sdk.api.core.fragment.IDelegateFragment) r0
            com.kwad.sdk.api.core.fragment.KsFragment r0 = r0.getBase()
            return r0
        L11:
            if (r0 != 0) goto L15
            r0 = 0
            return r0
        L15:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = " is not a DelegateFragment or DelegateDialogFragment"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getReenterTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getReenterTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public final android.content.res.Resources getResources() {
            r2 = this;
            java.lang.Boolean r0 = com.kwad.sdk.api.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L13
            android.support.v4.app.Fragment r0 = r2.mBase
            android.content.Context r0 = r0.getContext()
            android.content.res.Resources r0 = r0.getResources()
            return r0
        L13:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "please use getContext().getResources()"
            r0.<init>(r1)
            throw r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean getRetainInstance() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.getRetainInstance()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getReturnTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getReturnTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getSharedElementEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getSharedElementEnterTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.Object getSharedElementReturnTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.Object r0 = r0.getSharedElementReturnTransition()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public final java.lang.String getString(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r2 = r0.getString(r2)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public final java.lang.String getString(int r2, java.lang.Object... r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final java.lang.String getTag() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            java.lang.String r0 = r0.getTag()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final int getTargetRequestCode() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            int r0 = r0.getTargetRequestCode()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public final java.lang.CharSequence getText(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.CharSequence r2 = r0.getText(r2)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean getUserVisibleHint() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.getUserVisibleHint()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final android.view.View getView() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.view.View r0 = r0.getView()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean hasOptionsMenu() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.hasOptionsMenu()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isAdded() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isAdded()
            return r0
    }

    public boolean isAllFragmentIsHidden() {
            r4 = this;
            boolean r0 = r4.isKsAdParentFragment()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L22
            com.kwad.sdk.api.core.fragment.KsFragment r0 = r4.getParentFragment()
            if (r0 != 0) goto L13
            boolean r0 = r4.isHidden()
            return r0
        L13:
            boolean r3 = r4.isHidden()
            if (r3 != 0) goto L21
            boolean r0 = r0.isAllFragmentIsHidden()
            if (r0 == 0) goto L20
            goto L21
        L20:
            return r1
        L21:
            return r2
        L22:
            android.support.v4.app.Fragment r0 = r4.mBase
            android.support.v4.app.Fragment r3 = r0.getParentFragment()
            boolean r0 = r0.isHidden()
            if (r3 != 0) goto L2f
            return r0
        L2f:
            if (r0 != 0) goto L39
            boolean r0 = r4.isAllFragmentIsHidden(r3)
            if (r0 == 0) goto L38
            goto L39
        L38:
            return r1
        L39:
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isDetached() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isDetached()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isHidden() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isHidden()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isInLayout() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isInLayout()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isMenuVisible() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isMenuVisible()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isRemoving() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isRemoving()
            return r0
    }

    @Override
    public final boolean isResumed() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isResumed()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isStateSaved() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isStateSaved()
            return r0
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean isVisible() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r0 = r0.isVisible()
            return r0
    }

    @Override
    @java.lang.Deprecated
    public void onActivityCreated(android.os.Bundle r1) {
            r0 = this;
            super.onActivityCreated(r1)
            return
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r2, r3)
            return
    }

    @Override
    public void onAttach(android.app.Activity r1) {
            r0 = this;
            super.onAttach(r1)
            return
    }

    @Override
    public void onAttach(android.content.Context r1) {
            r0 = this;
            super.onAttach(r1)
            return
    }

    @Override
    public void onAttachFragment(com.kwad.sdk.api.core.fragment.KsFragment r1) {
            r0 = this;
            super.onAttachFragment(r1)
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    public boolean onContextItemSelected(android.view.MenuItem r1) {
            r0 = this;
            boolean r1 = super.onContextItemSelected(r1)
            return r1
    }

    @Override
    public void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    @Override
    public android.view.animation.Animation onCreateAnimation(int r1, boolean r2, int r3) {
            r0 = this;
            android.view.animation.Animation r1 = super.onCreateAnimation(r1, r2, r3)
            return r1
    }

    @Override
    public android.animation.Animator onCreateAnimator(int r1, boolean r2, int r3) {
            r0 = this;
            android.animation.Animator r1 = super.onCreateAnimator(r1, r2, r3)
            return r1
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r1, android.view.View r2, android.view.ContextMenu.ContextMenuInfo r3) {
            r0 = this;
            super.onCreateContextMenu(r1, r2, r3)
            return
    }

    @Override
    public void onCreateOptionsMenu(android.view.Menu r1, android.view.MenuInflater r2) {
            r0 = this;
            super.onCreateOptionsMenu(r1, r2)
            return
    }

    @Override
    public android.view.View onCreateView(android.view.LayoutInflater r1, android.view.ViewGroup r2, android.os.Bundle r3) {
            r0 = this;
            android.view.View r1 = super.onCreateView(r1, r2, r3)
            return r1
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onDestroyOptionsMenu() {
            r0 = this;
            super.onDestroyOptionsMenu()
            return
    }

    @Override
    public void onDestroyView() {
            r0 = this;
            super.onDestroyView()
            return
    }

    @Override
    public void onDetach() {
            r0 = this;
            super.onDetach()
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.view.LayoutInflater r2 = r0.onGetLayoutInflater(r2)
            return r2
    }

    @Override
    public void onHiddenChanged(boolean r1) {
            r0 = this;
            super.onHiddenChanged(r1)
            return
    }

    @Override
    public void onInflate(android.app.Activity r1, android.util.AttributeSet r2, android.os.Bundle r3) {
            r0 = this;
            super.onInflate(r1, r2, r3)
            return
    }

    @Override
    public void onInflate(android.content.Context r1, android.util.AttributeSet r2, android.os.Bundle r3) {
            r0 = this;
            super.onInflate(r1, r2, r3)
            return
    }

    @Override
    public void onLowMemory() {
            r0 = this;
            super.onLowMemory()
            return
    }

    @Override
    public void onMultiWindowModeChanged(boolean r1) {
            r0 = this;
            super.onMultiWindowModeChanged(r1)
            return
    }

    @Override
    public boolean onOptionsItemSelected(android.view.MenuItem r1) {
            r0 = this;
            boolean r1 = super.onOptionsItemSelected(r1)
            return r1
    }

    @Override
    public void onOptionsMenuClosed(android.view.Menu r1) {
            r0 = this;
            super.onOptionsMenuClosed(r1)
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            super.onPause()
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r1) {
            r0 = this;
            super.onPictureInPictureModeChanged(r1)
            return
    }

    @Override
    public void onPrepareOptionsMenu(android.view.Menu r1) {
            r0 = this;
            super.onPrepareOptionsMenu(r1)
            return
    }

    @Override
    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onSaveInstanceState(r1)
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            super.onStart()
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            super.onStop()
            return
    }

    @Override
    public void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            super.onViewCreated(r1, r2)
            return
    }

    @Override
    public void onViewStateRestored(android.os.Bundle r1) {
            r0 = this;
            super.onViewStateRestored(r1)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void postponeEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.postponeEnterTransition()
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void registerForContextMenu(android.view.View r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.registerForContextMenu(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void requestPermissions(java.lang.String[] r2, int r3) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.requestPermissions(r2, r3)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setAllowEnterTransitionOverlap(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setAllowEnterTransitionOverlap(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setAllowReturnTransitionOverlap(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setAllowReturnTransitionOverlap(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setArguments(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setArguments(r2)
            return
    }

    protected void setBase(android.support.v4.app.Fragment r1) {
            r0 = this;
            r0.mBase = r1
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setEnterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setEnterTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setExitTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setExitTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setHasOptionsMenu(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setHasOptionsMenu(r2)
            return
    }

    @Override
    public void setInitialSavedState(com.kwad.sdk.api.core.fragment.KsSavedState r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            android.support.v4.app.Fragment$SavedState r2 = r2.getBase()
            r0.setInitialSavedState(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setMenuVisibility(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setMenuVisibility(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setReenterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setReenterTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setRetainInstance(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setRetainInstance(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setReturnTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setReturnTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setSharedElementEnterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setSharedElementEnterTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void setSharedElementReturnTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setSharedElementReturnTransition(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setUserVisibleHint(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.setUserVisibleHint(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final boolean shouldShowRequestPermissionRationale(java.lang.String r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            boolean r2 = r0.shouldShowRequestPermissionRationale(r2)
            return r2
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startActivity(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.startActivity(r2)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.startActivity(r2, r3)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.startActivityForResult(r2, r3)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startActivityForResult(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.startActivityForResult(r2, r3, r4)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startIntentSenderForResult(android.content.IntentSender r9, int r10, android.content.Intent r11, int r12, int r13, int r14, android.os.Bundle r15) {
            r8 = this;
            android.support.v4.app.Fragment r0 = r8.mBase
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void startPostponedEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.startPostponedEnterTransition()
            return
    }

    @Override
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public final void unregisterForContextMenu(android.view.View r2) {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mBase
            r0.unregisterForContextMenu(r2)
            return
    }
}
