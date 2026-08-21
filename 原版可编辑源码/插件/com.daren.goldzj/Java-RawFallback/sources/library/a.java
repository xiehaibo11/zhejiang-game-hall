package library;

public interface a extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements library.a {
        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.loader2.IPlugin"
                r1.attachInterface(r1, r0)
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) {
                r3 = this;
                r0 = 1
                java.lang.String r1 = "com.qihoo360.loader2.IPlugin"
                if (r4 == r0) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto Lf
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            Lf:
                r6.writeString(r1)
                return r0
            L13:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                android.os.IBinder r4 = r3.a(r4)
                r6.writeNoException()
                r6.writeStrongBinder(r4)
                return r0
        }
    }

    android.os.IBinder a(java.lang.String r1);
}
