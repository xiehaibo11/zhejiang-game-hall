package androidx.versionedparcelable;

import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import java.io.InputStream;
import java.io.OutputStream;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ParcelUtils {
    private ParcelUtils() {
    }

    public static Parcelable toParcelable(VersionedParcelable r1) {
        return new ParcelImpl(r1);
    }

    public static <T extends VersionedParcelable> T fromParcelable(Parcelable r1) {
        if ((r1 instanceof ParcelImpl) == false) goto L7;
        return (T) ((ParcelImpl) r1).getVersionedParcel();
    L7:
        throw new IllegalArgumentException("Invalid parcel");
    }

    public static void toOutputStream(VersionedParcelable r2, OutputStream r3) {
        VersionedParcelStream r0 = new VersionedParcelStream(null, r3);
        r0.writeVersionedParcelable(r2);
        r0.closeField();
    }

    public static <T extends VersionedParcelable> T fromInputStream(InputStream r2) {
        return (T) new VersionedParcelStream(r2, null).readVersionedParcelable();
    }
}
