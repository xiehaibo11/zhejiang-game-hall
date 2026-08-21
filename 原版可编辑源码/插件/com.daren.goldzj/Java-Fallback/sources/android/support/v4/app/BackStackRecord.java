package android.support.v4.app;

import android.support.annotation.Nullable;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentManagerImpl;
import android.support.v4.util.LogWriter;
import android.support.v4.view.ViewCompat;
import android.util.Log;
import android.view.View;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Modifier;
import java.util.ArrayList;

final class BackStackRecord extends FragmentTransaction implements FragmentManager.BackStackEntry, FragmentManagerImpl.OpGenerator {
    static final int OP_ADD = 1;
    static final int OP_ATTACH = 7;
    static final int OP_DETACH = 6;
    static final int OP_HIDE = 4;
    static final int OP_NULL = 0;
    static final int OP_REMOVE = 3;
    static final int OP_REPLACE = 2;
    static final int OP_SET_PRIMARY_NAV = 8;
    static final int OP_SHOW = 5;
    static final int OP_UNSET_PRIMARY_NAV = 9;
    static final String TAG = "FragmentManager";
    boolean mAddToBackStack;
    boolean mAllowAddToBackStack;
    int mBreadCrumbShortTitleRes;
    CharSequence mBreadCrumbShortTitleText;
    int mBreadCrumbTitleRes;
    CharSequence mBreadCrumbTitleText;
    ArrayList<Runnable> mCommitRunnables;
    boolean mCommitted;
    int mEnterAnim;
    int mExitAnim;
    int mIndex;
    final FragmentManagerImpl mManager;

    @Nullable
    String mName;
    ArrayList<Op> mOps;
    int mPopEnterAnim;
    int mPopExitAnim;
    boolean mReorderingAllowed;
    ArrayList<String> mSharedElementSourceNames;
    ArrayList<String> mSharedElementTargetNames;
    int mTransition;
    int mTransitionStyle;

    static final class Op {
        int cmd;
        int enterAnim;
        int exitAnim;
        Fragment fragment;
        int popEnterAnim;
        int popExitAnim;

        Op() {
        }

        Op(int r1, Fragment r2) {
            this.cmd = r1;
            this.fragment = r2;
        }
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder(128);
        r0.append("BackStackEntry{");
        r0.append(Integer.toHexString(System.identityHashCode(this)));
        if (this.mIndex < 0) goto L6;
        r0.append(" #");
        r0.append(this.mIndex);
    L6:
        if (this.mName == null) goto L8;
        r0.append(" ");
        r0.append(this.mName);
    L8:
        r0.append("}");
        return r0.toString();
    }

    public void dump(String r1, FileDescriptor r2, PrintWriter r3, String[] r4) {
        dump(r1, r3, true);
    }

    public void dump(String r6, PrintWriter r7, boolean r8) {
        if (r8 == false) goto L27;
        r7.print(r6);
        r7.print("mName=");
        r7.print(this.mName);
        r7.print(" mIndex=");
        r7.print(this.mIndex);
        r7.print(" mCommitted=");
        r7.println(this.mCommitted);
        if (this.mTransition == 0) goto L7;
        r7.print(r6);
        r7.print("mTransition=#");
        r7.print(Integer.toHexString(this.mTransition));
        r7.print(" mTransitionStyle=#");
        r7.println(Integer.toHexString(this.mTransitionStyle));
    L7:
        if (this.mEnterAnim == 0) goto L9;
    L10:
        r7.print(r6);
        r7.print("mEnterAnim=#");
        r7.print(Integer.toHexString(this.mEnterAnim));
        r7.print(" mExitAnim=#");
        r7.println(Integer.toHexString(this.mExitAnim));
    L12:
        if (this.mPopEnterAnim == 0) goto L14;
    L15:
        r7.print(r6);
        r7.print("mPopEnterAnim=#");
        r7.print(Integer.toHexString(this.mPopEnterAnim));
        r7.print(" mPopExitAnim=#");
        r7.println(Integer.toHexString(this.mPopExitAnim));
    L17:
        if (this.mBreadCrumbTitleRes == 0) goto L19;
    L20:
        r7.print(r6);
        r7.print("mBreadCrumbTitleRes=#");
        r7.print(Integer.toHexString(this.mBreadCrumbTitleRes));
        r7.print(" mBreadCrumbTitleText=");
        r7.println(this.mBreadCrumbTitleText);
    L22:
        if (this.mBreadCrumbShortTitleRes == 0) goto L24;
    L25:
        r7.print(r6);
        r7.print("mBreadCrumbShortTitleRes=#");
        r7.print(Integer.toHexString(this.mBreadCrumbShortTitleRes));
        r7.print(" mBreadCrumbShortTitleText=");
        r7.println(this.mBreadCrumbShortTitleText);
        goto L27
    L24:
        if (this.mBreadCrumbShortTitleText == null) goto L27;
    L19:
        if (this.mBreadCrumbTitleText == null) goto L22;
    L14:
        if (this.mPopExitAnim == 0) goto L17;
    L9:
        if (this.mExitAnim == 0) goto L12;
    L27:
        if (this.mOps.isEmpty() == true) goto L56;
        r7.print(r6);
        r7.println("Operations:");
        String r0 = r6 + "    ";
        int r02 = this.mOps.size();
        int r1 = 0;
    L29:
        if (r1 >= r02) goto L61;
        Op r2 = this.mOps.get(r1);
        switch(r2.cmd) {
            case 0: goto L42;
            case 1: goto L41;
            case 2: goto L40;
            case 3: goto L39;
            case 4: goto L38;
            case 5: goto L37;
            case 6: goto L36;
            case 7: goto L35;
            case 8: goto L34;
            case 9: goto L33;
            default: goto L32;
        };
    L32:
        String r3 = "cmd=" + r2.cmd;
    L43:
        r7.print(r6);
        r7.print("  Op #");
        r7.print(r1);
        r7.print(": ");
        r7.print(r3);
        r7.print(" ");
        r7.println(r2.fragment);
        if (r8 == false) goto L55;
        if (r2.enterAnim == 0) goto L48;
    L49:
        r7.print(r6);
        r7.print("enterAnim=#");
        r7.print(Integer.toHexString(r2.enterAnim));
        r7.print(" exitAnim=#");
        r7.println(Integer.toHexString(r2.exitAnim));
    L51:
        if (r2.popEnterAnim == 0) goto L53;
    L54:
        r7.print(r6);
        r7.print("popEnterAnim=#");
        r7.print(Integer.toHexString(r2.popEnterAnim));
        r7.print(" popExitAnim=#");
        r7.println(Integer.toHexString(r2.popExitAnim));
        goto L55
    L53:
        if (r2.popExitAnim == 0) goto L55;
    L48:
        if (r2.exitAnim == 0) goto L51;
    L55:
        r1 = r1 + 1;
        goto L29
    L33:
        r3 = "UNSET_PRIMARY_NAV";
        goto L43
    L34:
        r3 = "SET_PRIMARY_NAV";
        goto L43
    L35:
        r3 = "ATTACH";
        goto L43
    L36:
        r3 = "DETACH";
        goto L43
    L37:
        r3 = "SHOW";
        goto L43
    L38:
        r3 = "HIDE";
        goto L43
    L39:
        r3 = "REMOVE";
        goto L43
    L40:
        r3 = "REPLACE";
        goto L43
    L41:
        r3 = "ADD";
        goto L43
    L42:
        r3 = "NULL";
        goto L43
    L61:
        return;
    }

    public BackStackRecord(FragmentManagerImpl r2) {
        this.mOps = new ArrayList();
        this.mAllowAddToBackStack = true;
        this.mIndex = -1;
        this.mReorderingAllowed = false;
        this.mManager = r2;
    }

    @Override
    public int getId() {
        return this.mIndex;
    }

    @Override
    public int getBreadCrumbTitleRes() {
        return this.mBreadCrumbTitleRes;
    }

    @Override
    public int getBreadCrumbShortTitleRes() {
        return this.mBreadCrumbShortTitleRes;
    }

    @Override
    @Nullable
    public CharSequence getBreadCrumbTitle() {
        if (this.mBreadCrumbTitleRes == 0) goto L7;
        return this.mManager.mHost.getContext().getText(this.mBreadCrumbTitleRes);
    L7:
        return this.mBreadCrumbTitleText;
    }

    @Override
    @Nullable
    public CharSequence getBreadCrumbShortTitle() {
        if (this.mBreadCrumbShortTitleRes == 0) goto L7;
        return this.mManager.mHost.getContext().getText(this.mBreadCrumbShortTitleRes);
    L7:
        return this.mBreadCrumbShortTitleText;
    }

    void addOp(Op r2) {
        this.mOps.add(r2);
        r2.enterAnim = this.mEnterAnim;
        r2.exitAnim = this.mExitAnim;
        r2.popEnterAnim = this.mPopEnterAnim;
        r2.popExitAnim = this.mPopExitAnim;
    }

    @Override
    public FragmentTransaction add(Fragment r3, @Nullable String r4) {
        doAddOp(0, r3, r4, 1);
        return this;
    }

    @Override
    public FragmentTransaction add(int r3, Fragment r4) {
        doAddOp(r3, r4, null, 1);
        return this;
    }

    @Override
    public FragmentTransaction add(int r2, Fragment r3, @Nullable String r4) {
        doAddOp(r2, r3, r4, 1);
        return this;
    }

    private void doAddOp(int r4, Fragment r5, @Nullable String r6, int r7) {
        Class<?> r0 = r5.getClass();
        int r1 = r0.getModifiers();
        if (r0.isAnonymousClass() == true) goto L36;
        if (Modifier.isPublic(r1) == false) goto L36;
        if (r0.isMemberClass() == true) goto L9;
    L10:
        r5.mFragmentManager = this.mManager;
        if (r6 != null) goto L13;
    L20:
        if (r4 != 0) goto L22;
    L33:
        addOp(new Op(r7, r5));
        return;
    L22:
        if (r4 == (-1)) goto L32;
        if (r5.mFragmentId != 0) goto L26;
    L30:
        r5.mFragmentId = r4;
        r5.mContainerId = r4;
        goto L33
    L26:
        if (r5.mFragmentId == r4) goto L30;
        throw new IllegalStateException("Can't change container ID of fragment " + r5 + ": was " + r5.mFragmentId + " now " + r4);
    L32:
        throw new IllegalArgumentException("Can't add fragment " + r5 + " with tag " + r6 + " to container view with no id");
    L13:
        if (r5.mTag != null) goto L15;
    L19:
        r5.mTag = r6;
        goto L20
    L15:
        if (r6.equals(r5.mTag) == true) goto L19;
        throw new IllegalStateException("Can't change tag of fragment " + r5 + ": was " + r5.mTag + " now " + r6);
    L9:
        if (Modifier.isStatic(r1) == true) goto L10;
    L36:
        throw new IllegalStateException("Fragment " + r0.getCanonicalName() + " must be a public static class to be  properly recreated from instance state.");
    }

    @Override
    public FragmentTransaction replace(int r2, Fragment r3) {
        return replace(r2, r3, null);
    }

    @Override
    public FragmentTransaction replace(int r2, Fragment r3, @Nullable String r4) {
        if (r2 == 0) goto L6;
        doAddOp(r2, r3, r4, 2);
        return this;
    L6:
        throw new IllegalArgumentException("Must use non-zero containerViewId");
    }

    @Override
    public FragmentTransaction remove(Fragment r3) {
        addOp(new Op(3, r3));
        return this;
    }

    @Override
    public FragmentTransaction hide(Fragment r3) {
        addOp(new Op(4, r3));
        return this;
    }

    @Override
    public FragmentTransaction show(Fragment r3) {
        addOp(new Op(5, r3));
        return this;
    }

    @Override
    public FragmentTransaction detach(Fragment r3) {
        addOp(new Op(6, r3));
        return this;
    }

    @Override
    public FragmentTransaction attach(Fragment r3) {
        addOp(new Op(7, r3));
        return this;
    }

    @Override
    public FragmentTransaction setPrimaryNavigationFragment(@Nullable Fragment r3) {
        addOp(new Op(8, r3));
        return this;
    }

    @Override
    public FragmentTransaction setCustomAnimations(int r2, int r3) {
        return setCustomAnimations(r2, r3, 0, 0);
    }

    @Override
    public FragmentTransaction setCustomAnimations(int r1, int r2, int r3, int r4) {
        this.mEnterAnim = r1;
        this.mExitAnim = r2;
        this.mPopEnterAnim = r3;
        this.mPopExitAnim = r4;
        return this;
    }

    @Override
    public FragmentTransaction setTransition(int r1) {
        this.mTransition = r1;
        return this;
    }

    @Override
    public FragmentTransaction addSharedElement(View r3, String r4) {
        if (FragmentTransition.supportsTransition() == false) goto L20;
        String r32 = ViewCompat.getTransitionName(r3);
        if (r32 == null) goto L19;
        if (this.mSharedElementSourceNames != null) goto L10;
        this.mSharedElementSourceNames = new ArrayList();
        this.mSharedElementTargetNames = new ArrayList();
    L13:
        this.mSharedElementSourceNames.add(r32);
        this.mSharedElementTargetNames.add(r4);
        goto L20
    L10:
        if (this.mSharedElementTargetNames.contains(r4) == true) goto L17;
        if (this.mSharedElementSourceNames.contains(r32) == false) goto L13;
        throw new IllegalArgumentException("A shared element with the source name '" + r32 + " has already been added to the transaction.");
    L17:
        throw new IllegalArgumentException("A shared element with the target name '" + r4 + "' has already been added to the transaction.");
    L19:
        throw new IllegalArgumentException("Unique transitionNames are required for all sharedElements");
    L20:
        return this;
    }

    @Override
    public FragmentTransaction setTransitionStyle(int r1) {
        this.mTransitionStyle = r1;
        return this;
    }

    @Override
    public FragmentTransaction addToBackStack(@Nullable String r2) {
        if (this.mAllowAddToBackStack == false) goto L7;
        this.mAddToBackStack = true;
        this.mName = r2;
        return this;
    L7:
        throw new IllegalStateException("This FragmentTransaction is not allowed to be added to the back stack.");
    }

    @Override
    public boolean isAddToBackStackAllowed() {
        return this.mAllowAddToBackStack;
    }

    @Override
    public FragmentTransaction disallowAddToBackStack() {
        if (this.mAddToBackStack == true) goto L7;
        this.mAllowAddToBackStack = false;
        return this;
    L7:
        throw new IllegalStateException("This transaction is already being added to the back stack");
    }

    @Override
    public FragmentTransaction setBreadCrumbTitle(int r1) {
        this.mBreadCrumbTitleRes = r1;
        this.mBreadCrumbTitleText = null;
        return this;
    }

    @Override
    public FragmentTransaction setBreadCrumbTitle(@Nullable CharSequence r2) {
        this.mBreadCrumbTitleRes = 0;
        this.mBreadCrumbTitleText = r2;
        return this;
    }

    @Override
    public FragmentTransaction setBreadCrumbShortTitle(int r1) {
        this.mBreadCrumbShortTitleRes = r1;
        this.mBreadCrumbShortTitleText = null;
        return this;
    }

    @Override
    public FragmentTransaction setBreadCrumbShortTitle(@Nullable CharSequence r2) {
        this.mBreadCrumbShortTitleRes = 0;
        this.mBreadCrumbShortTitleText = r2;
        return this;
    }

    void bumpBackStackNesting(int r7) {
        if (this.mAddToBackStack == true) goto L6;
        return;
    L6:
        if (FragmentManagerImpl.DEBUG == false) goto L8;
        Log.v(TAG, "Bump nesting in " + this + " by " + r7);
    L8:
        int r0 = this.mOps.size();
        int r2 = 0;
    L9:
        if (r2 >= r0) goto L16;
        Op r3 = this.mOps.get(r2);
        if (r3.fragment == null) goto L15;
        r3.fragment.mBackStackNesting += r7;
        if (FragmentManagerImpl.DEBUG == false) goto L15;
        Log.v(TAG, "Bump nesting of " + r3.fragment + " to " + r3.fragment.mBackStackNesting);
    L15:
        r2 = r2 + 1;
        goto L9
    }

    @Override
    public FragmentTransaction runOnCommit(Runnable r2) {
        if (r2 == null) goto L9;
        disallowAddToBackStack();
        if (this.mCommitRunnables != null) goto L6;
        this.mCommitRunnables = new ArrayList();
    L6:
        this.mCommitRunnables.add(r2);
        return this;
    L9:
        throw new IllegalArgumentException("runnable cannot be null");
    }

    public void runOnCommitRunnables() {
        ArrayList<Runnable> r0 = this.mCommitRunnables;
        if (r0 == null) goto L10;
        int r1 = 0;
        int r02 = r0.size();
    L5:
        if (r1 >= r02) goto L7;
        this.mCommitRunnables.get(r1).run();
        r1 = r1 + 1;
        goto L5
    L7:
        this.mCommitRunnables = null;
        return;
    }

    @Override
    public int commit() {
        return commitInternal(false);
    }

    @Override
    public int commitAllowingStateLoss() {
        return commitInternal(true);
    }

    @Override
    public void commitNow() {
        disallowAddToBackStack();
        this.mManager.execSingleAction(this, false);
    }

    @Override
    public void commitNowAllowingStateLoss() {
        disallowAddToBackStack();
        this.mManager.execSingleAction(this, true);
    }

    @Override
    public FragmentTransaction setReorderingAllowed(boolean r1) {
        this.mReorderingAllowed = r1;
        return this;
    }

    @Override
    public FragmentTransaction setAllowOptimization(boolean r1) {
        return setReorderingAllowed(r1);
    }

    int commitInternal(boolean r4) {
        if (this.mCommitted == true) goto L14;
        if (FragmentManagerImpl.DEBUG == false) goto L7;
        Log.v(TAG, "Commit: " + this);
        PrintWriter r1 = new PrintWriter(new LogWriter(TAG));
        dump("  ", null, r1, null);
        r1.close();
    L7:
        this.mCommitted = true;
        if (this.mAddToBackStack == false) goto L10;
        this.mIndex = this.mManager.allocBackStackIndex(this);
    L11:
        this.mManager.enqueueAction(this, r4);
        return this.mIndex;
    L10:
        this.mIndex = -1;
        goto L11
    L14:
        throw new IllegalStateException("commit already called");
    }

    @Override
    public boolean generateOps(ArrayList<BackStackRecord> r3, ArrayList<Boolean> r4) {
        if (FragmentManagerImpl.DEBUG == false) goto L5;
        Log.v(TAG, "Run: " + this);
    L5:
        r3.add(this);
        r4.add(false);
        if (this.mAddToBackStack == false) goto L10;
        this.mManager.addBackStackState(this);
        return true;
    L10:
        return true;
    }

    boolean interactsWith(int r6) {
        int r0 = this.mOps.size();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L13;
        Op r3 = this.mOps.get(r2);
        if (r3.fragment == null) goto L7;
        int r32 = r3.fragment.mContainerId;
    L8:
        if (r32 == 0) goto L12;
        if (r32 != r6) goto L12;
        return true;
    L12:
        r2 = r2 + 1;
        goto L3
    L7:
        r32 = 0;
        goto L8
    L13:
        return false;
    }

    boolean interactsWith(ArrayList<BackStackRecord> r11, int r12, int r13) {
        if (r13 != r12) goto L5;
        return false;
    L5:
        int r1 = this.mOps.size();
        int r2 = 0;
        int r3 = -1;
    L6:
        if (r2 >= r1) goto L28;
        Op r4 = this.mOps.get(r2);
        if (r4.fragment == null) goto L10;
        int r42 = r4.fragment.mContainerId;
    L11:
        if (r42 == 0) goto L27;
        if (r42 == r3) goto L27;
        int r32 = r12;
    L14:
        if (r32 >= r13) goto L26;
        BackStackRecord r5 = r11.get(r32);
        int r6 = r5.mOps.size();
        int r7 = 0;
    L16:
        if (r7 >= r6) goto L25;
        Op r8 = r5.mOps.get(r7);
        if (r8.fragment == null) goto L20;
        int r82 = r8.fragment.mContainerId;
    L21:
        if (r82 == r42) goto L22;
        r7 = r7 + 1;
        goto L16
    L22:
        return true;
    L20:
        r82 = 0;
        goto L21
    L25:
        r32 = r32 + 1;
        goto L14
    L26:
        r3 = r42;
    L27:
        r2 = r2 + 1;
        goto L6
    L10:
        r42 = 0;
        goto L11
    L28:
        return false;
    }

    void executeOps() {
        int r0 = this.mOps.size();
        int r2 = 0;
    L4:
        if (r2 >= r0) goto L28;
        Op r4 = this.mOps.get(r2);
        Fragment r5 = r4.fragment;
        if (r5 == null) goto L9;
        r5.setNextTransition(this.mTransition, this.mTransitionStyle);
    L9:
        switch(r4.cmd) {
            case 1: goto L19;
            case 2: goto L11;
            case 3: goto L18;
            case 4: goto L17;
            case 5: goto L16;
            case 6: goto L15;
            case 7: goto L14;
            case 8: goto L13;
            case 9: goto L12;
            default: goto L11;
        };
    L12:
        this.mManager.setPrimaryNavigationFragment(null);
    L21:
        if (this.mReorderingAllowed == true) goto L26;
        if (r4.cmd == 1) goto L26;
        if (r5 == null) goto L26;
        this.mManager.moveFragmentToExpectedState(r5);
    L26:
        r2 = r2 + 1;
        goto L4
    L13:
        this.mManager.setPrimaryNavigationFragment(r5);
        goto L21
    L14:
        r5.setNextAnim(r4.enterAnim);
        this.mManager.attachFragment(r5);
        goto L21
    L15:
        r5.setNextAnim(r4.exitAnim);
        this.mManager.detachFragment(r5);
        goto L21
    L16:
        r5.setNextAnim(r4.enterAnim);
        this.mManager.showFragment(r5);
        goto L21
    L17:
        r5.setNextAnim(r4.exitAnim);
        this.mManager.hideFragment(r5);
        goto L21
    L18:
        r5.setNextAnim(r4.exitAnim);
        this.mManager.removeFragment(r5);
        goto L21
    L19:
        r5.setNextAnim(r4.enterAnim);
        this.mManager.addFragment(r5, false);
        goto L21
    L11:
        throw new IllegalArgumentException("Unknown cmd: " + r4.cmd);
    L28:
        if (this.mReorderingAllowed == true) goto L37;
        FragmentManagerImpl r02 = this.mManager;
        r02.moveToState(r02.mCurState, true);
        return;
    }

    void executePopOps(boolean r7) {
        int r0 = this.mOps.size() - 1;
    L3:
        if (r0 < 0) goto L27;
        Op r2 = this.mOps.get(r0);
        Fragment r3 = r2.fragment;
        if (r3 == null) goto L8;
        r3.setNextTransition(FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
    L8:
        switch(r2.cmd) {
            case 1: goto L18;
            case 2: goto L10;
            case 3: goto L17;
            case 4: goto L16;
            case 5: goto L15;
            case 6: goto L14;
            case 7: goto L13;
            case 8: goto L12;
            case 9: goto L11;
            default: goto L10;
        };
    L11:
        this.mManager.setPrimaryNavigationFragment(r3);
    L20:
        if (this.mReorderingAllowed == true) goto L25;
        if (r2.cmd == 3) goto L25;
        if (r3 == null) goto L25;
        this.mManager.moveFragmentToExpectedState(r3);
    L25:
        r0 = r0 - 1;
        goto L3
    L12:
        this.mManager.setPrimaryNavigationFragment(null);
        goto L20
    L13:
        r3.setNextAnim(r2.popExitAnim);
        this.mManager.detachFragment(r3);
        goto L20
    L14:
        r3.setNextAnim(r2.popEnterAnim);
        this.mManager.attachFragment(r3);
        goto L20
    L15:
        r3.setNextAnim(r2.popExitAnim);
        this.mManager.hideFragment(r3);
        goto L20
    L16:
        r3.setNextAnim(r2.popEnterAnim);
        this.mManager.showFragment(r3);
        goto L20
    L17:
        r3.setNextAnim(r2.popEnterAnim);
        this.mManager.addFragment(r3, false);
        goto L20
    L18:
        r3.setNextAnim(r2.popExitAnim);
        this.mManager.removeFragment(r3);
        goto L20
    L10:
        throw new IllegalArgumentException("Unknown cmd: " + r2.cmd);
    L27:
        if (this.mReorderingAllowed == true) goto L37;
        if (r7 == false) goto L38;
        FragmentManagerImpl r72 = this.mManager;
        r72.moveToState(r72.mCurState, true);
        return;
    L38:
        return;
    }

    Fragment expandOps(ArrayList<Fragment> r17, Fragment r18) {
        Fragment r4 = r18;
        int r3 = 0;
    L4:
        if (r3 >= this.mOps.size()) goto L37;
        Op r5 = this.mOps.get(r3);
        int r6 = r5.cmd;
        if (r6 != 1) goto L8;
    L35:
        r17.add(r5.fragment);
    L36:
        r3 = r3 + 1;
        goto L4
    L8:
        if (r6 == 2) goto L21;
        if (r6 != 3) goto L11;
    L18:
        r17.remove(r5.fragment);
        if (r5.fragment != r4) goto L36;
        this.mOps.add(r3, new Op(9, r5.fragment));
        r3 = r3 + 1;
        r4 = null;
        goto L36
    L11:
        if (r6 == 6) goto L18;
        if (r6 == 7) goto L35;
        if (r6 != 8) goto L36;
        this.mOps.add(r3, new Op(9, r4));
        r3 = r3 + 1;
        r4 = r5.fragment;
        goto L36
    L21:
        Fragment r62 = r5.fragment;
        int r9 = r62.mContainerId;
        int r12 = r17.size() - 1;
        Fragment r13 = r4;
        int r42 = r3;
        boolean r32 = false;
    L22:
        if (r12 < 0) goto L31;
        Fragment r14 = r17.get(r12);
        if (r14.mContainerId != r9) goto L30;
        if (r14 != r62) goto L27;
        r32 = true;
        goto L30
    L27:
        if (r14 != r13) goto L29;
        this.mOps.add(r42, new Op(9, r14));
        r42 = r42 + 1;
        r13 = null;
    L29:
        Op r15 = new Op(3, r14);
        r15.enterAnim = r5.enterAnim;
        r15.popEnterAnim = r5.popEnterAnim;
        r15.exitAnim = r5.exitAnim;
        r15.popExitAnim = r5.popExitAnim;
        this.mOps.add(r42, r15);
        r17.remove(r14);
        r42 = r42 + 1;
    L30:
        r12 = r12 - 1;
        goto L22
    L31:
        if (r32 == false) goto L33;
        this.mOps.remove(r42);
        r42 = r42 - 1;
    L34:
        r3 = r42;
        r4 = r13;
        goto L36
    L33:
        r5.cmd = 1;
        r17.add(r62);
        goto L34
    L37:
        return r4;
    }

    Fragment trackAddedFragmentsInPop(ArrayList<Fragment> r5, Fragment r6) {
        int r0 = 0;
    L4:
        if (r0 >= this.mOps.size()) goto L16;
        Op r1 = this.mOps.get(r0);
        int r2 = r1.cmd;
        if (r2 != 1) goto L8;
    L14:
        r5.remove(r1.fragment);
    L15:
        r0 = r0 + 1;
        goto L4
    L8:
        if (r2 == 3) goto L13;
        switch(r2) {
            case 6: goto L13;
            case 7: goto L14;
            case 8: goto L12;
            case 9: goto L11;
            default: goto L15;
        };
    L11:
        r6 = r1.fragment;
        goto L15
    L12:
        r6 = null;
    L13:
        r5.add(r1.fragment);
        goto L15
    L16:
        return r6;
    }

    boolean isPostponed() {
        int r1 = 0;
    L4:
        if (r1 >= this.mOps.size()) goto L10;
        if (isFragmentPostponed(this.mOps.get(r1)) == true) goto L7;
        r1 = r1 + 1;
        goto L4
    L7:
        return true;
    L10:
        return false;
    }

    void setOnStartPostponedListener(Fragment.OnStartEnterTransitionListener r4) {
        int r0 = 0;
    L4:
        if (r0 >= this.mOps.size()) goto L9;
        Op r1 = this.mOps.get(r0);
        if (isFragmentPostponed(r1) == false) goto L8;
        r1.fragment.setOnStartEnterTransitionListener(r4);
    L8:
        r0 = r0 + 1;
        goto L4
    }

    private static boolean isFragmentPostponed(Op r1) {
        Fragment r12 = r1.fragment;
        if (r12 != null) goto L5;
    L15:
        return false;
    L5:
        if (r12.mAdded == false) goto L15;
        if (r12.mView == null) goto L15;
        if (r12.mDetached == true) goto L15;
        if (r12.mHidden == true) goto L15;
        if (r12.isPostponed() == false) goto L15;
        return true;
    }

    @Override
    @Nullable
    public String getName() {
        return this.mName;
    }

    public int getTransition() {
        return this.mTransition;
    }

    public int getTransitionStyle() {
        return this.mTransitionStyle;
    }

    @Override
    public boolean isEmpty() {
        return this.mOps.isEmpty();
    }
}
