package com.oppo.oiface.engine;

public interface IOIfaceNotifier extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements com.oppo.oiface.engine.IOIfaceNotifier {
        private static final java.lang.String DESCRIPTOR = "com.oppo.oiface.IOIfaceNotifier";
        static final int TRANSACTION_onSystemNotify = 1;

        private static class Proxy implements com.oppo.oiface.engine.IOIfaceNotifier {
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

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.oppo.oiface.IOIfaceNotifier"
                    return r0
            }

            @Override
            public void onSystemNotify(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.oppo.oiface.IOIfaceNotifier"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L21
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L21
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L21
                    r2 = 1
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L21
                    r1.readException()     // Catch: java.lang.Throwable -> L21
                    r1.recycle()
                    r0.recycle()
                    return
                L21:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.oppo.oiface.IOIfaceNotifier"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.oppo.oiface.engine.IOIfaceNotifier asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.oppo.oiface.IOIfaceNotifier"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.oppo.oiface.engine.IOIfaceNotifier
                if (r1 == 0) goto L13
                com.oppo.oiface.engine.IOIfaceNotifier r0 = (com.oppo.oiface.engine.IOIfaceNotifier) r0
                return r0
            L13:
                com.oppo.oiface.engine.IOIfaceNotifier$Stub$Proxy r0 = new com.oppo.oiface.engine.IOIfaceNotifier$Stub$Proxy
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
                java.lang.String r0 = "com.oppo.oiface.IOIfaceNotifier"
                r1 = 1
                if (r4 == r1) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto Lf
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            Lf:
                r6.writeString(r0)
                return r1
            L13:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                r3.onSystemNotify(r4)
                r6.writeNoException()
                return r1
        }
    }

    void onSystemNotify(java.lang.String r1) throws android.os.RemoteException;
}
