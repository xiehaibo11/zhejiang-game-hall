package com.kwad.framework.filedownloader.b;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteFullException;
import android.text.TextUtils;
import android.util.SparseArray;
import com.kwad.framework.filedownloader.b.a;
import com.kwad.framework.filedownloader.f.f;
import com.mbridge.msdk.foundation.download.database.DownloadModel;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements com.kwad.framework.filedownloader.b.a {
    private static boolean abV;
    private SQLiteDatabase abU;

    public class a implements a.InterfaceC0182a {
        private final SparseArray<com.kwad.framework.filedownloader.d.c> abK;
        private final SparseArray<List<com.kwad.framework.filedownloader.d.a>> abL;
        private final SparseArray<com.kwad.framework.filedownloader.d.c> abW;
        private b abX;

        a(d dVar) {
            this(null, null);
        }

        a(SparseArray<com.kwad.framework.filedownloader.d.c> sparseArray, SparseArray<List<com.kwad.framework.filedownloader.d.a>> sparseArray2) {
            this.abW = new SparseArray<>();
            this.abK = sparseArray;
            this.abL = sparseArray2;
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void a(int i, com.kwad.framework.filedownloader.d.c cVar) {
            this.abW.put(i, cVar);
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void c(com.kwad.framework.filedownloader.d.c cVar) {
            SparseArray<com.kwad.framework.filedownloader.d.c> sparseArray = this.abK;
            if (sparseArray != null) {
                synchronized (sparseArray) {
                    this.abK.put(cVar.getId(), cVar);
                }
            }
        }

        @Override // java.lang.Iterable
        public final Iterator<com.kwad.framework.filedownloader.d.c> iterator() {
            b bVar = d.this.new b();
            this.abX = bVar;
            return bVar;
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void ui() {
            b bVar = this.abX;
            if (bVar != null) {
                bVar.ui();
            }
            if (d.this.abU == null) {
                return;
            }
            int size = this.abW.size();
            try {
                if (size < 0) {
                    return;
                }
                try {
                    d.this.abU.beginTransaction();
                    for (int i = 0; i < size; i++) {
                        int iKeyAt = this.abW.keyAt(i);
                        com.kwad.framework.filedownloader.d.c cVar = this.abW.get(iKeyAt);
                        d.this.abU.delete("ksad_file_download", "_id = ?", new String[]{String.valueOf(iKeyAt)});
                        d.this.abU.insert("ksad_file_download", null, cVar.vk());
                        if (cVar.vp() > 1) {
                            List<com.kwad.framework.filedownloader.d.a> listBg = d.this.bg(iKeyAt);
                            if (listBg.size() > 0) {
                                d.this.abU.delete("ksad_file_download_connection", "id = ?", new String[]{String.valueOf(iKeyAt)});
                                for (com.kwad.framework.filedownloader.d.a aVar : listBg) {
                                    aVar.setId(cVar.getId());
                                    d.this.abU.insert("ksad_file_download_connection", null, aVar.vk());
                                }
                            }
                        }
                    }
                    if (this.abK != null && this.abL != null) {
                        synchronized (this.abK) {
                            int size2 = this.abK.size();
                            for (int i2 = 0; i2 < size2; i2++) {
                                int id = this.abK.valueAt(i2).getId();
                                List<com.kwad.framework.filedownloader.d.a> listBg2 = d.this.bg(id);
                                if (listBg2 != null && listBg2.size() > 0) {
                                    synchronized (this.abL) {
                                        this.abL.put(id, listBg2);
                                    }
                                }
                            }
                        }
                    }
                    d.this.abU.setTransactionSuccessful();
                    if (d.this.abU != null) {
                        try {
                            d.this.abU.endTransaction();
                        } catch (Exception e) {
                            d.printStackTrace(e);
                        }
                    }
                } catch (SQLiteException e2) {
                    d.this.a(e2);
                    if (d.this.abU != null) {
                        try {
                            d.this.abU.endTransaction();
                        } catch (Exception e3) {
                            d.printStackTrace(e3);
                        }
                    }
                } catch (Exception e4) {
                    d.printStackTrace(e4);
                    if (d.this.abU != null) {
                        try {
                            d.this.abU.endTransaction();
                        } catch (Exception e5) {
                            d.printStackTrace(e5);
                        }
                    }
                }
            } catch (Throwable th) {
                if (d.this.abU != null) {
                    try {
                        d.this.abU.endTransaction();
                    } catch (Exception e6) {
                        d.printStackTrace(e6);
                    }
                }
                throw th;
            }
        }
    }

    class b implements Iterator<com.kwad.framework.filedownloader.d.c> {
        private Cursor abZ;
        private final List<Integer> aca = new ArrayList();
        private int acb;

        b() {
            if (d.this.abU != null) {
                try {
                    this.abZ = d.this.abU.rawQuery("SELECT * FROM ksad_file_download", null);
                } catch (SQLiteException e) {
                    d.this.a(e);
                } catch (Exception e2) {
                    d.printStackTrace(e2);
                }
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // java.util.Iterator
        /* JADX INFO: renamed from: uj, reason: merged with bridge method [inline-methods] */
        public com.kwad.framework.filedownloader.d.c next() {
            com.kwad.framework.filedownloader.d.c cVarD = d.d(this.abZ);
            this.acb = cVarD.getId();
            return cVarD;
        }

        @Override // java.util.Iterator
        public final boolean hasNext() {
            try {
                if (this.abZ != null) {
                    return this.abZ.moveToNext();
                }
                return false;
            } catch (Throwable th) {
                d.printStackTrace(th);
                return false;
            }
        }

        @Override // java.util.Iterator
        public final void remove() {
            this.aca.add(Integer.valueOf(this.acb));
        }

        final void ui() {
            Cursor cursor;
            if (d.this.abU == null || (cursor = this.abZ) == null) {
                return;
            }
            cursor.close();
            if (this.aca.isEmpty()) {
                return;
            }
            String strJoin = TextUtils.join(", ", this.aca);
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "delete %s", strJoin);
            }
            try {
                d.this.abU.execSQL(f.b("DELETE FROM %s WHERE %s IN (%s);", "ksad_file_download", "_id", strJoin));
                d.this.abU.execSQL(f.b("DELETE FROM %s WHERE %s IN (%s);", "ksad_file_download_connection", "id", strJoin));
            } catch (SQLiteException e) {
                d.this.a(e);
            } catch (Exception e2) {
                d.printStackTrace(e2);
            }
        }
    }

    public d() {
        try {
            this.abU = new e(com.kwad.framework.filedownloader.f.c.vM()).getWritableDatabase();
        } catch (SQLiteException e) {
            a(e);
        }
    }

    private void a(int i, ContentValues contentValues) {
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase != null) {
            try {
                sQLiteDatabase.update("ksad_file_download", contentValues, "_id = ? ", new String[]{String.valueOf(i)});
            } catch (SQLiteException e) {
                a(i, e);
            } catch (Exception e2) {
                printStackTrace(e2);
            }
        }
    }

    private void a(int i, SQLiteException sQLiteException) {
        if (!(sQLiteException instanceof SQLiteFullException)) {
            printStackTrace(sQLiteException);
            return;
        }
        if (i != -1) {
            bi(i);
            bh(i);
        }
        h(sQLiteException);
        abV = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(SQLiteException sQLiteException) {
        a(-1, sQLiteException);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static com.kwad.framework.filedownloader.d.c d(Cursor cursor) {
        com.kwad.framework.filedownloader.d.c cVar = new com.kwad.framework.filedownloader.d.c();
        if (cursor == null) {
            return cVar;
        }
        cVar.setId(cursor.getInt(cursor.getColumnIndex("_id")));
        cVar.setUrl(cursor.getString(cursor.getColumnIndex("url")));
        cVar.c(cursor.getString(cursor.getColumnIndex("path")), cursor.getShort(cursor.getColumnIndex("pathAsDirectory")) == 1);
        cVar.d((byte) cursor.getShort(cursor.getColumnIndex("status")));
        cVar.L(cursor.getLong(cursor.getColumnIndex("sofar")));
        cVar.N(cursor.getLong(cursor.getColumnIndex("total")));
        cVar.bj(cursor.getString(cursor.getColumnIndex("errMsg")));
        cVar.bi(cursor.getString(cursor.getColumnIndex(DownloadModel.ETAG)));
        cVar.bk(cursor.getString(cursor.getColumnIndex("filename")));
        cVar.by(cursor.getInt(cursor.getColumnIndex("connectionCount")));
        return cVar;
    }

    private void d(com.kwad.framework.filedownloader.d.c cVar) {
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase != null) {
            try {
                sQLiteDatabase.insert("ksad_file_download", null, cVar.vk());
            } catch (SQLiteException e) {
                cVar.bj(e.toString());
                cVar.d((byte) -1);
                a(cVar.getId(), e);
            } catch (Exception e2) {
                printStackTrace(e2);
            }
        }
    }

    private static void h(Throwable th) {
        if (th != null) {
            th.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void printStackTrace(Throwable th) {
        h(th);
    }

    public final a.InterfaceC0182a a(SparseArray<com.kwad.framework.filedownloader.d.c> sparseArray, SparseArray<List<com.kwad.framework.filedownloader.d.a>> sparseArray2) {
        return new a(sparseArray, sparseArray2);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, int i2, long j) {
        if (this.abU == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("currentOffset", Long.valueOf(j));
        try {
            this.abU.update("ksad_file_download_connection", contentValues, "id = ? AND connectionIndex = ?", new String[]{Integer.toString(i), Integer.toString(i2)});
        } catch (SQLiteException e) {
            a(i, e);
        } catch (Exception e2) {
            printStackTrace(e2);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, long j, String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Byte) (byte) 2);
        contentValues.put("total", Long.valueOf(j));
        contentValues.put(DownloadModel.ETAG, str);
        contentValues.put("filename", str2);
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, String str, long j, long j2, int i2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("sofar", Long.valueOf(j));
        contentValues.put("total", Long.valueOf(j2));
        contentValues.put(DownloadModel.ETAG, str);
        contentValues.put("connectionCount", Integer.valueOf(i2));
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, Throwable th) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("errMsg", th.toString());
        contentValues.put("status", (Byte) (byte) 5);
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, Throwable th, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("errMsg", th.toString());
        contentValues.put("status", (Byte) (byte) -1);
        contentValues.put("sofar", Long.valueOf(j));
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(com.kwad.framework.filedownloader.d.a aVar) {
        SQLiteDatabase sQLiteDatabase;
        if (aVar == null || (sQLiteDatabase = this.abU) == null) {
            return;
        }
        try {
            sQLiteDatabase.insert("ksad_file_download_connection", null, aVar.vk());
        } catch (SQLiteException e) {
            a(aVar.getId(), e);
        } catch (Exception e2) {
            printStackTrace(e2);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void b(com.kwad.framework.filedownloader.d.c cVar) {
        if (this.abU == null) {
            return;
        }
        if (cVar == null) {
            com.kwad.framework.filedownloader.f.d.d(this, "update but model == null!", new Object[0]);
            return;
        }
        if (bf(cVar.getId()) == null) {
            d(cVar);
            return;
        }
        try {
            this.abU.update("ksad_file_download", cVar.vk(), "_id = ? ", new String[]{String.valueOf(cVar.getId())});
        } catch (SQLiteException e) {
            cVar.bj(e.toString());
            cVar.d((byte) -1);
            a(cVar.getId(), e);
        } catch (Exception e2) {
            printStackTrace(e2);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void be(int i) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final com.kwad.framework.filedownloader.d.c bf(int i) throws Throwable {
        Cursor cursorRawQuery;
        SQLiteDatabase sQLiteDatabase = this.abU;
        SQLiteDatabase sQLiteDatabase2 = null;
        try {
            if (sQLiteDatabase == null) {
                return null;
            }
            try {
                cursorRawQuery = sQLiteDatabase.rawQuery(f.b("SELECT * FROM %s WHERE %s = ?", "ksad_file_download", "_id"), new String[]{Integer.toString(i)});
                try {
                    if (cursorRawQuery.moveToNext()) {
                        com.kwad.framework.filedownloader.d.c cVarD = d(cursorRawQuery);
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
                        return cVarD;
                    }
                } catch (SQLiteException e) {
                    e = e;
                    a(i, e);
                } catch (Exception e2) {
                    e = e2;
                    printStackTrace(e);
                }
            } catch (SQLiteException e3) {
                e = e3;
                cursorRawQuery = null;
            } catch (Exception e4) {
                e = e4;
                cursorRawQuery = null;
            } catch (Throwable th) {
                th = th;
                com.kwad.sdk.crash.utils.b.closeQuietly(sQLiteDatabase2);
                throw th;
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
            return null;
        } catch (Throwable th2) {
            th = th2;
            sQLiteDatabase2 = sQLiteDatabase;
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final List<com.kwad.framework.filedownloader.d.a> bg(int i) {
        ArrayList arrayList = new ArrayList();
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase == null) {
            return arrayList;
        }
        Cursor cursorRawQuery = null;
        try {
            try {
                try {
                    cursorRawQuery = sQLiteDatabase.rawQuery(f.b("SELECT * FROM %s WHERE %s = ?", "ksad_file_download_connection", "id"), new String[]{Integer.toString(i)});
                    while (cursorRawQuery.moveToNext()) {
                        com.kwad.framework.filedownloader.d.a aVar = new com.kwad.framework.filedownloader.d.a();
                        aVar.setId(i);
                        aVar.setIndex(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("connectionIndex")));
                        aVar.setStartOffset(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex(DBDefinition.START_OFFSET)));
                        aVar.J(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("currentOffset")));
                        aVar.K(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex(DBDefinition.END_OFFSET)));
                        arrayList.add(aVar);
                    }
                } catch (SQLiteException e) {
                    a(i, e);
                }
            } catch (Exception e2) {
                printStackTrace(e2);
            }
            return arrayList;
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void bh(int i) {
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase == null) {
            return;
        }
        try {
            sQLiteDatabase.execSQL("DELETE FROM ksad_file_download_connection WHERE id = " + i);
        } catch (SQLiteException e) {
            printStackTrace(e);
        } catch (Exception e2) {
            printStackTrace(e2);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final boolean bi(int i) {
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase == null) {
            return false;
        }
        try {
            return sQLiteDatabase.delete("ksad_file_download", "_id = ?", new String[]{String.valueOf(i)}) != 0;
        } catch (SQLiteException | Exception e) {
            printStackTrace(e);
            return false;
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void bj(int i) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void c(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Byte) (byte) 3);
        contentValues.put("sofar", Long.valueOf(j));
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void clear() {
        SQLiteDatabase sQLiteDatabase = this.abU;
        if (sQLiteDatabase != null) {
            try {
                sQLiteDatabase.delete("ksad_file_download", null, null);
            } catch (SQLiteException e) {
                a(e);
            }
            try {
                this.abU.delete("ksad_file_download_connection", null, null);
            } catch (SQLiteException e2) {
                a(e2);
            }
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void d(int i, long j) {
        bi(i);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void e(int i, long j) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Byte) (byte) -2);
        contentValues.put("sofar", Long.valueOf(j));
        a(i, contentValues);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void q(int i, int i2) {
        if (this.abU == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("connectionCount", Integer.valueOf(i2));
        try {
            this.abU.update("ksad_file_download", contentValues, "_id = ? ", new String[]{Integer.toString(i)});
        } catch (SQLiteException e) {
            a(i, e);
        } catch (Exception e2) {
            printStackTrace(e2);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final a.InterfaceC0182a uh() {
        return new a(this);
    }
}
