package android.support.v4.os;

@java.lang.Deprecated
public final class ParcelableCompat {

    static class ParcelableCompatCreatorHoneycombMR2<T> implements android.os.Parcelable.ClassLoaderCreator<T> {
        private final android.support.v4.os.ParcelableCompatCreatorCallbacks<T> mCallbacks;

        ParcelableCompatCreatorHoneycombMR2(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> r1) {
                r0 = this;
                r0.<init>()
                r0.mCallbacks = r1
                return
        }

        @Override
        public T createFromParcel(android.os.Parcel r3) {
                r2 = this;
                android.support.v4.os.ParcelableCompatCreatorCallbacks<T> r0 = r2.mCallbacks
                r1 = 0
                java.lang.Object r3 = r0.createFromParcel(r3, r1)
                return r3
        }

        @Override
        public T createFromParcel(android.os.Parcel r2, java.lang.ClassLoader r3) {
                r1 = this;
                android.support.v4.os.ParcelableCompatCreatorCallbacks<T> r0 = r1.mCallbacks
                java.lang.Object r2 = r0.createFromParcel(r2, r3)
                return r2
        }

        @Override
        public T[] newArray(int r2) {
                r1 = this;
                android.support.v4.os.ParcelableCompatCreatorCallbacks<T> r0 = r1.mCallbacks
                java.lang.Object[] r2 = r0.newArray(r2)
                return r2
        }
    }

    private ParcelableCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static <T> android.os.Parcelable.Creator<T> newCreator(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> r1) {
            android.support.v4.os.ParcelableCompat$ParcelableCompatCreatorHoneycombMR2 r0 = new android.support.v4.os.ParcelableCompat$ParcelableCompatCreatorHoneycombMR2
            r0.<init>(r1)
            return r0
    }
}
