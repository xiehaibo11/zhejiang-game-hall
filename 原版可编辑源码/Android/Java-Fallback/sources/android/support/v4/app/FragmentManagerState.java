package android.support.v4.app;

final class FragmentManagerState implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<android.support.v4.app.FragmentManagerState> CREATOR = null;
    android.support.v4.app.FragmentState[] mActive;
    int[] mAdded;
    android.support.v4.app.BackStackState[] mBackStack;
    int mNextFragmentIndex;
    int mPrimaryNavActiveIndex;


    static {
            android.support.v4.app.FragmentManagerState$1 r0 = new android.support.v4.app.FragmentManagerState$1
            r0.<init>()
            android.support.v4.app.FragmentManagerState.CREATOR = r0
            return
    }

    public FragmentManagerState() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.mPrimaryNavActiveIndex = r0
            return
    }

    public FragmentManagerState(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.mPrimaryNavActiveIndex = r0
            android.os.Parcelable$Creator<android.support.v4.app.FragmentState> r0 = android.support.v4.app.FragmentState.CREATOR
            java.lang.Object[] r0 = r2.createTypedArray(r0)
            android.support.v4.app.FragmentState[] r0 = (android.support.v4.app.FragmentState[]) r0
            r1.mActive = r0
            int[] r0 = r2.createIntArray()
            r1.mAdded = r0
            android.os.Parcelable$Creator<android.support.v4.app.BackStackState> r0 = android.support.v4.app.BackStackState.CREATOR
            java.lang.Object[] r0 = r2.createTypedArray(r0)
            android.support.v4.app.BackStackState[] r0 = (android.support.v4.app.BackStackState[]) r0
            r1.mBackStack = r0
            int r0 = r2.readInt()
            r1.mPrimaryNavActiveIndex = r0
            int r2 = r2.readInt()
            r1.mNextFragmentIndex = r2
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentState[] r0 = r1.mActive
            r2.writeTypedArray(r0, r3)
            int[] r0 = r1.mAdded
            r2.writeIntArray(r0)
            android.support.v4.app.BackStackState[] r0 = r1.mBackStack
            r2.writeTypedArray(r0, r3)
            int r3 = r1.mPrimaryNavActiveIndex
            r2.writeInt(r3)
            int r3 = r1.mNextFragmentIndex
            r2.writeInt(r3)
            return
    }
}
