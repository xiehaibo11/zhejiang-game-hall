package android.support.v4.app;

final class FragmentManagerImpl extends android.support.v4.app.FragmentManager implements android.view.LayoutInflater.Factory2 {
    static final android.view.animation.Interpolator ACCELERATE_CUBIC = null;
    static final android.view.animation.Interpolator ACCELERATE_QUINT = null;
    static final int ANIM_DUR = 220;
    public static final int ANIM_STYLE_CLOSE_ENTER = 3;
    public static final int ANIM_STYLE_CLOSE_EXIT = 4;
    public static final int ANIM_STYLE_FADE_ENTER = 5;
    public static final int ANIM_STYLE_FADE_EXIT = 6;
    public static final int ANIM_STYLE_OPEN_ENTER = 1;
    public static final int ANIM_STYLE_OPEN_EXIT = 2;
    static boolean DEBUG = false;
    static final android.view.animation.Interpolator DECELERATE_CUBIC = null;
    static final android.view.animation.Interpolator DECELERATE_QUINT = null;
    static final java.lang.String TAG = "FragmentManager";
    static final java.lang.String TARGET_REQUEST_CODE_STATE_TAG = "android:target_req_state";
    static final java.lang.String TARGET_STATE_TAG = "android:target_state";
    static final java.lang.String USER_VISIBLE_HINT_TAG = "android:user_visible_hint";
    static final java.lang.String VIEW_STATE_TAG = "android:view_state";
    static java.lang.reflect.Field sAnimationListenerField;
    android.util.SparseArray<android.support.v4.app.Fragment> mActive;
    final java.util.ArrayList<android.support.v4.app.Fragment> mAdded;
    java.util.ArrayList<java.lang.Integer> mAvailBackStackIndices;
    java.util.ArrayList<android.support.v4.app.BackStackRecord> mBackStack;
    java.util.ArrayList<android.support.v4.app.FragmentManager.OnBackStackChangedListener> mBackStackChangeListeners;
    java.util.ArrayList<android.support.v4.app.BackStackRecord> mBackStackIndices;
    android.support.v4.app.FragmentContainer mContainer;
    java.util.ArrayList<android.support.v4.app.Fragment> mCreatedMenus;
    int mCurState;
    boolean mDestroyed;
    java.lang.Runnable mExecCommit;
    boolean mExecutingActions;
    boolean mHavePendingDeferredStart;
    android.support.v4.app.FragmentHostCallback mHost;
    private final java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder> mLifecycleCallbacks;
    boolean mNeedMenuInvalidate;
    int mNextFragmentIndex;
    java.lang.String mNoTransactionsBecause;
    android.support.v4.app.Fragment mParent;
    java.util.ArrayList<android.support.v4.app.FragmentManagerImpl.OpGenerator> mPendingActions;
    java.util.ArrayList<android.support.v4.app.FragmentManagerImpl.StartEnterTransitionListener> mPostponedTransactions;

    @android.support.annotation.Nullable
    android.support.v4.app.Fragment mPrimaryNav;
    android.support.v4.app.FragmentManagerNonConfig mSavedNonConfig;
    android.util.SparseArray<android.os.Parcelable> mStateArray;
    android.os.Bundle mStateBundle;
    boolean mStateSaved;
    boolean mStopped;
    java.util.ArrayList<android.support.v4.app.Fragment> mTmpAddedFragments;
    java.util.ArrayList<java.lang.Boolean> mTmpIsPop;
    java.util.ArrayList<android.support.v4.app.BackStackRecord> mTmpRecords;





    private static class AnimateOnHWLayerIfNeededListener extends android.support.v4.app.FragmentManagerImpl.AnimationListenerWrapper {
        android.view.View mView;


        AnimateOnHWLayerIfNeededListener(android.view.View r1, android.view.animation.Animation.AnimationListener r2) {
                r0 = this;
                r0.<init>(r2)
                r0.mView = r1
                return
        }

        @Override
        @android.support.annotation.CallSuper
        public void onAnimationEnd(android.view.animation.Animation r4) {
                r3 = this;
                android.view.View r0 = r3.mView
                boolean r0 = android.support.v4.view.ViewCompat.isAttachedToWindow(r0)
                if (r0 != 0) goto L17
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 24
                if (r0 < r1) goto Lf
                goto L17
            Lf:
                android.view.View r0 = r3.mView
                r1 = 0
                r2 = 0
                r0.setLayerType(r1, r2)
                goto L21
            L17:
                android.view.View r0 = r3.mView
                android.support.v4.app.FragmentManagerImpl$AnimateOnHWLayerIfNeededListener$1 r1 = new android.support.v4.app.FragmentManagerImpl$AnimateOnHWLayerIfNeededListener$1
                r1.<init>(r3)
                r0.post(r1)
            L21:
                super.onAnimationEnd(r4)
                return
        }
    }

    private static class AnimationListenerWrapper implements android.view.animation.Animation.AnimationListener {
        private final android.view.animation.Animation.AnimationListener mWrapped;

        AnimationListenerWrapper(android.view.animation.Animation.AnimationListener r1) {
                r0 = this;
                r0.<init>()
                r0.mWrapped = r1
                return
        }

        @Override
        @android.support.annotation.CallSuper
        public void onAnimationEnd(android.view.animation.Animation r2) {
                r1 = this;
                android.view.animation.Animation$AnimationListener r0 = r1.mWrapped
                if (r0 == 0) goto L7
                r0.onAnimationEnd(r2)
            L7:
                return
        }

        @Override
        @android.support.annotation.CallSuper
        public void onAnimationRepeat(android.view.animation.Animation r2) {
                r1 = this;
                android.view.animation.Animation$AnimationListener r0 = r1.mWrapped
                if (r0 == 0) goto L7
                r0.onAnimationRepeat(r2)
            L7:
                return
        }

        @Override
        @android.support.annotation.CallSuper
        public void onAnimationStart(android.view.animation.Animation r2) {
                r1 = this;
                android.view.animation.Animation$AnimationListener r0 = r1.mWrapped
                if (r0 == 0) goto L7
                r0.onAnimationStart(r2)
            L7:
                return
        }
    }

    private static class AnimationOrAnimator {
        public final android.view.animation.Animation animation;
        public final android.animation.Animator animator;

        AnimationOrAnimator(android.animation.Animator r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.animation = r0
                r1.animator = r2
                if (r2 == 0) goto Lb
                return
            Lb:
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
                java.lang.String r0 = "Animator cannot be null"
                r2.<init>(r0)
                throw r2
        }

        AnimationOrAnimator(android.view.animation.Animation r2) {
                r1 = this;
                r1.<init>()
                r1.animation = r2
                r0 = 0
                r1.animator = r0
                if (r2 == 0) goto Lb
                return
            Lb:
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
                java.lang.String r0 = "Animation cannot be null"
                r2.<init>(r0)
                throw r2
        }
    }

    private static class AnimatorOnHWLayerIfNeededListener extends android.animation.AnimatorListenerAdapter {
        android.view.View mView;

        AnimatorOnHWLayerIfNeededListener(android.view.View r1) {
                r0 = this;
                r0.<init>()
                r0.mView = r1
                return
        }

        @Override
        public void onAnimationEnd(android.animation.Animator r4) {
                r3 = this;
                android.view.View r0 = r3.mView
                r1 = 0
                r2 = 0
                r0.setLayerType(r1, r2)
                r4.removeListener(r3)
                return
        }

        @Override
        public void onAnimationStart(android.animation.Animator r3) {
                r2 = this;
                android.view.View r3 = r2.mView
                r0 = 2
                r1 = 0
                r3.setLayerType(r0, r1)
                return
        }
    }

    private static class EndViewTransitionAnimator extends android.view.animation.AnimationSet implements java.lang.Runnable {
        private boolean mAnimating;
        private final android.view.View mChild;
        private boolean mEnded;
        private final android.view.ViewGroup mParent;
        private boolean mTransitionEnded;

        EndViewTransitionAnimator(@android.support.annotation.NonNull android.view.animation.Animation r2, @android.support.annotation.NonNull android.view.ViewGroup r3, @android.support.annotation.NonNull android.view.View r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                r0 = 1
                r1.mAnimating = r0
                r1.mParent = r3
                r1.mChild = r4
                r1.addAnimation(r2)
                android.view.ViewGroup r2 = r1.mParent
                r2.post(r1)
                return
        }

        @Override
        public boolean getTransformation(long r3, android.view.animation.Transformation r5) {
                r2 = this;
                r0 = 1
                r2.mAnimating = r0
                boolean r1 = r2.mEnded
                if (r1 == 0) goto Lb
                boolean r3 = r2.mTransitionEnded
                r3 = r3 ^ r0
                return r3
            Lb:
                boolean r3 = super.getTransformation(r3, r5)
                if (r3 != 0) goto L18
                r2.mEnded = r0
                android.view.ViewGroup r3 = r2.mParent
                android.support.v4.app.OneShotPreDrawListener.add(r3, r2)
            L18:
                return r0
        }

        @Override
        public boolean getTransformation(long r3, android.view.animation.Transformation r5, float r6) {
                r2 = this;
                r0 = 1
                r2.mAnimating = r0
                boolean r1 = r2.mEnded
                if (r1 == 0) goto Lb
                boolean r3 = r2.mTransitionEnded
                r3 = r3 ^ r0
                return r3
            Lb:
                boolean r3 = super.getTransformation(r3, r5, r6)
                if (r3 != 0) goto L18
                r2.mEnded = r0
                android.view.ViewGroup r3 = r2.mParent
                android.support.v4.app.OneShotPreDrawListener.add(r3, r2)
            L18:
                return r0
        }

        @Override
        public void run() {
                r2 = this;
                boolean r0 = r2.mEnded
                if (r0 != 0) goto L11
                boolean r0 = r2.mAnimating
                if (r0 == 0) goto L11
                r0 = 0
                r2.mAnimating = r0
                android.view.ViewGroup r0 = r2.mParent
                r0.post(r2)
                goto L1b
            L11:
                android.view.ViewGroup r0 = r2.mParent
                android.view.View r1 = r2.mChild
                r0.endViewTransition(r1)
                r0 = 1
                r2.mTransitionEnded = r0
            L1b:
                return
        }
    }

    private static final class FragmentLifecycleCallbacksHolder {
        final android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks mCallback;
        final boolean mRecursive;

        FragmentLifecycleCallbacksHolder(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.mCallback = r1
                r0.mRecursive = r2
                return
        }
    }

    static class FragmentTag {
        public static final int[] Fragment = null;
        public static final int Fragment_id = 1;
        public static final int Fragment_name = 0;
        public static final int Fragment_tag = 2;

        static {
                r0 = 3
                int[] r0 = new int[r0]
                r0 = {x000a: FILL_ARRAY_DATA , data: [16842755, 16842960, 16842961} // fill-array
                android.support.v4.app.FragmentManagerImpl.FragmentTag.Fragment = r0
                return
        }

        private FragmentTag() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    interface OpGenerator {
        boolean generateOps(java.util.ArrayList<android.support.v4.app.BackStackRecord> r1, java.util.ArrayList<java.lang.Boolean> r2);
    }

    private class PopBackStackState implements android.support.v4.app.FragmentManagerImpl.OpGenerator {
        final int mFlags;
        final int mId;
        final java.lang.String mName;
        final android.support.v4.app.FragmentManagerImpl this$0;

        PopBackStackState(android.support.v4.app.FragmentManagerImpl r1, java.lang.String r2, int r3, int r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mName = r2
                r0.mId = r3
                r0.mFlags = r4
                return
        }

        @Override
        public boolean generateOps(java.util.ArrayList<android.support.v4.app.BackStackRecord> r7, java.util.ArrayList<java.lang.Boolean> r8) {
                r6 = this;
                android.support.v4.app.FragmentManagerImpl r0 = r6.this$0
                android.support.v4.app.Fragment r0 = r0.mPrimaryNav
                if (r0 == 0) goto L20
                int r0 = r6.mId
                if (r0 >= 0) goto L20
                java.lang.String r0 = r6.mName
                if (r0 != 0) goto L20
                android.support.v4.app.FragmentManagerImpl r0 = r6.this$0
                android.support.v4.app.Fragment r0 = r0.mPrimaryNav
                android.support.v4.app.FragmentManager r0 = r0.peekChildFragmentManager()
                if (r0 == 0) goto L20
                boolean r0 = r0.popBackStackImmediate()
                if (r0 == 0) goto L20
                r7 = 0
                return r7
            L20:
                android.support.v4.app.FragmentManagerImpl r0 = r6.this$0
                java.lang.String r3 = r6.mName
                int r4 = r6.mId
                int r5 = r6.mFlags
                r1 = r7
                r2 = r8
                boolean r7 = r0.popBackStackState(r1, r2, r3, r4, r5)
                return r7
        }
    }

    static class StartEnterTransitionListener implements android.support.v4.app.Fragment.OnStartEnterTransitionListener {
        final boolean mIsBack;
        private int mNumPostponed;
        final android.support.v4.app.BackStackRecord mRecord;

        StartEnterTransitionListener(android.support.v4.app.BackStackRecord r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.mIsBack = r2
                r0.mRecord = r1
                return
        }

        public void cancelTransaction() {
                r4 = this;
                android.support.v4.app.BackStackRecord r0 = r4.mRecord
                android.support.v4.app.FragmentManagerImpl r0 = r0.mManager
                android.support.v4.app.BackStackRecord r1 = r4.mRecord
                boolean r2 = r4.mIsBack
                r3 = 0
                r0.completeExecute(r1, r2, r3, r3)
                return
        }

        public void completeTransaction() {
                r7 = this;
                int r0 = r7.mNumPostponed
                r1 = 0
                r2 = 1
                if (r0 <= 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                android.support.v4.app.BackStackRecord r3 = r7.mRecord
                android.support.v4.app.FragmentManagerImpl r3 = r3.mManager
                java.util.ArrayList<android.support.v4.app.Fragment> r4 = r3.mAdded
                int r4 = r4.size()
            L13:
                if (r1 >= r4) goto L2f
                java.util.ArrayList<android.support.v4.app.Fragment> r5 = r3.mAdded
                java.lang.Object r5 = r5.get(r1)
                android.support.v4.app.Fragment r5 = (android.support.v4.app.Fragment) r5
                r6 = 0
                r5.setOnStartEnterTransitionListener(r6)
                if (r0 == 0) goto L2c
                boolean r6 = r5.isPostponed()
                if (r6 == 0) goto L2c
                r5.startPostponedEnterTransition()
            L2c:
                int r1 = r1 + 1
                goto L13
            L2f:
                android.support.v4.app.BackStackRecord r1 = r7.mRecord
                android.support.v4.app.FragmentManagerImpl r1 = r1.mManager
                android.support.v4.app.BackStackRecord r3 = r7.mRecord
                boolean r4 = r7.mIsBack
                r0 = r0 ^ r2
                r1.completeExecute(r3, r4, r0, r2)
                return
        }

        public boolean isReady() {
                r1 = this;
                int r0 = r1.mNumPostponed
                if (r0 != 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        @Override
        public void onStartEnterTransition() {
                r1 = this;
                int r0 = r1.mNumPostponed
                int r0 = r0 + (-1)
                r1.mNumPostponed = r0
                int r0 = r1.mNumPostponed
                if (r0 == 0) goto Lb
                return
            Lb:
                android.support.v4.app.BackStackRecord r0 = r1.mRecord
                android.support.v4.app.FragmentManagerImpl r0 = r0.mManager
                r0.scheduleCommit()
                return
        }

        @Override
        public void startListening() {
                r1 = this;
                int r0 = r1.mNumPostponed
                int r0 = r0 + 1
                r1.mNumPostponed = r0
                return
        }
    }

    static {
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r1 = 1075838976(0x40200000, float:2.5)
            r0.<init>(r1)
            android.support.v4.app.FragmentManagerImpl.DECELERATE_QUINT = r0
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r2 = 1069547520(0x3fc00000, float:1.5)
            r0.<init>(r2)
            android.support.v4.app.FragmentManagerImpl.DECELERATE_CUBIC = r0
            android.view.animation.AccelerateInterpolator r0 = new android.view.animation.AccelerateInterpolator
            r0.<init>(r1)
            android.support.v4.app.FragmentManagerImpl.ACCELERATE_QUINT = r0
            android.view.animation.AccelerateInterpolator r0 = new android.view.animation.AccelerateInterpolator
            r0.<init>(r2)
            android.support.v4.app.FragmentManagerImpl.ACCELERATE_CUBIC = r0
            return
    }

    FragmentManagerImpl() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mNextFragmentIndex = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.mAdded = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r2.mLifecycleCallbacks = r1
            r2.mCurState = r0
            r0 = 0
            r2.mStateBundle = r0
            r2.mStateArray = r0
            android.support.v4.app.FragmentManagerImpl$1 r0 = new android.support.v4.app.FragmentManagerImpl$1
            r0.<init>(r2)
            r2.mExecCommit = r0
            return
    }

    private void addAddedFragments(android.support.v4.util.ArraySet<android.support.v4.app.Fragment> r11) {
            r10 = this;
            int r0 = r10.mCurState
            r1 = 1
            if (r0 >= r1) goto L6
            return
        L6:
            r1 = 3
            int r0 = java.lang.Math.min(r0, r1)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r10.mAdded
            int r1 = r1.size()
            r2 = 0
            r8 = 0
        L13:
            if (r8 >= r1) goto L43
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r10.mAdded
            java.lang.Object r2 = r2.get(r8)
            r9 = r2
            android.support.v4.app.Fragment r9 = (android.support.v4.app.Fragment) r9
            int r2 = r9.mState
            if (r2 >= r0) goto L40
            int r5 = r9.getNextAnim()
            int r6 = r9.getNextTransition()
            r7 = 0
            r2 = r10
            r3 = r9
            r4 = r0
            r2.moveToState(r3, r4, r5, r6, r7)
            android.view.View r2 = r9.mView
            if (r2 == 0) goto L40
            boolean r2 = r9.mHidden
            if (r2 != 0) goto L40
            boolean r2 = r9.mIsNewlyAdded
            if (r2 == 0) goto L40
            r11.add(r9)
        L40:
            int r8 = r8 + 1
            goto L13
        L43:
            return
    }

    private void animateRemoveFragment(@android.support.annotation.NonNull android.support.v4.app.Fragment r5, @android.support.annotation.NonNull android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator r6, int r7) {
            r4 = this;
            android.view.View r0 = r5.mView
            android.view.ViewGroup r1 = r5.mContainer
            r1.startViewTransition(r0)
            r5.setStateAfterAnimating(r7)
            android.view.animation.Animation r7 = r6.animation
            if (r7 == 0) goto L2f
            android.support.v4.app.FragmentManagerImpl$EndViewTransitionAnimator r7 = new android.support.v4.app.FragmentManagerImpl$EndViewTransitionAnimator
            android.view.animation.Animation r2 = r6.animation
            r7.<init>(r2, r1, r0)
            android.view.View r2 = r5.mView
            r5.setAnimatingAway(r2)
            android.view.animation.Animation$AnimationListener r2 = getAnimationListener(r7)
            android.support.v4.app.FragmentManagerImpl$2 r3 = new android.support.v4.app.FragmentManagerImpl$2
            r3.<init>(r4, r2, r1, r5)
            r7.setAnimationListener(r3)
            setHWLayerAnimListenerIfAlpha(r0, r6)
            android.view.View r5 = r5.mView
            r5.startAnimation(r7)
            goto L4b
        L2f:
            android.animation.Animator r7 = r6.animator
            android.animation.Animator r2 = r6.animator
            r5.setAnimator(r2)
            android.support.v4.app.FragmentManagerImpl$3 r2 = new android.support.v4.app.FragmentManagerImpl$3
            r2.<init>(r4, r1, r0, r5)
            r7.addListener(r2)
            android.view.View r0 = r5.mView
            r7.setTarget(r0)
            android.view.View r5 = r5.mView
            setHWLayerAnimListenerIfAlpha(r5, r6)
            r7.start()
        L4b:
            return
    }

    private void burpActive() {
            r3 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r3.mActive
            if (r0 == 0) goto L20
            int r0 = r0.size()
            int r0 = r0 + (-1)
        La:
            if (r0 < 0) goto L20
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r3.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            if (r1 != 0) goto L1d
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r3.mActive
            int r2 = r1.keyAt(r0)
            r1.delete(r2)
        L1d:
            int r0 = r0 + (-1)
            goto La
        L20:
            return
    }

    private void checkStateLoss() {
            r3 = this;
            boolean r0 = r3.isStateSaved()
            if (r0 != 0) goto L24
            java.lang.String r0 = r3.mNoTransactionsBecause
            if (r0 != 0) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can not perform this action inside of "
            r1.append(r2)
            java.lang.String r2 = r3.mNoTransactionsBecause
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L24:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Can not perform this action after onSaveInstanceState"
            r0.<init>(r1)
            throw r0
    }

    private void cleanupExec() {
            r1 = this;
            r0 = 0
            r1.mExecutingActions = r0
            java.util.ArrayList<java.lang.Boolean> r0 = r1.mTmpIsPop
            r0.clear()
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r1.mTmpRecords
            r0.clear()
            return
    }

    private void dispatchStateChange(int r3) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.mExecutingActions = r0     // Catch: java.lang.Throwable -> Ld
            r2.moveToState(r3, r1)     // Catch: java.lang.Throwable -> Ld
            r2.mExecutingActions = r1
            r2.execPendingActions()
            return
        Ld:
            r3 = move-exception
            r2.mExecutingActions = r1
            throw r3
    }

    private void endAnimatingAwayFragments() {
            r9 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r9.mActive
            r1 = 0
            if (r0 != 0) goto L7
            r0 = 0
            goto Lb
        L7:
            int r0 = r0.size()
        Lb:
            if (r1 >= r0) goto L4e
            android.util.SparseArray<android.support.v4.app.Fragment> r2 = r9.mActive
            java.lang.Object r2 = r2.valueAt(r1)
            r4 = r2
            android.support.v4.app.Fragment r4 = (android.support.v4.app.Fragment) r4
            if (r4 == 0) goto L4b
            android.view.View r2 = r4.getAnimatingAway()
            if (r2 == 0) goto L3e
            int r5 = r4.getStateAfterAnimating()
            android.view.View r2 = r4.getAnimatingAway()
            android.view.animation.Animation r3 = r2.getAnimation()
            if (r3 == 0) goto L32
            r3.cancel()
            r2.clearAnimation()
        L32:
            r2 = 0
            r4.setAnimatingAway(r2)
            r6 = 0
            r7 = 0
            r8 = 0
            r3 = r9
            r3.moveToState(r4, r5, r6, r7, r8)
            goto L4b
        L3e:
            android.animation.Animator r2 = r4.getAnimator()
            if (r2 == 0) goto L4b
            android.animation.Animator r2 = r4.getAnimator()
            r2.end()
        L4b:
            int r1 = r1 + 1
            goto Lb
        L4e:
            return
    }

    private void ensureExecReady(boolean r3) {
            r2 = this;
            boolean r0 = r2.mExecutingActions
            if (r0 != 0) goto L4e
            android.support.v4.app.FragmentHostCallback r0 = r2.mHost
            if (r0 == 0) goto L46
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.support.v4.app.FragmentHostCallback r1 = r2.mHost
            android.os.Handler r1 = r1.getHandler()
            android.os.Looper r1 = r1.getLooper()
            if (r0 != r1) goto L3e
            if (r3 != 0) goto L1d
            r2.checkStateLoss()
        L1d:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r3 = r2.mTmpRecords
            if (r3 != 0) goto L2f
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.mTmpRecords = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.mTmpIsPop = r3
        L2f:
            r3 = 1
            r2.mExecutingActions = r3
            r3 = 0
            r0 = 0
            r2.executePostponedTransaction(r0, r0)     // Catch: java.lang.Throwable -> L3a
            r2.mExecutingActions = r3
            return
        L3a:
            r0 = move-exception
            r2.mExecutingActions = r3
            throw r0
        L3e:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "Must be called from main thread of fragment host"
            r3.<init>(r0)
            throw r3
        L46:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "Fragment host has been destroyed"
            r3.<init>(r0)
            throw r3
        L4e:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "FragmentManager is already executing transactions"
            r3.<init>(r0)
            throw r3
    }

    private static void executeOps(java.util.ArrayList<android.support.v4.app.BackStackRecord> r3, java.util.ArrayList<java.lang.Boolean> r4, int r5, int r6) {
        L0:
            if (r5 >= r6) goto L2c
            java.lang.Object r0 = r3.get(r5)
            android.support.v4.app.BackStackRecord r0 = (android.support.v4.app.BackStackRecord) r0
            java.lang.Object r1 = r4.get(r5)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            r2 = 1
            if (r1 == 0) goto L23
            r1 = -1
            r0.bumpBackStackNesting(r1)
            int r1 = r6 + (-1)
            if (r5 != r1) goto L1e
            goto L1f
        L1e:
            r2 = 0
        L1f:
            r0.executePopOps(r2)
            goto L29
        L23:
            r0.bumpBackStackNesting(r2)
            r0.executeOps()
        L29:
            int r5 = r5 + 1
            goto L0
        L2c:
            return
    }

    private void executeOpsTogether(java.util.ArrayList<android.support.v4.app.BackStackRecord> r16, java.util.ArrayList<java.lang.Boolean> r17, int r18, int r19) {
            r15 = this;
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r10 = r19
            java.lang.Object r0 = r7.get(r9)
            android.support.v4.app.BackStackRecord r0 = (android.support.v4.app.BackStackRecord) r0
            boolean r11 = r0.mReorderingAllowed
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r6.mTmpAddedFragments
            if (r0 != 0) goto L1d
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.mTmpAddedFragments = r0
            goto L20
        L1d:
            r0.clear()
        L20:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r6.mTmpAddedFragments
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r6.mAdded
            r0.addAll(r1)
            android.support.v4.app.Fragment r0 = r15.getPrimaryNavigationFragment()
            r1 = 0
            r2 = r0
            r0 = r9
            r12 = 0
        L2f:
            r13 = 1
            if (r0 >= r10) goto L5e
            java.lang.Object r3 = r7.get(r0)
            android.support.v4.app.BackStackRecord r3 = (android.support.v4.app.BackStackRecord) r3
            java.lang.Object r4 = r8.get(r0)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            if (r4 != 0) goto L4b
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r6.mTmpAddedFragments
            android.support.v4.app.Fragment r2 = r3.expandOps(r4, r2)
            goto L51
        L4b:
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r6.mTmpAddedFragments
            android.support.v4.app.Fragment r2 = r3.trackAddedFragmentsInPop(r4, r2)
        L51:
            if (r12 != 0) goto L5a
            boolean r3 = r3.mAddToBackStack
            if (r3 == 0) goto L58
            goto L5a
        L58:
            r12 = 0
            goto L5b
        L5a:
            r12 = 1
        L5b:
            int r0 = r0 + 1
            goto L2f
        L5e:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r6.mTmpAddedFragments
            r0.clear()
            if (r11 != 0) goto L72
            r5 = 0
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            android.support.v4.app.FragmentTransition.startTransitions(r0, r1, r2, r3, r4, r5)
        L72:
            executeOps(r16, r17, r18, r19)
            if (r11 == 0) goto L92
            android.support.v4.util.ArraySet r14 = new android.support.v4.util.ArraySet
            r14.<init>()
            r15.addAddedFragments(r14)
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r14
            int r0 = r0.postponePostponableTransactions(r1, r2, r3, r4, r5)
            r15.makeRemovedFragmentsInvisible(r14)
            r4 = r0
            goto L93
        L92:
            r4 = r10
        L93:
            if (r4 == r9) goto La7
            if (r11 == 0) goto La7
            r5 = 1
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            android.support.v4.app.FragmentTransition.startTransitions(r0, r1, r2, r3, r4, r5)
            int r0 = r6.mCurState
            r15.moveToState(r0, r13)
        La7:
            if (r9 >= r10) goto Lcd
            java.lang.Object r0 = r7.get(r9)
            android.support.v4.app.BackStackRecord r0 = (android.support.v4.app.BackStackRecord) r0
            java.lang.Object r1 = r8.get(r9)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto Lc7
            int r1 = r0.mIndex
            if (r1 < 0) goto Lc7
            int r1 = r0.mIndex
            r15.freeBackStackIndex(r1)
            r1 = -1
            r0.mIndex = r1
        Lc7:
            r0.runOnCommitRunnables()
            int r9 = r9 + 1
            goto La7
        Lcd:
            if (r12 == 0) goto Ld2
            r15.reportBackStackChanged()
        Ld2:
            return
    }

    private void executePostponedTransaction(java.util.ArrayList<android.support.v4.app.BackStackRecord> r8, java.util.ArrayList<java.lang.Boolean> r9) {
            r7 = this;
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r7.mPostponedTransactions
            r1 = 0
            if (r0 != 0) goto L7
            r0 = 0
            goto Lb
        L7:
            int r0 = r0.size()
        Lb:
            r2 = r0
            r0 = 0
        Ld:
            if (r0 >= r2) goto L77
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r3 = r7.mPostponedTransactions
            java.lang.Object r3 = r3.get(r0)
            android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener r3 = (android.support.v4.app.FragmentManagerImpl.StartEnterTransitionListener) r3
            r4 = -1
            if (r8 == 0) goto L36
            boolean r5 = r3.mIsBack
            if (r5 != 0) goto L36
            android.support.v4.app.BackStackRecord r5 = r3.mRecord
            int r5 = r8.indexOf(r5)
            if (r5 == r4) goto L36
            java.lang.Object r5 = r9.get(r5)
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            if (r5 == 0) goto L36
            r3.cancelTransaction()
            goto L74
        L36:
            boolean r5 = r3.isReady()
            if (r5 != 0) goto L4a
            if (r8 == 0) goto L74
            android.support.v4.app.BackStackRecord r5 = r3.mRecord
            int r6 = r8.size()
            boolean r5 = r5.interactsWith(r8, r1, r6)
            if (r5 == 0) goto L74
        L4a:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r5 = r7.mPostponedTransactions
            r5.remove(r0)
            int r0 = r0 + (-1)
            int r2 = r2 + (-1)
            if (r8 == 0) goto L71
            boolean r5 = r3.mIsBack
            if (r5 != 0) goto L71
            android.support.v4.app.BackStackRecord r5 = r3.mRecord
            int r5 = r8.indexOf(r5)
            if (r5 == r4) goto L71
            java.lang.Object r4 = r9.get(r5)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L71
            r3.cancelTransaction()
            goto L74
        L71:
            r3.completeTransaction()
        L74:
            int r0 = r0 + 1
            goto Ld
        L77:
            return
    }

    private android.support.v4.app.Fragment findFragmentUnder(android.support.v4.app.Fragment r5) {
            r4 = this;
            android.view.ViewGroup r0 = r5.mContainer
            android.view.View r1 = r5.mView
            r2 = 0
            if (r0 == 0) goto L28
            if (r1 != 0) goto La
            goto L28
        La:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r4.mAdded
            int r5 = r1.indexOf(r5)
            int r5 = r5 + (-1)
        L12:
            if (r5 < 0) goto L28
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r4.mAdded
            java.lang.Object r1 = r1.get(r5)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            android.view.ViewGroup r3 = r1.mContainer
            if (r3 != r0) goto L25
            android.view.View r3 = r1.mView
            if (r3 == 0) goto L25
            return r1
        L25:
            int r5 = r5 + (-1)
            goto L12
        L28:
            return r2
    }

    private void forcePostponedTransactions() {
            r2 = this;
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r2.mPostponedTransactions
            if (r0 == 0) goto L19
        L4:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r2.mPostponedTransactions
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L19
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r2.mPostponedTransactions
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)
            android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener r0 = (android.support.v4.app.FragmentManagerImpl.StartEnterTransitionListener) r0
            r0.completeTransaction()
            goto L4
        L19:
            return
    }

    private boolean generateOpsForPendingActions(java.util.ArrayList<android.support.v4.app.BackStackRecord> r5, java.util.ArrayList<java.lang.Boolean> r6) {
            r4 = this;
            monitor-enter(r4)
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r0 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3c
            r1 = 0
            if (r0 == 0) goto L3a
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r0 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto Lf
            goto L3a
        Lf:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r0 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3c
            r2 = 0
        L16:
            if (r1 >= r0) goto L28
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r3 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L3c
            android.support.v4.app.FragmentManagerImpl$OpGenerator r3 = (android.support.v4.app.FragmentManagerImpl.OpGenerator) r3     // Catch: java.lang.Throwable -> L3c
            boolean r3 = r3.generateOps(r5, r6)     // Catch: java.lang.Throwable -> L3c
            r2 = r2 | r3
            int r1 = r1 + 1
            goto L16
        L28:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r5 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3c
            r5.clear()     // Catch: java.lang.Throwable -> L3c
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost     // Catch: java.lang.Throwable -> L3c
            android.os.Handler r5 = r5.getHandler()     // Catch: java.lang.Throwable -> L3c
            java.lang.Runnable r6 = r4.mExecCommit     // Catch: java.lang.Throwable -> L3c
            r5.removeCallbacks(r6)     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3c
            return r2
        L3a:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3c
            return r1
        L3c:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3c
            throw r5
    }

    private static android.view.animation.Animation.AnimationListener getAnimationListener(android.view.animation.Animation r3) {
            java.lang.String r0 = "FragmentManager"
            java.lang.reflect.Field r1 = android.support.v4.app.FragmentManagerImpl.sAnimationListenerField     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            if (r1 != 0) goto L16
            java.lang.Class<android.view.animation.Animation> r1 = android.view.animation.Animation.class
            java.lang.String r2 = "mListener"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            android.support.v4.app.FragmentManagerImpl.sAnimationListenerField = r1     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            java.lang.reflect.Field r1 = android.support.v4.app.FragmentManagerImpl.sAnimationListenerField     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
        L16:
            java.lang.reflect.Field r1 = android.support.v4.app.FragmentManagerImpl.sAnimationListenerField     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            android.view.animation.Animation$AnimationListener r3 = (android.view.animation.Animation.AnimationListener) r3     // Catch: java.lang.IllegalAccessException -> L1f java.lang.NoSuchFieldException -> L26
            goto L2d
        L1f:
            r3 = move-exception
            java.lang.String r1 = "Cannot access Animation's mListener field"
            android.util.Log.e(r0, r1, r3)
            goto L2c
        L26:
            r3 = move-exception
            java.lang.String r1 = "No field with the name mListener is found in Animation class"
            android.util.Log.e(r0, r1, r3)
        L2c:
            r3 = 0
        L2d:
            return r3
    }

    static android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator makeFadeAnimation(android.content.Context r0, float r1, float r2) {
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r0.<init>(r1, r2)
            android.view.animation.Interpolator r1 = android.support.v4.app.FragmentManagerImpl.DECELERATE_CUBIC
            r0.setInterpolator(r1)
            r1 = 220(0xdc, double:1.087E-321)
            r0.setDuration(r1)
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r1 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator
            r1.<init>(r0)
            return r1
    }

    static android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator makeOpenCloseAnimation(android.content.Context r10, float r11, float r12, float r13, float r14) {
            android.view.animation.AnimationSet r10 = new android.view.animation.AnimationSet
            r0 = 0
            r10.<init>(r0)
            android.view.animation.ScaleAnimation r0 = new android.view.animation.ScaleAnimation
            r6 = 1
            r7 = 1056964608(0x3f000000, float:0.5)
            r8 = 1
            r9 = 1056964608(0x3f000000, float:0.5)
            r1 = r0
            r2 = r11
            r3 = r12
            r4 = r11
            r5 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            android.view.animation.Interpolator r11 = android.support.v4.app.FragmentManagerImpl.DECELERATE_QUINT
            r0.setInterpolator(r11)
            r11 = 220(0xdc, double:1.087E-321)
            r0.setDuration(r11)
            r10.addAnimation(r0)
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r0.<init>(r13, r14)
            android.view.animation.Interpolator r13 = android.support.v4.app.FragmentManagerImpl.DECELERATE_CUBIC
            r0.setInterpolator(r13)
            r0.setDuration(r11)
            r10.addAnimation(r0)
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r11 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator
            r11.<init>(r10)
            return r11
    }

    private void makeRemovedFragmentsInvisible(android.support.v4.util.ArraySet<android.support.v4.app.Fragment> r6) {
            r5 = this;
            int r0 = r6.size()
            r1 = 0
        L5:
            if (r1 >= r0) goto L22
            java.lang.Object r2 = r6.valueAt(r1)
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            boolean r3 = r2.mAdded
            if (r3 != 0) goto L1f
            android.view.View r3 = r2.getView()
            float r4 = r3.getAlpha()
            r2.mPostponedAlpha = r4
            r2 = 0
            r3.setAlpha(r2)
        L1f:
            int r1 = r1 + 1
            goto L5
        L22:
            return
    }

    static boolean modifiesAlpha(android.animation.Animator r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof android.animation.ValueAnimator
            r2 = 1
            if (r1 == 0) goto L25
            android.animation.ValueAnimator r5 = (android.animation.ValueAnimator) r5
            android.animation.PropertyValuesHolder[] r5 = r5.getValues()
            r1 = 0
        L10:
            int r3 = r5.length
            if (r1 >= r3) goto L46
            r3 = r5[r1]
            java.lang.String r3 = r3.getPropertyName()
            java.lang.String r4 = "alpha"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L22
            return r2
        L22:
            int r1 = r1 + 1
            goto L10
        L25:
            boolean r1 = r5 instanceof android.animation.AnimatorSet
            if (r1 == 0) goto L46
            android.animation.AnimatorSet r5 = (android.animation.AnimatorSet) r5
            java.util.ArrayList r5 = r5.getChildAnimations()
            r1 = 0
        L30:
            int r3 = r5.size()
            if (r1 >= r3) goto L46
            java.lang.Object r3 = r5.get(r1)
            android.animation.Animator r3 = (android.animation.Animator) r3
            boolean r3 = modifiesAlpha(r3)
            if (r3 == 0) goto L43
            return r2
        L43:
            int r1 = r1 + 1
            goto L30
        L46:
            return r0
    }

    static boolean modifiesAlpha(android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator r4) {
            android.view.animation.Animation r0 = r4.animation
            boolean r0 = r0 instanceof android.view.animation.AlphaAnimation
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            android.view.animation.Animation r0 = r4.animation
            boolean r0 = r0 instanceof android.view.animation.AnimationSet
            if (r0 == 0) goto L2b
            android.view.animation.Animation r4 = r4.animation
            android.view.animation.AnimationSet r4 = (android.view.animation.AnimationSet) r4
            java.util.List r4 = r4.getAnimations()
            r0 = 0
            r2 = 0
        L18:
            int r3 = r4.size()
            if (r2 >= r3) goto L2a
            java.lang.Object r3 = r4.get(r2)
            boolean r3 = r3 instanceof android.view.animation.AlphaAnimation
            if (r3 == 0) goto L27
            return r1
        L27:
            int r2 = r2 + 1
            goto L18
        L2a:
            return r0
        L2b:
            android.animation.Animator r4 = r4.animator
            boolean r4 = modifiesAlpha(r4)
            return r4
    }

    private boolean popBackStackImmediate(java.lang.String r9, int r10, int r11) {
            r8 = this;
            r8.execPendingActions()
            r0 = 1
            r8.ensureExecReady(r0)
            android.support.v4.app.Fragment r1 = r8.mPrimaryNav
            if (r1 == 0) goto L1c
            if (r10 >= 0) goto L1c
            if (r9 != 0) goto L1c
            android.support.v4.app.FragmentManager r1 = r1.peekChildFragmentManager()
            if (r1 == 0) goto L1c
            boolean r1 = r1.popBackStackImmediate()
            if (r1 == 0) goto L1c
            return r0
        L1c:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r3 = r8.mTmpRecords
            java.util.ArrayList<java.lang.Boolean> r4 = r8.mTmpIsPop
            r2 = r8
            r5 = r9
            r6 = r10
            r7 = r11
            boolean r9 = r2.popBackStackState(r3, r4, r5, r6, r7)
            if (r9 == 0) goto L3c
            r8.mExecutingActions = r0
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r10 = r8.mTmpRecords     // Catch: java.lang.Throwable -> L37
            java.util.ArrayList<java.lang.Boolean> r11 = r8.mTmpIsPop     // Catch: java.lang.Throwable -> L37
            r8.removeRedundantOperationsAndExecute(r10, r11)     // Catch: java.lang.Throwable -> L37
            r8.cleanupExec()
            goto L3c
        L37:
            r9 = move-exception
            r8.cleanupExec()
            throw r9
        L3c:
            r8.doPendingDeferredStart()
            r8.burpActive()
            return r9
    }

    private int postponePostponableTransactions(java.util.ArrayList<android.support.v4.app.BackStackRecord> r8, java.util.ArrayList<java.lang.Boolean> r9, int r10, int r11, android.support.v4.util.ArraySet<android.support.v4.app.Fragment> r12) {
            r7 = this;
            int r0 = r11 + (-1)
            r1 = r11
        L3:
            if (r0 < r10) goto L5a
            java.lang.Object r2 = r8.get(r0)
            android.support.v4.app.BackStackRecord r2 = (android.support.v4.app.BackStackRecord) r2
            java.lang.Object r3 = r9.get(r0)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            boolean r4 = r2.isPostponed()
            r5 = 0
            if (r4 == 0) goto L26
            int r4 = r0 + 1
            boolean r4 = r2.interactsWith(r8, r4, r11)
            if (r4 != 0) goto L26
            r4 = 1
            goto L27
        L26:
            r4 = 0
        L27:
            if (r4 == 0) goto L57
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r4 = r7.mPostponedTransactions
            if (r4 != 0) goto L34
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r7.mPostponedTransactions = r4
        L34:
            android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener r4 = new android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener
            r4.<init>(r2, r3)
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r6 = r7.mPostponedTransactions
            r6.add(r4)
            r2.setOnStartPostponedListener(r4)
            if (r3 == 0) goto L47
            r2.executeOps()
            goto L4a
        L47:
            r2.executePopOps(r5)
        L4a:
            int r1 = r1 + (-1)
            if (r0 == r1) goto L54
            r8.remove(r0)
            r8.add(r1, r2)
        L54:
            r7.addAddedFragments(r12)
        L57:
            int r0 = r0 + (-1)
            goto L3
        L5a:
            return r1
    }

    private void removeRedundantOperationsAndExecute(java.util.ArrayList<android.support.v4.app.BackStackRecord> r5, java.util.ArrayList<java.lang.Boolean> r6) {
            r4 = this;
            if (r5 == 0) goto L6e
            boolean r0 = r5.isEmpty()
            if (r0 == 0) goto L9
            goto L6e
        L9:
            if (r6 == 0) goto L66
            int r0 = r5.size()
            int r1 = r6.size()
            if (r0 != r1) goto L66
            r4.executePostponedTransaction(r5, r6)
            int r0 = r5.size()
            r1 = 0
            r2 = 0
        L1e:
            if (r1 >= r0) goto L60
            java.lang.Object r3 = r5.get(r1)
            android.support.v4.app.BackStackRecord r3 = (android.support.v4.app.BackStackRecord) r3
            boolean r3 = r3.mReorderingAllowed
            if (r3 != 0) goto L5d
            if (r2 == r1) goto L2f
            r4.executeOpsTogether(r5, r6, r2, r1)
        L2f:
            int r2 = r1 + 1
            java.lang.Object r3 = r6.get(r1)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L58
        L3d:
            if (r2 >= r0) goto L58
            java.lang.Object r3 = r6.get(r2)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L58
            java.lang.Object r3 = r5.get(r2)
            android.support.v4.app.BackStackRecord r3 = (android.support.v4.app.BackStackRecord) r3
            boolean r3 = r3.mReorderingAllowed
            if (r3 != 0) goto L58
            int r2 = r2 + 1
            goto L3d
        L58:
            r4.executeOpsTogether(r5, r6, r1, r2)
            int r1 = r2 + (-1)
        L5d:
            int r1 = r1 + 1
            goto L1e
        L60:
            if (r2 == r0) goto L65
            r4.executeOpsTogether(r5, r6, r2, r0)
        L65:
            return
        L66:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "Internal error with the back stack records"
            r5.<init>(r6)
            throw r5
        L6e:
            return
    }

    public static int reverseTransit(int r3) {
            r0 = 8194(0x2002, float:1.1482E-41)
            r1 = 4099(0x1003, float:5.744E-42)
            r2 = 4097(0x1001, float:5.741E-42)
            if (r3 == r2) goto L13
            if (r3 == r1) goto L11
            if (r3 == r0) goto Le
            r0 = 0
            goto L13
        Le:
            r0 = 4097(0x1001, float:5.741E-42)
            goto L13
        L11:
            r0 = 4099(0x1003, float:5.744E-42)
        L13:
            return r0
    }

    private static void setHWLayerAnimListenerIfAlpha(android.view.View r3, android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator r4) {
            if (r3 == 0) goto L2f
            if (r4 != 0) goto L5
            goto L2f
        L5:
            boolean r0 = shouldRunOnHWLayer(r3, r4)
            if (r0 == 0) goto L2f
            android.animation.Animator r0 = r4.animator
            if (r0 == 0) goto L1a
            android.animation.Animator r4 = r4.animator
            android.support.v4.app.FragmentManagerImpl$AnimatorOnHWLayerIfNeededListener r0 = new android.support.v4.app.FragmentManagerImpl$AnimatorOnHWLayerIfNeededListener
            r0.<init>(r3)
            r4.addListener(r0)
            goto L2f
        L1a:
            android.view.animation.Animation r0 = r4.animation
            android.view.animation.Animation$AnimationListener r0 = getAnimationListener(r0)
            r1 = 2
            r2 = 0
            r3.setLayerType(r1, r2)
            android.view.animation.Animation r4 = r4.animation
            android.support.v4.app.FragmentManagerImpl$AnimateOnHWLayerIfNeededListener r1 = new android.support.v4.app.FragmentManagerImpl$AnimateOnHWLayerIfNeededListener
            r1.<init>(r3, r0)
            r4.setAnimationListener(r1)
        L2f:
            return
    }

    private static void setRetaining(android.support.v4.app.FragmentManagerNonConfig r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.List r0 = r3.getFragments()
            if (r0 == 0) goto L1d
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            r2 = 1
            r1.mRetaining = r2
            goto Ld
        L1d:
            java.util.List r3 = r3.getChildNonConfigs()
            if (r3 == 0) goto L37
            java.util.Iterator r3 = r3.iterator()
        L27:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L37
            java.lang.Object r0 = r3.next()
            android.support.v4.app.FragmentManagerNonConfig r0 = (android.support.v4.app.FragmentManagerNonConfig) r0
            setRetaining(r0)
            goto L27
        L37:
            return
    }

    static boolean shouldRunOnHWLayer(android.view.View r3, android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator r4) {
            r0 = 0
            if (r3 == 0) goto L1f
            if (r4 != 0) goto L6
            goto L1f
        L6:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto L1f
            int r1 = r3.getLayerType()
            if (r1 != 0) goto L1f
            boolean r3 = android.support.v4.view.ViewCompat.hasOverlappingRendering(r3)
            if (r3 == 0) goto L1f
            boolean r3 = modifiesAlpha(r4)
            if (r3 == 0) goto L1f
            r0 = 1
        L1f:
            return r0
    }

    private void throwException(java.lang.RuntimeException r8) {
            r7 = this;
            java.lang.String r0 = r8.getMessage()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.e(r1, r0)
            java.lang.String r0 = "Activity state:"
            android.util.Log.e(r1, r0)
            android.support.v4.util.LogWriter r0 = new android.support.v4.util.LogWriter
            r0.<init>(r1)
            java.io.PrintWriter r2 = new java.io.PrintWriter
            r2.<init>(r0)
            android.support.v4.app.FragmentHostCallback r0 = r7.mHost
            java.lang.String r3 = "Failed dumping state"
            r4 = 0
            r5 = 0
            java.lang.String r6 = "  "
            if (r0 == 0) goto L2d
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L28
            r0.onDump(r6, r5, r2, r4)     // Catch: java.lang.Exception -> L28
            goto L37
        L28:
            r0 = move-exception
            android.util.Log.e(r1, r3, r0)
            goto L37
        L2d:
            java.lang.String[] r0 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L33
            r7.dump(r6, r5, r2, r0)     // Catch: java.lang.Exception -> L33
            goto L37
        L33:
            r0 = move-exception
            android.util.Log.e(r1, r3, r0)
        L37:
            throw r8
    }

    public static int transitToStyleIndex(int r1, boolean r2) {
            r0 = 4097(0x1001, float:5.741E-42)
            if (r1 == r0) goto L1a
            r0 = 4099(0x1003, float:5.744E-42)
            if (r1 == r0) goto L14
            r0 = 8194(0x2002, float:1.1482E-41)
            if (r1 == r0) goto Le
            r1 = -1
            goto L1f
        Le:
            if (r2 == 0) goto L12
            r1 = 3
            goto L1f
        L12:
            r1 = 4
            goto L1f
        L14:
            if (r2 == 0) goto L18
            r1 = 5
            goto L1f
        L18:
            r1 = 6
            goto L1f
        L1a:
            if (r2 == 0) goto L1e
            r1 = 1
            goto L1f
        L1e:
            r1 = 2
        L1f:
            return r1
    }

    void addBackStackState(android.support.v4.app.BackStackRecord r2) {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r1.mBackStack
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mBackStack = r0
        Lb:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r1.mBackStack
            r0.add(r2)
            return
    }

    public void addFragment(android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "add: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            r3.makeActive(r4)
            boolean r0 = r4.mDetached
            if (r0 != 0) goto L68
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            boolean r0 = r0.contains(r4)
            if (r0 != 0) goto L51
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            monitor-enter(r0)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded     // Catch: java.lang.Throwable -> L4e
            r1.add(r4)     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
            r0 = 1
            r4.mAdded = r0
            r1 = 0
            r4.mRemoving = r1
            android.view.View r2 = r4.mView
            if (r2 != 0) goto L3e
            r4.mHiddenChanged = r1
        L3e:
            boolean r1 = r4.mHasMenu
            if (r1 == 0) goto L48
            boolean r1 = r4.mMenuVisible
            if (r1 == 0) goto L48
            r3.mNeedMenuInvalidate = r0
        L48:
            if (r5 == 0) goto L68
            r3.moveToState(r4)
            goto L68
        L4e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
            throw r4
        L51:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fragment already added: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L68:
            return
    }

    @Override
    public void addOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r0 = r1.mBackStackChangeListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mBackStackChangeListeners = r0
        Lb:
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r0 = r1.mBackStackChangeListeners
            r0.add(r2)
            return
    }

    public int allocBackStackIndex(android.support.v4.app.BackStackRecord r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.ArrayList<java.lang.Integer> r0 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L85
            if (r0 == 0) goto L4b
            java.util.ArrayList<java.lang.Integer> r0 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L85
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L85
            if (r0 > 0) goto Le
            goto L4b
        Le:
            java.util.ArrayList<java.lang.Integer> r0 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L85
            java.util.ArrayList<java.lang.Integer> r1 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L85
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L85
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.remove(r1)     // Catch: java.lang.Throwable -> L85
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L85
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L85
            boolean r1 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L44
            java.lang.String r1 = "FragmentManager"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L85
            r2.<init>()     // Catch: java.lang.Throwable -> L85
            java.lang.String r3 = "Adding back stack index "
            r2.append(r3)     // Catch: java.lang.Throwable -> L85
            r2.append(r0)     // Catch: java.lang.Throwable -> L85
            java.lang.String r3 = " with "
            r2.append(r3)     // Catch: java.lang.Throwable -> L85
            r2.append(r5)     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L85
            android.util.Log.v(r1, r2)     // Catch: java.lang.Throwable -> L85
        L44:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r1 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L85
            r1.set(r0, r5)     // Catch: java.lang.Throwable -> L85
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L85
            return r0
        L4b:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L85
            if (r0 != 0) goto L56
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L85
            r0.<init>()     // Catch: java.lang.Throwable -> L85
            r4.mBackStackIndices = r0     // Catch: java.lang.Throwable -> L85
        L56:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L85
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L85
            boolean r1 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L7e
            java.lang.String r1 = "FragmentManager"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L85
            r2.<init>()     // Catch: java.lang.Throwable -> L85
            java.lang.String r3 = "Setting back stack index "
            r2.append(r3)     // Catch: java.lang.Throwable -> L85
            r2.append(r0)     // Catch: java.lang.Throwable -> L85
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L85
            r2.append(r5)     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L85
            android.util.Log.v(r1, r2)     // Catch: java.lang.Throwable -> L85
        L7e:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r1 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L85
            r1.add(r5)     // Catch: java.lang.Throwable -> L85
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L85
            return r0
        L85:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L85
            throw r5
    }

    public void attachController(android.support.v4.app.FragmentHostCallback r2, android.support.v4.app.FragmentContainer r3, android.support.v4.app.Fragment r4) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 != 0) goto Lb
            r1.mHost = r2
            r1.mContainer = r3
            r1.mParent = r4
            return
        Lb:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Already attached"
            r2.<init>(r3)
            throw r2
    }

    public void attachFragment(android.support.v4.app.Fragment r4) {
            r3 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "attach: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            boolean r0 = r4.mDetached
            if (r0 == 0) goto L78
            r0 = 0
            r4.mDetached = r0
            boolean r0 = r4.mAdded
            if (r0 != 0) goto L78
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            boolean r0 = r0.contains(r4)
            if (r0 != 0) goto L61
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "add from attach: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L47:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            monitor-enter(r0)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded     // Catch: java.lang.Throwable -> L5e
            r1.add(r4)     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            r0 = 1
            r4.mAdded = r0
            boolean r1 = r4.mHasMenu
            if (r1 == 0) goto L78
            boolean r4 = r4.mMenuVisible
            if (r4 == 0) goto L78
            r3.mNeedMenuInvalidate = r0
            goto L78
        L5e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            throw r4
        L61:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment already added: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L78:
            return
    }

    @Override
    public android.support.v4.app.FragmentTransaction beginTransaction() {
            r1 = this;
            android.support.v4.app.BackStackRecord r0 = new android.support.v4.app.BackStackRecord
            r0.<init>(r1)
            return r0
    }

    void completeExecute(android.support.v4.app.BackStackRecord r8, boolean r9, boolean r10, boolean r11) {
            r7 = this;
            if (r9 == 0) goto L6
            r8.executePopOps(r11)
            goto L9
        L6:
            r8.executeOps()
        L9:
            java.util.ArrayList r1 = new java.util.ArrayList
            r6 = 1
            r1.<init>(r6)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r6)
            r1.add(r8)
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r9)
            r2.add(r9)
            if (r10 == 0) goto L27
            r3 = 0
            r4 = 1
            r5 = 1
            r0 = r7
            android.support.v4.app.FragmentTransition.startTransitions(r0, r1, r2, r3, r4, r5)
        L27:
            if (r11 == 0) goto L2e
            int r9 = r7.mCurState
            r7.moveToState(r9, r6)
        L2e:
            android.util.SparseArray<android.support.v4.app.Fragment> r9 = r7.mActive
            if (r9 == 0) goto L70
            int r9 = r9.size()
            r10 = 0
            r0 = 0
        L38:
            if (r0 >= r9) goto L70
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r7.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L6d
            android.view.View r2 = r1.mView
            if (r2 == 0) goto L6d
            boolean r2 = r1.mIsNewlyAdded
            if (r2 == 0) goto L6d
            int r2 = r1.mContainerId
            boolean r2 = r8.interactsWith(r2)
            if (r2 == 0) goto L6d
            float r2 = r1.mPostponedAlpha
            r3 = 0
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 <= 0) goto L62
            android.view.View r2 = r1.mView
            float r4 = r1.mPostponedAlpha
            r2.setAlpha(r4)
        L62:
            if (r11 == 0) goto L67
            r1.mPostponedAlpha = r3
            goto L6d
        L67:
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            r1.mPostponedAlpha = r2
            r1.mIsNewlyAdded = r10
        L6d:
            int r0 = r0 + 1
            goto L38
        L70:
            return
    }

    void completeShowHideFragment(android.support.v4.app.Fragment r8) {
            r7 = this;
            android.view.View r0 = r8.mView
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L81
            int r0 = r8.getNextTransition()
            boolean r3 = r8.mHidden
            r3 = r3 ^ r1
            int r4 = r8.getNextTransitionStyle()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r0 = r7.loadAnimation(r8, r0, r3, r4)
            if (r0 == 0) goto L52
            android.animation.Animator r3 = r0.animator
            if (r3 == 0) goto L52
            android.animation.Animator r3 = r0.animator
            android.view.View r4 = r8.mView
            r3.setTarget(r4)
            boolean r3 = r8.mHidden
            if (r3 == 0) goto L42
            boolean r3 = r8.isHideReplaced()
            if (r3 == 0) goto L30
            r8.setHideReplaced(r2)
            goto L47
        L30:
            android.view.ViewGroup r3 = r8.mContainer
            android.view.View r4 = r8.mView
            r3.startViewTransition(r4)
            android.animation.Animator r5 = r0.animator
            android.support.v4.app.FragmentManagerImpl$4 r6 = new android.support.v4.app.FragmentManagerImpl$4
            r6.<init>(r7, r3, r4, r8)
            r5.addListener(r6)
            goto L47
        L42:
            android.view.View r3 = r8.mView
            r3.setVisibility(r2)
        L47:
            android.view.View r3 = r8.mView
            setHWLayerAnimListenerIfAlpha(r3, r0)
            android.animation.Animator r0 = r0.animator
            r0.start()
            goto L81
        L52:
            if (r0 == 0) goto L65
            android.view.View r3 = r8.mView
            setHWLayerAnimListenerIfAlpha(r3, r0)
            android.view.View r3 = r8.mView
            android.view.animation.Animation r4 = r0.animation
            r3.startAnimation(r4)
            android.view.animation.Animation r0 = r0.animation
            r0.start()
        L65:
            boolean r0 = r8.mHidden
            if (r0 == 0) goto L72
            boolean r0 = r8.isHideReplaced()
            if (r0 != 0) goto L72
            r0 = 8
            goto L73
        L72:
            r0 = 0
        L73:
            android.view.View r3 = r8.mView
            r3.setVisibility(r0)
            boolean r0 = r8.isHideReplaced()
            if (r0 == 0) goto L81
            r8.setHideReplaced(r2)
        L81:
            boolean r0 = r8.mAdded
            if (r0 == 0) goto L8f
            boolean r0 = r8.mHasMenu
            if (r0 == 0) goto L8f
            boolean r0 = r8.mMenuVisible
            if (r0 == 0) goto L8f
            r7.mNeedMenuInvalidate = r1
        L8f:
            r8.mHiddenChanged = r2
            boolean r0 = r8.mHidden
            r8.onHiddenChanged(r0)
            return
    }

    public void detachFragment(android.support.v4.app.Fragment r4) {
            r3 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "detach: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            boolean r0 = r4.mDetached
            if (r0 != 0) goto L59
            r0 = 1
            r4.mDetached = r0
            boolean r1 = r4.mAdded
            if (r1 == 0) goto L59
            boolean r1 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r1 == 0) goto L3f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "remove from detach: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "FragmentManager"
            android.util.Log.v(r2, r1)
        L3f:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded
            monitor-enter(r1)
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r3.mAdded     // Catch: java.lang.Throwable -> L56
            r2.remove(r4)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L56
            boolean r1 = r4.mHasMenu
            if (r1 == 0) goto L52
            boolean r1 = r4.mMenuVisible
            if (r1 == 0) goto L52
            r3.mNeedMenuInvalidate = r0
        L52:
            r0 = 0
            r4.mAdded = r0
            goto L59
        L56:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L56
            throw r4
        L59:
            return
    }

    public void dispatchActivityCreated() {
            r1 = this;
            r0 = 0
            r1.mStateSaved = r0
            r1.mStopped = r0
            r0 = 2
            r1.dispatchStateChange(r0)
            return
    }

    public void dispatchConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            int r1 = r1.size()
            if (r0 >= r1) goto L19
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L16
            r1.performConfigurationChanged(r3)
        L16:
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    public boolean dispatchContextItemSelected(android.view.MenuItem r5) {
            r4 = this;
            int r0 = r4.mCurState
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L7
            return r1
        L7:
            r0 = 0
        L8:
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            int r3 = r3.size()
            if (r0 >= r3) goto L24
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            java.lang.Object r3 = r3.get(r0)
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3
            if (r3 == 0) goto L21
            boolean r3 = r3.performContextItemSelected(r5)
            if (r3 == 0) goto L21
            return r2
        L21:
            int r0 = r0 + 1
            goto L8
        L24:
            return r1
    }

    public void dispatchCreate() {
            r1 = this;
            r0 = 0
            r1.mStateSaved = r0
            r1.mStopped = r0
            r0 = 1
            r1.dispatchStateChange(r0)
            return
    }

    public boolean dispatchCreateOptionsMenu(android.view.Menu r8, android.view.MenuInflater r9) {
            r7 = this;
            int r0 = r7.mCurState
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L7
            return r1
        L7:
            r0 = 0
            r3 = r0
            r0 = 0
            r4 = 0
        Lb:
            java.util.ArrayList<android.support.v4.app.Fragment> r5 = r7.mAdded
            int r5 = r5.size()
            if (r0 >= r5) goto L31
            java.util.ArrayList<android.support.v4.app.Fragment> r5 = r7.mAdded
            java.lang.Object r5 = r5.get(r0)
            android.support.v4.app.Fragment r5 = (android.support.v4.app.Fragment) r5
            if (r5 == 0) goto L2e
            boolean r6 = r5.performCreateOptionsMenu(r8, r9)
            if (r6 == 0) goto L2e
            if (r3 != 0) goto L2a
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L2a:
            r3.add(r5)
            r4 = 1
        L2e:
            int r0 = r0 + 1
            goto Lb
        L31:
            java.util.ArrayList<android.support.v4.app.Fragment> r8 = r7.mCreatedMenus
            if (r8 == 0) goto L53
        L35:
            java.util.ArrayList<android.support.v4.app.Fragment> r8 = r7.mCreatedMenus
            int r8 = r8.size()
            if (r1 >= r8) goto L53
            java.util.ArrayList<android.support.v4.app.Fragment> r8 = r7.mCreatedMenus
            java.lang.Object r8 = r8.get(r1)
            android.support.v4.app.Fragment r8 = (android.support.v4.app.Fragment) r8
            if (r3 == 0) goto L4d
            boolean r9 = r3.contains(r8)
            if (r9 != 0) goto L50
        L4d:
            r8.onDestroyOptionsMenu()
        L50:
            int r1 = r1 + 1
            goto L35
        L53:
            r7.mCreatedMenus = r3
            return r4
    }

    public void dispatchDestroy() {
            r1 = this;
            r0 = 1
            r1.mDestroyed = r0
            r1.execPendingActions()
            r0 = 0
            r1.dispatchStateChange(r0)
            r0 = 0
            r1.mHost = r0
            r1.mContainer = r0
            r1.mParent = r0
            return
    }

    public void dispatchDestroyView() {
            r1 = this;
            r0 = 1
            r1.dispatchStateChange(r0)
            return
    }

    public void dispatchLowMemory() {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            int r1 = r1.size()
            if (r0 >= r1) goto L19
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L16
            r1.performLowMemory()
        L16:
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    public void dispatchMultiWindowModeChanged(boolean r3) {
            r2 = this;
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r2.mAdded
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L1a
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L17
            r1.performMultiWindowModeChanged(r3)
        L17:
            int r0 = r0 + (-1)
            goto L8
        L1a:
            return
    }

    void dispatchOnFragmentActivityCreated(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.Nullable android.os.Bundle r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentActivityCreated(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentActivityCreated(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentAttached(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.NonNull android.content.Context r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentAttached(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentAttached(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentCreated(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.Nullable android.os.Bundle r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentCreated(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentCreated(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentDestroyed(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentDestroyed(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentDestroyed(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentDetached(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentDetached(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentDetached(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentPaused(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentPaused(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentPaused(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentPreAttached(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.NonNull android.content.Context r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentPreAttached(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentPreAttached(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentPreCreated(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.Nullable android.os.Bundle r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentPreCreated(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentPreCreated(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentResumed(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentResumed(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentResumed(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentSaveInstanceState(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.NonNull android.os.Bundle r5, boolean r6) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentSaveInstanceState(r4, r5, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r6 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentSaveInstanceState(r3, r4, r5)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentStarted(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentStarted(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentStarted(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentStopped(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentStopped(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentStopped(r3, r4)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentViewCreated(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, @android.support.annotation.NonNull android.view.View r5, @android.support.annotation.Nullable android.os.Bundle r6, boolean r7) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentViewCreated(r4, r5, r6, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r7 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentViewCreated(r3, r4, r5, r6)
            goto L18
        L30:
            return
    }

    void dispatchOnFragmentViewDestroyed(@android.support.annotation.NonNull android.support.v4.app.Fragment r4, boolean r5) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mParent
            if (r0 == 0) goto L12
            android.support.v4.app.FragmentManager r0 = r0.getFragmentManager()
            boolean r1 = r0 instanceof android.support.v4.app.FragmentManagerImpl
            if (r1 == 0) goto L12
            android.support.v4.app.FragmentManagerImpl r0 = (android.support.v4.app.FragmentManagerImpl) r0
            r1 = 1
            r0.dispatchOnFragmentViewDestroyed(r4, r1)
        L12:
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r3.mLifecycleCallbacks
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r1
            if (r5 == 0) goto L2a
            boolean r2 = r1.mRecursive
            if (r2 == 0) goto L18
        L2a:
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r1 = r1.mCallback
            r1.onFragmentViewDestroyed(r3, r4)
            goto L18
        L30:
            return
    }

    public boolean dispatchOptionsItemSelected(android.view.MenuItem r5) {
            r4 = this;
            int r0 = r4.mCurState
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L7
            return r1
        L7:
            r0 = 0
        L8:
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            int r3 = r3.size()
            if (r0 >= r3) goto L24
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            java.lang.Object r3 = r3.get(r0)
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3
            if (r3 == 0) goto L21
            boolean r3 = r3.performOptionsItemSelected(r5)
            if (r3 == 0) goto L21
            return r2
        L21:
            int r0 = r0 + 1
            goto L8
        L24:
            return r1
    }

    public void dispatchOptionsMenuClosed(android.view.Menu r3) {
            r2 = this;
            int r0 = r2.mCurState
            r1 = 1
            if (r0 >= r1) goto L6
            return
        L6:
            r0 = 0
        L7:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            int r1 = r1.size()
            if (r0 >= r1) goto L1f
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L1c
            r1.performOptionsMenuClosed(r3)
        L1c:
            int r0 = r0 + 1
            goto L7
        L1f:
            return
    }

    public void dispatchPause() {
            r1 = this;
            r0 = 3
            r1.dispatchStateChange(r0)
            return
    }

    public void dispatchPictureInPictureModeChanged(boolean r3) {
            r2 = this;
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r2.mAdded
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L1a
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L17
            r1.performPictureInPictureModeChanged(r3)
        L17:
            int r0 = r0 + (-1)
            goto L8
        L1a:
            return
    }

    public boolean dispatchPrepareOptionsMenu(android.view.Menu r5) {
            r4 = this;
            int r0 = r4.mCurState
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L7
            return r1
        L7:
            r0 = 0
        L8:
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            int r3 = r3.size()
            if (r1 >= r3) goto L24
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r4.mAdded
            java.lang.Object r3 = r3.get(r1)
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3
            if (r3 == 0) goto L21
            boolean r3 = r3.performPrepareOptionsMenu(r5)
            if (r3 == 0) goto L21
            r0 = 1
        L21:
            int r1 = r1 + 1
            goto L8
        L24:
            return r0
    }

    public void dispatchResume() {
            r1 = this;
            r0 = 0
            r1.mStateSaved = r0
            r1.mStopped = r0
            r0 = 4
            r1.dispatchStateChange(r0)
            return
    }

    public void dispatchStart() {
            r1 = this;
            r0 = 0
            r1.mStateSaved = r0
            r1.mStopped = r0
            r0 = 3
            r1.dispatchStateChange(r0)
            return
    }

    public void dispatchStop() {
            r1 = this;
            r0 = 1
            r1.mStopped = r0
            r0 = 2
            r1.dispatchStateChange(r0)
            return
    }

    void doPendingDeferredStart() {
            r1 = this;
            boolean r0 = r1.mHavePendingDeferredStart
            if (r0 == 0) goto La
            r0 = 0
            r1.mHavePendingDeferredStart = r0
            r1.startPendingDeferredFragments()
        La:
            return
    }

    @Override
    public void dump(java.lang.String r7, java.io.FileDescriptor r8, java.io.PrintWriter r9, java.lang.String[] r10) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r1 = "    "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r6.mActive
            r2 = 0
            if (r1 == 0) goto L5a
            int r1 = r1.size()
            if (r1 <= 0) goto L5a
            r9.print(r7)
            java.lang.String r3 = "Active Fragments in "
            r9.print(r3)
            int r3 = java.lang.System.identityHashCode(r6)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r9.print(r3)
            java.lang.String r3 = ":"
            r9.println(r3)
            r3 = 0
        L35:
            if (r3 >= r1) goto L5a
            android.util.SparseArray<android.support.v4.app.Fragment> r4 = r6.mActive
            java.lang.Object r4 = r4.valueAt(r3)
            android.support.v4.app.Fragment r4 = (android.support.v4.app.Fragment) r4
            r9.print(r7)
            java.lang.String r5 = "  #"
            r9.print(r5)
            r9.print(r3)
            java.lang.String r5 = ": "
            r9.print(r5)
            r9.println(r4)
            if (r4 == 0) goto L57
            r4.dump(r0, r8, r9, r10)
        L57:
            int r3 = r3 + 1
            goto L35
        L5a:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r6.mAdded
            int r1 = r1.size()
            if (r1 <= 0) goto L8f
            r9.print(r7)
            java.lang.String r3 = "Added Fragments:"
            r9.println(r3)
            r3 = 0
        L6b:
            if (r3 >= r1) goto L8f
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r6.mAdded
            java.lang.Object r4 = r4.get(r3)
            android.support.v4.app.Fragment r4 = (android.support.v4.app.Fragment) r4
            r9.print(r7)
            java.lang.String r5 = "  #"
            r9.print(r5)
            r9.print(r3)
            java.lang.String r5 = ": "
            r9.print(r5)
            java.lang.String r4 = r4.toString()
            r9.println(r4)
            int r3 = r3 + 1
            goto L6b
        L8f:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r6.mCreatedMenus
            if (r1 == 0) goto Lc6
            int r1 = r1.size()
            if (r1 <= 0) goto Lc6
            r9.print(r7)
            java.lang.String r3 = "Fragments Created Menus:"
            r9.println(r3)
            r3 = 0
        La2:
            if (r3 >= r1) goto Lc6
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r6.mCreatedMenus
            java.lang.Object r4 = r4.get(r3)
            android.support.v4.app.Fragment r4 = (android.support.v4.app.Fragment) r4
            r9.print(r7)
            java.lang.String r5 = "  #"
            r9.print(r5)
            r9.print(r3)
            java.lang.String r5 = ": "
            r9.print(r5)
            java.lang.String r4 = r4.toString()
            r9.println(r4)
            int r3 = r3 + 1
            goto La2
        Lc6:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r1 = r6.mBackStack
            if (r1 == 0) goto L100
            int r1 = r1.size()
            if (r1 <= 0) goto L100
            r9.print(r7)
            java.lang.String r3 = "Back Stack:"
            r9.println(r3)
            r3 = 0
        Ld9:
            if (r3 >= r1) goto L100
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r4 = r6.mBackStack
            java.lang.Object r4 = r4.get(r3)
            android.support.v4.app.BackStackRecord r4 = (android.support.v4.app.BackStackRecord) r4
            r9.print(r7)
            java.lang.String r5 = "  #"
            r9.print(r5)
            r9.print(r3)
            java.lang.String r5 = ": "
            r9.print(r5)
            java.lang.String r5 = r4.toString()
            r9.println(r5)
            r4.dump(r0, r8, r9, r10)
            int r3 = r3 + 1
            goto Ld9
        L100:
            monitor-enter(r6)
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r8 = r6.mBackStackIndices     // Catch: java.lang.Throwable -> L20b
            if (r8 == 0) goto L136
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r8 = r6.mBackStackIndices     // Catch: java.lang.Throwable -> L20b
            int r8 = r8.size()     // Catch: java.lang.Throwable -> L20b
            if (r8 <= 0) goto L136
            r9.print(r7)     // Catch: java.lang.Throwable -> L20b
            java.lang.String r10 = "Back Stack Indices:"
            r9.println(r10)     // Catch: java.lang.Throwable -> L20b
            r10 = 0
        L116:
            if (r10 >= r8) goto L136
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r6.mBackStackIndices     // Catch: java.lang.Throwable -> L20b
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Throwable -> L20b
            android.support.v4.app.BackStackRecord r0 = (android.support.v4.app.BackStackRecord) r0     // Catch: java.lang.Throwable -> L20b
            r9.print(r7)     // Catch: java.lang.Throwable -> L20b
            java.lang.String r1 = "  #"
            r9.print(r1)     // Catch: java.lang.Throwable -> L20b
            r9.print(r10)     // Catch: java.lang.Throwable -> L20b
            java.lang.String r1 = ": "
            r9.print(r1)     // Catch: java.lang.Throwable -> L20b
            r9.println(r0)     // Catch: java.lang.Throwable -> L20b
            int r10 = r10 + 1
            goto L116
        L136:
            java.util.ArrayList<java.lang.Integer> r8 = r6.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L20b
            if (r8 == 0) goto L157
            java.util.ArrayList<java.lang.Integer> r8 = r6.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L20b
            int r8 = r8.size()     // Catch: java.lang.Throwable -> L20b
            if (r8 <= 0) goto L157
            r9.print(r7)     // Catch: java.lang.Throwable -> L20b
            java.lang.String r8 = "mAvailBackStackIndices: "
            r9.print(r8)     // Catch: java.lang.Throwable -> L20b
            java.util.ArrayList<java.lang.Integer> r8 = r6.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L20b
            java.lang.Object[] r8 = r8.toArray()     // Catch: java.lang.Throwable -> L20b
            java.lang.String r8 = java.util.Arrays.toString(r8)     // Catch: java.lang.Throwable -> L20b
            r9.println(r8)     // Catch: java.lang.Throwable -> L20b
        L157:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L20b
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r8 = r6.mPendingActions
            if (r8 == 0) goto L18a
            int r8 = r8.size()
            if (r8 <= 0) goto L18a
            r9.print(r7)
            java.lang.String r10 = "Pending Actions:"
            r9.println(r10)
        L16a:
            if (r2 >= r8) goto L18a
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r10 = r6.mPendingActions
            java.lang.Object r10 = r10.get(r2)
            android.support.v4.app.FragmentManagerImpl$OpGenerator r10 = (android.support.v4.app.FragmentManagerImpl.OpGenerator) r10
            r9.print(r7)
            java.lang.String r0 = "  #"
            r9.print(r0)
            r9.print(r2)
            java.lang.String r0 = ": "
            r9.print(r0)
            r9.println(r10)
            int r2 = r2 + 1
            goto L16a
        L18a:
            r9.print(r7)
            java.lang.String r8 = "FragmentManager misc state:"
            r9.println(r8)
            r9.print(r7)
            java.lang.String r8 = "  mHost="
            r9.print(r8)
            android.support.v4.app.FragmentHostCallback r8 = r6.mHost
            r9.println(r8)
            r9.print(r7)
            java.lang.String r8 = "  mContainer="
            r9.print(r8)
            android.support.v4.app.FragmentContainer r8 = r6.mContainer
            r9.println(r8)
            android.support.v4.app.Fragment r8 = r6.mParent
            if (r8 == 0) goto L1bd
            r9.print(r7)
            java.lang.String r8 = "  mParent="
            r9.print(r8)
            android.support.v4.app.Fragment r8 = r6.mParent
            r9.println(r8)
        L1bd:
            r9.print(r7)
            java.lang.String r8 = "  mCurState="
            r9.print(r8)
            int r8 = r6.mCurState
            r9.print(r8)
            java.lang.String r8 = " mStateSaved="
            r9.print(r8)
            boolean r8 = r6.mStateSaved
            r9.print(r8)
            java.lang.String r8 = " mStopped="
            r9.print(r8)
            boolean r8 = r6.mStopped
            r9.print(r8)
            java.lang.String r8 = " mDestroyed="
            r9.print(r8)
            boolean r8 = r6.mDestroyed
            r9.println(r8)
            boolean r8 = r6.mNeedMenuInvalidate
            if (r8 == 0) goto L1f9
            r9.print(r7)
            java.lang.String r8 = "  mNeedMenuInvalidate="
            r9.print(r8)
            boolean r8 = r6.mNeedMenuInvalidate
            r9.println(r8)
        L1f9:
            java.lang.String r8 = r6.mNoTransactionsBecause
            if (r8 == 0) goto L20a
            r9.print(r7)
            java.lang.String r7 = "  mNoTransactionsBecause="
            r9.print(r7)
            java.lang.String r7 = r6.mNoTransactionsBecause
            r9.println(r7)
        L20a:
            return
        L20b:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L20b
            throw r7
    }

    public void enqueueAction(android.support.v4.app.FragmentManagerImpl.OpGenerator r2, boolean r3) {
            r1 = this;
            if (r3 != 0) goto L5
            r1.checkStateLoss()
        L5:
            monitor-enter(r1)
            boolean r0 = r1.mDestroyed     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L24
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto Lf
            goto L24
        Lf:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r3 = r1.mPendingActions     // Catch: java.lang.Throwable -> L30
            if (r3 != 0) goto L1a
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L30
            r3.<init>()     // Catch: java.lang.Throwable -> L30
            r1.mPendingActions = r3     // Catch: java.lang.Throwable -> L30
        L1a:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r3 = r1.mPendingActions     // Catch: java.lang.Throwable -> L30
            r3.add(r2)     // Catch: java.lang.Throwable -> L30
            r1.scheduleCommit()     // Catch: java.lang.Throwable -> L30
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L30
            return
        L24:
            if (r3 == 0) goto L28
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L30
            return
        L28:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "Activity has been destroyed"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L30
            throw r2     // Catch: java.lang.Throwable -> L30
        L30:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L30
            throw r2
    }

    void ensureInflatedFragmentView(android.support.v4.app.Fragment r4) {
            r3 = this;
            boolean r0 = r4.mFromLayout
            if (r0 == 0) goto L3e
            boolean r0 = r4.mPerformedCreateView
            if (r0 != 0) goto L3e
            android.os.Bundle r0 = r4.mSavedFragmentState
            android.view.LayoutInflater r0 = r4.performGetLayoutInflater(r0)
            android.os.Bundle r1 = r4.mSavedFragmentState
            r2 = 0
            r4.performCreateView(r0, r2, r1)
            android.view.View r0 = r4.mView
            if (r0 == 0) goto L3c
            android.view.View r0 = r4.mView
            r4.mInnerView = r0
            android.view.View r0 = r4.mView
            r1 = 0
            r0.setSaveFromParentEnabled(r1)
            boolean r0 = r4.mHidden
            if (r0 == 0) goto L2d
            android.view.View r0 = r4.mView
            r2 = 8
            r0.setVisibility(r2)
        L2d:
            android.view.View r0 = r4.mView
            android.os.Bundle r2 = r4.mSavedFragmentState
            r4.onViewCreated(r0, r2)
            android.view.View r0 = r4.mView
            android.os.Bundle r2 = r4.mSavedFragmentState
            r3.dispatchOnFragmentViewCreated(r4, r0, r2, r1)
            goto L3e
        L3c:
            r4.mInnerView = r2
        L3e:
            return
    }

    public boolean execPendingActions() {
            r4 = this;
            r0 = 1
            r4.ensureExecReady(r0)
            r1 = 0
        L5:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r2 = r4.mTmpRecords
            java.util.ArrayList<java.lang.Boolean> r3 = r4.mTmpIsPop
            boolean r2 = r4.generateOpsForPendingActions(r2, r3)
            if (r2 == 0) goto L22
            r4.mExecutingActions = r0
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r1 = r4.mTmpRecords     // Catch: java.lang.Throwable -> L1d
            java.util.ArrayList<java.lang.Boolean> r2 = r4.mTmpIsPop     // Catch: java.lang.Throwable -> L1d
            r4.removeRedundantOperationsAndExecute(r1, r2)     // Catch: java.lang.Throwable -> L1d
            r4.cleanupExec()
            r1 = 1
            goto L5
        L1d:
            r0 = move-exception
            r4.cleanupExec()
            throw r0
        L22:
            r4.doPendingDeferredStart()
            r4.burpActive()
            return r1
    }

    public void execSingleAction(android.support.v4.app.FragmentManagerImpl.OpGenerator r2, boolean r3) {
            r1 = this;
            if (r3 == 0) goto Lb
            android.support.v4.app.FragmentHostCallback r0 = r1.mHost
            if (r0 == 0) goto La
            boolean r0 = r1.mDestroyed
            if (r0 == 0) goto Lb
        La:
            return
        Lb:
            r1.ensureExecReady(r3)
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r3 = r1.mTmpRecords
            java.util.ArrayList<java.lang.Boolean> r0 = r1.mTmpIsPop
            boolean r2 = r2.generateOps(r3, r0)
            if (r2 == 0) goto L2b
            r2 = 1
            r1.mExecutingActions = r2
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r2 = r1.mTmpRecords     // Catch: java.lang.Throwable -> L26
            java.util.ArrayList<java.lang.Boolean> r3 = r1.mTmpIsPop     // Catch: java.lang.Throwable -> L26
            r1.removeRedundantOperationsAndExecute(r2, r3)     // Catch: java.lang.Throwable -> L26
            r1.cleanupExec()
            goto L2b
        L26:
            r2 = move-exception
            r1.cleanupExec()
            throw r2
        L2b:
            r1.doPendingDeferredStart()
            r1.burpActive()
            return
    }

    @Override
    public boolean executePendingTransactions() {
            r1 = this;
            boolean r0 = r1.execPendingActions()
            r1.forcePostponedTransactions()
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment findFragmentById(int r4) {
            r3 = this;
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L1c
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L19
            int r2 = r1.mFragmentId
            if (r2 != r4) goto L19
            return r1
        L19:
            int r0 = r0 + (-1)
            goto L8
        L1c:
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r3.mActive
            if (r0 == 0) goto L3a
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L26:
            if (r0 < 0) goto L3a
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r3.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L37
            int r2 = r1.mFragmentId
            if (r2 != r4) goto L37
            return r1
        L37:
            int r0 = r0 + (-1)
            goto L26
        L3a:
            r4 = 0
            return r4
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment findFragmentByTag(@android.support.annotation.Nullable java.lang.String r4) {
            r3 = this;
            if (r4 == 0) goto L22
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            int r0 = r0.size()
            int r0 = r0 + (-1)
        La:
            if (r0 < 0) goto L22
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L1f
            java.lang.String r2 = r1.mTag
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L1f
            return r1
        L1f:
            int r0 = r0 + (-1)
            goto La
        L22:
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r3.mActive
            if (r0 == 0) goto L46
            if (r4 == 0) goto L46
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L2e:
            if (r0 < 0) goto L46
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r3.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L43
            java.lang.String r2 = r1.mTag
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L43
            return r1
        L43:
            int r0 = r0 + (-1)
            goto L2e
        L46:
            r4 = 0
            return r4
    }

    public android.support.v4.app.Fragment findFragmentByWho(java.lang.String r3) {
            r2 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r2.mActive
            if (r0 == 0) goto L22
            if (r3 == 0) goto L22
            int r0 = r0.size()
            int r0 = r0 + (-1)
        Lc:
            if (r0 < 0) goto L22
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r2.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L1f
            android.support.v4.app.Fragment r1 = r1.findFragmentByWho(r3)
            if (r1 == 0) goto L1f
            return r1
        L1f:
            int r0 = r0 + (-1)
            goto Lc
        L22:
            r3 = 0
            return r3
    }

    public void freeBackStackIndex(int r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r3.mBackStackIndices     // Catch: java.lang.Throwable -> L37
            r1 = 0
            r0.set(r4, r1)     // Catch: java.lang.Throwable -> L37
            java.util.ArrayList<java.lang.Integer> r0 = r3.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L37
            if (r0 != 0) goto L12
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L37
            r0.<init>()     // Catch: java.lang.Throwable -> L37
            r3.mAvailBackStackIndices = r0     // Catch: java.lang.Throwable -> L37
        L12:
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L2c
            java.lang.String r0 = "FragmentManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r1.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = "Freeing back stack index "
            r1.append(r2)     // Catch: java.lang.Throwable -> L37
            r1.append(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L37
            android.util.Log.v(r0, r1)     // Catch: java.lang.Throwable -> L37
        L2c:
            java.util.ArrayList<java.lang.Integer> r0 = r3.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L37
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L37
            r0.add(r4)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L37
            return
        L37:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L37
            throw r4
    }

    int getActiveFragmentCount() {
            r1 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r1.mActive
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            return r0
    }

    java.util.List<android.support.v4.app.Fragment> getActiveFragments() {
            r4 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r4.mActive
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
        L10:
            if (r2 >= r0) goto L1e
            android.util.SparseArray<android.support.v4.app.Fragment> r3 = r4.mActive
            java.lang.Object r3 = r3.valueAt(r2)
            r1.add(r3)
            int r2 = r2 + 1
            goto L10
        L1e:
            return r1
    }

    @Override
    public android.support.v4.app.FragmentManager.BackStackEntry getBackStackEntryAt(int r2) {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r1.mBackStack
            java.lang.Object r2 = r0.get(r2)
            android.support.v4.app.FragmentManager$BackStackEntry r2 = (android.support.v4.app.FragmentManager.BackStackEntry) r2
            return r2
    }

    @Override
    public int getBackStackEntryCount() {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r1.mBackStack
            if (r0 == 0) goto L9
            int r0 = r0.size()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment getFragment(android.os.Bundle r5, java.lang.String r6) {
            r4 = this;
            r0 = -1
            int r5 = r5.getInt(r6, r0)
            if (r5 != r0) goto L9
            r5 = 0
            return r5
        L9:
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r4.mActive
            java.lang.Object r0 = r0.get(r5)
            android.support.v4.app.Fragment r0 = (android.support.v4.app.Fragment) r0
            if (r0 != 0) goto L34
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Fragment no longer exists for key "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = ": index "
            r2.append(r6)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            r4.throwException(r1)
        L34:
            return r0
    }

    @Override
    public java.util.List<android.support.v4.app.Fragment> getFragments() {
            r2 = this;
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r2.mAdded
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Ld
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
        Ld:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r2.mAdded
            monitor-enter(r0)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r2.mAdded     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r1 = r1.clone()     // Catch: java.lang.Throwable -> L1a
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
    }

    android.view.LayoutInflater.Factory2 getLayoutInflaterFactory() {
            r0 = this;
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment getPrimaryNavigationFragment() {
            r1 = this;
            android.support.v4.app.Fragment r0 = r1.mPrimaryNav
            return r0
    }

    public void hideFragment(android.support.v4.app.Fragment r3) {
            r2 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hide: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            boolean r0 = r3.mHidden
            if (r0 != 0) goto L26
            r0 = 1
            r3.mHidden = r0
            boolean r1 = r3.mHiddenChanged
            r0 = r0 ^ r1
            r3.mHiddenChanged = r0
        L26:
            return
    }

    @Override
    public boolean isDestroyed() {
            r1 = this;
            boolean r0 = r1.mDestroyed
            return r0
    }

    boolean isStateAtLeast(int r2) {
            r1 = this;
            int r0 = r1.mCurState
            if (r0 < r2) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            return r2
    }

    @Override
    public boolean isStateSaved() {
            r1 = this;
            boolean r0 = r1.mStateSaved
            if (r0 != 0) goto Lb
            boolean r0 = r1.mStopped
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    android.support.v4.app.FragmentManagerImpl.AnimationOrAnimator loadAnimation(android.support.v4.app.Fragment r5, int r6, boolean r7, int r8) {
            r4 = this;
            int r0 = r5.getNextAnim()
            android.view.animation.Animation r1 = r5.onCreateAnimation(r6, r7, r0)
            if (r1 == 0) goto L10
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator
            r5.<init>(r1)
            return r5
        L10:
            android.animation.Animator r5 = r5.onCreateAnimator(r6, r7, r0)
            if (r5 == 0) goto L1c
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r6 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator
            r6.<init>(r5)
            return r6
        L1c:
            if (r0 == 0) goto L75
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.content.res.Resources r5 = r5.getResources()
            java.lang.String r5 = r5.getResourceTypeName(r0)
            java.lang.String r1 = "anim"
            boolean r5 = r1.equals(r5)
            r1 = 0
            if (r5 == 0) goto L4b
            android.support.v4.app.FragmentHostCallback r2 = r4.mHost     // Catch: android.content.res.Resources.NotFoundException -> L49 java.lang.RuntimeException -> L4b
            android.content.Context r2 = r2.getContext()     // Catch: android.content.res.Resources.NotFoundException -> L49 java.lang.RuntimeException -> L4b
            android.view.animation.Animation r2 = android.view.animation.AnimationUtils.loadAnimation(r2, r0)     // Catch: android.content.res.Resources.NotFoundException -> L49 java.lang.RuntimeException -> L4b
            if (r2 == 0) goto L47
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r3 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator     // Catch: android.content.res.Resources.NotFoundException -> L49 java.lang.RuntimeException -> L4b
            r3.<init>(r2)     // Catch: android.content.res.Resources.NotFoundException -> L49 java.lang.RuntimeException -> L4b
            return r3
        L47:
            r1 = 1
            goto L4b
        L49:
            r5 = move-exception
            throw r5
        L4b:
            if (r1 != 0) goto L75
            android.support.v4.app.FragmentHostCallback r1 = r4.mHost     // Catch: java.lang.RuntimeException -> L5f
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.RuntimeException -> L5f
            android.animation.Animator r1 = android.animation.AnimatorInflater.loadAnimator(r1, r0)     // Catch: java.lang.RuntimeException -> L5f
            if (r1 == 0) goto L75
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r2 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator     // Catch: java.lang.RuntimeException -> L5f
            r2.<init>(r1)     // Catch: java.lang.RuntimeException -> L5f
            return r2
        L5f:
            r1 = move-exception
            if (r5 != 0) goto L74
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.view.animation.Animation r5 = android.view.animation.AnimationUtils.loadAnimation(r5, r0)
            if (r5 == 0) goto L75
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r6 = new android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator
            r6.<init>(r5)
            return r6
        L74:
            throw r1
        L75:
            r5 = 0
            if (r6 != 0) goto L79
            return r5
        L79:
            int r6 = transitToStyleIndex(r6, r7)
            if (r6 >= 0) goto L80
            return r5
        L80:
            r7 = 1064933786(0x3f79999a, float:0.975)
            r0 = 0
            r1 = 1065353216(0x3f800000, float:1.0)
            switch(r6) {
                case 1: goto Ld4;
                case 2: goto Lc9;
                case 3: goto Lbe;
                case 4: goto Lb0;
                case 5: goto La5;
                case 6: goto L9a;
                default: goto L89;
            }
        L89:
            if (r8 != 0) goto Le1
            android.support.v4.app.FragmentHostCallback r6 = r4.mHost
            boolean r6 = r6.onHasWindowAnimations()
            if (r6 == 0) goto Le1
            android.support.v4.app.FragmentHostCallback r6 = r4.mHost
            int r8 = r6.onGetWindowAnimations()
            goto Le1
        L9a:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeFadeAnimation(r5, r1, r0)
            return r5
        La5:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeFadeAnimation(r5, r0, r1)
            return r5
        Lb0:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            r6 = 1065982362(0x3f89999a, float:1.075)
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeOpenCloseAnimation(r5, r1, r6, r1, r0)
            return r5
        Lbe:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeOpenCloseAnimation(r5, r7, r1, r0, r1)
            return r5
        Lc9:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeOpenCloseAnimation(r5, r1, r7, r1, r0)
            return r5
        Ld4:
            android.support.v4.app.FragmentHostCallback r5 = r4.mHost
            android.content.Context r5 = r5.getContext()
            r6 = 1066401792(0x3f900000, float:1.125)
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r5 = makeOpenCloseAnimation(r5, r6, r1, r0, r1)
            return r5
        Le1:
            if (r8 != 0) goto Le3
        Le3:
            return r5
    }

    void makeActive(android.support.v4.app.Fragment r3) {
            r2 = this;
            int r0 = r3.mIndex
            if (r0 < 0) goto L5
            return
        L5:
            int r0 = r2.mNextFragmentIndex
            int r1 = r0 + 1
            r2.mNextFragmentIndex = r1
            android.support.v4.app.Fragment r1 = r2.mParent
            r3.setIndex(r0, r1)
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r2.mActive
            if (r0 != 0) goto L1b
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.mActive = r0
        L1b:
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r2.mActive
            int r1 = r3.mIndex
            r0.put(r1, r3)
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Allocated fragment index "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "FragmentManager"
            android.util.Log.v(r0, r3)
        L3c:
            return
    }

    void makeInactive(android.support.v4.app.Fragment r4) {
            r3 = this;
            int r0 = r4.mIndex
            if (r0 >= 0) goto L5
            return
        L5:
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Freeing fragment index "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1f:
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r3.mActive
            int r1 = r4.mIndex
            r2 = 0
            r0.put(r1, r2)
            r4.initState()
            return
    }

    void moveFragmentToExpectedState(android.support.v4.app.Fragment r11) {
            r10 = this;
            if (r11 != 0) goto L3
            return
        L3:
            int r0 = r10.mCurState
            boolean r1 = r11.mRemoving
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L1a
            boolean r1 = r11.isInBackStack()
            if (r1 == 0) goto L16
            int r0 = java.lang.Math.min(r0, r2)
            goto L1a
        L16:
            int r0 = java.lang.Math.min(r0, r3)
        L1a:
            r6 = r0
            int r7 = r11.getNextTransition()
            int r8 = r11.getNextTransitionStyle()
            r9 = 0
            r4 = r10
            r5 = r11
            r4.moveToState(r5, r6, r7, r8, r9)
            android.view.View r0 = r11.mView
            if (r0 == 0) goto L90
            android.support.v4.app.Fragment r0 = r10.findFragmentUnder(r11)
            if (r0 == 0) goto L4b
            android.view.View r0 = r0.mView
            android.view.ViewGroup r1 = r11.mContainer
            int r0 = r1.indexOfChild(r0)
            android.view.View r4 = r11.mView
            int r4 = r1.indexOfChild(r4)
            if (r4 >= r0) goto L4b
            r1.removeViewAt(r4)
            android.view.View r4 = r11.mView
            r1.addView(r4, r0)
        L4b:
            boolean r0 = r11.mIsNewlyAdded
            if (r0 == 0) goto L90
            android.view.ViewGroup r0 = r11.mContainer
            if (r0 == 0) goto L90
            float r0 = r11.mPostponedAlpha
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L61
            android.view.View r0 = r11.mView
            float r4 = r11.mPostponedAlpha
            r0.setAlpha(r4)
        L61:
            r11.mPostponedAlpha = r1
            r11.mIsNewlyAdded = r3
            int r0 = r11.getNextTransition()
            int r1 = r11.getNextTransitionStyle()
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r0 = r10.loadAnimation(r11, r0, r2, r1)
            if (r0 == 0) goto L90
            android.view.View r1 = r11.mView
            setHWLayerAnimListenerIfAlpha(r1, r0)
            android.view.animation.Animation r1 = r0.animation
            if (r1 == 0) goto L84
            android.view.View r1 = r11.mView
            android.view.animation.Animation r0 = r0.animation
            r1.startAnimation(r0)
            goto L90
        L84:
            android.animation.Animator r1 = r0.animator
            android.view.View r2 = r11.mView
            r1.setTarget(r2)
            android.animation.Animator r0 = r0.animator
            r0.start()
        L90:
            boolean r0 = r11.mHiddenChanged
            if (r0 == 0) goto L97
            r10.completeShowHideFragment(r11)
        L97:
            return
    }

    void moveToState(int r4, boolean r5) {
            r3 = this;
            android.support.v4.app.FragmentHostCallback r0 = r3.mHost
            if (r0 != 0) goto Lf
            if (r4 != 0) goto L7
            goto Lf
        L7:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "No activity"
            r4.<init>(r5)
            throw r4
        Lf:
            if (r5 != 0) goto L16
            int r5 = r3.mCurState
            if (r4 != r5) goto L16
            return
        L16:
            r3.mCurState = r4
            android.util.SparseArray<android.support.v4.app.Fragment> r4 = r3.mActive
            if (r4 == 0) goto L6e
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r3.mAdded
            int r4 = r4.size()
            r5 = 0
            r0 = 0
        L24:
            if (r0 >= r4) goto L34
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            r3.moveFragmentToExpectedState(r1)
            int r0 = r0 + 1
            goto L24
        L34:
            android.util.SparseArray<android.support.v4.app.Fragment> r4 = r3.mActive
            int r4 = r4.size()
            r0 = 0
        L3b:
            if (r0 >= r4) goto L59
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r3.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L56
            boolean r2 = r1.mRemoving
            if (r2 != 0) goto L4f
            boolean r2 = r1.mDetached
            if (r2 == 0) goto L56
        L4f:
            boolean r2 = r1.mIsNewlyAdded
            if (r2 != 0) goto L56
            r3.moveFragmentToExpectedState(r1)
        L56:
            int r0 = r0 + 1
            goto L3b
        L59:
            r3.startPendingDeferredFragments()
            boolean r4 = r3.mNeedMenuInvalidate
            if (r4 == 0) goto L6e
            android.support.v4.app.FragmentHostCallback r4 = r3.mHost
            if (r4 == 0) goto L6e
            int r0 = r3.mCurState
            r1 = 4
            if (r0 != r1) goto L6e
            r4.onSupportInvalidateOptionsMenu()
            r3.mNeedMenuInvalidate = r5
        L6e:
            return
    }

    void moveToState(android.support.v4.app.Fragment r7) {
            r6 = this;
            int r2 = r6.mCurState
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r0.moveToState(r1, r2, r3, r4, r5)
            return
    }

    void moveToState(android.support.v4.app.Fragment r17, int r18, int r19, int r20, boolean r21) {
            r16 = this;
            r6 = r16
            r7 = r17
            boolean r0 = r7.mAdded
            r8 = 1
            if (r0 == 0) goto L11
            boolean r0 = r7.mDetached
            if (r0 == 0) goto Le
            goto L11
        Le:
            r0 = r18
            goto L16
        L11:
            r0 = r18
            if (r0 <= r8) goto L16
            r0 = 1
        L16:
            boolean r1 = r7.mRemoving
            if (r1 == 0) goto L2c
            int r1 = r7.mState
            if (r0 <= r1) goto L2c
            int r0 = r7.mState
            if (r0 != 0) goto L2a
            boolean r0 = r17.isInBackStack()
            if (r0 == 0) goto L2a
            r0 = 1
            goto L2c
        L2a:
            int r0 = r7.mState
        L2c:
            boolean r1 = r7.mDeferStart
            r9 = 3
            r10 = 2
            if (r1 == 0) goto L3a
            int r1 = r7.mState
            if (r1 >= r9) goto L3a
            if (r0 <= r10) goto L3a
            r11 = 2
            goto L3b
        L3a:
            r11 = r0
        L3b:
            int r0 = r7.mState
            java.lang.String r12 = "FragmentManager"
            r13 = 0
            r14 = 0
            if (r0 > r11) goto L2ec
            boolean r0 = r7.mFromLayout
            if (r0 == 0) goto L4c
            boolean r0 = r7.mInLayout
            if (r0 != 0) goto L4c
            return
        L4c:
            android.view.View r0 = r17.getAnimatingAway()
            if (r0 != 0) goto L58
            android.animation.Animator r0 = r17.getAnimator()
            if (r0 == 0) goto L6c
        L58:
            r7.setAnimatingAway(r13)
            r7.setAnimator(r13)
            int r2 = r17.getStateAfterAnimating()
            r3 = 0
            r4 = 0
            r5 = 1
            r0 = r16
            r1 = r17
            r0.moveToState(r1, r2, r3, r4, r5)
        L6c:
            int r0 = r7.mState
            if (r0 == 0) goto L78
            if (r0 == r8) goto L1ae
            if (r0 == r10) goto L2a6
            if (r0 == r9) goto L2c6
            goto L436
        L78:
            if (r11 <= 0) goto L1ae
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L92
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "moveto CREATED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L92:
            android.os.Bundle r0 = r7.mSavedFragmentState
            if (r0 == 0) goto Le9
            android.os.Bundle r0 = r7.mSavedFragmentState
            android.support.v4.app.FragmentHostCallback r1 = r6.mHost
            android.content.Context r1 = r1.getContext()
            java.lang.ClassLoader r1 = r1.getClassLoader()
            r0.setClassLoader(r1)
            android.os.Bundle r0 = r7.mSavedFragmentState
            java.lang.String r1 = "android:view_state"
            android.util.SparseArray r0 = r0.getSparseParcelableArray(r1)
            r7.mSavedViewState = r0
            android.os.Bundle r0 = r7.mSavedFragmentState
            java.lang.String r1 = "android:target_state"
            android.support.v4.app.Fragment r0 = r6.getFragment(r0, r1)
            r7.mTarget = r0
            android.support.v4.app.Fragment r0 = r7.mTarget
            if (r0 == 0) goto Lc7
            android.os.Bundle r0 = r7.mSavedFragmentState
            java.lang.String r1 = "android:target_req_state"
            int r0 = r0.getInt(r1, r14)
            r7.mTargetRequestCode = r0
        Lc7:
            java.lang.Boolean r0 = r7.mSavedUserVisibleHint
            if (r0 == 0) goto Ld6
            java.lang.Boolean r0 = r7.mSavedUserVisibleHint
            boolean r0 = r0.booleanValue()
            r7.mUserVisibleHint = r0
            r7.mSavedUserVisibleHint = r13
            goto Le0
        Ld6:
            android.os.Bundle r0 = r7.mSavedFragmentState
            java.lang.String r1 = "android:user_visible_hint"
            boolean r0 = r0.getBoolean(r1, r8)
            r7.mUserVisibleHint = r0
        Le0:
            boolean r0 = r7.mUserVisibleHint
            if (r0 != 0) goto Le9
            r7.mDeferStart = r8
            if (r11 <= r10) goto Le9
            r11 = 2
        Le9:
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            r7.mHost = r0
            android.support.v4.app.Fragment r1 = r6.mParent
            r7.mParentFragment = r1
            if (r1 == 0) goto Lf6
            android.support.v4.app.FragmentManagerImpl r0 = r1.mChildFragmentManager
            goto Lfa
        Lf6:
            android.support.v4.app.FragmentManagerImpl r0 = r0.getFragmentManagerImpl()
        Lfa:
            r7.mFragmentManager = r0
            android.support.v4.app.Fragment r0 = r7.mTarget
            java.lang.String r15 = "Fragment "
            if (r0 == 0) goto L146
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r6.mActive
            android.support.v4.app.Fragment r1 = r7.mTarget
            int r1 = r1.mIndex
            java.lang.Object r0 = r0.get(r1)
            android.support.v4.app.Fragment r1 = r7.mTarget
            if (r0 != r1) goto L122
            android.support.v4.app.Fragment r0 = r7.mTarget
            int r0 = r0.mState
            if (r0 >= r8) goto L146
            android.support.v4.app.Fragment r1 = r7.mTarget
            r2 = 1
            r3 = 0
            r4 = 0
            r5 = 1
            r0 = r16
            r0.moveToState(r1, r2, r3, r4, r5)
            goto L146
        L122:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r15)
            r1.append(r7)
            java.lang.String r2 = " declared target fragment "
            r1.append(r2)
            android.support.v4.app.Fragment r2 = r7.mTarget
            r1.append(r2)
            java.lang.String r2 = " that does not belong to this FragmentManager!"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L146:
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            android.content.Context r0 = r0.getContext()
            r6.dispatchOnFragmentPreAttached(r7, r0, r14)
            r7.mCalled = r14
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            android.content.Context r0 = r0.getContext()
            r7.onAttach(r0)
            boolean r0 = r7.mCalled
            if (r0 == 0) goto L194
            android.support.v4.app.Fragment r0 = r7.mParentFragment
            if (r0 != 0) goto L168
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            r0.onAttachFragment(r7)
            goto L16d
        L168:
            android.support.v4.app.Fragment r0 = r7.mParentFragment
            r0.onAttachFragment(r7)
        L16d:
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            android.content.Context r0 = r0.getContext()
            r6.dispatchOnFragmentAttached(r7, r0, r14)
            boolean r0 = r7.mIsCreated
            if (r0 != 0) goto L18a
            android.os.Bundle r0 = r7.mSavedFragmentState
            r6.dispatchOnFragmentPreCreated(r7, r0, r14)
            android.os.Bundle r0 = r7.mSavedFragmentState
            r7.performCreate(r0)
            android.os.Bundle r0 = r7.mSavedFragmentState
            r6.dispatchOnFragmentCreated(r7, r0, r14)
            goto L191
        L18a:
            android.os.Bundle r0 = r7.mSavedFragmentState
            r7.restoreChildFragmentState(r0)
            r7.mState = r8
        L191:
            r7.mRetaining = r14
            goto L1ae
        L194:
            android.support.v4.app.SuperNotCalledException r0 = new android.support.v4.app.SuperNotCalledException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r15)
            r1.append(r7)
            java.lang.String r2 = " did not call through to super.onAttach()"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L1ae:
            r16.ensureInflatedFragmentView(r17)
            if (r11 <= r8) goto L2a6
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1cb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "moveto ACTIVITY_CREATED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L1cb:
            boolean r0 = r7.mFromLayout
            if (r0 != 0) goto L291
            int r0 = r7.mContainerId
            if (r0 == 0) goto L243
            int r0 = r7.mContainerId
            r1 = -1
            if (r0 != r1) goto L1f6
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cannot create fragment "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = " for a container view with no id"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r6.throwException(r0)
        L1f6:
            android.support.v4.app.FragmentContainer r0 = r6.mContainer
            int r1 = r7.mContainerId
            android.view.View r0 = r0.onFindViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 != 0) goto L244
            boolean r1 = r7.mRestored
            if (r1 != 0) goto L244
            android.content.res.Resources r1 = r17.getResources()     // Catch: android.content.res.Resources.NotFoundException -> L211
            int r2 = r7.mContainerId     // Catch: android.content.res.Resources.NotFoundException -> L211
            java.lang.String r1 = r1.getResourceName(r2)     // Catch: android.content.res.Resources.NotFoundException -> L211
            goto L213
        L211:
            java.lang.String r1 = "unknown"
        L213:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "No view found for id 0x"
            r3.append(r4)
            int r4 = r7.mContainerId
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r3.append(r4)
            java.lang.String r4 = " ("
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = ") for fragment "
            r3.append(r1)
            r3.append(r7)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            r6.throwException(r2)
            goto L244
        L243:
            r0 = r13
        L244:
            r7.mContainer = r0
            android.os.Bundle r1 = r7.mSavedFragmentState
            android.view.LayoutInflater r1 = r7.performGetLayoutInflater(r1)
            android.os.Bundle r2 = r7.mSavedFragmentState
            r7.performCreateView(r1, r0, r2)
            android.view.View r1 = r7.mView
            if (r1 == 0) goto L28f
            android.view.View r1 = r7.mView
            r7.mInnerView = r1
            android.view.View r1 = r7.mView
            r1.setSaveFromParentEnabled(r14)
            if (r0 == 0) goto L265
            android.view.View r1 = r7.mView
            r0.addView(r1)
        L265:
            boolean r0 = r7.mHidden
            if (r0 == 0) goto L270
            android.view.View r0 = r7.mView
            r1 = 8
            r0.setVisibility(r1)
        L270:
            android.view.View r0 = r7.mView
            android.os.Bundle r1 = r7.mSavedFragmentState
            r7.onViewCreated(r0, r1)
            android.view.View r0 = r7.mView
            android.os.Bundle r1 = r7.mSavedFragmentState
            r6.dispatchOnFragmentViewCreated(r7, r0, r1, r14)
            android.view.View r0 = r7.mView
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L28b
            android.view.ViewGroup r0 = r7.mContainer
            if (r0 == 0) goto L28b
            goto L28c
        L28b:
            r8 = 0
        L28c:
            r7.mIsNewlyAdded = r8
            goto L291
        L28f:
            r7.mInnerView = r13
        L291:
            android.os.Bundle r0 = r7.mSavedFragmentState
            r7.performActivityCreated(r0)
            android.os.Bundle r0 = r7.mSavedFragmentState
            r6.dispatchOnFragmentActivityCreated(r7, r0, r14)
            android.view.View r0 = r7.mView
            if (r0 == 0) goto L2a4
            android.os.Bundle r0 = r7.mSavedFragmentState
            r7.restoreViewState(r0)
        L2a4:
            r7.mSavedFragmentState = r13
        L2a6:
            if (r11 <= r10) goto L2c6
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L2c0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "moveto STARTED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L2c0:
            r17.performStart()
            r6.dispatchOnFragmentStarted(r7, r14)
        L2c6:
            if (r11 <= r9) goto L436
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L2e0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "moveto RESUMED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L2e0:
            r17.performResume()
            r6.dispatchOnFragmentResumed(r7, r14)
            r7.mSavedFragmentState = r13
            r7.mSavedViewState = r13
            goto L436
        L2ec:
            int r0 = r7.mState
            if (r0 <= r11) goto L436
            int r0 = r7.mState
            if (r0 == r8) goto L3c2
            if (r0 == r10) goto L33d
            if (r0 == r9) goto L31d
            r1 = 4
            if (r0 == r1) goto L2fd
            goto L436
        L2fd:
            if (r11 >= r1) goto L31d
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L317
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "movefrom RESUMED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L317:
            r17.performPause()
            r6.dispatchOnFragmentPaused(r7, r14)
        L31d:
            if (r11 >= r9) goto L33d
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L337
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "movefrom STARTED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L337:
            r17.performStop()
            r6.dispatchOnFragmentStopped(r7, r14)
        L33d:
            if (r11 >= r10) goto L3c2
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L357
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "movefrom ACTIVITY_CREATED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L357:
            android.view.View r0 = r7.mView
            if (r0 == 0) goto L36a
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            boolean r0 = r0.onShouldSaveFragmentState(r7)
            if (r0 == 0) goto L36a
            android.util.SparseArray<android.os.Parcelable> r0 = r7.mSavedViewState
            if (r0 != 0) goto L36a
            r16.saveFragmentViewState(r17)
        L36a:
            r17.performDestroyView()
            r6.dispatchOnFragmentViewDestroyed(r7, r14)
            android.view.View r0 = r7.mView
            if (r0 == 0) goto L3b3
            android.view.ViewGroup r0 = r7.mContainer
            if (r0 == 0) goto L3b3
            android.view.ViewGroup r0 = r7.mContainer
            android.view.View r1 = r7.mView
            r0.endViewTransition(r1)
            android.view.View r0 = r7.mView
            r0.clearAnimation()
            int r0 = r6.mCurState
            r1 = 0
            if (r0 <= 0) goto L3a4
            boolean r0 = r6.mDestroyed
            if (r0 != 0) goto L3a4
            android.view.View r0 = r7.mView
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L3a4
            float r0 = r7.mPostponedAlpha
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L3a4
            r0 = r19
            r2 = r20
            android.support.v4.app.FragmentManagerImpl$AnimationOrAnimator r0 = r6.loadAnimation(r7, r0, r14, r2)
            goto L3a5
        L3a4:
            r0 = r13
        L3a5:
            r7.mPostponedAlpha = r1
            if (r0 == 0) goto L3ac
            r6.animateRemoveFragment(r7, r0, r11)
        L3ac:
            android.view.ViewGroup r0 = r7.mContainer
            android.view.View r1 = r7.mView
            r0.removeView(r1)
        L3b3:
            r7.mContainer = r13
            r7.mView = r13
            r7.mViewLifecycleOwner = r13
            android.arch.lifecycle.MutableLiveData<android.arch.lifecycle.LifecycleOwner> r0 = r7.mViewLifecycleOwnerLiveData
            r0.setValue(r13)
            r7.mInnerView = r13
            r7.mInLayout = r14
        L3c2:
            if (r11 >= r8) goto L436
            boolean r0 = r6.mDestroyed
            if (r0 == 0) goto L3e9
            android.view.View r0 = r17.getAnimatingAway()
            if (r0 == 0) goto L3d9
            android.view.View r0 = r17.getAnimatingAway()
            r7.setAnimatingAway(r13)
            r0.clearAnimation()
            goto L3e9
        L3d9:
            android.animation.Animator r0 = r17.getAnimator()
            if (r0 == 0) goto L3e9
            android.animation.Animator r0 = r17.getAnimator()
            r7.setAnimator(r13)
            r0.cancel()
        L3e9:
            android.view.View r0 = r17.getAnimatingAway()
            if (r0 != 0) goto L432
            android.animation.Animator r0 = r17.getAnimator()
            if (r0 == 0) goto L3f6
            goto L432
        L3f6:
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L40e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "movefrom CREATED: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r12, r0)
        L40e:
            boolean r0 = r7.mRetaining
            if (r0 != 0) goto L419
            r17.performDestroy()
            r6.dispatchOnFragmentDestroyed(r7, r14)
            goto L41b
        L419:
            r7.mState = r14
        L41b:
            r17.performDetach()
            r6.dispatchOnFragmentDetached(r7, r14)
            if (r21 != 0) goto L436
            boolean r0 = r7.mRetaining
            if (r0 != 0) goto L42b
            r16.makeInactive(r17)
            goto L436
        L42b:
            r7.mHost = r13
            r7.mParentFragment = r13
            r7.mFragmentManager = r13
            goto L436
        L432:
            r7.setStateAfterAnimating(r11)
            goto L437
        L436:
            r8 = r11
        L437:
            int r0 = r7.mState
            if (r0 == r8) goto L468
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "moveToState: Fragment state for "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = " not updated inline; "
            r0.append(r1)
            java.lang.String r1 = "expected state "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = " found "
            r0.append(r1)
            int r1 = r7.mState
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.w(r12, r0)
            r7.mState = r8
        L468:
            return
    }

    public void noteStateNotSaved() {
            r3 = this;
            r0 = 0
            r3.mSavedNonConfig = r0
            r0 = 0
            r3.mStateSaved = r0
            r3.mStopped = r0
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mAdded
            int r1 = r1.size()
        Le:
            if (r0 >= r1) goto L20
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r3.mAdded
            java.lang.Object r2 = r2.get(r0)
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            if (r2 == 0) goto L1d
            r2.noteStateNotSaved()
        L1d:
            int r0 = r0 + 1
            goto Le
        L20:
            return
    }

    @Override
    public android.view.View onCreateView(android.view.View r13, java.lang.String r14, android.content.Context r15, android.util.AttributeSet r16) {
            r12 = this;
            r6 = r12
            r0 = r15
            r1 = r16
            java.lang.String r2 = "fragment"
            r3 = r14
            boolean r2 = r2.equals(r14)
            r3 = 0
            if (r2 != 0) goto Lf
            return r3
        Lf:
            java.lang.String r2 = "class"
            java.lang.String r2 = r1.getAttributeValue(r3, r2)
            int[] r4 = android.support.v4.app.FragmentManagerImpl.FragmentTag.Fragment
            android.content.res.TypedArray r4 = r15.obtainStyledAttributes(r1, r4)
            r5 = 0
            if (r2 != 0) goto L22
            java.lang.String r2 = r4.getString(r5)
        L22:
            r7 = r2
            r2 = -1
            r8 = 1
            int r9 = r4.getResourceId(r8, r2)
            r10 = 2
            java.lang.String r10 = r4.getString(r10)
            r4.recycle()
            android.support.v4.app.FragmentHostCallback r4 = r6.mHost
            android.content.Context r4 = r4.getContext()
            boolean r4 = android.support.v4.app.Fragment.isSupportFragmentClass(r4, r7)
            if (r4 != 0) goto L3e
            return r3
        L3e:
            if (r13 == 0) goto L44
            int r5 = r13.getId()
        L44:
            if (r5 != r2) goto L69
            if (r9 != r2) goto L69
            if (r10 == 0) goto L4b
            goto L69
        L4b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = r16.getPositionDescription()
            r2.append(r1)
            java.lang.String r1 = ": Must specify unique android:id, android:tag, or have a parent with an id for "
            r2.append(r1)
            r2.append(r7)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L69:
            if (r9 == r2) goto L70
            android.support.v4.app.Fragment r4 = r12.findFragmentById(r9)
            goto L71
        L70:
            r4 = r3
        L71:
            if (r4 != 0) goto L79
            if (r10 == 0) goto L79
            android.support.v4.app.Fragment r4 = r12.findFragmentByTag(r10)
        L79:
            if (r4 != 0) goto L81
            if (r5 == r2) goto L81
            android.support.v4.app.Fragment r4 = r12.findFragmentById(r5)
        L81:
            boolean r2 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r2 == 0) goto Laf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r11 = "onCreateView: id=0x"
            r2.append(r11)
            java.lang.String r11 = java.lang.Integer.toHexString(r9)
            r2.append(r11)
            java.lang.String r11 = " fname="
            r2.append(r11)
            r2.append(r7)
            java.lang.String r11 = " existing="
            r2.append(r11)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r11 = "FragmentManager"
            android.util.Log.v(r11, r2)
        Laf:
            if (r4 != 0) goto Lda
            android.support.v4.app.FragmentContainer r2 = r6.mContainer
            android.support.v4.app.Fragment r0 = r2.instantiate(r15, r7, r3)
            r0.mFromLayout = r8
            if (r9 == 0) goto Lbd
            r2 = r9
            goto Lbe
        Lbd:
            r2 = r5
        Lbe:
            r0.mFragmentId = r2
            r0.mContainerId = r5
            r0.mTag = r10
            r0.mInLayout = r8
            r0.mFragmentManager = r6
            android.support.v4.app.FragmentHostCallback r2 = r6.mHost
            r0.mHost = r2
            android.content.Context r2 = r2.getContext()
            android.os.Bundle r3 = r0.mSavedFragmentState
            r0.onInflate(r2, r1, r3)
            r12.addFragment(r0, r8)
            r11 = r0
            goto Lf4
        Lda:
            boolean r0 = r4.mInLayout
            if (r0 != 0) goto L140
            r4.mInLayout = r8
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            r4.mHost = r0
            boolean r0 = r4.mRetaining
            if (r0 != 0) goto Lf3
            android.support.v4.app.FragmentHostCallback r0 = r6.mHost
            android.content.Context r0 = r0.getContext()
            android.os.Bundle r2 = r4.mSavedFragmentState
            r4.onInflate(r0, r1, r2)
        Lf3:
            r11 = r4
        Lf4:
            int r0 = r6.mCurState
            if (r0 >= r8) goto L106
            boolean r0 = r11.mFromLayout
            if (r0 == 0) goto L106
            r2 = 1
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r12
            r1 = r11
            r0.moveToState(r1, r2, r3, r4, r5)
            goto L109
        L106:
            r12.moveToState(r11)
        L109:
            android.view.View r0 = r11.mView
            if (r0 == 0) goto L124
            if (r9 == 0) goto L114
            android.view.View r0 = r11.mView
            r0.setId(r9)
        L114:
            android.view.View r0 = r11.mView
            java.lang.Object r0 = r0.getTag()
            if (r0 != 0) goto L121
            android.view.View r0 = r11.mView
            r0.setTag(r10)
        L121:
            android.view.View r0 = r11.mView
            return r0
        L124:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = " did not create a view."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L140:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = r16.getPositionDescription()
            r2.append(r1)
            java.lang.String r1 = ": Duplicate id 0x"
            r2.append(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r9)
            r2.append(r1)
            java.lang.String r1 = ", tag "
            r2.append(r1)
            r2.append(r10)
            java.lang.String r1 = ", or parent id 0x"
            r2.append(r1)
            java.lang.String r1 = java.lang.Integer.toHexString(r5)
            r2.append(r1)
            java.lang.String r1 = " with another fragment for "
            r2.append(r1)
            r2.append(r7)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            r0 = 0
            android.view.View r2 = r1.onCreateView(r0, r2, r3, r4)
            return r2
    }

    public void performPendingDeferredStart(android.support.v4.app.Fragment r8) {
            r7 = this;
            boolean r0 = r8.mDeferStart
            if (r0 == 0) goto L19
            boolean r0 = r7.mExecutingActions
            if (r0 == 0) goto Lc
            r8 = 1
            r7.mHavePendingDeferredStart = r8
            return
        Lc:
            r0 = 0
            r8.mDeferStart = r0
            int r3 = r7.mCurState
            r4 = 0
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            r1.moveToState(r2, r3, r4, r5, r6)
        L19:
            return
    }

    @Override
    public void popBackStack() {
            r4 = this;
            android.support.v4.app.FragmentManagerImpl$PopBackStackState r0 = new android.support.v4.app.FragmentManagerImpl$PopBackStackState
            r1 = 0
            r2 = 0
            r3 = -1
            r0.<init>(r4, r2, r3, r1)
            r4.enqueueAction(r0, r1)
            return
    }

    @Override
    public void popBackStack(int r3, int r4) {
            r2 = this;
            if (r3 < 0) goto Ld
            android.support.v4.app.FragmentManagerImpl$PopBackStackState r0 = new android.support.v4.app.FragmentManagerImpl$PopBackStackState
            r1 = 0
            r0.<init>(r2, r1, r3, r4)
            r3 = 0
            r2.enqueueAction(r0, r3)
            return
        Ld:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Bad id: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    @Override
    public void popBackStack(@android.support.annotation.Nullable java.lang.String r3, int r4) {
            r2 = this;
            android.support.v4.app.FragmentManagerImpl$PopBackStackState r0 = new android.support.v4.app.FragmentManagerImpl$PopBackStackState
            r1 = -1
            r0.<init>(r2, r3, r1, r4)
            r3 = 0
            r2.enqueueAction(r0, r3)
            return
    }

    @Override
    public boolean popBackStackImmediate() {
            r3 = this;
            r3.checkStateLoss()
            r0 = 0
            r1 = -1
            r2 = 0
            boolean r0 = r3.popBackStackImmediate(r0, r1, r2)
            return r0
    }

    @Override
    public boolean popBackStackImmediate(int r3, int r4) {
            r2 = this;
            r2.checkStateLoss()
            r2.execPendingActions()
            if (r3 < 0) goto Le
            r0 = 0
            boolean r3 = r2.popBackStackImmediate(r0, r3, r4)
            return r3
        Le:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Bad id: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    @Override
    public boolean popBackStackImmediate(@android.support.annotation.Nullable java.lang.String r2, int r3) {
            r1 = this;
            r1.checkStateLoss()
            r0 = -1
            boolean r2 = r1.popBackStackImmediate(r2, r0, r3)
            return r2
    }

    boolean popBackStackState(java.util.ArrayList<android.support.v4.app.BackStackRecord> r6, java.util.ArrayList<java.lang.Boolean> r7, java.lang.String r8, int r9, int r10) {
            r5 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r5.mBackStack
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r2 = 1
            if (r8 != 0) goto L29
            if (r9 >= 0) goto L29
            r3 = r10 & 1
            if (r3 != 0) goto L29
            int r8 = r0.size()
            int r8 = r8 - r2
            if (r8 >= 0) goto L17
            return r1
        L17:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r9 = r5.mBackStack
            java.lang.Object r8 = r9.remove(r8)
            r6.add(r8)
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r2)
            r7.add(r6)
            goto La4
        L29:
            if (r8 != 0) goto L31
            if (r9 < 0) goto L2e
            goto L31
        L2e:
            r8 = -1
            r0 = -1
            goto L7e
        L31:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r5.mBackStack
            int r0 = r0.size()
            int r0 = r0 - r2
        L38:
            if (r0 < 0) goto L59
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r3 = r5.mBackStack
            java.lang.Object r3 = r3.get(r0)
            android.support.v4.app.BackStackRecord r3 = (android.support.v4.app.BackStackRecord) r3
            if (r8 == 0) goto L4f
            java.lang.String r4 = r3.getName()
            boolean r4 = r8.equals(r4)
            if (r4 == 0) goto L4f
            goto L59
        L4f:
            if (r9 < 0) goto L56
            int r3 = r3.mIndex
            if (r9 != r3) goto L56
            goto L59
        L56:
            int r0 = r0 + (-1)
            goto L38
        L59:
            if (r0 >= 0) goto L5c
            return r1
        L5c:
            r10 = r10 & r2
            if (r10 == 0) goto L7e
        L5f:
            int r0 = r0 + (-1)
            if (r0 < 0) goto L7e
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r10 = r5.mBackStack
            java.lang.Object r10 = r10.get(r0)
            android.support.v4.app.BackStackRecord r10 = (android.support.v4.app.BackStackRecord) r10
            if (r8 == 0) goto L77
            java.lang.String r3 = r10.getName()
            boolean r3 = r8.equals(r3)
            if (r3 != 0) goto L5f
        L77:
            if (r9 < 0) goto L7e
            int r10 = r10.mIndex
            if (r9 != r10) goto L7e
            goto L5f
        L7e:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r8 = r5.mBackStack
            int r8 = r8.size()
            int r8 = r8 - r2
            if (r0 != r8) goto L88
            return r1
        L88:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r8 = r5.mBackStack
            int r8 = r8.size()
            int r8 = r8 - r2
        L8f:
            if (r8 <= r0) goto La4
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r9 = r5.mBackStack
            java.lang.Object r9 = r9.remove(r8)
            r6.add(r9)
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r2)
            r7.add(r9)
            int r8 = r8 + (-1)
            goto L8f
        La4:
            return r2
    }

    @Override
    public void putFragment(android.os.Bundle r4, java.lang.String r5, android.support.v4.app.Fragment r6) {
            r3 = this;
            int r0 = r6.mIndex
            if (r0 >= 0) goto L22
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = " is not currently in the FragmentManager"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r3.throwException(r0)
        L22:
            int r6 = r6.mIndex
            r4.putInt(r5, r6)
            return
    }

    @Override
    public void registerFragmentLifecycleCallbacks(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r3, boolean r4) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r2.mLifecycleCallbacks
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r1 = new android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder
            r1.<init>(r3, r4)
            r0.add(r1)
            return
    }

    public void removeFragment(android.support.v4.app.Fragment r4) {
            r3 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "remove: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " nesting="
            r0.append(r1)
            int r1 = r4.mBackStackNesting
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L24:
            boolean r0 = r4.isInBackStack()
            r1 = 1
            r0 = r0 ^ r1
            boolean r2 = r4.mDetached
            if (r2 == 0) goto L30
            if (r0 == 0) goto L48
        L30:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mAdded
            monitor-enter(r0)
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r3.mAdded     // Catch: java.lang.Throwable -> L49
            r2.remove(r4)     // Catch: java.lang.Throwable -> L49
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            boolean r0 = r4.mHasMenu
            if (r0 == 0) goto L43
            boolean r0 = r4.mMenuVisible
            if (r0 == 0) goto L43
            r3.mNeedMenuInvalidate = r1
        L43:
            r0 = 0
            r4.mAdded = r0
            r4.mRemoving = r1
        L48:
            return
        L49:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            throw r4
    }

    @Override
    public void removeOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r0 = r1.mBackStackChangeListeners
            if (r0 == 0) goto L7
            r0.remove(r2)
        L7:
            return
    }

    void reportBackStackChanged() {
            r2 = this;
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r0 = r2.mBackStackChangeListeners
            if (r0 == 0) goto L1b
            r0 = 0
        L5:
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r1 = r2.mBackStackChangeListeners
            int r1 = r1.size()
            if (r0 >= r1) goto L1b
            java.util.ArrayList<android.support.v4.app.FragmentManager$OnBackStackChangedListener> r1 = r2.mBackStackChangeListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.FragmentManager$OnBackStackChangedListener r1 = (android.support.v4.app.FragmentManager.OnBackStackChangedListener) r1
            r1.onBackStackChanged()
            int r0 = r0 + 1
            goto L5
        L1b:
            return
    }

    void restoreAllState(android.os.Parcelable r13, android.support.v4.app.FragmentManagerNonConfig r14) {
            r12 = this;
            if (r13 != 0) goto L3
            return
        L3:
            android.support.v4.app.FragmentManagerState r13 = (android.support.v4.app.FragmentManagerState) r13
            android.support.v4.app.FragmentState[] r0 = r13.mActive
            if (r0 != 0) goto La
            return
        La:
            r0 = 0
            r1 = 0
            if (r14 == 0) goto Lad
            java.util.List r2 = r14.getFragments()
            java.util.List r3 = r14.getChildNonConfigs()
            java.util.List r4 = r14.getViewModelStores()
            if (r2 == 0) goto L21
            int r5 = r2.size()
            goto L22
        L21:
            r5 = 0
        L22:
            r6 = 0
        L23:
            if (r6 >= r5) goto Laf
            java.lang.Object r7 = r2.get(r6)
            android.support.v4.app.Fragment r7 = (android.support.v4.app.Fragment) r7
            boolean r8 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r8 == 0) goto L45
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "restoreAllState: re-attaching retained "
            r8.append(r9)
            r8.append(r7)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "FragmentManager"
            android.util.Log.v(r9, r8)
        L45:
            r8 = 0
        L46:
            android.support.v4.app.FragmentState[] r9 = r13.mActive
            int r9 = r9.length
            if (r8 >= r9) goto L58
            android.support.v4.app.FragmentState[] r9 = r13.mActive
            r9 = r9[r8]
            int r9 = r9.mIndex
            int r10 = r7.mIndex
            if (r9 == r10) goto L58
            int r8 = r8 + 1
            goto L46
        L58:
            android.support.v4.app.FragmentState[] r9 = r13.mActive
            int r9 = r9.length
            if (r8 != r9) goto L78
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Could not find active fragment with index "
            r10.append(r11)
            int r11 = r7.mIndex
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            r12.throwException(r9)
        L78:
            android.support.v4.app.FragmentState[] r9 = r13.mActive
            r8 = r9[r8]
            r8.mInstance = r7
            r7.mSavedViewState = r0
            r7.mBackStackNesting = r1
            r7.mInLayout = r1
            r7.mAdded = r1
            r7.mTarget = r0
            android.os.Bundle r9 = r8.mSavedFragmentState
            if (r9 == 0) goto La9
            android.os.Bundle r9 = r8.mSavedFragmentState
            android.support.v4.app.FragmentHostCallback r10 = r12.mHost
            android.content.Context r10 = r10.getContext()
            java.lang.ClassLoader r10 = r10.getClassLoader()
            r9.setClassLoader(r10)
            android.os.Bundle r9 = r8.mSavedFragmentState
            java.lang.String r10 = "android:view_state"
            android.util.SparseArray r9 = r9.getSparseParcelableArray(r10)
            r7.mSavedViewState = r9
            android.os.Bundle r8 = r8.mSavedFragmentState
            r7.mSavedFragmentState = r8
        La9:
            int r6 = r6 + 1
            goto L23
        Lad:
            r3 = r0
            r4 = r3
        Laf:
            android.util.SparseArray r2 = new android.util.SparseArray
            android.support.v4.app.FragmentState[] r5 = r13.mActive
            int r5 = r5.length
            r2.<init>(r5)
            r12.mActive = r2
            r2 = 0
        Lba:
            android.support.v4.app.FragmentState[] r5 = r13.mActive
            int r5 = r5.length
            if (r2 >= r5) goto L120
            android.support.v4.app.FragmentState[] r5 = r13.mActive
            r5 = r5[r2]
            if (r5 == 0) goto L11d
            if (r3 == 0) goto Ld5
            int r6 = r3.size()
            if (r2 >= r6) goto Ld5
            java.lang.Object r6 = r3.get(r2)
            android.support.v4.app.FragmentManagerNonConfig r6 = (android.support.v4.app.FragmentManagerNonConfig) r6
            r10 = r6
            goto Ld6
        Ld5:
            r10 = r0
        Ld6:
            if (r4 == 0) goto Le6
            int r6 = r4.size()
            if (r2 >= r6) goto Le6
            java.lang.Object r6 = r4.get(r2)
            android.arch.lifecycle.ViewModelStore r6 = (android.arch.lifecycle.ViewModelStore) r6
            r11 = r6
            goto Le7
        Le6:
            r11 = r0
        Le7:
            android.support.v4.app.FragmentHostCallback r7 = r12.mHost
            android.support.v4.app.FragmentContainer r8 = r12.mContainer
            android.support.v4.app.Fragment r9 = r12.mParent
            r6 = r5
            android.support.v4.app.Fragment r6 = r6.instantiate(r7, r8, r9, r10, r11)
            boolean r7 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r7 == 0) goto L114
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "restoreAllState: active #"
            r7.append(r8)
            r7.append(r2)
            java.lang.String r8 = ": "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "FragmentManager"
            android.util.Log.v(r8, r7)
        L114:
            android.util.SparseArray<android.support.v4.app.Fragment> r7 = r12.mActive
            int r8 = r6.mIndex
            r7.put(r8, r6)
            r5.mInstance = r0
        L11d:
            int r2 = r2 + 1
            goto Lba
        L120:
            if (r14 == 0) goto L16e
            java.util.List r14 = r14.getFragments()
            if (r14 == 0) goto L12d
            int r2 = r14.size()
            goto L12e
        L12d:
            r2 = 0
        L12e:
            r3 = 0
        L12f:
            if (r3 >= r2) goto L16e
            java.lang.Object r4 = r14.get(r3)
            android.support.v4.app.Fragment r4 = (android.support.v4.app.Fragment) r4
            int r5 = r4.mTargetIndex
            if (r5 < 0) goto L16b
            android.util.SparseArray<android.support.v4.app.Fragment> r5 = r12.mActive
            int r6 = r4.mTargetIndex
            java.lang.Object r5 = r5.get(r6)
            android.support.v4.app.Fragment r5 = (android.support.v4.app.Fragment) r5
            r4.mTarget = r5
            android.support.v4.app.Fragment r5 = r4.mTarget
            if (r5 != 0) goto L16b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Re-attaching retained fragment "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r6 = " target no longer exists: "
            r5.append(r6)
            int r4 = r4.mTargetIndex
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "FragmentManager"
            android.util.Log.w(r5, r4)
        L16b:
            int r3 = r3 + 1
            goto L12f
        L16e:
            java.util.ArrayList<android.support.v4.app.Fragment> r14 = r12.mAdded
            r14.clear()
            int[] r14 = r13.mAdded
            if (r14 == 0) goto L1ec
            r14 = 0
        L178:
            int[] r2 = r13.mAdded
            int r2 = r2.length
            if (r14 >= r2) goto L1ec
            android.util.SparseArray<android.support.v4.app.Fragment> r2 = r12.mActive
            int[] r3 = r13.mAdded
            r3 = r3[r14]
            java.lang.Object r2 = r2.get(r3)
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            if (r2 != 0) goto L1a8
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "No instantiated fragment for index #"
            r4.append(r5)
            int[] r5 = r13.mAdded
            r5 = r5[r14]
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            r12.throwException(r3)
        L1a8:
            r3 = 1
            r2.mAdded = r3
            boolean r3 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r3 == 0) goto L1cd
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "restoreAllState: added #"
            r3.append(r4)
            r3.append(r14)
            java.lang.String r4 = ": "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "FragmentManager"
            android.util.Log.v(r4, r3)
        L1cd:
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r12.mAdded
            boolean r3 = r3.contains(r2)
            if (r3 != 0) goto L1e4
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r12.mAdded
            monitor-enter(r3)
            java.util.ArrayList<android.support.v4.app.Fragment> r4 = r12.mAdded     // Catch: java.lang.Throwable -> L1e1
            r4.add(r2)     // Catch: java.lang.Throwable -> L1e1
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1e1
            int r14 = r14 + 1
            goto L178
        L1e1:
            r13 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1e1
            throw r13
        L1e4:
            java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
            java.lang.String r14 = "Already added!"
            r13.<init>(r14)
            throw r13
        L1ec:
            android.support.v4.app.BackStackState[] r14 = r13.mBackStack
            if (r14 == 0) goto L259
            java.util.ArrayList r14 = new java.util.ArrayList
            android.support.v4.app.BackStackState[] r0 = r13.mBackStack
            int r0 = r0.length
            r14.<init>(r0)
            r12.mBackStack = r14
            r14 = 0
        L1fb:
            android.support.v4.app.BackStackState[] r0 = r13.mBackStack
            int r0 = r0.length
            if (r14 >= r0) goto L25b
            android.support.v4.app.BackStackState[] r0 = r13.mBackStack
            r0 = r0[r14]
            android.support.v4.app.BackStackRecord r0 = r0.instantiate(r12)
            boolean r2 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r2 == 0) goto L248
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "restoreAllState: back stack #"
            r2.append(r3)
            r2.append(r14)
            java.lang.String r3 = " (index "
            r2.append(r3)
            int r3 = r0.mIndex
            r2.append(r3)
            java.lang.String r3 = "): "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "FragmentManager"
            android.util.Log.v(r3, r2)
            android.support.v4.util.LogWriter r2 = new android.support.v4.util.LogWriter
            java.lang.String r3 = "FragmentManager"
            r2.<init>(r3)
            java.io.PrintWriter r3 = new java.io.PrintWriter
            r3.<init>(r2)
            java.lang.String r2 = "  "
            r0.dump(r2, r3, r1)
            r3.close()
        L248:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r2 = r12.mBackStack
            r2.add(r0)
            int r2 = r0.mIndex
            if (r2 < 0) goto L256
            int r2 = r0.mIndex
            r12.setBackStackIndex(r2, r0)
        L256:
            int r14 = r14 + 1
            goto L1fb
        L259:
            r12.mBackStack = r0
        L25b:
            int r14 = r13.mPrimaryNavActiveIndex
            if (r14 < 0) goto L26b
            android.util.SparseArray<android.support.v4.app.Fragment> r14 = r12.mActive
            int r0 = r13.mPrimaryNavActiveIndex
            java.lang.Object r14 = r14.get(r0)
            android.support.v4.app.Fragment r14 = (android.support.v4.app.Fragment) r14
            r12.mPrimaryNav = r14
        L26b:
            int r13 = r13.mNextFragmentIndex
            r12.mNextFragmentIndex = r13
            return
    }

    android.support.v4.app.FragmentManagerNonConfig retainNonConfig() {
            r1 = this;
            android.support.v4.app.FragmentManagerNonConfig r0 = r1.mSavedNonConfig
            setRetaining(r0)
            android.support.v4.app.FragmentManagerNonConfig r0 = r1.mSavedNonConfig
            return r0
    }

    android.os.Parcelable saveAllState() {
            r13 = this;
            r13.forcePostponedTransactions()
            r13.endAnimatingAwayFragments()
            r13.execPendingActions()
            r0 = 1
            r13.mStateSaved = r0
            r1 = 0
            r13.mSavedNonConfig = r1
            android.util.SparseArray<android.support.v4.app.Fragment> r2 = r13.mActive
            if (r2 == 0) goto L1bf
            int r2 = r2.size()
            if (r2 > 0) goto L1b
            goto L1bf
        L1b:
            android.util.SparseArray<android.support.v4.app.Fragment> r2 = r13.mActive
            int r2 = r2.size()
            android.support.v4.app.FragmentState[] r3 = new android.support.v4.app.FragmentState[r2]
            r4 = 0
            r5 = 0
            r6 = 0
        L26:
            java.lang.String r7 = " has cleared index: "
            java.lang.String r8 = "Failure saving state: active "
            java.lang.String r9 = ": "
            java.lang.String r10 = "FragmentManager"
            if (r5 >= r2) goto Lea
            android.util.SparseArray<android.support.v4.app.Fragment> r11 = r13.mActive
            java.lang.Object r11 = r11.valueAt(r5)
            android.support.v4.app.Fragment r11 = (android.support.v4.app.Fragment) r11
            if (r11 == 0) goto Le6
            int r6 = r11.mIndex
            if (r6 >= 0) goto L5d
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r8)
            r12.append(r11)
            r12.append(r7)
            int r7 = r11.mIndex
            r12.append(r7)
            java.lang.String r7 = r12.toString()
            r6.<init>(r7)
            r13.throwException(r6)
        L5d:
            android.support.v4.app.FragmentState r6 = new android.support.v4.app.FragmentState
            r6.<init>(r11)
            r3[r5] = r6
            int r7 = r11.mState
            if (r7 <= 0) goto Lc1
            android.os.Bundle r7 = r6.mSavedFragmentState
            if (r7 != 0) goto Lc1
            android.os.Bundle r7 = r13.saveFragmentBasicState(r11)
            r6.mSavedFragmentState = r7
            android.support.v4.app.Fragment r7 = r11.mTarget
            if (r7 == 0) goto Lc5
            android.support.v4.app.Fragment r7 = r11.mTarget
            int r7 = r7.mIndex
            if (r7 >= 0) goto L9f
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r12 = "Failure saving state: "
            r8.append(r12)
            r8.append(r11)
            java.lang.String r12 = " has target not in fragment manager: "
            r8.append(r12)
            android.support.v4.app.Fragment r12 = r11.mTarget
            r8.append(r12)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            r13.throwException(r7)
        L9f:
            android.os.Bundle r7 = r6.mSavedFragmentState
            if (r7 != 0) goto Laa
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            r6.mSavedFragmentState = r7
        Laa:
            android.os.Bundle r7 = r6.mSavedFragmentState
            android.support.v4.app.Fragment r8 = r11.mTarget
            java.lang.String r12 = "android:target_state"
            r13.putFragment(r7, r12, r8)
            int r7 = r11.mTargetRequestCode
            if (r7 == 0) goto Lc5
            android.os.Bundle r7 = r6.mSavedFragmentState
            int r8 = r11.mTargetRequestCode
            java.lang.String r12 = "android:target_req_state"
            r7.putInt(r12, r8)
            goto Lc5
        Lc1:
            android.os.Bundle r7 = r11.mSavedFragmentState
            r6.mSavedFragmentState = r7
        Lc5:
            boolean r7 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r7 == 0) goto Le5
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Saved state of "
            r7.append(r8)
            r7.append(r11)
            r7.append(r9)
            android.os.Bundle r6 = r6.mSavedFragmentState
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            android.util.Log.v(r10, r6)
        Le5:
            r6 = 1
        Le6:
            int r5 = r5 + 1
            goto L26
        Lea:
            if (r6 != 0) goto Lf6
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto Lf5
            java.lang.String r0 = "saveAllState: no fragments!"
            android.util.Log.v(r10, r0)
        Lf5:
            return r1
        Lf6:
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r13.mAdded
            int r0 = r0.size()
            if (r0 <= 0) goto L15f
            int[] r2 = new int[r0]
            r5 = 0
        L101:
            if (r5 >= r0) goto L160
            java.util.ArrayList<android.support.v4.app.Fragment> r6 = r13.mAdded
            java.lang.Object r6 = r6.get(r5)
            android.support.v4.app.Fragment r6 = (android.support.v4.app.Fragment) r6
            int r6 = r6.mIndex
            r2[r5] = r6
            r6 = r2[r5]
            if (r6 >= 0) goto L138
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r8)
            java.util.ArrayList<android.support.v4.app.Fragment> r12 = r13.mAdded
            java.lang.Object r12 = r12.get(r5)
            r11.append(r12)
            r11.append(r7)
            r12 = r2[r5]
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            r6.<init>(r11)
            r13.throwException(r6)
        L138:
            boolean r6 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r6 == 0) goto L15c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r11 = "saveAllState: adding fragment #"
            r6.append(r11)
            r6.append(r5)
            r6.append(r9)
            java.util.ArrayList<android.support.v4.app.Fragment> r11 = r13.mAdded
            java.lang.Object r11 = r11.get(r5)
            r6.append(r11)
            java.lang.String r6 = r6.toString()
            android.util.Log.v(r10, r6)
        L15c:
            int r5 = r5 + 1
            goto L101
        L15f:
            r2 = r1
        L160:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r13.mBackStack
            if (r0 == 0) goto L1a4
            int r0 = r0.size()
            if (r0 <= 0) goto L1a4
            android.support.v4.app.BackStackState[] r1 = new android.support.v4.app.BackStackState[r0]
        L16c:
            if (r4 >= r0) goto L1a4
            android.support.v4.app.BackStackState r5 = new android.support.v4.app.BackStackState
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r6 = r13.mBackStack
            java.lang.Object r6 = r6.get(r4)
            android.support.v4.app.BackStackRecord r6 = (android.support.v4.app.BackStackRecord) r6
            r5.<init>(r6)
            r1[r4] = r5
            boolean r5 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r5 == 0) goto L1a1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "saveAllState: adding back stack #"
            r5.append(r6)
            r5.append(r4)
            r5.append(r9)
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r6 = r13.mBackStack
            java.lang.Object r6 = r6.get(r4)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.v(r10, r5)
        L1a1:
            int r4 = r4 + 1
            goto L16c
        L1a4:
            android.support.v4.app.FragmentManagerState r0 = new android.support.v4.app.FragmentManagerState
            r0.<init>()
            r0.mActive = r3
            r0.mAdded = r2
            r0.mBackStack = r1
            android.support.v4.app.Fragment r1 = r13.mPrimaryNav
            if (r1 == 0) goto L1b7
            int r1 = r1.mIndex
            r0.mPrimaryNavActiveIndex = r1
        L1b7:
            int r1 = r13.mNextFragmentIndex
            r0.mNextFragmentIndex = r1
            r13.saveNonConfig()
            return r0
        L1bf:
            return r1
    }

    android.os.Bundle saveFragmentBasicState(android.support.v4.app.Fragment r4) {
            r3 = this;
            android.os.Bundle r0 = r3.mStateBundle
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r3.mStateBundle = r0
        Lb:
            android.os.Bundle r0 = r3.mStateBundle
            r4.performSaveInstanceState(r0)
            android.os.Bundle r0 = r3.mStateBundle
            r1 = 0
            r3.dispatchOnFragmentSaveInstanceState(r4, r0, r1)
            android.os.Bundle r0 = r3.mStateBundle
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 != 0) goto L24
            android.os.Bundle r0 = r3.mStateBundle
            r3.mStateBundle = r1
            goto L25
        L24:
            r0 = r1
        L25:
            android.view.View r1 = r4.mView
            if (r1 == 0) goto L2c
            r3.saveFragmentViewState(r4)
        L2c:
            android.util.SparseArray<android.os.Parcelable> r1 = r4.mSavedViewState
            if (r1 == 0) goto L3e
            if (r0 != 0) goto L37
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
        L37:
            android.util.SparseArray<android.os.Parcelable> r1 = r4.mSavedViewState
            java.lang.String r2 = "android:view_state"
            r0.putSparseParcelableArray(r2, r1)
        L3e:
            boolean r1 = r4.mUserVisibleHint
            if (r1 != 0) goto L50
            if (r0 != 0) goto L49
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
        L49:
            boolean r4 = r4.mUserVisibleHint
            java.lang.String r1 = "android:user_visible_hint"
            r0.putBoolean(r1, r4)
        L50:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment.SavedState saveFragmentInstanceState(android.support.v4.app.Fragment r4) {
            r3 = this;
            int r0 = r4.mIndex
            if (r0 >= 0) goto L22
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " is not currently in the FragmentManager"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r3.throwException(r0)
        L22:
            int r0 = r4.mState
            r1 = 0
            if (r0 <= 0) goto L32
            android.os.Bundle r4 = r3.saveFragmentBasicState(r4)
            if (r4 == 0) goto L32
            android.support.v4.app.Fragment$SavedState r1 = new android.support.v4.app.Fragment$SavedState
            r1.<init>(r4)
        L32:
            return r1
    }

    void saveFragmentViewState(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.view.View r0 = r3.mInnerView
            if (r0 != 0) goto L5
            return
        L5:
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mStateArray
            if (r0 != 0) goto L11
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.mStateArray = r0
            goto L14
        L11:
            r0.clear()
        L14:
            android.view.View r0 = r3.mInnerView
            android.util.SparseArray<android.os.Parcelable> r1 = r2.mStateArray
            r0.saveHierarchyState(r1)
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mStateArray
            int r0 = r0.size()
            if (r0 <= 0) goto L2a
            android.util.SparseArray<android.os.Parcelable> r0 = r2.mStateArray
            r3.mSavedViewState = r0
            r3 = 0
            r2.mStateArray = r3
        L2a:
            return
    }

    void saveNonConfig() {
            r9 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r9.mActive
            r1 = 0
            if (r0 == 0) goto La2
            r0 = 0
            r3 = r1
            r4 = r3
            r5 = r4
            r2 = 0
        La:
            android.util.SparseArray<android.support.v4.app.Fragment> r6 = r9.mActive
            int r6 = r6.size()
            if (r2 >= r6) goto La5
            android.util.SparseArray<android.support.v4.app.Fragment> r6 = r9.mActive
            java.lang.Object r6 = r6.valueAt(r2)
            android.support.v4.app.Fragment r6 = (android.support.v4.app.Fragment) r6
            if (r6 == 0) goto L9e
            boolean r7 = r6.mRetainInstance
            if (r7 == 0) goto L50
            if (r3 != 0) goto L27
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L27:
            r3.add(r6)
            android.support.v4.app.Fragment r7 = r6.mTarget
            if (r7 == 0) goto L33
            android.support.v4.app.Fragment r7 = r6.mTarget
            int r7 = r7.mIndex
            goto L34
        L33:
            r7 = -1
        L34:
            r6.mTargetIndex = r7
            boolean r7 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r7 == 0) goto L50
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "retainNonConfig: keeping retained "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "FragmentManager"
            android.util.Log.v(r8, r7)
        L50:
            android.support.v4.app.FragmentManagerImpl r7 = r6.mChildFragmentManager
            if (r7 == 0) goto L5e
            android.support.v4.app.FragmentManagerImpl r7 = r6.mChildFragmentManager
            r7.saveNonConfig()
            android.support.v4.app.FragmentManagerImpl r7 = r6.mChildFragmentManager
            android.support.v4.app.FragmentManagerNonConfig r7 = r7.mSavedNonConfig
            goto L60
        L5e:
            android.support.v4.app.FragmentManagerNonConfig r7 = r6.mChildNonConfig
        L60:
            if (r4 != 0) goto L78
            if (r7 == 0) goto L78
            java.util.ArrayList r4 = new java.util.ArrayList
            android.util.SparseArray<android.support.v4.app.Fragment> r8 = r9.mActive
            int r8 = r8.size()
            r4.<init>(r8)
            r8 = 0
        L70:
            if (r8 >= r2) goto L78
            r4.add(r1)
            int r8 = r8 + 1
            goto L70
        L78:
            if (r4 == 0) goto L7d
            r4.add(r7)
        L7d:
            if (r5 != 0) goto L97
            android.arch.lifecycle.ViewModelStore r7 = r6.mViewModelStore
            if (r7 == 0) goto L97
            java.util.ArrayList r5 = new java.util.ArrayList
            android.util.SparseArray<android.support.v4.app.Fragment> r7 = r9.mActive
            int r7 = r7.size()
            r5.<init>(r7)
            r7 = 0
        L8f:
            if (r7 >= r2) goto L97
            r5.add(r1)
            int r7 = r7 + 1
            goto L8f
        L97:
            if (r5 == 0) goto L9e
            android.arch.lifecycle.ViewModelStore r6 = r6.mViewModelStore
            r5.add(r6)
        L9e:
            int r2 = r2 + 1
            goto La
        La2:
            r3 = r1
            r4 = r3
            r5 = r4
        La5:
            if (r3 != 0) goto Lae
            if (r4 != 0) goto Lae
            if (r5 != 0) goto Lae
            r9.mSavedNonConfig = r1
            goto Lb5
        Lae:
            android.support.v4.app.FragmentManagerNonConfig r0 = new android.support.v4.app.FragmentManagerNonConfig
            r0.<init>(r3, r4, r5)
            r9.mSavedNonConfig = r0
        Lb5:
            return
    }

    void scheduleCommit() {
            r4 = this;
            monitor-enter(r4)
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r4.mPostponedTransactions     // Catch: java.lang.Throwable -> L3b
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L11
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$StartEnterTransitionListener> r0 = r4.mPostponedTransactions     // Catch: java.lang.Throwable -> L3b
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L3b
            if (r0 != 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r3 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3b
            if (r3 == 0) goto L1f
            java.util.ArrayList<android.support.v4.app.FragmentManagerImpl$OpGenerator> r3 = r4.mPendingActions     // Catch: java.lang.Throwable -> L3b
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L3b
            if (r3 != r2) goto L1f
            r1 = 1
        L1f:
            if (r0 != 0) goto L23
            if (r1 == 0) goto L39
        L23:
            android.support.v4.app.FragmentHostCallback r0 = r4.mHost     // Catch: java.lang.Throwable -> L3b
            android.os.Handler r0 = r0.getHandler()     // Catch: java.lang.Throwable -> L3b
            java.lang.Runnable r1 = r4.mExecCommit     // Catch: java.lang.Throwable -> L3b
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L3b
            android.support.v4.app.FragmentHostCallback r0 = r4.mHost     // Catch: java.lang.Throwable -> L3b
            android.os.Handler r0 = r0.getHandler()     // Catch: java.lang.Throwable -> L3b
            java.lang.Runnable r1 = r4.mExecCommit     // Catch: java.lang.Throwable -> L3b
            r0.post(r1)     // Catch: java.lang.Throwable -> L3b
        L39:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L3b
            throw r0
    }

    public void setBackStackIndex(int r5, android.support.v4.app.BackStackRecord r6) {
            r4 = this;
            monitor-enter(r4)
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L9e
            if (r0 != 0) goto Lc
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L9e
            r0.<init>()     // Catch: java.lang.Throwable -> L9e
            r4.mBackStackIndices = r0     // Catch: java.lang.Throwable -> L9e
        Lc:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L9e
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9e
            if (r5 >= r0) goto L3c
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L36
            java.lang.String r0 = "FragmentManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = "Setting back stack index "
            r1.append(r2)     // Catch: java.lang.Throwable -> L9e
            r1.append(r5)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = " to "
            r1.append(r2)     // Catch: java.lang.Throwable -> L9e
            r1.append(r6)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L9e
            android.util.Log.v(r0, r1)     // Catch: java.lang.Throwable -> L9e
        L36:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r0 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L9e
            r0.set(r5, r6)     // Catch: java.lang.Throwable -> L9e
            goto L9c
        L3c:
            if (r0 >= r5) goto L75
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r1 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L9e
            r2 = 0
            r1.add(r2)     // Catch: java.lang.Throwable -> L9e
            java.util.ArrayList<java.lang.Integer> r1 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L9e
            if (r1 != 0) goto L4f
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            r4.mAvailBackStackIndices = r1     // Catch: java.lang.Throwable -> L9e
        L4f:
            boolean r1 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L69
            java.lang.String r1 = "FragmentManager"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r2.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "Adding available back stack index "
            r2.append(r3)     // Catch: java.lang.Throwable -> L9e
            r2.append(r0)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L9e
            android.util.Log.v(r1, r2)     // Catch: java.lang.Throwable -> L9e
        L69:
            java.util.ArrayList<java.lang.Integer> r1 = r4.mAvailBackStackIndices     // Catch: java.lang.Throwable -> L9e
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L9e
            r1.add(r2)     // Catch: java.lang.Throwable -> L9e
            int r0 = r0 + 1
            goto L3c
        L75:
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L97
            java.lang.String r0 = "FragmentManager"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r1.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r2 = "Adding back stack index "
            r1.append(r2)     // Catch: java.lang.Throwable -> L9e
            r1.append(r5)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r5 = " with "
            r1.append(r5)     // Catch: java.lang.Throwable -> L9e
            r1.append(r6)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L9e
            android.util.Log.v(r0, r5)     // Catch: java.lang.Throwable -> L9e
        L97:
            java.util.ArrayList<android.support.v4.app.BackStackRecord> r5 = r4.mBackStackIndices     // Catch: java.lang.Throwable -> L9e
            r5.add(r6)     // Catch: java.lang.Throwable -> L9e
        L9c:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L9e
            return
        L9e:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L9e
            throw r5
    }

    public void setPrimaryNavigationFragment(android.support.v4.app.Fragment r4) {
            r3 = this;
            if (r4 == 0) goto L36
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r3.mActive
            int r1 = r4.mIndex
            java.lang.Object r0 = r0.get(r1)
            if (r0 != r4) goto L17
            android.support.v4.app.FragmentHostCallback r0 = r4.mHost
            if (r0 == 0) goto L36
            android.support.v4.app.FragmentManager r0 = r4.getFragmentManager()
            if (r0 != r3) goto L17
            goto L36
        L17:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Fragment "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " is not an active fragment of FragmentManager "
            r1.append(r4)
            r1.append(r3)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L36:
            r3.mPrimaryNav = r4
            return
    }

    public void showFragment(android.support.v4.app.Fragment r3) {
            r2 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "show: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            boolean r0 = r3.mHidden
            if (r0 == 0) goto L27
            r0 = 0
            r3.mHidden = r0
            boolean r0 = r3.mHiddenChanged
            r0 = r0 ^ 1
            r3.mHiddenChanged = r0
        L27:
            return
    }

    void startPendingDeferredFragments() {
            r2 = this;
            android.util.SparseArray<android.support.v4.app.Fragment> r0 = r2.mActive
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
        L6:
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r2.mActive
            int r1 = r1.size()
            if (r0 >= r1) goto L1e
            android.util.SparseArray<android.support.v4.app.Fragment> r1 = r2.mActive
            java.lang.Object r1 = r1.valueAt(r0)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 == 0) goto L1b
            r2.performPendingDeferredStart(r1)
        L1b:
            int r0 = r0 + 1
            goto L6
        L1e:
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "FragmentManager{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " in "
            r0.append(r1)
            android.support.v4.app.Fragment r1 = r2.mParent
            if (r1 == 0) goto L24
            android.support.v4.util.DebugUtils.buildShortClassTag(r1, r0)
            goto L29
        L24:
            android.support.v4.app.FragmentHostCallback r1 = r2.mHost
            android.support.v4.util.DebugUtils.buildShortClassTag(r1, r0)
        L29:
            java.lang.String r1 = "}}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void unregisterFragmentLifecycleCallbacks(android.support.v4.app.FragmentManager.FragmentLifecycleCallbacks r5) {
            r4 = this;
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r0 = r4.mLifecycleCallbacks
            monitor-enter(r0)
            r1 = 0
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r2 = r4.mLifecycleCallbacks     // Catch: java.lang.Throwable -> L23
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L23
        La:
            if (r1 >= r2) goto L21
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r3 = r4.mLifecycleCallbacks     // Catch: java.lang.Throwable -> L23
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L23
            android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder r3 = (android.support.v4.app.FragmentManagerImpl.FragmentLifecycleCallbacksHolder) r3     // Catch: java.lang.Throwable -> L23
            android.support.v4.app.FragmentManager$FragmentLifecycleCallbacks r3 = r3.mCallback     // Catch: java.lang.Throwable -> L23
            if (r3 != r5) goto L1e
            java.util.concurrent.CopyOnWriteArrayList<android.support.v4.app.FragmentManagerImpl$FragmentLifecycleCallbacksHolder> r5 = r4.mLifecycleCallbacks     // Catch: java.lang.Throwable -> L23
            r5.remove(r1)     // Catch: java.lang.Throwable -> L23
            goto L21
        L1e:
            int r1 = r1 + 1
            goto La
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r5
    }
}
