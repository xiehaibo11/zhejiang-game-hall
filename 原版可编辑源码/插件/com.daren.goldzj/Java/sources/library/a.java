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
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i != 1) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString("com.qihoo360.loader2.IPlugin");
                return true;
            }
            parcel.enforceInterface("com.qihoo360.loader2.IPlugin");
            IBinder iBinderA = a(parcel.readString());
            parcel2.writeNoException();
            parcel2.writeStrongBinder(iBinderA);
            return true;
        }
    }

    IBinder a(String str);
}
