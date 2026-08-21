package library;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

public interface a extends IInterface {

    public static abstract class a extends Binder implements a {
        public a() {
            attachInterface(this, "com.qihoo360.loader2.IPlugin");
        }

        @Override
        public IBinder asBinder() {
            return this;
        }

        @Override
        public boolean onTransact(int r4, Parcel r5, Parcel r6, int r7) {
            if (r4 != 1) goto L5;
            r5.enforceInterface("com.qihoo360.loader2.IPlugin");
            IBinder r42 = a(r5.readString());
            r6.writeNoException();
            r6.writeStrongBinder(r42);
            return true;
        L5:
            if (r4 != 1598968902) goto L7;
            r6.writeString("com.qihoo360.loader2.IPlugin");
            return true;
        L7:
            return super.onTransact(r4, r5, r6, r7);
        }
    }

    IBinder a(String r1);
}
