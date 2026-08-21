package android.support.v4.app;

import android.arch.lifecycle.ViewModelStore;
import android.content.Context;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Log;

final class FragmentState implements Parcelable {
    public static final Parcelable.Creator<FragmentState> CREATOR = null;
    final Bundle mArguments;
    final String mClassName;
    final int mContainerId;
    final boolean mDetached;
    final int mFragmentId;
    final boolean mFromLayout;
    final boolean mHidden;
    final int mIndex;
    Fragment mInstance;
    final boolean mRetainInstance;
    Bundle mSavedFragmentState;
    final String mTag;

    @Override
    public int describeContents() {
        return 0;
    }

    FragmentState(Fragment r2) {
        this.mClassName = r2.getClass().getName();
        this.mIndex = r2.mIndex;
        this.mFromLayout = r2.mFromLayout;
        this.mFragmentId = r2.mFragmentId;
        this.mContainerId = r2.mContainerId;
        this.mTag = r2.mTag;
        this.mRetainInstance = r2.mRetainInstance;
        this.mDetached = r2.mDetached;
        this.mArguments = r2.mArguments;
        this.mHidden = r2.mHidden;
    }

    FragmentState(Parcel r4) {
        this.mClassName = r4.readString();
        this.mIndex = r4.readInt();
        boolean r1 = true;
        if (r4.readInt() == 0) goto L5;
        boolean r0 = true;
    L6:
        this.mFromLayout = r0;
        this.mFragmentId = r4.readInt();
        this.mContainerId = r4.readInt();
        this.mTag = r4.readString();
        if (r4.readInt() == 0) goto L9;
        boolean r02 = true;
    L10:
        this.mRetainInstance = r02;
        if (r4.readInt() == 0) goto L13;
        boolean r03 = true;
    L14:
        this.mDetached = r03;
        this.mArguments = r4.readBundle();
        if (r4.readInt() != 0) goto L18;
        r1 = false;
    L18:
        this.mHidden = r1;
        this.mSavedFragmentState = r4.readBundle();
        return;
    L13:
        r03 = false;
        goto L14
    L9:
        r02 = false;
        goto L10
    L5:
        r0 = false;
        goto L6
    }

    public Fragment instantiate(FragmentHostCallback r4, FragmentContainer r5, Fragment r6, FragmentManagerNonConfig r7, ViewModelStore r8) {
        if (this.mInstance != null) goto L16;
        Context r0 = r4.getContext();
        Bundle r1 = this.mArguments;
        if (r1 == null) goto L7;
        r1.setClassLoader(r0.getClassLoader());
    L7:
        if (r5 == null) goto L9;
        this.mInstance = r5.instantiate(r0, this.mClassName, this.mArguments);
    L10:
        Bundle r52 = this.mSavedFragmentState;
        if (r52 == null) goto L13;
        r52.setClassLoader(r0.getClassLoader());
        this.mInstance.mSavedFragmentState = this.mSavedFragmentState;
    L13:
        this.mInstance.setIndex(this.mIndex, r6);
        Fragment r53 = this.mInstance;
        r53.mFromLayout = this.mFromLayout;
        r53.mRestored = true;
        r53.mFragmentId = this.mFragmentId;
        r53.mContainerId = this.mContainerId;
        r53.mTag = this.mTag;
        r53.mRetainInstance = this.mRetainInstance;
        r53.mDetached = this.mDetached;
        r53.mHidden = this.mHidden;
        r53.mFragmentManager = r4.mFragmentManager;
        if (FragmentManagerImpl.DEBUG == false) goto L16;
        Log.v("FragmentManager", "Instantiated fragment " + this.mInstance);
        goto L16
    L9:
        this.mInstance = Fragment.instantiate(r0, this.mClassName, this.mArguments);
    L16:
        Fragment r42 = this.mInstance;
        r42.mChildNonConfig = r7;
        r42.mViewModelStore = r8;
        return r42;
    }

    @Override
    public void writeToParcel(Parcel r1, int r2) {
        r1.writeString(this.mClassName);
        r1.writeInt(this.mIndex);
        r1.writeInt(this.mFromLayout ? 1 : 0);
        r1.writeInt(this.mFragmentId);
        r1.writeInt(this.mContainerId);
        r1.writeString(this.mTag);
        r1.writeInt(this.mRetainInstance ? 1 : 0);
        r1.writeInt(this.mDetached ? 1 : 0);
        r1.writeBundle(this.mArguments);
        r1.writeInt(this.mHidden ? 1 : 0);
        r1.writeBundle(this.mSavedFragmentState);
    }

    static {
        CREATOR = new 1();
    }
}
