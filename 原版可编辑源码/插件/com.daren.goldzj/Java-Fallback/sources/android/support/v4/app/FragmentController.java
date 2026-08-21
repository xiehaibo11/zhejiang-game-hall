package android.support.v4.app;

import android.content.Context;
import android.content.res.Configuration;
import android.os.Parcelable;
import android.support.annotation.Nullable;
import android.support.v4.util.SimpleArrayMap;
import android.util.AttributeSet;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.List;

public class FragmentController {
    private final FragmentHostCallback<?> mHost;

    @Deprecated
    public void dispatchReallyStop() {
    }

    @Deprecated
    public void doLoaderDestroy() {
    }

    @Deprecated
    public void doLoaderRetain() {
    }

    @Deprecated
    public void doLoaderStart() {
    }

    @Deprecated
    public void doLoaderStop(boolean r1) {
    }

    @Deprecated
    public void dumpLoaders(String r1, FileDescriptor r2, PrintWriter r3, String[] r4) {
    }

    @Deprecated
    public void reportLoaderStart() {
    }

    @Deprecated
    public void restoreLoaderNonConfig(SimpleArrayMap<String, LoaderManager> r1) {
    }

    @Deprecated
    public SimpleArrayMap<String, LoaderManager> retainLoaderNonConfig() {
        return null;
    }

    public static FragmentController createController(FragmentHostCallback<?> r1) {
        return new FragmentController(r1);
    }

    private FragmentController(FragmentHostCallback<?> r1) {
        this.mHost = r1;
    }

    public FragmentManager getSupportFragmentManager() {
        return this.mHost.getFragmentManagerImpl();
    }

    @Deprecated
    public LoaderManager getSupportLoaderManager() {
        throw new UnsupportedOperationException("Loaders are managed separately from FragmentController, use LoaderManager.getInstance() to obtain a LoaderManager.");
    }

    @Nullable
    public Fragment findFragmentByWho(String r2) {
        return this.mHost.mFragmentManager.findFragmentByWho(r2);
    }

    public int getActiveFragmentsCount() {
        return this.mHost.mFragmentManager.getActiveFragmentCount();
    }

    public List<Fragment> getActiveFragments(List<Fragment> r1) {
        return this.mHost.mFragmentManager.getActiveFragments();
    }

    public void attachHost(Fragment r3) {
        FragmentManagerImpl r0 = this.mHost.mFragmentManager;
        FragmentHostCallback<?> r1 = this.mHost;
        r0.attachController(r1, r1, r3);
    }

    public View onCreateView(View r2, String r3, Context r4, AttributeSet r5) {
        return this.mHost.mFragmentManager.onCreateView(r2, r3, r4, r5);
    }

    public void noteStateNotSaved() {
        this.mHost.mFragmentManager.noteStateNotSaved();
    }

    public Parcelable saveAllState() {
        return this.mHost.mFragmentManager.saveAllState();
    }

    @Deprecated
    public void restoreAllState(Parcelable r4, List<Fragment> r5) {
        this.mHost.mFragmentManager.restoreAllState(r4, new FragmentManagerNonConfig(r5, null, null));
    }

    public void restoreAllState(Parcelable r2, FragmentManagerNonConfig r3) {
        this.mHost.mFragmentManager.restoreAllState(r2, r3);
    }

    @Deprecated
    public List<Fragment> retainNonConfig() {
        FragmentManagerNonConfig r0 = this.mHost.mFragmentManager.retainNonConfig();
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getFragments();
    }

    public FragmentManagerNonConfig retainNestedNonConfig() {
        return this.mHost.mFragmentManager.retainNonConfig();
    }

    public void dispatchCreate() {
        this.mHost.mFragmentManager.dispatchCreate();
    }

    public void dispatchActivityCreated() {
        this.mHost.mFragmentManager.dispatchActivityCreated();
    }

    public void dispatchStart() {
        this.mHost.mFragmentManager.dispatchStart();
    }

    public void dispatchResume() {
        this.mHost.mFragmentManager.dispatchResume();
    }

    public void dispatchPause() {
        this.mHost.mFragmentManager.dispatchPause();
    }

    public void dispatchStop() {
        this.mHost.mFragmentManager.dispatchStop();
    }

    public void dispatchDestroyView() {
        this.mHost.mFragmentManager.dispatchDestroyView();
    }

    public void dispatchDestroy() {
        this.mHost.mFragmentManager.dispatchDestroy();
    }

    public void dispatchMultiWindowModeChanged(boolean r2) {
        this.mHost.mFragmentManager.dispatchMultiWindowModeChanged(r2);
    }

    public void dispatchPictureInPictureModeChanged(boolean r2) {
        this.mHost.mFragmentManager.dispatchPictureInPictureModeChanged(r2);
    }

    public void dispatchConfigurationChanged(Configuration r2) {
        this.mHost.mFragmentManager.dispatchConfigurationChanged(r2);
    }

    public void dispatchLowMemory() {
        this.mHost.mFragmentManager.dispatchLowMemory();
    }

    public boolean dispatchCreateOptionsMenu(Menu r2, MenuInflater r3) {
        return this.mHost.mFragmentManager.dispatchCreateOptionsMenu(r2, r3);
    }

    public boolean dispatchPrepareOptionsMenu(Menu r2) {
        return this.mHost.mFragmentManager.dispatchPrepareOptionsMenu(r2);
    }

    public boolean dispatchOptionsItemSelected(MenuItem r2) {
        return this.mHost.mFragmentManager.dispatchOptionsItemSelected(r2);
    }

    public boolean dispatchContextItemSelected(MenuItem r2) {
        return this.mHost.mFragmentManager.dispatchContextItemSelected(r2);
    }

    public void dispatchOptionsMenuClosed(Menu r2) {
        this.mHost.mFragmentManager.dispatchOptionsMenuClosed(r2);
    }

    public boolean execPendingActions() {
        return this.mHost.mFragmentManager.execPendingActions();
    }
}
