package android.support.v4.app;

public class Fragment implements android.content.ComponentCallbacks, android.view.View.OnCreateContextMenuListener, android.arch.lifecycle.LifecycleOwner, android.arch.lifecycle.ViewModelStoreOwner {
    static final int ACTIVITY_CREATED = 2;
    static final int CREATED = 1;
    static final int INITIALIZING = 0;
    static final int RESUMED = 4;
    static final int STARTED = 3;
    static final java.lang.Object USE_DEFAULT_TRANSITION = null;
    private static final android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> sClassMap = null;
    boolean mAdded;
    android.support.v4.app.Fragment.AnimationInfo mAnimationInfo;
    android.os.Bundle mArguments;
    int mBackStackNesting;
    boolean mCalled;
    android.support.v4.app.FragmentManagerImpl mChildFragmentManager;
    android.support.v4.app.FragmentManagerNonConfig mChildNonConfig;
    android.view.ViewGroup mContainer;
    int mContainerId;
    boolean mDeferStart;
    boolean mDetached;
    int mFragmentId;
    android.support.v4.app.FragmentManagerImpl mFragmentManager;
    boolean mFromLayout;
    boolean mHasMenu;
    boolean mHidden;
    boolean mHiddenChanged;
    android.support.v4.app.FragmentHostCallback mHost;
    boolean mInLayout;
    int mIndex;
    android.view.View mInnerView;
    boolean mIsCreated;
    boolean mIsNewlyAdded;
    android.view.LayoutInflater mLayoutInflater;
    android.arch.lifecycle.LifecycleRegistry mLifecycleRegistry;
    boolean mMenuVisible;
    android.support.v4.app.Fragment mParentFragment;
    boolean mPerformedCreateView;
    float mPostponedAlpha;
    boolean mRemoving;
    boolean mRestored;
    boolean mRetainInstance;
    boolean mRetaining;
    android.os.Bundle mSavedFragmentState;
    java.lang.Boolean mSavedUserVisibleHint;
    android.util.SparseArray<android.os.Parcelable> mSavedViewState;
    int mState;
    java.lang.String mTag;
    android.support.v4.app.Fragment mTarget;
    int mTargetIndex;
    int mTargetRequestCode;
    boolean mUserVisibleHint;
    android.view.View mView;
    android.arch.lifecycle.LifecycleOwner mViewLifecycleOwner;
    android.arch.lifecycle.MutableLiveData<android.arch.lifecycle.LifecycleOwner> mViewLifecycleOwnerLiveData;
    android.arch.lifecycle.LifecycleRegistry mViewLifecycleRegistry;
    android.arch.lifecycle.ViewModelStore mViewModelStore;
    java.lang.String mWho;




    static class AnimationInfo {
        java.lang.Boolean mAllowEnterTransitionOverlap;
        java.lang.Boolean mAllowReturnTransitionOverlap;
        android.view.View mAnimatingAway;
        android.animation.Animator mAnimator;
        java.lang.Object mEnterTransition;
        android.support.v4.app.SharedElementCallback mEnterTransitionCallback;
        boolean mEnterTransitionPostponed;
        java.lang.Object mExitTransition;
        android.support.v4.app.SharedElementCallback mExitTransitionCallback;
        boolean mIsHideReplaced;
        int mNextAnim;
        int mNextTransition;
        int mNextTransitionStyle;
        java.lang.Object mReenterTransition;
        java.lang.Object mReturnTransition;
        java.lang.Object mSharedElementEnterTransition;
        java.lang.Object mSharedElementReturnTransition;
        android.support.v4.app.Fragment.OnStartEnterTransitionListener mStartEnterTransitionListener;
        int mStateAfterAnimating;

        AnimationInfo() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.mEnterTransition = r0
                java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
                r2.mReturnTransition = r1
                r2.mExitTransition = r0
                java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
                r2.mReenterTransition = r1
                r2.mSharedElementEnterTransition = r0
                java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
                r2.mSharedElementReturnTransition = r1
                r2.mEnterTransitionCallback = r0
                r2.mExitTransitionCallback = r0
                return
        }
    }

    public static class InstantiationException extends java.lang.RuntimeException {
        public InstantiationException(java.lang.String r1, java.lang.Exception r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    interface OnStartEnterTransitionListener {
        void onStartEnterTransition();

        void startListening();
    }

    public static class SavedState implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<android.support.v4.app.Fragment.SavedState> CREATOR = null;
        final android.os.Bundle mState;


        static {
                android.support.v4.app.Fragment$SavedState$1 r0 = new android.support.v4.app.Fragment$SavedState$1
                r0.<init>()
                android.support.v4.app.Fragment.SavedState.CREATOR = r0
                return
        }

        SavedState(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.mState = r1
                return
        }

        SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>()
                android.os.Bundle r1 = r1.readBundle()
                r0.mState = r1
                if (r2 == 0) goto L10
                if (r1 == 0) goto L10
                r1.setClassLoader(r2)
            L10:
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                android.os.Bundle r2 = r0.mState
                r1.writeBundle(r2)
                return
        }
    }

    static {
            android.support.v4.util.SimpleArrayMap r0 = new android.support.v4.util.SimpleArrayMap
            r0.<init>()
            android.support.v4.app.Fragment.sClassMap = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION = r0
            return
    }

    public Fragment() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mState = r0
            r0 = -1
            r1.mIndex = r0
            r1.mTargetIndex = r0
            r0 = 1
            r1.mMenuVisible = r0
            r1.mUserVisibleHint = r0
            android.arch.lifecycle.LifecycleRegistry r0 = new android.arch.lifecycle.LifecycleRegistry
            r0.<init>(r1)
            r1.mLifecycleRegistry = r0
            android.arch.lifecycle.MutableLiveData r0 = new android.arch.lifecycle.MutableLiveData
            r0.<init>()
            r1.mViewLifecycleOwnerLiveData = r0
            return
    }

    private android.support.v4.app.Fragment.AnimationInfo ensureAnimationInfo() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto Lb
            android.support.v4.app.Fragment$AnimationInfo r0 = new android.support.v4.app.Fragment$AnimationInfo
            r0.<init>()
            r1.mAnimationInfo = r0
        Lb:
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            return r0
    }

    public static android.support.v4.app.Fragment instantiate(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.support.v4.app.Fragment r1 = instantiate(r1, r2, r0)
            return r1
    }

    public static android.support.v4.app.Fragment instantiate(android.content.Context r5, java.lang.String r6, android.os.Bundle r7) {
            java.lang.String r0 = " empty constructor that is public"
            java.lang.String r1 = ": make sure class name exists, is public, and has an"
            java.lang.String r2 = "Unable to instantiate fragment "
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r3 = android.support.v4.app.Fragment.sClassMap     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.Object r3 = r3.get(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.Class r3 = (java.lang.Class) r3     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            if (r3 != 0) goto L1d
            java.lang.ClassLoader r5 = r5.getClassLoader()     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.Class r3 = r5.loadClass(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r5 = android.support.v4.app.Fragment.sClassMap     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            r5.put(r6, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
        L1d:
            r5 = 0
            java.lang.Class[] r4 = new java.lang.Class[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.reflect.Constructor r3 = r3.getConstructor(r4)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.Object r5 = r3.newInstance(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            android.support.v4.app.Fragment r5 = (android.support.v4.app.Fragment) r5     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            if (r7 == 0) goto L3c
            java.lang.Class r3 = r5.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            r7.setClassLoader(r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
            r5.setArguments(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L3d java.lang.NoSuchMethodException -> L58 java.lang.IllegalAccessException -> L73 java.lang.InstantiationException -> L8f java.lang.ClassNotFoundException -> Lab
        L3c:
            return r5
        L3d:
            r5 = move-exception
            android.support.v4.app.Fragment$InstantiationException r7 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = ": calling Fragment constructor caused an exception"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6, r5)
            throw r7
        L58:
            r5 = move-exception
            android.support.v4.app.Fragment$InstantiationException r7 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = ": could not find Fragment constructor"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6, r5)
            throw r7
        L73:
            r5 = move-exception
            android.support.v4.app.Fragment$InstantiationException r7 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r6)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r6 = r3.toString()
            r7.<init>(r6, r5)
            throw r7
        L8f:
            r5 = move-exception
            android.support.v4.app.Fragment$InstantiationException r7 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r6)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r6 = r3.toString()
            r7.<init>(r6, r5)
            throw r7
        Lab:
            r5 = move-exception
            android.support.v4.app.Fragment$InstantiationException r7 = new android.support.v4.app.Fragment$InstantiationException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r6)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r6 = r3.toString()
            r7.<init>(r6, r5)
            throw r7
    }

    static boolean isSupportFragmentClass(android.content.Context r1, java.lang.String r2) {
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r0 = android.support.v4.app.Fragment.sClassMap     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.ClassNotFoundException -> L1e
            if (r0 != 0) goto L17
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L1e
            java.lang.Class r0 = r1.loadClass(r2)     // Catch: java.lang.ClassNotFoundException -> L1e
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> r1 = android.support.v4.app.Fragment.sClassMap     // Catch: java.lang.ClassNotFoundException -> L1e
            r1.put(r2, r0)     // Catch: java.lang.ClassNotFoundException -> L1e
        L17:
            java.lang.Class<android.support.v4.app.Fragment> r1 = android.support.v4.app.Fragment.class
            boolean r1 = r1.isAssignableFrom(r0)     // Catch: java.lang.ClassNotFoundException -> L1e
            return r1
        L1e:
            r1 = 0
            return r1
    }

    void callStartTransitionListener() {
            r3 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r3.mAnimationInfo
            r1 = 0
            if (r0 != 0) goto L6
            goto L12
        L6:
            r2 = 0
            r0.mEnterTransitionPostponed = r2
            android.support.v4.app.Fragment$AnimationInfo r0 = r3.mAnimationInfo
            android.support.v4.app.Fragment$OnStartEnterTransitionListener r0 = r0.mStartEnterTransitionListener
            android.support.v4.app.Fragment$AnimationInfo r2 = r3.mAnimationInfo
            r2.mStartEnterTransitionListener = r1
            r1 = r0
        L12:
            if (r1 == 0) goto L17
            r1.onStartEnterTransition()
        L17:
            return
    }

    public void dump(java.lang.String r3, java.io.FileDescriptor r4, java.io.PrintWriter r5, java.lang.String[] r6) {
            r2 = this;
            r5.print(r3)
            java.lang.String r0 = "mFragmentId=#"
            r5.print(r0)
            int r0 = r2.mFragmentId
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r5.print(r0)
            java.lang.String r0 = " mContainerId=#"
            r5.print(r0)
            int r0 = r2.mContainerId
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r5.print(r0)
            java.lang.String r0 = " mTag="
            r5.print(r0)
            java.lang.String r0 = r2.mTag
            r5.println(r0)
            r5.print(r3)
            java.lang.String r0 = "mState="
            r5.print(r0)
            int r0 = r2.mState
            r5.print(r0)
            java.lang.String r0 = " mIndex="
            r5.print(r0)
            int r0 = r2.mIndex
            r5.print(r0)
            java.lang.String r0 = " mWho="
            r5.print(r0)
            java.lang.String r0 = r2.mWho
            r5.print(r0)
            java.lang.String r0 = " mBackStackNesting="
            r5.print(r0)
            int r0 = r2.mBackStackNesting
            r5.println(r0)
            r5.print(r3)
            java.lang.String r0 = "mAdded="
            r5.print(r0)
            boolean r0 = r2.mAdded
            r5.print(r0)
            java.lang.String r0 = " mRemoving="
            r5.print(r0)
            boolean r0 = r2.mRemoving
            r5.print(r0)
            java.lang.String r0 = " mFromLayout="
            r5.print(r0)
            boolean r0 = r2.mFromLayout
            r5.print(r0)
            java.lang.String r0 = " mInLayout="
            r5.print(r0)
            boolean r0 = r2.mInLayout
            r5.println(r0)
            r5.print(r3)
            java.lang.String r0 = "mHidden="
            r5.print(r0)
            boolean r0 = r2.mHidden
            r5.print(r0)
            java.lang.String r0 = " mDetached="
            r5.print(r0)
            boolean r0 = r2.mDetached
            r5.print(r0)
            java.lang.String r0 = " mMenuVisible="
            r5.print(r0)
            boolean r0 = r2.mMenuVisible
            r5.print(r0)
            java.lang.String r0 = " mHasMenu="
            r5.print(r0)
            boolean r0 = r2.mHasMenu
            r5.println(r0)
            r5.print(r3)
            java.lang.String r0 = "mRetainInstance="
            r5.print(r0)
            boolean r0 = r2.mRetainInstance
            r5.print(r0)
            java.lang.String r0 = " mRetaining="
            r5.print(r0)
            boolean r0 = r2.mRetaining
            r5.print(r0)
            java.lang.String r0 = " mUserVisibleHint="
            r5.print(r0)
            boolean r0 = r2.mUserVisibleHint
            r5.println(r0)
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            if (r0 == 0) goto Ldc
            r5.print(r3)
            java.lang.String r0 = "mFragmentManager="
            r5.print(r0)
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            r5.println(r0)
        Ldc:
            android.support.v4.app.FragmentHostCallback r0 = r2.mHost
            if (r0 == 0) goto Led
            r5.print(r3)
            java.lang.String r0 = "mHost="
            r5.print(r0)
            android.support.v4.app.FragmentHostCallback r0 = r2.mHost
            r5.println(r0)
        Led:
            android.support.v4.app.Fragment r0 = r2.mParentFragment
            if (r0 == 0) goto Lfe
            r5.print(r3)
            java.lang.String r0 = "mParentFragment="
            r5.print(r0)
            android.support.v4.app.Fragment r0 = r2.mParentFragment
            r5.println(r0)
        Lfe:
            android.os.Bundle r0 = r2.mArguments
            if (r0 == 0) goto L10f
            r5.print(r3)
            java.lang.String r0 = "mArguments="
            r5.print(r0)
            android.os.Bundle r0 = r2.mArguments
            r5.println(r0)
        L10f:
            android.os.Bundle r0 = r2.mSavedFragmentState
            if (r0 == 0) goto L120
            r5.print(r3)
            java.lang.String r0 = "mSavedFragmentState="
            r5.print(r0)
            android.os.Bundle r0 = r2.mSavedFragmentState
            r5.println(r0)
        L120:
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mSavedViewState
            if (r0 == 0) goto L131
            r5.print(r3)
            java.lang.String r0 = "mSavedViewState="
            r5.print(r0)
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mSavedViewState
            r5.println(r0)
        L131:
            android.support.v4.app.Fragment r0 = r2.mTarget
            if (r0 == 0) goto L14c
            r5.print(r3)
            java.lang.String r0 = "mTarget="
            r5.print(r0)
            android.support.v4.app.Fragment r0 = r2.mTarget
            r5.print(r0)
            java.lang.String r0 = " mTargetRequestCode="
            r5.print(r0)
            int r0 = r2.mTargetRequestCode
            r5.println(r0)
        L14c:
            int r0 = r2.getNextAnim()
            if (r0 == 0) goto L161
            r5.print(r3)
            java.lang.String r0 = "mNextAnim="
            r5.print(r0)
            int r0 = r2.getNextAnim()
            r5.println(r0)
        L161:
            android.view.ViewGroup r0 = r2.mContainer
            if (r0 == 0) goto L172
            r5.print(r3)
            java.lang.String r0 = "mContainer="
            r5.print(r0)
            android.view.ViewGroup r0 = r2.mContainer
            r5.println(r0)
        L172:
            android.view.View r0 = r2.mView
            if (r0 == 0) goto L183
            r5.print(r3)
            java.lang.String r0 = "mView="
            r5.print(r0)
            android.view.View r0 = r2.mView
            r5.println(r0)
        L183:
            android.view.View r0 = r2.mInnerView
            if (r0 == 0) goto L194
            r5.print(r3)
            java.lang.String r0 = "mInnerView="
            r5.print(r0)
            android.view.View r0 = r2.mView
            r5.println(r0)
        L194:
            android.view.View r0 = r2.getAnimatingAway()
            if (r0 == 0) goto L1b8
            r5.print(r3)
            java.lang.String r0 = "mAnimatingAway="
            r5.print(r0)
            android.view.View r0 = r2.getAnimatingAway()
            r5.println(r0)
            r5.print(r3)
            java.lang.String r0 = "mStateAfterAnimating="
            r5.print(r0)
            int r0 = r2.getStateAfterAnimating()
            r5.println(r0)
        L1b8:
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto L1c5
            android.support.v4.app.LoaderManager r0 = android.support.v4.app.LoaderManager.getInstance(r2)
            r0.dump(r3, r4, r5, r6)
        L1c5:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L1fd
            r5.print(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Child "
            r0.append(r1)
            android.support.v4.app.FragmentManagerImpl r1 = r2.mChildFragmentManager
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.println(r0)
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "  "
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.dump(r3, r4, r5, r6)
        L1fd:
            return
    }

    public final boolean equals(java.lang.Object r1) {
            r0 = this;
            boolean r1 = super.equals(r1)
            return r1
    }

    android.support.v4.app.Fragment findFragmentByWho(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.mWho
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L9
            return r1
        L9:
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto L12
            android.support.v4.app.Fragment r2 = r0.findFragmentByWho(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }

    public final android.support.v4.app.FragmentActivity getActivity() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            android.app.Activity r0 = r0.getActivity()
            android.support.v4.app.FragmentActivity r0 = (android.support.v4.app.FragmentActivity) r0
        Lc:
            return r0
    }

    public boolean getAllowEnterTransitionOverlap() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 == 0) goto L12
            java.lang.Boolean r0 = r0.mAllowEnterTransitionOverlap
            if (r0 != 0) goto L9
            goto L12
        L9:
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            java.lang.Boolean r0 = r0.mAllowEnterTransitionOverlap
            boolean r0 = r0.booleanValue()
            goto L13
        L12:
            r0 = 1
        L13:
            return r0
    }

    public boolean getAllowReturnTransitionOverlap() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 == 0) goto L12
            java.lang.Boolean r0 = r0.mAllowReturnTransitionOverlap
            if (r0 != 0) goto L9
            goto L12
        L9:
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            java.lang.Boolean r0 = r0.mAllowReturnTransitionOverlap
            boolean r0 = r0.booleanValue()
            goto L13
        L12:
            r0 = 1
        L13:
            return r0
    }

    android.view.View getAnimatingAway() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.view.View r0 = r0.mAnimatingAway
            return r0
    }

    android.animation.Animator getAnimator() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.animation.Animator r0 = r0.mAnimator
            return r0
    }

    public final android.os.Bundle getArguments() {
            r1 = this;
            android.os.Bundle r0 = r1.mArguments
            return r0
    }

    public final android.support.v4.app.FragmentManager getChildFragmentManager() {
            r2 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 != 0) goto L2c
            r2.instantiateChildFragmentManager()
            int r0 = r2.mState
            r1 = 4
            if (r0 < r1) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            r0.dispatchResume()
            goto L2c
        L12:
            r1 = 3
            if (r0 < r1) goto L1b
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            r0.dispatchStart()
            goto L2c
        L1b:
            r1 = 2
            if (r0 < r1) goto L24
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            r0.dispatchActivityCreated()
            goto L2c
        L24:
            r1 = 1
            if (r0 < r1) goto L2c
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            r0.dispatchCreate()
        L2c:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            android.content.Context r0 = r0.getContext()
        La:
            return r0
    }

    public java.lang.Object getEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mEnterTransition
            return r0
    }

    android.support.v4.app.SharedElementCallback getEnterTransitionCallback() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.support.v4.app.SharedElementCallback r0 = r0.mEnterTransitionCallback
            return r0
    }

    public java.lang.Object getExitTransition() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mExitTransition
            return r0
    }

    android.support.v4.app.SharedElementCallback getExitTransitionCallback() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.support.v4.app.SharedElementCallback r0 = r0.mExitTransitionCallback
            return r0
    }

    public final android.support.v4.app.FragmentManager getFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r1.mFragmentManager
            return r0
    }

    public final java.lang.Object getHost() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            java.lang.Object r0 = r0.onGetHost()
        La:
            return r0
    }

    public final int getId() {
            r1 = this;
            int r0 = r1.mFragmentId
            return r0
    }

    public final android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            android.view.LayoutInflater r0 = r1.mLayoutInflater
            if (r0 != 0) goto L9
            r0 = 0
            android.view.LayoutInflater r0 = r1.performGetLayoutInflater(r0)
        L9:
            return r0
    }

    @java.lang.Deprecated
    public android.view.LayoutInflater getLayoutInflater(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r2 = r1.mHost
            if (r2 == 0) goto L15
            android.view.LayoutInflater r2 = r2.onGetLayoutInflater()
            r1.getChildFragmentManager()
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            android.view.LayoutInflater$Factory2 r0 = r0.getLayoutInflaterFactory()
            android.support.v4.view.LayoutInflaterCompat.setFactory2(r2, r0)
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "onGetLayoutInflater() cannot be executed until the Fragment is attached to the FragmentManager."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public android.arch.lifecycle.Lifecycle getLifecycle() {
            r1 = this;
            android.arch.lifecycle.LifecycleRegistry r0 = r1.mLifecycleRegistry
            return r0
    }

    @java.lang.Deprecated
    public android.support.v4.app.LoaderManager getLoaderManager() {
            r1 = this;
            android.support.v4.app.LoaderManager r0 = android.support.v4.app.LoaderManager.getInstance(r1)
            return r0
    }

    int getNextAnim() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.mNextAnim
            return r0
    }

    int getNextTransition() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.mNextTransition
            return r0
    }

    int getNextTransitionStyle() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.mNextTransitionStyle
            return r0
    }

    public final android.support.v4.app.Fragment getParentFragment() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mParentFragment
            return r0
    }

    public java.lang.Object getReenterTransition() {
            r2 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mReenterTransition
            java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
            if (r0 != r1) goto L11
            java.lang.Object r0 = r2.getExitTransition()
            goto L15
        L11:
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            java.lang.Object r0 = r0.mReenterTransition
        L15:
            return r0
    }

    public final android.content.res.Resources getResources() {
            r1 = this;
            android.content.Context r0 = r1.requireContext()
            android.content.res.Resources r0 = r0.getResources()
            return r0
    }

    public final boolean getRetainInstance() {
            r1 = this;
            boolean r0 = r1.mRetainInstance
            return r0
    }

    public java.lang.Object getReturnTransition() {
            r2 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mReturnTransition
            java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
            if (r0 != r1) goto L11
            java.lang.Object r0 = r2.getEnterTransition()
            goto L15
        L11:
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            java.lang.Object r0 = r0.mReturnTransition
        L15:
            return r0
    }

    public java.lang.Object getSharedElementEnterTransition() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mSharedElementEnterTransition
            return r0
    }

    public java.lang.Object getSharedElementReturnTransition() {
            r2 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.mSharedElementReturnTransition
            java.lang.Object r1 = android.support.v4.app.Fragment.USE_DEFAULT_TRANSITION
            if (r0 != r1) goto L11
            java.lang.Object r0 = r2.getSharedElementEnterTransition()
            goto L15
        L11:
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            java.lang.Object r0 = r0.mSharedElementReturnTransition
        L15:
            return r0
    }

    int getStateAfterAnimating() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.mStateAfterAnimating
            return r0
    }

    public final java.lang.String getString(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r2 = r0.getString(r2)
            return r2
    }

    public final java.lang.String getString(int r2, java.lang.Object... r3) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = r1.mTag
            return r0
    }

    public final android.support.v4.app.Fragment getTargetFragment() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mTarget
            return r0
    }

    public final int getTargetRequestCode() {
            r1 = this;
            int r0 = r1.mTargetRequestCode
            return r0
    }

    public final java.lang.CharSequence getText(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            java.lang.CharSequence r2 = r0.getText(r2)
            return r2
    }

    public boolean getUserVisibleHint() {
            r1 = this;
            boolean r0 = r1.mUserVisibleHint
            return r0
    }

    public android.view.View getView() {
            r1 = this;
            android.view.View r0 = r1.mView
            return r0
    }

    public android.arch.lifecycle.LifecycleOwner getViewLifecycleOwner() {
            r2 = this;
            android.arch.lifecycle.LifecycleOwner r0 = r2.mViewLifecycleOwner
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Can't access the Fragment View's LifecycleOwner when getView() is null i.e., before onCreateView() or after onDestroyView()"
            r0.<init>(r1)
            throw r0
    }

    public android.arch.lifecycle.LiveData<android.arch.lifecycle.LifecycleOwner> getViewLifecycleOwnerLiveData() {
            r1 = this;
            android.arch.lifecycle.MutableLiveData<android.arch.lifecycle.LifecycleOwner> r0 = r1.mViewLifecycleOwnerLiveData
            return r0
    }

    @Override
    public android.arch.lifecycle.ViewModelStore getViewModelStore() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            if (r0 == 0) goto L14
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            if (r0 != 0) goto L11
            android.arch.lifecycle.ViewModelStore r0 = new android.arch.lifecycle.ViewModelStore
            r0.<init>()
            r2.mViewModelStore = r0
        L11:
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            return r0
        L14:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Can't access ViewModels from detached fragment"
            r0.<init>(r1)
            throw r0
    }

    public final boolean hasOptionsMenu() {
            r1 = this;
            boolean r0 = r1.mHasMenu
            return r0
    }

    public final int hashCode() {
            r1 = this;
            int r0 = super.hashCode()
            return r0
    }

    void initState() {
            r2 = this;
            r0 = -1
            r2.mIndex = r0
            r0 = 0
            r2.mWho = r0
            r1 = 0
            r2.mAdded = r1
            r2.mRemoving = r1
            r2.mFromLayout = r1
            r2.mInLayout = r1
            r2.mRestored = r1
            r2.mBackStackNesting = r1
            r2.mFragmentManager = r0
            r2.mChildFragmentManager = r0
            r2.mHost = r0
            r2.mFragmentId = r1
            r2.mContainerId = r1
            r2.mTag = r0
            r2.mHidden = r1
            r2.mDetached = r1
            r2.mRetaining = r1
            return
    }

    void instantiateChildFragmentManager() {
            r3 = this;
            android.support.v4.app.FragmentHostCallback r0 = r3.mHost
            if (r0 == 0) goto L16
            android.support.v4.app.FragmentManagerImpl r0 = new android.support.v4.app.FragmentManagerImpl
            r0.<init>()
            r3.mChildFragmentManager = r0
            android.support.v4.app.FragmentHostCallback r1 = r3.mHost
            android.support.v4.app.Fragment$2 r2 = new android.support.v4.app.Fragment$2
            r2.<init>(r3)
            r0.attachController(r1, r2, r3)
            return
        L16:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Fragment has not been attached yet."
            r0.<init>(r1)
            throw r0
    }

    public final boolean isAdded() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 == 0) goto La
            boolean r0 = r1.mAdded
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public final boolean isDetached() {
            r1 = this;
            boolean r0 = r1.mDetached
            return r0
    }

    public final boolean isHidden() {
            r1 = this;
            boolean r0 = r1.mHidden
            return r0
    }

    boolean isHideReplaced() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.mIsHideReplaced
            return r0
    }

    final boolean isInBackStack() {
            r1 = this;
            int r0 = r1.mBackStackNesting
            if (r0 <= 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public final boolean isInLayout() {
            r1 = this;
            boolean r0 = r1.mInLayout
            return r0
    }

    public final boolean isMenuVisible() {
            r1 = this;
            boolean r0 = r1.mMenuVisible
            return r0
    }

    boolean isPostponed() {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.mEnterTransitionPostponed
            return r0
    }

    public final boolean isRemoving() {
            r1 = this;
            boolean r0 = r1.mRemoving
            return r0
    }

    public final boolean isResumed() {
            r2 = this;
            int r0 = r2.mState
            r1 = 4
            if (r0 < r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public final boolean isStateSaved() {
            r1 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r1.mFragmentManager
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isStateSaved()
            return r0
    }

    public final boolean isVisible() {
            r1 = this;
            boolean r0 = r1.isAdded()
            if (r0 == 0) goto L20
            boolean r0 = r1.isHidden()
            if (r0 != 0) goto L20
            android.view.View r0 = r1.mView
            if (r0 == 0) goto L20
            android.os.IBinder r0 = r0.getWindowToken()
            if (r0 == 0) goto L20
            android.view.View r0 = r1.mView
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L20
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
    }

    void noteStateNotSaved() {
            r1 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto L7
            r0.noteStateNotSaved()
        L7:
            return
    }

    public void onActivityCreated(android.os.Bundle r1) {
            r0 = this;
            r1 = 1
            r0.mCalled = r1
            return
    }

    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void onAttach(android.app.Activity r1) {
            r0 = this;
            r1 = 1
            r0.mCalled = r1
            return
    }

    public void onAttach(android.content.Context r2) {
            r1 = this;
            r2 = 1
            r1.mCalled = r2
            android.support.v4.app.FragmentHostCallback r2 = r1.mHost
            if (r2 != 0) goto L9
            r2 = 0
            goto Ld
        L9:
            android.app.Activity r2 = r2.getActivity()
        Ld:
            if (r2 == 0) goto L15
            r0 = 0
            r1.mCalled = r0
            r1.onAttach(r2)
        L15:
            return
    }

    public void onAttachFragment(android.support.v4.app.Fragment r1) {
            r0 = this;
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            r1 = 1
            r0.mCalled = r1
            return
    }

    public boolean onContextItemSelected(android.view.MenuItem r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            r1.restoreChildFragmentState(r2)
            android.support.v4.app.FragmentManagerImpl r2 = r1.mChildFragmentManager
            if (r2 == 0) goto L15
            boolean r2 = r2.isStateAtLeast(r0)
            if (r2 != 0) goto L15
            android.support.v4.app.FragmentManagerImpl r2 = r1.mChildFragmentManager
            r2.dispatchCreate()
        L15:
            return
    }

    public android.view.animation.Animation onCreateAnimation(int r1, boolean r2, int r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public android.animation.Animator onCreateAnimator(int r1, boolean r2, int r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r2, android.view.View r3, android.view.ContextMenu.ContextMenuInfo r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.getActivity()
            r0.onCreateContextMenu(r2, r3, r4)
            return
    }

    public void onCreateOptionsMenu(android.view.Menu r1, android.view.MenuInflater r2) {
            r0 = this;
            return
    }

    public android.view.View onCreateView(android.view.LayoutInflater r1, android.view.ViewGroup r2, android.os.Bundle r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void onDestroy() {
            r2 = this;
            r0 = 1
            r2.mCalled = r0
            android.support.v4.app.FragmentActivity r1 = r2.getActivity()
            if (r1 == 0) goto L10
            boolean r1 = r1.isChangingConfigurations()
            if (r1 == 0) goto L10
            goto L11
        L10:
            r0 = 0
        L11:
            android.arch.lifecycle.ViewModelStore r1 = r2.mViewModelStore
            if (r1 == 0) goto L1a
            if (r0 != 0) goto L1a
            r1.clear()
        L1a:
            return
    }

    public void onDestroyOptionsMenu() {
            r0 = this;
            return
    }

    public void onDestroyView() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onDetach() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public android.view.LayoutInflater onGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = r0.getLayoutInflater(r1)
            return r1
    }

    public void onHiddenChanged(boolean r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void onInflate(android.app.Activity r1, android.util.AttributeSet r2, android.os.Bundle r3) {
            r0 = this;
            r1 = 1
            r0.mCalled = r1
            return
    }

    public void onInflate(android.content.Context r2, android.util.AttributeSet r3, android.os.Bundle r4) {
            r1 = this;
            r2 = 1
            r1.mCalled = r2
            android.support.v4.app.FragmentHostCallback r2 = r1.mHost
            if (r2 != 0) goto L9
            r2 = 0
            goto Ld
        L9:
            android.app.Activity r2 = r2.getActivity()
        Ld:
            if (r2 == 0) goto L15
            r0 = 0
            r1.mCalled = r0
            r1.onInflate(r2, r3, r4)
        L15:
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onMultiWindowModeChanged(boolean r1) {
            r0 = this;
            return
    }

    public boolean onOptionsItemSelected(android.view.MenuItem r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void onOptionsMenuClosed(android.view.Menu r1) {
            r0 = this;
            return
    }

    public void onPause() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onPictureInPictureModeChanged(boolean r1) {
            r0 = this;
            return
    }

    public void onPrepareOptionsMenu(android.view.Menu r1) {
            r0 = this;
            return
    }

    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            return
    }

    public void onResume() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    public void onStart() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onStop() {
            r1 = this;
            r0 = 1
            r1.mCalled = r0
            return
    }

    public void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    public void onViewStateRestored(android.os.Bundle r1) {
            r0 = this;
            r1 = 1
            r0.mCalled = r1
            return
    }

    android.support.v4.app.FragmentManager peekChildFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            return r0
    }

    void performActivityCreated(android.os.Bundle r3) {
            r2 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L7
            r0.noteStateNotSaved()
        L7:
            r0 = 2
            r2.mState = r0
            r0 = 0
            r2.mCalled = r0
            r2.onActivityCreated(r3)
            boolean r3 = r2.mCalled
            if (r3 == 0) goto L1c
            android.support.v4.app.FragmentManagerImpl r3 = r2.mChildFragmentManager
            if (r3 == 0) goto L1b
            r3.dispatchActivityCreated()
        L1b:
            return
        L1c:
            android.support.v4.app.SuperNotCalledException r3 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fragment "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " did not call through to super.onActivityCreated()"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    void performConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            r1.onConfigurationChanged(r2)
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto La
            r0.dispatchConfigurationChanged(r2)
        La:
            return
    }

    boolean performContextItemSelected(android.view.MenuItem r3) {
            r2 = this;
            boolean r0 = r2.mHidden
            if (r0 != 0) goto L17
            boolean r0 = r2.onContextItemSelected(r3)
            r1 = 1
            if (r0 == 0) goto Lc
            return r1
        Lc:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L17
            boolean r3 = r0.dispatchContextItemSelected(r3)
            if (r3 == 0) goto L17
            return r1
        L17:
            r3 = 0
            return r3
    }

    void performCreate(android.os.Bundle r3) {
            r2 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L7
            r0.noteStateNotSaved()
        L7:
            r0 = 1
            r2.mState = r0
            r1 = 0
            r2.mCalled = r1
            r2.onCreate(r3)
            r2.mIsCreated = r0
            boolean r3 = r2.mCalled
            if (r3 == 0) goto L1e
            android.arch.lifecycle.LifecycleRegistry r3 = r2.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
            r3.handleLifecycleEvent(r0)
            return
        L1e:
            android.support.v4.app.SuperNotCalledException r3 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fragment "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " did not call through to super.onCreate()"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    boolean performCreateOptionsMenu(android.view.Menu r3, android.view.MenuInflater r4) {
            r2 = this;
            boolean r0 = r2.mHidden
            r1 = 0
            if (r0 != 0) goto L1b
            boolean r0 = r2.mHasMenu
            if (r0 == 0) goto L12
            boolean r0 = r2.mMenuVisible
            if (r0 == 0) goto L12
            r0 = 1
            r2.onCreateOptionsMenu(r3, r4)
            r1 = r0
        L12:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L1b
            boolean r3 = r0.dispatchCreateOptionsMenu(r3, r4)
            r1 = r1 | r3
        L1b:
            return r1
    }

    void performCreateView(android.view.LayoutInflater r2, android.view.ViewGroup r3, android.os.Bundle r4) {
            r1 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto L7
            r0.noteStateNotSaved()
        L7:
            r0 = 1
            r1.mPerformedCreateView = r0
            android.support.v4.app.Fragment$3 r0 = new android.support.v4.app.Fragment$3
            r0.<init>(r1)
            r1.mViewLifecycleOwner = r0
            r0 = 0
            r1.mViewLifecycleRegistry = r0
            android.view.View r2 = r1.onCreateView(r2, r3, r4)
            r1.mView = r2
            if (r2 == 0) goto L29
            android.arch.lifecycle.LifecycleOwner r2 = r1.mViewLifecycleOwner
            r2.getLifecycle()
            android.arch.lifecycle.MutableLiveData<android.arch.lifecycle.LifecycleOwner> r2 = r1.mViewLifecycleOwnerLiveData
            android.arch.lifecycle.LifecycleOwner r3 = r1.mViewLifecycleOwner
            r2.setValue(r3)
            goto L2f
        L29:
            android.arch.lifecycle.LifecycleRegistry r2 = r1.mViewLifecycleRegistry
            if (r2 != 0) goto L30
            r1.mViewLifecycleOwner = r0
        L2f:
            return
        L30:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Called getViewLifecycleOwner() but onCreateView() returned null"
            r2.<init>(r3)
            throw r2
    }

    void performDestroy() {
            r3 = this;
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
            r0.handleLifecycleEvent(r1)
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto Le
            r0.dispatchDestroy()
        Le:
            r0 = 0
            r3.mState = r0
            r3.mCalled = r0
            r3.mIsCreated = r0
            r3.onDestroy()
            boolean r0 = r3.mCalled
            if (r0 == 0) goto L20
            r0 = 0
            r3.mChildFragmentManager = r0
            return
        L20:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onDestroy()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void performDestroyView() {
            r3 = this;
            android.view.View r0 = r3.mView
            if (r0 == 0) goto Lb
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
            r0.handleLifecycleEvent(r1)
        Lb:
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto L12
            r0.dispatchDestroyView()
        L12:
            r0 = 1
            r3.mState = r0
            r0 = 0
            r3.mCalled = r0
            r3.onDestroyView()
            boolean r1 = r3.mCalled
            if (r1 == 0) goto L29
            android.support.v4.app.LoaderManager r1 = android.support.v4.app.LoaderManager.getInstance(r3)
            r1.markForRedelivery()
            r3.mPerformedCreateView = r0
            return
        L29:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onDestroyView()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void performDetach() {
            r3 = this;
            r0 = 0
            r3.mCalled = r0
            r3.onDetach()
            r0 = 0
            r3.mLayoutInflater = r0
            boolean r1 = r3.mCalled
            if (r1 == 0) goto L3d
            android.support.v4.app.FragmentManagerImpl r1 = r3.mChildFragmentManager
            if (r1 == 0) goto L3c
            boolean r2 = r3.mRetaining
            if (r2 == 0) goto L1b
            r1.dispatchDestroy()
            r3.mChildFragmentManager = r0
            goto L3c
        L1b:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Child FragmentManager of "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " was not "
            r1.append(r2)
            java.lang.String r2 = " destroyed and this fragment is not retaining instance"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L3c:
            return
        L3d:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onDetach()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    android.view.LayoutInflater performGetLayoutInflater(android.os.Bundle r1) {
            r0 = this;
            android.view.LayoutInflater r1 = r0.onGetLayoutInflater(r1)
            r0.mLayoutInflater = r1
            return r1
    }

    void performLowMemory() {
            r1 = this;
            r1.onLowMemory()
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto La
            r0.dispatchLowMemory()
        La:
            return
    }

    void performMultiWindowModeChanged(boolean r2) {
            r1 = this;
            r1.onMultiWindowModeChanged(r2)
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto La
            r0.dispatchMultiWindowModeChanged(r2)
        La:
            return
    }

    boolean performOptionsItemSelected(android.view.MenuItem r3) {
            r2 = this;
            boolean r0 = r2.mHidden
            if (r0 != 0) goto L1f
            boolean r0 = r2.mHasMenu
            r1 = 1
            if (r0 == 0) goto L14
            boolean r0 = r2.mMenuVisible
            if (r0 == 0) goto L14
            boolean r0 = r2.onOptionsItemSelected(r3)
            if (r0 == 0) goto L14
            return r1
        L14:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L1f
            boolean r3 = r0.dispatchOptionsItemSelected(r3)
            if (r3 == 0) goto L1f
            return r1
        L1f:
            r3 = 0
            return r3
    }

    void performOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            boolean r0 = r1.mHidden
            if (r0 != 0) goto L16
            boolean r0 = r1.mHasMenu
            if (r0 == 0) goto Lf
            boolean r0 = r1.mMenuVisible
            if (r0 == 0) goto Lf
            r1.onOptionsMenuClosed(r2)
        Lf:
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto L16
            r0.dispatchOptionsMenuClosed(r2)
        L16:
            return
    }

    void performPause() {
            r3 = this;
            android.view.View r0 = r3.mView
            if (r0 == 0) goto Lb
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
            r0.handleLifecycleEvent(r1)
        Lb:
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
            r0.handleLifecycleEvent(r1)
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto L19
            r0.dispatchPause()
        L19:
            r0 = 3
            r3.mState = r0
            r0 = 0
            r3.mCalled = r0
            r3.onPause()
            boolean r0 = r3.mCalled
            if (r0 == 0) goto L27
            return
        L27:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onPause()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void performPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            r1.onPictureInPictureModeChanged(r2)
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            if (r0 == 0) goto La
            r0.dispatchPictureInPictureModeChanged(r2)
        La:
            return
    }

    boolean performPrepareOptionsMenu(android.view.Menu r3) {
            r2 = this;
            boolean r0 = r2.mHidden
            r1 = 0
            if (r0 != 0) goto L1b
            boolean r0 = r2.mHasMenu
            if (r0 == 0) goto L12
            boolean r0 = r2.mMenuVisible
            if (r0 == 0) goto L12
            r0 = 1
            r2.onPrepareOptionsMenu(r3)
            r1 = r0
        L12:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L1b
            boolean r3 = r0.dispatchPrepareOptionsMenu(r3)
            r1 = r1 | r3
        L1b:
            return r1
    }

    void performResume() {
            r3 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto Lc
            r0.noteStateNotSaved()
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            r0.execPendingActions()
        Lc:
            r0 = 4
            r3.mState = r0
            r0 = 0
            r3.mCalled = r0
            r3.onResume()
            boolean r0 = r3.mCalled
            if (r0 == 0) goto L38
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto L25
            r0.dispatchResume()
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            r0.execPendingActions()
        L25:
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
            r0.handleLifecycleEvent(r1)
            android.view.View r0 = r3.mView
            if (r0 == 0) goto L37
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
            r0.handleLifecycleEvent(r1)
        L37:
            return
        L38:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onResume()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void performSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            r2.onSaveInstanceState(r3)
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 == 0) goto L12
            android.os.Parcelable r0 = r0.saveAllState()
            if (r0 == 0) goto L12
            java.lang.String r1 = "android:support:fragments"
            r3.putParcelable(r1, r0)
        L12:
            return
    }

    void performStart() {
            r3 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto Lc
            r0.noteStateNotSaved()
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            r0.execPendingActions()
        Lc:
            r0 = 3
            r3.mState = r0
            r0 = 0
            r3.mCalled = r0
            r3.onStart()
            boolean r0 = r3.mCalled
            if (r0 == 0) goto L33
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto L20
            r0.dispatchStart()
        L20:
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START
            r0.handleLifecycleEvent(r1)
            android.view.View r0 = r3.mView
            if (r0 == 0) goto L32
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_START
            r0.handleLifecycleEvent(r1)
        L32:
            return
        L33:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onStart()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void performStop() {
            r3 = this;
            android.view.View r0 = r3.mView
            if (r0 == 0) goto Lb
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
            r0.handleLifecycleEvent(r1)
        Lb:
            android.arch.lifecycle.LifecycleRegistry r0 = r3.mLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
            r0.handleLifecycleEvent(r1)
            android.support.v4.app.FragmentManagerImpl r0 = r3.mChildFragmentManager
            if (r0 == 0) goto L19
            r0.dispatchStop()
        L19:
            r0 = 2
            r3.mState = r0
            r0 = 0
            r3.mCalled = r0
            r3.onStop()
            boolean r0 = r3.mCalled
            if (r0 == 0) goto L27
            return
        L27:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " did not call through to super.onStop()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public void postponeEnterTransition() {
            r2 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.ensureAnimationInfo()
            r1 = 1
            r0.mEnterTransitionPostponed = r1
            return
    }

    public void registerForContextMenu(android.view.View r1) {
            r0 = this;
            r1.setOnCreateContextMenuListener(r0)
            return
    }

    public final void requestPermissions(java.lang.String[] r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 == 0) goto L8
            r0.onRequestPermissionsFromFragment(r1, r2, r3)
            return
        L8:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Fragment "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = " not attached to Activity"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public final android.support.v4.app.FragmentActivity requireActivity() {
            r3 = this;
            android.support.v4.app.FragmentActivity r0 = r3.getActivity()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " not attached to an activity."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final android.content.Context requireContext() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " not attached to a context."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final android.support.v4.app.FragmentManager requireFragmentManager() {
            r3 = this;
            android.support.v4.app.FragmentManager r0 = r3.getFragmentManager()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " not associated with a fragment manager."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public final java.lang.Object requireHost() {
            r3 = this;
            java.lang.Object r0 = r3.getHost()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " not attached to a host."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    void restoreChildFragmentState(android.os.Bundle r3) {
            r2 = this;
            if (r3 == 0) goto L20
            java.lang.String r0 = "android:support:fragments"
            android.os.Parcelable r3 = r3.getParcelable(r0)
            if (r3 == 0) goto L20
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            if (r0 != 0) goto L11
            r2.instantiateChildFragmentManager()
        L11:
            android.support.v4.app.FragmentManagerImpl r0 = r2.mChildFragmentManager
            android.support.v4.app.FragmentManagerNonConfig r1 = r2.mChildNonConfig
            r0.restoreAllState(r3, r1)
            r3 = 0
            r2.mChildNonConfig = r3
            android.support.v4.app.FragmentManagerImpl r3 = r2.mChildFragmentManager
            r3.dispatchCreate()
        L20:
            return
    }

    final void restoreViewState(android.os.Bundle r3) {
            r2 = this;
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mSavedViewState
            if (r0 == 0) goto Lc
            android.view.View r1 = r2.mInnerView
            r1.restoreHierarchyState(r0)
            r0 = 0
            r2.mSavedViewState = r0
        Lc:
            r0 = 0
            r2.mCalled = r0
            r2.onViewStateRestored(r3)
            boolean r3 = r2.mCalled
            if (r3 == 0) goto L22
            android.view.View r3 = r2.mView
            if (r3 == 0) goto L21
            android.arch.lifecycle.LifecycleRegistry r3 = r2.mViewLifecycleRegistry
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
            r3.handleLifecycleEvent(r0)
        L21:
            return
        L22:
            android.support.v4.app.SuperNotCalledException r3 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fragment "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " did not call through to super.onViewStateRestored()"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public void setAllowEnterTransitionOverlap(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r0.mAllowEnterTransitionOverlap = r2
            return
    }

    public void setAllowReturnTransitionOverlap(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r0.mAllowReturnTransitionOverlap = r2
            return
    }

    void setAnimatingAway(android.view.View r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mAnimatingAway = r2
            return
    }

    void setAnimator(android.animation.Animator r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mAnimator = r2
            return
    }

    public void setArguments(android.os.Bundle r2) {
            r1 = this;
            int r0 = r1.mIndex
            if (r0 < 0) goto L13
            boolean r0 = r1.isStateSaved()
            if (r0 != 0) goto Lb
            goto L13
        Lb:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Fragment already active and state has been saved"
            r2.<init>(r0)
            throw r2
        L13:
            r1.mArguments = r2
            return
    }

    public void setEnterSharedElementCallback(android.support.v4.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mEnterTransitionCallback = r2
            return
    }

    public void setEnterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mEnterTransition = r2
            return
    }

    public void setExitSharedElementCallback(android.support.v4.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mExitTransitionCallback = r2
            return
    }

    public void setExitTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mExitTransition = r2
            return
    }

    public void setHasOptionsMenu(boolean r2) {
            r1 = this;
            boolean r0 = r1.mHasMenu
            if (r0 == r2) goto L17
            r1.mHasMenu = r2
            boolean r2 = r1.isAdded()
            if (r2 == 0) goto L17
            boolean r2 = r1.isHidden()
            if (r2 != 0) goto L17
            android.support.v4.app.FragmentHostCallback r2 = r1.mHost
            r2.onSupportInvalidateOptionsMenu()
        L17:
            return
    }

    void setHideReplaced(boolean r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mIsHideReplaced = r2
            return
    }

    final void setIndex(int r1, android.support.v4.app.Fragment r2) {
            r0 = this;
            r0.mIndex = r1
            if (r2 == 0) goto L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.mWho
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            int r2 = r0.mIndex
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.mWho = r1
            goto L34
        L1f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "android:fragment:"
            r1.append(r2)
            int r2 = r0.mIndex
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.mWho = r1
        L34:
            return
    }

    public void setInitialSavedState(android.support.v4.app.Fragment.SavedState r2) {
            r1 = this;
            int r0 = r1.mIndex
            if (r0 >= 0) goto L11
            if (r2 == 0) goto Ld
            android.os.Bundle r0 = r2.mState
            if (r0 == 0) goto Ld
            android.os.Bundle r2 = r2.mState
            goto Le
        Ld:
            r2 = 0
        Le:
            r1.mSavedFragmentState = r2
            return
        L11:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Fragment already active"
            r2.<init>(r0)
            throw r2
    }

    public void setMenuVisibility(boolean r2) {
            r1 = this;
            boolean r0 = r1.mMenuVisible
            if (r0 == r2) goto L1b
            r1.mMenuVisible = r2
            boolean r2 = r1.mHasMenu
            if (r2 == 0) goto L1b
            boolean r2 = r1.isAdded()
            if (r2 == 0) goto L1b
            boolean r2 = r1.isHidden()
            if (r2 != 0) goto L1b
            android.support.v4.app.FragmentHostCallback r2 = r1.mHost
            r2.onSupportInvalidateOptionsMenu()
        L1b:
            return
    }

    void setNextAnim(int r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L7
            if (r2 != 0) goto L7
            return
        L7:
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mNextAnim = r2
            return
    }

    void setNextTransition(int r2, int r3) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            if (r0 != 0) goto L9
            if (r2 != 0) goto L9
            if (r3 != 0) goto L9
            return
        L9:
            r1.ensureAnimationInfo()
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.mAnimationInfo
            r0.mNextTransition = r2
            android.support.v4.app.Fragment$AnimationInfo r2 = r1.mAnimationInfo
            r2.mNextTransitionStyle = r3
            return
    }

    void setOnStartEnterTransitionListener(android.support.v4.app.Fragment.OnStartEnterTransitionListener r3) {
            r2 = this;
            r2.ensureAnimationInfo()
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            android.support.v4.app.Fragment$OnStartEnterTransitionListener r0 = r0.mStartEnterTransitionListener
            if (r3 != r0) goto La
            return
        La:
            if (r3 == 0) goto L2a
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            android.support.v4.app.Fragment$OnStartEnterTransitionListener r0 = r0.mStartEnterTransitionListener
            if (r0 != 0) goto L13
            goto L2a
        L13:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Trying to set a replacement startPostponedEnterTransition on "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L2a:
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            boolean r0 = r0.mEnterTransitionPostponed
            if (r0 == 0) goto L34
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.mAnimationInfo
            r0.mStartEnterTransitionListener = r3
        L34:
            if (r3 == 0) goto L39
            r3.startListening()
        L39:
            return
    }

    public void setReenterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mReenterTransition = r2
            return
    }

    public void setRetainInstance(boolean r1) {
            r0 = this;
            r0.mRetainInstance = r1
            return
    }

    public void setReturnTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mReturnTransition = r2
            return
    }

    public void setSharedElementEnterTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mSharedElementEnterTransition = r2
            return
    }

    public void setSharedElementReturnTransition(java.lang.Object r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mSharedElementReturnTransition = r2
            return
    }

    void setStateAfterAnimating(int r2) {
            r1 = this;
            android.support.v4.app.Fragment$AnimationInfo r0 = r1.ensureAnimationInfo()
            r0.mStateAfterAnimating = r2
            return
    }

    public void setTargetFragment(android.support.v4.app.Fragment r3, int r4) {
            r2 = this;
            android.support.v4.app.FragmentManager r0 = r2.getFragmentManager()
            if (r3 == 0) goto Lb
            android.support.v4.app.FragmentManager r1 = r3.getFragmentManager()
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r0 == 0) goto L2f
            if (r1 == 0) goto L2f
            if (r0 != r1) goto L13
            goto L2f
        L13:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fragment "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " must share the same FragmentManager to be set as a target fragment"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L2f:
            r0 = r3
        L30:
            if (r0 == 0) goto L5d
            if (r0 == r2) goto L39
            android.support.v4.app.Fragment r0 = r0.getTargetFragment()
            goto L30
        L39:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Setting "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " as the target of "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r3 = " would create a target cycle"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L5d:
            r2.mTarget = r3
            r2.mTargetRequestCode = r4
            return
    }

    public void setUserVisibleHint(boolean r3) {
            r2 = this;
            boolean r0 = r2.mUserVisibleHint
            r1 = 3
            if (r0 != 0) goto L1e
            if (r3 == 0) goto L1e
            int r0 = r2.mState
            if (r0 >= r1) goto L1e
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            if (r0 == 0) goto L1e
            boolean r0 = r2.isAdded()
            if (r0 == 0) goto L1e
            boolean r0 = r2.mIsCreated
            if (r0 == 0) goto L1e
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            r0.performPendingDeferredStart(r2)
        L1e:
            r2.mUserVisibleHint = r3
            int r0 = r2.mState
            if (r0 >= r1) goto L28
            if (r3 != 0) goto L28
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            r2.mDeferStart = r0
            android.os.Bundle r0 = r2.mSavedFragmentState
            if (r0 == 0) goto L35
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.mSavedUserVisibleHint = r3
        L35:
            return
    }

    public boolean shouldShowRequestPermissionRationale(java.lang.String r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 == 0) goto L9
            boolean r2 = r0.onShouldShowRequestPermissionRationale(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public void startActivity(android.content.Intent r2) {
            r1 = this;
            r0 = 0
            r1.startActivity(r2, r0)
            return
    }

    public void startActivity(android.content.Intent r3, android.os.Bundle r4) {
            r2 = this;
            android.support.v4.app.FragmentHostCallback r0 = r2.mHost
            if (r0 == 0) goto L9
            r1 = -1
            r0.onStartActivityFromFragment(r2, r3, r1, r4)
            return
        L9:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Fragment "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = " not attached to Activity"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            r0 = 0
            r1.startActivityForResult(r2, r3, r0)
            return
    }

    public void startActivityForResult(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 == 0) goto L8
            r0.onStartActivityFromFragment(r1, r2, r3, r4)
            return
        L8:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Fragment "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = " not attached to Activity"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public void startIntentSenderForResult(android.content.IntentSender r11, int r12, android.content.Intent r13, int r14, int r15, int r16, android.os.Bundle r17) throws android.content.IntentSender.SendIntentException {
            r10 = this;
            r9 = r10
            android.support.v4.app.FragmentHostCallback r0 = r9.mHost
            if (r0 == 0) goto L13
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r0.onStartIntentSenderFromFragment(r1, r2, r3, r4, r5, r6, r7, r8)
            return
        L13:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r2 = " not attached to Activity"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public void startPostponedEnterTransition() {
            r2 = this;
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            if (r0 == 0) goto L30
            android.support.v4.app.FragmentHostCallback r0 = r0.mHost
            if (r0 != 0) goto L9
            goto L30
        L9:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.support.v4.app.FragmentManagerImpl r1 = r2.mFragmentManager
            android.support.v4.app.FragmentHostCallback r1 = r1.mHost
            android.os.Handler r1 = r1.getHandler()
            android.os.Looper r1 = r1.getLooper()
            if (r0 == r1) goto L2c
            android.support.v4.app.FragmentManagerImpl r0 = r2.mFragmentManager
            android.support.v4.app.FragmentHostCallback r0 = r0.mHost
            android.os.Handler r0 = r0.getHandler()
            android.support.v4.app.Fragment$1 r1 = new android.support.v4.app.Fragment$1
            r1.<init>(r2)
            r0.postAtFrontOfQueue(r1)
            goto L37
        L2c:
            r2.callStartTransitionListener()
            goto L37
        L30:
            android.support.v4.app.Fragment$AnimationInfo r0 = r2.ensureAnimationInfo()
            r1 = 0
            r0.mEnterTransitionPostponed = r1
        L37:
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            android.support.v4.util.DebugUtils.buildShortClassTag(r2, r0)
            int r1 = r2.mIndex
            if (r1 < 0) goto L18
            java.lang.String r1 = " #"
            r0.append(r1)
            int r1 = r2.mIndex
            r0.append(r1)
        L18:
            int r1 = r2.mFragmentId
            if (r1 == 0) goto L2a
            java.lang.String r1 = " id=0x"
            r0.append(r1)
            int r1 = r2.mFragmentId
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
        L2a:
            java.lang.String r1 = r2.mTag
            if (r1 == 0) goto L38
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = r2.mTag
            r0.append(r1)
        L38:
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void unregisterForContextMenu(android.view.View r2) {
            r1 = this;
            r0 = 0
            r2.setOnCreateContextMenuListener(r0)
            return
    }
}
