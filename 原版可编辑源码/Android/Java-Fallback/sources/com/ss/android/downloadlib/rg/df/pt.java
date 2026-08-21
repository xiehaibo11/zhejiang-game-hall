package com.ss.android.downloadlib.rg.df;

public interface pt extends android.os.IInterface {

    public static abstract class rg extends android.os.Binder implements com.ss.android.downloadlib.rg.df.pt {
        private static java.lang.String rg = "";

        private static class rg implements com.ss.android.downloadlib.rg.df.pt {
            private android.os.IBinder rg;

            rg(android.os.IBinder r4) {
                    r3 = this;
                    r3.<init>()
                    java.lang.String r0 = com.ss.android.downloadlib.rg.df.pt.rg.rg()
                    boolean r0 = android.text.TextUtils.isEmpty(r0)
                    if (r0 == 0) goto L24
                    org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
                    java.lang.String r1 = "s"
                    java.lang.String r1 = r0.optString(r1)
                    java.lang.String r2 = "t"
                    java.lang.String r0 = r0.optString(r2)
                    java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r0, r1)
                    com.ss.android.downloadlib.rg.df.pt.rg.rg(r0)
                L24:
                    r3.rg = r4
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.rg
                    return r0
            }

            @Override
            public void rg(com.ss.android.downloadlib.rg.df.df r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = com.ss.android.downloadlib.rg.df.pt.rg.rg()     // Catch: java.lang.Throwable -> L2c
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2c
                    r2 = 1
                    r3 = 0
                    if (r5 == 0) goto L1a
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L2c
                    r5.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L2c
                    goto L1d
                L1a:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L2c
                L1d:
                    android.os.IBinder r5 = r4.rg     // Catch: java.lang.Throwable -> L2c
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L2c
                    r1.readException()     // Catch: java.lang.Throwable -> L2c
                    r1.recycle()
                    r0.recycle()
                    return
                L2c:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }
        }

        static {
                return
        }

        public static com.ss.android.downloadlib.rg.df.pt rg(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = com.ss.android.downloadlib.rg.df.pt.rg.rg
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L14
                boolean r1 = r0 instanceof com.ss.android.downloadlib.rg.df.pt
                if (r1 != 0) goto L11
                goto L14
            L11:
                com.ss.android.downloadlib.rg.df.pt r0 = (com.ss.android.downloadlib.rg.df.pt) r0
                return r0
            L14:
                com.ss.android.downloadlib.rg.df.pt$rg$rg r0 = new com.ss.android.downloadlib.rg.df.pt$rg$rg
                r0.<init>(r2)
                return r0
        }

        static java.lang.String rg() {
                java.lang.String r0 = com.ss.android.downloadlib.rg.df.pt.rg.rg
                return r0
        }

        static java.lang.String rg(java.lang.String r0) {
                com.ss.android.downloadlib.rg.df.pt.rg.rg = r0
                return r0
        }

        @Override
        public boolean onTransact(int r3, android.os.Parcel r4, android.os.Parcel r5, int r6) throws android.os.RemoteException {
                r2 = this;
                r0 = 1
                if (r3 != r0) goto L1f
                java.lang.String r3 = com.ss.android.downloadlib.rg.df.pt.rg.rg
                r4.enforceInterface(r3)
                int r3 = r4.readInt()
                if (r3 == 0) goto L17
                android.os.Parcelable$Creator<com.ss.android.downloadlib.rg.df.df> r3 = com.ss.android.downloadlib.rg.df.df.CREATOR
                java.lang.Object r3 = r3.createFromParcel(r4)
                com.ss.android.downloadlib.rg.df.df r3 = (com.ss.android.downloadlib.rg.df.df) r3
                goto L18
            L17:
                r3 = 0
            L18:
                r2.rg(r3)
                r5.writeNoException()
                return r0
            L1f:
                r1 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r3 == r1) goto L29
                boolean r3 = super.onTransact(r3, r4, r5, r6)
                return r3
            L29:
                java.lang.String r3 = com.ss.android.downloadlib.rg.df.pt.rg.rg
                r5.writeString(r3)
                return r0
        }
    }

    void rg(com.ss.android.downloadlib.rg.df.df r1) throws android.os.RemoteException;
}
