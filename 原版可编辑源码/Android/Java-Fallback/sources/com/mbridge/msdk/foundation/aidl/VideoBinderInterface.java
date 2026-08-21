package com.mbridge.msdk.foundation.aidl;

public interface VideoBinderInterface extends android.os.IInterface {

    public static class Default implements com.mbridge.msdk.foundation.aidl.VideoBinderInterface {
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
        public void registerListener(com.mbridge.msdk.foundation.aidl.VideoBinderListener r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void requestVideo(java.lang.String[] r1) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.mbridge.msdk.foundation.aidl.VideoBinderInterface {
        private static final java.lang.String DESCRIPTOR = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface";
        static final int TRANSACTION_registerListener = 2;
        static final int TRANSACTION_requestVideo = 1;

        private static class a implements com.mbridge.msdk.foundation.aidl.VideoBinderInterface {
            public static com.mbridge.msdk.foundation.aidl.VideoBinderInterface a;
            private android.os.IBinder b;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.b = r1
                    return
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.b
                    return r0
            }

            @Override
            public final void registerListener(com.mbridge.msdk.foundation.aidl.VideoBinderListener r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L40
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L40
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L36
                    com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L36
                    com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    r2.registerListener(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void requestVideo(java.lang.String[] r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeStringArray(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L38
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.requestVideo(r6)     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L2e:
                    r1.readException()     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.mbridge.msdk.foundation.aidl.VideoBinderInterface asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.mbridge.msdk.foundation.aidl.VideoBinderInterface
                if (r1 == 0) goto L13
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface r0 = (com.mbridge.msdk.foundation.aidl.VideoBinderInterface) r0
                return r0
            L13:
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface$Stub$a r0 = new com.mbridge.msdk.foundation.aidl.VideoBinderInterface$Stub$a
                r0.<init>(r2)
                return r0
        }

        public static com.mbridge.msdk.foundation.aidl.VideoBinderInterface getDefaultImpl() {
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface r0 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.a.a
                return r0
        }

        public static boolean setDefaultImpl(com.mbridge.msdk.foundation.aidl.VideoBinderInterface r1) {
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface r0 = com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.a.a
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.mbridge.msdk.foundation.aidl.VideoBinderInterface.Stub.a.a = r1
                r1 = 1
                return r1
            La:
                r1 = 0
                return r1
            Lc:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                java.lang.String r0 = "setDefaultImpl() called twice"
                r1.<init>(r0)
                throw r1
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                r0 = 1
                java.lang.String r1 = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"
                if (r4 == r0) goto L28
                r2 = 2
                if (r4 == r2) goto L16
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L12
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L12:
                r6.writeString(r1)
                return r0
            L16:
                r5.enforceInterface(r1)
                android.os.IBinder r4 = r5.readStrongBinder()
                com.mbridge.msdk.foundation.aidl.VideoBinderListener r4 = com.mbridge.msdk.foundation.aidl.VideoBinderListener.a.a(r4)
                r3.registerListener(r4)
                r6.writeNoException()
                return r0
            L28:
                r5.enforceInterface(r1)
                java.lang.String[] r4 = r5.createStringArray()
                r3.requestVideo(r4)
                r6.writeNoException()
                return r0
        }
    }

    void registerListener(com.mbridge.msdk.foundation.aidl.VideoBinderListener r1) throws android.os.RemoteException;

    void requestVideo(java.lang.String[] r1) throws android.os.RemoteException;
}
