package android.support.v4.app;

public abstract class FragmentPagerAdapter extends android.support.v4.view.PagerAdapter {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "FragmentPagerAdapter";
    private android.support.v4.app.FragmentTransaction mCurTransaction;
    private android.support.v4.app.Fragment mCurrentPrimaryItem;
    private final android.support.v4.app.FragmentManager mFragmentManager;

    public FragmentPagerAdapter(android.support.v4.app.FragmentManager r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mCurTransaction = r0
            r1.mCurrentPrimaryItem = r0
            r1.mFragmentManager = r2
            return
    }

    private static java.lang.String makeFragmentName(int r2, long r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "android:switcher:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ":"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    @Override
    public void destroyItem(android.view.ViewGroup r1, int r2, java.lang.Object r3) {
            r0 = this;
            android.support.v4.app.FragmentTransaction r1 = r0.mCurTransaction
            if (r1 != 0) goto Lc
            android.support.v4.app.FragmentManager r1 = r0.mFragmentManager
            android.support.v4.app.FragmentTransaction r1 = r1.beginTransaction()
            r0.mCurTransaction = r1
        Lc:
            android.support.v4.app.FragmentTransaction r1 = r0.mCurTransaction
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3
            r1.detach(r3)
            return
    }

    @Override
    public void finishUpdate(android.view.ViewGroup r1) {
            r0 = this;
            android.support.v4.app.FragmentTransaction r1 = r0.mCurTransaction
            if (r1 == 0) goto La
            r1.commitNowAllowingStateLoss()
            r1 = 0
            r0.mCurTransaction = r1
        La:
            return
    }

    public abstract android.support.v4.app.Fragment getItem(int r1);

    public long getItemId(int r3) {
            r2 = this;
            long r0 = (long) r3
            return r0
    }

    @Override
    public java.lang.Object instantiateItem(android.view.ViewGroup r5, int r6) {
            r4 = this;
            android.support.v4.app.FragmentTransaction r0 = r4.mCurTransaction
            if (r0 != 0) goto Lc
            android.support.v4.app.FragmentManager r0 = r4.mFragmentManager
            android.support.v4.app.FragmentTransaction r0 = r0.beginTransaction()
            r4.mCurTransaction = r0
        Lc:
            long r0 = r4.getItemId(r6)
            int r2 = r5.getId()
            java.lang.String r2 = makeFragmentName(r2, r0)
            android.support.v4.app.FragmentManager r3 = r4.mFragmentManager
            android.support.v4.app.Fragment r2 = r3.findFragmentByTag(r2)
            if (r2 == 0) goto L26
            android.support.v4.app.FragmentTransaction r5 = r4.mCurTransaction
            r5.attach(r2)
            goto L3b
        L26:
            android.support.v4.app.Fragment r2 = r4.getItem(r6)
            android.support.v4.app.FragmentTransaction r6 = r4.mCurTransaction
            int r3 = r5.getId()
            int r5 = r5.getId()
            java.lang.String r5 = makeFragmentName(r5, r0)
            r6.add(r3, r2, r5)
        L3b:
            android.support.v4.app.Fragment r5 = r4.mCurrentPrimaryItem
            if (r2 == r5) goto L46
            r5 = 0
            r2.setMenuVisibility(r5)
            r2.setUserVisibleHint(r5)
        L46:
            return r2
    }

    @Override
    public boolean isViewFromObject(android.view.View r1, java.lang.Object r2) {
            r0 = this;
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            android.view.View r2 = r2.getView()
            if (r2 != r1) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    @Override
    public void restoreState(android.os.Parcelable r1, java.lang.ClassLoader r2) {
            r0 = this;
            return
    }

    @Override
    public android.os.Parcelable saveState() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void setPrimaryItem(android.view.ViewGroup r1, int r2, java.lang.Object r3) {
            r0 = this;
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3
            android.support.v4.app.Fragment r1 = r0.mCurrentPrimaryItem
            if (r3 == r1) goto L1a
            if (r1 == 0) goto L11
            r2 = 0
            r1.setMenuVisibility(r2)
            android.support.v4.app.Fragment r1 = r0.mCurrentPrimaryItem
            r1.setUserVisibleHint(r2)
        L11:
            r1 = 1
            r3.setMenuVisibility(r1)
            r3.setUserVisibleHint(r1)
            r0.mCurrentPrimaryItem = r3
        L1a:
            return
    }

    @Override
    public void startUpdate(android.view.ViewGroup r3) {
            r2 = this;
            int r3 = r3.getId()
            r0 = -1
            if (r3 == r0) goto L8
            return
        L8:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ViewPager with adapter "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " requires a view id"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }
}
