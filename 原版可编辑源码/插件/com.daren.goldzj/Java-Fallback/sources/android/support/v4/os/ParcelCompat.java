package android.support.v4.os;

import android.os.Parcel;

public final class ParcelCompat {
    public static boolean readBoolean(Parcel r0) {
        if (r0.readInt() == 0) goto L5;
        return true;
    L5:
        return false;
    }

    public static void writeBoolean(Parcel r0, boolean r1) {
        r0.writeInt(r1 ? 1 : 0);
    }

    private ParcelCompat() {
    }
}
