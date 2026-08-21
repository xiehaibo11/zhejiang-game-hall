package com.qihoo360.loader2.alc;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IActivityWatcher extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.loader2.alc.IActivityWatcher {
        private static final java.lang.String DESCRIPTOR = "android.app.IActivityWatcher";
        static final int TRANSACTION_ACTIVITY_RESUMING = 1;
        static final int TRANSACTION_CLOSING_SYSTEM_DIALOGS = 2;

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "android.app.IActivityWatcher"
                r1.attachInterface(r1, r0)
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                java.lang.String r0 = "android.app.IActivityWatcher"
                r1 = 1
                if (r4 == r1) goto L21
                r2 = 2
                if (r4 == r2) goto L16
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L12
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L12:
                r6.writeString(r0)
                return r1
            L16:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                r3.closingSystemDialogs(r4)
                return r1
            L21:
                r5.enforceInterface(r0)
                int r4 = r5.readInt()
                r3.activityResuming(r4)
                return r1
        }
    }

    void activityResuming(int r1) throws android.os.RemoteException;

    void closingSystemDialogs(java.lang.String r1) throws android.os.RemoteException;
}
