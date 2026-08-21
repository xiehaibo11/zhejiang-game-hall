package com.kwad.sdk.api.core.fragment;

public class ResDialogFragment extends com.kwad.sdk.api.core.fragment.DelegateDialogFragment {
    public ResDialogFragment() {
            r2 = this;
            com.kwad.sdk.api.core.fragment.KsDialogFragment r0 = new com.kwad.sdk.api.core.fragment.KsDialogFragment
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r0)
            com.kwad.sdk.api.core.fragment.KsFragment r0 = r2.getBase()
            r0.setBase(r2)
            return
    }

    ResDialogFragment(com.kwad.sdk.api.core.fragment.KsDialogFragment r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final android.app.Activity getActivity2() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = super.getActivity()
            return r0
    }

    @Override
    public com.kwad.sdk.api.core.fragment.KsFragment getBase() {
            r1 = this;
            com.kwad.sdk.api.core.fragment.KsFragment r0 = super.getBase()
            return r0
    }

    @Override
    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = super.getContext()
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r0)
            return r0
    }

    @Override
    public android.view.LayoutInflater getLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = super.getLayoutInflater(r1)
            android.view.LayoutInflater r1 = com.kwad.sdk.api.loader.Wrapper.wrapInflaterIfNeed(r1)
            return r1
    }

    @Override
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
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            super.onAttach(r1)
            return
    }

    @Override
    public void onAttachFragment(android.support.v4.app.Fragment r1) {
            r0 = this;
            super.onAttachFragment(r1)
            return
    }

    @Override
    public void onCancel(android.content.DialogInterface r1) {
            r0 = this;
            super.onCancel(r1)
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
    public android.app.Dialog onCreateDialog(android.os.Bundle r1) {
            r0 = this;
            android.app.Dialog r1 = super.onCreateDialog(r1)
            return r1
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
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            super.onDismiss(r1)
            return
    }

    @Override
    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = super.onGetLayoutInflater(r1)
            android.view.LayoutInflater r1 = com.kwad.sdk.api.loader.Wrapper.wrapInflaterIfNeed(r1)
            return r1
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
}
