package android.arch.lifecycle;

import android.app.Activity;
import android.app.Fragment;
import android.app.FragmentManager;
import android.arch.lifecycle.Lifecycle;
import android.content.ComponentCallbacks2;
import android.os.Bundle;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ReportFragment extends Fragment {
    private static final String REPORT_FRAGMENT_TAG = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag";
    private ActivityInitializationListener mProcessListener;

    interface ActivityInitializationListener {
        void onCreate();

        void onResume();

        void onStart();
    }

    public ReportFragment() {
    }

    public static void injectIfNeededIn(Activity r3) {
        FragmentManager r32 = r3.getFragmentManager();
        if (r32.findFragmentByTag(REPORT_FRAGMENT_TAG) != null) goto L6;
        r32.beginTransaction().add(new ReportFragment(), REPORT_FRAGMENT_TAG).commit();
        r32.executePendingTransactions();
        return;
    }

    static ReportFragment get(Activity r1) {
        return (ReportFragment) r1.getFragmentManager().findFragmentByTag(REPORT_FRAGMENT_TAG);
    }

    private void dispatchCreate(ActivityInitializationListener r1) {
        if (r1 == null) goto L5;
        r1.onCreate();
        return;
    }

    private void dispatchStart(ActivityInitializationListener r1) {
        if (r1 == null) goto L5;
        r1.onStart();
        return;
    }

    private void dispatchResume(ActivityInitializationListener r1) {
        if (r1 == null) goto L5;
        r1.onResume();
        return;
    }

    @Override
    public void onActivityCreated(Bundle r1) {
        super.onActivityCreated(r1);
        dispatchCreate(this.mProcessListener);
        dispatch(Lifecycle.Event.ON_CREATE);
    }

    @Override
    public void onStart() {
        super.onStart();
        dispatchStart(this.mProcessListener);
        dispatch(Lifecycle.Event.ON_START);
    }

    @Override
    public void onResume() {
        super.onResume();
        dispatchResume(this.mProcessListener);
        dispatch(Lifecycle.Event.ON_RESUME);
    }

    @Override
    public void onPause() {
        super.onPause();
        dispatch(Lifecycle.Event.ON_PAUSE);
    }

    @Override
    public void onStop() {
        super.onStop();
        dispatch(Lifecycle.Event.ON_STOP);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        dispatch(Lifecycle.Event.ON_DESTROY);
        this.mProcessListener = null;
    }

    private void dispatch(Lifecycle.Event r3) {
        ComponentCallbacks2 r0 = getActivity();
        if ((r0 instanceof LifecycleRegistryOwner) == false) goto L7;
        ((LifecycleRegistryOwner) r0).getLifecycle().handleLifecycleEvent(r3);
        return;
    L7:
        if ((r0 instanceof LifecycleOwner) == false) goto L12;
        Lifecycle r02 = ((LifecycleOwner) r0).getLifecycle();
        if ((r02 instanceof LifecycleRegistry) == false) goto L13;
        ((LifecycleRegistry) r02).handleLifecycleEvent(r3);
        return;
    L13:
        return;
    }

    void setProcessListener(ActivityInitializationListener r1) {
        this.mProcessListener = r1;
    }
}
