package com.android.vending.expansion.zipfile;

public abstract class APEZProvider extends android.content.ContentProvider {
    public static final java.lang.String[] ALL_FIELDS = null;
    public static final int[] ALL_FIELDS_INT = null;
    public static final int COMPLEN_IDX = 5;
    public static final java.lang.String COMPRESSEDLEN = "ZCOL";
    public static final java.lang.String COMPRESSIONTYPE = "ZTYP";
    public static final int COMPTYPE_IDX = 7;
    public static final java.lang.String CRC32 = "ZCRC";
    public static final int CRC_IDX = 4;
    public static final java.lang.String FILEID = "_id";
    public static final int FILEID_IDX = 0;
    public static final java.lang.String FILENAME = "ZPFN";
    public static final int FILENAME_IDX = 1;
    public static final java.lang.String MODIFICATION = "ZMOD";
    public static final int MOD_IDX = 3;
    private static final java.lang.String NO_FILE = "N";
    public static final int UNCOMPLEN_IDX = 6;
    public static final java.lang.String UNCOMPRESSEDLEN = "ZUNL";
    public static final java.lang.String ZIPFILE = "ZFIL";
    public static final int ZIPFILE_IDX = 2;
    private com.android.vending.expansion.zipfile.ZipResourceFile mAPKExtensionFile;
    private boolean mInit;

    static {
            java.lang.String r0 = "_id"
            java.lang.String r1 = "ZPFN"
            java.lang.String r2 = "ZFIL"
            java.lang.String r3 = "ZMOD"
            java.lang.String r4 = "ZCRC"
            java.lang.String r5 = "ZCOL"
            java.lang.String r6 = "ZUNL"
            java.lang.String r7 = "ZTYP"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7}
            com.android.vending.expansion.zipfile.APEZProvider.ALL_FIELDS = r0
            r0 = 8
            int[] r0 = new int[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [0, 1, 2, 3, 4, 5, 6, 7} // fill-array
            com.android.vending.expansion.zipfile.APEZProvider.ALL_FIELDS_INT = r0
            return
    }

    public APEZProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean initIfNecessary() {
            r10 = this;
            boolean r0 = r10.mInit
            r1 = 0
            if (r0 != 0) goto L79
            android.content.Context r0 = r10.getContext()
            android.content.pm.PackageManager r2 = r0.getPackageManager()
            java.lang.String r3 = r10.getAuthority()
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ProviderInfo r3 = r2.resolveContentProvider(r3, r4)
            java.lang.String r4 = r0.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L75
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r4, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L75
            int r2 = r2.versionCode
            r4 = 0
            android.os.Bundle r5 = r3.metaData
            r6 = 1
            if (r5 == 0) goto L5d
            android.os.Bundle r5 = r3.metaData
            java.lang.String r7 = "mainVersion"
            int r5 = r5.getInt(r7, r2)
            android.os.Bundle r7 = r3.metaData
            java.lang.String r8 = "patchVersion"
            int r2 = r7.getInt(r8, r2)
            android.os.Bundle r7 = r3.metaData
            java.lang.String r8 = "N"
            java.lang.String r9 = "mainFilename"
            java.lang.String r7 = r7.getString(r9, r8)
            if (r8 == r7) goto L5a
            android.os.Bundle r3 = r3.metaData
            java.lang.String r4 = "patchFilename"
            java.lang.String r3 = r3.getString(r4, r8)
            if (r8 == r3) goto L55
            r4 = 2
            java.lang.String[] r4 = new java.lang.String[r4]
            r4[r1] = r7
            r4[r6] = r3
            goto L5a
        L55:
            java.lang.String[] r3 = new java.lang.String[r6]
            r3[r1] = r7
            r4 = r3
        L5a:
            r3 = r2
            r2 = r5
            goto L5e
        L5d:
            r3 = r2
        L5e:
            if (r4 != 0) goto L67
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = com.android.vending.expansion.zipfile.APKExpansionSupport.getAPKExpansionZipFile(r0, r2, r3)     // Catch: java.io.IOException -> L70
            r10.mAPKExtensionFile = r0     // Catch: java.io.IOException -> L70
            goto L6d
        L67:
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = com.android.vending.expansion.zipfile.APKExpansionSupport.getResourceZipFile(r4)     // Catch: java.io.IOException -> L70
            r10.mAPKExtensionFile = r0     // Catch: java.io.IOException -> L70
        L6d:
            r10.mInit = r6     // Catch: java.io.IOException -> L70
            return r6
        L70:
            r0 = move-exception
            r0.printStackTrace()
            goto L79
        L75:
            r0 = move-exception
            r0.printStackTrace()
        L79:
            return r1
    }

    @Override
    public android.content.ContentProviderResult[] applyBatch(java.util.ArrayList<android.content.ContentProviderOperation> r1) throws android.content.OperationApplicationException {
            r0 = this;
            r0.initIfNecessary()
            android.content.ContentProviderResult[] r1 = super.applyBatch(r1)
            return r1
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    public abstract java.lang.String getAuthority();

    @Override
    public java.lang.String getType(android.net.Uri r1) {
            r0 = this;
            java.lang.String r1 = "vnd.android.cursor.item/asset"
            return r1
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
            r0 = 1
            return r0
    }

    @Override
    public android.content.res.AssetFileDescriptor openAssetFile(android.net.Uri r1, java.lang.String r2) throws java.io.FileNotFoundException {
            r0 = this;
            r0.initIfNecessary()
            java.lang.String r1 = r1.getEncodedPath()
            java.lang.String r2 = "/"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L14
            r2 = 1
            java.lang.String r1 = r1.substring(r2)
        L14:
            com.android.vending.expansion.zipfile.ZipResourceFile r2 = r0.mAPKExtensionFile
            android.content.res.AssetFileDescriptor r1 = r2.getAssetFileDescriptor(r1)
            return r1
    }

    @Override
    public android.os.ParcelFileDescriptor openFile(android.net.Uri r1, java.lang.String r2) throws java.io.FileNotFoundException {
            r0 = this;
            r0.initIfNecessary()
            android.content.res.AssetFileDescriptor r1 = r0.openAssetFile(r1, r2)
            if (r1 == 0) goto Le
            android.os.ParcelFileDescriptor r1 = r1.getParcelFileDescriptor()
            return r1
        Le:
            r1 = 0
            return r1
    }

    @Override
    public android.database.Cursor query(android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12) {
            r7 = this;
            r7.initIfNecessary()
            com.android.vending.expansion.zipfile.ZipResourceFile r8 = r7.mAPKExtensionFile
            r10 = 0
            if (r8 != 0) goto Lb
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r8 = new com.android.vending.expansion.zipfile.ZipResourceFile.ZipEntryRO[r10]
            goto Lf
        Lb:
            com.android.vending.expansion.zipfile.ZipResourceFile$ZipEntryRO[] r8 = r8.getAllEntries()
        Lf:
            if (r9 != 0) goto L19
            int[] r9 = com.android.vending.expansion.zipfile.APEZProvider.ALL_FIELDS_INT
            java.lang.String[] r11 = com.android.vending.expansion.zipfile.APEZProvider.ALL_FIELDS
            r12 = r9
            r9 = r11
            goto L96
        L19:
            int r11 = r9.length
            int[] r12 = new int[r11]
            r0 = 0
        L1d:
            if (r0 >= r11) goto L96
            r1 = r9[r0]
            java.lang.String r2 = "_id"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L2c
            r12[r0] = r10
            goto L8d
        L2c:
            r1 = r9[r0]
            java.lang.String r2 = "ZPFN"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3a
            r1 = 1
            r12[r0] = r1
            goto L8d
        L3a:
            r1 = r9[r0]
            java.lang.String r2 = "ZFIL"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L48
            r1 = 2
            r12[r0] = r1
            goto L8d
        L48:
            r1 = r9[r0]
            java.lang.String r2 = "ZMOD"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L56
            r1 = 3
            r12[r0] = r1
            goto L8d
        L56:
            r1 = r9[r0]
            java.lang.String r2 = "ZCRC"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L64
            r1 = 4
            r12[r0] = r1
            goto L8d
        L64:
            r1 = r9[r0]
            java.lang.String r2 = "ZCOL"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L72
            r1 = 5
            r12[r0] = r1
            goto L8d
        L72:
            r1 = r9[r0]
            java.lang.String r2 = "ZUNL"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L80
            r1 = 6
            r12[r0] = r1
            goto L8d
        L80:
            r1 = r9[r0]
            java.lang.String r2 = "ZTYP"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L90
            r1 = 7
            r12[r0] = r1
        L8d:
            int r0 = r0 + 1
            goto L1d
        L90:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>()
            throw r8
        L96:
            android.database.MatrixCursor r11 = new android.database.MatrixCursor
            int r0 = r8.length
            r11.<init>(r9, r0)
            int r9 = r12.length
            int r0 = r8.length
            r1 = 0
        L9f:
            if (r1 >= r0) goto Lfd
            r2 = r8[r1]
            android.database.MatrixCursor$RowBuilder r3 = r11.newRow()
            r4 = 0
        La8:
            if (r4 >= r9) goto Lfa
            r5 = r12[r4]
            switch(r5) {
                case 0: goto Lf0;
                case 1: goto Lea;
                case 2: goto Le2;
                case 3: goto Ld8;
                case 4: goto Lce;
                case 5: goto Lc4;
                case 6: goto Lba;
                case 7: goto Lb0;
                default: goto Laf;
            }
        Laf:
            goto Lf7
        Lb0:
            int r5 = r2.mMethod
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3.add(r5)
            goto Lf7
        Lba:
            long r5 = r2.mUncompressedLength
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r3.add(r5)
            goto Lf7
        Lc4:
            long r5 = r2.mCompressedLength
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r3.add(r5)
            goto Lf7
        Lce:
            long r5 = r2.mCRC32
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r3.add(r5)
            goto Lf7
        Ld8:
            long r5 = r2.mWhenModified
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r3.add(r5)
            goto Lf7
        Le2:
            java.lang.String r5 = r2.getZipFileName()
            r3.add(r5)
            goto Lf7
        Lea:
            java.lang.String r5 = r2.mFileName
            r3.add(r5)
            goto Lf7
        Lf0:
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            r3.add(r5)
        Lf7:
            int r4 = r4 + 1
            goto La8
        Lfa:
            int r1 = r1 + 1
            goto L9f
        Lfd:
            return r11
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
