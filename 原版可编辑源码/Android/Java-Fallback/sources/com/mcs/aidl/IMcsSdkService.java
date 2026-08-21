package com.mcs.aidl;

public interface IMcsSdkService extends android.os.IInterface {

    public static class Default implements com.mcs.aidl.IMcsSdkService {
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
        public void process(android.os.Bundle r1) {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.mcs.aidl.IMcsSdkService {
        private static final java.lang.String DESCRIPTOR = "com.mcs.aidl.IMcsSdkService";
        static final int TRANSACTION_process = 1;

        private static class Proxy implements com.mcs.aidl.IMcsSdkService {
            public static com.mcs.aidl.IMcsSdkService sDefaultImpl;
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
                    java.lang.String r0 = "com.mcs.aidl.IMcsSdkService"
                    return r0
            }

            @Override
            public void process(android.os.Bundle r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.mcs.aidl.IMcsSdkService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L41
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L41
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L41
                L1b:
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.mcs.aidl.IMcsSdkService r2 = com.mcs.aidl.IMcsSdkService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.mcs.aidl.IMcsSdkService r2 = com.mcs.aidl.IMcsSdkService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.process(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.mcs.aidl.IMcsSdkService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.mcs.aidl.IMcsSdkService asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.mcs.aidl.IMcsSdkService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.mcs.aidl.IMcsSdkService
                if (r1 == 0) goto L13
                com.mcs.aidl.IMcsSdkService r0 = (com.mcs.aidl.IMcsSdkService) r0
                return r0
            L13:
                com.mcs.aidl.IMcsSdkService$Stub$Proxy r0 = new com.mcs.aidl.IMcsSdkService$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.mcs.aidl.IMcsSdkService getDefaultImpl() {
                com.mcs.aidl.IMcsSdkService r0 = com.mcs.aidl.IMcsSdkService.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.mcs.aidl.IMcsSdkService r1) {
                com.mcs.aidl.IMcsSdkService r0 = com.mcs.aidl.IMcsSdkService.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.mcs.aidl.IMcsSdkService.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.mcs.aidl.IMcsSdkService"
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
                r3.process(r4)
                r6.writeNoException()
                return r0
        }
    }

    void process(android.os.Bundle r1);
}
