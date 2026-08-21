package android.support.v4.app;

import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.v4.view.PagerAdapter;
import android.view.View;
import android.view.ViewGroup;

public abstract class FragmentPagerAdapter extends PagerAdapter {
    private static final boolean DEBUG = false;
    private static final String TAG = "FragmentPagerAdapter";
    private FragmentTransaction mCurTransaction;
    private Fragment mCurrentPrimaryItem;
    private final FragmentManager mFragmentManager;

    public abstract Fragment getItem(int r1);

    public long getItemId(int r3) {
        return r3;
    }

    @Override
    public void restoreState(Parcelable r1, ClassLoader r2) {
    }

    @Override
    public Parcelable saveState() {
        return null;
    }

    public FragmentPagerAdapter(FragmentManager r2) {
        this.mCurTransaction = null;
        this.mCurrentPrimaryItem = null;
        this.mFragmentManager = r2;
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
    public Object instantiateItem(@NonNull ViewGroup r5, int r6) {
        if (this.mCurTransaction != null) goto L5;
        this.mCurTransaction = this.mFragmentManager.beginTransaction();
    L5:
        long r0 = getItemId(r6);
        String r2 = makeFragmentName(r5.getId(), r0);
        Fragment r22 = this.mFragmentManager.findFragmentByTag(r2);
        if (r22 == null) goto L8;
        this.mCurTransaction.attach(r22);
    L10:
        if (r22 == this.mCurrentPrimaryItem) goto L12;
        r22.setMenuVisibility(false);
        r22.setUserVisibleHint(false);
    L12:
        return r22;
    L8:
        r22 = getItem(r6);
        this.mCurTransaction.add(r5.getId(), r22, makeFragmentName(r5.getId(), r0));
        goto L10
    }

    @Override
    public void destroyItem(@NonNull ViewGroup r1, int r2, @NonNull Object r3) {
        if (this.mCurTransaction != null) goto L5;
        this.mCurTransaction = this.mFragmentManager.beginTransaction();
    L5:
        this.mCurTransaction.detach((Fragment) r3);
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

    private static String makeFragmentName(int r2, long r3) {
        return "android:switcher:" + r2 + ":" + r3;
    }
}
