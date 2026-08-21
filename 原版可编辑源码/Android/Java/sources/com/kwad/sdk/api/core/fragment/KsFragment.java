package com.kwad.sdk.api.core.fragment;

import android.animation.Animator;
import android.app.Activity;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.util.SimpleArrayMap;
import android.util.AttributeSet;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import com.kwad.sdk.api.a;
import com.kwad.sdk.api.core.KsAdSdkDynamicApi;
import com.kwad.sdk.api.core.lifecycle.KsLifecycle;
import com.kwad.sdk.api.loader.Loader;
import java.io.FileDescriptor;
import java.io.PrintWriter;

@KsAdSdkDynamicApi
public class KsFragment extends AbstractIFragmentLifecycle implements IFragment, IFragmentLifecycle {
    private static final SimpleArrayMap<String, Class<?>> sClassMap = new SimpleArrayMap<>();
    private Fragment mBase;
    private KsFragmentManager mChildFragmentManager;
    private KsFragmentManager mFragmentManager;
    private KsLifecycle mLifeCycle;

    @KsAdSdkDynamicApi
    public KsFragment() {
        this.mBase = new ResFragment(this);
    }

    protected KsFragment(Fragment fragment) {
        this.mBase = fragment;
    }

    public static KsFragment instantiate(Context context, String str, Bundle bundle) {
        try {
            Class<?> clsLoadClass = sClassMap.get(str);
            if (clsLoadClass == null) {
                clsLoadClass = context.getClassLoader().loadClass(str);
                sClassMap.put(str, clsLoadClass);
            }
            KsFragment ksFragment = (KsFragment) clsLoadClass.getConstructor(new Class[0]).newInstance(new Object[0]);
            if (bundle != null) {
                bundle.setClassLoader(ksFragment.getClass().getClassLoader());
                ksFragment.setArguments(bundle);
            }
            return ksFragment;
        } catch (Exception e) {
            throw new Fragment.InstantiationException("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e);
        }
    }

    private boolean isAllFragmentIsHidden(Fragment fragment) {
        Fragment parentFragment = fragment.getParentFragment();
        boolean zIsHidden = fragment.isHidden();
        return parentFragment == null ? zIsHidden : zIsHidden || isAllFragmentIsHidden(parentFragment);
    }

    private boolean isKsAdParentFragment() {
        Fragment parentFragment = this.mBase.getParentFragment();
        return parentFragment != null && (parentFragment instanceof IDelegateFragment);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        this.mBase.dump(str, fileDescriptor, printWriter, strArr);
    }

    @Override
    @KsAdSdkDynamicApi
    public final Activity getActivity() {
        ComponentCallbacks componentCallbacks = this.mBase;
        if (componentCallbacks instanceof IDelegateFragment) {
            return ((IDelegateFragment) componentCallbacks).getActivity2();
        }
        throw new RuntimeException(this.mBase + " must be DelegateFragment or DelegateDialogFragment");
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean getAllowEnterTransitionOverlap() {
        return this.mBase.getAllowEnterTransitionOverlap();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean getAllowReturnTransitionOverlap() {
        return this.mBase.getAllowReturnTransitionOverlap();
    }

    @Override
    @KsAdSdkDynamicApi
    public final Bundle getArguments() {
        Bundle arguments = this.mBase.getArguments();
        if (arguments != null) {
            arguments.setClassLoader(Loader.get().getRealClassLoader());
        }
        return arguments;
    }

    public final Fragment getBase() {
        return this.mBase;
    }

    @Override
    @KsAdSdkDynamicApi
    public KsFragmentManager getChildFragmentManager() {
        if (this.mChildFragmentManager == null) {
            this.mChildFragmentManager = new KsFragmentManager(this.mBase.getChildFragmentManager());
        }
        return this.mChildFragmentManager;
    }

    @Override
    @KsAdSdkDynamicApi
    @Deprecated
    public final Context getContext() {
        return this.mBase.getContext();
    }

    @Override
    @KsAdSdkDynamicApi
    public Object getEnterTransition() {
        return this.mBase.getEnterTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getExitTransition() {
        return this.mBase.getExitTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public KsFragmentManager getFragmentManager() {
        if (this.mFragmentManager == null) {
            this.mFragmentManager = new KsFragmentManager(this.mBase.getFragmentManager());
        }
        return this.mFragmentManager;
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getHost() {
        return this.mBase.getHost();
    }

    @Override
    @KsAdSdkDynamicApi
    public final int getId() {
        return this.mBase.getId();
    }

    @Override
    @KsAdSdkDynamicApi
    public final LayoutInflater getLayoutInflater(Bundle bundle) {
        return this.mBase.getLayoutInflater(bundle);
    }

    @Override
    @KsAdSdkDynamicApi
    public KsLifecycle getLifecycle() {
        if (this.mLifeCycle == null) {
            this.mLifeCycle = new KsLifecycle(this.mBase.getLifecycle());
        }
        return this.mLifeCycle;
    }

    @Override
    @KsAdSdkDynamicApi
    public final KsFragment getParentFragment() {
        Object parentFragment = this.mBase.getParentFragment();
        if (parentFragment instanceof IDelegateFragment) {
            return ((IDelegateFragment) parentFragment).getBase();
        }
        if (parentFragment == null) {
            return null;
        }
        throw new RuntimeException(parentFragment + " is not a DelegateFragment or DelegateDialogFragment");
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getReenterTransition() {
        return this.mBase.getReenterTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    @Deprecated
    public final Resources getResources() {
        if (a.ml.booleanValue()) {
            throw new RuntimeException("please use getContext().getResources()");
        }
        return this.mBase.getContext().getResources();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean getRetainInstance() {
        return this.mBase.getRetainInstance();
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getReturnTransition() {
        return this.mBase.getReturnTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getSharedElementEnterTransition() {
        return this.mBase.getSharedElementEnterTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public final Object getSharedElementReturnTransition() {
        return this.mBase.getSharedElementReturnTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    @Deprecated
    public final String getString(int i) {
        return getResources().getString(i);
    }

    @Override
    @KsAdSdkDynamicApi
    @Deprecated
    public final String getString(int i, Object... objArr) {
        return getResources().getString(i, objArr);
    }

    @Override
    @KsAdSdkDynamicApi
    public final String getTag() {
        return this.mBase.getTag();
    }

    @Override
    @KsAdSdkDynamicApi
    public final int getTargetRequestCode() {
        return this.mBase.getTargetRequestCode();
    }

    @Override
    @KsAdSdkDynamicApi
    @Deprecated
    public final CharSequence getText(int i) {
        return getResources().getText(i);
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean getUserVisibleHint() {
        return this.mBase.getUserVisibleHint();
    }

    @Override
    @KsAdSdkDynamicApi
    public final View getView() {
        return this.mBase.getView();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean hasOptionsMenu() {
        return this.mBase.hasOptionsMenu();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isAdded() {
        return this.mBase.isAdded();
    }

    public boolean isAllFragmentIsHidden() {
        if (isKsAdParentFragment()) {
            KsFragment parentFragment = getParentFragment();
            return parentFragment == null ? isHidden() : isHidden() || parentFragment.isAllFragmentIsHidden();
        }
        Fragment fragment = this.mBase;
        Fragment parentFragment2 = fragment.getParentFragment();
        boolean zIsHidden = fragment.isHidden();
        return parentFragment2 == null ? zIsHidden : zIsHidden || isAllFragmentIsHidden(parentFragment2);
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isDetached() {
        return this.mBase.isDetached();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isHidden() {
        return this.mBase.isHidden();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isInLayout() {
        return this.mBase.isInLayout();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isMenuVisible() {
        return this.mBase.isMenuVisible();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isRemoving() {
        return this.mBase.isRemoving();
    }

    @Override
    public final boolean isResumed() {
        return this.mBase.isResumed();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isStateSaved() {
        return this.mBase.isStateSaved();
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean isVisible() {
        return this.mBase.isVisible();
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
        super.onAttach(context);
    }

    @Override
    public void onAttachFragment(KsFragment ksFragment) {
        super.onAttachFragment(ksFragment);
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
    @KsAdSdkDynamicApi
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        return this.mBase.onGetLayoutInflater(bundle);
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

    @Override
    @KsAdSdkDynamicApi
    public final void postponeEnterTransition() {
        this.mBase.postponeEnterTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public final void registerForContextMenu(View view) {
        this.mBase.registerForContextMenu(view);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void requestPermissions(String[] strArr, int i) {
        this.mBase.requestPermissions(strArr, i);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setAllowEnterTransitionOverlap(boolean z) {
        this.mBase.setAllowEnterTransitionOverlap(z);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setAllowReturnTransitionOverlap(boolean z) {
        this.mBase.setAllowReturnTransitionOverlap(z);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setArguments(Bundle bundle) {
        this.mBase.setArguments(bundle);
    }

    protected void setBase(Fragment fragment) {
        this.mBase = fragment;
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setEnterTransition(Object obj) {
        this.mBase.setEnterTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setExitTransition(Object obj) {
        this.mBase.setExitTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setHasOptionsMenu(boolean z) {
        this.mBase.setHasOptionsMenu(z);
    }

    @Override
    public void setInitialSavedState(KsSavedState ksSavedState) {
        this.mBase.setInitialSavedState(ksSavedState.getBase());
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setMenuVisibility(boolean z) {
        this.mBase.setMenuVisibility(z);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setReenterTransition(Object obj) {
        this.mBase.setReenterTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setRetainInstance(boolean z) {
        this.mBase.setRetainInstance(z);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setReturnTransition(Object obj) {
        this.mBase.setReturnTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setSharedElementEnterTransition(Object obj) {
        this.mBase.setSharedElementEnterTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void setSharedElementReturnTransition(Object obj) {
        this.mBase.setSharedElementReturnTransition(obj);
    }

    @Override
    @KsAdSdkDynamicApi
    public void setUserVisibleHint(boolean z) {
        this.mBase.setUserVisibleHint(z);
    }

    @Override
    @KsAdSdkDynamicApi
    public final boolean shouldShowRequestPermissionRationale(String str) {
        return this.mBase.shouldShowRequestPermissionRationale(str);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startActivity(Intent intent) {
        this.mBase.startActivity(intent);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startActivity(Intent intent, Bundle bundle) {
        this.mBase.startActivity(intent, bundle);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startActivityForResult(Intent intent, int i) {
        this.mBase.startActivityForResult(intent, i);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startActivityForResult(Intent intent, int i, Bundle bundle) {
        this.mBase.startActivityForResult(intent, i, bundle);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        this.mBase.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    @KsAdSdkDynamicApi
    public final void startPostponedEnterTransition() {
        this.mBase.startPostponedEnterTransition();
    }

    @Override
    @KsAdSdkDynamicApi
    public final void unregisterForContextMenu(View view) {
        this.mBase.unregisterForContextMenu(view);
    }
}
