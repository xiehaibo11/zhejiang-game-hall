package com.android.vending.expansion.zipfile;

import android.content.ContentProvider;
import android.content.ContentProviderOperation;
import android.content.ContentProviderResult;
import android.content.ContentValues;
import android.content.Context;
import android.content.OperationApplicationException;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.res.AssetFileDescriptor;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import com.android.vending.expansion.zipfile.ZipResourceFile;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;

public abstract class APEZProvider extends ContentProvider {
    public static final String[] ALL_FIELDS = null;
    public static final int[] ALL_FIELDS_INT = null;
    public static final int COMPLEN_IDX = 5;
    public static final String COMPRESSEDLEN = "ZCOL";
    public static final String COMPRESSIONTYPE = "ZTYP";
    public static final int COMPTYPE_IDX = 7;
    public static final String CRC32 = "ZCRC";
    public static final int CRC_IDX = 4;
    public static final String FILEID = "_id";
    public static final int FILEID_IDX = 0;
    public static final String FILENAME = "ZPFN";
    public static final int FILENAME_IDX = 1;
    public static final String MODIFICATION = "ZMOD";
    public static final int MOD_IDX = 3;
    private static final String NO_FILE = "N";
    public static final int UNCOMPLEN_IDX = 6;
    public static final String UNCOMPRESSEDLEN = "ZUNL";
    public static final String ZIPFILE = "ZFIL";
    public static final int ZIPFILE_IDX = 2;
    private ZipResourceFile mAPKExtensionFile;
    private boolean mInit;

    @Override
    public int delete(Uri r1, String r2, String[] r3) {
        return 0;
    }

    public abstract String getAuthority();

    @Override
    public String getType(Uri r1) {
        return "vnd.android.cursor.item/asset";
    }

    @Override
    public Uri insert(Uri r1, ContentValues r2) {
        return null;
    }

    @Override
    public boolean onCreate() {
        return true;
    }

    @Override
    public int update(Uri r1, ContentValues r2, String r3, String[] r4) {
        return 0;
    }

    public APEZProvider() {
    }

    static {
        ALL_FIELDS = new String[]{FILEID, FILENAME, ZIPFILE, MODIFICATION, CRC32, COMPRESSEDLEN, UNCOMPRESSEDLEN, COMPRESSIONTYPE};
        ALL_FIELDS_INT = new int[]{0, 1, 2, 3, 4, 5, 6, 7};
    }

    private boolean initIfNecessary() {
        if (this.mInit == true) goto L25;
        Context r0 = getContext();
        PackageManager r2 = r0.getPackageManager();
        ProviderInfo r3 = r2.resolveContentProvider(getAuthority(), 128);
        int r22 = r2.getPackageInfo(r0.getPackageName(), 0).versionCode;
        String[] r4 = null;
        if (r3.metaData == null) goto L15;
        int r5 = r3.metaData.getInt("mainVersion", r22);
        int r23 = r3.metaData.getInt("patchVersion", r22);
        String r7 = r3.metaData.getString("mainFilename", NO_FILE);
        if (NO_FILE == r7) goto L14;
        String r32 = r3.metaData.getString("patchFilename", NO_FILE);
        if (NO_FILE == r32) goto L13;
        r4 = new String[]{r7, r32};
        goto L14
    L13:
        r4 = new String[]{r7};
    L14:
        int r33 = r23;
        r22 = r5;
    L28:
        if (r4 != null) goto L18;
        this.mAPKExtensionFile = APKExpansionSupport.getAPKExpansionZipFile(r0, r22, r33);     // Catch: IOException -> L21
    L19:
        this.mInit = true;     // Catch: IOException -> L21
        return true;
    L18:
        this.mAPKExtensionFile = APKExpansionSupport.getResourceZipFile(r4);     // Catch: IOException -> L21
    L21:
        e = move-exception;
        e.printStackTrace();
        goto L25
    L15:
        r33 = r22;
    L23:
        e = move-exception;
        e.printStackTrace();
    L25:
        return false;
    }

    @Override
    public AssetFileDescriptor openAssetFile(Uri r1, String r2) throws FileNotFoundException {
        initIfNecessary();
        String r12 = r1.getEncodedPath();
        if (r12.startsWith("/") == false) goto L6;
        r12 = r12.substring(1);
    L6:
        return this.mAPKExtensionFile.getAssetFileDescriptor(r12);
    }

    @Override
    public ContentProviderResult[] applyBatch(ArrayList<ContentProviderOperation> r1) throws OperationApplicationException {
        initIfNecessary();
        return super.applyBatch(r1);
    }

    @Override
    public ParcelFileDescriptor openFile(Uri r1, String r2) throws FileNotFoundException {
        initIfNecessary();
        AssetFileDescriptor r12 = openAssetFile(r1, r2);
        if (r12 != null) goto L5;
        return null;
    L5:
        return r12.getParcelFileDescriptor();
    }

    @Override
    public Cursor query(Uri r8, String[] r9, String r10, String[] r11, String r12) {
        initIfNecessary();
        ZipResourceFile r82 = this.mAPKExtensionFile;
        if (r82 != null) goto L5;
        ZipResourceFile.ZipEntryRO[] r83 = new ZipResourceFile.ZipEntryRO[0];
    L6:
        if (r9 != null) goto L8;
        int[] r92 = ALL_FIELDS_INT;
        int[] r122 = r92;
        r9 = ALL_FIELDS;
    L37:
        MatrixCursor r112 = new MatrixCursor(r9, r83.length);
        int r93 = r122.length;
        int r0 = r83.length;
        int r1 = 0;
    L38:
        if (r1 >= r0) goto L54;
        ZipResourceFile.ZipEntryRO r2 = r83[r1];
        MatrixCursor.RowBuilder r3 = r112.newRow();
        int r4 = 0;
    L40:
        if (r4 >= r93) goto L53;
        switch(r122[r4]) {
            case 0: goto L51;
            case 1: goto L50;
            case 2: goto L49;
            case 3: goto L48;
            case 4: goto L47;
            case 5: goto L46;
            case 6: goto L45;
            case 7: goto L44;
            default: goto L52;
        };
    L44:
        r3.add(Integer.valueOf(r2.mMethod));
        goto L52
    L45:
        r3.add(Long.valueOf(r2.mUncompressedLength));
        goto L52
    L46:
        r3.add(Long.valueOf(r2.mCompressedLength));
        goto L52
    L47:
        r3.add(Long.valueOf(r2.mCRC32));
        goto L52
    L48:
        r3.add(Long.valueOf(r2.mWhenModified));
        goto L52
    L49:
        r3.add(r2.getZipFileName());
        goto L52
    L50:
        r3.add(r2.mFileName);
        goto L52
    L51:
        r3.add(Integer.valueOf(r4));
    L52:
        r4 = r4 + 1;
        goto L40
    L53:
        r1 = r1 + 1;
        goto L38
    L54:
        return r112;
    L8:
        int r113 = r9.length;
        r122 = new int[r113];
        int r02 = 0;
    L9:
        if (r02 >= r113) goto L37;
        if (r9[r02].equals(FILEID) == false) goto L14;
        r122[r02] = 0;
    L34:
        r02 = r02 + 1;
        goto L9
    L14:
        if (r9[r02].equals(FILENAME) == false) goto L17;
        r122[r02] = 1;
        goto L34
    L17:
        if (r9[r02].equals(ZIPFILE) == false) goto L20;
        r122[r02] = 2;
        goto L34
    L20:
        if (r9[r02].equals(MODIFICATION) == false) goto L23;
        r122[r02] = 3;
        goto L34
    L23:
        if (r9[r02].equals(CRC32) == false) goto L26;
        r122[r02] = 4;
        goto L34
    L26:
        if (r9[r02].equals(COMPRESSEDLEN) == false) goto L29;
        r122[r02] = 5;
        goto L34
    L29:
        if (r9[r02].equals(UNCOMPRESSEDLEN) == false) goto L32;
        r122[r02] = 6;
        goto L34
    L32:
        if (r9[r02].equals(COMPRESSIONTYPE) == false) goto L36;
        r122[r02] = 7;
        goto L34
    L36:
        throw new RuntimeException();
    L5:
        r83 = r82.getAllEntries();
        goto L6
    }
}
