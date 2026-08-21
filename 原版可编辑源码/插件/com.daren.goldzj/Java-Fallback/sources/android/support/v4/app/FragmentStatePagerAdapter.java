package android.support.v4.app;

import android.os.Bundle;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.v4.app.Fragment;
import android.support.v4.view.PagerAdapter;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;

public abstract class FragmentStatePagerAdapter extends PagerAdapter {
    private static final boolean DEBUG = false;
    private static final String TAG = "FragmentStatePagerAdapt";
    private FragmentTransaction mCurTransaction;
    private Fragment mCurrentPrimaryItem;
    private final FragmentManager mFragmentManager;
    private ArrayList<Fragment> mFragments;
    private ArrayList<Fragment.SavedState> mSavedState;

    public abstract Fragment getItem(int r1);

    public FragmentStatePagerAdapter(FragmentManager r3) {
        this.mCurTransaction = null;
        this.mSavedState = new ArrayList();
        this.mFragments = new ArrayList();
        this.mCurrentPrimaryItem = null;
        this.mFragmentManager = r3;
    }

    @Override
    public void startUpdate(@NonNull ViewGroup r3) {
        if (r3.getId() == (-1)) goto L6;
        return;
    L6:
        throw new IllegalStateException("ViewPager with adapter " + this + " requires a view id");
    }

    @Override
    @NonNull
    public Object instantiateItem(@NonNull ViewGroup r4, int r5) {
        if (this.mFragments.size() <= r5) goto L8;
        Fragment r0 = this.mFragments.get(r5);
        if (r0 == null) goto L8;
        return r0;
    L8:
        if (this.mCurTransaction != null) goto L10;
        this.mCurTransaction = this.mFragmentManager.beginTransaction();
    L10:
        Fragment r02 = getItem(r5);
        if (this.mSavedState.size() <= r5) goto L16;
        Fragment.SavedState r1 = this.mSavedState.get(r5);
        if (r1 == null) goto L16;
        r02.setInitialSavedState(r1);
    L16:
        if (this.mFragments.size() > r5) goto L18;
        this.mFragments.add(null);
        goto L16
    L18:
        r02.setMenuVisibility(false);
        r02.setUserVisibleHint(false);
        this.mFragments.set(r5, r02);
        this.mCurTransaction.add(r4.getId(), r02);
        return r02;
    }

    @Override
    public void destroyItem(@NonNull ViewGroup r3, int r4, @NonNull Object r5) {
        Fragment r52 = (Fragment) r5;
        if (this.mCurTransaction != null) goto L6;
        this.mCurTransaction = this.mFragmentManager.beginTransaction();
    L6:
        if (this.mSavedState.size() > r4) goto L8;
        this.mSavedState.add(null);
        goto L6
    L8:
        ArrayList<Fragment.SavedState> r32 = this.mSavedState;
        if (r52.isAdded() == false) goto L11;
        Fragment.SavedState r1 = this.mFragmentManager.saveFragmentInstanceState(r52);
    L12:
        r32.set(r4, r1);
        this.mFragments.set(r4, null);
        this.mCurTransaction.remove(r52);
        return;
    L11:
        r1 = null;
        goto L12
    }

    @Override
    public void setPrimaryItem(@NonNull ViewGroup r1, int r2, @NonNull Object r3) {
        Fragment r32 = (Fragment) r3;
        Fragment r12 = this.mCurrentPrimaryItem;
        if (r32 == r12) goto L8;
        if (r12 == null) goto L6;
        r12.setMenuVisibility(false);
        this.mCurrentPrimaryItem.setUserVisibleHint(false);
    L6:
        r32.setMenuVisibility(true);
        r32.setUserVisibleHint(true);
        this.mCurrentPrimaryItem = r32;
        return;
    }

    @Override
    public void finishUpdate(@NonNull ViewGroup r1) {
        FragmentTransaction r12 = this.mCurTransaction;
        if (r12 == null) goto L6;
        r12.commitNowAllowingStateLoss();
        this.mCurTransaction = null;
        return;
    }

    @Override
    public boolean isViewFromObject(@NonNull View r1, @NonNull Object r2) {
        if (((Fragment) r2).getView() != r1) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public Parcelable saveState() {
        if (this.mSavedState.size() <= 0) goto L5;
        Bundle r0 = new Bundle();
        Fragment.SavedState[] r1 = new Fragment.SavedState[this.mSavedState.size()];
        this.mSavedState.toArray(r1);
        r0.putParcelableArray("states", r1);
    L6:
        int r12 = 0;
    L8:
        if (r12 >= this.mFragments.size()) goto L17;
        Fragment r2 = this.mFragments.get(r12);
        if (r2 == null) goto L16;
        if (r2.isAdded() == false) goto L16;
        if (r0 != null) goto L15;
        r0 = new Bundle();
    L15:
        this.mFragmentManager.putFragment(r0, "f" + r12, r2);
    L16:
        r12 = r12 + 1;
        goto L8
    L17:
        return r0;
    L5:
        r0 = null;
        goto L6
    }

    @Override
    public void restoreState(Parcelable r6, ClassLoader r7) {
        if (r6 == null) goto L21;
        Bundle r62 = (Bundle) r6;
        r62.setClassLoader(r7);
        Parcelable[] r72 = r62.getParcelableArray("states");
        this.mSavedState.clear();
        this.mFragments.clear();
        if (r72 == null) goto L9;
        int r1 = 0;
    L7:
        if (r1 >= r72.length) goto L9;
        this.mSavedState.add((Fragment.SavedState) r72[r1]);
        r1 = r1 + 1;
    L9:
        Iterator<T> r73 = r62.keySet().iterator();
    L11:
        if (r73.hasNext() == false) goto L32;
        String r12 = (String) r73.next();
        if (r12.startsWith("f") == false) goto L11;
        int r2 = Integer.parseInt(r12.substring(1));
        Fragment r3 = this.mFragmentManager.getFragment(r62, r12);
        if (r3 != null) goto L17;
        Log.w(TAG, "Bad fragment at key " + r12);
    L17:
        if (this.mFragments.size() > r2) goto L19;
        this.mFragments.add(null);
        goto L17
    L19:
        r3.setMenuVisibility(false);
        this.mFragments.set(r2, r3);
        goto L11
    L32:
        return;
    }
}
