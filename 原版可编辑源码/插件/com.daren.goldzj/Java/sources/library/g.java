package library;

import android.os.Parcel;
import android.os.Parcelable;
import java.lang.reflect.Field;

public class g {
    public static Parcel a(Parcelable parcelable) {
        if (parcelable == null) {
            return null;
        }
        Parcel parcelObtain = Parcel.obtain();
        parcelable.writeToParcel(parcelObtain, 0);
        parcelObtain.setDataPosition(0);
        return parcelObtain;
    }

    public static Object a(Parcelable parcelable, ClassLoader classLoader, String str) {
        try {
            Field field = classLoader.loadClass(str).getField("CREATOR");
            field.setAccessible(true);
            return ((Parcelable.Creator) field.get(null)).createFromParcel(a(parcelable));
        } catch (ClassNotFoundException | IllegalAccessException | NoSuchFieldException unused) {
            return null;
        }
    }
}
