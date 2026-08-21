package androidx.core.graphics.drawable;

public class IconCompatParcelizer {
    public IconCompatParcelizer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.graphics.drawable.IconCompat read(androidx.versionedparcelable.VersionedParcel r3) {
            android.support.v4.graphics.drawable.IconCompat r0 = new android.support.v4.graphics.drawable.IconCompat
            r0.<init>()
            int r1 = r0.mType
            r2 = 1
            int r1 = r3.readInt(r1, r2)
            r0.mType = r1
            byte[] r1 = r0.mData
            r2 = 2
            byte[] r1 = r3.readByteArray(r1, r2)
            r0.mData = r1
            android.os.Parcelable r1 = r0.mParcelable
            r2 = 3
            android.os.Parcelable r1 = r3.readParcelable(r1, r2)
            r0.mParcelable = r1
            int r1 = r0.mInt1
            r2 = 4
            int r1 = r3.readInt(r1, r2)
            r0.mInt1 = r1
            int r1 = r0.mInt2
            r2 = 5
            int r1 = r3.readInt(r1, r2)
            r0.mInt2 = r1
            android.content.res.ColorStateList r1 = r0.mTintList
            r2 = 6
            android.os.Parcelable r1 = r3.readParcelable(r1, r2)
            android.content.res.ColorStateList r1 = (android.content.res.ColorStateList) r1
            r0.mTintList = r1
            java.lang.String r1 = r0.mTintModeStr
            r2 = 7
            java.lang.String r3 = r3.readString(r1, r2)
            r0.mTintModeStr = r3
            r0.onPostParceling()
            return r0
    }

    public static void write(android.support.v4.graphics.drawable.IconCompat r2, androidx.versionedparcelable.VersionedParcel r3) {
            r0 = 1
            r3.setSerializationFlags(r0, r0)
            boolean r1 = r3.isStream()
            r2.onPreParceling(r1)
            int r1 = r2.mType
            r3.writeInt(r1, r0)
            byte[] r0 = r2.mData
            r1 = 2
            r3.writeByteArray(r0, r1)
            android.os.Parcelable r0 = r2.mParcelable
            r1 = 3
            r3.writeParcelable(r0, r1)
            int r0 = r2.mInt1
            r1 = 4
            r3.writeInt(r0, r1)
            int r0 = r2.mInt2
            r1 = 5
            r3.writeInt(r0, r1)
            android.content.res.ColorStateList r0 = r2.mTintList
            r1 = 6
            r3.writeParcelable(r0, r1)
            java.lang.String r2 = r2.mTintModeStr
            r0 = 7
            r3.writeString(r2, r0)
            return
    }
}
