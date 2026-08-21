package android.support.v4.app;

final class BackStackRecord extends android.support.v4.app.FragmentTransaction implements android.support.v4.app.FragmentManager.BackStackEntry, android.support.v4.app.FragmentManagerImpl.OpGenerator {
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
    static final java.lang.String TAG = "FragmentManager";
    boolean mAddToBackStack;
    boolean mAllowAddToBackStack;
    int mBreadCrumbShortTitleRes;
    java.lang.CharSequence mBreadCrumbShortTitleText;
    int mBreadCrumbTitleRes;
    java.lang.CharSequence mBreadCrumbTitleText;
    java.util.ArrayList<java.lang.Runnable> mCommitRunnables;
    boolean mCommitted;
    int mEnterAnim;
    int mExitAnim;
    int mIndex;
    final android.support.v4.app.FragmentManagerImpl mManager;

    @android.support.annotation.Nullable
    java.lang.String mName;
    java.util.ArrayList<android.support.v4.app.BackStackRecord.Op> mOps;
    int mPopEnterAnim;
    int mPopExitAnim;
    boolean mReorderingAllowed;
    java.util.ArrayList<java.lang.String> mSharedElementSourceNames;
    java.util.ArrayList<java.lang.String> mSharedElementTargetNames;
    int mTransition;
    int mTransitionStyle;

    static final class Op {
        int cmd;
        int enterAnim;
        int exitAnim;
        android.support.v4.app.Fragment fragment;
        int popEnterAnim;
        int popExitAnim;

        Op() {
                r0 = this;
                r0.<init>()
                return
        }

        Op(int r1, android.support.v4.app.Fragment r2) {
                r0 = this;
                r0.<init>()
                r0.cmd = r1
                r0.fragment = r2
                return
        }
    }

    public BackStackRecord(android.support.v4.app.FragmentManagerImpl r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mOps = r0
            r0 = 1
            r1.mAllowAddToBackStack = r0
            r0 = -1
            r1.mIndex = r0
            r0 = 0
            r1.mReorderingAllowed = r0
            r1.mManager = r2
            return
    }

    private void doAddOp(int r4, android.support.v4.app.Fragment r5, @android.support.annotation.Nullable java.lang.String r6, int r7) {
            r3 = this;
            java.lang.Class r0 = r5.getClass()
            int r1 = r0.getModifiers()
            boolean r2 = r0.isAnonymousClass()
            if (r2 != 0) goto Lc3
            boolean r2 = java.lang.reflect.Modifier.isPublic(r1)
            if (r2 == 0) goto Lc3
            boolean r2 = r0.isMemberClass()
            if (r2 == 0) goto L20
            boolean r1 = java.lang.reflect.Modifier.isStatic(r1)
            if (r1 == 0) goto Lc3
        L20:
            android.support.v4.app.FragmentManagerImpl r0 = r3.mManager
            r5.mFragmentManager = r0
            java.lang.String r0 = " now "
            java.lang.String r1 = ": was "
            if (r6 == 0) goto L5e
            java.lang.String r2 = r5.mTag
            if (r2 == 0) goto L5c
            java.lang.String r2 = r5.mTag
            boolean r2 = r6.equals(r2)
            if (r2 == 0) goto L37
            goto L5c
        L37:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "Can't change tag of fragment "
            r7.append(r2)
            r7.append(r5)
            r7.append(r1)
            java.lang.String r5 = r5.mTag
            r7.append(r5)
            r7.append(r0)
            r7.append(r6)
            java.lang.String r5 = r7.toString()
            r4.<init>(r5)
            throw r4
        L5c:
            r5.mTag = r6
        L5e:
            if (r4 == 0) goto Lba
            r2 = -1
            if (r4 == r2) goto L96
            int r6 = r5.mFragmentId
            if (r6 == 0) goto L91
            int r6 = r5.mFragmentId
            if (r6 != r4) goto L6c
            goto L91
        L6c:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "Can't change container ID of fragment "
            r7.append(r2)
            r7.append(r5)
            r7.append(r1)
            int r5 = r5.mFragmentId
            r7.append(r5)
            r7.append(r0)
            r7.append(r4)
            java.lang.String r4 = r7.toString()
            r6.<init>(r4)
            throw r6
        L91:
            r5.mFragmentId = r4
            r5.mContainerId = r4
            goto Lba
        L96:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Can't add fragment "
            r7.append(r0)
            r7.append(r5)
            java.lang.String r5 = " with tag "
            r7.append(r5)
            r7.append(r6)
            java.lang.String r5 = " to container view with no id"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r4.<init>(r5)
            throw r4
        Lba:
            android.support.v4.app.BackStackRecord$Op r4 = new android.support.v4.app.BackStackRecord$Op
            r4.<init>(r7, r5)
            r3.addOp(r4)
            return
        Lc3:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Fragment "
            r5.append(r6)
            java.lang.String r6 = r0.getCanonicalName()
            r5.append(r6)
            java.lang.String r6 = " must be a public static class to be  properly recreated from"
            r5.append(r6)
            java.lang.String r6 = " instance state."
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
    }

    private static boolean isFragmentPostponed(android.support.v4.app.BackStackRecord.Op r1) {
            android.support.v4.app.Fragment r1 = r1.fragment
            if (r1 == 0) goto L1c
            boolean r0 = r1.mAdded
            if (r0 == 0) goto L1c
            android.view.View r0 = r1.mView
            if (r0 == 0) goto L1c
            boolean r0 = r1.mDetached
            if (r0 != 0) goto L1c
            boolean r0 = r1.mHidden
            if (r0 != 0) goto L1c
            boolean r1 = r1.isPostponed()
            if (r1 == 0) goto L1c
            r1 = 1
            goto L1d
        L1c:
            r1 = 0
        L1d:
            return r1
    }

    @Override
    public android.support.v4.app.FragmentTransaction add(int r3, android.support.v4.app.Fragment r4) {
            r2 = this;
            r0 = 0
            r1 = 1
            r2.doAddOp(r3, r4, r0, r1)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction add(int r2, android.support.v4.app.Fragment r3, @android.support.annotation.Nullable java.lang.String r4) {
            r1 = this;
            r0 = 1
            r1.doAddOp(r2, r3, r4, r0)
            return r1
    }

    @Override
    public android.support.v4.app.FragmentTransaction add(android.support.v4.app.Fragment r3, @android.support.annotation.Nullable java.lang.String r4) {
            r2 = this;
            r0 = 0
            r1 = 1
            r2.doAddOp(r0, r3, r4, r1)
            return r2
    }

    void addOp(android.support.v4.app.BackStackRecord.Op r2) {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r1.mOps
            r0.add(r2)
            int r0 = r1.mEnterAnim
            r2.enterAnim = r0
            int r0 = r1.mExitAnim
            r2.exitAnim = r0
            int r0 = r1.mPopEnterAnim
            r2.popEnterAnim = r0
            int r0 = r1.mPopExitAnim
            r2.popExitAnim = r0
            return
    }

    @Override
    public android.support.v4.app.FragmentTransaction addSharedElement(android.view.View r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.support.v4.app.FragmentTransition.supportsTransition()
            if (r0 == 0) goto L7a
            java.lang.String r3 = android.support.v4.view.ViewCompat.getTransitionName(r3)
            if (r3 == 0) goto L72
            java.util.ArrayList<java.lang.String> r0 = r2.mSharedElementSourceNames
            if (r0 != 0) goto L1f
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mSharedElementSourceNames = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mSharedElementTargetNames = r0
            goto L2f
        L1f:
            java.util.ArrayList<java.lang.String> r0 = r2.mSharedElementTargetNames
            boolean r0 = r0.contains(r4)
            if (r0 != 0) goto L56
            java.util.ArrayList<java.lang.String> r0 = r2.mSharedElementSourceNames
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L3a
        L2f:
            java.util.ArrayList<java.lang.String> r0 = r2.mSharedElementSourceNames
            r0.add(r3)
            java.util.ArrayList<java.lang.String> r3 = r2.mSharedElementTargetNames
            r3.add(r4)
            goto L7a
        L3a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "A shared element with the source name '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " has already been added to the transaction."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L56:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "A shared element with the target name '"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "' has already been added to the transaction."
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L72:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Unique transitionNames are required for all sharedElements"
            r3.<init>(r4)
            throw r3
        L7a:
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction addToBackStack(@android.support.annotation.Nullable java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.mAllowAddToBackStack
            if (r0 == 0) goto La
            r0 = 1
            r1.mAddToBackStack = r0
            r1.mName = r2
            return r1
        La:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "This FragmentTransaction is not allowed to be added to the back stack."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction attach(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 7
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    void bumpBackStackNesting(int r7) {
            r6 = this;
            boolean r0 = r6.mAddToBackStack
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            java.lang.String r1 = "FragmentManager"
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Bump nesting in "
            r0.append(r2)
            r0.append(r6)
            java.lang.String r2 = " by "
            r0.append(r2)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.v(r1, r0)
        L27:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r6.mOps
            int r0 = r0.size()
            r2 = 0
        L2e:
            if (r2 >= r0) goto L6c
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r3 = r6.mOps
            java.lang.Object r3 = r3.get(r2)
            android.support.v4.app.BackStackRecord$Op r3 = (android.support.v4.app.BackStackRecord.Op) r3
            android.support.v4.app.Fragment r4 = r3.fragment
            if (r4 == 0) goto L69
            android.support.v4.app.Fragment r4 = r3.fragment
            int r5 = r4.mBackStackNesting
            int r5 = r5 + r7
            r4.mBackStackNesting = r5
            boolean r4 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r4 == 0) goto L69
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Bump nesting of "
            r4.append(r5)
            android.support.v4.app.Fragment r5 = r3.fragment
            r4.append(r5)
            java.lang.String r5 = " to "
            r4.append(r5)
            android.support.v4.app.Fragment r3 = r3.fragment
            int r3 = r3.mBackStackNesting
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.v(r1, r3)
        L69:
            int r2 = r2 + 1
            goto L2e
        L6c:
            return
    }

    @Override
    public int commit() {
            r1 = this;
            r0 = 0
            int r0 = r1.commitInternal(r0)
            return r0
    }

    @Override
    public int commitAllowingStateLoss() {
            r1 = this;
            r0 = 1
            int r0 = r1.commitInternal(r0)
            return r0
    }

    int commitInternal(boolean r4) {
            r3 = this;
            boolean r0 = r3.mCommitted
            if (r0 != 0) goto L4c
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Commit: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
            android.support.v4.util.LogWriter r0 = new android.support.v4.util.LogWriter
            r0.<init>(r1)
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r0 = 0
            java.lang.String r2 = "  "
            r3.dump(r2, r0, r1, r0)
            r1.close()
        L31:
            r0 = 1
            r3.mCommitted = r0
            boolean r0 = r3.mAddToBackStack
            if (r0 == 0) goto L41
            android.support.v4.app.FragmentManagerImpl r0 = r3.mManager
            int r0 = r0.allocBackStackIndex(r3)
            r3.mIndex = r0
            goto L44
        L41:
            r0 = -1
            r3.mIndex = r0
        L44:
            android.support.v4.app.FragmentManagerImpl r0 = r3.mManager
            r0.enqueueAction(r3, r4)
            int r4 = r3.mIndex
            return r4
        L4c:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "commit already called"
            r4.<init>(r0)
            throw r4
    }

    @Override
    public void commitNow() {
            r2 = this;
            r2.disallowAddToBackStack()
            android.support.v4.app.FragmentManagerImpl r0 = r2.mManager
            r1 = 0
            r0.execSingleAction(r2, r1)
            return
    }

    @Override
    public void commitNowAllowingStateLoss() {
            r2 = this;
            r2.disallowAddToBackStack()
            android.support.v4.app.FragmentManagerImpl r0 = r2.mManager
            r1 = 1
            r0.execSingleAction(r2, r1)
            return
    }

    @Override
    public android.support.v4.app.FragmentTransaction detach(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 6
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction disallowAddToBackStack() {
            r2 = this;
            boolean r0 = r2.mAddToBackStack
            if (r0 != 0) goto L8
            r0 = 0
            r2.mAllowAddToBackStack = r0
            return r2
        L8:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "This transaction is already being added to the back stack"
            r0.<init>(r1)
            throw r0
    }

    public void dump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            r0 = this;
            r2 = 1
            r0.dump(r1, r3, r2)
            return
    }

    public void dump(java.lang.String r6, java.io.PrintWriter r7, boolean r8) {
            r5 = this;
            if (r8 == 0) goto Lda
            r7.print(r6)
            java.lang.String r0 = "mName="
            r7.print(r0)
            java.lang.String r0 = r5.mName
            r7.print(r0)
            java.lang.String r0 = " mIndex="
            r7.print(r0)
            int r0 = r5.mIndex
            r7.print(r0)
            java.lang.String r0 = " mCommitted="
            r7.print(r0)
            boolean r0 = r5.mCommitted
            r7.println(r0)
            int r0 = r5.mTransition
            if (r0 == 0) goto L46
            r7.print(r6)
            java.lang.String r0 = "mTransition=#"
            r7.print(r0)
            int r0 = r5.mTransition
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.print(r0)
            java.lang.String r0 = " mTransitionStyle=#"
            r7.print(r0)
            int r0 = r5.mTransitionStyle
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.println(r0)
        L46:
            int r0 = r5.mEnterAnim
            if (r0 != 0) goto L4e
            int r0 = r5.mExitAnim
            if (r0 == 0) goto L6d
        L4e:
            r7.print(r6)
            java.lang.String r0 = "mEnterAnim=#"
            r7.print(r0)
            int r0 = r5.mEnterAnim
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.print(r0)
            java.lang.String r0 = " mExitAnim=#"
            r7.print(r0)
            int r0 = r5.mExitAnim
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.println(r0)
        L6d:
            int r0 = r5.mPopEnterAnim
            if (r0 != 0) goto L75
            int r0 = r5.mPopExitAnim
            if (r0 == 0) goto L94
        L75:
            r7.print(r6)
            java.lang.String r0 = "mPopEnterAnim=#"
            r7.print(r0)
            int r0 = r5.mPopEnterAnim
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.print(r0)
            java.lang.String r0 = " mPopExitAnim=#"
            r7.print(r0)
            int r0 = r5.mPopExitAnim
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.println(r0)
        L94:
            int r0 = r5.mBreadCrumbTitleRes
            if (r0 != 0) goto L9c
            java.lang.CharSequence r0 = r5.mBreadCrumbTitleText
            if (r0 == 0) goto Lb7
        L9c:
            r7.print(r6)
            java.lang.String r0 = "mBreadCrumbTitleRes=#"
            r7.print(r0)
            int r0 = r5.mBreadCrumbTitleRes
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.print(r0)
            java.lang.String r0 = " mBreadCrumbTitleText="
            r7.print(r0)
            java.lang.CharSequence r0 = r5.mBreadCrumbTitleText
            r7.println(r0)
        Lb7:
            int r0 = r5.mBreadCrumbShortTitleRes
            if (r0 != 0) goto Lbf
            java.lang.CharSequence r0 = r5.mBreadCrumbShortTitleText
            if (r0 == 0) goto Lda
        Lbf:
            r7.print(r6)
            java.lang.String r0 = "mBreadCrumbShortTitleRes=#"
            r7.print(r0)
            int r0 = r5.mBreadCrumbShortTitleRes
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r7.print(r0)
            java.lang.String r0 = " mBreadCrumbShortTitleText="
            r7.print(r0)
            java.lang.CharSequence r0 = r5.mBreadCrumbShortTitleText
            r7.println(r0)
        Lda:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r5.mOps
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1b2
            r7.print(r6)
            java.lang.String r0 = "Operations:"
            r7.println(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r1 = "    "
            r0.append(r1)
            r0.toString()
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r5.mOps
            int r0 = r0.size()
            r1 = 0
        L101:
            if (r1 >= r0) goto L1b2
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r5.mOps
            java.lang.Object r2 = r2.get(r1)
            android.support.v4.app.BackStackRecord$Op r2 = (android.support.v4.app.BackStackRecord.Op) r2
            int r3 = r2.cmd
            switch(r3) {
                case 0: goto L13f;
                case 1: goto L13c;
                case 2: goto L139;
                case 3: goto L136;
                case 4: goto L133;
                case 5: goto L130;
                case 6: goto L12d;
                case 7: goto L12a;
                case 8: goto L127;
                case 9: goto L124;
                default: goto L110;
            }
        L110:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "cmd="
            r3.append(r4)
            int r4 = r2.cmd
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            goto L141
        L124:
            java.lang.String r3 = "UNSET_PRIMARY_NAV"
            goto L141
        L127:
            java.lang.String r3 = "SET_PRIMARY_NAV"
            goto L141
        L12a:
            java.lang.String r3 = "ATTACH"
            goto L141
        L12d:
            java.lang.String r3 = "DETACH"
            goto L141
        L130:
            java.lang.String r3 = "SHOW"
            goto L141
        L133:
            java.lang.String r3 = "HIDE"
            goto L141
        L136:
            java.lang.String r3 = "REMOVE"
            goto L141
        L139:
            java.lang.String r3 = "REPLACE"
            goto L141
        L13c:
            java.lang.String r3 = "ADD"
            goto L141
        L13f:
            java.lang.String r3 = "NULL"
        L141:
            r7.print(r6)
            java.lang.String r4 = "  Op #"
            r7.print(r4)
            r7.print(r1)
            java.lang.String r4 = ": "
            r7.print(r4)
            r7.print(r3)
            java.lang.String r3 = " "
            r7.print(r3)
            android.support.v4.app.Fragment r3 = r2.fragment
            r7.println(r3)
            if (r8 == 0) goto L1ae
            int r3 = r2.enterAnim
            if (r3 != 0) goto L168
            int r3 = r2.exitAnim
            if (r3 == 0) goto L187
        L168:
            r7.print(r6)
            java.lang.String r3 = "enterAnim=#"
            r7.print(r3)
            int r3 = r2.enterAnim
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r7.print(r3)
            java.lang.String r3 = " exitAnim=#"
            r7.print(r3)
            int r3 = r2.exitAnim
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r7.println(r3)
        L187:
            int r3 = r2.popEnterAnim
            if (r3 != 0) goto L18f
            int r3 = r2.popExitAnim
            if (r3 == 0) goto L1ae
        L18f:
            r7.print(r6)
            java.lang.String r3 = "popEnterAnim=#"
            r7.print(r3)
            int r3 = r2.popEnterAnim
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r7.print(r3)
            java.lang.String r3 = " popExitAnim=#"
            r7.print(r3)
            int r2 = r2.popExitAnim
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r7.println(r2)
        L1ae:
            int r1 = r1 + 1
            goto L101
        L1b2:
            return
    }

    void executeOps() {
            r8 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r8.mOps
            int r0 = r0.size()
            r1 = 0
            r2 = 0
        L8:
            r3 = 1
            if (r2 >= r0) goto L9d
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r4 = r8.mOps
            java.lang.Object r4 = r4.get(r2)
            android.support.v4.app.BackStackRecord$Op r4 = (android.support.v4.app.BackStackRecord.Op) r4
            android.support.v4.app.Fragment r5 = r4.fragment
            if (r5 == 0) goto L1e
            int r6 = r8.mTransition
            int r7 = r8.mTransitionStyle
            r5.setNextTransition(r6, r7)
        L1e:
            int r6 = r4.cmd
            switch(r6) {
                case 1: goto L80;
                case 2: goto L23;
                case 3: goto L75;
                case 4: goto L6a;
                case 5: goto L5f;
                case 6: goto L54;
                case 7: goto L49;
                case 8: goto L43;
                case 9: goto L3c;
                default: goto L23;
            }
        L23:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown cmd: "
            r1.append(r2)
            int r2 = r4.cmd
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L3c:
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r7 = 0
            r6.setPrimaryNavigationFragment(r7)
            goto L8a
        L43:
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.setPrimaryNavigationFragment(r5)
            goto L8a
        L49:
            int r6 = r4.enterAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.attachFragment(r5)
            goto L8a
        L54:
            int r6 = r4.exitAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.detachFragment(r5)
            goto L8a
        L5f:
            int r6 = r4.enterAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.showFragment(r5)
            goto L8a
        L6a:
            int r6 = r4.exitAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.hideFragment(r5)
            goto L8a
        L75:
            int r6 = r4.exitAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.removeFragment(r5)
            goto L8a
        L80:
            int r6 = r4.enterAnim
            r5.setNextAnim(r6)
            android.support.v4.app.FragmentManagerImpl r6 = r8.mManager
            r6.addFragment(r5, r1)
        L8a:
            boolean r6 = r8.mReorderingAllowed
            if (r6 != 0) goto L99
            int r4 = r4.cmd
            if (r4 == r3) goto L99
            if (r5 == 0) goto L99
            android.support.v4.app.FragmentManagerImpl r3 = r8.mManager
            r3.moveFragmentToExpectedState(r5)
        L99:
            int r2 = r2 + 1
            goto L8
        L9d:
            boolean r0 = r8.mReorderingAllowed
            if (r0 != 0) goto La8
            android.support.v4.app.FragmentManagerImpl r0 = r8.mManager
            int r1 = r0.mCurState
            r0.moveToState(r1, r3)
        La8:
            return
    }

    void executePopOps(boolean r7) {
            r6 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r6.mOps
            int r0 = r0.size()
            r1 = 1
            int r0 = r0 - r1
        L8:
            if (r0 < 0) goto La2
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r6.mOps
            java.lang.Object r2 = r2.get(r0)
            android.support.v4.app.BackStackRecord$Op r2 = (android.support.v4.app.BackStackRecord.Op) r2
            android.support.v4.app.Fragment r3 = r2.fragment
            if (r3 == 0) goto L21
            int r4 = r6.mTransition
            int r4 = android.support.v4.app.FragmentManagerImpl.reverseTransit(r4)
            int r5 = r6.mTransitionStyle
            r3.setNextTransition(r4, r5)
        L21:
            int r4 = r2.cmd
            switch(r4) {
                case 1: goto L84;
                case 2: goto L26;
                case 3: goto L78;
                case 4: goto L6d;
                case 5: goto L62;
                case 6: goto L57;
                case 7: goto L4c;
                case 8: goto L45;
                case 9: goto L3f;
                default: goto L26;
            }
        L26:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unknown cmd: "
            r0.append(r1)
            int r1 = r2.cmd
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
        L3f:
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.setPrimaryNavigationFragment(r3)
            goto L8e
        L45:
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r5 = 0
            r4.setPrimaryNavigationFragment(r5)
            goto L8e
        L4c:
            int r4 = r2.popExitAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.detachFragment(r3)
            goto L8e
        L57:
            int r4 = r2.popEnterAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.attachFragment(r3)
            goto L8e
        L62:
            int r4 = r2.popExitAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.hideFragment(r3)
            goto L8e
        L6d:
            int r4 = r2.popEnterAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.showFragment(r3)
            goto L8e
        L78:
            int r4 = r2.popEnterAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r5 = 0
            r4.addFragment(r3, r5)
            goto L8e
        L84:
            int r4 = r2.popExitAnim
            r3.setNextAnim(r4)
            android.support.v4.app.FragmentManagerImpl r4 = r6.mManager
            r4.removeFragment(r3)
        L8e:
            boolean r4 = r6.mReorderingAllowed
            if (r4 != 0) goto L9e
            int r2 = r2.cmd
            r4 = 3
            if (r2 == r4) goto L9e
            if (r3 == 0) goto L9e
            android.support.v4.app.FragmentManagerImpl r2 = r6.mManager
            r2.moveFragmentToExpectedState(r3)
        L9e:
            int r0 = r0 + (-1)
            goto L8
        La2:
            boolean r0 = r6.mReorderingAllowed
            if (r0 != 0) goto Laf
            if (r7 == 0) goto Laf
            android.support.v4.app.FragmentManagerImpl r7 = r6.mManager
            int r0 = r7.mCurState
            r7.moveToState(r0, r1)
        Laf:
            return
    }

    android.support.v4.app.Fragment expandOps(java.util.ArrayList<android.support.v4.app.Fragment> r17, android.support.v4.app.Fragment r18) {
            r16 = this;
            r0 = r16
            r1 = r17
            r4 = r18
            r3 = 0
        L7:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r5 = r0.mOps
            int r5 = r5.size()
            if (r3 >= r5) goto Lc0
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r5 = r0.mOps
            java.lang.Object r5 = r5.get(r3)
            android.support.v4.app.BackStackRecord$Op r5 = (android.support.v4.app.BackStackRecord.Op) r5
            int r6 = r5.cmd
            r7 = 0
            r8 = 1
            if (r6 == r8) goto Lb8
            r9 = 2
            r10 = 3
            r11 = 9
            if (r6 == r9) goto L5a
            if (r6 == r10) goto L41
            r9 = 6
            if (r6 == r9) goto L41
            r7 = 7
            if (r6 == r7) goto Lb8
            r7 = 8
            if (r6 == r7) goto L31
            goto Lbd
        L31:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r6 = r0.mOps
            android.support.v4.app.BackStackRecord$Op r7 = new android.support.v4.app.BackStackRecord$Op
            r7.<init>(r11, r4)
            r6.add(r3, r7)
            int r3 = r3 + 1
            android.support.v4.app.Fragment r4 = r5.fragment
            goto Lbd
        L41:
            android.support.v4.app.Fragment r6 = r5.fragment
            r1.remove(r6)
            android.support.v4.app.Fragment r6 = r5.fragment
            if (r6 != r4) goto Lbd
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r4 = r0.mOps
            android.support.v4.app.BackStackRecord$Op r6 = new android.support.v4.app.BackStackRecord$Op
            android.support.v4.app.Fragment r5 = r5.fragment
            r6.<init>(r11, r5)
            r4.add(r3, r6)
            int r3 = r3 + 1
            r4 = r7
            goto Lbd
        L5a:
            android.support.v4.app.Fragment r6 = r5.fragment
            int r9 = r6.mContainerId
            int r12 = r17.size()
            int r12 = r12 - r8
            r13 = r4
            r4 = r3
            r3 = 0
        L66:
            if (r12 < 0) goto La6
            java.lang.Object r14 = r1.get(r12)
            android.support.v4.app.Fragment r14 = (android.support.v4.app.Fragment) r14
            int r15 = r14.mContainerId
            if (r15 != r9) goto La3
            if (r14 != r6) goto L76
            r3 = 1
            goto La3
        L76:
            if (r14 != r13) goto L85
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r13 = r0.mOps
            android.support.v4.app.BackStackRecord$Op r15 = new android.support.v4.app.BackStackRecord$Op
            r15.<init>(r11, r14)
            r13.add(r4, r15)
            int r4 = r4 + 1
            r13 = r7
        L85:
            android.support.v4.app.BackStackRecord$Op r15 = new android.support.v4.app.BackStackRecord$Op
            r15.<init>(r10, r14)
            int r2 = r5.enterAnim
            r15.enterAnim = r2
            int r2 = r5.popEnterAnim
            r15.popEnterAnim = r2
            int r2 = r5.exitAnim
            r15.exitAnim = r2
            int r2 = r5.popExitAnim
            r15.popExitAnim = r2
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r0.mOps
            r2.add(r4, r15)
            r1.remove(r14)
            int r4 = r4 + r8
        La3:
            int r12 = r12 + (-1)
            goto L66
        La6:
            if (r3 == 0) goto Lb0
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r0.mOps
            r2.remove(r4)
            int r4 = r4 + (-1)
            goto Lb5
        Lb0:
            r5.cmd = r8
            r1.add(r6)
        Lb5:
            r3 = r4
            r4 = r13
            goto Lbd
        Lb8:
            android.support.v4.app.Fragment r2 = r5.fragment
            r1.add(r2)
        Lbd:
            int r3 = r3 + r8
            goto L7
        Lc0:
            return r4
    }

    @Override
    public boolean generateOps(java.util.ArrayList<android.support.v4.app.BackStackRecord> r3, java.util.ArrayList<java.lang.Boolean> r4) {
            r2 = this;
            boolean r0 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Run: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "FragmentManager"
            android.util.Log.v(r1, r0)
        L1a:
            r3.add(r2)
            r3 = 0
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r4.add(r3)
            boolean r3 = r2.mAddToBackStack
            if (r3 == 0) goto L2e
            android.support.v4.app.FragmentManagerImpl r3 = r2.mManager
            r3.addBackStackState(r2)
        L2e:
            r3 = 1
            return r3
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.CharSequence getBreadCrumbShortTitle() {
            r2 = this;
            int r0 = r2.mBreadCrumbShortTitleRes
            if (r0 == 0) goto L13
            android.support.v4.app.FragmentManagerImpl r0 = r2.mManager
            android.support.v4.app.FragmentHostCallback r0 = r0.mHost
            android.content.Context r0 = r0.getContext()
            int r1 = r2.mBreadCrumbShortTitleRes
            java.lang.CharSequence r0 = r0.getText(r1)
            return r0
        L13:
            java.lang.CharSequence r0 = r2.mBreadCrumbShortTitleText
            return r0
    }

    @Override
    public int getBreadCrumbShortTitleRes() {
            r1 = this;
            int r0 = r1.mBreadCrumbShortTitleRes
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.CharSequence getBreadCrumbTitle() {
            r2 = this;
            int r0 = r2.mBreadCrumbTitleRes
            if (r0 == 0) goto L13
            android.support.v4.app.FragmentManagerImpl r0 = r2.mManager
            android.support.v4.app.FragmentHostCallback r0 = r0.mHost
            android.content.Context r0 = r0.getContext()
            int r1 = r2.mBreadCrumbTitleRes
            java.lang.CharSequence r0 = r0.getText(r1)
            return r0
        L13:
            java.lang.CharSequence r0 = r2.mBreadCrumbTitleText
            return r0
    }

    @Override
    public int getBreadCrumbTitleRes() {
            r1 = this;
            int r0 = r1.mBreadCrumbTitleRes
            return r0
    }

    @Override
    public int getId() {
            r1 = this;
            int r0 = r1.mIndex
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.mName
            return r0
    }

    public int getTransition() {
            r1 = this;
            int r0 = r1.mTransition
            return r0
    }

    public int getTransitionStyle() {
            r1 = this;
            int r0 = r1.mTransitionStyle
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction hide(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 4
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    boolean interactsWith(int r6) {
            r5 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r5.mOps
            int r0 = r0.size()
            r1 = 0
            r2 = 0
        L8:
            if (r2 >= r0) goto L25
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r3 = r5.mOps
            java.lang.Object r3 = r3.get(r2)
            android.support.v4.app.BackStackRecord$Op r3 = (android.support.v4.app.BackStackRecord.Op) r3
            android.support.v4.app.Fragment r4 = r3.fragment
            if (r4 == 0) goto L1b
            android.support.v4.app.Fragment r3 = r3.fragment
            int r3 = r3.mContainerId
            goto L1c
        L1b:
            r3 = 0
        L1c:
            if (r3 == 0) goto L22
            if (r3 != r6) goto L22
            r6 = 1
            return r6
        L22:
            int r2 = r2 + 1
            goto L8
        L25:
            return r1
    }

    boolean interactsWith(java.util.ArrayList<android.support.v4.app.BackStackRecord> r11, int r12, int r13) {
            r10 = this;
            r0 = 0
            if (r13 != r12) goto L4
            return r0
        L4:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r1 = r10.mOps
            int r1 = r1.size()
            r2 = -1
            r2 = 0
            r3 = -1
        Ld:
            if (r2 >= r1) goto L57
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r4 = r10.mOps
            java.lang.Object r4 = r4.get(r2)
            android.support.v4.app.BackStackRecord$Op r4 = (android.support.v4.app.BackStackRecord.Op) r4
            android.support.v4.app.Fragment r5 = r4.fragment
            if (r5 == 0) goto L20
            android.support.v4.app.Fragment r4 = r4.fragment
            int r4 = r4.mContainerId
            goto L21
        L20:
            r4 = 0
        L21:
            if (r4 == 0) goto L54
            if (r4 == r3) goto L54
            r3 = r12
        L26:
            if (r3 >= r13) goto L53
            java.lang.Object r5 = r11.get(r3)
            android.support.v4.app.BackStackRecord r5 = (android.support.v4.app.BackStackRecord) r5
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r6 = r5.mOps
            int r6 = r6.size()
            r7 = 0
        L35:
            if (r7 >= r6) goto L50
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r8 = r5.mOps
            java.lang.Object r8 = r8.get(r7)
            android.support.v4.app.BackStackRecord$Op r8 = (android.support.v4.app.BackStackRecord.Op) r8
            android.support.v4.app.Fragment r9 = r8.fragment
            if (r9 == 0) goto L48
            android.support.v4.app.Fragment r8 = r8.fragment
            int r8 = r8.mContainerId
            goto L49
        L48:
            r8 = 0
        L49:
            if (r8 != r4) goto L4d
            r11 = 1
            return r11
        L4d:
            int r7 = r7 + 1
            goto L35
        L50:
            int r3 = r3 + 1
            goto L26
        L53:
            r3 = r4
        L54:
            int r2 = r2 + 1
            goto Ld
        L57:
            return r0
    }

    @Override
    public boolean isAddToBackStackAllowed() {
            r1 = this;
            boolean r0 = r1.mAllowAddToBackStack
            return r0
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r1.mOps
            boolean r0 = r0.isEmpty()
            return r0
    }

    boolean isPostponed() {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r3.mOps
            int r2 = r2.size()
            if (r1 >= r2) goto L1d
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r3.mOps
            java.lang.Object r2 = r2.get(r1)
            android.support.v4.app.BackStackRecord$Op r2 = (android.support.v4.app.BackStackRecord.Op) r2
            boolean r2 = isFragmentPostponed(r2)
            if (r2 == 0) goto L1a
            r0 = 1
            return r0
        L1a:
            int r1 = r1 + 1
            goto L2
        L1d:
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction remove(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 3
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction replace(int r2, android.support.v4.app.Fragment r3) {
            r1 = this;
            r0 = 0
            android.support.v4.app.FragmentTransaction r2 = r1.replace(r2, r3, r0)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction replace(int r2, android.support.v4.app.Fragment r3, @android.support.annotation.Nullable java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L7
            r0 = 2
            r1.doAddOp(r2, r3, r4, r0)
            return r1
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Must use non-zero containerViewId"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction runOnCommit(java.lang.Runnable r2) {
            r1 = this;
            if (r2 == 0) goto L16
            r1.disallowAddToBackStack()
            java.util.ArrayList<java.lang.Runnable> r0 = r1.mCommitRunnables
            if (r0 != 0) goto L10
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mCommitRunnables = r0
        L10:
            java.util.ArrayList<java.lang.Runnable> r0 = r1.mCommitRunnables
            r0.add(r2)
            return r1
        L16:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "runnable cannot be null"
            r2.<init>(r0)
            throw r2
    }

    public void runOnCommitRunnables() {
            r3 = this;
            java.util.ArrayList<java.lang.Runnable> r0 = r3.mCommitRunnables
            if (r0 == 0) goto L1c
            r1 = 0
            int r0 = r0.size()
        L9:
            if (r1 >= r0) goto L19
            java.util.ArrayList<java.lang.Runnable> r2 = r3.mCommitRunnables
            java.lang.Object r2 = r2.get(r1)
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            r2.run()
            int r1 = r1 + 1
            goto L9
        L19:
            r0 = 0
            r3.mCommitRunnables = r0
        L1c:
            return
    }

    @Override
    public android.support.v4.app.FragmentTransaction setAllowOptimization(boolean r1) {
            r0 = this;
            android.support.v4.app.FragmentTransaction r1 = r0.setReorderingAllowed(r1)
            return r1
    }

    @Override
    public android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(int r1) {
            r0 = this;
            r0.mBreadCrumbShortTitleRes = r1
            r1 = 0
            r0.mBreadCrumbShortTitleText = r1
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(@android.support.annotation.Nullable java.lang.CharSequence r2) {
            r1 = this;
            r0 = 0
            r1.mBreadCrumbShortTitleRes = r0
            r1.mBreadCrumbShortTitleText = r2
            return r1
    }

    @Override
    public android.support.v4.app.FragmentTransaction setBreadCrumbTitle(int r1) {
            r0 = this;
            r0.mBreadCrumbTitleRes = r1
            r1 = 0
            r0.mBreadCrumbTitleText = r1
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction setBreadCrumbTitle(@android.support.annotation.Nullable java.lang.CharSequence r2) {
            r1 = this;
            r0 = 0
            r1.mBreadCrumbTitleRes = r0
            r1.mBreadCrumbTitleText = r2
            return r1
    }

    @Override
    public android.support.v4.app.FragmentTransaction setCustomAnimations(int r2, int r3) {
            r1 = this;
            r0 = 0
            android.support.v4.app.FragmentTransaction r2 = r1.setCustomAnimations(r2, r3, r0, r0)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction setCustomAnimations(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.mEnterAnim = r1
            r0.mExitAnim = r2
            r0.mPopEnterAnim = r3
            r0.mPopExitAnim = r4
            return r0
    }

    void setOnStartPostponedListener(android.support.v4.app.Fragment.OnStartEnterTransitionListener r4) {
            r3 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r1 = r3.mOps
            int r1 = r1.size()
            if (r0 >= r1) goto L1f
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r1 = r3.mOps
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.BackStackRecord$Op r1 = (android.support.v4.app.BackStackRecord.Op) r1
            boolean r2 = isFragmentPostponed(r1)
            if (r2 == 0) goto L1c
            android.support.v4.app.Fragment r1 = r1.fragment
            r1.setOnStartEnterTransitionListener(r4)
        L1c:
            int r0 = r0 + 1
            goto L1
        L1f:
            return
    }

    @Override
    public android.support.v4.app.FragmentTransaction setPrimaryNavigationFragment(@android.support.annotation.Nullable android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 8
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    @Override
    public android.support.v4.app.FragmentTransaction setReorderingAllowed(boolean r1) {
            r0 = this;
            r0.mReorderingAllowed = r1
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction setTransition(int r1) {
            r0 = this;
            r0.mTransition = r1
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction setTransitionStyle(int r1) {
            r0 = this;
            r0.mTransitionStyle = r1
            return r0
    }

    @Override
    public android.support.v4.app.FragmentTransaction show(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.BackStackRecord$Op r0 = new android.support.v4.app.BackStackRecord$Op
            r1 = 5
            r0.<init>(r1, r3)
            r2.addOp(r0)
            return r2
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.String r1 = "BackStackEntry{"
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            int r1 = r2.mIndex
            if (r1 < 0) goto L25
            java.lang.String r1 = " #"
            r0.append(r1)
            int r1 = r2.mIndex
            r0.append(r1)
        L25:
            java.lang.String r1 = r2.mName
            if (r1 == 0) goto L33
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = r2.mName
            r0.append(r1)
        L33:
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    android.support.v4.app.Fragment trackAddedFragmentsInPop(java.util.ArrayList<android.support.v4.app.Fragment> r5, android.support.v4.app.Fragment r6) {
            r4 = this;
            r0 = 0
        L1:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r1 = r4.mOps
            int r1 = r1.size()
            if (r0 >= r1) goto L30
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r1 = r4.mOps
            java.lang.Object r1 = r1.get(r0)
            android.support.v4.app.BackStackRecord$Op r1 = (android.support.v4.app.BackStackRecord.Op) r1
            int r2 = r1.cmd
            r3 = 1
            if (r2 == r3) goto L28
            r3 = 3
            if (r2 == r3) goto L22
            switch(r2) {
                case 6: goto L22;
                case 7: goto L28;
                case 8: goto L20;
                case 9: goto L1d;
                default: goto L1c;
            }
        L1c:
            goto L2d
        L1d:
            android.support.v4.app.Fragment r6 = r1.fragment
            goto L2d
        L20:
            r6 = 0
            goto L2d
        L22:
            android.support.v4.app.Fragment r1 = r1.fragment
            r5.add(r1)
            goto L2d
        L28:
            android.support.v4.app.Fragment r1 = r1.fragment
            r5.remove(r1)
        L2d:
            int r0 = r0 + 1
            goto L1
        L30:
            return r6
    }
}
