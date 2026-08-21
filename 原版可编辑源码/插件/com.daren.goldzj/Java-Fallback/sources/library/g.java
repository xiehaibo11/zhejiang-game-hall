package library;

import android.os.Parcel;
import android.os.Parcelable;
import java.lang.reflect.Field;

public class g {
    public static Parcel a(Parcelable r2) {
        if (r2 != null) goto L5;
        return null;
    L5:
        Parcel r0 = Parcel.obtain();
        r2.writeToParcel(r0, 0);
        r0.setDataPosition(0);
        return r0;
    }

    public static Object a(Parcelable r1, ClassLoader r2, String r3) {
        Field r22 = r2.loadClass(r3).getField("CREATOR");     // Catch: Throwable -> L5
        r22.setAccessible(true);     // Catch: Throwable -> L5
        return ((Parcelable.Creator) r22.get(null)).createFromParcel(a(r1));
    L5:
        return null;
    }
}
