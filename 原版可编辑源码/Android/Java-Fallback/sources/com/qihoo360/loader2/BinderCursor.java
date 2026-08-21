package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class BinderCursor extends android.database.MatrixCursor {
    static final java.lang.String BINDER_KEY = "binder";
    android.os.Bundle mBinderExtra;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class BinderParcelable implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.qihoo360.loader2.BinderCursor.BinderParcelable> CREATOR = null;
        android.os.IBinder mBinder;


        static {
                com.qihoo360.loader2.BinderCursor$BinderParcelable$1 r0 = new com.qihoo360.loader2.BinderCursor$BinderParcelable$1
                r0.<init>()
                com.qihoo360.loader2.BinderCursor.BinderParcelable.CREATOR = r0
                return
        }

        BinderParcelable() {
                r0 = this;
                r0.<init>()
                return
        }

        BinderParcelable(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.mBinder = r1
                return
        }

        BinderParcelable(android.os.Parcel r1) {
                r0 = this;
                r0.<init>()
                android.os.IBinder r1 = r1.readStrongBinder()
                r0.mBinder = r1
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                android.os.IBinder r2 = r0.mBinder
                r1.writeStrongBinder(r2)
                return
        }
    }

    public BinderCursor(java.lang.String[] r2, android.os.IBinder r3) {
            r1 = this;
            r1.<init>(r2)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            r1.mBinderExtra = r2
            if (r3 == 0) goto L18
            com.qihoo360.loader2.BinderCursor$BinderParcelable r2 = new com.qihoo360.loader2.BinderCursor$BinderParcelable
            r2.<init>(r3)
            android.os.Bundle r3 = r1.mBinderExtra
            java.lang.String r0 = "binder"
            r3.putParcelable(r0, r2)
        L18:
            return
    }

    public static final android.os.IBinder getBinder(android.database.Cursor r2) {
            android.os.Bundle r2 = r2.getExtras()
            java.lang.Class<com.qihoo360.loader2.BinderCursor> r0 = com.qihoo360.loader2.BinderCursor.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r2.setClassLoader(r0)
            java.lang.String r0 = "binder"
            android.os.Parcelable r2 = r2.getParcelable(r0)
            com.qihoo360.loader2.BinderCursor$BinderParcelable r2 = (com.qihoo360.loader2.BinderCursor.BinderParcelable) r2
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get binder = "
            r0.append(r1)
            android.os.IBinder r1 = r2.mBinder
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L31:
            android.os.IBinder r2 = r2.mBinder
            return r2
    }

    public static final android.database.Cursor queryBinder(android.os.IBinder r2) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "query binder = "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            com.qihoo360.loader2.BinderCursor r0 = new com.qihoo360.loader2.BinderCursor
            java.lang.String[] r1 = com.qihoo360.replugin.model.PluginInfo.QUERY_COLUMNS
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public android.os.Bundle getExtras() {
            r1 = this;
            android.os.Bundle r0 = r1.mBinderExtra
            return r0
    }
}
