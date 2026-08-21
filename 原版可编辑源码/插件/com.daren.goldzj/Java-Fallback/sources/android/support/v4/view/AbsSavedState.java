package android.support.v4.view;

import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;

public abstract class AbsSavedState implements Parcelable {
    public static final Parcelable.Creator<AbsSavedState> CREATOR = null;
    public static final AbsSavedState EMPTY_STATE = null;
    private final Parcelable mSuperState;

    @Override
    public int describeContents() {
        return 0;
    }

    AbsSavedState(1 r1) {
        this();
    }

    static {
        EMPTY_STATE = new 1();
        CREATOR = new 2();
    }

    private AbsSavedState() {
        this.mSuperState = null;
    }

    protected AbsSavedState(@NonNull Parcelable r2) {
        if (r2 == null) goto L11;
        if (r2 != EMPTY_STATE) goto L8;
        r2 = null;
    L8:
        this.mSuperState = r2;
        return;
    L11:
        throw new IllegalArgumentException("superState must not be null");
    }

    protected AbsSavedState(@NonNull Parcel r2) {
        this(r2, null);
    }

    protected AbsSavedState(@NonNull Parcel r1, @Nullable ClassLoader r2) {
        Parcelable r12 = r1.readParcelable(r2);
        if (r12 != null) goto L6;
        r12 = EMPTY_STATE;
    L6:
        this.mSuperState = r12;
    }

    @Nullable
    public final Parcelable getSuperState() {
        return this.mSuperState;
    }

    @Override
    public void writeToParcel(Parcel r2, int r3) {
        r2.writeParcelable(this.mSuperState, r3);
    }
}
