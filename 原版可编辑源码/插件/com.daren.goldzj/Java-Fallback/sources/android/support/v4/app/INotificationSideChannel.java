package android.support.v4.app;

import android.app.Notification;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

public interface INotificationSideChannel extends IInterface {

    public static abstract class Stub extends Binder implements INotificationSideChannel {
        private static final String DESCRIPTOR = "android.support.v4.app.INotificationSideChannel";
        static final int TRANSACTION_cancel = 2;
        static final int TRANSACTION_cancelAll = 3;
        static final int TRANSACTION_notify = 1;

        private static class Proxy implements INotificationSideChannel {
            private IBinder mRemote;

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            Proxy(IBinder r1) {
                this.mRemote = r1;
            }

            @Override
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override
            public void notify(String r3, int r4, String r5, Notification r6) throws RemoteException {
                Parcel r0 = Parcel.obtain();
                r0.writeInterfaceToken(Stub.DESCRIPTOR);     // Catch: Throwable -> L10
                r0.writeString(r3);     // Catch: Throwable -> L10
                r0.writeInt(r4);     // Catch: Throwable -> L10
                r0.writeString(r5);     // Catch: Throwable -> L10
                if (r6 == null) goto L6;
                r0.writeInt(1);     // Catch: Throwable -> L10
                r6.writeToParcel(r0, 0);     // Catch: Throwable -> L10
            L7:
                this.mRemote.transact(1, r0, null, 1);     // Catch: Throwable -> L10
                r0.recycle();
                return;
            L6:
                r0.writeInt(0);     // Catch: Throwable -> L10
            L10:
                th = move-exception;
                r0.recycle();
                throw th;
            }

            @Override
            public void cancel(String r3, int r4, String r5) throws RemoteException {
                Parcel r0 = Parcel.obtain();
                r0.writeInterfaceToken(Stub.DESCRIPTOR);     // Catch: Throwable -> L6
                r0.writeString(r3);     // Catch: Throwable -> L6
                r0.writeInt(r4);     // Catch: Throwable -> L6
                r0.writeString(r5);     // Catch: Throwable -> L6
                this.mRemote.transact(2, r0, null, 1);     // Catch: Throwable -> L6
                r0.recycle();
                return;
            L6:
                th = move-exception;
                r0.recycle();
                throw th;
            }

            @Override
            public void cancelAll(String r5) throws RemoteException {
                Parcel r0 = Parcel.obtain();
                r0.writeInterfaceToken(Stub.DESCRIPTOR);     // Catch: Throwable -> L6
                r0.writeString(r5);     // Catch: Throwable -> L6
                this.mRemote.transact(3, r0, null, 1);     // Catch: Throwable -> L6
                r0.recycle();
                return;
            L6:
                th = move-exception;
                r0.recycle();
                throw th;
            }
        }

        @Override
        public IBinder asBinder() {
            return this;
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static INotificationSideChannel asInterface(IBinder r2) {
            if (r2 != null) goto L5;
            return null;
        L5:
            IInterface r0 = r2.queryLocalInterface(DESCRIPTOR);
            if (r0 == null) goto L12;
            if ((r0 instanceof INotificationSideChannel) == false) goto L12;
            return (INotificationSideChannel) r0;
        L12:
            return new Proxy(r2);
        }

        @Override
        public boolean onTransact(int r4, Parcel r5, Parcel r6, int r7) throws RemoteException {
            if (r4 != 1) goto L5;
            r5.enforceInterface(DESCRIPTOR);
            String r42 = r5.readString();
            int r62 = r5.readInt();
            String r72 = r5.readString();
            if (r5.readInt() == 0) goto L21;
            Notification r52 = (Notification) Notification.CREATOR.createFromParcel(r5);
        L22:
            notify(r42, r62, r72, r52);
            return true;
        L21:
            r52 = null;
            goto L22
        L5:
            if (r4 != 2) goto L7;
            r5.enforceInterface(DESCRIPTOR);
            cancel(r5.readString(), r5.readInt(), r5.readString());
            return true;
        L7:
            if (r4 != 3) goto L9;
            r5.enforceInterface(DESCRIPTOR);
            cancelAll(r5.readString());
            return true;
        L9:
            if (r4 != 1598968902) goto L11;
            r6.writeString(DESCRIPTOR);
            return true;
        L11:
            return super.onTransact(r4, r5, r6, r7);
        }
    }

    void cancel(String r1, int r2, String r3) throws RemoteException;

    void cancelAll(String r1) throws RemoteException;

    void notify(String r1, int r2, String r3, Notification r4) throws RemoteException;
}
