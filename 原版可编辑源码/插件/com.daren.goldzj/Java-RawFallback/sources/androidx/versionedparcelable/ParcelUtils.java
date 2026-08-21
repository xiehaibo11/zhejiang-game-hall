package androidx.versionedparcelable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ParcelUtils {
    private ParcelUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T extends androidx.versionedparcelable.VersionedParcelable> T fromInputStream(java.io.InputStream r2) {
            androidx.versionedparcelable.VersionedParcelStream r0 = new androidx.versionedparcelable.VersionedParcelStream
            r1 = 0
            r0.<init>(r2, r1)
            androidx.versionedparcelable.VersionedParcelable r2 = r0.readVersionedParcelable()
            return r2
    }

    public static <T extends androidx.versionedparcelable.VersionedParcelable> T fromParcelable(android.os.Parcelable r1) {
            boolean r0 = r1 instanceof androidx.versionedparcelable.ParcelImpl
            if (r0 == 0) goto Lb
            androidx.versionedparcelable.ParcelImpl r1 = (androidx.versionedparcelable.ParcelImpl) r1
            androidx.versionedparcelable.VersionedParcelable r1 = r1.getVersionedParcel()
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid parcel"
            r1.<init>(r0)
            throw r1
    }

    public static void toOutputStream(androidx.versionedparcelable.VersionedParcelable r2, java.io.OutputStream r3) {
            androidx.versionedparcelable.VersionedParcelStream r0 = new androidx.versionedparcelable.VersionedParcelStream
            r1 = 0
            r0.<init>(r1, r3)
            r0.writeVersionedParcelable(r2)
            r0.closeField()
            return
    }

    public static android.os.Parcelable toParcelable(androidx.versionedparcelable.VersionedParcelable r1) {
            androidx.versionedparcelable.ParcelImpl r0 = new androidx.versionedparcelable.ParcelImpl
            r0.<init>(r1)
            return r0
    }
}
