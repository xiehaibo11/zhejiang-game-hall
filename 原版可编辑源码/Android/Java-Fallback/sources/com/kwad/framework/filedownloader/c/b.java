package com.kwad.framework.filedownloader.c;

public interface b extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.kwad.framework.filedownloader.c.b {

        static class a implements com.kwad.framework.filedownloader.c.b {
            public static com.kwad.framework.filedownloader.c.b adG;
            private android.os.IBinder mRemote;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public final void a(com.kwad.framework.filedownloader.c.a r5) {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L33
                    r1 = 0
                    if (r5 == 0) goto L11
                    android.os.IBinder r2 = r5.asBinder()     // Catch: java.lang.Throwable -> L33
                    goto L12
                L11:
                    r2 = r1
                L12:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L33
                    android.os.IBinder r2 = r4.mRemote     // Catch: java.lang.Throwable -> L33
                    r3 = 1
                    boolean r1 = r2.transact(r3, r0, r1, r3)     // Catch: java.lang.Throwable -> L33
                    if (r1 != 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L33
                    if (r1 == 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L33
                    r1.a(r5)     // Catch: java.lang.Throwable -> L33
                    r0.recycle()
                    return
                L2f:
                    r0.recycle()
                    return
                L33:
                    r5 = move-exception
                    r0.recycle()
                    throw r5
            }

            @Override
            public final boolean aY(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L40
                    boolean r6 = r2.aY(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L39
                    r4 = 1
                L39:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final byte aZ(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    byte r6 = r2.aZ(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    byte r6 = r1.readByte()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public final void b(com.kwad.framework.filedownloader.c.a r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L34
                    r1 = 0
                    if (r6 == 0) goto L11
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L34
                    goto L12
                L11:
                    r2 = r1
                L12:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L34
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L34
                    r3 = 2
                    r4 = 1
                    boolean r1 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L34
                    if (r1 != 0) goto L30
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L34
                    if (r1 == 0) goto L30
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L34
                    r1.b(r6)     // Catch: java.lang.Throwable -> L34
                    r0.recycle()
                    return
                L30:
                    r0.recycle()
                    return
                L34:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void b(java.lang.String r15, java.lang.String r16, boolean r17, int r18, int r19, int r20, boolean r21, com.kwad.framework.filedownloader.d.b r22, boolean r23) {
                    r14 = this;
                    r0 = r22
                    android.os.Parcel r11 = android.os.Parcel.obtain()
                    android.os.Parcel r12 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r11.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L81
                    r2 = r15
                    r11.writeString(r15)     // Catch: java.lang.Throwable -> L81
                    r3 = r16
                    r11.writeString(r3)     // Catch: java.lang.Throwable -> L81
                    r1 = 1
                    r4 = 0
                    if (r17 == 0) goto L1e
                    r5 = r1
                    goto L1f
                L1e:
                    r5 = r4
                L1f:
                    r11.writeInt(r5)     // Catch: java.lang.Throwable -> L81
                    r5 = r18
                    r11.writeInt(r5)     // Catch: java.lang.Throwable -> L81
                    r6 = r19
                    r11.writeInt(r6)     // Catch: java.lang.Throwable -> L81
                    r7 = r20
                    r11.writeInt(r7)     // Catch: java.lang.Throwable -> L81
                    if (r21 == 0) goto L35
                    r8 = r1
                    goto L36
                L35:
                    r8 = r4
                L36:
                    r11.writeInt(r8)     // Catch: java.lang.Throwable -> L81
                    if (r0 == 0) goto L42
                    r11.writeInt(r1)     // Catch: java.lang.Throwable -> L81
                    r0.writeToParcel(r11, r4)     // Catch: java.lang.Throwable -> L81
                    goto L45
                L42:
                    r11.writeInt(r4)     // Catch: java.lang.Throwable -> L81
                L45:
                    if (r23 == 0) goto L48
                    goto L49
                L48:
                    r1 = r4
                L49:
                    r11.writeInt(r1)     // Catch: java.lang.Throwable -> L81
                    r13 = r14
                    android.os.IBinder r1 = r13.mRemote     // Catch: java.lang.Throwable -> L7f
                    r8 = 4
                    boolean r1 = r1.transact(r8, r11, r12, r4)     // Catch: java.lang.Throwable -> L7f
                    if (r1 != 0) goto L7b
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L7f
                    if (r1 == 0) goto L7b
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L7f
                    r2 = r15
                    r3 = r16
                    r4 = r17
                    r5 = r18
                    r6 = r19
                    r7 = r20
                    r8 = r21
                    r9 = r22
                    r10 = r23
                    r1.b(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L7f
                L74:
                    r12.recycle()
                    r11.recycle()
                    return
                L7b:
                    r12.readException()     // Catch: java.lang.Throwable -> L7f
                    goto L74
                L7f:
                    r0 = move-exception
                    goto L83
                L81:
                    r0 = move-exception
                    r13 = r14
                L83:
                    r12.recycle()
                    r11.recycle()
                    throw r0
            }

            @Override
            public final boolean ba(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 14
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.ba(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final boolean bs(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L2f
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L40
                    boolean r6 = r2.bs(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L39
                    r4 = 1
                L39:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final long bt(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 8
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r2.bt(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r1.readLong()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final long bu(int r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r2.bu(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r1.readLong()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final boolean isIdle() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 11
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r2.isIdle()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L37
                    r4 = 1
                L37:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public final boolean n(java.lang.String r6, java.lang.String r7) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L32
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L32
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L43
                    boolean r6 = r2.n(r6, r7)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L43
                    if (r6 == 0) goto L3c
                    r4 = 1
                L3c:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L43:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void pauseAllTasks() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L2f
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L2f
                    if (r2 != 0) goto L2b
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L2f
                    if (r2 == 0) goto L2b
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L2f
                    r2.pauseAllTasks()     // Catch: java.lang.Throwable -> L2f
                L24:
                    r1.recycle()
                    r0.recycle()
                    return
                L2b:
                    r1.readException()     // Catch: java.lang.Throwable -> L2f
                    goto L24
                L2f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public final void startForeground(int r6, android.app.Notification r7) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L3a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3a
                    r1 = 1
                    r2 = 0
                    if (r7 == 0) goto L17
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L3a
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L3a
                    goto L1a
                L17:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L3a
                L1a:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 12
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L3a
                    if (r1 != 0) goto L36
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3a
                    if (r1 == 0) goto L36
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L3a
                    r1.startForeground(r6, r7)     // Catch: java.lang.Throwable -> L3a
                    r0.recycle()
                    return
                L36:
                    r0.recycle()
                    return
                L3a:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void stopForeground(boolean r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L32
                    r1 = 1
                    if (r6 == 0) goto Le
                    r2 = r1
                    goto Lf
                Le:
                    r2 = 0
                Lf:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L32
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L32
                    r3 = 13
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L32
                    if (r1 != 0) goto L2e
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L32
                    if (r1 == 0) goto L2e
                    com.kwad.framework.filedownloader.c.b r1 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L32
                    r1.stopForeground(r6)     // Catch: java.lang.Throwable -> L32
                    r0.recycle()
                    return
                L2e:
                    r0.recycle()
                    return
                L32:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void uW() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L30
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L30
                    r3 = 15
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L30
                    if (r2 != 0) goto L2c
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L30
                    if (r2 == 0) goto L2c
                    com.kwad.framework.filedownloader.c.b r2 = com.kwad.framework.filedownloader.c.b.a.uX()     // Catch: java.lang.Throwable -> L30
                    r2.uW()     // Catch: java.lang.Throwable -> L30
                L25:
                    r1.recycle()
                    r0.recycle()
                    return
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L30
                    goto L25
                L30:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.kwad.framework.filedownloader.c.b a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.kwad.framework.filedownloader.c.b
                if (r1 == 0) goto L13
                com.kwad.framework.filedownloader.c.b r0 = (com.kwad.framework.filedownloader.c.b) r0
                return r0
            L13:
                com.kwad.framework.filedownloader.c.b$a$a r0 = new com.kwad.framework.filedownloader.c.b$a$a
                r0.<init>(r2)
                return r0
        }

        public static com.kwad.framework.filedownloader.c.b uX() {
                com.kwad.framework.filedownloader.c.b r0 = com.kwad.framework.filedownloader.c.b.a.a.adG
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r17, android.os.Parcel r18, android.os.Parcel r19, int r20) {
                r16 = this;
                r10 = r16
                r0 = r17
                r1 = r18
                r11 = r19
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r12 = 1
                java.lang.String r3 = "com.kwad.framework.filedownloader.i.IFileDownloadIPCService"
                if (r0 == r2) goto L159
                r2 = 0
                r4 = 0
                switch(r0) {
                    case 1: goto L14a;
                    case 2: goto L13b;
                    case 3: goto L125;
                    case 4: goto Ld0;
                    case 5: goto Lbe;
                    case 6: goto Lb4;
                    case 7: goto La2;
                    case 8: goto L90;
                    case 9: goto L7e;
                    case 10: goto L6c;
                    case 11: goto L5e;
                    case 12: goto L44;
                    case 13: goto L36;
                    case 14: goto L24;
                    case 15: goto L1a;
                    default: goto L15;
                }
            L15:
                boolean r0 = super.onTransact(r17, r18, r19, r20)
                return r0
            L1a:
                r1.enforceInterface(r3)
                r16.uW()
                r19.writeNoException()
                return r12
            L24:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                boolean r0 = r10.ba(r0)
                r19.writeNoException()
                r11.writeInt(r0)
                return r12
            L36:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                if (r0 == 0) goto L40
                r4 = r12
            L40:
                r10.stopForeground(r4)
                return r12
            L44:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                int r3 = r18.readInt()
                if (r3 == 0) goto L5a
                android.os.Parcelable$Creator r2 = android.app.Notification.CREATOR
                java.lang.Object r1 = r2.createFromParcel(r1)
                r2 = r1
                android.app.Notification r2 = (android.app.Notification) r2
            L5a:
                r10.startForeground(r0, r2)
                return r12
            L5e:
                r1.enforceInterface(r3)
                boolean r0 = r16.isIdle()
                r19.writeNoException()
                r11.writeInt(r0)
                return r12
            L6c:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                byte r0 = r10.aZ(r0)
                r19.writeNoException()
                r11.writeByte(r0)
                return r12
            L7e:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                long r0 = r10.bu(r0)
                r19.writeNoException()
                r11.writeLong(r0)
                return r12
            L90:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                long r0 = r10.bt(r0)
                r19.writeNoException()
                r11.writeLong(r0)
                return r12
            La2:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                boolean r0 = r10.bs(r0)
                r19.writeNoException()
                r11.writeInt(r0)
                return r12
            Lb4:
                r1.enforceInterface(r3)
                r16.pauseAllTasks()
                r19.writeNoException()
                return r12
            Lbe:
                r1.enforceInterface(r3)
                int r0 = r18.readInt()
                boolean r0 = r10.aY(r0)
                r19.writeNoException()
                r11.writeInt(r0)
                return r12
            Ld0:
                r1.enforceInterface(r3)
                java.lang.String r3 = r18.readString()
                java.lang.String r5 = r18.readString()
                int r0 = r18.readInt()
                if (r0 == 0) goto Le3
                r6 = r12
                goto Le4
            Le3:
                r6 = r4
            Le4:
                int r7 = r18.readInt()
                int r8 = r18.readInt()
                int r9 = r18.readInt()
                int r0 = r18.readInt()
                if (r0 == 0) goto Lf8
                r13 = r12
                goto Lf9
            Lf8:
                r13 = r4
            Lf9:
                int r0 = r18.readInt()
                if (r0 == 0) goto L109
                android.os.Parcelable$Creator<com.kwad.framework.filedownloader.d.b> r0 = com.kwad.framework.filedownloader.d.b.CREATOR
                java.lang.Object r0 = r0.createFromParcel(r1)
                com.kwad.framework.filedownloader.d.b r0 = (com.kwad.framework.filedownloader.d.b) r0
                r14 = r0
                goto L10a
            L109:
                r14 = r2
            L10a:
                int r0 = r18.readInt()
                if (r0 == 0) goto L112
                r15 = r12
                goto L113
            L112:
                r15 = r4
            L113:
                r0 = r16
                r1 = r3
                r2 = r5
                r3 = r6
                r4 = r7
                r5 = r8
                r6 = r9
                r7 = r13
                r8 = r14
                r9 = r15
                r0.b(r1, r2, r3, r4, r5, r6, r7, r8, r9)
                r19.writeNoException()
                return r12
            L125:
                r1.enforceInterface(r3)
                java.lang.String r0 = r18.readString()
                java.lang.String r1 = r18.readString()
                boolean r0 = r10.n(r0, r1)
                r19.writeNoException()
                r11.writeInt(r0)
                return r12
            L13b:
                r1.enforceInterface(r3)
                android.os.IBinder r0 = r18.readStrongBinder()
                com.kwad.framework.filedownloader.c.a r0 = com.kwad.framework.filedownloader.c.a.a.c(r0)
                r10.b(r0)
                return r12
            L14a:
                r1.enforceInterface(r3)
                android.os.IBinder r0 = r18.readStrongBinder()
                com.kwad.framework.filedownloader.c.a r0 = com.kwad.framework.filedownloader.c.a.a.c(r0)
                r10.a(r0)
                return r12
            L159:
                r11.writeString(r3)
                return r12
        }
    }

    void a(com.kwad.framework.filedownloader.c.a r1);

    boolean aY(int r1);

    byte aZ(int r1);

    void b(com.kwad.framework.filedownloader.c.a r1);

    void b(java.lang.String r1, java.lang.String r2, boolean r3, int r4, int r5, int r6, boolean r7, com.kwad.framework.filedownloader.d.b r8, boolean r9);

    boolean ba(int r1);

    boolean bs(int r1);

    long bt(int r1);

    long bu(int r1);

    boolean isIdle();

    boolean n(java.lang.String r1, java.lang.String r2);

    void pauseAllTasks();

    void startForeground(int r1, android.app.Notification r2);

    void stopForeground(boolean r1);

    void uW();
}
