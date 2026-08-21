package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

public class e extends com.tkay.core.common.c.a<com.tkay.core.common.a.e> {
    private static volatile e c;
    private final String b;

    public static class a {
        public static final String a = "dsp_offer_install_record";
        public static final String b = "dsp_id";
        public static final String c = "dsp_offer_id";
        public static final String d = "package_name";
        public static final String e = "last_update_time";
        public static final String f = "CREATE TABLE IF NOT EXISTS dsp_offer_install_record(dsp_id TEXT ,dsp_offer_id TEXT ,package_name TEXT ,last_update_time INTEGER)";
    }

    private e(b bVar) {
        super(bVar);
        this.b = e.class.getName();
    }

    public static e a(b bVar) {
        if (c == null) {
            synchronized (e.class) {
                if (c == null) {
                    c = new e(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized long a(com.tkay.core.common.a.e eVar) {
        if (b() == null) {
            return -1L;
        }
        if (!a(eVar.a(), eVar.b())) {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("dsp_id", eVar.a());
                contentValues.put("dsp_offer_id", eVar.b());
                contentValues.put("package_name", eVar.c());
                contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
                StringBuilder sb = new StringBuilder("insertDspOfferInstallRecord--insert,dspid:");
                sb.append(eVar.a());
                sb.append(",dspoferrId:");
                sb.append(eVar.b());
                sb.append(",packagename:");
                sb.append(eVar.c());
                return b().insert(a.a, null, contentValues);
            } catch (Exception unused) {
            }
        } else {
            StringBuilder sb2 = new StringBuilder("insertDspOfferInstallRecord--had inserted...,dspid:");
            sb2.append(eVar.a());
            sb2.append(",dspoferrId:");
            sb2.append(eVar.b());
            sb2.append(",packagename:");
            sb2.append(eVar.c());
        }
        return -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0032 A[Catch: all -> 0x0046, PHI: r1
      0x0032: PHI (r1v5 android.database.Cursor) = 
      (r1v2 android.database.Cursor)
      (r1v3 android.database.Cursor)
      (r1v4 android.database.Cursor)
      (r1v6 android.database.Cursor)
     binds: [B:15:0x0030, B:19:0x0039, B:25:0x0043, B:13:0x002d] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #2 {, blocks: (B:10:0x0028, B:16:0x0032, B:23:0x003f, B:24:0x0042, B:18:0x0036), top: B:32:0x0003, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized boolean a(String str, String str2) {
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.a, null, "dsp_id = ?  AND dsp_offer_id = ? ", new String[]{str, str2}, null, null, null);
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        } catch (Exception unused) {
            if (cursorQuery != null) {
            }
        } catch (OutOfMemoryError unused2) {
            System.gc();
            if (cursorQuery != null) {
            }
        } catch (Throwable unused3) {
            if (cursorQuery != null) {
            }
        }
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    public final synchronized List<com.tkay.core.common.a.d> a(int i) {
        ArrayList arrayList = new ArrayList();
        if (i <= 0) {
            return arrayList;
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.a, null, null, null, null, null, "last_update_time DESC", String.valueOf(i));
                List<com.tkay.core.common.a.e> listA = a(cursorQuery);
                cursorQuery.close();
                new StringBuilder("get limit install record list size:").append(listA.size());
                arrayList.addAll(listA);
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        } catch (Exception unused) {
            if (cursorQuery != null) {
            }
        } catch (OutOfMemoryError unused2) {
            System.gc();
            if (cursorQuery != null) {
            }
        } catch (Throwable unused3) {
            if (cursorQuery != null) {
            }
        }
        return arrayList;
    }

    private synchronized List<com.tkay.core.common.a.e> a(Cursor cursor) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        if (cursor != null) {
            if (cursor.getCount() > 0) {
                while (cursor.moveToNext()) {
                    try {
                        com.tkay.core.common.a.e eVar = new com.tkay.core.common.a.e();
                        eVar.a(cursor.getString(cursor.getColumnIndex("dsp_id")));
                        eVar.b(cursor.getString(cursor.getColumnIndex("dsp_offer_id")));
                        eVar.c(cursor.getString(cursor.getColumnIndex("package_name")));
                        arrayList.add(eVar);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        return arrayList;
    }
}
