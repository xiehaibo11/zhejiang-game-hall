package com.kwad.sdk.api.core.fragment;

interface IFragmentLifecycle {
    @java.lang.Deprecated
    void onActivityCreated(android.os.Bundle r1);

    void onActivityResult(int r1, int r2, android.content.Intent r3);

    void onAttach(android.app.Activity r1);

    void onAttach(android.content.Context r1);

    void onAttachFragment(com.kwad.sdk.api.core.fragment.KsFragment r1);

    void onConfigurationChanged(android.content.res.Configuration r1);

    boolean onContextItemSelected(android.view.MenuItem r1);

    void onCreate(android.os.Bundle r1);

    android.view.animation.Animation onCreateAnimation(int r1, boolean r2, int r3);

    android.animation.Animator onCreateAnimator(int r1, boolean r2, int r3);

    void onCreateContextMenu(android.view.ContextMenu r1, android.view.View r2, android.view.ContextMenu.ContextMenuInfo r3);

    void onCreateOptionsMenu(android.view.Menu r1, android.view.MenuInflater r2);

    android.view.View onCreateView(android.view.LayoutInflater r1, android.view.ViewGroup r2, android.os.Bundle r3);

    void onDestroy();

    void onDestroyOptionsMenu();

    void onDestroyView();

    void onDetach();

    void onHiddenChanged(boolean r1);

    void onInflate(android.app.Activity r1, android.util.AttributeSet r2, android.os.Bundle r3);

    void onInflate(android.content.Context r1, android.util.AttributeSet r2, android.os.Bundle r3);

    void onLowMemory();

    void onMultiWindowModeChanged(boolean r1);

    boolean onOptionsItemSelected(android.view.MenuItem r1);

    void onOptionsMenuClosed(android.view.Menu r1);

    void onPause();

    void onPictureInPictureModeChanged(boolean r1);

    void onPrepareOptionsMenu(android.view.Menu r1);

    void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3);

    void onResume();

    void onSaveInstanceState(android.os.Bundle r1);

    void onStart();

    void onStop();

    void onViewCreated(android.view.View r1, android.os.Bundle r2);

    void onViewStateRestored(android.os.Bundle r1);
}
