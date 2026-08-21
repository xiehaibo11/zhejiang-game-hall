package com.kwad.sdk.api.core.fragment;

import android.animation.Animator;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.util.AttributeSet;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import com.kwad.sdk.api.core.ComponentDestroyer;
import com.kwad.sdk.api.loader.Wrapper;

public class ResFragment extends DelegateFragment {
    public ResFragment() {
        super(new KsFragment(null));
        getBase().setBase(this);
    }

    ResFragment(KsFragment ksFragment) {
        super(ksFragment);
    }

    @Override
    public final Activity getActivity2() {
        return super.getActivity();
    }

    @Override
    public KsFragment getBase() {
        return super.getBase();
    }

    @Override
    public Context getContext() {
        if (super.getContext() == null) {
            return null;
        }
        return Wrapper.wrapContextIfNeed(super.getContext());
    }

    @Override
    public LayoutInflater getLayoutInflater(Bundle bundle) {
        return Wrapper.wrapInflaterIfNeed(super.getLayoutInflater(bundle));
    }

    @Override
    @Deprecated
    public void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
    }

    @Override
    public void onAttach(Activity activity) {
        super.onAttach(activity);
    }

    @Override
    public void onAttach(Context context) {
        super.onAttach(Wrapper.wrapContextIfNeed(context));
    }

    @Override
    public void onAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        return super.onContextItemSelected(menuItem);
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override
    public Animation onCreateAnimation(int i, boolean z, int i2) {
        return super.onCreateAnimation(i, z, i2);
    }

    @Override
    public Animator onCreateAnimator(int i, boolean z, int i2) {
        return super.onCreateAnimator(i, z, i2);
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public void onCreateOptionsMenu(Menu menu, MenuInflater menuInflater) {
        super.onCreateOptionsMenu(menu, menuInflater);
    }

    @Override
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        return super.onCreateView(layoutInflater, viewGroup, bundle);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        ComponentDestroyer.destroyFragment(this);
    }

    @Override
    public void onDestroyOptionsMenu() {
        super.onDestroyOptionsMenu();
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
    }

    @Override
    public void onDetach() {
        super.onDetach();
    }

    @Override
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        return Wrapper.wrapInflaterIfNeed(super.onGetLayoutInflater(bundle));
    }

    @Override
    public void onHiddenChanged(boolean z) {
        super.onHiddenChanged(z);
    }

    @Override
    public void onInflate(Activity activity, AttributeSet attributeSet, Bundle bundle) {
        super.onInflate(activity, attributeSet, bundle);
    }

    @Override
    public void onInflate(Context context, AttributeSet attributeSet, Bundle bundle) {
        super.onInflate(context, attributeSet, bundle);
    }

    @Override
    public void onLowMemory() {
        super.onLowMemory();
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        super.onMultiWindowModeChanged(z);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        return super.onOptionsItemSelected(menuItem);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        super.onOptionsMenuClosed(menu);
    }

    @Override
    public void onPause() {
        super.onPause();
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        super.onPictureInPictureModeChanged(z);
    }

    @Override
    public void onPrepareOptionsMenu(Menu menu) {
        super.onPrepareOptionsMenu(menu);
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    public void onResume() {
        super.onResume();
    }

    @Override
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
    }

    @Override
    public void onStart() {
        super.onStart();
    }

    @Override
    public void onStop() {
        super.onStop();
    }

    @Override
    public void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
    }

    @Override
    public void onViewStateRestored(Bundle bundle) {
        super.onViewStateRestored(bundle);
    }
}
