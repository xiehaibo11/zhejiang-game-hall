package android.support.v4.app;

final class BackStackState implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<android.support.v4.app.BackStackState> CREATOR = null;
    final int mBreadCrumbShortTitleRes;
    final java.lang.CharSequence mBreadCrumbShortTitleText;
    final int mBreadCrumbTitleRes;
    final java.lang.CharSequence mBreadCrumbTitleText;
    final int mIndex;
    final java.lang.String mName;
    final int[] mOps;
    final boolean mReorderingAllowed;
    final java.util.ArrayList<java.lang.String> mSharedElementSourceNames;
    final java.util.ArrayList<java.lang.String> mSharedElementTargetNames;
    final int mTransition;
    final int mTransitionStyle;


    static {
            android.support.v4.app.BackStackState$1 r0 = new android.support.v4.app.BackStackState$1
            r0.<init>()
            android.support.v4.app.BackStackState.CREATOR = r0
            return
    }

    public BackStackState(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int[] r0 = r2.createIntArray()
            r1.mOps = r0
            int r0 = r2.readInt()
            r1.mTransition = r0
            int r0 = r2.readInt()
            r1.mTransitionStyle = r0
            java.lang.String r0 = r2.readString()
            r1.mName = r0
            int r0 = r2.readInt()
            r1.mIndex = r0
            int r0 = r2.readInt()
            r1.mBreadCrumbTitleRes = r0
            android.os.Parcelable$Creator r0 = android.text.TextUtils.CHAR_SEQUENCE_CREATOR
            java.lang.Object r0 = r0.createFromParcel(r2)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r1.mBreadCrumbTitleText = r0
            int r0 = r2.readInt()
            r1.mBreadCrumbShortTitleRes = r0
            android.os.Parcelable$Creator r0 = android.text.TextUtils.CHAR_SEQUENCE_CREATOR
            java.lang.Object r0 = r0.createFromParcel(r2)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r1.mBreadCrumbShortTitleText = r0
            java.util.ArrayList r0 = r2.createStringArrayList()
            r1.mSharedElementSourceNames = r0
            java.util.ArrayList r0 = r2.createStringArrayList()
            r1.mSharedElementTargetNames = r0
            int r2 = r2.readInt()
            if (r2 == 0) goto L55
            r2 = 1
            goto L56
        L55:
            r2 = 0
        L56:
            r1.mReorderingAllowed = r2
            return
    }

    public BackStackState(android.support.v4.app.BackStackRecord r8) {
            r7 = this;
            r7.<init>()
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r0 = r8.mOps
            int r0 = r0.size()
            int r1 = r0 * 6
            int[] r1 = new int[r1]
            r7.mOps = r1
            boolean r1 = r8.mAddToBackStack
            if (r1 == 0) goto L88
            r1 = 0
            r2 = 0
        L15:
            if (r1 >= r0) goto L5b
            java.util.ArrayList<android.support.v4.app.BackStackRecord$Op> r3 = r8.mOps
            java.lang.Object r3 = r3.get(r1)
            android.support.v4.app.BackStackRecord$Op r3 = (android.support.v4.app.BackStackRecord.Op) r3
            int[] r4 = r7.mOps
            int r5 = r2 + 1
            int r6 = r3.cmd
            r4[r2] = r6
            int[] r2 = r7.mOps
            int r4 = r5 + 1
            android.support.v4.app.Fragment r6 = r3.fragment
            if (r6 == 0) goto L34
            android.support.v4.app.Fragment r6 = r3.fragment
            int r6 = r6.mIndex
            goto L35
        L34:
            r6 = -1
        L35:
            r2[r5] = r6
            int[] r2 = r7.mOps
            int r5 = r4 + 1
            int r6 = r3.enterAnim
            r2[r4] = r6
            int[] r2 = r7.mOps
            int r4 = r5 + 1
            int r6 = r3.exitAnim
            r2[r5] = r6
            int[] r2 = r7.mOps
            int r5 = r4 + 1
            int r6 = r3.popEnterAnim
            r2[r4] = r6
            int[] r2 = r7.mOps
            int r4 = r5 + 1
            int r3 = r3.popExitAnim
            r2[r5] = r3
            int r1 = r1 + 1
            r2 = r4
            goto L15
        L5b:
            int r0 = r8.mTransition
            r7.mTransition = r0
            int r0 = r8.mTransitionStyle
            r7.mTransitionStyle = r0
            java.lang.String r0 = r8.mName
            r7.mName = r0
            int r0 = r8.mIndex
            r7.mIndex = r0
            int r0 = r8.mBreadCrumbTitleRes
            r7.mBreadCrumbTitleRes = r0
            java.lang.CharSequence r0 = r8.mBreadCrumbTitleText
            r7.mBreadCrumbTitleText = r0
            int r0 = r8.mBreadCrumbShortTitleRes
            r7.mBreadCrumbShortTitleRes = r0
            java.lang.CharSequence r0 = r8.mBreadCrumbShortTitleText
            r7.mBreadCrumbShortTitleText = r0
            java.util.ArrayList<java.lang.String> r0 = r8.mSharedElementSourceNames
            r7.mSharedElementSourceNames = r0
            java.util.ArrayList<java.lang.String> r0 = r8.mSharedElementTargetNames
            r7.mSharedElementTargetNames = r0
            boolean r8 = r8.mReorderingAllowed
            r7.mReorderingAllowed = r8
            return
        L88:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r0 = "Not on back stack"
            r8.<init>(r0)
            throw r8
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public android.support.v4.app.BackStackRecord instantiate(android.support.v4.app.FragmentManagerImpl r7) {
            r6 = this;
            android.support.v4.app.BackStackRecord r0 = new android.support.v4.app.BackStackRecord
            r0.<init>(r7)
            r1 = 0
            r2 = 0
        L7:
            int[] r3 = r6.mOps
            int r3 = r3.length
            if (r1 >= r3) goto L8f
            android.support.v4.app.BackStackRecord$Op r3 = new android.support.v4.app.BackStackRecord$Op
            r3.<init>()
            int[] r4 = r6.mOps
            int r5 = r1 + 1
            r1 = r4[r1]
            r3.cmd = r1
            boolean r1 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r1 == 0) goto L47
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "Instantiate "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = " op #"
            r1.append(r4)
            r1.append(r2)
            java.lang.String r4 = " base fragment #"
            r1.append(r4)
            int[] r4 = r6.mOps
            r4 = r4[r5]
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r4 = "FragmentManager"
            android.util.Log.v(r4, r1)
        L47:
            int[] r1 = r6.mOps
            int r4 = r5 + 1
            r1 = r1[r5]
            if (r1 < 0) goto L5a
            android.util.SparseArray<android.support.v4.app.Fragment> r5 = r7.mActive
            java.lang.Object r1 = r5.get(r1)
            android.support.v4.app.Fragment r1 = (android.support.v4.app.Fragment) r1
            r3.fragment = r1
            goto L5d
        L5a:
            r1 = 0
            r3.fragment = r1
        L5d:
            int[] r1 = r6.mOps
            int r5 = r4 + 1
            r4 = r1[r4]
            r3.enterAnim = r4
            int r4 = r5 + 1
            r5 = r1[r5]
            r3.exitAnim = r5
            int r5 = r4 + 1
            r4 = r1[r4]
            r3.popEnterAnim = r4
            int r4 = r5 + 1
            r1 = r1[r5]
            r3.popExitAnim = r1
            int r1 = r3.enterAnim
            r0.mEnterAnim = r1
            int r1 = r3.exitAnim
            r0.mExitAnim = r1
            int r1 = r3.popEnterAnim
            r0.mPopEnterAnim = r1
            int r1 = r3.popExitAnim
            r0.mPopExitAnim = r1
            r0.addOp(r3)
            int r2 = r2 + 1
            r1 = r4
            goto L7
        L8f:
            int r7 = r6.mTransition
            r0.mTransition = r7
            int r7 = r6.mTransitionStyle
            r0.mTransitionStyle = r7
            java.lang.String r7 = r6.mName
            r0.mName = r7
            int r7 = r6.mIndex
            r0.mIndex = r7
            r7 = 1
            r0.mAddToBackStack = r7
            int r1 = r6.mBreadCrumbTitleRes
            r0.mBreadCrumbTitleRes = r1
            java.lang.CharSequence r1 = r6.mBreadCrumbTitleText
            r0.mBreadCrumbTitleText = r1
            int r1 = r6.mBreadCrumbShortTitleRes
            r0.mBreadCrumbShortTitleRes = r1
            java.lang.CharSequence r1 = r6.mBreadCrumbShortTitleText
            r0.mBreadCrumbShortTitleText = r1
            java.util.ArrayList<java.lang.String> r1 = r6.mSharedElementSourceNames
            r0.mSharedElementSourceNames = r1
            java.util.ArrayList<java.lang.String> r1 = r6.mSharedElementTargetNames
            r0.mSharedElementTargetNames = r1
            boolean r1 = r6.mReorderingAllowed
            r0.mReorderingAllowed = r1
            r0.bumpBackStackNesting(r7)
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            int[] r3 = r1.mOps
            r2.writeIntArray(r3)
            int r3 = r1.mTransition
            r2.writeInt(r3)
            int r3 = r1.mTransitionStyle
            r2.writeInt(r3)
            java.lang.String r3 = r1.mName
            r2.writeString(r3)
            int r3 = r1.mIndex
            r2.writeInt(r3)
            int r3 = r1.mBreadCrumbTitleRes
            r2.writeInt(r3)
            java.lang.CharSequence r3 = r1.mBreadCrumbTitleText
            r0 = 0
            android.text.TextUtils.writeToParcel(r3, r2, r0)
            int r3 = r1.mBreadCrumbShortTitleRes
            r2.writeInt(r3)
            java.lang.CharSequence r3 = r1.mBreadCrumbShortTitleText
            android.text.TextUtils.writeToParcel(r3, r2, r0)
            java.util.ArrayList<java.lang.String> r3 = r1.mSharedElementSourceNames
            r2.writeStringList(r3)
            java.util.ArrayList<java.lang.String> r3 = r1.mSharedElementTargetNames
            r2.writeStringList(r3)
            boolean r3 = r1.mReorderingAllowed
            r2.writeInt(r3)
            return
    }
}
