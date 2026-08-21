package android.support.v4.app;

import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.ViewModelStore;
import android.arch.lifecycle.ViewModelStoreOwner;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Parcelable;
import android.support.annotation.CallSuper;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.app.ActivityCompat;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.util.SparseArrayCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.Iterator;

public class FragmentActivity extends SupportActivity implements ViewModelStoreOwner, ActivityCompat.OnRequestPermissionsResultCallback, ActivityCompat.RequestPermissionsRequestCodeValidator {
    static final String ALLOCATED_REQUEST_INDICIES_TAG = "android:support:request_indicies";
    static final String FRAGMENTS_TAG = "android:support:fragments";
    static final int MAX_NUM_PENDING_FRAGMENT_ACTIVITY_RESULTS = 65534;
    static final int MSG_RESUME_PENDING = 2;
    static final String NEXT_CANDIDATE_REQUEST_INDEX_TAG = "android:support:next_request_index";
    static final String REQUEST_FRAGMENT_WHO_TAG = "android:support:request_fragment_who";
    private static final String TAG = "FragmentActivity";
    boolean mCreated;
    final FragmentController mFragments;
    final Handler mHandler;
    int mNextCandidateRequestIndex;
    SparseArrayCompat<String> mPendingFragmentActivityResults;
    boolean mRequestedPermissionsFromFragment;
    boolean mResumed;
    boolean mStartedActivityFromFragment;
    boolean mStartedIntentSenderFromFragment;
    boolean mStopped;
    private ViewModelStore mViewModelStore;

    class HostCallbacks extends FragmentHostCallback<FragmentActivity> {
        final FragmentActivity this$0;

        @Override
        public FragmentActivity onGetHost() {
            return onGetHost();
        }

        public HostCallbacks(FragmentActivity r1) {
            this.this$0 = r1;
            super(r1);
        }

        @Override
        public void onDump(String r2, FileDescriptor r3, PrintWriter r4, String[] r5) {
            this.this$0.dump(r2, r3, r4, r5);
        }

        @Override
        public boolean onShouldSaveFragmentState(Fragment r1) {
            return !this.this$0.isFinishing();
        }

        @Override
        public LayoutInflater onGetLayoutInflater() {
            return this.this$0.getLayoutInflater().cloneInContext(this.this$0);
        }

        @Override
        public FragmentActivity onGetHost() {
            return this.this$0;
        }

        @Override
        public void onSupportInvalidateOptionsMenu() {
            this.this$0.supportInvalidateOptionsMenu();
        }

        @Override
        public void onStartActivityFromFragment(Fragment r2, Intent r3, int r4) {
            this.this$0.startActivityFromFragment(r2, r3, r4);
        }

        @Override
        public void onStartActivityFromFragment(Fragment r2, Intent r3, int r4, @Nullable Bundle r5) {
            this.this$0.startActivityFromFragment(r2, r3, r4, r5);
        }

        @Override
        public void onStartIntentSenderFromFragment(Fragment r11, IntentSender r12, int r13, @Nullable Intent r14, int r15, int r16, int r17, Bundle r18) throws IntentSender.SendIntentException {
            this.this$0.startIntentSenderFromFragment(r11, r12, r13, r14, r15, r16, r17, r18);
        }

        @Override
        public void onRequestPermissionsFromFragment(@NonNull Fragment r2, @NonNull String[] r3, int r4) {
            this.this$0.requestPermissionsFromFragment(r2, r3, r4);
        }

        @Override
        public boolean onShouldShowRequestPermissionRationale(@NonNull String r2) {
            return ActivityCompat.shouldShowRequestPermissionRationale(this.this$0, r2);
        }

        @Override
        public boolean onHasWindowAnimations() {
            if (this.this$0.getWindow() == null) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public int onGetWindowAnimations() {
            Window r0 = this.this$0.getWindow();
            if (r0 != null) goto L6;
            return 0;
        L6:
            return r0.getAttributes().windowAnimations;
        }

        @Override
        public void onAttachFragment(Fragment r2) {
            this.this$0.onAttachFragment(r2);
        }

        @Override
        @Nullable
        public View onFindViewById(int r2) {
            return this.this$0.findViewById(r2);
        }

        @Override
        public boolean onHasView() {
            Window r0 = this.this$0.getWindow();
            if (r0 != null) goto L5;
        L7:
            return false;
        L5:
            if (r0.peekDecorView() == null) goto L7;
            return true;
        }
    }

    static final class NonConfigurationInstances {
        Object custom;
        FragmentManagerNonConfig fragments;
        ViewModelStore viewModelStore;

        NonConfigurationInstances() {
        }
    }

    public void onAttachFragment(Fragment r1) {
    }

    public Object onRetainCustomNonConfigurationInstance() {
        return null;
    }

    public FragmentActivity() {
        this.mHandler = new 1(this);
        this.mFragments = FragmentController.createController(new HostCallbacks(this));
        this.mStopped = true;
    }

    @Override
    protected void onActivityResult(int r4, int r5, @Nullable Intent r6) {
        this.mFragments.noteStateNotSaved();
        int r0 = r4 >> 16;
        if (r0 == 0) goto L13;
        int r02 = r0 - 1;
        String r1 = this.mPendingFragmentActivityResults.get(r02);
        this.mPendingFragmentActivityResults.remove(r02);
        if (r1 != null) goto L8;
        Log.w(TAG, "Activity result delivered for unknown Fragment.");
        return;
    L8:
        Fragment r2 = this.mFragments.findFragmentByWho(r1);
        if (r2 != null) goto L11;
        Log.w(TAG, "Activity result no fragment exists for who: " + r1);
        return;
    L11:
        r2.onActivityResult(r4 & SupportMenu.USER_MASK, r5, r6);
        return;
    L13:
        ActivityCompat.PermissionCompatDelegate r03 = ActivityCompat.getPermissionCompatDelegate();
        if (r03 != null) goto L16;
    L18:
        super.onActivityResult(r4, r5, r6);
        return;
    L16:
        if (r03.onActivityResult(this, r4, r5, r6) == false) goto L18;
    }

    @Override
    public void onBackPressed() {
        FragmentManager r0 = this.mFragments.getSupportFragmentManager();
        boolean r1 = r0.isStateSaved();
        if (r1 == true) goto L5;
    L7:
        if (r1 == false) goto L9;
    L10:
        super.onBackPressed();
        return;
    L9:
        if (r0.popBackStackImmediate() == false) goto L10;
        return;
    L5:
        if (Build.VERSION.SDK_INT > 25) goto L7;
    }

    public void supportFinishAfterTransition() {
        ActivityCompat.finishAfterTransition(this);
    }

    public void setEnterSharedElementCallback(SharedElementCallback r1) {
        ActivityCompat.setEnterSharedElementCallback(this, r1);
    }

    public void setExitSharedElementCallback(SharedElementCallback r1) {
        ActivityCompat.setExitSharedElementCallback(this, r1);
    }

    public void supportPostponeEnterTransition() {
        ActivityCompat.postponeEnterTransition(this);
    }

    public void supportStartPostponedEnterTransition() {
        ActivityCompat.startPostponedEnterTransition(this);
    }

    @Override
    @CallSuper
    public void onMultiWindowModeChanged(boolean r2) {
        this.mFragments.dispatchMultiWindowModeChanged(r2);
    }

    @Override
    @CallSuper
    public void onPictureInPictureModeChanged(boolean r2) {
        this.mFragments.dispatchPictureInPictureModeChanged(r2);
    }

    @Override
    public void onConfigurationChanged(Configuration r2) {
        super.onConfigurationChanged(r2);
        this.mFragments.noteStateNotSaved();
        this.mFragments.dispatchConfigurationChanged(r2);
    }

    @Override
    @NonNull
    public ViewModelStore getViewModelStore() {
        if (getApplication() == null) goto L15;
        if (this.mViewModelStore != null) goto L13;
        NonConfigurationInstances r0 = (NonConfigurationInstances) getLastNonConfigurationInstance();
        if (r0 == null) goto L10;
        this.mViewModelStore = r0.viewModelStore;
    L10:
        if (this.mViewModelStore != null) goto L13;
        this.mViewModelStore = new ViewModelStore();
    L13:
        return this.mViewModelStore;
    L15:
        throw new IllegalStateException("Your activity is not yet attached to the Application instance. You can't request ViewModel before onCreate call.");
    }

    @Override
    public Lifecycle getLifecycle() {
        return super.getLifecycle();
    }

    @Override
    protected void onCreate(@Nullable Bundle r7) {
        FragmentManagerNonConfig r1 = null;
        this.mFragments.attachHost(null);
        super.onCreate(r7);
        NonConfigurationInstances r0 = (NonConfigurationInstances) getLastNonConfigurationInstance();
        if (r0 == null) goto L10;
        if (r0.viewModelStore == null) goto L10;
        if (this.mViewModelStore != null) goto L10;
        this.mViewModelStore = r0.viewModelStore;
    L10:
        if (r7 == null) goto L28;
        Parcelable r3 = r7.getParcelable(FRAGMENTS_TAG);
        FragmentController r4 = this.mFragments;
        if (r0 == null) goto L14;
        r1 = r0.fragments;
    L14:
        r4.restoreAllState(r3, r1);
        if (r7.containsKey(NEXT_CANDIDATE_REQUEST_INDEX_TAG) == false) goto L28;
        this.mNextCandidateRequestIndex = r7.getInt(NEXT_CANDIDATE_REQUEST_INDEX_TAG);
        int[] r02 = r7.getIntArray(ALLOCATED_REQUEST_INDICIES_TAG);
        String[] r72 = r7.getStringArray(REQUEST_FRAGMENT_WHO_TAG);
        if (r02 == null) goto L26;
        if (r72 == null) goto L26;
        if (r02.length != r72.length) goto L26;
        this.mPendingFragmentActivityResults = new SparseArrayCompat(r02.length);
        int r12 = 0;
    L24:
        if (r12 >= r02.length) goto L28;
        this.mPendingFragmentActivityResults.put(r02[r12], r72[r12]);
        r12 = r12 + 1;
    L26:
        Log.w(TAG, "Invalid requestCode mapping in savedInstanceState.");
    L28:
        if (this.mPendingFragmentActivityResults != null) goto L30;
        this.mPendingFragmentActivityResults = new SparseArrayCompat();
        this.mNextCandidateRequestIndex = 0;
    L30:
        this.mFragments.dispatchCreate();
    }

    @Override
    public boolean onCreatePanelMenu(int r3, Menu r4) {
        if (r3 != 0) goto L6;
        return super.onCreatePanelMenu(r3, r4) | this.mFragments.dispatchCreateOptionsMenu(r4, getMenuInflater());
    L6:
        return super.onCreatePanelMenu(r3, r4);
    }

    @Override
    public View onCreateView(View r2, String r3, Context r4, AttributeSet r5) {
        View r0 = dispatchFragmentsOnCreateView(r2, r3, r4, r5);
        if (r0 == null) goto L5;
        return r0;
    L5:
        return super.onCreateView(r2, r3, r4, r5);
    }

    @Override
    public View onCreateView(String r2, Context r3, AttributeSet r4) {
        View r0 = dispatchFragmentsOnCreateView(null, r2, r3, r4);
        if (r0 == null) goto L5;
        return r0;
    L5:
        return super.onCreateView(r2, r3, r4);
    }

    final View dispatchFragmentsOnCreateView(View r2, String r3, Context r4, AttributeSet r5) {
        return this.mFragments.onCreateView(r2, r3, r4, r5);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (this.mViewModelStore != null) goto L5;
    L7:
        this.mFragments.dispatchDestroy();
        return;
    L5:
        if (isChangingConfigurations() == true) goto L7;
        this.mViewModelStore.clear();
        goto L7
    }

    @Override
    public void onLowMemory() {
        super.onLowMemory();
        this.mFragments.dispatchLowMemory();
    }

    @Override
    public boolean onMenuItemSelected(int r2, MenuItem r3) {
        if (super.onMenuItemSelected(r2, r3) == false) goto L6;
        return true;
    L6:
        if (r2 == 0) goto L14;
        if (r2 == 6) goto L12;
        return false;
    L12:
        return this.mFragments.dispatchContextItemSelected(r3);
    L14:
        return this.mFragments.dispatchOptionsItemSelected(r3);
    }

    @Override
    public void onPanelClosed(int r2, Menu r3) {
        if (r2 != 0) goto L5;
        this.mFragments.dispatchOptionsMenuClosed(r3);
    L5:
        super.onPanelClosed(r2, r3);
    }

    @Override
    protected void onPause() {
        super.onPause();
        this.mResumed = false;
        if (this.mHandler.hasMessages(2) == false) goto L5;
        this.mHandler.removeMessages(2);
        onResumeFragments();
    L5:
        this.mFragments.dispatchPause();
    }

    @Override
    protected void onNewIntent(Intent r1) {
        super.onNewIntent(r1);
        this.mFragments.noteStateNotSaved();
    }

    @Override
    public void onStateNotSaved() {
        this.mFragments.noteStateNotSaved();
    }

    @Override
    protected void onResume() {
        super.onResume();
        this.mHandler.sendEmptyMessage(2);
        this.mResumed = true;
        this.mFragments.execPendingActions();
    }

    @Override
    protected void onPostResume() {
        super.onPostResume();
        this.mHandler.removeMessages(2);
        onResumeFragments();
        this.mFragments.execPendingActions();
    }

    protected void onResumeFragments() {
        this.mFragments.dispatchResume();
    }

    @Override
    public boolean onPreparePanel(int r1, View r2, Menu r3) {
        if (r1 != 0) goto L7;
        if (r3 == null) goto L7;
        return onPrepareOptionsPanel(r2, r3) | this.mFragments.dispatchPrepareOptionsMenu(r3);
    L7:
        return super.onPreparePanel(r1, r2, r3);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean onPrepareOptionsPanel(View r2, Menu r3) {
        return super.onPreparePanel(0, r2, r3);
    }

    @Override
    public final Object onRetainNonConfigurationInstance() {
        Object r0 = onRetainCustomNonConfigurationInstance();
        FragmentManagerNonConfig r1 = this.mFragments.retainNestedNonConfig();
        if (r1 == null) goto L5;
    L9:
        NonConfigurationInstances r2 = new NonConfigurationInstances();
        r2.custom = r0;
        r2.viewModelStore = this.mViewModelStore;
        r2.fragments = r1;
        return r2;
    L5:
        if (this.mViewModelStore != null) goto L9;
        if (r0 != null) goto L9;
        return null;
    }

    @Override
    protected void onSaveInstanceState(Bundle r5) {
        super.onSaveInstanceState(r5);
        markFragmentsCreated();
        Parcelable r0 = this.mFragments.saveAllState();
        if (r0 == null) goto L6;
        r5.putParcelable(FRAGMENTS_TAG, r0);
    L6:
        if (this.mPendingFragmentActivityResults.size() <= 0) goto L14;
        r5.putInt(NEXT_CANDIDATE_REQUEST_INDEX_TAG, this.mNextCandidateRequestIndex);
        int[] r02 = new int[this.mPendingFragmentActivityResults.size()];
        String[] r1 = new String[this.mPendingFragmentActivityResults.size()];
        int r2 = 0;
    L9:
        if (r2 >= this.mPendingFragmentActivityResults.size()) goto L11;
        r02[r2] = this.mPendingFragmentActivityResults.keyAt(r2);
        r1[r2] = this.mPendingFragmentActivityResults.valueAt(r2);
        r2 = r2 + 1;
        goto L9
    L11:
        r5.putIntArray(ALLOCATED_REQUEST_INDICIES_TAG, r02);
        r5.putStringArray(REQUEST_FRAGMENT_WHO_TAG, r1);
        return;
    }

    @Override
    protected void onStart() {
        super.onStart();
        this.mStopped = false;
        if (this.mCreated == true) goto L5;
        this.mCreated = true;
        this.mFragments.dispatchActivityCreated();
    L5:
        this.mFragments.noteStateNotSaved();
        this.mFragments.execPendingActions();
        this.mFragments.dispatchStart();
    }

    @Override
    protected void onStop() {
        super.onStop();
        this.mStopped = true;
        markFragmentsCreated();
        this.mFragments.dispatchStop();
    }

    public Object getLastCustomNonConfigurationInstance() {
        NonConfigurationInstances r0 = (NonConfigurationInstances) getLastNonConfigurationInstance();
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.custom;
    }

    @Deprecated
    public void supportInvalidateOptionsMenu() {
        invalidateOptionsMenu();
    }

    @Override
    public void dump(String r3, FileDescriptor r4, PrintWriter r5, String[] r6) {
        super.dump(r3, r4, r5, r6);
        r5.print(r3);
        r5.print("Local FragmentActivity ");
        r5.print(Integer.toHexString(System.identityHashCode(this)));
        r5.println(" State:");
        String r0 = r3 + "  ";
        r5.print(r0);
        r5.print("mCreated=");
        r5.print(this.mCreated);
        r5.print(" mResumed=");
        r5.print(this.mResumed);
        r5.print(" mStopped=");
        r5.print(this.mStopped);
        if (getApplication() == null) goto L5;
        LoaderManager.getInstance(this).dump(r0, r4, r5, r6);
    L5:
        this.mFragments.getSupportFragmentManager().dump(r3, r4, r5, r6);
    }

    public FragmentManager getSupportFragmentManager() {
        return this.mFragments.getSupportFragmentManager();
    }

    @Deprecated
    public LoaderManager getSupportLoaderManager() {
        return LoaderManager.getInstance(this);
    }

    @Override
    public void startActivityForResult(Intent r2, int r3) {
        if (this.mStartedActivityFromFragment == false) goto L5;
    L7:
        super.startActivityForResult(r2, r3);
        return;
    L5:
        if (r3 == (-1)) goto L7;
        checkForValidRequestCode(r3);
        goto L7
    }

    @Override
    public void startActivityForResult(Intent r2, int r3, @Nullable Bundle r4) {
        if (this.mStartedActivityFromFragment == false) goto L5;
    L7:
        super.startActivityForResult(r2, r3, r4);
        return;
    L5:
        if (r3 == (-1)) goto L7;
        checkForValidRequestCode(r3);
        goto L7
    }

    @Override
    public void startIntentSenderForResult(IntentSender r2, int r3, @Nullable Intent r4, int r5, int r6, int r7) throws IntentSender.SendIntentException {
        if (this.mStartedIntentSenderFromFragment == false) goto L5;
    L7:
        super.startIntentSenderForResult(r2, r3, r4, r5, r6, r7);
        return;
    L5:
        if (r3 == (-1)) goto L7;
        checkForValidRequestCode(r3);
        goto L7
    }

    @Override
    public void startIntentSenderForResult(IntentSender r2, int r3, @Nullable Intent r4, int r5, int r6, int r7, Bundle r8) throws IntentSender.SendIntentException {
        if (this.mStartedIntentSenderFromFragment == false) goto L5;
    L7:
        super.startIntentSenderForResult(r2, r3, r4, r5, r6, r7, r8);
        return;
    L5:
        if (r3 == (-1)) goto L7;
        checkForValidRequestCode(r3);
        goto L7
    }

    static void checkForValidRequestCode(int r1) {
        if ((r1 & SupportMenu.CATEGORY_MASK) != 0) goto L6;
        return;
    L6:
        throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
    }

    @Override
    public final void validateRequestPermissionsRequestCode(int r2) {
        if (this.mRequestedPermissionsFromFragment == false) goto L5;
        return;
    L5:
        if (r2 == (-1)) goto L9;
        checkForValidRequestCode(r2);
        return;
    }

    @Override
    public void onRequestPermissionsResult(int r5, @NonNull String[] r6, @NonNull int[] r7) {
        this.mFragments.noteStateNotSaved();
        int r0 = (r5 >> 16) & SupportMenu.USER_MASK;
        if (r0 == 0) goto L13;
        int r02 = r0 - 1;
        String r2 = this.mPendingFragmentActivityResults.get(r02);
        this.mPendingFragmentActivityResults.remove(r02);
        if (r2 != null) goto L8;
        Log.w(TAG, "Activity result delivered for unknown Fragment.");
        return;
    L8:
        Fragment r3 = this.mFragments.findFragmentByWho(r2);
        if (r3 != null) goto L11;
        Log.w(TAG, "Activity result no fragment exists for who: " + r2);
        return;
    L11:
        r3.onRequestPermissionsResult(r5 & SupportMenu.USER_MASK, r6, r7);
        return;
    }

    public void startActivityFromFragment(Fragment r2, Intent r3, int r4) {
        startActivityFromFragment(r2, r3, r4, null);
    }

    public void startActivityFromFragment(Fragment r4, Intent r5, int r6, @Nullable Bundle r7) {
        this.mStartedActivityFromFragment = true;
        if (r6 != (-1)) goto L7;
        ActivityCompat.startActivityForResult(this, r5, -1, r7);     // Catch: Throwable -> L10
        this.mStartedActivityFromFragment = false;
        return;
    L7:
        checkForValidRequestCode(r6);     // Catch: Throwable -> L10
        ActivityCompat.startActivityForResult(this, r5, ((allocateRequestIndex(r4) + 1) << 16) + (r6 & SupportMenu.USER_MASK), r7);     // Catch: Throwable -> L10
        this.mStartedActivityFromFragment = false;
        return;
    L10:
        th = move-exception;
        this.mStartedActivityFromFragment = false;
        throw th;
    }

    public void startIntentSenderFromFragment(Fragment r12, IntentSender r13, int r14, @Nullable Intent r15, int r16, int r17, int r18, Bundle r19) throws IntentSender.SendIntentException {
        this.mStartedIntentSenderFromFragment = true;
        if (r14 == (-1)) goto L5;
        checkForValidRequestCode(r14);     // Catch: Throwable -> L11
        ActivityCompat.startIntentSenderForResult(this, r13, ((allocateRequestIndex(r12) + 1) << 16) + (r14 & SupportMenu.USER_MASK), r15, r16, r17, r18, r19);     // Catch: Throwable -> L11
        this.mStartedIntentSenderFromFragment = false;
        return;
    L5:
        ActivityCompat.startIntentSenderForResult(this, r13, r14, r15, r16, r17, r18, r19);     // Catch: Throwable -> L11
        this.mStartedIntentSenderFromFragment = false;
        return;
    L11:
        th = move-exception;
        this.mStartedIntentSenderFromFragment = false;
        throw th;
    }

    private int allocateRequestIndex(Fragment r4) {
        if (this.mPendingFragmentActivityResults.size() >= MAX_NUM_PENDING_FRAGMENT_ACTIVITY_RESULTS) goto L10;
    L5:
        if (this.mPendingFragmentActivityResults.indexOfKey(this.mNextCandidateRequestIndex) < 0) goto L7;
        this.mNextCandidateRequestIndex = (this.mNextCandidateRequestIndex + 1) % MAX_NUM_PENDING_FRAGMENT_ACTIVITY_RESULTS;
        goto L5
    L7:
        int r0 = this.mNextCandidateRequestIndex;
        this.mPendingFragmentActivityResults.put(r0, r4.mWho);
        this.mNextCandidateRequestIndex = (this.mNextCandidateRequestIndex + 1) % MAX_NUM_PENDING_FRAGMENT_ACTIVITY_RESULTS;
        return r0;
    L10:
        throw new IllegalStateException("Too many pending Fragment activity results.");
    }

    void requestPermissionsFromFragment(Fragment r3, String[] r4, int r5) {
        if (r5 != (-1)) goto L6;
        ActivityCompat.requestPermissions(this, r4, r5);
        return;
    L6:
        checkForValidRequestCode(r5);
        this.mRequestedPermissionsFromFragment = true;     // Catch: Throwable -> L10
        ActivityCompat.requestPermissions(this, r4, ((allocateRequestIndex(r3) + 1) << 16) + (r5 & SupportMenu.USER_MASK));     // Catch: Throwable -> L10
        this.mRequestedPermissionsFromFragment = false;
        return;
    L10:
        th = move-exception;
        this.mRequestedPermissionsFromFragment = false;
        throw th;
    }

    private void markFragmentsCreated() {
    L3:
        if (markState(getSupportFragmentManager(), Lifecycle.State.CREATED) == true) goto L3;
    }

    private static boolean markState(FragmentManager r4, Lifecycle.State r5) {
        Iterator<Fragment> r42 = r4.getFragments().iterator();
        boolean r0 = false;
    L4:
        if (r42.hasNext() == false) goto L14;
        Fragment r1 = r42.next();
        if (r1 == null) goto L4;
        if (r1.getLifecycle().getCurrentState().isAtLeast(Lifecycle.State.STARTED) == false) goto L11;
        r1.mLifecycleRegistry.markState(r5);
        r0 = true;
    L11:
        FragmentManager r12 = r1.peekChildFragmentManager();
        if (r12 == null) goto L4;
        r0 = r0 | markState(r12, r5);
        goto L4
    L14:
        return r0;
    }
}
