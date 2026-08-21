package com.kwad.framework.filedownloader.c;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import com.kwad.framework.filedownloader.message.MessageSnapshot;

public interface a extends IInterface {

    public static abstract class a extends Binder implements a {

        static class a implements a {
            public static a adF;
            private IBinder mRemote;

            a(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override
            public final IBinder asBinder() {
                return this.mRemote;
            }

            @Override
            public final void q(MessageSnapshot messageSnapshot) {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback");
                    if (messageSnapshot != null) {
                        parcelObtain.writeInt(1);
                        messageSnapshot.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || a.uV() == null) {
                        return;
                    }
                    a.uV().q(messageSnapshot);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public a() {
            attachInterface(this, "com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback");
        }

        public static a c(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback");
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof a)) ? new a(iBinder) : (a) iInterfaceQueryLocalInterface;
        }

        public static a uV() {
            return a.adF;
        }

        @Override
        public IBinder asBinder() {
            return this;
        }

        @Override
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
            if (i == 1) {
                parcel.enforceInterface("com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback");
                q(parcel.readInt() != 0 ? MessageSnapshot.CREATOR.createFromParcel(parcel) : null);
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString("com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback");
            return true;
        }
    }

    void q(MessageSnapshot messageSnapshot);
}
