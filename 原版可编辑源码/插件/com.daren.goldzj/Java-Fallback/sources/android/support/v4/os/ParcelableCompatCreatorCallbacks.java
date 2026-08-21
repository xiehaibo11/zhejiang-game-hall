package android.support.v4.os;

import android.os.Parcel;

@Deprecated
public interface ParcelableCompatCreatorCallbacks<T> {
    T createFromParcel(Parcel r1, ClassLoader r2);

    T[] newArray(int r1);
}
