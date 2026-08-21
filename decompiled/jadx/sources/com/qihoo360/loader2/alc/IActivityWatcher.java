package com.qihoo360.loader2.alc;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public interface IActivityWatcher extends IInterface {
    void activityResuming(int i) throws RemoteException;

    void closingSystemDialogs(String str) throws RemoteException;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends Binder implements IActivityWatcher {
        private static final String DESCRIPTOR = "android.app.IActivityWatcher";
        static final int TRANSACTION_ACTIVITY_RESUMING = 1;
        static final int TRANSACTION_CLOSING_SYSTEM_DIALOGS = 2;

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(DESCRIPTOR);
                activityResuming(parcel.readInt());
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                closingSystemDialogs(parcel.readString());
                return true;
            }
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            return super.onTransact(i, parcel, parcel2, i2);
        }
    }
}
