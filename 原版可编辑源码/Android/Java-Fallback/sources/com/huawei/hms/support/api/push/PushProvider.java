package com.huawei.hms.support.api.push;

public class PushProvider extends android.content.ContentProvider {
    public PushProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r2) {
            r1 = this;
            if (r2 == 0) goto L11
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = ".xml"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L11
            java.lang.String r2 = "xml"
            return r2
        L11:
            r2 = 0
            return r2
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.os.ParcelFileDescriptor openFile(android.net.Uri r6, java.lang.String r7) throws java.io.FileNotFoundException {
            r5 = this;
            java.lang.String r7 = "PushProvider"
            java.lang.String r0 = "use sdk PushProvider openFile"
            com.huawei.hms.support.log.HMSLog.i(r7, r0)
            java.lang.String r0 = r5.getType(r6)
            java.lang.String r1 = "xml"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lc8
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 24
            r1 = 268435456(0x10000000, float:2.524355E-29)
            java.lang.String r2 = "/shared_prefs/push_notify_flag.xml"
            if (r7 < r0) goto L75
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r3 = r5.getContext()
            java.lang.Object r3 = java.util.Objects.requireNonNull(r3)
            android.content.Context r3 = (android.content.Context) r3
            android.content.Context r3 = r3.createDeviceProtectedStorageContext()
            java.io.File r3 = r3.getDataDir()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            boolean r0 = r7.exists()
            if (r0 == 0) goto L4e
            android.os.ParcelFileDescriptor r6 = android.os.ParcelFileDescriptor.open(r7, r1)
            return r6
        L4e:
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r3 = r5.getContext()
            java.io.File r3 = r3.getDataDir()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            boolean r0 = r7.exists()
            if (r0 == 0) goto Lbe
            android.os.ParcelFileDescriptor r6 = android.os.ParcelFileDescriptor.open(r7, r1)
            return r6
        L75:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            android.content.Context r0 = r5.getContext()
            java.io.File r0 = r0.getFilesDir()
            r7.append(r0)
            java.lang.String r0 = ""
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto Lbe
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = r7.length()
            int r3 = r3 + (-6)
            r4 = 0
            java.lang.String r7 = r7.substring(r4, r3)
            r0.append(r7)
            r0.append(r2)
            java.lang.String r7 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            boolean r7 = r0.exists()
            if (r7 == 0) goto Lbe
            android.os.ParcelFileDescriptor r6 = android.os.ParcelFileDescriptor.open(r0, r1)
            return r6
        Lbe:
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException
            java.lang.String r6 = r6.getPath()
            r7.<init>(r6)
            throw r7
        Lc8:
            java.lang.String r0 = "Incorrect file uri"
            com.huawei.hms.support.log.HMSLog.w(r7, r0)
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException
            java.lang.String r6 = r6.getPath()
            r7.<init>(r6)
            throw r7
    }

    @Override
    public android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
