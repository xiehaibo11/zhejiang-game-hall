package library;

public class g {
    public static android.os.Parcel a(android.os.Parcelable r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.os.Parcel r0 = android.os.Parcel.obtain()
            r1 = 0
            r2.writeToParcel(r0, r1)
            r0.setDataPosition(r1)
            return r0
    }

    public static java.lang.Object a(android.os.Parcelable r1, java.lang.ClassLoader r2, java.lang.String r3) {
            r0 = 0
            java.lang.Class r2 = r2.loadClass(r3)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = "CREATOR"
            java.lang.reflect.Field r2 = r2.getField(r3)     // Catch: java.lang.Throwable -> L1e
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L1e
            android.os.Parcelable$Creator r2 = (android.os.Parcelable.Creator) r2     // Catch: java.lang.Throwable -> L1e
            android.os.Parcel r1 = a(r1)     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r1 = r2.createFromParcel(r1)     // Catch: java.lang.Throwable -> L1e
            return r1
        L1e:
            return r0
    }
}
