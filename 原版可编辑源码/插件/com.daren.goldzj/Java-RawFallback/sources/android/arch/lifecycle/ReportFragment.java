package android.arch.lifecycle;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ReportFragment extends android.app.Fragment {
    private static final java.lang.String REPORT_FRAGMENT_TAG = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag";
    private android.arch.lifecycle.ReportFragment.ActivityInitializationListener mProcessListener;

    interface ActivityInitializationListener {
        void onCreate();

        void onResume();

        void onStart();
    }

    public ReportFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    private void dispatch(android.arch.lifecycle.Lifecycle.Event r3) {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            boolean r1 = r0 instanceof android.arch.lifecycle.LifecycleRegistryOwner
            if (r1 == 0) goto L12
            android.arch.lifecycle.LifecycleRegistryOwner r0 = (android.arch.lifecycle.LifecycleRegistryOwner) r0
            android.arch.lifecycle.LifecycleRegistry r0 = r0.getLifecycle()
            r0.handleLifecycleEvent(r3)
            return
        L12:
            boolean r1 = r0 instanceof android.arch.lifecycle.LifecycleOwner
            if (r1 == 0) goto L25
            android.arch.lifecycle.LifecycleOwner r0 = (android.arch.lifecycle.LifecycleOwner) r0
            android.arch.lifecycle.Lifecycle r0 = r0.getLifecycle()
            boolean r1 = r0 instanceof android.arch.lifecycle.LifecycleRegistry
            if (r1 == 0) goto L25
            android.arch.lifecycle.LifecycleRegistry r0 = (android.arch.lifecycle.LifecycleRegistry) r0
            r0.handleLifecycleEvent(r3)
        L25:
            return
    }

    private void dispatchCreate(android.arch.lifecycle.ReportFragment.ActivityInitializationListener r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.onCreate()
        L5:
            return
    }

    private void dispatchResume(android.arch.lifecycle.ReportFragment.ActivityInitializationListener r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.onResume()
        L5:
            return
    }

    private void dispatchStart(android.arch.lifecycle.ReportFragment.ActivityInitializationListener r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.onStart()
        L5:
            return
    }

    static android.arch.lifecycle.ReportFragment get(android.app.Activity r1) {
            android.app.FragmentManager r1 = r1.getFragmentManager()
            java.lang.String r0 = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag"
            android.app.Fragment r1 = r1.findFragmentByTag(r0)
            android.arch.lifecycle.ReportFragment r1 = (android.arch.lifecycle.ReportFragment) r1
            return r1
    }

    public static void injectIfNeededIn(android.app.Activity r3) {
            android.app.FragmentManager r3 = r3.getFragmentManager()
            java.lang.String r0 = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag"
            android.app.Fragment r1 = r3.findFragmentByTag(r0)
            if (r1 != 0) goto L1f
            android.app.FragmentTransaction r1 = r3.beginTransaction()
            android.arch.lifecycle.ReportFragment r2 = new android.arch.lifecycle.ReportFragment
            r2.<init>()
            android.app.FragmentTransaction r0 = r1.add(r2, r0)
            r0.commit()
            r3.executePendingTransactions()
        L1f:
            return
    }

    @Override
    public void onActivityCreated(android.os.Bundle r1) {
            r0 = this;
            super.onActivityCreated(r1)
            android.arch.lifecycle.ReportFragment$ActivityInitializationListener r1 = r0.mProcessListener
            r0.dispatchCreate(r1)
            android.arch.lifecycle.Lifecycle$Event r1 = android.arch.lifecycle.Lifecycle.Event.ON_CREATE
            r0.dispatch(r1)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_DESTROY
            r1.dispatch(r0)
            r0 = 0
            r1.mProcessListener = r0
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_PAUSE
            r1.dispatch(r0)
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            android.arch.lifecycle.ReportFragment$ActivityInitializationListener r0 = r1.mProcessListener
            r1.dispatchResume(r0)
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_RESUME
            r1.dispatch(r0)
            return
    }

    @Override
    public void onStart() {
            r1 = this;
            super.onStart()
            android.arch.lifecycle.ReportFragment$ActivityInitializationListener r0 = r1.mProcessListener
            r1.dispatchStart(r0)
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_START
            r1.dispatch(r0)
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            super.onStop()
            android.arch.lifecycle.Lifecycle$Event r0 = android.arch.lifecycle.Lifecycle.Event.ON_STOP
            r1.dispatch(r0)
            return
    }

    void setProcessListener(android.arch.lifecycle.ReportFragment.ActivityInitializationListener r1) {
            r0 = this;
            r0.mProcessListener = r1
            return
    }
}
