package android.support.v4.app;

import android.os.Parcel;
import android.os.Parcelable;

final class FragmentManagerState implements Parcelable {
    public static final Parcelable.Creator<FragmentManagerState> CREATOR = null;
    FragmentState[] mActive;
    int[] mAdded;
    BackStackState[] mBackStack;
    int mNextFragmentIndex;
    int mPrimaryNavActiveIndex;

    @Override
    public int describeContents() {
        return 0;
    }

    public FragmentManagerState() {
        this.mPrimaryNavActiveIndex = -1;
    }

    public FragmentManagerState(Parcel r2) {
        this.mPrimaryNavActiveIndex = -1;
        this.mActive = (FragmentState[]) r2.createTypedArray(FragmentState.CREATOR);
        this.mAdded = r2.createIntArray();
        this.mBackStack = (BackStackState[]) r2.createTypedArray(BackStackState.CREATOR);
        this.mPrimaryNavActiveIndex = r2.readInt();
        this.mNextFragmentIndex = r2.readInt();
    }

    @Override
    public void writeToParcel(Parcel r2, int r3) {
        r2.writeTypedArray(this.mActive, r3);
        r2.writeIntArray(this.mAdded);
        r2.writeTypedArray(this.mBackStack, r3);
        r2.writeInt(this.mPrimaryNavActiveIndex);
        r2.writeInt(this.mNextFragmentIndex);
    }

    static {
        CREATOR = new 1();
    }
}
