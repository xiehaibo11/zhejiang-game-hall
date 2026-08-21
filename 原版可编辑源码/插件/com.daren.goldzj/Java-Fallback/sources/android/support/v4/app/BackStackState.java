package android.support.v4.app;

import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.app.BackStackRecord;
import android.text.TextUtils;
import android.util.Log;
import java.util.ArrayList;

final class BackStackState implements Parcelable {
    public static final Parcelable.Creator<BackStackState> CREATOR = null;
    final int mBreadCrumbShortTitleRes;
    final CharSequence mBreadCrumbShortTitleText;
    final int mBreadCrumbTitleRes;
    final CharSequence mBreadCrumbTitleText;
    final int mIndex;
    final String mName;
    final int[] mOps;
    final boolean mReorderingAllowed;
    final ArrayList<String> mSharedElementSourceNames;
    final ArrayList<String> mSharedElementTargetNames;
    final int mTransition;
    final int mTransitionStyle;

    @Override
    public int describeContents() {
        return 0;
    }

    public BackStackState(BackStackRecord r8) {
        int r0 = r8.mOps.size();
        this.mOps = new int[r0 * 6];
        if (r8.mAddToBackStack == false) goto L14;
        int r1 = 0;
        int r2 = 0;
    L5:
        if (r1 >= r0) goto L11;
        BackStackRecord.Op r3 = r8.mOps.get(r1);
        int r5 = r2 + 1;
        this.mOps[r2] = r3.cmd;
        int[] r22 = this.mOps;
        int r4 = r5 + 1;
        if (r3.fragment == null) goto L9;
        int r6 = r3.fragment.mIndex;
    L10:
        r22[r5] = r6;
        int r52 = r4 + 1;
        this.mOps[r4] = r3.enterAnim;
        int r42 = r52 + 1;
        this.mOps[r52] = r3.exitAnim;
        int r53 = r42 + 1;
        this.mOps[r42] = r3.popEnterAnim;
        this.mOps[r53] = r3.popExitAnim;
        r1 = r1 + 1;
        r2 = r53 + 1;
        goto L5
    L9:
        r6 = -1;
        goto L10
    L11:
        this.mTransition = r8.mTransition;
        this.mTransitionStyle = r8.mTransitionStyle;
        this.mName = r8.mName;
        this.mIndex = r8.mIndex;
        this.mBreadCrumbTitleRes = r8.mBreadCrumbTitleRes;
        this.mBreadCrumbTitleText = r8.mBreadCrumbTitleText;
        this.mBreadCrumbShortTitleRes = r8.mBreadCrumbShortTitleRes;
        this.mBreadCrumbShortTitleText = r8.mBreadCrumbShortTitleText;
        this.mSharedElementSourceNames = r8.mSharedElementSourceNames;
        this.mSharedElementTargetNames = r8.mSharedElementTargetNames;
        this.mReorderingAllowed = r8.mReorderingAllowed;
        return;
    L14:
        throw new IllegalStateException("Not on back stack");
    }

    public BackStackState(Parcel r2) {
        this.mOps = r2.createIntArray();
        this.mTransition = r2.readInt();
        this.mTransitionStyle = r2.readInt();
        this.mName = r2.readString();
        this.mIndex = r2.readInt();
        this.mBreadCrumbTitleRes = r2.readInt();
        this.mBreadCrumbTitleText = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(r2);
        this.mBreadCrumbShortTitleRes = r2.readInt();
        this.mBreadCrumbShortTitleText = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(r2);
        this.mSharedElementSourceNames = r2.createStringArrayList();
        this.mSharedElementTargetNames = r2.createStringArrayList();
        if (r2.readInt() == 0) goto L5;
        boolean r22 = true;
    L6:
        this.mReorderingAllowed = r22;
        return;
    L5:
        r22 = false;
        goto L6
    }

    public BackStackRecord instantiate(FragmentManagerImpl r7) {
        BackStackRecord r0 = new BackStackRecord(r7);
        int r1 = 0;
        int r2 = 0;
    L4:
        if (r1 >= this.mOps.length) goto L13;
        BackStackRecord.Op r3 = new BackStackRecord.Op();
        int r5 = r1 + 1;
        r3.cmd = this.mOps[r1];
        if (FragmentManagerImpl.DEBUG == false) goto L8;
        Log.v("FragmentManager", "Instantiate " + r0 + " op #" + r2 + " base fragment #" + this.mOps[r5]);
    L8:
        int r4 = r5 + 1;
        int r12 = this.mOps[r5];
        if (r12 < 0) goto L11;
        r3.fragment = r7.mActive.get(r12);
    L12:
        int[] r13 = this.mOps;
        int r52 = r4 + 1;
        r3.enterAnim = r13[r4];
        int r42 = r52 + 1;
        r3.exitAnim = r13[r52];
        int r53 = r42 + 1;
        r3.popEnterAnim = r13[r42];
        r3.popExitAnim = r13[r53];
        r0.mEnterAnim = r3.enterAnim;
        r0.mExitAnim = r3.exitAnim;
        r0.mPopEnterAnim = r3.popEnterAnim;
        r0.mPopExitAnim = r3.popExitAnim;
        r0.addOp(r3);
        r2 = r2 + 1;
        r1 = r53 + 1;
        goto L4
    L11:
        r3.fragment = null;
        goto L12
    L13:
        r0.mTransition = this.mTransition;
        r0.mTransitionStyle = this.mTransitionStyle;
        r0.mName = this.mName;
        r0.mIndex = this.mIndex;
        r0.mAddToBackStack = true;
        r0.mBreadCrumbTitleRes = this.mBreadCrumbTitleRes;
        r0.mBreadCrumbTitleText = this.mBreadCrumbTitleText;
        r0.mBreadCrumbShortTitleRes = this.mBreadCrumbShortTitleRes;
        r0.mBreadCrumbShortTitleText = this.mBreadCrumbShortTitleText;
        r0.mSharedElementSourceNames = this.mSharedElementSourceNames;
        r0.mSharedElementTargetNames = this.mSharedElementTargetNames;
        r0.mReorderingAllowed = this.mReorderingAllowed;
        r0.bumpBackStackNesting(1);
        return r0;
    }

    @Override
    public void writeToParcel(Parcel r2, int r3) {
        r2.writeIntArray(this.mOps);
        r2.writeInt(this.mTransition);
        r2.writeInt(this.mTransitionStyle);
        r2.writeString(this.mName);
        r2.writeInt(this.mIndex);
        r2.writeInt(this.mBreadCrumbTitleRes);
        TextUtils.writeToParcel(this.mBreadCrumbTitleText, r2, 0);
        r2.writeInt(this.mBreadCrumbShortTitleRes);
        TextUtils.writeToParcel(this.mBreadCrumbShortTitleText, r2, 0);
        r2.writeStringList(this.mSharedElementSourceNames);
        r2.writeStringList(this.mSharedElementTargetNames);
        r2.writeInt(this.mReorderingAllowed ? 1 : 0);
    }

    static {
        CREATOR = new 1();
    }
}
