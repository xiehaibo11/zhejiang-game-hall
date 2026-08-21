package com.vivo.vms;

public interface IPCInvoke extends android.os.IInterface {

    public class Default implements com.vivo.vms.IPCInvoke {
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
        public android.os.Bundle asyncCall(android.os.Bundle r1, com.vivo.vms.IPCCallback r2) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public abstract class Stub extends android.os.Binder implements com.vivo.vms.IPCInvoke {
        private static final java.lang.String DESCRIPTOR = "com.vivo.vms.IPCInvoke";
        static final int TRANSACTION_asyncCall = 1;

        class Proxy implements com.vivo.vms.IPCInvoke {
            public static com.vivo.vms.IPCInvoke sDefaultImpl;
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
            public android.os.Bundle asyncCall(android.os.Bundle r7, com.vivo.vms.IPCCallback r8) {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.vivo.vms.IPCInvoke"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L5d
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L5d
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L5d
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L5d
                L1b:
                    r4 = 0
                    if (r8 == 0) goto L23
                    android.os.IBinder r5 = r8.asBinder()     // Catch: java.lang.Throwable -> L5d
                    goto L24
                L23:
                    r5 = r4
                L24:
                    r0.writeStrongBinder(r5)     // Catch: java.lang.Throwable -> L5d
                    android.os.IBinder r5 = r6.mRemote     // Catch: java.lang.Throwable -> L5d
                    boolean r2 = r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L5d
                    if (r2 != 0) goto L44
                    com.vivo.vms.IPCInvoke r2 = com.vivo.vms.IPCInvoke.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5d
                    if (r2 == 0) goto L44
                    com.vivo.vms.IPCInvoke r2 = com.vivo.vms.IPCInvoke.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5d
                    android.os.Bundle r7 = r2.asyncCall(r7, r8)     // Catch: java.lang.Throwable -> L5d
                    r1.recycle()
                    r0.recycle()
                    return r7
                L44:
                    r1.readException()     // Catch: java.lang.Throwable -> L5d
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L5d
                    if (r7 == 0) goto L56
                    android.os.Parcelable$Creator r7 = android.os.Bundle.CREATOR     // Catch: java.lang.Throwable -> L5d
                    java.lang.Object r7 = r7.createFromParcel(r1)     // Catch: java.lang.Throwable -> L5d
                    r4 = r7
                    android.os.Bundle r4 = (android.os.Bundle) r4     // Catch: java.lang.Throwable -> L5d
                L56:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L5d:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.vivo.vms.IPCInvoke"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.vivo.vms.IPCInvoke"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.vivo.vms.IPCInvoke asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.vivo.vms.IPCInvoke"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.vivo.vms.IPCInvoke
                if (r1 == 0) goto L13
                com.vivo.vms.IPCInvoke r0 = (com.vivo.vms.IPCInvoke) r0
                return r0
            L13:
                com.vivo.vms.IPCInvoke$Stub$Proxy r0 = new com.vivo.vms.IPCInvoke$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.vivo.vms.IPCInvoke getDefaultImpl() {
                com.vivo.vms.IPCInvoke r0 = com.vivo.vms.IPCInvoke.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.vivo.vms.IPCInvoke r1) {
                com.vivo.vms.IPCInvoke r0 = com.vivo.vms.IPCInvoke.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.vivo.vms.IPCInvoke.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.vivo.vms.IPCInvoke"
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
                int r4 = r5.readInt()
                if (r4 == 0) goto L25
                android.os.Parcelable$Creator r4 = android.os.Bundle.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                android.os.Bundle r4 = (android.os.Bundle) r4
                goto L26
            L25:
                r4 = 0
            L26:
                android.os.IBinder r5 = r5.readStrongBinder()
                com.vivo.vms.IPCCallback r5 = com.vivo.vms.IPCCallback.Stub.asInterface(r5)
                android.os.Bundle r4 = r3.asyncCall(r4, r5)
                r6.writeNoException()
                if (r4 == 0) goto L3e
                r6.writeInt(r0)
                r4.writeToParcel(r6, r0)
                goto L42
            L3e:
                r4 = 0
                r6.writeInt(r4)
            L42:
                return r0
        }
    }

    android.os.Bundle asyncCall(android.os.Bundle r1, com.vivo.vms.IPCCallback r2);
}
