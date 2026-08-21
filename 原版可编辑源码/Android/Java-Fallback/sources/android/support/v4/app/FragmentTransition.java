package android.support.v4.app;

class FragmentTransition {
    private static final int[] INVERSE_OPS = null;
    private static final android.support.v4.app.FragmentTransitionImpl PLATFORM_IMPL = null;
    private static final android.support.v4.app.FragmentTransitionImpl SUPPORT_IMPL = null;





    static class FragmentContainerTransition {
        public android.support.v4.app.Fragment firstOut;
        public boolean firstOutIsPop;
        public android.support.v4.app.BackStackRecord firstOutTransaction;
        public android.support.v4.app.Fragment lastIn;
        public boolean lastInIsPop;
        public android.support.v4.app.BackStackRecord lastInTransaction;

        FragmentContainerTransition() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            r0 = 10
            int[] r0 = new int[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [0, 3, 0, 1, 5, 4, 7, 6, 9, 8} // fill-array
            android.support.v4.app.FragmentTransition.INVERSE_OPS = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L15
            android.support.v4.app.FragmentTransitionCompat21 r0 = new android.support.v4.app.FragmentTransitionCompat21
            r0.<init>()
            goto L16
        L15:
            r0 = 0
        L16:
            android.support.v4.app.FragmentTransition.PLATFORM_IMPL = r0
            android.support.v4.app.FragmentTransitionImpl r0 = resolveSupportImpl()
            android.support.v4.app.FragmentTransition.SUPPORT_IMPL = r0
            return
    }

    private FragmentTransition() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void addSharedElementsWithMatchingNames(java.util.ArrayList<android.view.View> r3, android.support.v4.util.ArrayMap<java.lang.String, android.view.View> r4, java.util.Collection<java.lang.String> r5) {
            int r0 = r4.size()
            int r0 = r0 + (-1)
        L6:
            if (r0 < 0) goto L1e
            java.lang.Object r1 = r4.valueAt(r0)
            android.view.View r1 = (android.view.View) r1
            java.lang.String r2 = android.support.v4.view.ViewCompat.getTransitionName(r1)
            boolean r2 = r5.contains(r2)
            if (r2 == 0) goto L1b
            r3.add(r1)
        L1b:
            int r0 = r0 + (-1)
            goto L6
        L1e:
            return
    }

    private static void addToFirstInLastOut(android.support.v4.app.BackStackRecord r16, android.support.v4.app.BackStackRecord.Op r17, android.util.SparseArray<android.support.v4.app.FragmentTransition.FragmentContainerTransition> r18, boolean r19, boolean r20) {
            r0 = r16
            r1 = r17
            r2 = r18
            r3 = r19
            android.support.v4.app.Fragment r10 = r1.fragment
            if (r10 != 0) goto Ld
            return
        Ld:
            int r11 = r10.mContainerId
            if (r11 != 0) goto L12
            return
        L12:
            if (r3 == 0) goto L1b
            int[] r4 = android.support.v4.app.FragmentTransition.INVERSE_OPS
            int r1 = r1.cmd
            r1 = r4[r1]
            goto L1d
        L1b:
            int r1 = r1.cmd
        L1d:
            r4 = 0
            r5 = 1
            if (r1 == r5) goto L8a
            r6 = 3
            if (r1 == r6) goto L60
            r6 = 4
            if (r1 == r6) goto L48
            r6 = 5
            if (r1 == r6) goto L35
            r6 = 6
            if (r1 == r6) goto L60
            r6 = 7
            if (r1 == r6) goto L8a
            r1 = r4
            r12 = r1
            r13 = r12
            goto L9e
        L35:
            if (r20 == 0) goto L44
            boolean r1 = r10.mHiddenChanged
            if (r1 == 0) goto L99
            boolean r1 = r10.mHidden
            if (r1 != 0) goto L99
            boolean r1 = r10.mAdded
            if (r1 == 0) goto L99
            goto L97
        L44:
            boolean r1 = r10.mHidden
            goto L9a
        L48:
            if (r20 == 0) goto L57
            boolean r1 = r10.mHiddenChanged
            if (r1 == 0) goto L7b
            boolean r1 = r10.mAdded
            if (r1 == 0) goto L7b
            boolean r1 = r10.mHidden
            if (r1 == 0) goto L7b
        L56:
            goto L79
        L57:
            boolean r1 = r10.mAdded
            if (r1 == 0) goto L7b
            boolean r1 = r10.mHidden
            if (r1 != 0) goto L7b
            goto L56
        L60:
            if (r20 == 0) goto L7d
            boolean r1 = r10.mAdded
            if (r1 != 0) goto L7b
            android.view.View r1 = r10.mView
            if (r1 == 0) goto L7b
            android.view.View r1 = r10.mView
            int r1 = r1.getVisibility()
            if (r1 != 0) goto L7b
            float r1 = r10.mPostponedAlpha
            r6 = 0
            int r1 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r1 < 0) goto L7b
        L79:
            r1 = r5
            goto L86
        L7b:
            r1 = r4
            goto L86
        L7d:
            boolean r1 = r10.mAdded
            if (r1 == 0) goto L7b
            boolean r1 = r10.mHidden
            if (r1 != 0) goto L7b
            goto L79
        L86:
            r13 = r1
            r1 = r4
            r12 = r5
            goto L9e
        L8a:
            if (r20 == 0) goto L8f
            boolean r1 = r10.mIsNewlyAdded
            goto L9a
        L8f:
            boolean r1 = r10.mAdded
            if (r1 != 0) goto L99
            boolean r1 = r10.mHidden
            if (r1 != 0) goto L99
        L97:
            r1 = r5
            goto L9a
        L99:
            r1 = r4
        L9a:
            r12 = r4
            r13 = r12
            r4 = r1
            r1 = r5
        L9e:
            java.lang.Object r6 = r2.get(r11)
            android.support.v4.app.FragmentTransition$FragmentContainerTransition r6 = (android.support.v4.app.FragmentTransition.FragmentContainerTransition) r6
            if (r4 == 0) goto Lb0
            android.support.v4.app.FragmentTransition$FragmentContainerTransition r6 = ensureContainer(r6, r2, r11)
            r6.lastIn = r10
            r6.lastInIsPop = r3
            r6.lastInTransaction = r0
        Lb0:
            r14 = r6
            r15 = 0
            if (r20 != 0) goto Ld7
            if (r1 == 0) goto Ld7
            if (r14 == 0) goto Lbe
            android.support.v4.app.Fragment r1 = r14.firstOut
            if (r1 != r10) goto Lbe
            r14.firstOut = r15
        Lbe:
            android.support.v4.app.FragmentManagerImpl r4 = r0.mManager
            int r1 = r10.mState
            if (r1 >= r5) goto Ld7
            int r1 = r4.mCurState
            if (r1 < r5) goto Ld7
            boolean r1 = r0.mReorderingAllowed
            if (r1 != 0) goto Ld7
            r4.makeActive(r10)
            r6 = 1
            r7 = 0
            r8 = 0
            r9 = 0
            r5 = r10
            r4.moveToState(r5, r6, r7, r8, r9)
        Ld7:
            if (r13 == 0) goto Le9
            if (r14 == 0) goto Ldf
            android.support.v4.app.Fragment r1 = r14.firstOut
            if (r1 != 0) goto Le9
        Ldf:
            android.support.v4.app.FragmentTransition$FragmentContainerTransition r14 = ensureContainer(r14, r2, r11)
            r14.firstOut = r10
            r14.firstOutIsPop = r3
            r14.firstOutTransaction = r0
        Le9:
            if (r20 != 0) goto Lf5
            if (r12 == 0) goto Lf5
            if (r14 == 0) goto Lf5
            android.support.v4.app.Fragment r0 = r14.lastIn
            if (r0 != r10) goto Lf5
            r14.lastIn = r15
        Lf5:
            return
    }

    public static void calculateFragments(android.support.v4.app.BackStackRecord r4, android.util.SparseArray<android.support.v4.app.FragmentTransition.FragmentContainerTransition> r5, boolean r6) {
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r4.mOps
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L18
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r3 = r4.mOps
            java.lang.Object r3 = r3.get(r2)
            android.support.v4.app.BackStackRecord$Op r3 = (android.support.v4.app.BackStackRecord.Op) r3
            addToFirstInLastOut(r4, r3, r5, r1, r6)
            int r2 = r2 + 1
            goto L8
        L18:
            return
    }

    private static android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> calculateNameOverrides(int r9, java.util.ArrayList<android.support.v4.app.BackStackRecord> r10, java.util.ArrayList<java.lang.Boolean> r11, int r12, int r13) {
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            int r13 = r13 + (-1)
        L7:
            if (r13 < r12) goto L5c
            java.lang.Object r1 = r10.get(r13)
            android.support.v4.app.BackStackRecord r1 = (android.support.v4.app.BackStackRecord) r1
            boolean r2 = r1.interactsWith(r9)
            if (r2 != 0) goto L16
            goto L59
        L16:
            java.lang.Object r2 = r11.get(r13)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            java.util.ArrayList<java.lang.String> r3 = r1.mSharedElementSourceNames
            if (r3 == 0) goto L59
            java.util.ArrayList<java.lang.String> r3 = r1.mSharedElementSourceNames
            int r3 = r3.size()
            if (r2 == 0) goto L31
            java.util.ArrayList<java.lang.String> r2 = r1.mSharedElementSourceNames
            java.util.ArrayList<java.lang.String> r1 = r1.mSharedElementTargetNames
            goto L38
        L31:
            java.util.ArrayList<java.lang.String> r2 = r1.mSharedElementSourceNames
            java.util.ArrayList<java.lang.String> r1 = r1.mSharedElementTargetNames
            r8 = r2
            r2 = r1
            r1 = r8
        L38:
            r4 = 0
        L39:
            if (r4 >= r3) goto L59
            java.lang.Object r5 = r1.get(r4)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r6 = r2.get(r4)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r7 = r0.remove(r6)
            java.lang.String r7 = (java.lang.String) r7
            if (r7 == 0) goto L53
            r0.put(r5, r7)
            goto L56
        L53:
            r0.put(r5, r6)
        L56:
            int r4 = r4 + 1
            goto L39
        L59:
            int r13 = r13 + (-1)
            goto L7
        L5c:
            return r0
    }

    public static void calculatePopFragments(android.support.v4.app.BackStackRecord r3, android.util.SparseArray<android.support.v4.app.FragmentTransition.FragmentContainerTransition> r4, boolean r5) {
            android.support.v4.app.FragmentManagerImpl r0 = r3.mManager
            android.support.v4.app.FragmentContainer r0 = r0.mContainer
            boolean r0 = r0.onHasView()
            if (r0 != 0) goto Lb
            return
        Lb:
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r3.mOps
            int r0 = r0.size()
            r1 = 1
            int r0 = r0 - r1
        L13:
            if (r0 < 0) goto L23
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r2 = r3.mOps
            java.lang.Object r2 = r2.get(r0)
            android.support.v4.app.BackStackRecord$Op r2 = (android.support.v4.app.BackStackRecord.Op) r2
            addToFirstInLastOut(r3, r2, r4, r1, r5)
            int r0 = r0 + (-1)
            goto L13
        L23:
            return
    }

    static void callSharedElementStartEnd(android.support.v4.app.Fragment r3, android.support.v4.app.Fragment r4, boolean r5, android.support.v4.util.ArrayMap<java.lang.String, android.view.View> r6, boolean r7) {
            if (r5 == 0) goto L7
            android.support.v4.app.SharedElementCallback r3 = r4.getEnterTransitionCallback()
            goto Lb
        L7:
            android.support.v4.app.SharedElementCallback r3 = r3.getEnterTransitionCallback()
        Lb:
            if (r3 == 0) goto L3d
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r0 = 0
            if (r6 != 0) goto L1c
            r1 = r0
            goto L20
        L1c:
            int r1 = r6.size()
        L20:
            if (r0 >= r1) goto L33
            java.lang.Object r2 = r6.keyAt(r0)
            r5.add(r2)
            java.lang.Object r2 = r6.valueAt(r0)
            r4.add(r2)
            int r0 = r0 + 1
            goto L20
        L33:
            r6 = 0
            if (r7 == 0) goto L3a
            r3.onSharedElementStart(r5, r4, r6)
            goto L3d
        L3a:
            r3.onSharedElementEnd(r5, r4, r6)
        L3d:
            return
    }

    private static boolean canHandleAll(android.support.v4.app.FragmentTransitionImpl r4, java.util.List<java.lang.Object> r5) {
            int r0 = r5.size()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L16
            java.lang.Object r3 = r5.get(r2)
            boolean r3 = r4.canHandle(r3)
            if (r3 != 0) goto L13
            return r1
        L13:
            int r2 = r2 + 1
            goto L6
        L16:
            r4 = 1
            return r4
    }

    static android.support.v4.util.ArrayMap<java.lang.String, android.view.View> captureInSharedElements(android.support.v4.app.FragmentTransitionImpl r3, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r4, java.lang.Object r5, android.support.v4.app.FragmentTransition.FragmentContainerTransition r6) {
            android.support.v4.app.Fragment r0 = r6.lastIn
            android.view.View r1 = r0.getView()
            boolean r2 = r4.isEmpty()
            if (r2 != 0) goto L7b
            if (r5 == 0) goto L7b
            if (r1 != 0) goto L11
            goto L7b
        L11:
            android.support.v4.util.ArrayMap r5 = new android.support.v4.util.ArrayMap
            r5.<init>()
            r3.findNamedViews(r5, r1)
            android.support.v4.app.BackStackRecord r3 = r6.lastInTransaction
            boolean r6 = r6.lastInIsPop
            if (r6 == 0) goto L26
            android.support.v4.app.SharedElementCallback r6 = r0.getExitTransitionCallback()
            java.util.ArrayList<java.lang.String> r3 = r3.mSharedElementSourceNames
            goto L2c
        L26:
            android.support.v4.app.SharedElementCallback r6 = r0.getEnterTransitionCallback()
            java.util.ArrayList<java.lang.String> r3 = r3.mSharedElementTargetNames
        L2c:
            if (r3 == 0) goto L38
            r5.retainAll(r3)
            java.util.Collection r0 = r4.values()
            r5.retainAll(r0)
        L38:
            if (r6 == 0) goto L77
            r6.onMapSharedElements(r3, r5)
            int r6 = r3.size()
            int r6 = r6 + (-1)
        L43:
            if (r6 < 0) goto L7a
            java.lang.Object r0 = r3.get(r6)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r1 = r5.get(r0)
            android.view.View r1 = (android.view.View) r1
            if (r1 != 0) goto L5d
            java.lang.String r0 = findKeyForValue(r4, r0)
            if (r0 == 0) goto L74
            r4.remove(r0)
            goto L74
        L5d:
            java.lang.String r2 = android.support.v4.view.ViewCompat.getTransitionName(r1)
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L74
            java.lang.String r0 = findKeyForValue(r4, r0)
            if (r0 == 0) goto L74
            java.lang.String r1 = android.support.v4.view.ViewCompat.getTransitionName(r1)
            r4.put(r0, r1)
        L74:
            int r6 = r6 + (-1)
            goto L43
        L77:
            retainValues(r4, r5)
        L7a:
            return r5
        L7b:
            r4.clear()
            r3 = 0
            return r3
    }

    private static android.support.v4.util.ArrayMap<java.lang.String, android.view.View> captureOutSharedElements(android.support.v4.app.FragmentTransitionImpl r3, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r4, java.lang.Object r5, android.support.v4.app.FragmentTransition.FragmentContainerTransition r6) {
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L6e
            if (r5 != 0) goto L9
            goto L6e
        L9:
            android.support.v4.app.Fragment r5 = r6.firstOut
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            android.view.View r1 = r5.getView()
            r3.findNamedViews(r0, r1)
            android.support.v4.app.BackStackRecord r3 = r6.firstOutTransaction
            boolean r6 = r6.firstOutIsPop
            if (r6 == 0) goto L24
            android.support.v4.app.SharedElementCallback r5 = r5.getEnterTransitionCallback()
            java.util.ArrayList<java.lang.String> r3 = r3.mSharedElementTargetNames
            goto L2a
        L24:
            android.support.v4.app.SharedElementCallback r5 = r5.getExitTransitionCallback()
            java.util.ArrayList<java.lang.String> r3 = r3.mSharedElementSourceNames
        L2a:
            r0.retainAll(r3)
            if (r5 == 0) goto L66
            r5.onMapSharedElements(r3, r0)
            int r5 = r3.size()
            int r5 = r5 + (-1)
        L38:
            if (r5 < 0) goto L6d
            java.lang.Object r6 = r3.get(r5)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r1 = r0.get(r6)
            android.view.View r1 = (android.view.View) r1
            if (r1 != 0) goto L4c
            r4.remove(r6)
            goto L63
        L4c:
            java.lang.String r2 = android.support.v4.view.ViewCompat.getTransitionName(r1)
            boolean r2 = r6.equals(r2)
            if (r2 != 0) goto L63
            java.lang.Object r6 = r4.remove(r6)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r1 = android.support.v4.view.ViewCompat.getTransitionName(r1)
            r4.put(r1, r6)
        L63:
            int r5 = r5 + (-1)
            goto L38
        L66:
            java.util.Set r3 = r0.keySet()
            r4.retainAll(r3)
        L6d:
            return r0
        L6e:
            r4.clear()
            r3 = 0
            return r3
    }

    private static android.support.v4.app.FragmentTransitionImpl chooseImpl(android.support.v4.app.Fragment r2, android.support.v4.app.Fragment r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r2 == 0) goto L22
            java.lang.Object r1 = r2.getExitTransition()
            if (r1 == 0) goto L10
            r0.add(r1)
        L10:
            java.lang.Object r1 = r2.getReturnTransition()
            if (r1 == 0) goto L19
            r0.add(r1)
        L19:
            java.lang.Object r2 = r2.getSharedElementReturnTransition()
            if (r2 == 0) goto L22
            r0.add(r2)
        L22:
            if (r3 == 0) goto L3f
            java.lang.Object r2 = r3.getEnterTransition()
            if (r2 == 0) goto L2d
            r0.add(r2)
        L2d:
            java.lang.Object r2 = r3.getReenterTransition()
            if (r2 == 0) goto L36
            r0.add(r2)
        L36:
            java.lang.Object r2 = r3.getSharedElementEnterTransition()
            if (r2 == 0) goto L3f
            r0.add(r2)
        L3f:
            boolean r2 = r0.isEmpty()
            r3 = 0
            if (r2 == 0) goto L47
            return r3
        L47:
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.PLATFORM_IMPL
            if (r2 == 0) goto L54
            boolean r2 = canHandleAll(r2, r0)
            if (r2 == 0) goto L54
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.PLATFORM_IMPL
            return r2
        L54:
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.SUPPORT_IMPL
            if (r2 == 0) goto L61
            boolean r2 = canHandleAll(r2, r0)
            if (r2 == 0) goto L61
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.SUPPORT_IMPL
            return r2
        L61:
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.PLATFORM_IMPL
            if (r2 != 0) goto L6a
            android.support.v4.app.FragmentTransitionImpl r2 = android.support.v4.app.FragmentTransition.SUPPORT_IMPL
            if (r2 != 0) goto L6a
            return r3
        L6a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Invalid Transition types"
            r2.<init>(r3)
            throw r2
    }

    static java.util.ArrayList<android.view.View> configureEnteringExitingViews(android.support.v4.app.FragmentTransitionImpl r1, java.lang.Object r2, android.support.v4.app.Fragment r3, java.util.ArrayList<android.view.View> r4, android.view.View r5) {
            if (r2 == 0) goto L22
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.view.View r3 = r3.getView()
            if (r3 == 0) goto L10
            r1.captureTransitioningViews(r0, r3)
        L10:
            if (r4 == 0) goto L15
            r0.removeAll(r4)
        L15:
            boolean r3 = r0.isEmpty()
            if (r3 != 0) goto L23
            r0.add(r5)
            r1.addTargets(r2, r0)
            goto L23
        L22:
            r0 = 0
        L23:
            return r0
    }

    private static java.lang.Object configureSharedElementsOrdered(android.support.v4.app.FragmentTransitionImpl r17, android.view.ViewGroup r18, android.view.View r19, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r20, android.support.v4.app.FragmentTransition.FragmentContainerTransition r21, java.util.ArrayList<android.view.View> r22, java.util.ArrayList<android.view.View> r23, java.lang.Object r24, java.lang.Object r25) {
            r6 = r17
            r7 = r21
            r10 = r22
            r11 = r24
            android.support.v4.app.Fragment r8 = r7.lastIn
            android.support.v4.app.Fragment r9 = r7.firstOut
            r0 = 0
            if (r8 == 0) goto L87
            if (r9 != 0) goto L13
            goto L87
        L13:
            boolean r12 = r7.lastInIsPop
            boolean r1 = r20.isEmpty()
            if (r1 == 0) goto L1f
            r13 = r20
            r1 = r0
            goto L25
        L1f:
            java.lang.Object r1 = getSharedElementTransition(r6, r8, r9, r12)
            r13 = r20
        L25:
            android.support.v4.util.ArrayMap r3 = captureOutSharedElements(r6, r13, r1, r7)
            boolean r2 = r20.isEmpty()
            if (r2 == 0) goto L31
            r14 = r0
            goto L39
        L31:
            java.util.Collection r2 = r3.values()
            r10.addAll(r2)
            r14 = r1
        L39:
            if (r11 != 0) goto L40
            if (r25 != 0) goto L40
            if (r14 != 0) goto L40
            return r0
        L40:
            r1 = 1
            callSharedElementStartEnd(r8, r9, r12, r3, r1)
            if (r14 == 0) goto L66
            android.graphics.Rect r15 = new android.graphics.Rect
            r15.<init>()
            r5 = r19
            r6.setSharedElementTargets(r14, r5, r10)
            boolean r4 = r7.firstOutIsPop
            android.support.v4.app.BackStackRecord r2 = r7.firstOutTransaction
            r0 = r17
            r1 = r14
            r16 = r2
            r2 = r25
            r5 = r16
            setOutEpicenter(r0, r1, r2, r3, r4, r5)
            if (r11 == 0) goto L67
            r6.setEpicenter(r11, r15)
            goto L67
        L66:
            r15 = r0
        L67:
            android.support.v4.app.FragmentTransition$4 r5 = new android.support.v4.app.FragmentTransition$4
            r0 = r5
            r1 = r17
            r2 = r20
            r3 = r14
            r4 = r21
            r13 = r5
            r5 = r23
            r6 = r19
            r7 = r8
            r8 = r9
            r9 = r12
            r10 = r22
            r11 = r24
            r12 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            r0 = r18
            android.support.v4.app.OneShotPreDrawListener.add(r0, r13)
            return r14
        L87:
            return r0
    }

    private static java.lang.Object configureSharedElementsReordered(android.support.v4.app.FragmentTransitionImpl r15, android.view.ViewGroup r16, android.view.View r17, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r18, android.support.v4.app.FragmentTransition.FragmentContainerTransition r19, java.util.ArrayList<android.view.View> r20, java.util.ArrayList<android.view.View> r21, java.lang.Object r22, java.lang.Object r23) {
            r6 = r15
            r0 = r17
            r1 = r18
            r7 = r19
            r2 = r20
            r3 = r21
            r8 = r22
            android.support.v4.app.Fragment r9 = r7.lastIn
            android.support.v4.app.Fragment r10 = r7.firstOut
            if (r9 == 0) goto L1b
            android.view.View r4 = r9.getView()
            r5 = 0
            r4.setVisibility(r5)
        L1b:
            r4 = 0
            if (r9 == 0) goto L9c
            if (r10 != 0) goto L22
            goto L9c
        L22:
            boolean r11 = r7.lastInIsPop
            boolean r5 = r18.isEmpty()
            if (r5 == 0) goto L2c
            r5 = r4
            goto L30
        L2c:
            java.lang.Object r5 = getSharedElementTransition(r15, r9, r10, r11)
        L30:
            android.support.v4.util.ArrayMap r12 = captureOutSharedElements(r15, r1, r5, r7)
            android.support.v4.util.ArrayMap r13 = captureInSharedElements(r15, r1, r5, r7)
            boolean r14 = r18.isEmpty()
            if (r14 == 0) goto L4a
            if (r12 == 0) goto L43
            r12.clear()
        L43:
            if (r13 == 0) goto L48
            r13.clear()
        L48:
            r14 = r4
            goto L59
        L4a:
            java.util.Set r14 = r18.keySet()
            addSharedElementsWithMatchingNames(r2, r12, r14)
            java.util.Collection r1 = r18.values()
            addSharedElementsWithMatchingNames(r3, r13, r1)
            r14 = r5
        L59:
            if (r8 != 0) goto L60
            if (r23 != 0) goto L60
            if (r14 != 0) goto L60
            return r4
        L60:
            r1 = 1
            callSharedElementStartEnd(r9, r10, r11, r12, r1)
            if (r14 == 0) goto L89
            r3.add(r0)
            r15.setSharedElementTargets(r14, r0, r2)
            boolean r4 = r7.firstOutIsPop
            android.support.v4.app.BackStackRecord r5 = r7.firstOutTransaction
            r0 = r15
            r1 = r14
            r2 = r23
            r3 = r12
            setOutEpicenter(r0, r1, r2, r3, r4, r5)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.view.View r1 = getInEpicenterView(r13, r7, r8, r11)
            if (r1 == 0) goto L86
            r15.setEpicenter(r8, r0)
        L86:
            r7 = r0
            r5 = r1
            goto L8b
        L89:
            r5 = r4
            r7 = r5
        L8b:
            android.support.v4.app.FragmentTransition$3 r8 = new android.support.v4.app.FragmentTransition$3
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r13
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r0 = r16
            android.support.v4.app.OneShotPreDrawListener.add(r0, r8)
            return r14
        L9c:
            return r4
    }

    private static void configureTransitionsOrdered(android.support.v4.app.FragmentManagerImpl r19, int r20, android.support.v4.app.FragmentTransition.FragmentContainerTransition r21, android.view.View r22, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r23) {
            r0 = r19
            r9 = r21
            r10 = r22
            r11 = r23
            android.support.v4.app.FragmentContainer r1 = r0.mContainer
            boolean r1 = r1.onHasView()
            if (r1 == 0) goto L1c
            android.support.v4.app.FragmentContainer r0 = r0.mContainer
            r1 = r20
            android.view.View r0 = r0.onFindViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r13 = r0
            goto L1d
        L1c:
            r13 = 0
        L1d:
            if (r13 != 0) goto L20
            return
        L20:
            android.support.v4.app.Fragment r14 = r9.lastIn
            android.support.v4.app.Fragment r15 = r9.firstOut
            android.support.v4.app.FragmentTransitionImpl r8 = chooseImpl(r15, r14)
            if (r8 != 0) goto L2b
            return
        L2b:
            boolean r0 = r9.lastInIsPop
            boolean r1 = r9.firstOutIsPop
            java.lang.Object r7 = getEnterTransition(r8, r14, r0)
            java.lang.Object r6 = getExitTransition(r8, r15, r1)
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r0 = r8
            r1 = r13
            r2 = r22
            r3 = r23
            r19 = r4
            r4 = r21
            r20 = r5
            r16 = r6
            r6 = r19
            r17 = r7
            r12 = r8
            r8 = r16
            java.lang.Object r6 = configureSharedElementsOrdered(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            r8 = r17
            if (r8 != 0) goto L65
            if (r6 != 0) goto L65
            r0 = r16
            if (r0 != 0) goto L67
            return
        L65:
            r0 = r16
        L67:
            r1 = r20
            java.util.ArrayList r15 = configureEnteringExitingViews(r12, r0, r15, r1, r10)
            if (r15 == 0) goto L79
            boolean r1 = r15.isEmpty()
            if (r1 == 0) goto L76
            goto L79
        L76:
            r18 = r0
            goto L7b
        L79:
            r18 = 0
        L7b:
            r12.addTarget(r8, r10)
            boolean r5 = r9.lastInIsPop
            r0 = r12
            r1 = r8
            r2 = r18
            r3 = r6
            r4 = r14
            java.lang.Object r9 = mergeTransitions(r0, r1, r2, r3, r4, r5)
            if (r9 == 0) goto Lb8
            java.util.ArrayList r16 = new java.util.ArrayList
            r16.<init>()
            r0 = r12
            r1 = r9
            r2 = r8
            r3 = r16
            r4 = r18
            r5 = r15
            r7 = r19
            r0.scheduleRemoveTargets(r1, r2, r3, r4, r5, r6, r7)
            r1 = r13
            r2 = r14
            r3 = r22
            r4 = r19
            r5 = r8
            r6 = r16
            r7 = r18
            r8 = r15
            scheduleTargetChange(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = r19
            r12.setNameOverridesOrdered(r13, r0, r11)
            r12.beginDelayedTransition(r13, r9)
            r12.scheduleNameReset(r13, r0, r11)
        Lb8:
            return
    }

    private static void configureTransitionsReordered(android.support.v4.app.FragmentManagerImpl r17, int r18, android.support.v4.app.FragmentTransition.FragmentContainerTransition r19, android.view.View r20, android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r21) {
            r0 = r17
            r4 = r19
            r9 = r20
            android.support.v4.app.FragmentContainer r1 = r0.mContainer
            boolean r1 = r1.onHasView()
            if (r1 == 0) goto L19
            android.support.v4.app.FragmentContainer r0 = r0.mContainer
            r1 = r18
            android.view.View r0 = r0.onFindViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            goto L1a
        L19:
            r0 = 0
        L1a:
            r10 = r0
            if (r10 != 0) goto L1e
            return
        L1e:
            android.support.v4.app.Fragment r11 = r4.lastIn
            android.support.v4.app.Fragment r12 = r4.firstOut
            android.support.v4.app.FragmentTransitionImpl r13 = chooseImpl(r12, r11)
            if (r13 != 0) goto L29
            return
        L29:
            boolean r14 = r4.lastInIsPop
            boolean r0 = r4.firstOutIsPop
            java.util.ArrayList r15 = new java.util.ArrayList
            r15.<init>()
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            java.lang.Object r7 = getEnterTransition(r13, r11, r14)
            java.lang.Object r6 = getExitTransition(r13, r12, r0)
            r0 = r13
            r1 = r10
            r2 = r20
            r3 = r21
            r4 = r19
            r5 = r8
            r17 = r6
            r6 = r15
            r18 = r7
            r16 = r10
            r10 = r8
            r8 = r17
            java.lang.Object r8 = configureSharedElementsReordered(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            r6 = r18
            if (r6 != 0) goto L61
            if (r8 != 0) goto L61
            r7 = r17
            if (r7 != 0) goto L63
            return
        L61:
            r7 = r17
        L63:
            java.util.ArrayList r5 = configureEnteringExitingViews(r13, r7, r12, r10, r9)
            java.util.ArrayList r9 = configureEnteringExitingViews(r13, r6, r11, r15, r9)
            r0 = 4
            setViewVisibility(r9, r0)
            r0 = r13
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r11
            r11 = r5
            r5 = r14
            java.lang.Object r14 = mergeTransitions(r0, r1, r2, r3, r4, r5)
            if (r14 == 0) goto La4
            replaceHide(r13, r7, r12, r11)
            java.util.ArrayList r12 = r13.prepareSetNameOverridesReordered(r15)
            r0 = r13
            r1 = r14
            r2 = r6
            r3 = r9
            r4 = r7
            r5 = r11
            r6 = r8
            r7 = r15
            r0.scheduleRemoveTargets(r1, r2, r3, r4, r5, r6, r7)
            r0 = r16
            r13.beginDelayedTransition(r0, r14)
            r1 = r13
            r2 = r0
            r3 = r10
            r4 = r15
            r5 = r12
            r6 = r21
            r1.setNameOverridesReordered(r2, r3, r4, r5, r6)
            r0 = 0
            setViewVisibility(r9, r0)
            r13.swapSharedElementTargets(r8, r10, r15)
        La4:
            return
    }

    private static android.support.v4.app.FragmentTransition.FragmentContainerTransition ensureContainer(android.support.v4.app.FragmentTransition.FragmentContainerTransition r0, android.util.SparseArray<android.support.v4.app.FragmentTransition.FragmentContainerTransition> r1, int r2) {
            if (r0 != 0) goto La
            android.support.v4.app.FragmentTransition$FragmentContainerTransition r0 = new android.support.v4.app.FragmentTransition$FragmentContainerTransition
            r0.<init>()
            r1.put(r2, r0)
        La:
            return r0
    }

    private static java.lang.String findKeyForValue(android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r3, java.lang.String r4) {
            int r0 = r3.size()
            r1 = 0
        L5:
            if (r1 >= r0) goto L1b
            java.lang.Object r2 = r3.valueAt(r1)
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L18
            java.lang.Object r3 = r3.keyAt(r1)
            java.lang.String r3 = (java.lang.String) r3
            return r3
        L18:
            int r1 = r1 + 1
            goto L5
        L1b:
            r3 = 0
            return r3
    }

    private static java.lang.Object getEnterTransition(android.support.v4.app.FragmentTransitionImpl r0, android.support.v4.app.Fragment r1, boolean r2) {
            if (r1 != 0) goto L4
            r0 = 0
            return r0
        L4:
            if (r2 == 0) goto Lb
            java.lang.Object r1 = r1.getReenterTransition()
            goto Lf
        Lb:
            java.lang.Object r1 = r1.getEnterTransition()
        Lf:
            java.lang.Object r0 = r0.cloneTransition(r1)
            return r0
    }

    private static java.lang.Object getExitTransition(android.support.v4.app.FragmentTransitionImpl r0, android.support.v4.app.Fragment r1, boolean r2) {
            if (r1 != 0) goto L4
            r0 = 0
            return r0
        L4:
            if (r2 == 0) goto Lb
            java.lang.Object r1 = r1.getReturnTransition()
            goto Lf
        Lb:
            java.lang.Object r1 = r1.getExitTransition()
        Lf:
            java.lang.Object r0 = r0.cloneTransition(r1)
            return r0
    }

    static android.view.View getInEpicenterView(android.support.v4.util.ArrayMap<java.lang.String, android.view.View> r0, android.support.v4.app.FragmentTransition.FragmentContainerTransition r1, java.lang.Object r2, boolean r3) {
            android.support.v4.app.BackStackRecord r1 = r1.lastInTransaction
            if (r2 == 0) goto L2d
            if (r0 == 0) goto L2d
            java.util.ArrayList<java.lang.String> r2 = r1.mSharedElementSourceNames
            if (r2 == 0) goto L2d
            java.util.ArrayList<java.lang.String> r2 = r1.mSharedElementSourceNames
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L2d
            r2 = 0
            if (r3 == 0) goto L1e
            java.util.ArrayList<java.lang.String> r1 = r1.mSharedElementSourceNames
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            goto L26
        L1e:
            java.util.ArrayList<java.lang.String> r1 = r1.mSharedElementTargetNames
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
        L26:
            java.lang.Object r0 = r0.get(r1)
            android.view.View r0 = (android.view.View) r0
            return r0
        L2d:
            r0 = 0
            return r0
    }

    private static java.lang.Object getSharedElementTransition(android.support.v4.app.FragmentTransitionImpl r0, android.support.v4.app.Fragment r1, android.support.v4.app.Fragment r2, boolean r3) {
            if (r1 == 0) goto L19
            if (r2 != 0) goto L5
            goto L19
        L5:
            if (r3 == 0) goto Lc
            java.lang.Object r1 = r2.getSharedElementReturnTransition()
            goto L10
        Lc:
            java.lang.Object r1 = r1.getSharedElementEnterTransition()
        L10:
            java.lang.Object r1 = r0.cloneTransition(r1)
            java.lang.Object r0 = r0.wrapTransitionInSet(r1)
            return r0
        L19:
            r0 = 0
            return r0
    }

    private static java.lang.Object mergeTransitions(android.support.v4.app.FragmentTransitionImpl r0, java.lang.Object r1, java.lang.Object r2, java.lang.Object r3, android.support.v4.app.Fragment r4, boolean r5) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto L12
            if (r4 == 0) goto L12
            if (r5 == 0) goto Ld
            boolean r4 = r4.getAllowReturnTransitionOverlap()
            goto L13
        Ld:
            boolean r4 = r4.getAllowEnterTransitionOverlap()
            goto L13
        L12:
            r4 = 1
        L13:
            if (r4 == 0) goto L1a
            java.lang.Object r0 = r0.mergeTransitionsTogether(r2, r1, r3)
            goto L1e
        L1a:
            java.lang.Object r0 = r0.mergeTransitionsInSequence(r2, r1, r3)
        L1e:
            return r0
    }

    private static void replaceHide(android.support.v4.app.FragmentTransitionImpl r1, java.lang.Object r2, android.support.v4.app.Fragment r3, java.util.ArrayList<android.view.View> r4) {
            if (r3 == 0) goto L25
            if (r2 == 0) goto L25
            boolean r0 = r3.mAdded
            if (r0 == 0) goto L25
            boolean r0 = r3.mHidden
            if (r0 == 0) goto L25
            boolean r0 = r3.mHiddenChanged
            if (r0 == 0) goto L25
            r0 = 1
            r3.setHideReplaced(r0)
            android.view.View r0 = r3.getView()
            r1.scheduleHideFragmentView(r2, r0, r4)
            android.view.ViewGroup r1 = r3.mContainer
            android.support.v4.app.FragmentTransition$1 r2 = new android.support.v4.app.FragmentTransition$1
            r2.<init>(r4)
            android.support.v4.app.OneShotPreDrawListener.add(r1, r2)
        L25:
            return
    }

    private static android.support.v4.app.FragmentTransitionImpl resolveSupportImpl() {
            java.lang.String r0 = "android.support.transition.FragmentTransitionSupport"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L16
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L16
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r2)     // Catch: java.lang.Exception -> L16
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L16
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L16
            android.support.v4.app.FragmentTransitionImpl r0 = (android.support.v4.app.FragmentTransitionImpl) r0     // Catch: java.lang.Exception -> L16
            return r0
        L16:
            r0 = 0
            return r0
    }

    private static void retainValues(android.support.v4.util.ArrayMap<java.lang.String, java.lang.String> r2, android.support.v4.util.ArrayMap<java.lang.String, android.view.View> r3) {
            int r0 = r2.size()
            int r0 = r0 + (-1)
        L6:
            if (r0 < 0) goto L1a
            java.lang.Object r1 = r2.valueAt(r0)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r3.containsKey(r1)
            if (r1 != 0) goto L17
            r2.removeAt(r0)
        L17:
            int r0 = r0 + (-1)
            goto L6
        L1a:
            return
    }

    private static void scheduleTargetChange(android.support.v4.app.FragmentTransitionImpl r10, android.view.ViewGroup r11, android.support.v4.app.Fragment r12, android.view.View r13, java.util.ArrayList<android.view.View> r14, java.lang.Object r15, java.util.ArrayList<android.view.View> r16, java.lang.Object r17, java.util.ArrayList<android.view.View> r18) {
            android.support.v4.app.FragmentTransition$2 r9 = new android.support.v4.app.FragmentTransition$2
            r0 = r9
            r1 = r15
            r2 = r10
            r3 = r13
            r4 = r12
            r5 = r14
            r6 = r16
            r7 = r18
            r8 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = r11
            android.support.v4.app.OneShotPreDrawListener.add(r11, r9)
            return
    }

    private static void setOutEpicenter(android.support.v4.app.FragmentTransitionImpl r1, java.lang.Object r2, java.lang.Object r3, android.support.v4.util.ArrayMap<java.lang.String, android.view.View> r4, boolean r5, android.support.v4.app.BackStackRecord r6) {
            java.util.ArrayList<java.lang.String> r0 = r6.mSharedElementSourceNames
            if (r0 == 0) goto L2e
            java.util.ArrayList<java.lang.String> r0 = r6.mSharedElementSourceNames
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2e
            r0 = 0
            if (r5 == 0) goto L18
            java.util.ArrayList<java.lang.String> r5 = r6.mSharedElementTargetNames
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            goto L20
        L18:
            java.util.ArrayList<java.lang.String> r5 = r6.mSharedElementSourceNames
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
        L20:
            java.lang.Object r4 = r4.get(r5)
            android.view.View r4 = (android.view.View) r4
            r1.setEpicenter(r2, r4)
            if (r3 == 0) goto L2e
            r1.setEpicenter(r3, r4)
        L2e:
            return
    }

    static void setViewVisibility(java.util.ArrayList<android.view.View> r2, int r3) {
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = r2.size()
            int r0 = r0 + (-1)
        L9:
            if (r0 < 0) goto L17
            java.lang.Object r1 = r2.get(r0)
            android.view.View r1 = (android.view.View) r1
            r1.setVisibility(r3)
            int r0 = r0 + (-1)
            goto L9
        L17:
            return
    }

    static void startTransitions(android.support.v4.app.FragmentManagerImpl r7, java.util.ArrayList<android.support.v4.app.BackStackRecord> r8, java.util.ArrayList<java.lang.Boolean> r9, int r10, int r11, boolean r12) {
            int r0 = r7.mCurState
            r1 = 1
            if (r0 >= r1) goto L6
            return
        L6:
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = r10
        Lc:
            if (r1 >= r11) goto L2a
            java.lang.Object r2 = r8.get(r1)
            android.support.v4.app.BackStackRecord r2 = (android.support.v4.app.BackStackRecord) r2
            java.lang.Object r3 = r9.get(r1)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L24
            calculatePopFragments(r2, r0, r12)
            goto L27
        L24:
            calculateFragments(r2, r0, r12)
        L27:
            int r1 = r1 + 1
            goto Lc
        L2a:
            int r1 = r0.size()
            if (r1 == 0) goto L5c
            android.view.View r1 = new android.view.View
            android.support.v4.app.FragmentHostCallback r2 = r7.mHost
            android.content.Context r2 = r2.getContext()
            r1.<init>(r2)
            int r2 = r0.size()
            r3 = 0
        L40:
            if (r3 >= r2) goto L5c
            int r4 = r0.keyAt(r3)
            android.support.v4.util.ArrayMap r5 = calculateNameOverrides(r4, r8, r9, r10, r11)
            java.lang.Object r6 = r0.valueAt(r3)
            android.support.v4.app.FragmentTransition$FragmentContainerTransition r6 = (android.support.v4.app.FragmentTransition.FragmentContainerTransition) r6
            if (r12 == 0) goto L56
            configureTransitionsReordered(r7, r4, r6, r1, r5)
            goto L59
        L56:
            configureTransitionsOrdered(r7, r4, r6, r1, r5)
        L59:
            int r3 = r3 + 1
            goto L40
        L5c:
            return
    }

    static boolean supportsTransition() {
            android.support.v4.app.FragmentTransitionImpl r0 = android.support.v4.app.FragmentTransition.PLATFORM_IMPL
            if (r0 != 0) goto Lb
            android.support.v4.app.FragmentTransitionImpl r0 = android.support.v4.app.FragmentTransition.SUPPORT_IMPL
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
}
