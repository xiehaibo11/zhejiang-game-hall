package androidx.core.graphics.drawable;

import android.content.res.ColorStateList;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.IconCompat;
import androidx.versionedparcelable.VersionedParcel;

@RestrictTo({RestrictTo.Scope.LIBRARY})
public class IconCompatParcelizer {
    public IconCompatParcelizer() {
    }

    public static IconCompat read(VersionedParcel r3) {
        IconCompat r0 = new IconCompat();
        r0.mType = r3.readInt(r0.mType, 1);
        r0.mData = r3.readByteArray(r0.mData, 2);
        r0.mParcelable = r3.readParcelable(r0.mParcelable, 3);
        r0.mInt1 = r3.readInt(r0.mInt1, 4);
        r0.mInt2 = r3.readInt(r0.mInt2, 5);
        r0.mTintList = (ColorStateList) r3.readParcelable(r0.mTintList, 6);
        r0.mTintModeStr = r3.readString(r0.mTintModeStr, 7);
        r0.onPostParceling();
        return r0;
    }

    public static void write(IconCompat r2, VersionedParcel r3) {
        r3.setSerializationFlags(true, true);
        r2.onPreParceling(r3.isStream());
        r3.writeInt(r2.mType, 1);
        r3.writeByteArray(r2.mData, 2);
        r3.writeParcelable(r2.mParcelable, 3);
        r3.writeInt(r2.mInt1, 4);
        r3.writeInt(r2.mInt2, 5);
        r3.writeParcelable(r2.mTintList, 6);
        r3.writeString(r2.mTintModeStr, 7);
    }
}
