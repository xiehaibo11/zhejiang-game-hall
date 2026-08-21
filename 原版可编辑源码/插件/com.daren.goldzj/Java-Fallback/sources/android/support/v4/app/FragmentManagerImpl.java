package android.support.v4.app;

import android.R;
import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.PropertyValuesHolder;
import android.animation.ValueAnimator;
import android.arch.lifecycle.ViewModelStore;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.os.Build;
import android.os.Bundle;
import android.os.Looper;
import android.os.Parcelable;
import android.support.annotation.CallSuper;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.os.EnvironmentCompat;
import android.support.v4.util.ArraySet;
import android.support.v4.util.DebugUtils;
import android.support.v4.util.LogWriter;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AlphaAnimation;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.AnimationUtils;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import android.view.animation.ScaleAnimation;
import android.view.animation.Transformation;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

final class FragmentManagerImpl extends FragmentManager implements LayoutInflater.Factory2 {
    static final Interpolator ACCELERATE_CUBIC = null;
    static final Interpolator ACCELERATE_QUINT = null;
    static final int ANIM_DUR = 220;
    public static final int ANIM_STYLE_CLOSE_ENTER = 3;
    public static final int ANIM_STYLE_CLOSE_EXIT = 4;
    public static final int ANIM_STYLE_FADE_ENTER = 5;
    public static final int ANIM_STYLE_FADE_EXIT = 6;
    public static final int ANIM_STYLE_OPEN_ENTER = 1;
    public static final int ANIM_STYLE_OPEN_EXIT = 2;
    static boolean DEBUG = false;
    static final Interpolator DECELERATE_CUBIC = null;
    static final Interpolator DECELERATE_QUINT = null;
    static final String TAG = "FragmentManager";
    static final String TARGET_REQUEST_CODE_STATE_TAG = "android:target_req_state";
    static final String TARGET_STATE_TAG = "android:target_state";
    static final String USER_VISIBLE_HINT_TAG = "android:user_visible_hint";
    static final String VIEW_STATE_TAG = "android:view_state";
    static Field sAnimationListenerField;
    SparseArray<Fragment> mActive;
    final ArrayList<Fragment> mAdded;
    ArrayList<Integer> mAvailBackStackIndices;
    ArrayList<BackStackRecord> mBackStack;
    ArrayList<FragmentManager.OnBackStackChangedListener> mBackStackChangeListeners;
    ArrayList<BackStackRecord> mBackStackIndices;
    FragmentContainer mContainer;
    ArrayList<Fragment> mCreatedMenus;
    int mCurState;
    boolean mDestroyed;
    Runnable mExecCommit;
    boolean mExecutingActions;
    boolean mHavePendingDeferredStart;
    FragmentHostCallback mHost;
    private final CopyOnWriteArrayList<FragmentLifecycleCallbacksHolder> mLifecycleCallbacks;
    boolean mNeedMenuInvalidate;
    int mNextFragmentIndex;
    String mNoTransactionsBecause;
    Fragment mParent;
    ArrayList<OpGenerator> mPendingActions;
    ArrayList<StartEnterTransitionListener> mPostponedTransactions;

    @Nullable
    Fragment mPrimaryNav;
    FragmentManagerNonConfig mSavedNonConfig;
    SparseArray<Parcelable> mStateArray;
    Bundle mStateBundle;
    boolean mStateSaved;
    boolean mStopped;
    ArrayList<Fragment> mTmpAddedFragments;
    ArrayList<Boolean> mTmpIsPop;
    ArrayList<BackStackRecord> mTmpRecords;

    private static class AnimateOnHWLayerIfNeededListener extends AnimationListenerWrapper {
        View mView;

        AnimateOnHWLayerIfNeededListener(View r1, Animation.AnimationListener r2) {
            super(r2);
            this.mView = r1;
        }

        @Override
        @CallSuper
        public void onAnimationEnd(Animation r4) {
            if (ViewCompat.isAttachedToWindow(this.mView) == false) goto L5;
        L8:
            this.mView.post(new 1(this));
        L9:
            super.onAnimationEnd(r4);
            return;
        L5:
            if (Build.VERSION.SDK_INT >= 24) goto L8;
            this.mView.setLayerType(0, null);
            goto L9
        }
    }

    private static class AnimationListenerWrapper implements Animation.AnimationListener {
        private final Animation.AnimationListener mWrapped;

        AnimationListenerWrapper(Animation.AnimationListener r1) {
            this.mWrapped = r1;
        }

        @Override
        @CallSuper
        public void onAnimationStart(Animation r2) {
            Animation.AnimationListener r0 = this.mWrapped;
            if (r0 == null) goto L6;
            r0.onAnimationStart(r2);
            return;
        }

        @Override
        @CallSuper
        public void onAnimationEnd(Animation r2) {
            Animation.AnimationListener r0 = this.mWrapped;
            if (r0 == null) goto L6;
            r0.onAnimationEnd(r2);
            return;
        }

        @Override
        @CallSuper
        public void onAnimationRepeat(Animation r2) {
            Animation.AnimationListener r0 = this.mWrapped;
            if (r0 == null) goto L6;
            r0.onAnimationRepeat(r2);
            return;
        }
    }

    private static class AnimationOrAnimator {
        public final Animation animation;
        public final Animator animator;

        AnimationOrAnimator(Animation r2) {
            this.animation = r2;
            this.animator = null;
            if (r2 == null) goto L6;
            return;
        L6:
            throw new IllegalStateException("Animation cannot be null");
        }

        AnimationOrAnimator(Animator r2) {
            this.animation = null;
            this.animator = r2;
            if (r2 == null) goto L6;
            return;
        L6:
            throw new IllegalStateException("Animator cannot be null");
        }
    }

    private static class AnimatorOnHWLayerIfNeededListener extends AnimatorListenerAdapter {
        View mView;

        AnimatorOnHWLayerIfNeededListener(View r1) {
            this.mView = r1;
        }

        @Override
        public void onAnimationStart(Animator r3) {
            this.mView.setLayerType(2, null);
        }

        @Override
        public void onAnimationEnd(Animator r4) {
            this.mView.setLayerType(0, null);
            r4.removeListener(this);
        }
    }

    private static class EndViewTransitionAnimator extends AnimationSet implements Runnable {
        private boolean mAnimating;
        private final View mChild;
        private boolean mEnded;
        private final ViewGroup mParent;
        private boolean mTransitionEnded;

        EndViewTransitionAnimator(@NonNull Animation r2, @NonNull ViewGroup r3, @NonNull View r4) {
            super(false);
            this.mAnimating = true;
            this.mParent = r3;
            this.mChild = r4;
            addAnimation(r2);
            this.mParent.post(this);
        }

        @Override
        public boolean getTransformation(long r3, Transformation r5) {
            this.mAnimating = true;
            if (this.mEnded == false) goto L7;
            return !this.mTransitionEnded;
        L7:
            if (super.getTransformation(r3, r5) == true) goto L9;
            this.mEnded = true;
            OneShotPreDrawListener.add(this.mParent, this);
        L9:
            return true;
        }

        @Override
        public boolean getTransformation(long r3, Transformation r5, float r6) {
            this.mAnimating = true;
            if (this.mEnded == false) goto L7;
            return !this.mTransitionEnded;
        L7:
            if (super.getTransformation(r3, r5, r6) == true) goto L9;
            this.mEnded = true;
            OneShotPreDrawListener.add(this.mParent, this);
        L9:
            return true;
        }

        @Override
        public void run() {
            if (this.mEnded == false) goto L5;
        L7:
            this.mParent.endViewTransition(this.mChild);
            this.mTransitionEnded = true;
            return;
        L5:
            if (this.mAnimating == false) goto L7;
            this.mAnimating = false;
            this.mParent.post(this);
        }
    }

    private static final class FragmentLifecycleCallbacksHolder {
        final FragmentManager.FragmentLifecycleCallbacks mCallback;
        final boolean mRecursive;

        FragmentLifecycleCallbacksHolder(FragmentManager.FragmentLifecycleCallbacks r1, boolean r2) {
            this.mCallback = r1;
            this.mRecursive = r2;
        }
    }

    static class FragmentTag {
        public static final int[] Fragment = null;
        public static final int Fragment_id = 1;
        public static final int Fragment_name = 0;
        public static final int Fragment_tag = 2;

        static {
            Fragment = new int[]{R.attr.name, R.attr.id, R.attr.tag};
        }

        private FragmentTag() {
        }
    }

    interface OpGenerator {
        boolean generateOps(ArrayList<BackStackRecord> r1, ArrayList<Boolean> r2);
    }

    private class PopBackStackState implements OpGenerator {
        final int mFlags;
        final int mId;
        final String mName;
        final FragmentManagerImpl this$0;

        PopBackStackState(FragmentManagerImpl r1, String r2, int r3, int r4) {
            this.this$0 = r1;
            this.mName = r2;
            this.mId = r3;
            this.mFlags = r4;
        }

        @Override
        public boolean generateOps(ArrayList<BackStackRecord> r7, ArrayList<Boolean> r8) {
            if (this.this$0.mPrimaryNav == null) goto L15;
            if (this.mId >= 0) goto L15;
            if (this.mName != null) goto L15;
            FragmentManager r0 = this.this$0.mPrimaryNav.peekChildFragmentManager();
            if (r0 == null) goto L15;
            if (r0.popBackStackImmediate() == false) goto L15;
            return false;
        L15:
            return this.this$0.popBackStackState(r7, r8, this.mName, this.mId, this.mFlags);
        }
    }

    static class StartEnterTransitionListener implements Fragment.OnStartEnterTransitionListener {
        final boolean mIsBack;
        private int mNumPostponed;
        final BackStackRecord mRecord;

        StartEnterTransitionListener(BackStackRecord r1, boolean r2) {
            this.mIsBack = r2;
            this.mRecord = r1;
        }

        @Override
        public void onStartEnterTransition() {
            this.mNumPostponed--;
            if (this.mNumPostponed == 0) goto L5;
            return;
        L5:
            this.mRecord.mManager.scheduleCommit();
        }

        @Override
        public void startListening() {
            this.mNumPostponed++;
        }

        public boolean isReady() {
            if (this.mNumPostponed != 0) goto L5;
            return true;
        L5:
            return false;
        }

        public void completeTransaction() {
            int r1 = 0;
            if (this.mNumPostponed <= 0) goto L5;
            boolean r0 = true;
        L6:
            FragmentManagerImpl r3 = this.mRecord.mManager;
            int r4 = r3.mAdded.size();
        L7:
            if (r1 >= r4) goto L14;
            Fragment r5 = r3.mAdded.get(r1);
            r5.setOnStartEnterTransitionListener(null);
            if (r0 == false) goto L13;
            if (r5.isPostponed() == false) goto L13;
            r5.startPostponedEnterTransition();
        L13:
            r1 = r1 + 1;
            goto L7
        L14:
            this.mRecord.mManager.completeExecute(this.mRecord, this.mIsBack, !r0, true);
            return;
        L5:
            r0 = false;
            goto L6
        }

        public void cancelTransaction() {
            this.mRecord.mManager.completeExecute(this.mRecord, this.mIsBack, false, false);
        }
    }

    public static int reverseTransit(int r3) {
        if (r3 == 4097) goto L10;
        if (r3 == 4099) goto L8;
        if (r3 == 8194) goto L7;
        return 0;
    L7:
        return FragmentTransaction.TRANSIT_FRAGMENT_OPEN;
    L8:
        return FragmentTransaction.TRANSIT_FRAGMENT_FADE;
    L10:
        return 8194;
    }

    public static int transitToStyleIndex(int r1, boolean r2) {
        if (r1 != 4097) goto L5;
        if (r2 == false) goto L17;
        return 1;
    L17:
        return 2;
    L5:
        if (r1 != 4099) goto L7;
        if (r2 == false) goto L14;
        return 5;
    L14:
        return 6;
    L7:
        if (r1 == 8194) goto L9;
        return -1;
    L9:
        if (r2 == false) goto L11;
        return 3;
    L11:
        return 4;
    }

    LayoutInflater.Factory2 getLayoutInflaterFactory() {
        return this;
    }

    FragmentManagerImpl() {
        this.mNextFragmentIndex = 0;
        this.mAdded = new ArrayList();
        this.mLifecycleCallbacks = new CopyOnWriteArrayList();
        this.mCurState = 0;
        this.mStateBundle = null;
        this.mStateArray = null;
        this.mExecCommit = new 1(this);
    }

    static boolean modifiesAlpha(AnimationOrAnimator r4) {
        if ((r4.animation instanceof AlphaAnimation) == false) goto L6;
        return true;
    L6:
        if ((r4.animation instanceof AnimationSet) == false) goto L16;
        List<Animation> r42 = ((AnimationSet) r4.animation).getAnimations();
        int r2 = 0;
    L9:
        if (r2 >= r42.size()) goto L14;
        if ((r42.get(r2) instanceof AlphaAnimation) == true) goto L12;
        r2 = r2 + 1;
        goto L9
    L12:
        return true;
    L14:
        return false;
    L16:
        return modifiesAlpha(r4.animator);
    }

    static boolean modifiesAlpha(Animator r5) {
        if (r5 != null) goto L6;
        return false;
    L6:
        if ((r5 instanceof ValueAnimator) == false) goto L15;
        PropertyValuesHolder[] r52 = ((ValueAnimator) r5).getValues();
        int r1 = 0;
    L9:
        if (r1 >= r52.length) goto L23;
        if ("alpha".equals(r52[r1].getPropertyName()) == true) goto L12;
        r1 = r1 + 1;
        goto L9
    L12:
        return true;
    L23:
        return false;
    L15:
        if ((r5 instanceof AnimatorSet) == false) goto L23;
        ArrayList<Animator> r53 = ((AnimatorSet) r5).getChildAnimations();
        int r12 = 0;
    L18:
        if (r12 >= r53.size()) goto L23;
        if (modifiesAlpha(r53.get(r12)) == true) goto L21;
        r12 = r12 + 1;
        goto L18
    L21:
        return true;
    }

    static boolean shouldRunOnHWLayer(View r3, AnimationOrAnimator r4) {
        if (r3 == null) goto L16;
        if (r4 != null) goto L7;
        return false;
    L7:
        if (Build.VERSION.SDK_INT >= 19) goto L9;
        return false;
    L9:
        if (r3.getLayerType() == 0) goto L11;
        return false;
    L11:
        if (ViewCompat.hasOverlappingRendering(r3) == true) goto L13;
        return false;
    L13:
        if (modifiesAlpha(r4) == false) goto L20;
        return true;
    L20:
        return false;
    L16:
        return false;
    }

    private void throwException(RuntimeException r8) {
        Log.e(TAG, r8.getMessage());
        Log.e(TAG, "Activity state:");
        PrintWriter r2 = new PrintWriter(new LogWriter(TAG));
        FragmentHostCallback r0 = this.mHost;
        if (r0 == null) goto L15;
        r0.onDump("  ", null, r2, new String[0]);     // Catch: Exception -> L6
        throw r8;
    L6:
        e = move-exception;
        Log.e(TAG, "Failed dumping state", e);
        throw r8;
    L15:
        dump("  ", null, r2, new String[0]);     // Catch: Exception -> L10
        throw r8;
    L10:
        e = move-exception;
        Log.e(TAG, "Failed dumping state", e);
        throw r8;
    }

    @Override
    public FragmentTransaction beginTransaction() {
        return new BackStackRecord(this);
    }

    @Override
    public boolean executePendingTransactions() {
        boolean r0 = execPendingActions();
        forcePostponedTransactions();
        return r0;
    }

    @Override
    public void popBackStack() {
        enqueueAction(new PopBackStackState(this, null, -1, 0), false);
    }

    @Override
    public boolean popBackStackImmediate() {
        checkStateLoss();
        return popBackStackImmediate(null, -1, 0);
    }

    @Override
    public void popBackStack(@Nullable String r3, int r4) {
        enqueueAction(new PopBackStackState(this, r3, -1, r4), false);
    }

    @Override
    public boolean popBackStackImmediate(@Nullable String r2, int r3) {
        checkStateLoss();
        return popBackStackImmediate(r2, -1, r3);
    }

    @Override
    public void popBackStack(int r3, int r4) {
        if (r3 < 0) goto L6;
        enqueueAction(new PopBackStackState(this, null, r3, r4), false);
        return;
    L6:
        throw new IllegalArgumentException("Bad id: " + r3);
    }

    @Override
    public boolean popBackStackImmediate(int r3, int r4) {
        checkStateLoss();
        execPendingActions();
        if (r3 < 0) goto L7;
        return popBackStackImmediate(null, r3, r4);
    L7:
        throw new IllegalArgumentException("Bad id: " + r3);
    }

    private boolean popBackStackImmediate(String r9, int r10, int r11) {
        execPendingActions();
        ensureExecReady(true);
        Fragment r1 = this.mPrimaryNav;
        if (r1 == null) goto L11;
        if (r10 >= 0) goto L11;
        if (r9 != null) goto L11;
        FragmentManager r12 = r1.peekChildFragmentManager();
        if (r12 == null) goto L11;
        if (r12.popBackStackImmediate() == false) goto L11;
        return true;
    L11:
        boolean r92 = popBackStackState(this.mTmpRecords, this.mTmpIsPop, r9, r10, r11);
        if (r92 == false) goto L19;
        this.mExecutingActions = true;
        removeRedundantOperationsAndExecute(this.mTmpRecords, this.mTmpIsPop);     // Catch: Throwable -> L16
        cleanupExec();
    L16:
        th = move-exception;
        cleanupExec();
        throw th;
    L19:
        doPendingDeferredStart();
        burpActive();
        return r92;
    }

    @Override
    public int getBackStackEntryCount() {
        ArrayList<BackStackRecord> r0 = this.mBackStack;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.size();
    }

    @Override
    public FragmentManager.BackStackEntry getBackStackEntryAt(int r2) {
        return this.mBackStack.get(r2);
    }

    @Override
    public void addOnBackStackChangedListener(FragmentManager.OnBackStackChangedListener r2) {
        if (this.mBackStackChangeListeners != null) goto L5;
        this.mBackStackChangeListeners = new ArrayList();
    L5:
        this.mBackStackChangeListeners.add(r2);
    }

    @Override
    public void removeOnBackStackChangedListener(FragmentManager.OnBackStackChangedListener r2) {
        ArrayList<FragmentManager.OnBackStackChangedListener> r0 = this.mBackStackChangeListeners;
        if (r0 == null) goto L6;
        r0.remove(r2);
        return;
    }

    @Override
    public void putFragment(Bundle r4, String r5, Fragment r6) {
        if (r6.mIndex >= 0) goto L5;
        throwException(new IllegalStateException("Fragment " + r6 + " is not currently in the FragmentManager"));
    L5:
        r4.putInt(r5, r6.mIndex);
    }

    @Override
    @Nullable
    public Fragment getFragment(Bundle r5, String r6) {
        int r52 = r5.getInt(r6, -1);
        if (r52 != (-1)) goto L6;
        return null;
    L6:
        Fragment r0 = this.mActive.get(r52);
        if (r0 != null) goto L9;
        throwException(new IllegalStateException("Fragment no longer exists for key " + r6 + ": index " + r52));
    L9:
        return r0;
    }

    @Override
    public List<Fragment> getFragments() {
        if (this.mAdded.isEmpty() == true) goto L5;
        ArrayList<Fragment> r0 = this.mAdded;
        monitor-enter(r0);
        List<Fragment> r1 = (List) this.mAdded.clone();     // Catch: Throwable -> L11
        monitor-exit(r0);     // Catch: Throwable -> L11
        return r1;
    L11:
        th = move-exception;
        throw th;
    L5:
        return Collections.emptyList();
    }

    List<Fragment> getActiveFragments() {
        SparseArray<Fragment> r0 = this.mActive;
        if (r0 != null) goto L6;
        return null;
    L6:
        int r02 = r0.size();
        ArrayList r1 = new ArrayList(r02);
        int r2 = 0;
    L7:
        if (r2 >= r02) goto L9;
        r1.add(this.mActive.valueAt(r2));
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    int getActiveFragmentCount() {
        SparseArray<Fragment> r0 = this.mActive;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.size();
    }

    @Override
    @Nullable
    public Fragment.SavedState saveFragmentInstanceState(Fragment r4) {
        if (r4.mIndex >= 0) goto L6;
        throwException(new IllegalStateException("Fragment " + r4 + " is not currently in the FragmentManager"));
    L6:
        if (r4.mState <= 0) goto L11;
        Bundle r42 = saveFragmentBasicState(r4);
        if (r42 != null) goto L10;
        return null;
    L10:
        return new Fragment.SavedState(r42);
    L11:
        return null;
    }

    @Override
    public boolean isDestroyed() {
        return this.mDestroyed;
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder(128);
        r0.append("FragmentManager{");
        r0.append(Integer.toHexString(System.identityHashCode(this)));
        r0.append(" in ");
        Fragment r1 = this.mParent;
        if (r1 == null) goto L5;
        DebugUtils.buildShortClassTag(r1, r0);
    L6:
        r0.append("}}");
        return r0.toString();
    L5:
        DebugUtils.buildShortClassTag(this.mHost, r0);
        goto L6
    }

    @Override
    public void dump(String r7, FileDescriptor r8, PrintWriter r9, String[] r10) {
        String r0 = r7 + "    ";
        SparseArray<Fragment> r1 = this.mActive;
        int r2 = 0;
        if (r1 == null) goto L12;
        int r12 = r1.size();
        if (r12 <= 0) goto L12;
        r9.print(r7);
        r9.print("Active Fragments in ");
        r9.print(Integer.toHexString(System.identityHashCode(this)));
        r9.println(":");
        int r3 = 0;
    L7:
        if (r3 >= r12) goto L12;
        Fragment r4 = this.mActive.valueAt(r3);
        r9.print(r7);
        r9.print("  #");
        r9.print(r3);
        r9.print(": ");
        r9.println(r4);
        if (r4 == null) goto L11;
        r4.dump(r0, r8, r9, r10);
    L11:
        r3 = r3 + 1;
    L12:
        int r13 = this.mAdded.size();
        if (r13 <= 0) goto L17;
        r9.print(r7);
        r9.println("Added Fragments:");
        int r32 = 0;
    L15:
        if (r32 >= r13) goto L17;
        Fragment r42 = this.mAdded.get(r32);
        r9.print(r7);
        r9.print("  #");
        r9.print(r32);
        r9.print(": ");
        r9.println(r42.toString());
        r32 = r32 + 1;
    L17:
        ArrayList<Fragment> r14 = this.mCreatedMenus;
        if (r14 == null) goto L24;
        int r15 = r14.size();
        if (r15 <= 0) goto L24;
        r9.print(r7);
        r9.println("Fragments Created Menus:");
        int r33 = 0;
    L22:
        if (r33 >= r15) goto L24;
        Fragment r43 = this.mCreatedMenus.get(r33);
        r9.print(r7);
        r9.print("  #");
        r9.print(r33);
        r9.print(": ");
        r9.println(r43.toString());
        r33 = r33 + 1;
    L24:
        ArrayList<BackStackRecord> r16 = this.mBackStack;
        if (r16 == null) goto L31;
        int r17 = r16.size();
        if (r17 <= 0) goto L31;
        r9.print(r7);
        r9.println("Back Stack:");
        int r34 = 0;
    L29:
        if (r34 >= r17) goto L31;
        BackStackRecord r44 = this.mBackStack.get(r34);
        r9.print(r7);
        r9.print("  #");
        r9.print(r34);
        r9.print(": ");
        r9.println(r44.toString());
        r44.dump(r0, r8, r9, r10);
        r34 = r34 + 1;
    L31:
        monitor-enter(this);
    L62:
        th = move-exception;
        throw th;
    L33:
        if (this.mBackStackIndices == null) goto L40;
        int r82 = this.mBackStackIndices.size();     // Catch: Throwable -> L62
        if (r82 <= 0) goto L40;
        r9.print(r7);     // Catch: Throwable -> L62
        r9.println("Back Stack Indices:");     // Catch: Throwable -> L62
        int r102 = 0;
    L37:
        if (r102 >= r82) goto L40;
        Object r02 = (BackStackRecord) this.mBackStackIndices.get(r102);     // Catch: Throwable -> L62
        r9.print(r7);     // Catch: Throwable -> L62
        r9.print("  #");     // Catch: Throwable -> L62
        r9.print(r102);     // Catch: Throwable -> L62
        r9.print(": ");     // Catch: Throwable -> L62
        r9.println(r02);     // Catch: Throwable -> L62
        r102 = r102 + 1;     // Catch: Throwable -> L62
    L40:
        if (this.mAvailBackStackIndices != null) goto L42;
    L44:
        monitor-exit(this);     // Catch: Throwable -> L62
        ArrayList<OpGenerator> r83 = this.mPendingActions;
        if (r83 == null) goto L52;
        int r84 = r83.size();
        if (r84 <= 0) goto L52;
        r9.print(r7);
        r9.println("Pending Actions:");
    L50:
        if (r2 >= r84) goto L52;
        Object r103 = (OpGenerator) this.mPendingActions.get(r2);
        r9.print(r7);
        r9.print("  #");
        r9.print(r2);
        r9.print(": ");
        r9.println(r103);
        r2 = r2 + 1;
    L52:
        r9.print(r7);
        r9.println("FragmentManager misc state:");
        r9.print(r7);
        r9.print("  mHost=");
        r9.println(this.mHost);
        r9.print(r7);
        r9.print("  mContainer=");
        r9.println(this.mContainer);
        if (this.mParent == null) goto L55;
        r9.print(r7);
        r9.print("  mParent=");
        r9.println(this.mParent);
    L55:
        r9.print(r7);
        r9.print("  mCurState=");
        r9.print(this.mCurState);
        r9.print(" mStateSaved=");
        r9.print(this.mStateSaved);
        r9.print(" mStopped=");
        r9.print(this.mStopped);
        r9.print(" mDestroyed=");
        r9.println(this.mDestroyed);
        if (this.mNeedMenuInvalidate == false) goto L59;
        r9.print(r7);
        r9.print("  mNeedMenuInvalidate=");
        r9.println(this.mNeedMenuInvalidate);
    L59:
        if (this.mNoTransactionsBecause == null) goto L75;
        r9.print(r7);
        r9.print("  mNoTransactionsBecause=");
        r9.println(this.mNoTransactionsBecause);
        return;
    L75:
        return;
    L42:
        if (this.mAvailBackStackIndices.size() <= 0) goto L44;
        r9.print(r7);     // Catch: Throwable -> L62
        r9.print("mAvailBackStackIndices: ");     // Catch: Throwable -> L62
        r9.println(Arrays.toString(this.mAvailBackStackIndices.toArray()));     // Catch: Throwable -> L62
        goto L44
    }

    static {
        DECELERATE_QUINT = new DecelerateInterpolator(2.5f);
        DECELERATE_CUBIC = new DecelerateInterpolator(1.5f);
        ACCELERATE_QUINT = new AccelerateInterpolator(2.5f);
        ACCELERATE_CUBIC = new AccelerateInterpolator(1.5f);
    }

    static AnimationOrAnimator makeOpenCloseAnimation(Context r10, float r11, float r12, float r13, float r14) {
        AnimationSet r102 = new AnimationSet(false);
        ScaleAnimation r0 = new ScaleAnimation(r11, r12, r11, r12, 1, 0.5f, 1, 0.5f);
        r0.setInterpolator(DECELERATE_QUINT);
        r0.setDuration(220);
        r102.addAnimation(r0);
        AlphaAnimation r02 = new AlphaAnimation(r13, r14);
        r02.setInterpolator(DECELERATE_CUBIC);
        r02.setDuration(220);
        r102.addAnimation(r02);
        return new AnimationOrAnimator(r102);
    }

    static AnimationOrAnimator makeFadeAnimation(Context r0, float r1, float r2) {
        AlphaAnimation r02 = new AlphaAnimation(r1, r2);
        r02.setInterpolator(DECELERATE_CUBIC);
        r02.setDuration(220);
        return new AnimationOrAnimator(r02);
    }

    AnimationOrAnimator loadAnimation(Fragment r5, int r6, boolean r7, int r8) {
        int r0 = r5.getNextAnim();
        Animation r1 = r5.onCreateAnimation(r6, r7, r0);
        if (r1 != null) goto L5;
        Animator r52 = r5.onCreateAnimator(r6, r7, r0);
        if (r52 != null) goto L9;
        if (r0 == 0) goto L33;
        boolean r53 = "anim".equals(this.mHost.getContext().getResources().getResourceTypeName(r0));
        boolean r12 = false;
        if (r53 == true) goto L61;
    L20:
        if (r12 == true) goto L33;
        Animator r13 = AnimatorInflater.loadAnimator(this.mHost.getContext(), r0);     // Catch: RuntimeException -> L25
        if (r13 == null) goto L33;
        return new AnimationOrAnimator(r13);
    L25:
        e = move-exception;
        if (r53 == true) goto L31;
        Animation r54 = AnimationUtils.loadAnimation(this.mHost.getContext(), r0);
        if (r54 == null) goto L33;
        return new AnimationOrAnimator(r54);
    L31:
        throw e;
    L61:
        Animation r2 = AnimationUtils.loadAnimation(this.mHost.getContext(), r0);     // Catch: Resources.NotFoundException -> L18 RuntimeException -> L58
        if (r2 == null) goto L17;
        return new AnimationOrAnimator(r2);
        goto L20
    L17:
        r12 = true;
    L18:
        e = move-exception;
        throw e;
    L33:
        if (r6 != 0) goto L35;
        return null;
    L35:
        int r62 = transitToStyleIndex(r6, r7);
        if (r62 >= 0) goto L39;
        return null;
    L39:
        switch(r62) {
            case 1: goto L55;
            case 2: goto L53;
            case 3: goto L51;
            case 4: goto L49;
            case 5: goto L47;
            case 6: goto L45;
            default: goto L40;
        };
    L40:
        if (r8 == 0) goto L42;
    L56:
        if (r8 == 0) goto L57;
    L57:
        return null;
    L42:
        if (this.mHost.onHasWindowAnimations() == false) goto L56;
        r8 = this.mHost.onGetWindowAnimations();
        goto L56
    L45:
        return makeFadeAnimation(this.mHost.getContext(), 1.0f, 0.0f);
    L47:
        return makeFadeAnimation(this.mHost.getContext(), 0.0f, 1.0f);
    L49:
        return makeOpenCloseAnimation(this.mHost.getContext(), 1.0f, 1.075f, 1.0f, 0.0f);
    L51:
        return makeOpenCloseAnimation(this.mHost.getContext(), 0.975f, 1.0f, 0.0f, 1.0f);
    L53:
        return makeOpenCloseAnimation(this.mHost.getContext(), 1.0f, 0.975f, 1.0f, 0.0f);
    L55:
        return makeOpenCloseAnimation(this.mHost.getContext(), 1.125f, 1.0f, 0.0f, 1.0f);
    L9:
        return new AnimationOrAnimator(r52);
    L5:
        return new AnimationOrAnimator(r1);
    }

    public void performPendingDeferredStart(Fragment r8) {
        if (r8.mDeferStart == true) goto L5;
        return;
    L5:
        if (this.mExecutingActions == false) goto L8;
        this.mHavePendingDeferredStart = true;
        return;
    L8:
        r8.mDeferStart = false;
        moveToState(r8, this.mCurState, 0, 0, false);
    }

    private static void setHWLayerAnimListenerIfAlpha(View r3, AnimationOrAnimator r4) {
        if (r3 == null) goto L12;
        if (r4 != null) goto L6;
        return;
    L6:
        if (shouldRunOnHWLayer(r3, r4) == true) goto L8;
        return;
    L8:
        if (r4.animator == null) goto L10;
        r4.animator.addListener(new AnimatorOnHWLayerIfNeededListener(r3));
        return;
    L10:
        Animation.AnimationListener r0 = getAnimationListener(r4.animation);
        r3.setLayerType(2, null);
        r4.animation.setAnimationListener(new AnimateOnHWLayerIfNeededListener(r3, r0));
        return;
    }

    private static Animation.AnimationListener getAnimationListener(Animation r3) {
    L8:
        e = move-exception;
        Log.e(TAG, "Cannot access Animation's mListener field", e);
    L12:
        return null;
    L10:
        e = move-exception;
        Log.e(TAG, "No field with the name mListener is found in Animation class", e);
        goto L12
    L4:
        if (sAnimationListenerField != null) goto L6;
        sAnimationListenerField = Animation.class.getDeclaredField("mListener");     // Catch: IllegalAccessException -> L8 NoSuchFieldException -> L10
        sAnimationListenerField.setAccessible(true);     // Catch: IllegalAccessException -> L8 NoSuchFieldException -> L10
    L6:
    L16:
        return (Animation.AnimationListener) sAnimationListenerField.get(r3);
    }

    boolean isStateAtLeast(int r2) {
        if (this.mCurState < r2) goto L5;
        return true;
    L5:
        return false;
    }

    void moveToState(Fragment r17, int r18, int r19, int r20, boolean r21) {
        int r8 = 1;
        boolean r82 = true;
        if (r17.mAdded == true) goto L5;
    L8:
        int r0 = r18;
        if (r0 <= 1) goto L12;
        r0 = 1;
    L12:
        if (r17.mRemoving == false) goto L22;
        if (r0 <= r17.mState) goto L22;
        if (r17.mState == 0) goto L18;
    L20:
        r0 = r17.mState;
        goto L22
    L18:
        if (r17.isInBackStack() == false) goto L20;
        r0 = 1;
    L22:
        if (r17.mDeferStart == true) goto L24;
    L27:
        int r11 = r0;
    L29:
        if (r17.mState > r11) goto L142;
        if (r17.mFromLayout == false) goto L36;
        if (r17.mInLayout == true) goto L36;
        return;
    L36:
        if (r17.getAnimatingAway() == null) goto L38;
    L39:
        r17.setAnimatingAway(null);
        r17.setAnimator(null);
        moveToState(r17, r17.getStateAfterAnimating(), 0, 0, true);
    L40:
        int r02 = r17.mState;
        if (r02 == 0) goto L46;
        if (r02 == 1) goto L90;
        if (r02 == 2) goto L131;
        if (r02 != 3) goto L218;
    L136:
        if (r11 <= 3) goto L218;
        if (DEBUG == false) goto L140;
        Log.v(TAG, "moveto RESUMED: " + r17);
    L140:
        r17.performResume();
        dispatchOnFragmentResumed(r17, false);
        r17.mSavedFragmentState = null;
        r17.mSavedViewState = null;
    L218:
        r8 = r11;
    L220:
        if (r17.mState == r8) goto L225;
        Log.w(TAG, "moveToState: Fragment state for " + r17 + " not updated inline; expected state " + r8 + " found " + r17.mState);
        r17.mState = r8;
        return;
    L225:
        return;
    L131:
        if (r11 <= 2) goto L136;
        if (DEBUG == false) goto L135;
        Log.v(TAG, "moveto STARTED: " + r17);
    L135:
        r17.performStart();
        dispatchOnFragmentStarted(r17, false);
    L90:
        ensureInflatedFragmentView(r17);
        if (r11 <= 1) goto L131;
        if (DEBUG == false) goto L96;
        Log.v(TAG, "moveto ACTIVITY_CREATED: " + r17);
    L96:
        if (r17.mFromLayout == false) goto L98;
    L127:
        r17.performActivityCreated(r17.mSavedFragmentState);
        dispatchOnFragmentActivityCreated(r17, r17.mSavedFragmentState, false);
        if (r17.mView == null) goto L130;
        r17.restoreViewState(r17.mSavedFragmentState);
    L130:
        r17.mSavedFragmentState = null;
        goto L131
    L98:
        if (r17.mContainerId != 0) goto L100;
        ViewGroup r03 = null;
    L111:
        r17.mContainer = r03;
        r17.performCreateView(r17.performGetLayoutInflater(r17.mSavedFragmentState), r03, r17.mSavedFragmentState);
        if (r17.mView == null) goto L126;
        r17.mInnerView = r17.mView;
        r17.mView.setSaveFromParentEnabled(false);
        if (r03 == null) goto L117;
        r03.addView(r17.mView);
    L117:
        if (r17.mHidden == false) goto L119;
        r17.mView.setVisibility(8);
    L119:
        r17.onViewCreated(r17.mView, r17.mSavedFragmentState);
        dispatchOnFragmentViewCreated(r17, r17.mView, r17.mSavedFragmentState, false);
        if (r17.mView.getVisibility() == 0) goto L122;
    L124:
        r82 = false;
    L125:
        r17.mIsNewlyAdded = r82;
        goto L127
    L122:
        if (r17.mContainer == null) goto L124;
    L126:
        r17.mInnerView = null;
        goto L127
    L100:
        if (r17.mContainerId != (-1)) goto L102;
        throwException(new IllegalArgumentException("Cannot create fragment " + r17 + " for a container view with no id"));
    L102:
        r03 = (ViewGroup) this.mContainer.onFindViewById(r17.mContainerId);
        if (r03 != null) goto L111;
        if (r17.mRestored == true) goto L111;
        String r1 = r17.getResources().getResourceName(r17.mContainerId);     // Catch: Resources.NotFoundException -> L108
    L109:
        throwException(new IllegalArgumentException("No view found for id 0x" + Integer.toHexString(r17.mContainerId) + " (" + r1 + ") for fragment " + r17));
    L108:
        r1 = EnvironmentCompat.MEDIA_UNKNOWN;
        goto L109
    L46:
        if (r11 <= 0) goto L90;
        if (DEBUG == false) goto L51;
        Log.v(TAG, "moveto CREATED: " + r17);
    L51:
        if (r17.mSavedFragmentState == null) goto L64;
        r17.mSavedFragmentState.setClassLoader(this.mHost.getContext().getClassLoader());
        r17.mSavedViewState = r17.mSavedFragmentState.getSparseParcelableArray(VIEW_STATE_TAG);
        r17.mTarget = getFragment(r17.mSavedFragmentState, TARGET_STATE_TAG);
        if (r17.mTarget == null) goto L56;
        r17.mTargetRequestCode = r17.mSavedFragmentState.getInt(TARGET_REQUEST_CODE_STATE_TAG, 0);
    L56:
        if (r17.mSavedUserVisibleHint == null) goto L58;
        r17.mUserVisibleHint = r17.mSavedUserVisibleHint.booleanValue();
        r17.mSavedUserVisibleHint = null;
    L60:
        if (r17.mUserVisibleHint == true) goto L64;
        r17.mDeferStart = true;
        if (r11 <= 2) goto L64;
        r11 = 2;
        goto L64
    L58:
        r17.mUserVisibleHint = r17.mSavedFragmentState.getBoolean(USER_VISIBLE_HINT_TAG, true);
    L64:
        FragmentHostCallback r04 = this.mHost;
        r17.mHost = r04;
        Fragment r12 = this.mParent;
        r17.mParentFragment = r12;
        if (r12 == null) goto L67;
        FragmentManagerImpl r05 = r12.mChildFragmentManager;
    L68:
        r17.mFragmentManager = r05;
        if (r17.mTarget != null) goto L71;
    L77:
        dispatchOnFragmentPreAttached(r17, this.mHost.getContext(), false);
        r17.mCalled = false;
        r17.onAttach(this.mHost.getContext());
        if (r17.mCalled == false) goto L89;
        if (r17.mParentFragment != null) goto L82;
        this.mHost.onAttachFragment(r17);
    L83:
        dispatchOnFragmentAttached(r17, this.mHost.getContext(), false);
        if (r17.mIsCreated == true) goto L86;
        dispatchOnFragmentPreCreated(r17, r17.mSavedFragmentState, false);
        r17.performCreate(r17.mSavedFragmentState);
        dispatchOnFragmentCreated(r17, r17.mSavedFragmentState, false);
    L87:
        r17.mRetaining = false;
        goto L90
    L86:
        r17.restoreChildFragmentState(r17.mSavedFragmentState);
        r17.mState = 1;
        goto L87
    L82:
        r17.mParentFragment.onAttachFragment(r17);
        goto L83
    L89:
        throw new SuperNotCalledException("Fragment " + r17 + " did not call through to super.onAttach()");
    L71:
        if (this.mActive.get(r17.mTarget.mIndex) != r17.mTarget) goto L76;
        if (r17.mTarget.mState >= 1) goto L77;
        moveToState(r17.mTarget, 1, 0, 0, true);
        goto L77
    L76:
        throw new IllegalStateException("Fragment " + r17 + " declared target fragment " + r17.mTarget + " that does not belong to this FragmentManager!");
    L67:
        r05 = r04.getFragmentManagerImpl();
        goto L68
    L38:
        if (r17.getAnimator() == null) goto L40;
    L142:
        if (r17.mState <= r11) goto L218;
        int r06 = r17.mState;
        if (r06 == 1) goto L190;
        if (r06 == 2) goto L160;
        if (r06 != 3) goto L148;
    L155:
        if (r11 >= 3) goto L160;
        if (DEBUG == false) goto L159;
        Log.v(TAG, "movefrom STARTED: " + r17);
    L159:
        r17.performStop();
        dispatchOnFragmentStopped(r17, false);
        goto L160
    L148:
        if (r06 != 4) goto L218;
        if (r11 >= 4) goto L155;
        if (DEBUG == false) goto L154;
        Log.v(TAG, "movefrom RESUMED: " + r17);
    L154:
        r17.performPause();
        dispatchOnFragmentPaused(r17, false);
    L160:
        if (r11 >= 2) goto L190;
        if (DEBUG == false) goto L165;
        Log.v(TAG, "movefrom ACTIVITY_CREATED: " + r17);
    L165:
        if (r17.mView != null) goto L167;
    L171:
        r17.performDestroyView();
        dispatchOnFragmentViewDestroyed(r17, false);
        if (r17.mView != null) goto L174;
    L189:
        r17.mContainer = null;
        r17.mView = null;
        r17.mViewLifecycleOwner = null;
        r17.mViewLifecycleOwnerLiveData.setValue(null);
        r17.mInnerView = null;
        r17.mInLayout = false;
        goto L190
    L174:
        if (r17.mContainer == null) goto L189;
        r17.mContainer.endViewTransition(r17.mView);
        r17.mView.clearAnimation();
        if (this.mCurState > 0) goto L178;
    L184:
        AnimationOrAnimator r07 = null;
    L185:
        r17.mPostponedAlpha = 0.0f;
        if (r07 == null) goto L188;
        animateRemoveFragment(r17, r07, r11);
    L188:
        r17.mContainer.removeView(r17.mView);
        goto L189
    L178:
        if (this.mDestroyed == true) goto L184;
        if (r17.mView.getVisibility() != 0) goto L184;
        if (r17.mPostponedAlpha < 0.0f) goto L184;
        r07 = loadAnimation(r17, r19, false, r20);
        goto L185
    L167:
        if (this.mHost.onShouldSaveFragmentState(r17) == false) goto L171;
        if (r17.mSavedViewState != null) goto L171;
        saveFragmentViewState(r17);
    L190:
        if (r11 >= 1) goto L218;
        if (this.mDestroyed == false) goto L200;
        if (r17.getAnimatingAway() == null) goto L197;
        View r08 = r17.getAnimatingAway();
        r17.setAnimatingAway(null);
        r08.clearAnimation();
        goto L200
    L197:
        if (r17.getAnimator() == null) goto L200;
        Animator r09 = r17.getAnimator();
        r17.setAnimator(null);
        r09.cancel();
    L200:
        if (r17.getAnimatingAway() == null) goto L202;
    L217:
        r17.setStateAfterAnimating(r11);
        goto L220
    L202:
        if (r17.getAnimator() != null) goto L217;
        if (DEBUG == false) goto L208;
        Log.v(TAG, "movefrom CREATED: " + r17);
    L208:
        if (r17.mRetaining == true) goto L210;
        r17.performDestroy();
        dispatchOnFragmentDestroyed(r17, false);
    L211:
        r17.performDetach();
        dispatchOnFragmentDetached(r17, false);
        if (r21 == true) goto L218;
        if (r17.mRetaining == true) goto L216;
        makeInactive(r17);
        goto L218
    L216:
        r17.mHost = null;
        r17.mParentFragment = null;
        r17.mFragmentManager = null;
        goto L218
    L210:
        r17.mState = 0;
        goto L211
    L24:
        if (r17.mState >= 3) goto L27;
        if (r0 <= 2) goto L27;
        r11 = 2;
        goto L29
    L5:
        if (r17.mDetached == true) goto L8;
        r0 = r18;
        goto L12
    }

    private void animateRemoveFragment(@NonNull final Fragment r5, @NonNull AnimationOrAnimator r6, int r7) {
        final View r0 = r5.mView;
        final ViewGroup r1 = r5.mContainer;
        r1.startViewTransition(r0);
        r5.setStateAfterAnimating(r7);
        if (r6.animation == null) goto L5;
        EndViewTransitionAnimator r72 = new EndViewTransitionAnimator(r6.animation, r1, r0);
        r5.setAnimatingAway(r5.mView);
        final Animation.AnimationListener r2 = getAnimationListener(r72);
        r72.setAnimationListener(new 2(this, r2, r1, r5));
        setHWLayerAnimListenerIfAlpha(r0, r6);
        r5.mView.startAnimation(r72);
        return;
    L5:
        Animator r73 = r6.animator;
        r5.setAnimator(r6.animator);
        r73.addListener(new 3(this, r1, r0, r5));
        r73.setTarget(r5.mView);
        setHWLayerAnimListenerIfAlpha(r5.mView, r6);
        r73.start();
    }

    void moveToState(Fragment r7) {
        moveToState(r7, this.mCurState, 0, 0, false);
    }

    void ensureInflatedFragmentView(Fragment r4) {
        if (r4.mFromLayout == true) goto L5;
        return;
    L5:
        if (r4.mPerformedCreateView == true) goto L15;
        r4.performCreateView(r4.performGetLayoutInflater(r4.mSavedFragmentState), null, r4.mSavedFragmentState);
        if (r4.mView == null) goto L12;
        r4.mInnerView = r4.mView;
        r4.mView.setSaveFromParentEnabled(false);
        if (r4.mHidden == false) goto L11;
        r4.mView.setVisibility(8);
    L11:
        r4.onViewCreated(r4.mView, r4.mSavedFragmentState);
        dispatchOnFragmentViewCreated(r4, r4.mView, r4.mSavedFragmentState, false);
        return;
    L12:
        r4.mInnerView = null;
        return;
    }

    void completeShowHideFragment(final Fragment r8) {
        if (r8.mView == null) goto L28;
        AnimationOrAnimator r0 = loadAnimation(r8, r8.getNextTransition(), !r8.mHidden, r8.getNextTransitionStyle());
        if (r0 != null) goto L7;
    L16:
        if (r0 == null) goto L19;
        setHWLayerAnimListenerIfAlpha(r8.mView, r0);
        r8.mView.startAnimation(r0.animation);
        r0.animation.start();
    L19:
        if (r8.mHidden == true) goto L21;
    L23:
        int r02 = 0;
    L24:
        r8.mView.setVisibility(r02);
        if (r8.isHideReplaced() == false) goto L28;
        r8.setHideReplaced(false);
        goto L28
    L21:
        if (r8.isHideReplaced() == true) goto L23;
        r02 = 8;
        goto L24
    L7:
        if (r0.animator == null) goto L16;
        r0.animator.setTarget(r8.mView);
        if (r8.mHidden == true) goto L11;
        r8.mView.setVisibility(0);
    L15:
        setHWLayerAnimListenerIfAlpha(r8.mView, r0);
        r0.animator.start();
        goto L28
    L11:
        if (r8.isHideReplaced() == false) goto L13;
        r8.setHideReplaced(false);
        goto L15
    L13:
        final ViewGroup r3 = r8.mContainer;
        final View r4 = r8.mView;
        r3.startViewTransition(r4);
        r0.animator.addListener(new 4(this, r3, r4, r8));
    L28:
        if (r8.mAdded == true) goto L30;
    L34:
        r8.mHiddenChanged = false;
        r8.onHiddenChanged(r8.mHidden);
        return;
    L30:
        if (r8.mHasMenu == false) goto L34;
        if (r8.mMenuVisible == false) goto L34;
        this.mNeedMenuInvalidate = true;
        goto L34
    }

    void moveFragmentToExpectedState(Fragment r11) {
        if (r11 != null) goto L4;
        return;
    L4:
        int r0 = this.mCurState;
        if (r11.mRemoving == true) goto L7;
    L10:
        moveToState(r11, r0, r11.getNextTransition(), r11.getNextTransitionStyle(), false);
        if (r11.mView == null) goto L31;
        Fragment r02 = findFragmentUnder(r11);
        if (r02 == null) goto L18;
        View r03 = r02.mView;
        ViewGroup r1 = r11.mContainer;
        int r04 = r1.indexOfChild(r03);
        int r4 = r1.indexOfChild(r11.mView);
        if (r4 >= r04) goto L18;
        r1.removeViewAt(r4);
        r1.addView(r11.mView, r04);
    L18:
        if (r11.mIsNewlyAdded == false) goto L31;
        if (r11.mContainer == null) goto L31;
        if (r11.mPostponedAlpha <= 0.0f) goto L24;
        r11.mView.setAlpha(r11.mPostponedAlpha);
    L24:
        r11.mPostponedAlpha = 0.0f;
        r11.mIsNewlyAdded = false;
        AnimationOrAnimator r05 = loadAnimation(r11, r11.getNextTransition(), true, r11.getNextTransitionStyle());
        if (r05 == null) goto L31;
        setHWLayerAnimListenerIfAlpha(r11.mView, r05);
        if (r05.animation == null) goto L29;
        r11.mView.startAnimation(r05.animation);
        goto L31
    L29:
        r05.animator.setTarget(r11.mView);
        r05.animator.start();
    L31:
        if (r11.mHiddenChanged == false) goto L34;
        completeShowHideFragment(r11);
        return;
    L34:
        return;
    L7:
        if (r11.isInBackStack() == false) goto L9;
        r0 = Math.min(r0, 1);
        goto L10
    L9:
        r0 = Math.min(r0, 0);
        goto L10
    }

    void moveToState(int r4, boolean r5) {
        if (this.mHost != null) goto L8;
        if (r4 == 0) goto L8;
        throw new IllegalStateException("No activity");
    L8:
        if (r5 == false) goto L10;
    L12:
        this.mCurState = r4;
        if (this.mActive == null) goto L43;
        int r42 = this.mAdded.size();
        int r0 = 0;
    L15:
        if (r0 >= r42) goto L17;
        moveFragmentToExpectedState(this.mAdded.get(r0));
        r0 = r0 + 1;
        goto L15
    L17:
        int r43 = this.mActive.size();
        int r02 = 0;
    L18:
        if (r02 >= r43) goto L29;
        Fragment r1 = this.mActive.valueAt(r02);
        if (r1 == null) goto L28;
        if (r1.mRemoving == true) goto L26;
        if (r1.mDetached == false) goto L28;
    L26:
        if (r1.mIsNewlyAdded == true) goto L28;
        moveFragmentToExpectedState(r1);
    L28:
        r02 = r02 + 1;
        goto L18
    L29:
        startPendingDeferredFragments();
        if (this.mNeedMenuInvalidate == false) goto L44;
        FragmentHostCallback r44 = this.mHost;
        if (r44 != null) goto L34;
        return;
    L34:
        if (this.mCurState != 4) goto L46;
        r44.onSupportInvalidateOptionsMenu();
        this.mNeedMenuInvalidate = false;
        return;
    L46:
        return;
    L44:
        return;
    L43:
        return;
    L10:
        if (r4 != this.mCurState) goto L12;
    }

    void startPendingDeferredFragments() {
        if (this.mActive != null) goto L5;
        return;
    L5:
        int r0 = 0;
    L7:
        if (r0 >= this.mActive.size()) goto L12;
        Fragment r1 = this.mActive.valueAt(r0);
        if (r1 == null) goto L11;
        performPendingDeferredStart(r1);
    L11:
        r0 = r0 + 1;
        goto L7
    }

    void makeActive(Fragment r3) {
        if (r3.mIndex < 0) goto L5;
        return;
    L5:
        int r0 = this.mNextFragmentIndex;
        this.mNextFragmentIndex = r0 + 1;
        r3.setIndex(r0, this.mParent);
        if (this.mActive != null) goto L8;
        this.mActive = new SparseArray();
    L8:
        this.mActive.put(r3.mIndex, r3);
        if (DEBUG == false) goto L12;
        Log.v(TAG, "Allocated fragment index " + r3);
        return;
    }

    void makeInactive(Fragment r4) {
        if (r4.mIndex >= 0) goto L6;
        return;
    L6:
        if (DEBUG == false) goto L8;
        Log.v(TAG, "Freeing fragment index " + r4);
    L8:
        this.mActive.put(r4.mIndex, null);
        r4.initState();
    }

    public void addFragment(Fragment r4, boolean r5) {
        if (DEBUG == false) goto L5;
        Log.v(TAG, "add: " + r4);
    L5:
        makeActive(r4);
        if (r4.mDetached == false) goto L8;
        return;
    L8:
        if (this.mAdded.contains(r4) == true) goto L27;
        ArrayList<Fragment> r0 = this.mAdded;
        monitor-enter(r0);
        this.mAdded.add(r4);     // Catch: Throwable -> L23
        monitor-exit(r0);     // Catch: Throwable -> L23
        r4.mAdded = true;
        r4.mRemoving = false;
        if (r4.mView != null) goto L17;
        r4.mHiddenChanged = false;
    L17:
        if (r4.mHasMenu == true) goto L19;
    L21:
        if (r5 == false) goto L31;
        moveToState(r4);
        return;
    L31:
        return;
    L19:
        if (r4.mMenuVisible == false) goto L21;
        this.mNeedMenuInvalidate = true;
    L23:
        th = move-exception;
        throw th;
    L27:
        throw new IllegalStateException("Fragment already added: " + r4);
    }

    public void removeFragment(Fragment r4) {
        if (DEBUG == false) goto L5;
        Log.v(TAG, "remove: " + r4 + " nesting=" + r4.mBackStackNesting);
    L5:
        boolean r0 = !r4.isInBackStack();
        if (r4.mDetached == false) goto L8;
        if (r0 == true) goto L8;
        return;
    L8:
        ArrayList<Fragment> r02 = this.mAdded;
        monitor-enter(r02);
        this.mAdded.remove(r4);     // Catch: Throwable -> L19
        monitor-exit(r02);     // Catch: Throwable -> L19
        if (r4.mHasMenu == true) goto L15;
    L17:
        r4.mAdded = false;
        r4.mRemoving = true;
        return;
    L15:
        if (r4.mMenuVisible == false) goto L17;
        this.mNeedMenuInvalidate = true;
    L19:
        th = move-exception;
        throw th;
    }

    public void hideFragment(Fragment r3) {
        if (DEBUG == false) goto L6;
        Log.v(TAG, "hide: " + r3);
    L6:
        if (r3.mHidden == true) goto L9;
        r3.mHidden = true;
        r3.mHiddenChanged = true ^ r3.mHiddenChanged;
        return;
    }

    public void showFragment(Fragment r3) {
        if (DEBUG == false) goto L6;
        Log.v(TAG, "show: " + r3);
    L6:
        if (r3.mHidden == false) goto L9;
        r3.mHidden = false;
        r3.mHiddenChanged = !r3.mHiddenChanged;
        return;
    }

    public void detachFragment(Fragment r4) {
        if (DEBUG == false) goto L6;
        Log.v(TAG, "detach: " + r4);
    L6:
        if (r4.mDetached == true) goto L25;
        r4.mDetached = true;
        if (r4.mAdded == true) goto L10;
        return;
    L10:
        if (DEBUG == false) goto L12;
        Log.v(TAG, "remove from detach: " + r4);
    L12:
        ArrayList<Fragment> r1 = this.mAdded;
        monitor-enter(r1);
        this.mAdded.remove(r4);     // Catch: Throwable -> L22
        monitor-exit(r1);     // Catch: Throwable -> L22
        if (r4.mHasMenu == true) goto L19;
    L21:
        r4.mAdded = false;
        return;
    L19:
        if (r4.mMenuVisible == false) goto L21;
        this.mNeedMenuInvalidate = true;
    L22:
        th = move-exception;
        throw th;
    }

    public void attachFragment(Fragment r4) {
        if (DEBUG == false) goto L6;
        Log.v(TAG, "attach: " + r4);
    L6:
        if (r4.mDetached == false) goto L28;
        r4.mDetached = false;
        if (r4.mAdded == false) goto L10;
        return;
    L10:
        if (this.mAdded.contains(r4) == true) goto L27;
        if (DEBUG == false) goto L14;
        Log.v(TAG, "add from attach: " + r4);
    L14:
        ArrayList<Fragment> r0 = this.mAdded;
        monitor-enter(r0);
        this.mAdded.add(r4);     // Catch: Throwable -> L23
        monitor-exit(r0);     // Catch: Throwable -> L23
        r4.mAdded = true;
        if (r4.mHasMenu == true) goto L21;
        return;
    L21:
        if (r4.mMenuVisible == false) goto L33;
        this.mNeedMenuInvalidate = true;
        return;
    L33:
        return;
    L23:
        th = move-exception;
        throw th;
    L27:
        throw new IllegalStateException("Fragment already added: " + r4);
    }

    @Override
    @Nullable
    public Fragment findFragmentById(int r4) {
        int r0 = this.mAdded.size() - 1;
    L3:
        if (r0 < 0) goto L10;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L9;
        if (r1.mFragmentId != r4) goto L9;
        return r1;
    L9:
        r0 = r0 - 1;
        goto L3
    L10:
        SparseArray<Fragment> r02 = this.mActive;
        if (r02 == null) goto L20;
        int r03 = r02.size() - 1;
    L13:
        if (r03 < 0) goto L30;
        Fragment r12 = this.mActive.valueAt(r03);
        if (r12 == null) goto L19;
        if (r12.mFragmentId != r4) goto L19;
        return r12;
    L19:
        r03 = r03 - 1;
        goto L13
    L30:
        return null;
    L20:
        return null;
    }

    @Override
    @Nullable
    public Fragment findFragmentByTag(@Nullable String r4) {
        if (r4 == null) goto L11;
        int r0 = this.mAdded.size() - 1;
    L4:
        if (r0 < 0) goto L11;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L10;
        if (r4.equals(r1.mTag) == false) goto L10;
        return r1;
    L10:
        r0 = r0 - 1;
    L11:
        SparseArray<Fragment> r02 = this.mActive;
        if (r02 == null) goto L22;
        if (r4 == null) goto L32;
        int r03 = r02.size() - 1;
    L15:
        if (r03 < 0) goto L33;
        Fragment r12 = this.mActive.valueAt(r03);
        if (r12 == null) goto L21;
        if (r4.equals(r12.mTag) == false) goto L21;
        return r12;
    L21:
        r03 = r03 - 1;
        goto L15
    L33:
        return null;
    L32:
        return null;
    L22:
        return null;
    }

    public Fragment findFragmentByWho(String r3) {
        SparseArray<Fragment> r0 = this.mActive;
        if (r0 == null) goto L13;
        if (r3 == null) goto L19;
        int r02 = r0.size() - 1;
    L6:
        if (r02 < 0) goto L20;
        Fragment r1 = this.mActive.valueAt(r02);
        if (r1 == null) goto L12;
        Fragment r12 = r1.findFragmentByWho(r3);
        if (r12 == null) goto L12;
        return r12;
    L12:
        r02 = r02 - 1;
        goto L6
    L20:
        return null;
    L19:
        return null;
    L13:
        return null;
    }

    private void checkStateLoss() {
        if (isStateSaved() == true) goto L10;
        if (this.mNoTransactionsBecause != null) goto L8;
        return;
    L8:
        throw new IllegalStateException("Can not perform this action inside of " + this.mNoTransactionsBecause);
    L10:
        throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
    }

    @Override
    public boolean isStateSaved() {
        if (this.mStateSaved == false) goto L5;
    L8:
        return true;
    L5:
        if (this.mStopped == true) goto L8;
        return false;
    }

    public void enqueueAction(OpGenerator r2, boolean r3) {
        if (r3 == true) goto L4;
        checkStateLoss();
    L4:
        monitor-enter(this);
    L21:
        th = move-exception;
        throw th;
    L6:
        if (this.mDestroyed == false) goto L8;
    L16:
        if (r3 == false) goto L20;
        monitor-exit(this);     // Catch: Throwable -> L21
        return;
    L20:
        throw new IllegalStateException("Activity has been destroyed");     // Catch: Throwable -> L21
    L8:
        if (this.mHost == null) goto L16;
        if (this.mPendingActions != null) goto L13;
        this.mPendingActions = new ArrayList();     // Catch: Throwable -> L21
    L13:
        this.mPendingActions.add(r2);     // Catch: Throwable -> L21
        scheduleCommit();     // Catch: Throwable -> L21
        monitor-exit(this);     // Catch: Throwable -> L21
    }

    void scheduleCommit() {
        monitor-enter(this);
        boolean r1 = false;
        if (this.mPostponedTransactions != null) goto L6;
    L8:
        boolean r0 = false;
    L10:
        if (this.mPendingActions != null) goto L12;
    L14:
        if (r0 == true) goto L16;
        if (r1 == true) goto L16;
    L17:
        monitor-exit(this);     // Catch: Throwable -> L19
        return;
    L16:
        this.mHost.getHandler().removeCallbacks(this.mExecCommit);     // Catch: Throwable -> L19
        this.mHost.getHandler().post(this.mExecCommit);     // Catch: Throwable -> L19
        goto L17
    L12:
        if (this.mPendingActions.size() != 1) goto L14;
        r1 = true;
        goto L14
    L6:
        if (this.mPostponedTransactions.isEmpty() == true) goto L8;
        r0 = true;
    L19:
        th = move-exception;
        throw th;
    }

    public int allocBackStackIndex(BackStackRecord r5) {
        monitor-enter(this);
    L23:
        th = move-exception;
        throw th;
    L4:
        if (this.mAvailBackStackIndices == null) goto L15;
        if (this.mAvailBackStackIndices.size() <= 0) goto L15;
        int r0 = this.mAvailBackStackIndices.remove(this.mAvailBackStackIndices.size() - 1).intValue();     // Catch: Throwable -> L23
        if (DEBUG == false) goto L11;
        Log.v(TAG, "Adding back stack index " + r0 + " with " + r5);     // Catch: Throwable -> L23
    L11:
        this.mBackStackIndices.set(r0, r5);     // Catch: Throwable -> L23
        monitor-exit(this);     // Catch: Throwable -> L23
        return r0;
    L15:
        if (this.mBackStackIndices != null) goto L17;
        this.mBackStackIndices = new ArrayList();     // Catch: Throwable -> L23
    L17:
        int r02 = this.mBackStackIndices.size();     // Catch: Throwable -> L23
        if (DEBUG == false) goto L20;
        Log.v(TAG, "Setting back stack index " + r02 + " to " + r5);     // Catch: Throwable -> L23
    L20:
        this.mBackStackIndices.add(r5);     // Catch: Throwable -> L23
        monitor-exit(this);     // Catch: Throwable -> L23
        return r02;
    }

    public void setBackStackIndex(int r5, BackStackRecord r6) {
        monitor-enter(this);
    L26:
        th = move-exception;
        throw th;
    L4:
        if (this.mBackStackIndices != null) goto L6;
        this.mBackStackIndices = new ArrayList();     // Catch: Throwable -> L26
    L6:
        int r0 = this.mBackStackIndices.size();     // Catch: Throwable -> L26
        if (r5 < r0) goto L9;
    L12:
        if (r0 >= r5) goto L21;
        this.mBackStackIndices.add(null);     // Catch: Throwable -> L26
        if (this.mAvailBackStackIndices != null) goto L17;
        this.mAvailBackStackIndices = new ArrayList();     // Catch: Throwable -> L26
    L17:
        if (DEBUG == false) goto L19;
        Log.v(TAG, "Adding available back stack index " + r0);     // Catch: Throwable -> L26
    L19:
        this.mAvailBackStackIndices.add(Integer.valueOf(r0));     // Catch: Throwable -> L26
        r0 = r0 + 1;     // Catch: Throwable -> L26
        goto L12
    L21:
        if (DEBUG == false) goto L23;
        Log.v(TAG, "Adding back stack index " + r5 + " with " + r6);     // Catch: Throwable -> L26
    L23:
        this.mBackStackIndices.add(r6);     // Catch: Throwable -> L26
    L24:
        monitor-exit(this);     // Catch: Throwable -> L26
        return;
    L9:
        if (DEBUG == false) goto L11;
        Log.v(TAG, "Setting back stack index " + r5 + " to " + r6);     // Catch: Throwable -> L26
    L11:
        this.mBackStackIndices.set(r5, r6);     // Catch: Throwable -> L26
        goto L24
    }

    public void freeBackStackIndex(int r4) {
        monitor-enter(this);
        this.mBackStackIndices.set(r4, null);     // Catch: Throwable -> L12
        if (this.mAvailBackStackIndices != null) goto L7;
        this.mAvailBackStackIndices = new ArrayList();     // Catch: Throwable -> L12
    L7:
        if (DEBUG == false) goto L9;
        Log.v(TAG, "Freeing back stack index " + r4);     // Catch: Throwable -> L12
    L9:
        this.mAvailBackStackIndices.add(Integer.valueOf(r4));     // Catch: Throwable -> L12
        monitor-exit(this);     // Catch: Throwable -> L12
        return;
    L12:
        th = move-exception;
        throw th;
    }

    private void ensureExecReady(boolean r3) {
        if (this.mExecutingActions == true) goto L25;
        if (this.mHost == null) goto L23;
        if (Looper.myLooper() != this.mHost.getHandler().getLooper()) goto L21;
        if (r3 == true) goto L11;
        checkStateLoss();
    L11:
        if (this.mTmpRecords != null) goto L13;
        this.mTmpRecords = new ArrayList();
        this.mTmpIsPop = new ArrayList();
    L13:
        this.mExecutingActions = true;
        executePostponedTransaction(null, null);     // Catch: Throwable -> L17
        this.mExecutingActions = false;
        return;
    L17:
        th = move-exception;
        this.mExecutingActions = false;
        throw th;
    L21:
        throw new IllegalStateException("Must be called from main thread of fragment host");
    L23:
        throw new IllegalStateException("Fragment host has been destroyed");
    L25:
        throw new IllegalStateException("FragmentManager is already executing transactions");
    }

    public void execSingleAction(OpGenerator r2, boolean r3) {
        if (r3 == true) goto L4;
    L8:
        ensureExecReady(r3);
        if (r2.generateOps(this.mTmpRecords, this.mTmpIsPop) == false) goto L16;
        this.mExecutingActions = true;
        removeRedundantOperationsAndExecute(this.mTmpRecords, this.mTmpIsPop);     // Catch: Throwable -> L13
        cleanupExec();
    L13:
        th = move-exception;
        cleanupExec();
        throw th;
    L16:
        doPendingDeferredStart();
        burpActive();
        return;
    L4:
        if (this.mHost != null) goto L6;
        return;
    L6:
        if (this.mDestroyed == false) goto L8;
    }

    private void cleanupExec() {
        this.mExecutingActions = false;
        this.mTmpIsPop.clear();
        this.mTmpRecords.clear();
    }

    public boolean execPendingActions() {
        ensureExecReady(true);
        boolean r1 = false;
    L4:
        if (generateOpsForPendingActions(this.mTmpRecords, this.mTmpIsPop) == false) goto L11;
        this.mExecutingActions = true;
        removeRedundantOperationsAndExecute(this.mTmpRecords, this.mTmpIsPop);     // Catch: Throwable -> L8
        cleanupExec();
        r1 = true;
    L8:
        th = move-exception;
        cleanupExec();
        throw th;
    L11:
        doPendingDeferredStart();
        burpActive();
        return r1;
    }

    private void executePostponedTransaction(ArrayList<BackStackRecord> r8, ArrayList<Boolean> r9) {
        ArrayList<StartEnterTransitionListener> r0 = this.mPostponedTransactions;
        if (r0 != null) goto L5;
        int r02 = 0;
    L6:
        int r2 = r02;
        int r03 = 0;
    L7:
        if (r03 >= r2) goto L33;
        StartEnterTransitionListener r3 = this.mPostponedTransactions.get(r03);
        if (r8 == null) goto L18;
        if (r3.mIsBack == true) goto L18;
        int r5 = r8.indexOf(r3.mRecord);
        if (r5 == (-1)) goto L18;
        if (r9.get(r5).booleanValue() == false) goto L18;
        r3.cancelTransaction();
    L32:
        r03 = r03 + 1;
    L18:
        if (r3.isReady() == true) goto L22;
        if (r8 == null) goto L32;
        if (r3.mRecord.interactsWith(r8, 0, r8.size()) == false) goto L32;
    L22:
        this.mPostponedTransactions.remove(r03);
        r03 = r03 - 1;
        r2 = r2 - 1;
        if (r8 != null) goto L25;
    L31:
        r3.completeTransaction();
        goto L32
    L25:
        if (r3.mIsBack == true) goto L31;
        int r52 = r8.indexOf(r3.mRecord);
        if (r52 == (-1)) goto L31;
        if (r9.get(r52).booleanValue() == false) goto L31;
        r3.cancelTransaction();
        goto L32
    L33:
        return;
    L5:
        r02 = r0.size();
        goto L6
    }

    private void removeRedundantOperationsAndExecute(ArrayList<BackStackRecord> r5, ArrayList<Boolean> r6) {
        if (r5 != null) goto L4;
        return;
    L4:
        if (r5.isEmpty() == true) goto L38;
        if (r6 == null) goto L29;
        if (r5.size() != r6.size()) goto L29;
        executePostponedTransaction(r5, r6);
        int r0 = r5.size();
        int r1 = 0;
        int r2 = 0;
    L10:
        if (r1 >= r0) goto L25;
        if (r5.get(r1).mReorderingAllowed == true) goto L24;
        if (r2 == r1) goto L15;
        executeOpsTogether(r5, r6, r2, r1);
    L15:
        r2 = r1 + 1;
        if (r6.get(r1).booleanValue() == false) goto L23;
    L17:
        if (r2 >= r0) goto L23;
        if (r6.get(r2).booleanValue() == false) goto L23;
        if (r5.get(r2).mReorderingAllowed == true) goto L23;
        r2 = r2 + 1;
    L23:
        executeOpsTogether(r5, r6, r1, r2);
        r1 = r2 - 1;
    L24:
        r1 = r1 + 1;
        goto L10
    L25:
        if (r2 == r0) goto L37;
        executeOpsTogether(r5, r6, r2, r0);
        return;
    L37:
        return;
    L29:
        throw new IllegalStateException("Internal error with the back stack records");
    }

    private void executeOpsTogether(ArrayList<BackStackRecord> r16, ArrayList<Boolean> r17, int r18, int r19) {
        int r9 = r18;
        boolean r11 = r16.get(r9).mReorderingAllowed;
        ArrayList<Fragment> r0 = this.mTmpAddedFragments;
        if (r0 != null) goto L5;
        this.mTmpAddedFragments = new ArrayList();
    L6:
        this.mTmpAddedFragments.addAll(this.mAdded);
        Fragment r2 = getPrimaryNavigationFragment();
        int r02 = r9;
        boolean r12 = false;
    L8:
        if (r02 >= r19) goto L20;
        BackStackRecord r3 = r16.get(r02);
        if (r17.get(r02).booleanValue() == true) goto L12;
        r2 = r3.expandOps(this.mTmpAddedFragments, r2);
    L13:
        if (r12 == false) goto L15;
    L18:
        r12 = true;
    L19:
        r02 = r02 + 1;
        goto L8
    L15:
        if (r3.mAddToBackStack == true) goto L18;
        r12 = false;
        goto L19
    L12:
        r2 = r3.trackAddedFragmentsInPop(this.mTmpAddedFragments, r2);
        goto L13
    L20:
        this.mTmpAddedFragments.clear();
        if (r11 == true) goto L23;
        FragmentTransition.startTransitions(this, r16, r17, r18, r19, false);
    L23:
        executeOps(r16, r17, r18, r19);
        if (r11 == false) goto L26;
        ArraySet<Fragment> r14 = new ArraySet();
        addAddedFragments(r14);
        int r03 = postponePostponableTransactions(r16, r17, r18, r19, r14);
        makeRemovedFragmentsInvisible(r14);
        int r4 = r03;
    L27:
        if (r4 == r9) goto L30;
        if (r11 == false) goto L30;
        FragmentTransition.startTransitions(this, r16, r17, r18, r4, true);
        moveToState(this.mCurState, true);
    L30:
        if (r9 >= r19) goto L37;
        BackStackRecord r04 = r16.get(r9);
        if (r17.get(r9).booleanValue() == false) goto L36;
        if (r04.mIndex < 0) goto L36;
        freeBackStackIndex(r04.mIndex);
        r04.mIndex = -1;
    L36:
        r04.runOnCommitRunnables();
        r9 = r9 + 1;
        goto L30
    L37:
        if (r12 == false) goto L48;
        reportBackStackChanged();
        return;
    L48:
        return;
    L26:
        r4 = r19;
        goto L27
    L5:
        r0.clear();
        goto L6
    }

    private void makeRemovedFragmentsInvisible(ArraySet<Fragment> r6) {
        int r0 = r6.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        Fragment r2 = r6.valueAt(r1);
        if (r2.mAdded == true) goto L7;
        View r3 = r2.getView();
        r2.mPostponedAlpha = r3.getAlpha();
        r3.setAlpha(0.0f);
    L7:
        r1 = r1 + 1;
        goto L3
    }

    private int postponePostponableTransactions(ArrayList<BackStackRecord> r8, ArrayList<Boolean> r9, int r10, int r11, ArraySet<Fragment> r12) {
        int r0 = r11 - 1;
        int r1 = r11;
    L3:
        if (r0 < r10) goto L23;
        BackStackRecord r2 = r8.get(r0);
        boolean r3 = r9.get(r0).booleanValue();
        if (r2.isPostponed() == true) goto L7;
    L9:
        boolean r4 = false;
    L10:
        if (r4 == false) goto L22;
        if (this.mPostponedTransactions != null) goto L14;
        this.mPostponedTransactions = new ArrayList();
    L14:
        StartEnterTransitionListener r42 = new StartEnterTransitionListener(r2, r3);
        this.mPostponedTransactions.add(r42);
        r2.setOnStartPostponedListener(r42);
        if (r3 == false) goto L17;
        r2.executeOps();
    L18:
        r1 = r1 - 1;
        if (r0 == r1) goto L21;
        r8.remove(r0);
        r8.add(r1, r2);
    L21:
        addAddedFragments(r12);
        goto L22
    L17:
        r2.executePopOps(false);
    L22:
        r0 = r0 - 1;
        goto L3
    L7:
        if (r2.interactsWith(r8, r0 + 1, r11) == true) goto L9;
        r4 = true;
        goto L10
    L23:
        return r1;
    }

    void completeExecute(BackStackRecord r8, boolean r9, boolean r10, boolean r11) {
        if (r9 == false) goto L4;
        r8.executePopOps(r11);
    L5:
        ArrayList r1 = new ArrayList(1);
        ArrayList r2 = new ArrayList(1);
        r1.add(r8);
        r2.add(Boolean.valueOf(r9));
        if (r10 == false) goto L8;
        FragmentTransition.startTransitions(this, r1, r2, 0, 1, true);
    L8:
        if (r11 == false) goto L10;
        moveToState(this.mCurState, true);
    L10:
        SparseArray<Fragment> r92 = this.mActive;
        if (r92 == null) goto L29;
        int r93 = r92.size();
        int r0 = 0;
    L13:
        if (r0 >= r93) goto L37;
        Fragment r12 = this.mActive.valueAt(r0);
        if (r12 == null) goto L28;
        if (r12.mView == null) goto L28;
        if (r12.mIsNewlyAdded == false) goto L28;
        if (r8.interactsWith(r12.mContainerId) == false) goto L28;
        if (r12.mPostponedAlpha <= 0.0f) goto L25;
        r12.mView.setAlpha(r12.mPostponedAlpha);
    L25:
        if (r11 == false) goto L27;
        r12.mPostponedAlpha = 0.0f;
        goto L28
    L27:
        r12.mPostponedAlpha = -1.0f;
        r12.mIsNewlyAdded = false;
    L28:
        r0 = r0 + 1;
        goto L13
    L37:
        return;
    L29:
        return;
    L4:
        r8.executeOps();
        goto L5
    }

    private Fragment findFragmentUnder(Fragment r5) {
        ViewGroup r0 = r5.mContainer;
        View r1 = r5.mView;
        if (r0 == null) goto L14;
        if (r1 == null) goto L14;
        int r52 = this.mAdded.indexOf(r5) - 1;
    L7:
        if (r52 < 0) goto L14;
        Fragment r12 = this.mAdded.get(r52);
        if (r12.mContainer != r0) goto L13;
        if (r12.mView == null) goto L13;
        return r12;
    L13:
        r52 = r52 - 1;
    L14:
        return null;
    }

    private static void executeOps(ArrayList<BackStackRecord> r3, ArrayList<Boolean> r4, int r5, int r6) {
    L2:
        if (r5 >= r6) goto L12;
        BackStackRecord r0 = r3.get(r5);
        boolean r2 = true;
        if (r4.get(r5).booleanValue() == false) goto L10;
        r0.bumpBackStackNesting(-1);
        if (r5 == (r6 - 1)) goto L9;
        r2 = false;
    L9:
        r0.executePopOps(r2);
    L11:
        r5 = r5 + 1;
        goto L2
    L10:
        r0.bumpBackStackNesting(1);
        r0.executeOps();
        goto L11
    }

    private void addAddedFragments(ArraySet<Fragment> r11) {
        int r0 = this.mCurState;
        if (r0 >= 1) goto L5;
        return;
    L5:
        int r02 = Math.min(r0, 3);
        int r1 = this.mAdded.size();
        int r8 = 0;
    L6:
        if (r8 >= r1) goto L17;
        Fragment r9 = this.mAdded.get(r8);
        if (r9.mState >= r02) goto L16;
        moveToState(r9, r02, r9.getNextAnim(), r9.getNextTransition(), false);
        if (r9.mView == null) goto L16;
        if (r9.mHidden == true) goto L16;
        if (r9.mIsNewlyAdded == false) goto L16;
        r11.add(r9);
    L16:
        r8 = r8 + 1;
        goto L6
    }

    private void forcePostponedTransactions() {
        if (this.mPostponedTransactions != null) goto L5;
        return;
    L5:
        if (this.mPostponedTransactions.isEmpty() == true) goto L9;
        this.mPostponedTransactions.remove(0).completeTransaction();
        goto L5
    }

    private void endAnimatingAwayFragments() {
        SparseArray<Fragment> r0 = this.mActive;
        int r1 = 0;
        if (r0 != null) goto L5;
        int r02 = 0;
    L6:
        if (r1 >= r02) goto L19;
        Fragment r4 = this.mActive.valueAt(r1);
        if (r4 == null) goto L18;
        if (r4.getAnimatingAway() == null) goto L16;
        int r5 = r4.getStateAfterAnimating();
        View r2 = r4.getAnimatingAway();
        Animation r3 = r2.getAnimation();
        if (r3 == null) goto L14;
        r3.cancel();
        r2.clearAnimation();
    L14:
        r4.setAnimatingAway(null);
        moveToState(r4, r5, 0, 0, false);
        goto L18
    L16:
        if (r4.getAnimator() == null) goto L18;
        r4.getAnimator().end();
    L18:
        r1 = r1 + 1;
        goto L6
    L19:
        return;
    L5:
        r02 = r0.size();
        goto L6
    }

    private boolean generateOpsForPendingActions(ArrayList<BackStackRecord> r5, ArrayList<Boolean> r6) {
        monitor-enter(this);
        int r1 = 0;
        if (this.mPendingActions != null) goto L6;
    L14:
        monitor-exit(this);     // Catch: Throwable -> L16
        return false;
    L6:
        if (this.mPendingActions.size() == 0) goto L14;
        int r0 = this.mPendingActions.size();     // Catch: Throwable -> L16
        boolean r2 = false;
    L9:
        if (r1 >= r0) goto L11;
        r2 = r2 | this.mPendingActions.get(r1).generateOps(r5, r6);     // Catch: Throwable -> L16
        r1 = r1 + 1;     // Catch: Throwable -> L16
        goto L9
    L11:
        this.mPendingActions.clear();     // Catch: Throwable -> L16
        this.mHost.getHandler().removeCallbacks(this.mExecCommit);     // Catch: Throwable -> L16
        monitor-exit(this);     // Catch: Throwable -> L16
        return r2;
    L16:
        th = move-exception;
        throw th;
    }

    void doPendingDeferredStart() {
        if (this.mHavePendingDeferredStart == false) goto L6;
        this.mHavePendingDeferredStart = false;
        startPendingDeferredFragments();
        return;
    }

    void reportBackStackChanged() {
        if (this.mBackStackChangeListeners == null) goto L8;
        int r0 = 0;
    L6:
        if (r0 >= this.mBackStackChangeListeners.size()) goto L10;
        this.mBackStackChangeListeners.get(r0).onBackStackChanged();
        r0 = r0 + 1;
        goto L6
    L10:
        return;
    }

    void addBackStackState(BackStackRecord r2) {
        if (this.mBackStack != null) goto L5;
        this.mBackStack = new ArrayList();
    L5:
        this.mBackStack.add(r2);
    }

    boolean popBackStackState(ArrayList<BackStackRecord> r6, ArrayList<Boolean> r7, String r8, int r9, int r10) {
        ArrayList<BackStackRecord> r0 = this.mBackStack;
        if (r0 != null) goto L6;
        return false;
    L6:
        if (r8 != null) goto L14;
        if (r9 >= 0) goto L14;
        if ((r10 & 1) != 0) goto L14;
        int r82 = r0.size() - 1;
        if (r82 >= 0) goto L13;
        return false;
    L13:
        r6.add(this.mBackStack.remove(r82));
        r7.add(true);
    L50:
        return true;
    L14:
        if (r8 != null) goto L18;
        if (r9 >= 0) goto L18;
        int r02 = -1;
    L45:
        if (r02 != (this.mBackStack.size() - 1)) goto L47;
        return false;
    L47:
        int r83 = this.mBackStack.size() - 1;
    L48:
        if (r83 <= r02) goto L50;
        r6.add(this.mBackStack.remove(r83));
        r7.add(true);
        r83 = r83 - 1;
    L18:
        r02 = this.mBackStack.size() - 1;
    L19:
        if (r02 < 0) goto L30;
        BackStackRecord r3 = this.mBackStack.get(r02);
        if (r8 != null) goto L23;
    L25:
        if (r9 < 0) goto L29;
        if (r9 == r3.mIndex) goto L30;
    L29:
        r02 = r02 - 1;
        goto L19
    L23:
        if (r8.equals(r3.getName()) == false) goto L25;
    L30:
        if (r02 >= 0) goto L33;
        return false;
    L33:
        if ((r10 & 1) == 0) goto L45;
    L34:
        r02 = r02 - 1;
        if (r02 < 0) goto L45;
        BackStackRecord r102 = this.mBackStack.get(r02);
        if (r8 == null) goto L40;
        if (r8.equals(r102.getName()) == true) goto L34;
    L40:
        if (r9 < 0) goto L45;
        if (r9 != r102.mIndex) goto L45;
        goto L45
    }

    FragmentManagerNonConfig retainNonConfig() {
        setRetaining(this.mSavedNonConfig);
        return this.mSavedNonConfig;
    }

    private static void setRetaining(FragmentManagerNonConfig r3) {
        if (r3 != null) goto L4;
        return;
    L4:
        List<Fragment> r0 = r3.getFragments();
        if (r0 == null) goto L10;
        Iterator<Fragment> r02 = r0.iterator();
    L8:
        if (r02.hasNext() == false) goto L10;
        r02.next().mRetaining = true;
    L10:
        List<FragmentManagerNonConfig> r32 = r3.getChildNonConfigs();
        if (r32 == null) goto L16;
        Iterator<FragmentManagerNonConfig> r33 = r32.iterator();
    L14:
        if (r33.hasNext() == false) goto L19;
        setRetaining(r33.next());
        goto L14
    L19:
        return;
    }

    void saveNonConfig() {
        if (this.mActive == null) goto L40;
        ArrayList r3 = null;
        ArrayList r4 = null;
        ArrayList r5 = null;
        int r2 = 0;
    L6:
        if (r2 >= this.mActive.size()) goto L41;
        Fragment r6 = this.mActive.valueAt(r2);
        if (r6 == null) goto L39;
        if (r6.mRetainInstance == false) goto L21;
        if (r3 != null) goto L13;
        r3 = new ArrayList();
    L13:
        r3.add(r6);
        if (r6.mTarget == null) goto L16;
        int r7 = r6.mTarget.mIndex;
    L17:
        r6.mTargetIndex = r7;
        if (DEBUG == false) goto L21;
        Log.v(TAG, "retainNonConfig: keeping retained " + r6);
        goto L21
    L16:
        r7 = -1;
    L21:
        if (r6.mChildFragmentManager == null) goto L23;
        r6.mChildFragmentManager.saveNonConfig();
        FragmentManagerNonConfig r72 = r6.mChildFragmentManager.mSavedNonConfig;
    L24:
        if (r4 != null) goto L29;
        if (r72 == null) goto L29;
        r4 = new ArrayList(this.mActive.size());
        int r8 = 0;
    L27:
        if (r8 >= r2) goto L29;
        r4.add(null);
        r8 = r8 + 1;
    L29:
        if (r4 == null) goto L31;
        r4.add(r72);
    L31:
        if (r5 == null) goto L33;
    L37:
        if (r5 == null) goto L39;
        r5.add(r6.mViewModelStore);
        goto L39
    L33:
        if (r6.mViewModelStore == null) goto L37;
        r5 = new ArrayList(this.mActive.size());
        int r73 = 0;
    L35:
        if (r73 >= r2) goto L37;
        r5.add(null);
        r73 = r73 + 1;
        goto L35
    L23:
        r72 = r6.mChildNonConfig;
    L39:
        r2 = r2 + 1;
    L41:
        if (r3 != null) goto L45;
        if (r4 != null) goto L45;
        if (r5 != null) goto L45;
        this.mSavedNonConfig = null;
        return;
    L45:
        this.mSavedNonConfig = new FragmentManagerNonConfig(r3, r4, r5);
        return;
    L40:
        r3 = null;
        r4 = null;
        r5 = null;
        goto L41
    }

    void saveFragmentViewState(Fragment r3) {
        if (r3.mInnerView != null) goto L5;
        return;
    L5:
        SparseArray<Parcelable> r0 = this.mStateArray;
        if (r0 != null) goto L8;
        this.mStateArray = new SparseArray();
    L9:
        r3.mInnerView.saveHierarchyState(this.mStateArray);
        if (this.mStateArray.size() <= 0) goto L13;
        r3.mSavedViewState = this.mStateArray;
        this.mStateArray = null;
        return;
    L13:
        return;
    L8:
        r0.clear();
        goto L9
    }

    Bundle saveFragmentBasicState(Fragment r4) {
        if (this.mStateBundle != null) goto L5;
        this.mStateBundle = new Bundle();
    L5:
        r4.performSaveInstanceState(this.mStateBundle);
        dispatchOnFragmentSaveInstanceState(r4, this.mStateBundle, false);
        if (this.mStateBundle.isEmpty() == true) goto L8;
        Bundle r0 = this.mStateBundle;
        this.mStateBundle = null;
    L10:
        if (r4.mView == null) goto L13;
        saveFragmentViewState(r4);
    L13:
        if (r4.mSavedViewState == null) goto L18;
        if (r0 != null) goto L16;
        r0 = new Bundle();
    L16:
        r0.putSparseParcelableArray(VIEW_STATE_TAG, r4.mSavedViewState);
    L18:
        if (r4.mUserVisibleHint == true) goto L22;
        if (r0 != null) goto L21;
        r0 = new Bundle();
    L21:
        r0.putBoolean(USER_VISIBLE_HINT_TAG, r4.mUserVisibleHint);
    L22:
        return r0;
    L8:
        r0 = null;
        goto L10
    }

    Parcelable saveAllState() {
        forcePostponedTransactions();
        endAnimatingAwayFragments();
        execPendingActions();
        this.mStateSaved = true;
        BackStackState[] r1 = null;
        this.mSavedNonConfig = null;
        SparseArray<Fragment> r2 = this.mActive;
        if (r2 != null) goto L5;
    L68:
        return null;
    L5:
        if (r2.size() <= 0) goto L68;
        int r22 = this.mActive.size();
        FragmentState[] r3 = new FragmentState[r22];
        int r4 = 0;
        int r5 = 0;
        boolean r6 = false;
    L9:
        if (r5 >= r22) goto L36;
        Fragment r11 = this.mActive.valueAt(r5);
        if (r11 == null) goto L35;
        if (r11.mIndex >= 0) goto L15;
        throwException(new IllegalStateException("Failure saving state: active " + r11 + " has cleared index: " + r11.mIndex));
    L15:
        FragmentState r62 = new FragmentState(r11);
        r3[r5] = r62;
        if (r11.mState > 0) goto L18;
    L30:
        r62.mSavedFragmentState = r11.mSavedFragmentState;
    L32:
        if (DEBUG == false) goto L34;
        Log.v(TAG, "Saved state of " + r11 + ": " + r62.mSavedFragmentState);
    L34:
        r6 = true;
        goto L35
    L18:
        if (r62.mSavedFragmentState != null) goto L30;
        r62.mSavedFragmentState = saveFragmentBasicState(r11);
        if (r11.mTarget == null) goto L32;
        if (r11.mTarget.mIndex >= 0) goto L25;
        throwException(new IllegalStateException("Failure saving state: " + r11 + " has target not in fragment manager: " + r11.mTarget));
    L25:
        if (r62.mSavedFragmentState != null) goto L27;
        r62.mSavedFragmentState = new Bundle();
    L27:
        putFragment(r62.mSavedFragmentState, TARGET_STATE_TAG, r11.mTarget);
        if (r11.mTargetRequestCode == 0) goto L32;
        r62.mSavedFragmentState.putInt(TARGET_REQUEST_CODE_STATE_TAG, r11.mTargetRequestCode);
    L35:
        r5 = r5 + 1;
        goto L9
    L36:
        if (r6 == false) goto L38;
        int r0 = this.mAdded.size();
        if (r0 <= 0) goto L52;
        int[] r23 = new int[r0];
        int r52 = 0;
    L44:
        if (r52 >= r0) goto L53;
        r23[r52] = this.mAdded.get(r52).mIndex;
        if (r23[r52] >= 0) goto L49;
        throwException(new IllegalStateException("Failure saving state: active " + this.mAdded.get(r52) + " has cleared index: " + r23[r52]));
    L49:
        if (DEBUG == false) goto L51;
        Log.v(TAG, "saveAllState: adding fragment #" + r52 + ": " + this.mAdded.get(r52));
    L51:
        r52 = r52 + 1;
    L53:
        ArrayList<BackStackRecord> r02 = this.mBackStack;
        if (r02 == null) goto L63;
        int r03 = r02.size();
        if (r03 <= 0) goto L63;
        r1 = new BackStackState[r03];
    L58:
        if (r4 >= r03) goto L63;
        r1[r4] = new BackStackState(this.mBackStack.get(r4));
        if (DEBUG == false) goto L62;
        Log.v(TAG, "saveAllState: adding back stack #" + r4 + ": " + this.mBackStack.get(r4));
    L62:
        r4 = r4 + 1;
    L63:
        FragmentManagerState r04 = new FragmentManagerState();
        r04.mActive = r3;
        r04.mAdded = r23;
        r04.mBackStack = r1;
        Fragment r12 = this.mPrimaryNav;
        if (r12 == null) goto L66;
        r04.mPrimaryNavActiveIndex = r12.mIndex;
    L66:
        r04.mNextFragmentIndex = this.mNextFragmentIndex;
        saveNonConfig();
        return r04;
    L52:
        r23 = null;
        goto L53
    L38:
        if (DEBUG == false) goto L40;
        Log.v(TAG, "saveAllState: no fragments!");
    L40:
        return null;
    }

    void restoreAllState(Parcelable r13, FragmentManagerNonConfig r14) {
        if (r13 != null) goto L4;
        return;
    L4:
        FragmentManagerState r132 = (FragmentManagerState) r13;
        if (r132.mActive != null) goto L8;
        return;
    L8:
        if (r14 == null) goto L31;
        List<Fragment> r2 = r14.getFragments();
        List<FragmentManagerNonConfig> r3 = r14.getChildNonConfigs();
        List<ViewModelStore> r4 = r14.getViewModelStores();
        if (r2 == null) goto L12;
        int r5 = r2.size();
    L13:
        int r6 = 0;
    L14:
        if (r6 >= r5) goto L32;
        Fragment r7 = r2.get(r6);
        if (DEBUG == false) goto L18;
        Log.v(TAG, "restoreAllState: re-attaching retained " + r7);
    L18:
        int r8 = 0;
    L20:
        if (r8 >= r132.mActive.length) goto L25;
        if (r132.mActive[r8].mIndex == r7.mIndex) goto L25;
        r8 = r8 + 1;
    L25:
        if (r8 != r132.mActive.length) goto L27;
        throwException(new IllegalStateException("Could not find active fragment with index " + r7.mIndex));
    L27:
        FragmentState r82 = r132.mActive[r8];
        r82.mInstance = r7;
        r7.mSavedViewState = null;
        r7.mBackStackNesting = 0;
        r7.mInLayout = false;
        r7.mAdded = false;
        r7.mTarget = null;
        if (r82.mSavedFragmentState == null) goto L30;
        r82.mSavedFragmentState.setClassLoader(this.mHost.getContext().getClassLoader());
        r7.mSavedViewState = r82.mSavedFragmentState.getSparseParcelableArray(VIEW_STATE_TAG);
        r7.mSavedFragmentState = r82.mSavedFragmentState;
    L30:
        r6 = r6 + 1;
    L32:
        this.mActive = new SparseArray(r132.mActive.length);
        int r22 = 0;
    L34:
        if (r22 >= r132.mActive.length) goto L52;
        FragmentState r52 = r132.mActive[r22];
        if (r52 == null) goto L51;
        if (r3 != null) goto L39;
    L41:
        FragmentManagerNonConfig r10 = null;
    L42:
        if (r4 != null) goto L44;
    L46:
        ViewModelStore r11 = null;
    L47:
        Fragment r62 = r52.instantiate(this.mHost, this.mContainer, this.mParent, r10, r11);
        if (DEBUG == false) goto L50;
        Log.v(TAG, "restoreAllState: active #" + r22 + ": " + r62);
    L50:
        this.mActive.put(r62.mIndex, r62);
        r52.mInstance = null;
        goto L51
    L44:
        if (r22 >= r4.size()) goto L46;
        r11 = r4.get(r22);
        goto L47
    L39:
        if (r22 >= r3.size()) goto L41;
        r10 = r3.get(r22);
    L51:
        r22 = r22 + 1;
        goto L34
    L52:
        if (r14 == null) goto L65;
        List<Fragment> r142 = r14.getFragments();
        if (r142 == null) goto L56;
        int r23 = r142.size();
    L57:
        int r32 = 0;
    L58:
        if (r32 >= r23) goto L65;
        Fragment r42 = r142.get(r32);
        if (r42.mTargetIndex < 0) goto L64;
        r42.mTarget = this.mActive.get(r42.mTargetIndex);
        if (r42.mTarget != null) goto L64;
        Log.w(TAG, "Re-attaching retained fragment " + r42 + " target no longer exists: " + r42.mTargetIndex);
    L64:
        r32 = r32 + 1;
        goto L58
    L56:
        r23 = 0;
    L65:
        this.mAdded.clear();
        if (r132.mAdded == null) goto L89;
        int r143 = 0;
    L69:
        if (r143 >= r132.mAdded.length) goto L89;
        Fragment r24 = this.mActive.get(r132.mAdded[r143]);
        if (r24 != null) goto L73;
        throwException(new IllegalStateException("No instantiated fragment for index #" + r132.mAdded[r143]));
    L73:
        r24.mAdded = true;
        if (DEBUG == false) goto L77;
        Log.v(TAG, "restoreAllState: added #" + r143 + ": " + r24);
    L77:
        if (this.mAdded.contains(r24) == true) goto L87;
        ArrayList<Fragment> r33 = this.mAdded;
        monitor-enter(r33);
        this.mAdded.add(r24);     // Catch: Throwable -> L83
        monitor-exit(r33);     // Catch: Throwable -> L83
        r143 = r143 + 1;     // Catch: Throwable -> L83
    L83:
        th = move-exception;
        throw th;
    L87:
        throw new IllegalStateException("Already added!");
    L89:
        if (r132.mBackStack == null) goto L100;
        this.mBackStack = new ArrayList(r132.mBackStack.length);
        int r144 = 0;
    L92:
        if (r144 >= r132.mBackStack.length) goto L102;
        BackStackRecord r0 = r132.mBackStack[r144].instantiate(this);
        if (DEBUG == false) goto L96;
        Log.v(TAG, "restoreAllState: back stack #" + r144 + " (index " + r0.mIndex + "): " + r0);
        PrintWriter r34 = new PrintWriter(new LogWriter(TAG));
        r0.dump("  ", r34, false);
        r34.close();
    L96:
        this.mBackStack.add(r0);
        if (r0.mIndex < 0) goto L99;
        setBackStackIndex(r0.mIndex, r0);
    L99:
        r144 = r144 + 1;
    L102:
        if (r132.mPrimaryNavActiveIndex < 0) goto L104;
        this.mPrimaryNav = this.mActive.get(r132.mPrimaryNavActiveIndex);
    L104:
        this.mNextFragmentIndex = r132.mNextFragmentIndex;
        return;
    L100:
        this.mBackStack = null;
        goto L102
    L12:
        r5 = 0;
        goto L13
    L31:
        r3 = null;
        r4 = null;
        goto L32
    }

    private void burpActive() {
        SparseArray<Fragment> r0 = this.mActive;
        if (r0 == null) goto L10;
        int r02 = r0.size() - 1;
    L5:
        if (r02 < 0) goto L14;
        if (this.mActive.valueAt(r02) != null) goto L9;
        SparseArray<Fragment> r1 = this.mActive;
        r1.delete(r1.keyAt(r02));
    L9:
        r02 = r02 - 1;
        goto L5
    L14:
        return;
    }

    public void attachController(FragmentHostCallback r2, FragmentContainer r3, Fragment r4) {
        if (this.mHost != null) goto L7;
        this.mHost = r2;
        this.mContainer = r3;
        this.mParent = r4;
        return;
    L7:
        throw new IllegalStateException("Already attached");
    }

    public void noteStateNotSaved() {
        this.mSavedNonConfig = null;
        int r0 = 0;
        this.mStateSaved = false;
        this.mStopped = false;
        int r1 = this.mAdded.size();
    L3:
        if (r0 >= r1) goto L8;
        Fragment r2 = this.mAdded.get(r0);
        if (r2 == null) goto L7;
        r2.noteStateNotSaved();
    L7:
        r0 = r0 + 1;
        goto L3
    }

    public void dispatchCreate() {
        this.mStateSaved = false;
        this.mStopped = false;
        dispatchStateChange(1);
    }

    public void dispatchActivityCreated() {
        this.mStateSaved = false;
        this.mStopped = false;
        dispatchStateChange(2);
    }

    public void dispatchStart() {
        this.mStateSaved = false;
        this.mStopped = false;
        dispatchStateChange(3);
    }

    public void dispatchResume() {
        this.mStateSaved = false;
        this.mStopped = false;
        dispatchStateChange(4);
    }

    public void dispatchPause() {
        dispatchStateChange(3);
    }

    public void dispatchStop() {
        this.mStopped = true;
        dispatchStateChange(2);
    }

    public void dispatchDestroyView() {
        dispatchStateChange(1);
    }

    public void dispatchDestroy() {
        this.mDestroyed = true;
        execPendingActions();
        dispatchStateChange(0);
        this.mHost = null;
        this.mContainer = null;
        this.mParent = null;
    }

    private void dispatchStateChange(int r3) {
        this.mExecutingActions = true;     // Catch: Throwable -> L6
        moveToState(r3, false);     // Catch: Throwable -> L6
        this.mExecutingActions = false;
        execPendingActions();
        return;
    L6:
        th = move-exception;
        this.mExecutingActions = false;
        throw th;
    }

    public void dispatchMultiWindowModeChanged(boolean r3) {
        int r0 = this.mAdded.size() - 1;
    L3:
        if (r0 < 0) goto L8;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L7;
        r1.performMultiWindowModeChanged(r3);
    L7:
        r0 = r0 - 1;
        goto L3
    }

    public void dispatchPictureInPictureModeChanged(boolean r3) {
        int r0 = this.mAdded.size() - 1;
    L3:
        if (r0 < 0) goto L8;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L7;
        r1.performPictureInPictureModeChanged(r3);
    L7:
        r0 = r0 - 1;
        goto L3
    }

    public void dispatchConfigurationChanged(Configuration r3) {
        int r0 = 0;
    L4:
        if (r0 >= this.mAdded.size()) goto L9;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L8;
        r1.performConfigurationChanged(r3);
    L8:
        r0 = r0 + 1;
        goto L4
    }

    public void dispatchLowMemory() {
        int r0 = 0;
    L4:
        if (r0 >= this.mAdded.size()) goto L9;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L8;
        r1.performLowMemory();
    L8:
        r0 = r0 + 1;
        goto L4
    }

    public boolean dispatchCreateOptionsMenu(Menu r8, MenuInflater r9) {
        int r1 = 0;
        if (this.mCurState >= 1) goto L5;
        return false;
    L5:
        ArrayList<Fragment> r3 = null;
        int r0 = 0;
        boolean r4 = false;
    L7:
        if (r0 >= this.mAdded.size()) goto L17;
        Fragment r5 = this.mAdded.get(r0);
        if (r5 == null) goto L15;
        if (r5.performCreateOptionsMenu(r8, r9) == false) goto L15;
        if (r3 != null) goto L14;
        r3 = new ArrayList();
    L14:
        r3.add(r5);
        r4 = true;
    L15:
        r0 = r0 + 1;
        goto L7
    L17:
        if (this.mCreatedMenus != null) goto L19;
    L26:
        this.mCreatedMenus = r3;
        return r4;
    L19:
        if (r1 >= this.mCreatedMenus.size()) goto L26;
        Fragment r82 = this.mCreatedMenus.get(r1);
        if (r3 != null) goto L23;
    L24:
        r82.onDestroyOptionsMenu();
    L25:
        r1 = r1 + 1;
        goto L19
    L23:
        if (r3.contains(r82) == true) goto L25;
        goto L24
    }

    public boolean dispatchPrepareOptionsMenu(Menu r5) {
        int r1 = 0;
        if (this.mCurState >= 1) goto L5;
        return false;
    L5:
        boolean r0 = false;
    L7:
        if (r1 >= this.mAdded.size()) goto L14;
        Fragment r3 = this.mAdded.get(r1);
        if (r3 == null) goto L13;
        if (r3.performPrepareOptionsMenu(r5) == false) goto L13;
        r0 = true;
    L13:
        r1 = r1 + 1;
        goto L7
    L14:
        return r0;
    }

    public boolean dispatchOptionsItemSelected(MenuItem r5) {
        if (this.mCurState >= 1) goto L5;
        return false;
    L5:
        int r0 = 0;
    L7:
        if (r0 >= this.mAdded.size()) goto L14;
        Fragment r3 = this.mAdded.get(r0);
        if (r3 == null) goto L13;
        if (r3.performOptionsItemSelected(r5) == false) goto L13;
        return true;
    L13:
        r0 = r0 + 1;
        goto L7
    L14:
        return false;
    }

    public boolean dispatchContextItemSelected(MenuItem r5) {
        if (this.mCurState >= 1) goto L5;
        return false;
    L5:
        int r0 = 0;
    L7:
        if (r0 >= this.mAdded.size()) goto L14;
        Fragment r3 = this.mAdded.get(r0);
        if (r3 == null) goto L13;
        if (r3.performContextItemSelected(r5) == false) goto L13;
        return true;
    L13:
        r0 = r0 + 1;
        goto L7
    L14:
        return false;
    }

    public void dispatchOptionsMenuClosed(Menu r3) {
        if (this.mCurState >= 1) goto L5;
        return;
    L5:
        int r0 = 0;
    L7:
        if (r0 >= this.mAdded.size()) goto L12;
        Fragment r1 = this.mAdded.get(r0);
        if (r1 == null) goto L11;
        r1.performOptionsMenuClosed(r3);
    L11:
        r0 = r0 + 1;
        goto L7
    }

    public void setPrimaryNavigationFragment(Fragment r4) {
        if (r4 != null) goto L4;
    L12:
        this.mPrimaryNav = r4;
        return;
    L4:
        if (this.mActive.get(r4.mIndex) != r4) goto L11;
        if (r4.mHost == null) goto L12;
        if (r4.getFragmentManager() == this) goto L12;
    L11:
        throw new IllegalArgumentException("Fragment " + r4 + " is not an active fragment of FragmentManager " + this);
    }

    @Override
    @Nullable
    public Fragment getPrimaryNavigationFragment() {
        return this.mPrimaryNav;
    }

    @Override
    public void registerFragmentLifecycleCallbacks(FragmentManager.FragmentLifecycleCallbacks r3, boolean r4) {
        this.mLifecycleCallbacks.add(new FragmentLifecycleCallbacksHolder(r3, r4));
    }

    @Override
    public void unregisterFragmentLifecycleCallbacks(FragmentManager.FragmentLifecycleCallbacks r5) {
        CopyOnWriteArrayList<FragmentLifecycleCallbacksHolder> r0 = this.mLifecycleCallbacks;
        monitor-enter(r0);
        int r1 = 0;
        int r2 = this.mLifecycleCallbacks.size();     // Catch: Throwable -> L13
    L6:
        if (r1 >= r2) goto L11;
        if (this.mLifecycleCallbacks.get(r1).mCallback == r5) goto L9;
        r1 = r1 + 1;     // Catch: Throwable -> L13
        goto L6
    L9:
        this.mLifecycleCallbacks.remove(r1);     // Catch: Throwable -> L13
    L11:
        monitor-exit(r0);     // Catch: Throwable -> L13
        return;
    L13:
        th = move-exception;
        throw th;
    }

    void dispatchOnFragmentPreAttached(@NonNull Fragment r4, @NonNull Context r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentPreAttached(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentPreAttached(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentAttached(@NonNull Fragment r4, @NonNull Context r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentAttached(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentAttached(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentPreCreated(@NonNull Fragment r4, @Nullable Bundle r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentPreCreated(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentPreCreated(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentCreated(@NonNull Fragment r4, @Nullable Bundle r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentCreated(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentCreated(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentActivityCreated(@NonNull Fragment r4, @Nullable Bundle r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentActivityCreated(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentActivityCreated(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentViewCreated(@NonNull Fragment r4, @NonNull View r5, @Nullable Bundle r6, boolean r7) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentViewCreated(r4, r5, r6, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r7 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentViewCreated(this, r4, r5, r6);
        goto L9
    }

    void dispatchOnFragmentStarted(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentStarted(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentStarted(this, r4);
        goto L9
    }

    void dispatchOnFragmentResumed(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentResumed(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentResumed(this, r4);
        goto L9
    }

    void dispatchOnFragmentPaused(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentPaused(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentPaused(this, r4);
        goto L9
    }

    void dispatchOnFragmentStopped(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentStopped(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentStopped(this, r4);
        goto L9
    }

    void dispatchOnFragmentSaveInstanceState(@NonNull Fragment r4, @NonNull Bundle r5, boolean r6) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentSaveInstanceState(r4, r5, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r6 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentSaveInstanceState(this, r4, r5);
        goto L9
    }

    void dispatchOnFragmentViewDestroyed(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentViewDestroyed(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentViewDestroyed(this, r4);
        goto L9
    }

    void dispatchOnFragmentDestroyed(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentDestroyed(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentDestroyed(this, r4);
        goto L9
    }

    void dispatchOnFragmentDetached(@NonNull Fragment r4, boolean r5) {
        Fragment r0 = this.mParent;
        if (r0 == null) goto L7;
        FragmentManager r02 = r0.getFragmentManager();
        if ((r02 instanceof FragmentManagerImpl) == false) goto L7;
        ((FragmentManagerImpl) r02).dispatchOnFragmentDetached(r4, true);
    L7:
        Iterator<FragmentLifecycleCallbacksHolder> r03 = this.mLifecycleCallbacks.iterator();
    L9:
        if (r03.hasNext() == false) goto L15;
        FragmentLifecycleCallbacksHolder r1 = r03.next();
        if (r5 == false) goto L14;
        if (r1.mRecursive == false) goto L9;
    L14:
        r1.mCallback.onFragmentDetached(this, r4);
        goto L9
    }

    @Override
    public View onCreateView(View r13, String r14, Context r15, AttributeSet r16) {
        if ("fragment".equals(r14) == true) goto L5;
        return null;
    L5:
        String r2 = r16.getAttributeValue(null, "class");
        TypedArray r4 = r15.obtainStyledAttributes(r16, FragmentTag.Fragment);
        int r5 = 0;
        if (r2 != null) goto L8;
        r2 = r4.getString(0);
    L8:
        String r7 = r2;
        int r9 = r4.getResourceId(1, -1);
        String r10 = r4.getString(2);
        r4.recycle();
        if (Fragment.isSupportFragmentClass(this.mHost.getContext(), r7) == true) goto L11;
        return null;
    L11:
        if (r13 == null) goto L13;
        r5 = r13.getId();
    L13:
        if (r5 != (-1)) goto L19;
        if (r9 != (-1)) goto L19;
        if (r10 != null) goto L19;
        throw new IllegalArgumentException(r16.getPositionDescription() + ": Must specify unique android:id, android:tag, or have a parent with an id for " + r7);
    L19:
        if (r9 == (-1)) goto L21;
        Fragment r42 = findFragmentById(r9);
    L22:
        if (r42 != null) goto L25;
        if (r10 == null) goto L25;
        r42 = findFragmentByTag(r10);
    L25:
        if (r42 != null) goto L29;
        if (r5 == (-1)) goto L29;
        r42 = findFragmentById(r5);
    L29:
        if (DEBUG == false) goto L31;
        Log.v(TAG, "onCreateView: id=0x" + Integer.toHexString(r9) + " fname=" + r7 + " existing=" + r42);
    L31:
        if (r42 != null) goto L38;
        Fragment r0 = this.mContainer.instantiate(r15, r7, null);
        r0.mFromLayout = true;
        if (r9 == 0) goto L35;
        int r22 = r9;
    L36:
        r0.mFragmentId = r22;
        r0.mContainerId = r5;
        r0.mTag = r10;
        r0.mInLayout = true;
        r0.mFragmentManager = this;
        FragmentHostCallback r23 = this.mHost;
        r0.mHost = r23;
        r0.onInflate(r23.getContext(), r16, r0.mSavedFragmentState);
        addFragment(r0, true);
        Fragment r11 = r0;
    L44:
        if (this.mCurState < 1) goto L46;
    L48:
        moveToState(r11);
    L50:
        if (r11.mView == null) goto L59;
        if (r9 == 0) goto L54;
        r11.mView.setId(r9);
    L54:
        if (r11.mView.getTag() != null) goto L57;
        r11.mView.setTag(r10);
    L57:
        return r11.mView;
    L59:
        throw new IllegalStateException("Fragment " + r7 + " did not create a view.");
    L46:
        if (r11.mFromLayout == false) goto L48;
        moveToState(r11, 1, 0, 0, false);
        goto L50
    L35:
        r22 = r5;
        goto L36
    L38:
        if (r42.mInLayout == true) goto L61;
        r42.mInLayout = true;
        r42.mHost = this.mHost;
        if (r42.mRetaining == true) goto L42;
        r42.onInflate(this.mHost.getContext(), r16, r42.mSavedFragmentState);
    L42:
        r11 = r42;
        goto L44
    L61:
        throw new IllegalArgumentException(r16.getPositionDescription() + ": Duplicate id 0x" + Integer.toHexString(r9) + ", tag " + r10 + ", or parent id 0x" + Integer.toHexString(r5) + " with another fragment for " + r7);
    L21:
        r42 = null;
        goto L22
    }

    @Override
    public View onCreateView(String r2, Context r3, AttributeSet r4) {
        return onCreateView(null, r2, r3, r4);
    }
}
