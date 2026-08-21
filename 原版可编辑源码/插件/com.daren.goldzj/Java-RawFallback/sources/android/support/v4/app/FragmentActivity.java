package android.support.v4.app;

public class FragmentActivity extends android.support.v4.app.SupportActivity implements android.arch.lifecycle.ViewModelStoreOwner, android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback, android.support.v4.app.ActivityCompat.RequestPermissionsRequestCodeValidator {
    static final java.lang.String ALLOCATED_REQUEST_INDICIES_TAG = "android:support:request_indicies";
    static final java.lang.String FRAGMENTS_TAG = "android:support:fragments";
    static final int MAX_NUM_PENDING_FRAGMENT_ACTIVITY_RESULTS = 65534;
    static final int MSG_RESUME_PENDING = 2;
    static final java.lang.String NEXT_CANDIDATE_REQUEST_INDEX_TAG = "android:support:next_request_index";
    static final java.lang.String REQUEST_FRAGMENT_WHO_TAG = "android:support:request_fragment_who";
    private static final java.lang.String TAG = "FragmentActivity";
    boolean mCreated;
    final android.support.v4.app.FragmentController mFragments;
    final android.os.Handler mHandler;
    int mNextCandidateRequestIndex;
    android.support.v4.util.SparseArrayCompat<java.lang.String> mPendingFragmentActivityResults;
    boolean mRequestedPermissionsFromFragment;
    boolean mResumed;
    boolean mStartedActivityFromFragment;
    boolean mStartedIntentSenderFromFragment;
    boolean mStopped;
    private android.arch.lifecycle.ViewModelStore mViewModelStore;


    class HostCallbacks extends android.support.v4.app.FragmentHostCallback<android.support.v4.app.FragmentActivity> {
        final android.support.v4.app.FragmentActivity this$0;

        public HostCallbacks(android.support.v4.app.FragmentActivity r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1)
                return
        }

        @Override
        public void onAttachFragment(android.support.v4.app.Fragment r2) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.onAttachFragment(r2)
                return
        }

        @Override
        public void onDump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.dump(r2, r3, r4, r5)
                return
        }

        @Override
        @android.support.annotation.Nullable
        public android.view.View onFindViewById(int r2) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                android.view.View r2 = r0.findViewById(r2)
                return r2
        }

        @Override
        public android.support.v4.app.FragmentActivity onGetHost() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                return r0
        }

        @Override
        public android.support.v4.app.FragmentActivity onGetHost() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.onGetHost()
                return r0
        }

        @Override
        public android.view.LayoutInflater onGetLayoutInflater() {
                r2 = this;
                android.support.v4.app.FragmentActivity r0 = r2.this$0
                android.view.LayoutInflater r0 = r0.getLayoutInflater()
                android.support.v4.app.FragmentActivity r1 = r2.this$0
                android.view.LayoutInflater r0 = r0.cloneInContext(r1)
                return r0
        }

        @Override
        public int onGetWindowAnimations() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                android.view.Window r0 = r0.getWindow()
                if (r0 != 0) goto La
                r0 = 0
                goto L10
            La:
                android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
                int r0 = r0.windowAnimations
            L10:
                return r0
        }

        @Override
        public boolean onHasView() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                android.view.Window r0 = r0.getWindow()
                if (r0 == 0) goto L10
                android.view.View r0 = r0.peekDecorView()
                if (r0 == 0) goto L10
                r0 = 1
                goto L11
            L10:
                r0 = 0
            L11:
                return r0
        }

        @Override
        public boolean onHasWindowAnimations() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                android.view.Window r0 = r0.getWindow()
                if (r0 == 0) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        @Override
        public void onRequestPermissionsFromFragment(@android.support.annotation.NonNull android.support.v4.app.Fragment r2, @android.support.annotation.NonNull java.lang.String[] r3, int r4) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.requestPermissionsFromFragment(r2, r3, r4)
                return
        }

        @Override
        public boolean onShouldSaveFragmentState(android.support.v4.app.Fragment r1) {
                r0 = this;
                android.support.v4.app.FragmentActivity r1 = r0.this$0
                boolean r1 = r1.isFinishing()
                r1 = r1 ^ 1
                return r1
        }

        @Override
        public boolean onShouldShowRequestPermissionRationale(@android.support.annotation.NonNull java.lang.String r2) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                boolean r2 = android.support.v4.app.ActivityCompat.shouldShowRequestPermissionRationale(r0, r2)
                return r2
        }

        @Override
        public void onStartActivityFromFragment(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.startActivityFromFragment(r2, r3, r4)
                return
        }

        @Override
        public void onStartActivityFromFragment(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4, @android.support.annotation.Nullable android.os.Bundle r5) {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.startActivityFromFragment(r2, r3, r4, r5)
                return
        }

        @Override
        public void onStartIntentSenderFromFragment(android.support.v4.app.Fragment r11, android.content.IntentSender r12, int r13, @android.support.annotation.Nullable android.content.Intent r14, int r15, int r16, int r17, android.os.Bundle r18) throws android.content.IntentSender.SendIntentException {
                r10 = this;
                r0 = r10
                android.support.v4.app.FragmentActivity r1 = r0.this$0
                r2 = r11
                r3 = r12
                r4 = r13
                r5 = r14
                r6 = r15
                r7 = r16
                r8 = r17
                r9 = r18
                r1.startIntentSenderFromFragment(r2, r3, r4, r5, r6, r7, r8, r9)
                return
        }

        @Override
        public void onSupportInvalidateOptionsMenu() {
                r1 = this;
                android.support.v4.app.FragmentActivity r0 = r1.this$0
                r0.supportInvalidateOptionsMenu()
                return
        }
    }

    static final class NonConfigurationInstances {
        java.lang.Object custom;
        android.support.v4.app.FragmentManagerNonConfig fragments;
        android.arch.lifecycle.ViewModelStore viewModelStore;

        NonConfigurationInstances() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public FragmentActivity() {
            r1 = this;
            r1.<init>()
            android.support.v4.app.FragmentActivity$1 r0 = new android.support.v4.app.FragmentActivity$1
            r0.<init>(r1)
            r1.mHandler = r0
            android.support.v4.app.FragmentActivity$HostCallbacks r0 = new android.support.v4.app.FragmentActivity$HostCallbacks
            r0.<init>(r1)
            android.support.v4.app.FragmentController r0 = android.support.v4.app.FragmentController.createController(r0)
            r1.mFragments = r0
            r0 = 1
            r1.mStopped = r0
            return
    }

    private int allocateRequestIndex(android.support.v4.app.Fragment r4) {
            r3 = this;
            android.support.v4.util.SparseArrayCompat<java.lang.String> r0 = r3.mPendingFragmentActivityResults
            int r0 = r0.size()
            r1 = 65534(0xfffe, float:9.1833E-41)
            if (r0 >= r1) goto L2e
        Lb:
            android.support.v4.util.SparseArrayCompat<java.lang.String> r0 = r3.mPendingFragmentActivityResults
            int r2 = r3.mNextCandidateRequestIndex
            int r0 = r0.indexOfKey(r2)
            if (r0 < 0) goto L1d
            int r0 = r3.mNextCandidateRequestIndex
            int r0 = r0 + 1
            int r0 = r0 % r1
            r3.mNextCandidateRequestIndex = r0
            goto Lb
        L1d:
            int r0 = r3.mNextCandidateRequestIndex
            android.support.v4.util.SparseArrayCompat<java.lang.String> r2 = r3.mPendingFragmentActivityResults
            java.lang.String r4 = r4.mWho
            r2.put(r0, r4)
            int r4 = r3.mNextCandidateRequestIndex
            int r4 = r4 + 1
            int r4 = r4 % r1
            r3.mNextCandidateRequestIndex = r4
            return r0
        L2e:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Too many pending Fragment activity results."
            r4.<init>(r0)
            throw r4
    }

    static void checkForValidRequestCode(int r1) {
            r0 = -65536(0xffffffffffff0000, float:NaN)
            r1 = r1 & r0
            if (r1 != 0) goto L6
            return
        L6:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Can only use lower 16 bits for requestCode"
            r1.<init>(r0)
            throw r1
    }

    private void markFragmentsCreated() {
            r2 = this;
        L0:
            android.support.v4.app.FragmentManager r0 = r2.getSupportFragmentManager()
            android.arch.lifecycle.Lifecycle$State r1 = android.arch.lifecycle.Lifecycle.State.CREATED
            boolean r0 = markState(r0, r1)
            if (r0 != 0) goto L0
            return
    }

    private static boolean markState(android.support.v4.app.FragmentManager r4, android.arch.lifecycle.Lifecycle.State r5) {
            java.util.List r4 = r4.getFragments()
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r4.next()
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            if (r1 != 0) goto L18
            goto L9
        L18:
            android.arch.lifecycle.Lifecycle r2 = r1.getLifecycle()
            android.arch.lifecycle.Lifecycle$State r2 = r2.getCurrentState()
            android.arch.lifecycle.Lifecycle$State r3 = android.arch.lifecycle.Lifecycle.State.STARTED
            boolean r2 = r2.isAtLeast(r3)
            if (r2 == 0) goto L2e
            android.arch.lifecycle.LifecycleRegistry r0 = r1.mLifecycleRegistry
            r0.markState(r5)
            r0 = 1
        L2e:
            android.support.v4.app.FragmentManager r1 = r1.peekChildFragmentManager()
            if (r1 == 0) goto L9
            boolean r1 = markState(r1, r5)
            r0 = r0 | r1
            goto L9
        L3a:
            return r0
    }

    final android.view.View dispatchFragmentsOnCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            android.view.View r2 = r0.onCreateView(r2, r3, r4, r5)
            return r2
    }

    @Override
    public void dump(java.lang.String r3, java.io.FileDescriptor r4, java.io.PrintWriter r5, java.lang.String[] r6) {
            r2 = this;
            super.dump(r3, r4, r5, r6)
            r5.print(r3)
            java.lang.String r0 = "Local FragmentActivity "
            r5.print(r0)
            int r0 = java.lang.System.identityHashCode(r2)
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r5.print(r0)
            java.lang.String r0 = " State:"
            r5.println(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = "  "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.print(r0)
            java.lang.String r1 = "mCreated="
            r5.print(r1)
            boolean r1 = r2.mCreated
            r5.print(r1)
            java.lang.String r1 = " mResumed="
            r5.print(r1)
            boolean r1 = r2.mResumed
            r5.print(r1)
            java.lang.String r1 = " mStopped="
            r5.print(r1)
            boolean r1 = r2.mStopped
            r5.print(r1)
            android.app.Application r1 = r2.getApplication()
            if (r1 == 0) goto L5a
            android.support.v4.app.LoaderManager r1 = android.support.v4.app.LoaderManager.getInstance(r2)
            r1.dump(r0, r4, r5, r6)
        L5a:
            android.support.v4.app.FragmentController r0 = r2.mFragments
            android.support.v4.app.FragmentManager r0 = r0.getSupportFragmentManager()
            r0.dump(r3, r4, r5, r6)
            return
    }

    public java.lang.Object getLastCustomNonConfigurationInstance() {
            r1 = this;
            java.lang.Object r0 = r1.getLastNonConfigurationInstance()
            android.support.v4.app.FragmentActivity$NonConfigurationInstances r0 = (android.support.v4.app.FragmentActivity.NonConfigurationInstances) r0
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.custom
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public android.arch.lifecycle.Lifecycle getLifecycle() {
            r1 = this;
            android.arch.lifecycle.Lifecycle r0 = super.getLifecycle()
            return r0
    }

    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            android.support.v4.app.FragmentManager r0 = r0.getSupportFragmentManager()
            return r0
    }

    @java.lang.Deprecated
    public android.support.v4.app.LoaderManager getSupportLoaderManager() {
            r1 = this;
            android.support.v4.app.LoaderManager r0 = android.support.v4.app.LoaderManager.getInstance(r1)
            return r0
    }

    @Override
    @android.support.annotation.NonNull
    public android.arch.lifecycle.ViewModelStore getViewModelStore() {
            r2 = this;
            android.app.Application r0 = r2.getApplication()
            if (r0 == 0) goto L24
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            if (r0 != 0) goto L21
            java.lang.Object r0 = r2.getLastNonConfigurationInstance()
            android.support.v4.app.FragmentActivity$NonConfigurationInstances r0 = (android.support.v4.app.FragmentActivity.NonConfigurationInstances) r0
            if (r0 == 0) goto L16
            android.arch.lifecycle.ViewModelStore r0 = r0.viewModelStore
            r2.mViewModelStore = r0
        L16:
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            if (r0 != 0) goto L21
            android.arch.lifecycle.ViewModelStore r0 = new android.arch.lifecycle.ViewModelStore
            r0.<init>()
            r2.mViewModelStore = r0
        L21:
            android.arch.lifecycle.ViewModelStore r0 = r2.mViewModelStore
            return r0
        L24:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Your activity is not yet attached to the Application instance. You can't request ViewModel before onCreate call."
            r0.<init>(r1)
            throw r0
    }

    @Override
    protected void onActivityResult(int r4, int r5, @android.support.annotation.Nullable android.content.Intent r6) {
            r3 = this;
            android.support.v4.app.FragmentController r0 = r3.mFragments
            r0.noteStateNotSaved()
            int r0 = r4 >> 16
            if (r0 == 0) goto L47
            int r0 = r0 + (-1)
            android.support.v4.util.SparseArrayCompat<java.lang.String> r1 = r3.mPendingFragmentActivityResults
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            android.support.v4.util.SparseArrayCompat<java.lang.String> r2 = r3.mPendingFragmentActivityResults
            r2.remove(r0)
            java.lang.String r0 = "FragmentActivity"
            if (r1 != 0) goto L22
            java.lang.String r4 = "Activity result delivered for unknown Fragment."
            android.util.Log.w(r0, r4)
            return
        L22:
            android.support.v4.app.FragmentController r2 = r3.mFragments
            android.support.v4.app.Fragment r2 = r2.findFragmentByWho(r1)
            if (r2 != 0) goto L3f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Activity result no fragment exists for who: "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            android.util.Log.w(r0, r4)
            goto L46
        L3f:
            r0 = 65535(0xffff, float:9.1834E-41)
            r4 = r4 & r0
            r2.onActivityResult(r4, r5, r6)
        L46:
            return
        L47:
            android.support.v4.app.ActivityCompat$PermissionCompatDelegate r0 = android.support.v4.app.ActivityCompat.getPermissionCompatDelegate()
            if (r0 == 0) goto L54
            boolean r0 = r0.onActivityResult(r3, r4, r5, r6)
            if (r0 == 0) goto L54
            return
        L54:
            super.onActivityResult(r4, r5, r6)
            return
    }

    public void onAttachFragment(android.support.v4.app.Fragment r1) {
            r0 = this;
            return
    }

    @Override
    public void onBackPressed() {
            r4 = this;
            android.support.v4.app.FragmentController r0 = r4.mFragments
            android.support.v4.app.FragmentManager r0 = r0.getSupportFragmentManager()
            boolean r1 = r0.isStateSaved()
            if (r1 == 0) goto L13
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 25
            if (r2 > r3) goto L13
            return
        L13:
            if (r1 != 0) goto L1b
            boolean r0 = r0.popBackStackImmediate()
            if (r0 != 0) goto L1e
        L1b:
            super.onBackPressed()
        L1e:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.noteStateNotSaved()
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchConfigurationChanged(r2)
            return
    }

    @Override
    protected void onCreate(@android.support.annotation.Nullable android.os.Bundle r7) {
            r6 = this;
            android.support.v4.app.FragmentController r0 = r6.mFragments
            r1 = 0
            r0.attachHost(r1)
            super.onCreate(r7)
            java.lang.Object r0 = r6.getLastNonConfigurationInstance()
            android.support.v4.app.FragmentActivity$NonConfigurationInstances r0 = (android.support.v4.app.FragmentActivity.NonConfigurationInstances) r0
            if (r0 == 0) goto L1d
            android.arch.lifecycle.ViewModelStore r2 = r0.viewModelStore
            if (r2 == 0) goto L1d
            android.arch.lifecycle.ViewModelStore r2 = r6.mViewModelStore
            if (r2 != 0) goto L1d
            android.arch.lifecycle.ViewModelStore r2 = r0.viewModelStore
            r6.mViewModelStore = r2
        L1d:
            r2 = 0
            if (r7 == 0) goto L71
            java.lang.String r3 = "android:support:fragments"
            android.os.Parcelable r3 = r7.getParcelable(r3)
            android.support.v4.app.FragmentController r4 = r6.mFragments
            if (r0 == 0) goto L2c
            android.support.v4.app.FragmentManagerNonConfig r1 = r0.fragments
        L2c:
            r4.restoreAllState(r3, r1)
            java.lang.String r0 = "android:support:next_request_index"
            boolean r1 = r7.containsKey(r0)
            if (r1 == 0) goto L71
            int r0 = r7.getInt(r0)
            r6.mNextCandidateRequestIndex = r0
            java.lang.String r0 = "android:support:request_indicies"
            int[] r0 = r7.getIntArray(r0)
            java.lang.String r1 = "android:support:request_fragment_who"
            java.lang.String[] r7 = r7.getStringArray(r1)
            if (r0 == 0) goto L6a
            if (r7 == 0) goto L6a
            int r1 = r0.length
            int r3 = r7.length
            if (r1 == r3) goto L52
            goto L6a
        L52:
            android.support.v4.util.SparseArrayCompat r1 = new android.support.v4.util.SparseArrayCompat
            int r3 = r0.length
            r1.<init>(r3)
            r6.mPendingFragmentActivityResults = r1
            r1 = 0
        L5b:
            int r3 = r0.length
            if (r1 >= r3) goto L71
            android.support.v4.util.SparseArrayCompat<java.lang.String> r3 = r6.mPendingFragmentActivityResults
            r4 = r0[r1]
            r5 = r7[r1]
            r3.put(r4, r5)
            int r1 = r1 + 1
            goto L5b
        L6a:
            java.lang.String r7 = "FragmentActivity"
            java.lang.String r0 = "Invalid requestCode mapping in savedInstanceState."
            android.util.Log.w(r7, r0)
        L71:
            android.support.v4.util.SparseArrayCompat<java.lang.String> r7 = r6.mPendingFragmentActivityResults
            if (r7 != 0) goto L7e
            android.support.v4.util.SparseArrayCompat r7 = new android.support.v4.util.SparseArrayCompat
            r7.<init>()
            r6.mPendingFragmentActivityResults = r7
            r6.mNextCandidateRequestIndex = r2
        L7e:
            android.support.v4.app.FragmentController r7 = r6.mFragments
            r7.dispatchCreate()
            return
    }

    @Override
    public boolean onCreatePanelMenu(int r3, android.view.Menu r4) {
            r2 = this;
            if (r3 != 0) goto L12
            boolean r3 = super.onCreatePanelMenu(r3, r4)
            android.support.v4.app.FragmentController r0 = r2.mFragments
            android.view.MenuInflater r1 = r2.getMenuInflater()
            boolean r4 = r0.dispatchCreateOptionsMenu(r4, r1)
            r3 = r3 | r4
            return r3
        L12:
            boolean r3 = super.onCreatePanelMenu(r3, r4)
            return r3
    }

    @Override
    public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            android.view.View r0 = r1.dispatchFragmentsOnCreateView(r2, r3, r4, r5)
            if (r0 != 0) goto Lb
            android.view.View r2 = super.onCreateView(r2, r3, r4, r5)
            return r2
        Lb:
            return r0
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            r0 = 0
            android.view.View r0 = r1.dispatchFragmentsOnCreateView(r0, r2, r3, r4)
            if (r0 != 0) goto Lc
            android.view.View r2 = super.onCreateView(r2, r3, r4)
            return r2
        Lc:
            return r0
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.arch.lifecycle.ViewModelStore r0 = r1.mViewModelStore
            if (r0 == 0) goto L12
            boolean r0 = r1.isChangingConfigurations()
            if (r0 != 0) goto L12
            android.arch.lifecycle.ViewModelStore r0 = r1.mViewModelStore
            r0.clear()
        L12:
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchDestroy()
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            super.onLowMemory()
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchLowMemory()
            return
    }

    @Override
    public boolean onMenuItemSelected(int r2, android.view.MenuItem r3) {
            r1 = this;
            boolean r0 = super.onMenuItemSelected(r2, r3)
            if (r0 == 0) goto L8
            r2 = 1
            return r2
        L8:
            if (r2 == 0) goto L16
            r0 = 6
            if (r2 == r0) goto Lf
            r2 = 0
            return r2
        Lf:
            android.support.v4.app.FragmentController r2 = r1.mFragments
            boolean r2 = r2.dispatchContextItemSelected(r3)
            return r2
        L16:
            android.support.v4.app.FragmentController r2 = r1.mFragments
            boolean r2 = r2.dispatchOptionsItemSelected(r3)
            return r2
    }

    @Override
    @android.support.annotation.CallSuper
    public void onMultiWindowModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchMultiWindowModeChanged(r2)
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            android.support.v4.app.FragmentController r1 = r0.mFragments
            r1.noteStateNotSaved()
            return
    }

    @Override
    public void onPanelClosed(int r2, android.view.Menu r3) {
            r1 = this;
            if (r2 == 0) goto L3
            goto L8
        L3:
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchOptionsMenuClosed(r3)
        L8:
            super.onPanelClosed(r2, r3)
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            super.onPause()
            r0 = 0
            r2.mResumed = r0
            android.os.Handler r0 = r2.mHandler
            r1 = 2
            boolean r0 = r0.hasMessages(r1)
            if (r0 == 0) goto L17
            android.os.Handler r0 = r2.mHandler
            r0.removeMessages(r1)
            r2.onResumeFragments()
        L17:
            android.support.v4.app.FragmentController r0 = r2.mFragments
            r0.dispatchPause()
            return
    }

    @Override
    @android.support.annotation.CallSuper
    public void onPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchPictureInPictureModeChanged(r2)
            return
    }

    @Override
    protected void onPostResume() {
            r2 = this;
            super.onPostResume()
            android.os.Handler r0 = r2.mHandler
            r1 = 2
            r0.removeMessages(r1)
            r2.onResumeFragments()
            android.support.v4.app.FragmentController r0 = r2.mFragments
            r0.execPendingActions()
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean onPrepareOptionsPanel(android.view.View r2, android.view.Menu r3) {
            r1 = this;
            r0 = 0
            boolean r2 = super.onPreparePanel(r0, r2, r3)
            return r2
    }

    @Override
    public boolean onPreparePanel(int r1, android.view.View r2, android.view.Menu r3) {
            r0 = this;
            if (r1 != 0) goto L10
            if (r3 == 0) goto L10
            boolean r1 = r0.onPrepareOptionsPanel(r2, r3)
            android.support.v4.app.FragmentController r2 = r0.mFragments
            boolean r2 = r2.dispatchPrepareOptionsMenu(r3)
            r1 = r1 | r2
            return r1
        L10:
            boolean r1 = super.onPreparePanel(r1, r2, r3)
            return r1
    }

    @Override
    public void onRequestPermissionsResult(int r5, @android.support.annotation.NonNull java.lang.String[] r6, @android.support.annotation.NonNull int[] r7) {
            r4 = this;
            android.support.v4.app.FragmentController r0 = r4.mFragments
            r0.noteStateNotSaved()
            int r0 = r5 >> 16
            r1 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r1
            if (r0 == 0) goto L47
            int r0 = r0 + (-1)
            android.support.v4.util.SparseArrayCompat<java.lang.String> r2 = r4.mPendingFragmentActivityResults
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            android.support.v4.util.SparseArrayCompat<java.lang.String> r3 = r4.mPendingFragmentActivityResults
            r3.remove(r0)
            java.lang.String r0 = "FragmentActivity"
            if (r2 != 0) goto L26
            java.lang.String r5 = "Activity result delivered for unknown Fragment."
            android.util.Log.w(r0, r5)
            return
        L26:
            android.support.v4.app.FragmentController r3 = r4.mFragments
            android.support.v4.app.Fragment r3 = r3.findFragmentByWho(r2)
            if (r3 != 0) goto L43
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Activity result no fragment exists for who: "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            android.util.Log.w(r0, r5)
            goto L47
        L43:
            r5 = r5 & r1
            r3.onRequestPermissionsResult(r5, r6, r7)
        L47:
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            android.os.Handler r0 = r2.mHandler
            r1 = 2
            r0.sendEmptyMessage(r1)
            r0 = 1
            r2.mResumed = r0
            android.support.v4.app.FragmentController r0 = r2.mFragments
            r0.execPendingActions()
            return
    }

    protected void onResumeFragments() {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchResume()
            return
    }

    public java.lang.Object onRetainCustomNonConfigurationInstance() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.Object onRetainNonConfigurationInstance() {
            r3 = this;
            java.lang.Object r0 = r3.onRetainCustomNonConfigurationInstance()
            android.support.v4.app.FragmentController r1 = r3.mFragments
            android.support.v4.app.FragmentManagerNonConfig r1 = r1.retainNestedNonConfig()
            if (r1 != 0) goto L14
            android.arch.lifecycle.ViewModelStore r2 = r3.mViewModelStore
            if (r2 != 0) goto L14
            if (r0 != 0) goto L14
            r0 = 0
            return r0
        L14:
            android.support.v4.app.FragmentActivity$NonConfigurationInstances r2 = new android.support.v4.app.FragmentActivity$NonConfigurationInstances
            r2.<init>()
            r2.custom = r0
            android.arch.lifecycle.ViewModelStore r0 = r3.mViewModelStore
            r2.viewModelStore = r0
            r2.fragments = r1
            return r2
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r5) {
            r4 = this;
            super.onSaveInstanceState(r5)
            r4.markFragmentsCreated()
            android.support.v4.app.FragmentController r0 = r4.mFragments
            android.os.Parcelable r0 = r0.saveAllState()
            if (r0 == 0) goto L13
            java.lang.String r1 = "android:support:fragments"
            r5.putParcelable(r1, r0)
        L13:
            android.support.v4.util.SparseArrayCompat<java.lang.String> r0 = r4.mPendingFragmentActivityResults
            int r0 = r0.size()
            if (r0 <= 0) goto L5a
            int r0 = r4.mNextCandidateRequestIndex
            java.lang.String r1 = "android:support:next_request_index"
            r5.putInt(r1, r0)
            android.support.v4.util.SparseArrayCompat<java.lang.String> r0 = r4.mPendingFragmentActivityResults
            int r0 = r0.size()
            int[] r0 = new int[r0]
            android.support.v4.util.SparseArrayCompat<java.lang.String> r1 = r4.mPendingFragmentActivityResults
            int r1 = r1.size()
            java.lang.String[] r1 = new java.lang.String[r1]
            r2 = 0
        L33:
            android.support.v4.util.SparseArrayCompat<java.lang.String> r3 = r4.mPendingFragmentActivityResults
            int r3 = r3.size()
            if (r2 >= r3) goto L50
            android.support.v4.util.SparseArrayCompat<java.lang.String> r3 = r4.mPendingFragmentActivityResults
            int r3 = r3.keyAt(r2)
            r0[r2] = r3
            android.support.v4.util.SparseArrayCompat<java.lang.String> r3 = r4.mPendingFragmentActivityResults
            java.lang.Object r3 = r3.valueAt(r2)
            java.lang.String r3 = (java.lang.String) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L33
        L50:
            java.lang.String r2 = "android:support:request_indicies"
            r5.putIntArray(r2, r0)
            java.lang.String r0 = "android:support:request_fragment_who"
            r5.putStringArray(r0, r1)
        L5a:
            return
    }

    @Override
    protected void onStart() {
            r1 = this;
            super.onStart()
            r0 = 0
            r1.mStopped = r0
            boolean r0 = r1.mCreated
            if (r0 != 0) goto L12
            r0 = 1
            r1.mCreated = r0
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchActivityCreated()
        L12:
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.noteStateNotSaved()
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.execPendingActions()
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchStart()
            return
    }

    @Override
    public void onStateNotSaved() {
            r1 = this;
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.noteStateNotSaved()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            super.onStop()
            r0 = 1
            r1.mStopped = r0
            r1.markFragmentsCreated()
            android.support.v4.app.FragmentController r0 = r1.mFragments
            r0.dispatchStop()
            return
    }

    void requestPermissionsFromFragment(android.support.v4.app.Fragment r3, java.lang.String[] r4, int r5) {
            r2 = this;
            r0 = -1
            if (r5 != r0) goto L7
            android.support.v4.app.ActivityCompat.requestPermissions(r2, r4, r5)
            return
        L7:
            checkForValidRequestCode(r5)
            r0 = 0
            r1 = 1
            r2.mRequestedPermissionsFromFragment = r1     // Catch: java.lang.Throwable -> L20
            int r3 = r2.allocateRequestIndex(r3)     // Catch: java.lang.Throwable -> L20
            int r3 = r3 + r1
            int r3 = r3 << 16
            r1 = 65535(0xffff, float:9.1834E-41)
            r5 = r5 & r1
            int r3 = r3 + r5
            android.support.v4.app.ActivityCompat.requestPermissions(r2, r4, r3)     // Catch: java.lang.Throwable -> L20
            r2.mRequestedPermissionsFromFragment = r0
            return
        L20:
            r3 = move-exception
            r2.mRequestedPermissionsFromFragment = r0
            throw r3
    }

    public void setEnterSharedElementCallback(android.support.v4.app.SharedElementCallback r1) {
            r0 = this;
            android.support.v4.app.ActivityCompat.setEnterSharedElementCallback(r0, r1)
            return
    }

    public void setExitSharedElementCallback(android.support.v4.app.SharedElementCallback r1) {
            r0 = this;
            android.support.v4.app.ActivityCompat.setExitSharedElementCallback(r0, r1)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            boolean r0 = r1.mStartedActivityFromFragment
            if (r0 != 0) goto La
            r0 = -1
            if (r3 == r0) goto La
            checkForValidRequestCode(r3)
        La:
            super.startActivityForResult(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3, @android.support.annotation.Nullable android.os.Bundle r4) {
            r1 = this;
            boolean r0 = r1.mStartedActivityFromFragment
            if (r0 != 0) goto La
            r0 = -1
            if (r3 == r0) goto La
            checkForValidRequestCode(r3)
        La:
            super.startActivityForResult(r2, r3, r4)
            return
    }

    public void startActivityFromFragment(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4) {
            r1 = this;
            r0 = 0
            r1.startActivityFromFragment(r2, r3, r4, r0)
            return
    }

    public void startActivityFromFragment(android.support.v4.app.Fragment r4, android.content.Intent r5, int r6, @android.support.annotation.Nullable android.os.Bundle r7) {
            r3 = this;
            r0 = 1
            r3.mStartedActivityFromFragment = r0
            r1 = -1
            r2 = 0
            if (r6 != r1) goto Ld
            android.support.v4.app.ActivityCompat.startActivityForResult(r3, r5, r1, r7)     // Catch: java.lang.Throwable -> L22
            r3.mStartedActivityFromFragment = r2
            return
        Ld:
            checkForValidRequestCode(r6)     // Catch: java.lang.Throwable -> L22
            int r4 = r3.allocateRequestIndex(r4)     // Catch: java.lang.Throwable -> L22
            int r4 = r4 + r0
            int r4 = r4 << 16
            r0 = 65535(0xffff, float:9.1834E-41)
            r6 = r6 & r0
            int r4 = r4 + r6
            android.support.v4.app.ActivityCompat.startActivityForResult(r3, r5, r4, r7)     // Catch: java.lang.Throwable -> L22
            r3.mStartedActivityFromFragment = r2
            return
        L22:
            r4 = move-exception
            r3.mStartedActivityFromFragment = r2
            throw r4
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r2, int r3, @android.support.annotation.Nullable android.content.Intent r4, int r5, int r6, int r7) throws android.content.IntentSender.SendIntentException {
            r1 = this;
            boolean r0 = r1.mStartedIntentSenderFromFragment
            if (r0 != 0) goto La
            r0 = -1
            if (r3 == r0) goto La
            checkForValidRequestCode(r3)
        La:
            super.startIntentSenderForResult(r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r2, int r3, @android.support.annotation.Nullable android.content.Intent r4, int r5, int r6, int r7, android.os.Bundle r8) throws android.content.IntentSender.SendIntentException {
            r1 = this;
            boolean r0 = r1.mStartedIntentSenderFromFragment
            if (r0 != 0) goto La
            r0 = -1
            if (r3 == r0) goto La
            checkForValidRequestCode(r3)
        La:
            super.startIntentSenderForResult(r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public void startIntentSenderFromFragment(android.support.v4.app.Fragment r12, android.content.IntentSender r13, int r14, @android.support.annotation.Nullable android.content.Intent r15, int r16, int r17, int r18, android.os.Bundle r19) throws android.content.IntentSender.SendIntentException {
            r11 = this;
            r9 = r11
            r0 = r14
            r1 = 1
            r9.mStartedIntentSenderFromFragment = r1
            r2 = -1
            r10 = 0
            if (r0 != r2) goto L1b
            r1 = r11
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            android.support.v4.app.ActivityCompat.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L3c
            r9.mStartedIntentSenderFromFragment = r10
            return
        L1b:
            checkForValidRequestCode(r14)     // Catch: java.lang.Throwable -> L3c
            int r2 = r11.allocateRequestIndex(r12)     // Catch: java.lang.Throwable -> L3c
            int r2 = r2 + r1
            int r1 = r2 << 16
            r2 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r2
            int r3 = r1 + r0
            r1 = r11
            r2 = r13
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            android.support.v4.app.ActivityCompat.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L3c
            r9.mStartedIntentSenderFromFragment = r10
            return
        L3c:
            r0 = move-exception
            r9.mStartedIntentSenderFromFragment = r10
            throw r0
    }

    public void supportFinishAfterTransition() {
            r0 = this;
            android.support.v4.app.ActivityCompat.finishAfterTransition(r0)
            return
    }

    @java.lang.Deprecated
    public void supportInvalidateOptionsMenu() {
            r0 = this;
            r0.invalidateOptionsMenu()
            return
    }

    public void supportPostponeEnterTransition() {
            r0 = this;
            android.support.v4.app.ActivityCompat.postponeEnterTransition(r0)
            return
    }

    public void supportStartPostponedEnterTransition() {
            r0 = this;
            android.support.v4.app.ActivityCompat.startPostponedEnterTransition(r0)
            return
    }

    @Override
    public final void validateRequestPermissionsRequestCode(int r2) {
            r1 = this;
            boolean r0 = r1.mRequestedPermissionsFromFragment
            if (r0 != 0) goto La
            r0 = -1
            if (r2 == r0) goto La
            checkForValidRequestCode(r2)
        La:
            return
    }
}
