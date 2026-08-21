package android.support.v4.app;

public class FragmentController {
    private final android.support.v4.app.FragmentHostCallback<?> mHost;

    private FragmentController(android.support.v4.app.FragmentHostCallback<?> r1) {
            r0 = this;
            r0.<init>()
            r0.mHost = r1
            return
    }

    public static android.support.v4.app.FragmentController createController(android.support.v4.app.FragmentHostCallback<?> r1) {
            android.support.v4.app.FragmentController r0 = new android.support.v4.app.FragmentController
            r0.<init>(r1)
            return r0
    }

    public void attachHost(android.support.v4.app.Fragment r3) {
            r2 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r2.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.support.v4.app.FragmentHostCallback<?> r1 = r2.mHost
            r0.attachController(r1, r1, r3)
            return
    }

    public void dispatchActivityCreated() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchActivityCreated()
            return
    }

    public void dispatchConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchConfigurationChanged(r2)
            return
    }

    public boolean dispatchContextItemSelected(android.view.MenuItem r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            boolean r2 = r0.dispatchContextItemSelected(r2)
            return r2
    }

    public void dispatchCreate() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchCreate()
            return
    }

    public boolean dispatchCreateOptionsMenu(android.view.Menu r2, android.view.MenuInflater r3) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            boolean r2 = r0.dispatchCreateOptionsMenu(r2, r3)
            return r2
    }

    public void dispatchDestroy() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchDestroy()
            return
    }

    public void dispatchDestroyView() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchDestroyView()
            return
    }

    public void dispatchLowMemory() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchLowMemory()
            return
    }

    public void dispatchMultiWindowModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchMultiWindowModeChanged(r2)
            return
    }

    public boolean dispatchOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            boolean r2 = r0.dispatchOptionsItemSelected(r2)
            return r2
    }

    public void dispatchOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchOptionsMenuClosed(r2)
            return
    }

    public void dispatchPause() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchPause()
            return
    }

    public void dispatchPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchPictureInPictureModeChanged(r2)
            return
    }

    public boolean dispatchPrepareOptionsMenu(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            boolean r2 = r0.dispatchPrepareOptionsMenu(r2)
            return r2
    }

    @java.lang.Deprecated
    public void dispatchReallyStop() {
            r0 = this;
            return
    }

    public void dispatchResume() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchResume()
            return
    }

    public void dispatchStart() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchStart()
            return
    }

    public void dispatchStop() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.dispatchStop()
            return
    }

    @java.lang.Deprecated
    public void doLoaderDestroy() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void doLoaderRetain() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void doLoaderStart() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void doLoaderStop(boolean r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void dumpLoaders(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            r0 = this;
            return
    }

    public boolean execPendingActions() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            boolean r0 = r0.execPendingActions()
            return r0
    }

    @android.support.annotation.Nullable
    public android.support.v4.app.Fragment findFragmentByWho(java.lang.String r2) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.support.v4.app.Fragment r2 = r0.findFragmentByWho(r2)
            return r2
    }

    public java.util.List<android.support.v4.app.Fragment> getActiveFragments(java.util.List<android.support.v4.app.Fragment> r1) {
            r0 = this;
            android.support.v4.app.FragmentHostCallback<?> r1 = r0.mHost
            android.support.v4.app.FragmentManagerImpl r1 = r1.mFragmentManager
            java.util.List r1 = r1.getActiveFragments()
            return r1
    }

    public int getActiveFragmentsCount() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            int r0 = r0.getActiveFragmentCount()
            return r0
    }

    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.getFragmentManagerImpl()
            return r0
    }

    @java.lang.Deprecated
    public android.support.v4.app.LoaderManager getSupportLoaderManager() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Loaders are managed separately from FragmentController, use LoaderManager.getInstance() to obtain a LoaderManager."
            r0.<init>(r1)
            throw r0
    }

    public void noteStateNotSaved() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.noteStateNotSaved()
            return
    }

    public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.view.View r2 = r0.onCreateView(r2, r3, r4, r5)
            return r2
    }

    @java.lang.Deprecated
    public void reportLoaderStart() {
            r0 = this;
            return
    }

    public void restoreAllState(android.os.Parcelable r2, android.support.v4.app.FragmentManagerNonConfig r3) {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            r0.restoreAllState(r2, r3)
            return
    }

    @java.lang.Deprecated
    public void restoreAllState(android.os.Parcelable r4, java.util.List<android.support.v4.app.Fragment> r5) {
            r3 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r3.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.support.v4.app.FragmentManagerNonConfig r1 = new android.support.v4.app.FragmentManagerNonConfig
            r2 = 0
            r1.<init>(r5, r2, r2)
            r0.restoreAllState(r4, r1)
            return
    }

    @java.lang.Deprecated
    public void restoreLoaderNonConfig(android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.v4.app.LoaderManager> r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.v4.app.LoaderManager> retainLoaderNonConfig() {
            r1 = this;
            r0 = 0
            return r0
    }

    public android.support.v4.app.FragmentManagerNonConfig retainNestedNonConfig() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.support.v4.app.FragmentManagerNonConfig r0 = r0.retainNonConfig()
            return r0
    }

    @java.lang.Deprecated
    public java.util.List<android.support.v4.app.Fragment> retainNonConfig() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.support.v4.app.FragmentManagerNonConfig r0 = r0.retainNonConfig()
            if (r0 == 0) goto Lf
            java.util.List r0 = r0.getFragments()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public android.os.Parcelable saveAllState() {
            r1 = this;
            android.support.v4.app.FragmentHostCallback<?> r0 = r1.mHost
            android.support.v4.app.FragmentManagerImpl r0 = r0.mFragmentManager
            android.os.Parcelable r0 = r0.saveAllState()
            return r0
    }
}
