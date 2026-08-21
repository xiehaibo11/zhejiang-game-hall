package android.support.v4.graphics.drawable;

public final class IconCompatParcelizer extends androidx.core.graphics.drawable.IconCompatParcelizer {
    public IconCompatParcelizer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.graphics.drawable.IconCompat read(androidx.versionedparcelable.VersionedParcel r0) {
            android.support.v4.graphics.drawable.IconCompat r0 = androidx.core.graphics.drawable.IconCompatParcelizer.read(r0)
            return r0
    }

    public static void write(android.support.v4.graphics.drawable.IconCompat r0, androidx.versionedparcelable.VersionedParcel r1) {
            androidx.core.graphics.drawable.IconCompatParcelizer.write(r0, r1)
            return
    }
}
