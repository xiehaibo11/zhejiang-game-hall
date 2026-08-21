package android.support.v4.app;

public interface INotificationSideChannel extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements android.support.v4.app.INotificationSideChannel {
        private static final java.lang.String DESCRIPTOR = "android.support.v4.app.INotificationSideChannel";
        static final int TRANSACTION_cancel = 2;
        static final int TRANSACTION_cancelAll = 3;
        static final int TRANSACTION_notify = 1;

        private static class Proxy implements android.support.v4.app.INotificationSideChannel {
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public void cancel(java.lang.String r3, int r4, java.lang.String r5) throws android.os.RemoteException {
                    r2 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "android.support.v4.app.INotificationSideChannel"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L1e
                    r0.writeString(r3)     // Catch: java.lang.Throwable -> L1e
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L1e
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L1e
                    android.os.IBinder r3 = r2.mRemote     // Catch: java.lang.Throwable -> L1e
                    r4 = 2
                    r5 = 0
                    r1 = 1
                    r3.transact(r4, r0, r5, r1)     // Catch: java.lang.Throwable -> L1e
                    r0.recycle()
                    return
                L1e:
                    r3 = move-exception
                    r0.recycle()
                    throw r3
            }

            @Override
            public void cancelAll(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "android.support.v4.app.INotificationSideChannel"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L18
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L18
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L18
                    r1 = 3
                    r2 = 0
                    r3 = 1
                    r5.transact(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L18
                    r0.recycle()
                    return
                L18:
                    r5 = move-exception
                    r0.recycle()
                    throw r5
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "android.support.v4.app.INotificationSideChannel"
                    return r0
            }

            @Override
            public void notify(java.lang.String r3, int r4, java.lang.String r5, android.app.Notification r6) throws android.os.RemoteException {
                    r2 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "android.support.v4.app.INotificationSideChannel"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L2a
                    r0.writeString(r3)     // Catch: java.lang.Throwable -> L2a
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L2a
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L2a
                    r3 = 0
                    r4 = 1
                    if (r6 == 0) goto L1d
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L2a
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L2a
                    goto L20
                L1d:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L2a
                L20:
                    android.os.IBinder r3 = r2.mRemote     // Catch: java.lang.Throwable -> L2a
                    r5 = 0
                    r3.transact(r4, r0, r5, r4)     // Catch: java.lang.Throwable -> L2a
                    r0.recycle()
                    return
                L2a:
                    r3 = move-exception
                    r0.recycle()
                    throw r3
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "android.support.v4.app.INotificationSideChannel"
                r1.attachInterface(r1, r0)
                return
        }

        public static android.support.v4.app.INotificationSideChannel asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "android.support.v4.app.INotificationSideChannel"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof android.support.v4.app.INotificationSideChannel
                if (r1 == 0) goto L13
                android.support.v4.app.INotificationSideChannel r0 = (android.support.v4.app.INotificationSideChannel) r0
                return r0
            L13:
                android.support.v4.app.INotificationSideChannel$Stub$Proxy r0 = new android.support.v4.app.INotificationSideChannel$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                java.lang.String r0 = "android.support.v4.app.INotificationSideChannel"
                r1 = 1
                if (r4 == r1) goto L37
                r2 = 2
                if (r4 == r2) goto L24
                r2 = 3
                if (r4 == r2) goto L19
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L15
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L15:
                r6.writeString(r0)
                return r1
            L19:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                r3.cancelAll(r4)
                return r1
            L24:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                int r6 = r5.readInt()
                java.lang.String r5 = r5.readString()
                r3.cancel(r4, r6, r5)
                return r1
            L37:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                int r6 = r5.readInt()
                java.lang.String r7 = r5.readString()
                int r0 = r5.readInt()
                if (r0 == 0) goto L55
                android.os.Parcelable$Creator r0 = android.app.Notification.CREATOR
                java.lang.Object r5 = r0.createFromParcel(r5)
                android.app.Notification r5 = (android.app.Notification) r5
                goto L56
            L55:
                r5 = 0
            L56:
                r3.notify(r4, r6, r7, r5)
                return r1
        }
    }

    void cancel(java.lang.String r1, int r2, java.lang.String r3) throws android.os.RemoteException;

    void cancelAll(java.lang.String r1) throws android.os.RemoteException;

    void notify(java.lang.String r1, int r2, java.lang.String r3, android.app.Notification r4) throws android.os.RemoteException;
}
