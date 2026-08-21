package com.vivo.vms;

public interface IPCCallback extends android.os.IInterface {

    public class Default implements com.vivo.vms.IPCCallback {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void call(android.os.Bundle r1) {
                r0 = this;
                return
        }
    }

    public abstract class Stub extends android.os.Binder implements com.vivo.vms.IPCCallback {
        private static final java.lang.String DESCRIPTOR = "com.vivo.vms.IPCCallback";
        static final int TRANSACTION_call = 1;

        class Proxy implements com.vivo.vms.IPCCallback {
            public static com.vivo.vms.IPCCallback sDefaultImpl;
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
            public void call(android.os.Bundle r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.vivo.vms.IPCCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2b
                    com.vivo.vms.IPCCallback r2 = com.vivo.vms.IPCCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2b
                    com.vivo.vms.IPCCallback r2 = com.vivo.vms.IPCCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.call(r6)     // Catch: java.lang.Throwable -> L38
                L24:
                    r1.recycle()
                    r0.recycle()
                    return
                L2b:
                    r1.readException()     // Catch: java.lang.Throwable -> L38
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L24
                    r6.readFromParcel(r1)     // Catch: java.lang.Throwable -> L38
                    goto L24
                L38:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.vivo.vms.IPCCallback"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.vivo.vms.IPCCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.vivo.vms.IPCCallback asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.vivo.vms.IPCCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.vivo.vms.IPCCallback
                if (r1 == 0) goto L13
                com.vivo.vms.IPCCallback r0 = (com.vivo.vms.IPCCallback) r0
                return r0
            L13:
                com.vivo.vms.IPCCallback$Stub$Proxy r0 = new com.vivo.vms.IPCCallback$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.vivo.vms.IPCCallback getDefaultImpl() {
                com.vivo.vms.IPCCallback r0 = com.vivo.vms.IPCCallback.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.vivo.vms.IPCCallback r1) {
                com.vivo.vms.IPCCallback r0 = com.vivo.vms.IPCCallback.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.vivo.vms.IPCCallback.Stub.Proxy.sDefaultImpl = r1
                r1 = 1
                return r1
            La:
                r1 = 0
                return r1
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
                java.lang.String r1 = "com.vivo.vms.IPCCallback"
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
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                r3.call(r4)
                r6.writeNoException()
                r6.writeInt(r0)
                r4.writeToParcel(r6, r0)
                return r0
        }
    }

    void call(android.os.Bundle r1);
}
