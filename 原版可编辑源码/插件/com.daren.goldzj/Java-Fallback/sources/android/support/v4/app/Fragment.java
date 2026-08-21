package android.support.v4.app;

import android.animation.Animator;
import android.app.Activity;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleOwner;
import android.arch.lifecycle.LifecycleRegistry;
import android.arch.lifecycle.LiveData;
import android.arch.lifecycle.MutableLiveData;
import android.arch.lifecycle.ViewModelStore;
import android.arch.lifecycle.ViewModelStoreOwner;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Looper;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.CallSuper;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.StringRes;
import android.support.v4.util.DebugUtils;
import android.support.v4.util.SimpleArrayMap;
import android.support.v4.view.LayoutInflaterCompat;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.InvocationTargetException;

public class Fragment implements ComponentCallbacks, View.OnCreateContextMenuListener, LifecycleOwner, ViewModelStoreOwner {
    static final int ACTIVITY_CREATED = 2;
    static final int CREATED = 1;
    static final int INITIALIZING = 0;
    static final int RESUMED = 4;
    static final int STARTED = 3;
    static final Object USE_DEFAULT_TRANSITION = null;
    private static final SimpleArrayMap<String, Class<?>> sClassMap = null;
    boolean mAdded;
    AnimationInfo mAnimationInfo;
    Bundle mArguments;
    int mBackStackNesting;
    boolean mCalled;
    FragmentManagerImpl mChildFragmentManager;
    FragmentManagerNonConfig mChildNonConfig;
    ViewGroup mContainer;
    int mContainerId;
    boolean mDeferStart;
    boolean mDetached;
    int mFragmentId;
    FragmentManagerImpl mFragmentManager;
    boolean mFromLayout;
    boolean mHasMenu;
    boolean mHidden;
    boolean mHiddenChanged;
    FragmentHostCallback mHost;
    boolean mInLayout;
    int mIndex;
    View mInnerView;
    boolean mIsCreated;
    boolean mIsNewlyAdded;
    LayoutInflater mLayoutInflater;
    LifecycleRegistry mLifecycleRegistry;
    boolean mMenuVisible;
    Fragment mParentFragment;
    boolean mPerformedCreateView;
    float mPostponedAlpha;
    boolean mRemoving;
    boolean mRestored;
    boolean mRetainInstance;
    boolean mRetaining;
    Bundle mSavedFragmentState;

    @Nullable
    Boolean mSavedUserVisibleHint;
    SparseArray<Parcelable> mSavedViewState;
    int mState;
    String mTag;
    Fragment mTarget;
    int mTargetIndex;
    int mTargetRequestCode;
    boolean mUserVisibleHint;
    View mView;
    LifecycleOwner mViewLifecycleOwner;
    MutableLiveData<LifecycleOwner> mViewLifecycleOwnerLiveData;
    LifecycleRegistry mViewLifecycleRegistry;
    ViewModelStore mViewModelStore;
    String mWho;

    static class AnimationInfo {
        Boolean mAllowEnterTransitionOverlap;
        Boolean mAllowReturnTransitionOverlap;
        View mAnimatingAway;
        Animator mAnimator;
        Object mEnterTransition;
        SharedElementCallback mEnterTransitionCallback;
        boolean mEnterTransitionPostponed;
        Object mExitTransition;
        SharedElementCallback mExitTransitionCallback;
        boolean mIsHideReplaced;
        int mNextAnim;
        int mNextTransition;
        int mNextTransitionStyle;
        Object mReenterTransition;
        Object mReturnTransition;
        Object mSharedElementEnterTransition;
        Object mSharedElementReturnTransition;
        OnStartEnterTransitionListener mStartEnterTransitionListener;
        int mStateAfterAnimating;

        AnimationInfo() {
            this.mEnterTransition = null;
            this.mReturnTransition = Fragment.USE_DEFAULT_TRANSITION;
            this.mExitTransition = null;
            this.mReenterTransition = Fragment.USE_DEFAULT_TRANSITION;
            this.mSharedElementEnterTransition = null;
            this.mSharedElementReturnTransition = Fragment.USE_DEFAULT_TRANSITION;
            this.mEnterTransitionCallback = null;
            this.mExitTransitionCallback = null;
        }
    }

    public static class InstantiationException extends RuntimeException {
        public InstantiationException(String r1, Exception r2) {
            super(r1, r2);
        }
    }

    interface OnStartEnterTransitionListener {
        void onStartEnterTransition();

        void startListening();
    }

    public static class SavedState implements Parcelable {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        final Bundle mState;

        @Override
        public int describeContents() {
            return 0;
        }

        SavedState(Bundle r1) {
            this.mState = r1;
        }

        SavedState(Parcel r1, ClassLoader r2) {
            this.mState = r1.readBundle();
            if (r2 == null) goto L8;
            Bundle r12 = this.mState;
            if (r12 == null) goto L9;
            r12.setClassLoader(r2);
            return;
        L9:
            return;
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            r1.writeBundle(this.mState);
        }

        static {
            CREATOR = new 1();
        }
    }

    public void onActivityResult(int r1, int r2, Intent r3) {
    }

    public void onAttachFragment(Fragment r1) {
    }

    public boolean onContextItemSelected(MenuItem r1) {
        return false;
    }

    public Animation onCreateAnimation(int r1, boolean r2, int r3) {
        return null;
    }

    public Animator onCreateAnimator(int r1, boolean r2, int r3) {
        return null;
    }

    public void onCreateOptionsMenu(Menu r1, MenuInflater r2) {
    }

    @Nullable
    public View onCreateView(@NonNull LayoutInflater r1, @Nullable ViewGroup r2, @Nullable Bundle r3) {
        return null;
    }

    public void onDestroyOptionsMenu() {
    }

    public void onHiddenChanged(boolean r1) {
    }

    public void onMultiWindowModeChanged(boolean r1) {
    }

    public boolean onOptionsItemSelected(MenuItem r1) {
        return false;
    }

    public void onOptionsMenuClosed(Menu r1) {
    }

    public void onPictureInPictureModeChanged(boolean r1) {
    }

    public void onPrepareOptionsMenu(Menu r1) {
    }

    public void onRequestPermissionsResult(int r1, @NonNull String[] r2, @NonNull int[] r3) {
    }

    public void onSaveInstanceState(@NonNull Bundle r1) {
    }

    public void onViewCreated(@NonNull View r1, @Nullable Bundle r2) {
    }

    static {
        sClassMap = new SimpleArrayMap();
        USE_DEFAULT_TRANSITION = new Object();
    }

    @Override
    public Lifecycle getLifecycle() {
        return this.mLifecycleRegistry;
    }

    @NonNull
    @MainThread
    public LifecycleOwner getViewLifecycleOwner() {
        LifecycleOwner r0 = this.mViewLifecycleOwner;
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Can't access the Fragment View's LifecycleOwner when getView() is null i.e., before onCreateView() or after onDestroyView()");
    }

    @NonNull
    public LiveData<LifecycleOwner> getViewLifecycleOwnerLiveData() {
        return this.mViewLifecycleOwnerLiveData;
    }

    @Override
    @NonNull
    public ViewModelStore getViewModelStore() {
        if (getContext() == null) goto L10;
        if (this.mViewModelStore != null) goto L8;
        this.mViewModelStore = new ViewModelStore();
    L8:
        return this.mViewModelStore;
    L10:
        throw new IllegalStateException("Can't access ViewModels from detached fragment");
    }

    public Fragment() {
        this.mState = 0;
        this.mIndex = -1;
        this.mTargetIndex = -1;
        this.mMenuVisible = true;
        this.mUserVisibleHint = true;
        this.mLifecycleRegistry = new LifecycleRegistry(this);
        this.mViewLifecycleOwnerLiveData = new MutableLiveData();
    }

    public static Fragment instantiate(Context r1, String r2) {
        return instantiate(r1, r2, null);
    }

    public static Fragment instantiate(Context r5, String r6, @Nullable Bundle r7) {
        Class<?> r3 = sClassMap.get(r6);     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
        if (r3 != null) goto L6;
        r3 = r5.getClassLoader().loadClass(r6);     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
        sClassMap.put(r6, r3);     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
    L6:
        Fragment r52 = (Fragment) r3.getConstructor(new Class[0]).newInstance(new Object[0]);     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
        if (r7 == null) goto L9;
        r7.setClassLoader(r52.getClass().getClassLoader());     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
        r52.setArguments(r7);     // Catch: InvocationTargetException -> L10 NoSuchMethodException -> L13 IllegalAccessException -> L16 java.lang.InstantiationException -> L19 ClassNotFoundException -> L22
    L9:
        return r52;
    L22:
        e = move-exception;
        throw new InstantiationException("Unable to instantiate fragment " + r6 + ": make sure class name exists, is public, and has an empty constructor that is public", e);
    L16:
        e = move-exception;
        throw new InstantiationException("Unable to instantiate fragment " + r6 + ": make sure class name exists, is public, and has an empty constructor that is public", e);
    L19:
        e = move-exception;
        throw new InstantiationException("Unable to instantiate fragment " + r6 + ": make sure class name exists, is public, and has an empty constructor that is public", e);
    L13:
        e = move-exception;
        throw new InstantiationException("Unable to instantiate fragment " + r6 + ": could not find Fragment constructor", e);
    L10:
        e = move-exception;
        throw new InstantiationException("Unable to instantiate fragment " + r6 + ": calling Fragment constructor caused an exception", e);
    }

    static boolean isSupportFragmentClass(Context r1, String r2) {
        Class<?> r0 = sClassMap.get(r2);     // Catch: ClassNotFoundException -> L7
        if (r0 != null) goto L5;
        r0 = r1.getClassLoader().loadClass(r2);     // Catch: ClassNotFoundException -> L7
        sClassMap.put(r2, r0);     // Catch: ClassNotFoundException -> L7
    L5:
        return Fragment.class.isAssignableFrom(r0);
    L7:
        return false;
    }

    final void restoreViewState(Bundle r3) {
        SparseArray<Parcelable> r0 = this.mSavedViewState;
        if (r0 == null) goto L5;
        this.mInnerView.restoreHierarchyState(r0);
        this.mSavedViewState = null;
    L5:
        this.mCalled = false;
        onViewStateRestored(r3);
        if (this.mCalled == false) goto L12;
        if (this.mView == null) goto L13;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_CREATE);
        return;
    L13:
        return;
    L12:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onViewStateRestored()");
    }

    final void setIndex(int r1, Fragment r2) {
        this.mIndex = r1;
        if (r2 == null) goto L5;
        this.mWho = r2.mWho + ":" + this.mIndex;
        return;
    L5:
        this.mWho = "android:fragment:" + this.mIndex;
    }

    final boolean isInBackStack() {
        if (this.mBackStackNesting <= 0) goto L5;
        return true;
    L5:
        return false;
    }

    public final boolean equals(Object r1) {
        return super.equals(r1);
    }

    public final int hashCode() {
        return super.hashCode();
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder(128);
        DebugUtils.buildShortClassTag(this, r0);
        if (this.mIndex < 0) goto L6;
        r0.append(" #");
        r0.append(this.mIndex);
    L6:
        if (this.mFragmentId == 0) goto L9;
        r0.append(" id=0x");
        r0.append(Integer.toHexString(this.mFragmentId));
    L9:
        if (this.mTag == null) goto L11;
        r0.append(" ");
        r0.append(this.mTag);
    L11:
        r0.append('}');
        return r0.toString();
    }

    public final int getId() {
        return this.mFragmentId;
    }

    @Nullable
    public final String getTag() {
        return this.mTag;
    }

    public void setArguments(@Nullable Bundle r2) {
        if (this.mIndex >= 0) goto L5;
    L9:
        this.mArguments = r2;
        return;
    L5:
        if (isStateSaved() == false) goto L9;
        throw new IllegalStateException("Fragment already active and state has been saved");
    }

    @Nullable
    public final Bundle getArguments() {
        return this.mArguments;
    }

    public final boolean isStateSaved() {
        FragmentManagerImpl r0 = this.mFragmentManager;
        if (r0 != null) goto L7;
        return false;
    L7:
        return r0.isStateSaved();
    }

    public void setInitialSavedState(@Nullable SavedState r2) {
        if (this.mIndex >= 0) goto L12;
        if (r2 != null) goto L6;
    L8:
        Bundle r22 = null;
    L9:
        this.mSavedFragmentState = r22;
        return;
    L6:
        if (r2.mState == null) goto L8;
        r22 = r2.mState;
        goto L9
    L12:
        throw new IllegalStateException("Fragment already active");
    }

    public void setTargetFragment(@Nullable Fragment r3, int r4) {
        FragmentManager r0 = getFragmentManager();
        if (r3 == null) goto L5;
        FragmentManager r1 = r3.getFragmentManager();
    L6:
        if (r0 == null) goto L12;
        if (r1 == null) goto L12;
        if (r0 == r1) goto L12;
        throw new IllegalArgumentException("Fragment " + r3 + " must share the same FragmentManager to be set as a target fragment");
    L12:
        Fragment r02 = r3;
    L13:
        if (r02 == null) goto L18;
        if (r02 == this) goto L17;
        r02 = r02.getTargetFragment();
        goto L13
    L17:
        throw new IllegalArgumentException("Setting " + r3 + " as the target of " + this + " would create a target cycle");
    L18:
        this.mTarget = r3;
        this.mTargetRequestCode = r4;
        return;
    L5:
        r1 = null;
        goto L6
    }

    @Nullable
    public final Fragment getTargetFragment() {
        return this.mTarget;
    }

    public final int getTargetRequestCode() {
        return this.mTargetRequestCode;
    }

    @Nullable
    public Context getContext() {
        FragmentHostCallback r0 = this.mHost;
        if (r0 != null) goto L6;
        return null;
    L6:
        return r0.getContext();
    }

    @NonNull
    public final Context requireContext() {
        Context r0 = getContext();
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Fragment " + this + " not attached to a context.");
    }

    @Nullable
    public final FragmentActivity getActivity() {
        FragmentHostCallback r0 = this.mHost;
        if (r0 != null) goto L6;
        return null;
    L6:
        return (FragmentActivity) r0.getActivity();
    }

    @NonNull
    public final FragmentActivity requireActivity() {
        FragmentActivity r0 = getActivity();
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Fragment " + this + " not attached to an activity.");
    }

    @Nullable
    public final Object getHost() {
        FragmentHostCallback r0 = this.mHost;
        if (r0 != null) goto L6;
        return null;
    L6:
        return r0.onGetHost();
    }

    @NonNull
    public final Object requireHost() {
        Object r0 = getHost();
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Fragment " + this + " not attached to a host.");
    }

    @NonNull
    public final Resources getResources() {
        return requireContext().getResources();
    }

    @NonNull
    public final CharSequence getText(@StringRes int r2) {
        return getResources().getText(r2);
    }

    @NonNull
    public final String getString(@StringRes int r2) {
        return getResources().getString(r2);
    }

    @NonNull
    public final String getString(@StringRes int r2, Object... r3) {
        return getResources().getString(r2, r3);
    }

    @Nullable
    public final FragmentManager getFragmentManager() {
        return this.mFragmentManager;
    }

    @NonNull
    public final FragmentManager requireFragmentManager() {
        FragmentManager r0 = getFragmentManager();
        if (r0 == null) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Fragment " + this + " not associated with a fragment manager.");
    }

    @NonNull
    public final FragmentManager getChildFragmentManager() {
        if (this.mChildFragmentManager != null) goto L17;
        instantiateChildFragmentManager();
        int r0 = this.mState;
        if (r0 < 4) goto L8;
        this.mChildFragmentManager.dispatchResume();
        goto L17
    L8:
        if (r0 < 3) goto L11;
        this.mChildFragmentManager.dispatchStart();
        goto L17
    L11:
        if (r0 < 2) goto L14;
        this.mChildFragmentManager.dispatchActivityCreated();
        goto L17
    L14:
        if (r0 < 1) goto L17;
        this.mChildFragmentManager.dispatchCreate();
    L17:
        return this.mChildFragmentManager;
    }

    @Nullable
    FragmentManager peekChildFragmentManager() {
        return this.mChildFragmentManager;
    }

    @Nullable
    public final Fragment getParentFragment() {
        return this.mParentFragment;
    }

    public final boolean isAdded() {
        if (this.mHost != null) goto L5;
    L7:
        return false;
    L5:
        if (this.mAdded == false) goto L7;
        return true;
    }

    public final boolean isDetached() {
        return this.mDetached;
    }

    public final boolean isRemoving() {
        return this.mRemoving;
    }

    public final boolean isInLayout() {
        return this.mInLayout;
    }

    public final boolean isResumed() {
        if (this.mState < 4) goto L5;
        return true;
    L5:
        return false;
    }

    public final boolean isVisible() {
        if (isAdded() == true) goto L5;
    L13:
        return false;
    L5:
        if (isHidden() == true) goto L13;
        View r0 = this.mView;
        if (r0 == null) goto L13;
        if (r0.getWindowToken() == null) goto L13;
        if (this.mView.getVisibility() != 0) goto L13;
        return true;
    }

    public final boolean isHidden() {
        return this.mHidden;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public final boolean hasOptionsMenu() {
        return this.mHasMenu;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public final boolean isMenuVisible() {
        return this.mMenuVisible;
    }

    public void setRetainInstance(boolean r1) {
        this.mRetainInstance = r1;
    }

    public final boolean getRetainInstance() {
        return this.mRetainInstance;
    }

    public void setHasOptionsMenu(boolean r2) {
        if (this.mHasMenu == r2) goto L10;
        this.mHasMenu = r2;
        if (isAdded() == true) goto L7;
        return;
    L7:
        if (isHidden() == true) goto L12;
        this.mHost.onSupportInvalidateOptionsMenu();
        return;
    L12:
        return;
    }

    public void setMenuVisibility(boolean r2) {
        if (this.mMenuVisible == r2) goto L12;
        this.mMenuVisible = r2;
        if (this.mHasMenu == true) goto L7;
        return;
    L7:
        if (isAdded() == true) goto L9;
        return;
    L9:
        if (isHidden() == true) goto L15;
        this.mHost.onSupportInvalidateOptionsMenu();
        return;
    L15:
        return;
    }

    public void setUserVisibleHint(boolean r3) {
        if (this.mUserVisibleHint == true) goto L14;
        if (r3 == false) goto L14;
        if (this.mState >= 3) goto L14;
        if (this.mFragmentManager == null) goto L14;
        if (isAdded() == false) goto L14;
        if (this.mIsCreated == false) goto L14;
        this.mFragmentManager.performPendingDeferredStart(this);
    L14:
        this.mUserVisibleHint = r3;
        if (this.mState >= 3) goto L18;
        if (r3 == true) goto L18;
        boolean r0 = true;
    L19:
        this.mDeferStart = r0;
        if (this.mSavedFragmentState == null) goto L23;
        this.mSavedUserVisibleHint = Boolean.valueOf(r3);
        return;
    L23:
        return;
    L18:
        r0 = false;
        goto L19
    }

    public boolean getUserVisibleHint() {
        return this.mUserVisibleHint;
    }

    @Deprecated
    public LoaderManager getLoaderManager() {
        return LoaderManager.getInstance(this);
    }

    public void startActivity(Intent r2) {
        startActivity(r2, null);
    }

    public void startActivity(Intent r3, @Nullable Bundle r4) {
        FragmentHostCallback r0 = this.mHost;
        if (r0 == null) goto L7;
        r0.onStartActivityFromFragment(this, r3, -1, r4);
        return;
    L7:
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
    }

    public void startActivityForResult(Intent r2, int r3) {
        startActivityForResult(r2, r3, null);
    }

    public void startActivityForResult(Intent r2, int r3, @Nullable Bundle r4) {
        FragmentHostCallback r0 = this.mHost;
        if (r0 == null) goto L7;
        r0.onStartActivityFromFragment(this, r2, r3, r4);
        return;
    L7:
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
    }

    public void startIntentSenderForResult(IntentSender r11, int r12, @Nullable Intent r13, int r14, int r15, int r16, Bundle r17) throws IntentSender.SendIntentException {
        FragmentHostCallback r0 = this.mHost;
        if (r0 == null) goto L7;
        r0.onStartIntentSenderFromFragment(this, r11, r12, r13, r14, r15, r16, r17);
        return;
    L7:
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
    }

    public final void requestPermissions(@NonNull String[] r2, int r3) {
        FragmentHostCallback r0 = this.mHost;
        if (r0 == null) goto L7;
        r0.onRequestPermissionsFromFragment(this, r2, r3);
        return;
    L7:
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
    }

    public boolean shouldShowRequestPermissionRationale(@NonNull String r2) {
        FragmentHostCallback r0 = this.mHost;
        if (r0 != null) goto L5;
        return false;
    L5:
        return r0.onShouldShowRequestPermissionRationale(r2);
    }

    @NonNull
    public LayoutInflater onGetLayoutInflater(@Nullable Bundle r1) {
        return getLayoutInflater(r1);
    }

    public final LayoutInflater getLayoutInflater() {
        LayoutInflater r0 = this.mLayoutInflater;
        if (r0 == null) goto L5;
        return r0;
    L5:
        return performGetLayoutInflater(null);
    }

    @NonNull
    LayoutInflater performGetLayoutInflater(@Nullable Bundle r1) {
        this.mLayoutInflater = onGetLayoutInflater(r1);
        return this.mLayoutInflater;
    }

    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    @Deprecated
    public LayoutInflater getLayoutInflater(@Nullable Bundle r2) {
        FragmentHostCallback r22 = this.mHost;
        if (r22 == null) goto L7;
        LayoutInflater r23 = r22.onGetLayoutInflater();
        getChildFragmentManager();
        LayoutInflaterCompat.setFactory2(r23, this.mChildFragmentManager.getLayoutInflaterFactory());
        return r23;
    L7:
        throw new IllegalStateException("onGetLayoutInflater() cannot be executed until the Fragment is attached to the FragmentManager.");
    }

    @CallSuper
    public void onInflate(Context r2, AttributeSet r3, Bundle r4) {
        this.mCalled = true;
        FragmentHostCallback r22 = this.mHost;
        if (r22 != null) goto L5;
        Activity r23 = null;
    L6:
        if (r23 == null) goto L9;
        this.mCalled = false;
        onInflate(r23, r3, r4);
        return;
    L9:
        return;
    L5:
        r23 = r22.getActivity();
        goto L6
    }

    @CallSuper
    @Deprecated
    public void onInflate(Activity r1, AttributeSet r2, Bundle r3) {
        this.mCalled = true;
    }

    @CallSuper
    public void onAttach(Context r2) {
        this.mCalled = true;
        FragmentHostCallback r22 = this.mHost;
        if (r22 != null) goto L5;
        Activity r23 = null;
    L6:
        if (r23 == null) goto L9;
        this.mCalled = false;
        onAttach(r23);
        return;
    L9:
        return;
    L5:
        r23 = r22.getActivity();
        goto L6
    }

    @CallSuper
    @Deprecated
    public void onAttach(Activity r1) {
        this.mCalled = true;
    }

    @CallSuper
    public void onCreate(@Nullable Bundle r2) {
        this.mCalled = true;
        restoreChildFragmentState(r2);
        FragmentManagerImpl r22 = this.mChildFragmentManager;
        if (r22 != null) goto L5;
        return;
    L5:
        if (r22.isStateAtLeast(1) == true) goto L9;
        this.mChildFragmentManager.dispatchCreate();
        return;
    }

    void restoreChildFragmentState(@Nullable Bundle r3) {
        if (r3 == null) goto L10;
        Parcelable r32 = r3.getParcelable("android:support:fragments");
        if (r32 != null) goto L6;
        return;
    L6:
        if (this.mChildFragmentManager != null) goto L8;
        instantiateChildFragmentManager();
    L8:
        this.mChildFragmentManager.restoreAllState(r32, this.mChildNonConfig);
        this.mChildNonConfig = null;
        this.mChildFragmentManager.dispatchCreate();
        return;
    }

    @Nullable
    public View getView() {
        return this.mView;
    }

    @CallSuper
    public void onActivityCreated(@Nullable Bundle r1) {
        this.mCalled = true;
    }

    @CallSuper
    public void onViewStateRestored(@Nullable Bundle r1) {
        this.mCalled = true;
    }

    @CallSuper
    public void onStart() {
        this.mCalled = true;
    }

    @CallSuper
    public void onResume() {
        this.mCalled = true;
    }

    @Override
    @CallSuper
    public void onConfigurationChanged(Configuration r1) {
        this.mCalled = true;
    }

    @CallSuper
    public void onPause() {
        this.mCalled = true;
    }

    @CallSuper
    public void onStop() {
        this.mCalled = true;
    }

    @Override
    @CallSuper
    public void onLowMemory() {
        this.mCalled = true;
    }

    @CallSuper
    public void onDestroyView() {
        this.mCalled = true;
    }

    @CallSuper
    public void onDestroy() {
        boolean r0 = true;
        this.mCalled = true;
        FragmentActivity r1 = getActivity();
        if (r1 != null) goto L5;
    L7:
        r0 = false;
    L8:
        ViewModelStore r12 = this.mViewModelStore;
        if (r12 == null) goto L13;
        if (r0 == true) goto L14;
        r12.clear();
        return;
    L14:
        return;
    L13:
        return;
    L5:
        if (r1.isChangingConfigurations() == false) goto L7;
        goto L7
    }

    void initState() {
        this.mIndex = -1;
        this.mWho = null;
        this.mAdded = false;
        this.mRemoving = false;
        this.mFromLayout = false;
        this.mInLayout = false;
        this.mRestored = false;
        this.mBackStackNesting = 0;
        this.mFragmentManager = null;
        this.mChildFragmentManager = null;
        this.mHost = null;
        this.mFragmentId = 0;
        this.mContainerId = 0;
        this.mTag = null;
        this.mHidden = false;
        this.mDetached = false;
        this.mRetaining = false;
    }

    @CallSuper
    public void onDetach() {
        this.mCalled = true;
    }

    @Override
    public void onCreateContextMenu(ContextMenu r2, View r3, ContextMenu.ContextMenuInfo r4) {
        getActivity().onCreateContextMenu(r2, r3, r4);
    }

    public void registerForContextMenu(View r1) {
        r1.setOnCreateContextMenuListener(this);
    }

    public void unregisterForContextMenu(View r2) {
        r2.setOnCreateContextMenuListener(null);
    }

    public void setEnterSharedElementCallback(SharedElementCallback r2) {
        ensureAnimationInfo().mEnterTransitionCallback = r2;
    }

    public void setExitSharedElementCallback(SharedElementCallback r2) {
        ensureAnimationInfo().mExitTransitionCallback = r2;
    }

    public void setEnterTransition(@Nullable Object r2) {
        ensureAnimationInfo().mEnterTransition = r2;
    }

    @Nullable
    public Object getEnterTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mEnterTransition;
    }

    public void setReturnTransition(@Nullable Object r2) {
        ensureAnimationInfo().mReturnTransition = r2;
    }

    @Nullable
    public Object getReturnTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        if (r0.mReturnTransition != USE_DEFAULT_TRANSITION) goto L10;
        return getEnterTransition();
    L10:
        return this.mAnimationInfo.mReturnTransition;
    }

    public void setExitTransition(@Nullable Object r2) {
        ensureAnimationInfo().mExitTransition = r2;
    }

    @Nullable
    public Object getExitTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mExitTransition;
    }

    public void setReenterTransition(@Nullable Object r2) {
        ensureAnimationInfo().mReenterTransition = r2;
    }

    public Object getReenterTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        if (r0.mReenterTransition != USE_DEFAULT_TRANSITION) goto L10;
        return getExitTransition();
    L10:
        return this.mAnimationInfo.mReenterTransition;
    }

    public void setSharedElementEnterTransition(@Nullable Object r2) {
        ensureAnimationInfo().mSharedElementEnterTransition = r2;
    }

    @Nullable
    public Object getSharedElementEnterTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mSharedElementEnterTransition;
    }

    public void setSharedElementReturnTransition(@Nullable Object r2) {
        ensureAnimationInfo().mSharedElementReturnTransition = r2;
    }

    @Nullable
    public Object getSharedElementReturnTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        if (r0.mSharedElementReturnTransition != USE_DEFAULT_TRANSITION) goto L10;
        return getSharedElementEnterTransition();
    L10:
        return this.mAnimationInfo.mSharedElementReturnTransition;
    }

    public void setAllowEnterTransitionOverlap(boolean r2) {
        AnimationInfo r0 = ensureAnimationInfo();
        r0.mAllowEnterTransitionOverlap = Boolean.valueOf(r2);
    }

    public boolean getAllowEnterTransitionOverlap() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L5;
    L8:
        return true;
    L5:
        if (r0.mAllowEnterTransitionOverlap == null) goto L8;
        return this.mAnimationInfo.mAllowEnterTransitionOverlap.booleanValue();
    }

    public void setAllowReturnTransitionOverlap(boolean r2) {
        AnimationInfo r0 = ensureAnimationInfo();
        r0.mAllowReturnTransitionOverlap = Boolean.valueOf(r2);
    }

    public boolean getAllowReturnTransitionOverlap() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L5;
    L8:
        return true;
    L5:
        if (r0.mAllowReturnTransitionOverlap == null) goto L8;
        return this.mAnimationInfo.mAllowReturnTransitionOverlap.booleanValue();
    }

    public void postponeEnterTransition() {
        ensureAnimationInfo().mEnterTransitionPostponed = true;
    }

    public void startPostponedEnterTransition() {
        FragmentManagerImpl r0 = this.mFragmentManager;
        if (r0 != null) goto L5;
    L11:
        ensureAnimationInfo().mEnterTransitionPostponed = false;
        return;
    L5:
        if (r0.mHost == null) goto L11;
        if (Looper.myLooper() == this.mFragmentManager.mHost.getHandler().getLooper()) goto L10;
        this.mFragmentManager.mHost.getHandler().postAtFrontOfQueue(new 1(this));
        return;
    L10:
        callStartTransitionListener();
    }

    void callStartTransitionListener() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L5;
        OnStartEnterTransitionListener r02 = null;
    L6:
        if (r02 == null) goto L9;
        r02.onStartEnterTransition();
        return;
    L9:
        return;
    L5:
        r0.mEnterTransitionPostponed = false;
        r02 = r0.mStartEnterTransitionListener;
        this.mAnimationInfo.mStartEnterTransitionListener = null;
        goto L6
    }

    public void dump(String r3, FileDescriptor r4, PrintWriter r5, String[] r6) {
        r5.print(r3);
        r5.print("mFragmentId=#");
        r5.print(Integer.toHexString(this.mFragmentId));
        r5.print(" mContainerId=#");
        r5.print(Integer.toHexString(this.mContainerId));
        r5.print(" mTag=");
        r5.println(this.mTag);
        r5.print(r3);
        r5.print("mState=");
        r5.print(this.mState);
        r5.print(" mIndex=");
        r5.print(this.mIndex);
        r5.print(" mWho=");
        r5.print(this.mWho);
        r5.print(" mBackStackNesting=");
        r5.println(this.mBackStackNesting);
        r5.print(r3);
        r5.print("mAdded=");
        r5.print(this.mAdded);
        r5.print(" mRemoving=");
        r5.print(this.mRemoving);
        r5.print(" mFromLayout=");
        r5.print(this.mFromLayout);
        r5.print(" mInLayout=");
        r5.println(this.mInLayout);
        r5.print(r3);
        r5.print("mHidden=");
        r5.print(this.mHidden);
        r5.print(" mDetached=");
        r5.print(this.mDetached);
        r5.print(" mMenuVisible=");
        r5.print(this.mMenuVisible);
        r5.print(" mHasMenu=");
        r5.println(this.mHasMenu);
        r5.print(r3);
        r5.print("mRetainInstance=");
        r5.print(this.mRetainInstance);
        r5.print(" mRetaining=");
        r5.print(this.mRetaining);
        r5.print(" mUserVisibleHint=");
        r5.println(this.mUserVisibleHint);
        if (this.mFragmentManager == null) goto L6;
        r5.print(r3);
        r5.print("mFragmentManager=");
        r5.println(this.mFragmentManager);
    L6:
        if (this.mHost == null) goto L9;
        r5.print(r3);
        r5.print("mHost=");
        r5.println(this.mHost);
    L9:
        if (this.mParentFragment == null) goto L12;
        r5.print(r3);
        r5.print("mParentFragment=");
        r5.println(this.mParentFragment);
    L12:
        if (this.mArguments == null) goto L15;
        r5.print(r3);
        r5.print("mArguments=");
        r5.println(this.mArguments);
    L15:
        if (this.mSavedFragmentState == null) goto L18;
        r5.print(r3);
        r5.print("mSavedFragmentState=");
        r5.println(this.mSavedFragmentState);
    L18:
        if (this.mSavedViewState == null) goto L21;
        r5.print(r3);
        r5.print("mSavedViewState=");
        r5.println(this.mSavedViewState);
    L21:
        if (this.mTarget == null) goto L24;
        r5.print(r3);
        r5.print("mTarget=");
        r5.print(this.mTarget);
        r5.print(" mTargetRequestCode=");
        r5.println(this.mTargetRequestCode);
    L24:
        if (getNextAnim() == 0) goto L27;
        r5.print(r3);
        r5.print("mNextAnim=");
        r5.println(getNextAnim());
    L27:
        if (this.mContainer == null) goto L30;
        r5.print(r3);
        r5.print("mContainer=");
        r5.println(this.mContainer);
    L30:
        if (this.mView == null) goto L33;
        r5.print(r3);
        r5.print("mView=");
        r5.println(this.mView);
    L33:
        if (this.mInnerView == null) goto L36;
        r5.print(r3);
        r5.print("mInnerView=");
        r5.println(this.mView);
    L36:
        if (getAnimatingAway() == null) goto L39;
        r5.print(r3);
        r5.print("mAnimatingAway=");
        r5.println(getAnimatingAway());
        r5.print(r3);
        r5.print("mStateAfterAnimating=");
        r5.println(getStateAfterAnimating());
    L39:
        if (getContext() == null) goto L42;
        LoaderManager.getInstance(this).dump(r3, r4, r5, r6);
    L42:
        if (this.mChildFragmentManager == null) goto L45;
        r5.print(r3);
        r5.println("Child " + this.mChildFragmentManager + ":");
        this.mChildFragmentManager.dump(r3 + "  ", r4, r5, r6);
        return;
    }

    Fragment findFragmentByWho(String r2) {
        if (r2.equals(this.mWho) == false) goto L5;
        return this;
    L5:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 != null) goto L8;
        return null;
    L8:
        return r0.findFragmentByWho(r2);
    }

    void instantiateChildFragmentManager() {
        if (this.mHost == null) goto L7;
        this.mChildFragmentManager = new FragmentManagerImpl();
        this.mChildFragmentManager.attachController(this.mHost, new 2(this), this);
        return;
    L7:
        throw new IllegalStateException("Fragment has not been attached yet.");
    }

    void performCreate(Bundle r3) {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.noteStateNotSaved();
    L5:
        this.mState = 1;
        this.mCalled = false;
        onCreate(r3);
        this.mIsCreated = true;
        if (this.mCalled == false) goto L10;
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_CREATE);
        return;
    L10:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onCreate()");
    }

    void performCreateView(@NonNull LayoutInflater r2, @Nullable ViewGroup r3, @Nullable Bundle r4) {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.noteStateNotSaved();
    L5:
        this.mPerformedCreateView = true;
        this.mViewLifecycleOwner = new 3(this);
        this.mViewLifecycleRegistry = null;
        this.mView = onCreateView(r2, r3, r4);
        if (this.mView == null) goto L9;
        this.mViewLifecycleOwner.getLifecycle();
        this.mViewLifecycleOwnerLiveData.setValue(this.mViewLifecycleOwner);
        return;
    L9:
        if (this.mViewLifecycleRegistry != null) goto L13;
        this.mViewLifecycleOwner = null;
        return;
    L13:
        throw new IllegalStateException("Called getViewLifecycleOwner() but onCreateView() returned null");
    }

    void performActivityCreated(Bundle r3) {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.noteStateNotSaved();
    L5:
        this.mState = 2;
        this.mCalled = false;
        onActivityCreated(r3);
        if (this.mCalled == false) goto L12;
        FragmentManagerImpl r32 = this.mChildFragmentManager;
        if (r32 == null) goto L13;
        r32.dispatchActivityCreated();
        return;
    L13:
        return;
    L12:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onActivityCreated()");
    }

    void performStart() {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.noteStateNotSaved();
        this.mChildFragmentManager.execPendingActions();
    L5:
        this.mState = 3;
        this.mCalled = false;
        onStart();
        if (this.mCalled == false) goto L15;
        FragmentManagerImpl r02 = this.mChildFragmentManager;
        if (r02 == null) goto L10;
        r02.dispatchStart();
    L10:
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_START);
        if (this.mView == null) goto L16;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_START);
        return;
    L16:
        return;
    L15:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onStart()");
    }

    void performResume() {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.noteStateNotSaved();
        this.mChildFragmentManager.execPendingActions();
    L5:
        this.mState = 4;
        this.mCalled = false;
        onResume();
        if (this.mCalled == false) goto L15;
        FragmentManagerImpl r02 = this.mChildFragmentManager;
        if (r02 == null) goto L10;
        r02.dispatchResume();
        this.mChildFragmentManager.execPendingActions();
    L10:
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_RESUME);
        if (this.mView == null) goto L16;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_RESUME);
        return;
    L16:
        return;
    L15:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onResume()");
    }

    void noteStateNotSaved() {
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L6;
        r0.noteStateNotSaved();
        return;
    }

    void performMultiWindowModeChanged(boolean r2) {
        onMultiWindowModeChanged(r2);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L6;
        r0.dispatchMultiWindowModeChanged(r2);
        return;
    }

    void performPictureInPictureModeChanged(boolean r2) {
        onPictureInPictureModeChanged(r2);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L6;
        r0.dispatchPictureInPictureModeChanged(r2);
        return;
    }

    void performConfigurationChanged(Configuration r2) {
        onConfigurationChanged(r2);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L6;
        r0.dispatchConfigurationChanged(r2);
        return;
    }

    void performLowMemory() {
        onLowMemory();
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L6;
        r0.dispatchLowMemory();
        return;
    }

    boolean performCreateOptionsMenu(Menu r3, MenuInflater r4) {
        boolean r1 = false;
        if (this.mHidden == false) goto L5;
        return false;
    L5:
        if (this.mHasMenu == true) goto L7;
    L9:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 != null) goto L12;
        return r1;
    L12:
        return r1 | r0.dispatchCreateOptionsMenu(r3, r4);
    L7:
        if (this.mMenuVisible == false) goto L9;
        onCreateOptionsMenu(r3, r4);
        r1 = true;
        goto L9
    }

    boolean performPrepareOptionsMenu(Menu r3) {
        boolean r1 = false;
        if (this.mHidden == false) goto L5;
        return false;
    L5:
        if (this.mHasMenu == true) goto L7;
    L9:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 != null) goto L12;
        return r1;
    L12:
        return r1 | r0.dispatchPrepareOptionsMenu(r3);
    L7:
        if (this.mMenuVisible == false) goto L9;
        onPrepareOptionsMenu(r3);
        r1 = true;
        goto L9
    }

    boolean performOptionsItemSelected(MenuItem r3) {
        if (this.mHidden == false) goto L5;
        return false;
    L5:
        if (this.mHasMenu == true) goto L7;
    L11:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 != null) goto L14;
        return false;
    L14:
        if (r0.dispatchOptionsItemSelected(r3) == false) goto L19;
        return true;
    L19:
        return false;
    L7:
        if (this.mMenuVisible == false) goto L11;
        if (onOptionsItemSelected(r3) == false) goto L11;
        return true;
    }

    boolean performContextItemSelected(MenuItem r3) {
        if (this.mHidden == false) goto L5;
        return false;
    L5:
        if (onContextItemSelected(r3) == false) goto L7;
        return true;
    L7:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 != null) goto L10;
        return false;
    L10:
        if (r0.dispatchContextItemSelected(r3) == false) goto L15;
        return true;
    L15:
        return false;
    }

    void performOptionsMenuClosed(Menu r2) {
        if (this.mHidden == false) goto L5;
        return;
    L5:
        if (this.mHasMenu == true) goto L7;
    L9:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L14;
        r0.dispatchOptionsMenuClosed(r2);
        return;
    L14:
        return;
    L7:
        if (this.mMenuVisible == false) goto L9;
        onOptionsMenuClosed(r2);
        goto L9
    }

    void performSaveInstanceState(Bundle r3) {
        onSaveInstanceState(r3);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L8;
        Parcelable r02 = r0.saveAllState();
        if (r02 == null) goto L9;
        r3.putParcelable("android:support:fragments", r02);
        return;
    L9:
        return;
    }

    void performPause() {
        if (this.mView == null) goto L5;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_PAUSE);
    L5:
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_PAUSE);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L8;
        r0.dispatchPause();
    L8:
        this.mState = 3;
        this.mCalled = false;
        onPause();
        if (this.mCalled == false) goto L12;
        return;
    L12:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onPause()");
    }

    void performStop() {
        if (this.mView == null) goto L5;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_STOP);
    L5:
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_STOP);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L8;
        r0.dispatchStop();
    L8:
        this.mState = 2;
        this.mCalled = false;
        onStop();
        if (this.mCalled == false) goto L12;
        return;
    L12:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onStop()");
    }

    void performDestroyView() {
        if (this.mView == null) goto L5;
        this.mViewLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_DESTROY);
    L5:
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L8;
        r0.dispatchDestroyView();
    L8:
        this.mState = 1;
        this.mCalled = false;
        onDestroyView();
        if (this.mCalled == false) goto L13;
        LoaderManager.getInstance(this).markForRedelivery();
        this.mPerformedCreateView = false;
        return;
    L13:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onDestroyView()");
    }

    void performDestroy() {
        this.mLifecycleRegistry.handleLifecycleEvent(Lifecycle.Event.ON_DESTROY);
        FragmentManagerImpl r0 = this.mChildFragmentManager;
        if (r0 == null) goto L5;
        r0.dispatchDestroy();
    L5:
        this.mState = 0;
        this.mCalled = false;
        this.mIsCreated = false;
        onDestroy();
        if (this.mCalled == false) goto L10;
        this.mChildFragmentManager = null;
        return;
    L10:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onDestroy()");
    }

    void performDetach() {
        this.mCalled = false;
        onDetach();
        this.mLayoutInflater = null;
        if (this.mCalled == false) goto L13;
        FragmentManagerImpl r1 = this.mChildFragmentManager;
        if (r1 != null) goto L7;
        return;
    L7:
        if (this.mRetaining == false) goto L10;
        r1.dispatchDestroy();
        this.mChildFragmentManager = null;
        return;
    L10:
        throw new IllegalStateException("Child FragmentManager of " + this + " was not  destroyed and this fragment is not retaining instance");
    L13:
        throw new SuperNotCalledException("Fragment " + this + " did not call through to super.onDetach()");
    }

    void setOnStartEnterTransitionListener(OnStartEnterTransitionListener r3) {
        ensureAnimationInfo();
        if (r3 != this.mAnimationInfo.mStartEnterTransitionListener) goto L5;
        return;
    L5:
        if (r3 == null) goto L12;
        if (this.mAnimationInfo.mStartEnterTransitionListener == null) goto L12;
        throw new IllegalStateException("Trying to set a replacement startPostponedEnterTransition on " + this);
    L12:
        if (this.mAnimationInfo.mEnterTransitionPostponed == false) goto L14;
        this.mAnimationInfo.mStartEnterTransitionListener = r3;
    L14:
        if (r3 == null) goto L17;
        r3.startListening();
        return;
    }

    private AnimationInfo ensureAnimationInfo() {
        if (this.mAnimationInfo != null) goto L6;
        this.mAnimationInfo = new AnimationInfo();
    L6:
        return this.mAnimationInfo;
    }

    int getNextAnim() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.mNextAnim;
    }

    void setNextAnim(int r2) {
        if (this.mAnimationInfo != null) goto L6;
        if (r2 != 0) goto L6;
        return;
    L6:
        ensureAnimationInfo().mNextAnim = r2;
    }

    int getNextTransition() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.mNextTransition;
    }

    void setNextTransition(int r2, int r3) {
        if (this.mAnimationInfo != null) goto L7;
        if (r2 != 0) goto L7;
        if (r3 != 0) goto L7;
        return;
    L7:
        ensureAnimationInfo();
        AnimationInfo r0 = this.mAnimationInfo;
        r0.mNextTransition = r2;
        r0.mNextTransitionStyle = r3;
    }

    int getNextTransitionStyle() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.mNextTransitionStyle;
    }

    SharedElementCallback getEnterTransitionCallback() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mEnterTransitionCallback;
    }

    SharedElementCallback getExitTransitionCallback() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mExitTransitionCallback;
    }

    View getAnimatingAway() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mAnimatingAway;
    }

    void setAnimatingAway(View r2) {
        ensureAnimationInfo().mAnimatingAway = r2;
    }

    void setAnimator(Animator r2) {
        ensureAnimationInfo().mAnimator = r2;
    }

    Animator getAnimator() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.mAnimator;
    }

    int getStateAfterAnimating() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.mStateAfterAnimating;
    }

    void setStateAfterAnimating(int r2) {
        ensureAnimationInfo().mStateAfterAnimating = r2;
    }

    boolean isPostponed() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return false;
    L7:
        return r0.mEnterTransitionPostponed;
    }

    boolean isHideReplaced() {
        AnimationInfo r0 = this.mAnimationInfo;
        if (r0 != null) goto L7;
        return false;
    L7:
        return r0.mIsHideReplaced;
    }

    void setHideReplaced(boolean r2) {
        ensureAnimationInfo().mIsHideReplaced = r2;
    }
}
