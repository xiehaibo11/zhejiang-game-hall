package com.kwad.sdk.api.core.fragment;

import android.animation.Animator;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;

abstract class AbstractIFragmentLifecycle implements IFragmentLifecycle {
    AbstractIFragmentLifecycle() {
    }

    @Override
    @Deprecated
    public void onActivityCreated(Bundle bundle) {
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
    }

    @Override
    public void onAttach(Activity activity) {
    }

    @Override
    public void onAttach(Context context) {
    }

    @Override
    public void onAttachFragment(KsFragment ksFragment) {
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        return false;
    }

    @Override
    public void onCreate(Bundle bundle) {
    }

    @Override
    public Animation onCreateAnimation(int i, boolean z, int i2) {
        return null;
    }

    @Override
    public Animator onCreateAnimator(int i, boolean z, int i2) {
        return null;
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
    }

    @Override
    public void onCreateOptionsMenu(Menu menu, MenuInflater menuInflater) {
    }

    @Override
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        return null;
    }

    @Override
    public void onDestroy() {
    }

    @Override
    public void onDestroyOptionsMenu() {
    }

    @Override
    public void onDestroyView() {
    }

    @Override
    public void onDetach() {
    }

    @Override
    public void onHiddenChanged(boolean z) {
    }

    @Override
    public void onInflate(Activity activity, AttributeSet attributeSet, Bundle bundle) {
    }

    @Override
    public void onInflate(Context context, AttributeSet attributeSet, Bundle bundle) {
    }

    @Override
    public void onLowMemory() {
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        return false;
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
    }

    @Override
    public void onPrepareOptionsMenu(Menu menu) {
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onSaveInstanceState(Bundle bundle) {
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void onViewCreated(View view, Bundle bundle) {
    }

    @Override
    public void onViewStateRestored(Bundle bundle) {
    }
}
