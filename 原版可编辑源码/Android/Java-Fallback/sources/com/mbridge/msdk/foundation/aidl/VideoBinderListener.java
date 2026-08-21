package com.mbridge.msdk.foundation.aidl;

public interface VideoBinderListener extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.mbridge.msdk.foundation.aidl.VideoBinderListener {

        private static class a implements com.mbridge.msdk.foundation.aidl.VideoBinderListener {
            public static com.mbridge.msdk.foundation.aidl.VideoBinderListener a;
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
            public final void onVideo(java.lang.String r14, long r15, java.lang.String r17, java.lang.String r18, java.lang.String r19, android.os.ParcelFileDescriptor r20) throws android.os.RemoteException {
                    r13 = this;
                    r0 = r20
                    android.os.Parcel r9 = android.os.Parcel.obtain()
                    android.os.Parcel r10 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.mbridge.msdk.foundation.aidl.VideoBinderListener"
                    r9.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L67
                    r2 = r14
                    r9.writeString(r14)     // Catch: java.lang.Throwable -> L67
                    r3 = r15
                    r9.writeLong(r3)     // Catch: java.lang.Throwable -> L67
                    r5 = r17
                    r9.writeString(r5)     // Catch: java.lang.Throwable -> L67
                    r6 = r18
                    r9.writeString(r6)     // Catch: java.lang.Throwable -> L67
                    r7 = r19
                    r9.writeString(r7)     // Catch: java.lang.Throwable -> L67
                    r1 = 1
                    r8 = 0
                    if (r0 == 0) goto L31
                    r9.writeInt(r1)     // Catch: java.lang.Throwable -> L67
                    r0.writeToParcel(r9, r8)     // Catch: java.lang.Throwable -> L67
                    goto L34
                L31:
                    r9.writeInt(r8)     // Catch: java.lang.Throwable -> L67
                L34:
                    r11 = r13
                    android.os.IBinder r12 = r11.b     // Catch: java.lang.Throwable -> L65
                    boolean r1 = r12.transact(r1, r9, r10, r8)     // Catch: java.lang.Throwable -> L65
                    if (r1 != 0) goto L5b
                    com.mbridge.msdk.foundation.aidl.VideoBinderListener r1 = com.mbridge.msdk.foundation.aidl.VideoBinderListener.a.a()     // Catch: java.lang.Throwable -> L65
                    if (r1 == 0) goto L5b
                    com.mbridge.msdk.foundation.aidl.VideoBinderListener r1 = com.mbridge.msdk.foundation.aidl.VideoBinderListener.a.a()     // Catch: java.lang.Throwable -> L65
                    r2 = r14
                    r3 = r15
                    r5 = r17
                    r6 = r18
                    r7 = r19
                    r8 = r20
                    r1.onVideo(r2, r3, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L65
                    r10.recycle()
                    r9.recycle()
                    return
                L5b:
                    r10.readException()     // Catch: java.lang.Throwable -> L65
                    r10.recycle()
                    r9.recycle()
                    return
                L65:
                    r0 = move-exception
                    goto L69
                L67:
                    r0 = move-exception
                    r11 = r13
                L69:
                    r10.recycle()
                    r9.recycle()
                    throw r0
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.mbridge.msdk.foundation.aidl.VideoBinderListener"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.mbridge.msdk.foundation.aidl.VideoBinderListener a() {
                com.mbridge.msdk.foundation.aidl.VideoBinderListener r0 = com.mbridge.msdk.foundation.aidl.VideoBinderListener.a.a.a
                return r0
        }

        public static com.mbridge.msdk.foundation.aidl.VideoBinderListener a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.mbridge.msdk.foundation.aidl.VideoBinderListener"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.mbridge.msdk.foundation.aidl.VideoBinderListener
                if (r1 == 0) goto L13
                com.mbridge.msdk.foundation.aidl.VideoBinderListener r0 = (com.mbridge.msdk.foundation.aidl.VideoBinderListener) r0
                return r0
            L13:
                com.mbridge.msdk.foundation.aidl.VideoBinderListener$a$a r0 = new com.mbridge.msdk.foundation.aidl.VideoBinderListener$a$a
                r0.<init>(r2)
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r10, android.os.Parcel r11, android.os.Parcel r12, int r13) throws android.os.RemoteException {
                r9 = this;
                r0 = 1
                java.lang.String r1 = "com.mbridge.msdk.foundation.aidl.VideoBinderListener"
                if (r10 == r0) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r10 == r2) goto Lf
                boolean r10 = super.onTransact(r10, r11, r12, r13)
                return r10
            Lf:
                r12.writeString(r1)
                return r0
            L13:
                r11.enforceInterface(r1)
                java.lang.String r2 = r11.readString()
                long r3 = r11.readLong()
                java.lang.String r5 = r11.readString()
                java.lang.String r6 = r11.readString()
                java.lang.String r7 = r11.readString()
                int r10 = r11.readInt()
                if (r10 == 0) goto L39
                android.os.Parcelable$Creator r10 = android.os.ParcelFileDescriptor.CREATOR
                java.lang.Object r10 = r10.createFromParcel(r11)
                android.os.ParcelFileDescriptor r10 = (android.os.ParcelFileDescriptor) r10
                goto L3a
            L39:
                r10 = 0
            L3a:
                r8 = r10
                r1 = r9
                r1.onVideo(r2, r3, r5, r6, r7, r8)
                r12.writeNoException()
                return r0
        }
    }

    void onVideo(java.lang.String r1, long r2, java.lang.String r4, java.lang.String r5, java.lang.String r6, android.os.ParcelFileDescriptor r7) throws android.os.RemoteException;
}
