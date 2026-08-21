package android.support.v4.app;

final class FragmentState implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<android.support.v4.app.FragmentState> CREATOR = null;
    final android.os.Bundle mArguments;
    final java.lang.String mClassName;
    final int mContainerId;
    final boolean mDetached;
    final int mFragmentId;
    final boolean mFromLayout;
    final boolean mHidden;
    final int mIndex;
    android.support.v4.app.Fragment mInstance;
    final boolean mRetainInstance;
    android.os.Bundle mSavedFragmentState;
    final java.lang.String mTag;


    static {
            android.support.v4.app.FragmentState$1 r0 = new android.support.v4.app.FragmentState$1
            r0.<init>()
            android.support.v4.app.FragmentState.CREATOR = r0
            return
    }

    FragmentState(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = r4.readString()
            r3.mClassName = r0
            int r0 = r4.readInt()
            r3.mIndex = r0
            int r0 = r4.readInt()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L19
            r0 = 1
            goto L1a
        L19:
            r0 = 0
        L1a:
            r3.mFromLayout = r0
            int r0 = r4.readInt()
            r3.mFragmentId = r0
            int r0 = r4.readInt()
            r3.mContainerId = r0
            java.lang.String r0 = r4.readString()
            r3.mTag = r0
            int r0 = r4.readInt()
            if (r0 == 0) goto L36
            r0 = 1
            goto L37
        L36:
            r0 = 0
        L37:
            r3.mRetainInstance = r0
            int r0 = r4.readInt()
            if (r0 == 0) goto L41
            r0 = 1
            goto L42
        L41:
            r0 = 0
        L42:
            r3.mDetached = r0
            android.os.Bundle r0 = r4.readBundle()
            r3.mArguments = r0
            int r0 = r4.readInt()
            if (r0 == 0) goto L51
            goto L52
        L51:
            r1 = 0
        L52:
            r3.mHidden = r1
            android.os.Bundle r4 = r4.readBundle()
            r3.mSavedFragmentState = r4
            return
    }

    FragmentState(android.support.v4.app.Fragment r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            r1.mClassName = r0
            int r0 = r2.mIndex
            r1.mIndex = r0
            boolean r0 = r2.mFromLayout
            r1.mFromLayout = r0
            int r0 = r2.mFragmentId
            r1.mFragmentId = r0
            int r0 = r2.mContainerId
            r1.mContainerId = r0
            java.lang.String r0 = r2.mTag
            r1.mTag = r0
            boolean r0 = r2.mRetainInstance
            r1.mRetainInstance = r0
            boolean r0 = r2.mDetached
            r1.mDetached = r0
            android.os.Bundle r0 = r2.mArguments
            r1.mArguments = r0
            boolean r2 = r2.mHidden
            r1.mHidden = r2
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public android.support.v4.app.Fragment instantiate(android.support.v4.app.FragmentHostCallback r4, android.support.v4.app.FragmentContainer r5, android.support.v4.app.Fragment r6, android.support.v4.app.FragmentManagerNonConfig r7, android.arch.lifecycle.ViewModelStore r8) {
            r3 = this;
            android.support.v4.app.Fragment r0 = r3.mInstance
            if (r0 != 0) goto L83
            android.content.Context r0 = r4.getContext()
            android.os.Bundle r1 = r3.mArguments
            if (r1 == 0) goto L13
            java.lang.ClassLoader r2 = r0.getClassLoader()
            r1.setClassLoader(r2)
        L13:
            if (r5 == 0) goto L20
            java.lang.String r1 = r3.mClassName
            android.os.Bundle r2 = r3.mArguments
            android.support.v4.app.Fragment r5 = r5.instantiate(r0, r1, r2)
            r3.mInstance = r5
            goto L2a
        L20:
            java.lang.String r5 = r3.mClassName
            android.os.Bundle r1 = r3.mArguments
            android.support.v4.app.Fragment r5 = android.support.v4.app.Fragment.instantiate(r0, r5, r1)
            r3.mInstance = r5
        L2a:
            android.os.Bundle r5 = r3.mSavedFragmentState
            if (r5 == 0) goto L3b
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r5.setClassLoader(r0)
            android.support.v4.app.Fragment r5 = r3.mInstance
            android.os.Bundle r0 = r3.mSavedFragmentState
            r5.mSavedFragmentState = r0
        L3b:
            android.support.v4.app.Fragment r5 = r3.mInstance
            int r0 = r3.mIndex
            r5.setIndex(r0, r6)
            android.support.v4.app.Fragment r5 = r3.mInstance
            boolean r6 = r3.mFromLayout
            r5.mFromLayout = r6
            r6 = 1
            r5.mRestored = r6
            int r6 = r3.mFragmentId
            r5.mFragmentId = r6
            int r6 = r3.mContainerId
            r5.mContainerId = r6
            java.lang.String r6 = r3.mTag
            r5.mTag = r6
            boolean r6 = r3.mRetainInstance
            r5.mRetainInstance = r6
            boolean r6 = r3.mDetached
            r5.mDetached = r6
            boolean r6 = r3.mHidden
            r5.mHidden = r6
            android.support.v4.app.FragmentManagerImpl r4 = r4.mFragmentManager
            r5.mFragmentManager = r4
            boolean r4 = android.support.v4.app.FragmentManagerImpl.DEBUG
            if (r4 == 0) goto L83
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Instantiated fragment "
            r4.append(r5)
            android.support.v4.app.Fragment r5 = r3.mInstance
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "FragmentManager"
            android.util.Log.v(r5, r4)
        L83:
            android.support.v4.app.Fragment r4 = r3.mInstance
            r4.mChildNonConfig = r7
            r4.mViewModelStore = r8
            return r4
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.mClassName
            r1.writeString(r2)
            int r2 = r0.mIndex
            r1.writeInt(r2)
            boolean r2 = r0.mFromLayout
            r1.writeInt(r2)
            int r2 = r0.mFragmentId
            r1.writeInt(r2)
            int r2 = r0.mContainerId
            r1.writeInt(r2)
            java.lang.String r2 = r0.mTag
            r1.writeString(r2)
            boolean r2 = r0.mRetainInstance
            r1.writeInt(r2)
            boolean r2 = r0.mDetached
            r1.writeInt(r2)
            android.os.Bundle r2 = r0.mArguments
            r1.writeBundle(r2)
            boolean r2 = r0.mHidden
            r1.writeInt(r2)
            android.os.Bundle r2 = r0.mSavedFragmentState
            r1.writeBundle(r2)
            return
    }
}
