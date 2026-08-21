package com.kwad.sdk.api.core.fragment;

import android.animation.Animator;
import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.support.v4.app.DialogFragment;
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

abstract class DelegateDialogFragment extends DialogFragment implements IDelegateFragment {
    private IDialogFragmentLifecycle mBase;

    DelegateDialogFragment(KsDialogFragment ksDialogFragment) {
        this.mBase = ksDialogFragment;
    }

    @Override
    public Activity getActivity2() {
        return getActivity();
    }

    @Override
    public KsFragment getBase() {
        return (KsFragment) this.mBase;
    }

    @Override
    public void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
        this.mBase.onActivityCreated(bundle);
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        this.mBase.onActivityResult(i, i2, intent);
    }

    @Override
    public void onAttach(Activity activity) {
        super.onAttach(activity);
        this.mBase.onAttach(activity);
    }

    @Override
    public void onAttach(Context context) {
        super.onAttach(context);
        this.mBase.onAttach(context);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public void onAttachFragment(Fragment fragment) {
        if (fragment instanceof IDelegateFragment) {
            this.mBase.onAttachFragment(((IDelegateFragment) fragment).getBase());
        } else {
            if (fragment == 0) {
                this.mBase.onAttachFragment(null);
                return;
            }
            throw new RuntimeException(fragment + " is not a DelegateFragment or DelegateDialogFragment");
        }
    }

    @Override
    public void onCancel(DialogInterface dialogInterface) {
        this.mBase.onCancel(dialogInterface);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.mBase.onConfigurationChanged(configuration);
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        return this.mBase.onContextItemSelected(menuItem);
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mBase.onCreate(bundle);
    }

    @Override
    public Animation onCreateAnimation(int i, boolean z, int i2) {
        return this.mBase.onCreateAnimation(i, z, i2);
    }

    @Override
    public Animator onCreateAnimator(int i, boolean z, int i2) {
        return this.mBase.onCreateAnimator(i, z, i2);
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
        this.mBase.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public Dialog onCreateDialog(Bundle bundle) {
        return this.mBase.onCreateDialog(bundle);
    }

    @Override
    public void onCreateOptionsMenu(Menu menu, MenuInflater menuInflater) {
        super.onCreateOptionsMenu(menu, menuInflater);
        this.mBase.onCreateOptionsMenu(menu, menuInflater);
    }

    @Override
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        return this.mBase.onCreateView(layoutInflater, viewGroup, bundle);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        this.mBase.onDestroy();
    }

    @Override
    public void onDestroyOptionsMenu() {
        super.onDestroyOptionsMenu();
        this.mBase.onDestroyOptionsMenu();
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        this.mBase.onDestroyView();
    }

    @Override
    public void onDetach() {
        super.onDetach();
        this.mBase.onDetach();
    }

    @Override
    public void onDismiss(DialogInterface dialogInterface) {
        this.mBase.onDismiss(dialogInterface);
    }

    @Override
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        return super.onGetLayoutInflater(bundle);
    }

    @Override
    public void onHiddenChanged(boolean z) {
        super.onHiddenChanged(z);
        this.mBase.onHiddenChanged(z);
    }

    @Override
    public void onInflate(Activity activity, AttributeSet attributeSet, Bundle bundle) {
        super.onInflate(activity, attributeSet, bundle);
        this.mBase.onInflate(activity, attributeSet, bundle);
    }

    @Override
    public void onInflate(Context context, AttributeSet attributeSet, Bundle bundle) {
        super.onInflate(context, attributeSet, bundle);
        this.mBase.onInflate(context, attributeSet, bundle);
    }

    @Override
    public void onLowMemory() {
        super.onLowMemory();
        this.mBase.onLowMemory();
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        super.onMultiWindowModeChanged(z);
        this.mBase.onMultiWindowModeChanged(z);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        return this.mBase.onOptionsItemSelected(menuItem);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        super.onOptionsMenuClosed(menu);
        this.mBase.onOptionsMenuClosed(menu);
    }

    @Override
    public void onPause() {
        super.onPause();
        this.mBase.onPause();
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        super.onPictureInPictureModeChanged(z);
        this.mBase.onPictureInPictureModeChanged(z);
    }

    @Override
    public void onPrepareOptionsMenu(Menu menu) {
        super.onPrepareOptionsMenu(menu);
        this.mBase.onPrepareOptionsMenu(menu);
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        this.mBase.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    public void onResume() {
        super.onResume();
        this.mBase.onResume();
    }

    @Override
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        this.mBase.onSaveInstanceState(bundle);
    }

    @Override
    public void onStart() {
        super.onStart();
        this.mBase.onStart();
    }

    @Override
    public void onStop() {
        super.onStop();
        this.mBase.onStop();
    }

    @Override
    public void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
        this.mBase.onViewCreated(view, bundle);
    }

    @Override
    public void onViewStateRestored(Bundle bundle) {
        super.onViewStateRestored(bundle);
        this.mBase.onViewStateRestored(bundle);
    }

    void setBase(KsDialogFragment ksDialogFragment) {
        this.mBase = ksDialogFragment;
    }

    void superOnCancel(DialogInterface dialogInterface) {
        super.onCancel(dialogInterface);
    }

    Dialog superOnCreateDialog(Bundle bundle) {
        return super.onCreateDialog(bundle);
    }

    void superOnDismiss(DialogInterface dialogInterface) {
        super.onDismiss(dialogInterface);
    }
}
