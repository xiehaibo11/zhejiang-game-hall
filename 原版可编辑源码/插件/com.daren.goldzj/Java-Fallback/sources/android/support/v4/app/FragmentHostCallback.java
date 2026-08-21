package android.support.v4.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.util.Preconditions;
import android.view.LayoutInflater;
import android.view.View;
import java.io.FileDescriptor;
import java.io.PrintWriter;

public abstract class FragmentHostCallback<E> extends FragmentContainer {

    @Nullable
    private final Activity mActivity;

    @NonNull
    private final Context mContext;
    final FragmentManagerImpl mFragmentManager;

    @NonNull
    private final Handler mHandler;
    private final int mWindowAnimations;

    void onAttachFragment(Fragment r1) {
    }

    public void onDump(String r1, FileDescriptor r2, PrintWriter r3, String[] r4) {
    }

    @Override
    @Nullable
    public View onFindViewById(int r1) {
        return null;
    }

    @Nullable
    public abstract E onGetHost();

    @Override
    public boolean onHasView() {
        return true;
    }

    public boolean onHasWindowAnimations() {
        return true;
    }

    public void onRequestPermissionsFromFragment(@NonNull Fragment r1, @NonNull String[] r2, int r3) {
    }

    public boolean onShouldSaveFragmentState(Fragment r1) {
        return true;
    }

    public boolean onShouldShowRequestPermissionRationale(@NonNull String r1) {
        return false;
    }

    public void onSupportInvalidateOptionsMenu() {
    }

    public FragmentHostCallback(@NonNull Context r2, @NonNull Handler r3, int r4) {
        if ((r2 instanceof Activity) == false) goto L5;
        Activity r0 = (Activity) r2;
    L6:
        this(r0, r2, r3, r4);
        return;
    L5:
        r0 = null;
        goto L6
    }

    FragmentHostCallback(@NonNull FragmentActivity r3) {
        this(r3, r3, r3.mHandler, 0);
    }

    FragmentHostCallback(@Nullable Activity r2, @NonNull Context r3, @NonNull Handler r4, int r5) {
        this.mFragmentManager = new FragmentManagerImpl();
        this.mActivity = r2;
        this.mContext = (Context) Preconditions.checkNotNull(r3, "context == null");
        this.mHandler = (Handler) Preconditions.checkNotNull(r4, "handler == null");
        this.mWindowAnimations = r5;
    }

    @NonNull
    public LayoutInflater onGetLayoutInflater() {
        return LayoutInflater.from(this.mContext);
    }

    public void onStartActivityFromFragment(Fragment r2, Intent r3, int r4) {
        onStartActivityFromFragment(r2, r3, r4, null);
    }

    public void onStartActivityFromFragment(Fragment r1, Intent r2, int r3, @Nullable Bundle r4) {
        if (r3 != (-1)) goto L7;
        this.mContext.startActivity(r2);
        return;
    L7:
        throw new IllegalStateException("Starting activity with a requestCode requires a FragmentActivity host");
    }

    public void onStartIntentSenderFromFragment(Fragment r10, IntentSender r11, int r12, @Nullable Intent r13, int r14, int r15, int r16, Bundle r17) throws IntentSender.SendIntentException {
        if (r12 != (-1)) goto L7;
        ActivityCompat.startIntentSenderForResult(this.mActivity, r11, r12, r13, r14, r15, r16, r17);
        return;
    L7:
        throw new IllegalStateException("Starting intent sender with a requestCode requires a FragmentActivity host");
    }

    public int onGetWindowAnimations() {
        return this.mWindowAnimations;
    }

    @Nullable
    Activity getActivity() {
        return this.mActivity;
    }

    @NonNull
    Context getContext() {
        return this.mContext;
    }

    @NonNull
    Handler getHandler() {
        return this.mHandler;
    }

    FragmentManagerImpl getFragmentManagerImpl() {
        return this.mFragmentManager;
    }
}
