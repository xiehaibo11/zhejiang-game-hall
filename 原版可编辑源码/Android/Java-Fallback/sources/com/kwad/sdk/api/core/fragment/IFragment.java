package com.kwad.sdk.api.core.fragment;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
interface IFragment {
    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void dump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.app.Activity getActivity();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    boolean getAllowEnterTransitionOverlap();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    boolean getAllowReturnTransitionOverlap();

    android.os.Bundle getArguments();

    com.kwad.sdk.api.core.fragment.KsFragmentManager getChildFragmentManager();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.content.Context getContext();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getEnterTransition();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getExitTransition();

    com.kwad.sdk.api.core.fragment.KsFragmentManager getFragmentManager();

    java.lang.Object getHost();

    int getId();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.view.LayoutInflater getLayoutInflater(android.os.Bundle r1);

    com.kwad.sdk.api.core.lifecycle.KsLifecycle getLifecycle();

    com.kwad.sdk.api.core.fragment.KsFragment getParentFragment();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getReenterTransition();

    android.content.res.Resources getResources();

    boolean getRetainInstance();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getReturnTransition();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getSharedElementEnterTransition();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    java.lang.Object getSharedElementReturnTransition();

    java.lang.String getString(int r1);

    java.lang.String getString(int r1, java.lang.Object... r2);

    java.lang.String getTag();

    int getTargetRequestCode();

    java.lang.CharSequence getText(int r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    boolean getUserVisibleHint();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    android.view.View getView();

    boolean hasOptionsMenu();

    boolean isAdded();

    boolean isDetached();

    boolean isHidden();

    boolean isInLayout();

    boolean isMenuVisible();

    boolean isRemoving();

    boolean isResumed();

    boolean isStateSaved();

    boolean isVisible();

    android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void postponeEnterTransition();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void registerForContextMenu(android.view.View r1);

    void requestPermissions(java.lang.String[] r1, int r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setAllowEnterTransitionOverlap(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setAllowReturnTransitionOverlap(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setArguments(android.os.Bundle r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setEnterTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setExitTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setHasOptionsMenu(boolean r1);

    void setInitialSavedState(com.kwad.sdk.api.core.fragment.KsSavedState r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setMenuVisibility(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setReenterTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setRetainInstance(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setReturnTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setSharedElementEnterTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setSharedElementReturnTransition(java.lang.Object r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void setUserVisibleHint(boolean r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    boolean shouldShowRequestPermissionRationale(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startActivity(android.content.Intent r1);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startActivity(android.content.Intent r1, android.os.Bundle r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startActivityForResult(android.content.Intent r1, int r2);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startActivityForResult(android.content.Intent r1, int r2, android.os.Bundle r3);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startIntentSenderForResult(android.content.IntentSender r1, int r2, android.content.Intent r3, int r4, int r5, int r6, android.os.Bundle r7);

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void startPostponedEnterTransition();

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    void unregisterForContextMenu(android.view.View r1);
}
