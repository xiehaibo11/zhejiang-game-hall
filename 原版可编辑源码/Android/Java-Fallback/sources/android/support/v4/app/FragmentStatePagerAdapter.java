package android.support.v4.app;

public abstract class FragmentStatePagerAdapter extends android.support.v4.view.PagerAdapter {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "FragmentStatePagerAdapt";
    private android.support.v4.app.FragmentTransaction mCurTransaction;
    private android.support.v4.app.Fragment mCurrentPrimaryItem;
    private final android.support.v4.app.FragmentManager mFragmentManager;
    private java.util.ArrayList<android.support.v4.app.Fragment> mFragments;
    private java.util.ArrayList<android.support.v4.app.Fragment.SavedState> mSavedState;

    public FragmentStatePagerAdapter(android.support.v4.app.FragmentManager r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mCurTransaction = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.mSavedState = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.mFragments = r1
            r2.mCurrentPrimaryItem = r0
            r2.mFragmentManager = r3
            return
    }

    @Override
    public void destroyItem(android.view.ViewGroup r3, int r4, java.lang.Object r5) {
            r2 = this;
            android.support.v4.app.Fragment r5 = (android.support.v4.app.Fragment) r5
            android.support.v4.app.FragmentTransaction r3 = r2.mCurTransaction
            if (r3 != 0) goto Le
            android.support.v4.app.FragmentManager r3 = r2.mFragmentManager
            android.support.v4.app.FragmentTransaction r3 = r3.beginTransaction()
            r2.mCurTransaction = r3
        Le:
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r3 = r2.mSavedState
            int r3 = r3.size()
            r0 = 0
            if (r3 > r4) goto L1d
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r3 = r2.mSavedState
            r3.add(r0)
            goto Le
        L1d:
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r3 = r2.mSavedState
            boolean r1 = r5.isAdded()
            if (r1 == 0) goto L2c
            android.support.v4.app.FragmentManager r1 = r2.mFragmentManager
            android.support.v4.app.Fragment$SavedState r1 = r1.saveFragmentInstanceState(r5)
            goto L2d
        L2c:
            r1 = r0
        L2d:
            r3.set(r4, r1)
            java.util.ArrayList<android.support.v4.app.Fragment> r3 = r2.mFragments
            r3.set(r4, r0)
            android.support.v4.app.FragmentTransaction r3 = r2.mCurTransaction
            r3.remove(r5)
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

    @Override
    public java.lang.Object instantiateItem(android.view.ViewGroup r4, int r5) {
            r3 = this;
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mFragments
            int r0 = r0.size()
            if (r0 <= r5) goto L13
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r3.mFragments
            java.lang.Object r0 = r0.get(r5)
            android.support.v4.app.Fragment r0 = (android.support.v4.app.Fragment) r0
            if (r0 == 0) goto L13
            return r0
        L13:
            android.support.v4.app.FragmentTransaction r0 = r3.mCurTransaction
            if (r0 != 0) goto L1f
            android.support.v4.app.FragmentManager r0 = r3.mFragmentManager
            android.support.v4.app.FragmentTransaction r0 = r0.beginTransaction()
            r3.mCurTransaction = r0
        L1f:
            android.support.v4.app.Fragment r0 = r3.getItem(r5)
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r1 = r3.mSavedState
            int r1 = r1.size()
            if (r1 <= r5) goto L38
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r1 = r3.mSavedState
            java.lang.Object r1 = r1.get(r5)
            android.support.v4.app.Fragment$SavedState r1 = (android.support.v4.app.Fragment.SavedState) r1
            if (r1 == 0) goto L38
            r0.setInitialSavedState(r1)
        L38:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mFragments
            int r1 = r1.size()
            if (r1 > r5) goto L47
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mFragments
            r2 = 0
            r1.add(r2)
            goto L38
        L47:
            r1 = 0
            r0.setMenuVisibility(r1)
            r0.setUserVisibleHint(r1)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r3.mFragments
            r1.set(r5, r0)
            android.support.v4.app.FragmentTransaction r5 = r3.mCurTransaction
            int r4 = r4.getId()
            r5.add(r4, r0)
            return r0
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
    public void restoreState(android.os.Parcelable r6, java.lang.ClassLoader r7) {
            r5 = this;
            if (r6 == 0) goto L86
            android.os.Bundle r6 = (android.os.Bundle) r6
            r6.setClassLoader(r7)
            java.lang.String r7 = "states"
            android.os.Parcelable[] r7 = r6.getParcelableArray(r7)
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r0 = r5.mSavedState
            r0.clear()
            java.util.ArrayList<android.support.v4.app.Fragment> r0 = r5.mFragments
            r0.clear()
            r0 = 0
            if (r7 == 0) goto L2a
            r1 = r0
        L1b:
            int r2 = r7.length
            if (r1 >= r2) goto L2a
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r2 = r5.mSavedState
            r3 = r7[r1]
            android.support.v4.app.Fragment$SavedState r3 = (android.support.v4.app.Fragment.SavedState) r3
            r2.add(r3)
            int r1 = r1 + 1
            goto L1b
        L2a:
            java.util.Set r7 = r6.keySet()
            java.util.Iterator r7 = r7.iterator()
        L32:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L86
            java.lang.Object r1 = r7.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "f"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L32
            r2 = 1
            java.lang.String r2 = r1.substring(r2)
            int r2 = java.lang.Integer.parseInt(r2)
            android.support.v4.app.FragmentManager r3 = r5.mFragmentManager
            android.support.v4.app.Fragment r3 = r3.getFragment(r6, r1)
            if (r3 == 0) goto L6f
        L57:
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r5.mFragments
            int r1 = r1.size()
            if (r1 > r2) goto L66
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r5.mFragments
            r4 = 0
            r1.add(r4)
            goto L57
        L66:
            r3.setMenuVisibility(r0)
            java.util.ArrayList<android.support.v4.app.Fragment> r1 = r5.mFragments
            r1.set(r2, r3)
            goto L32
        L6f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad fragment at key "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "FragmentStatePagerAdapt"
            android.util.Log.w(r2, r1)
            goto L32
        L86:
            return
    }

    @Override
    public android.os.Parcelable saveState() {
            r5 = this;
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r0 = r5.mSavedState
            int r0 = r0.size()
            if (r0 <= 0) goto L20
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r1 = r5.mSavedState
            int r1 = r1.size()
            android.support.v4.app.Fragment$SavedState[] r1 = new android.support.v4.app.Fragment.SavedState[r1]
            java.util.ArrayList<android.support.v4.app.Fragment$SavedState> r2 = r5.mSavedState
            r2.toArray(r1)
            java.lang.String r2 = "states"
            r0.putParcelableArray(r2, r1)
            goto L21
        L20:
            r0 = 0
        L21:
            r1 = 0
        L22:
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r5.mFragments
            int r2 = r2.size()
            if (r1 >= r2) goto L5a
            java.util.ArrayList<android.support.v4.app.Fragment> r2 = r5.mFragments
            java.lang.Object r2 = r2.get(r1)
            android.support.v4.app.Fragment r2 = (android.support.v4.app.Fragment) r2
            if (r2 == 0) goto L57
            boolean r3 = r2.isAdded()
            if (r3 == 0) goto L57
            if (r0 != 0) goto L41
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
        L41:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "f"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            android.support.v4.app.FragmentManager r4 = r5.mFragmentManager
            r4.putFragment(r0, r3, r2)
        L57:
            int r1 = r1 + 1
            goto L22
        L5a:
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
