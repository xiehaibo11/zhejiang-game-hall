package com.kwad.components.core.c;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteOpenHelper;
import com.kwad.sdk.KsAdSDKImpl;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static volatile a Ie;
    private final SQLiteDatabase Id;

    /* JADX INFO: renamed from: com.kwad.components.core.c.a$a, reason: collision with other inner class name */
    static class C0139a extends SQLiteOpenHelper {
        private static int If = 1;
        private String Ig;
        private String Ih;

        public C0139a(Context context) {
            super(context, "ksadcache.db", (SQLiteDatabase.CursorFactory) null, If);
            this.Ig = "CREATE TABLE IF NOT EXISTS ksad_ad_cache (creativeId VARCHAR PRIMARY KEY NOT NULL, posId TEXT, adJson TEXT, ecpm INTEGER, playAgainJson TEXT, adSenseJson TEXT, createTime INTEGER, expireTime INTEGER)";
            this.Ih = "CREATE TABLE IF NOT EXISTS ksad_ad_cache_strategy(posId VARCHAR PRIMARY KEY NOT NULL, cacheSize INTEGER, cacheSecond INTEGER, strategyCode INTEGER, enable INTEGER)";
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
            sQLiteDatabase.execSQL(this.Ig);
            sQLiteDatabase.execSQL(this.Ih);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }
    }

    private a(Context context) {
        this.Id = new C0139a(context).getWritableDatabase();
    }

    private <T extends h> void b(List<T> list, String str) {
        try {
            try {
                this.Id.beginTransaction();
                Iterator<T> it = list.iterator();
                while (it.hasNext()) {
                    try {
                        com.kwad.sdk.core.e.c.d("AdCacheDBManager", "insertData: " + str + ", rowId: " + this.Id.insertWithOnConflict(str, null, it.next().mt(), 5));
                    } catch (Exception e) {
                        com.kwad.sdk.core.e.c.printStackTrace(e);
                    }
                }
                this.Id.setTransactionSuccessful();
                SQLiteDatabase sQLiteDatabase = this.Id;
                if (sQLiteDatabase != null) {
                    try {
                        sQLiteDatabase.endTransaction();
                    } catch (Exception e2) {
                        com.kwad.sdk.core.e.c.printStackTrace(e2);
                    }
                }
            } catch (Exception e3) {
                com.kwad.sdk.core.e.c.printStackTrace(e3);
                SQLiteDatabase sQLiteDatabase2 = this.Id;
                if (sQLiteDatabase2 != null) {
                    try {
                        sQLiteDatabase2.endTransaction();
                    } catch (Exception e4) {
                        com.kwad.sdk.core.e.c.printStackTrace(e4);
                    }
                }
            }
        } catch (Throwable th) {
            SQLiteDatabase sQLiteDatabase3 = this.Id;
            if (sQLiteDatabase3 != null) {
                try {
                    sQLiteDatabase3.endTransaction();
                } catch (Exception e5) {
                    com.kwad.sdk.core.e.c.printStackTrace(e5);
                }
            }
            throw th;
        }
    }

    public static a mg() {
        KsAdSDKImpl ksAdSDKImpl;
        if (Ie == null) {
            synchronized (a.class) {
                if (Ie == null && (ksAdSDKImpl = KsAdSDKImpl.get()) != null) {
                    try {
                        Ie = new a(ksAdSDKImpl.getContext());
                    } catch (SQLiteException e) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                        Ie = null;
                    }
                }
            }
        }
        return Ie;
    }

    public final void a(e eVar) {
        b(Collections.singletonList(eVar), "ksad_ad_cache_strategy");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v2 */
    /* JADX WARN: Type inference failed for: r7v4, types: [java.io.Closeable] */
    public final e ae(String str) throws Throwable {
        Throwable th;
        Cursor cursorRawQuery;
        try {
            try {
                cursorRawQuery = this.Id.rawQuery("select  * from ksad_ad_cache_strategy where posId=?", new String[]{str});
                try {
                    List<e> listA = e.a(cursorRawQuery);
                    if (listA != null && listA.size() > 0) {
                        e eVar = listA.get(0);
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
                        return eVar;
                    }
                } catch (Exception e) {
                    e = e;
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                }
            } catch (Throwable th2) {
                th = th2;
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) str);
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            cursorRawQuery = null;
        } catch (Throwable th3) {
            th = th3;
            str = 0;
            com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) str);
            throw th;
        }
        com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
        return null;
    }

    /* JADX WARN: Not initialized variable reg: 1, insn: 0x0093: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:35:0x0093 */
    public final List<g> b(String str, long j, int i) throws Throwable {
        Cursor cursorRawQuery;
        Closeable closeable;
        Closeable closeable2 = null;
        try {
            try {
                cursorRawQuery = this.Id.rawQuery("select  * from ksad_ad_cache where posId=? order by createTime desc", new String[]{str});
                try {
                    List<g> listA = g.a(cursorRawQuery);
                    if (listA == null) {
                        com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
                        return null;
                    }
                    StringBuilder sb = new StringBuilder("(posId = " + str + ") AND (");
                    ArrayList arrayList = new ArrayList();
                    int i2 = 0;
                    for (g gVar : listA) {
                        i2++;
                        if (i2 > i) {
                            sb.append(" creativeId = ");
                            sb.append(gVar.mB());
                            sb.append(i2 == listA.size() ? ")" : " OR");
                        } else if (gVar.mz() >= j) {
                            arrayList.add(gVar);
                        }
                    }
                    if (i2 > i) {
                        this.Id.delete("ksad_ad_cache", sb.toString(), new String[0]);
                    }
                    com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
                    return arrayList;
                } catch (Exception e) {
                    e = e;
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                    com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                closeable2 = closeable;
                com.kwad.sdk.crash.utils.b.closeQuietly(closeable2);
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            cursorRawQuery = null;
        } catch (Throwable th2) {
            th = th2;
            com.kwad.sdk.crash.utils.b.closeQuietly(closeable2);
            throw th;
        }
    }

    public final void g(List<g> list) {
        b(list, "ksad_ad_cache");
    }

    public final void mh() {
        try {
            this.Id.delete("ksad_ad_cache", "expireTime<?", new String[]{String.valueOf(System.currentTimeMillis() / 1000)});
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    public final void o(long j) {
        try {
            com.kwad.sdk.core.e.c.d("AdCacheDBManager", "deleteCachedAdByCreativeId result: " + this.Id.delete("ksad_ad_cache", "creativeId=?", new String[]{String.valueOf(j)}));
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }
}
