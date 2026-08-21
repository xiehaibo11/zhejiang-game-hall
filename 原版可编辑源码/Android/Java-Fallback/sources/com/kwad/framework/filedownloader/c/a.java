package com.kwad.framework.filedownloader.c;

public interface a extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.kwad.framework.filedownloader.c.a {

        static class a implements com.kwad.framework.filedownloader.c.a {
            public static com.kwad.framework.filedownloader.c.a adF;
            private android.os.IBinder mRemote;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public final void q(com.kwad.framework.filedownloader.message.MessageSnapshot r5) {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L35
                    r1 = 0
                    r2 = 1
                    if (r5 == 0) goto L14
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L35
                    r5.writeToParcel(r0, r1)     // Catch: java.lang.Throwable -> L35
                    goto L17
                L14:
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L35
                L17:
                    android.os.IBinder r1 = r4.mRemote     // Catch: java.lang.Throwable -> L35
                    r3 = 0
                    boolean r1 = r1.transact(r2, r0, r3, r2)     // Catch: java.lang.Throwable -> L35
                    if (r1 != 0) goto L31
                    com.kwad.framework.filedownloader.c.a r1 = com.kwad.framework.filedownloader.c.a.a.uV()     // Catch: java.lang.Throwable -> L35
                    if (r1 == 0) goto L31
                    com.kwad.framework.filedownloader.c.a r1 = com.kwad.framework.filedownloader.c.a.a.uV()     // Catch: java.lang.Throwable -> L35
                    r1.q(r5)     // Catch: java.lang.Throwable -> L35
                    r0.recycle()
                    return
                L31:
                    r0.recycle()
                    return
                L35:
                    r5 = move-exception
                    r0.recycle()
                    throw r5
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.kwad.framework.filedownloader.c.a c(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.kwad.framework.filedownloader.c.a
                if (r1 == 0) goto L13
                com.kwad.framework.filedownloader.c.a r0 = (com.kwad.framework.filedownloader.c.a) r0
                return r0
            L13:
                com.kwad.framework.filedownloader.c.a$a$a r0 = new com.kwad.framework.filedownloader.c.a$a$a
                r0.<init>(r2)
                return r0
        }

        public static com.kwad.framework.filedownloader.c.a uV() {
                com.kwad.framework.filedownloader.c.a r0 = com.kwad.framework.filedownloader.c.a.a.a.adF
                return r0
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
                java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCCallback"
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
                android.os.Parcelable$Creator<com.kwad.framework.filedownloader.message.MessageSnapshot> r4 = com.kwad.framework.filedownloader.message.MessageSnapshot.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.kwad.framework.filedownloader.message.MessageSnapshot r4 = (com.kwad.framework.filedownloader.message.MessageSnapshot) r4
                goto L26
            L25:
                r4 = 0
            L26:
                r3.q(r4)
                return r0
        }
    }

    void q(com.kwad.framework.filedownloader.message.MessageSnapshot r1);
}
