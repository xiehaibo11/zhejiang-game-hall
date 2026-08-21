package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import java.util.ArrayList;
import java.util.List;

public class f extends com.tkay.core.common.c.a<com.tkay.core.common.a.f> {
    private static volatile f d;
    private final String b;
    private final long c;

    public static class a {
        public static final String a = "dsp_offer_show_record";
        public static final String b = "dsp_id";
        public static final String c = "dsp_offer_id";
        public static final String d = "show_limit";
        public static final String e = "show_count";
        public static final String f = "create_time";
        public static final String g = "last_update_time";
        public static final String h = "CREATE TABLE IF NOT EXISTS dsp_offer_show_record(dsp_id TEXT ,dsp_offer_id TEXT ,show_limit INTEGER ,show_count INTEGER ,create_time INTEGER ,last_update_time INTEGER)";
    }

    private f(b bVar) {
        super(bVar);
        this.b = f.class.getName();
        this.c = 86400000L;
    }

    public static f a(b bVar) {
        if (d == null) {
            synchronized (f.class) {
                if (d == null) {
                    d = new f(bVar);
                }
            }
        }
        return d;
    }

    public final synchronized long a(com.tkay.core.common.a.f fVar) {
        if (b() == null) {
            return -1L;
        }
        if (fVar.c() <= 0) {
            return -1L;
        }
        if (a(fVar.a(), fVar.b()) == null) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("dsp_id", fVar.a());
            contentValues.put("dsp_offer_id", fVar.b());
            contentValues.put(a.d, Integer.valueOf(fVar.c()));
            contentValues.put("show_count", (Integer) 0);
            contentValues.put(a.f, Long.valueOf(System.currentTimeMillis()));
            contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
            StringBuilder sb = new StringBuilder("insertDspOfferShowRecord--insert dspid:");
            sb.append(fVar.a());
            sb.append(",dspOfferId:");
            sb.append(fVar.b());
            return b().insert(a.a, null, contentValues);
        }
        StringBuilder sb2 = new StringBuilder("insertDspOfferShowRecord--had inserted...,dspid:");
        sb2.append(fVar.a());
        sb2.append(",dspOfferId:");
        sb2.append(fVar.b());
        return -1L;
    }

    public final synchronized long b(com.tkay.core.common.a.f fVar) {
        if (b() == null) {
            return -1L;
        }
        if (fVar.c() <= 0) {
            return -1L;
        }
        com.tkay.core.common.a.f fVarA = a(fVar.a(), fVar.b());
        if (fVarA != null) {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("dsp_id", fVar.a());
                contentValues.put("dsp_offer_id", fVar.b());
                contentValues.put(a.d, Integer.valueOf(fVar.c()));
                contentValues.put("show_count", Integer.valueOf(fVarA.d() + 1));
                contentValues.put("last_update_time", Long.valueOf(System.currentTimeMillis()));
                StringBuilder sb = new StringBuilder("updateDspOfferShowRecord--update dspid:");
                sb.append(fVar.a());
                sb.append(",dspOfferId:");
                sb.append(fVar.b());
                sb.append(",cur show count:");
                sb.append(fVarA.d() + 1);
                sb.append(",limit show cap:");
                sb.append(fVar.c());
                return b().update(a.a, contentValues, "dsp_id = ? and dsp_offer_id = ? ", new String[]{fVar.a(), fVar.b()});
            } catch (Exception unused) {
            }
        }
        return -1L;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x003b A[Catch: all -> 0x0051, PHI: r11
      0x003b: PHI (r11v8 android.database.Cursor) = 
      (r11v5 android.database.Cursor)
      (r11v6 android.database.Cursor)
      (r11v7 android.database.Cursor)
      (r11v10 android.database.Cursor)
     binds: [B:15:0x0039, B:20:0x0043, B:27:0x004e, B:12:0x0035] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #0 {, blocks: (B:9:0x0030, B:16:0x003b, B:24:0x0049, B:25:0x004c, B:19:0x0040), top: B:37:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized com.tkay.core.common.a.f a(String str, String str2) {
        Cursor cursorQuery;
        List<com.tkay.core.common.a.f> listA;
        try {
            cursorQuery = a().query(a.a, null, "dsp_id = ?  AND dsp_offer_id = ? ", new String[]{str, str2}, null, null, null);
        } catch (Exception unused) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused2) {
            cursorQuery = null;
        } catch (Throwable unused3) {
            cursorQuery = null;
        }
        try {
            listA = a(cursorQuery);
            cursorQuery.close();
        } catch (Exception unused4) {
            if (cursorQuery != null) {
            }
        } catch (OutOfMemoryError unused5) {
            try {
                System.gc();
                if (cursorQuery != null) {
                }
            } finally {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            }
        } catch (Throwable unused6) {
            if (cursorQuery != null) {
            }
        }
        if (listA.size() > 0) {
            return listA.get(0);
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    private synchronized List<com.tkay.core.common.a.f> a(Cursor cursor) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        if (cursor != null) {
            if (cursor.getCount() > 0) {
                while (cursor.moveToNext()) {
                    try {
                        com.tkay.core.common.a.f fVar = new com.tkay.core.common.a.f();
                        fVar.a(cursor.getString(cursor.getColumnIndex("dsp_id")));
                        fVar.b(cursor.getString(cursor.getColumnIndex("dsp_offer_id")));
                        fVar.a(cursor.getInt(cursor.getColumnIndex(a.d)));
                        fVar.b(cursor.getInt(cursor.getColumnIndex("show_count")));
                        arrayList.add(fVar);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
        return arrayList;
    }

    public final synchronized List<com.tkay.core.common.a.d> a(int i) {
        ArrayList arrayList = new ArrayList();
        if (i <= 0) {
            return arrayList;
        }
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.a, null, "show_count > show_limit", null, null, null, "last_update_time DESC", String.valueOf(i));
                List<com.tkay.core.common.a.f> listA = a(cursorQuery);
                new StringBuilder("get limit show cap record list size:").append(listA.size());
                cursorQuery.close();
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

    public final void c() {
        try {
            String str = "create_time < " + (System.currentTimeMillis() - 86400000);
            if (b() == null) {
                return;
            }
            b().delete(a.a, str, null);
        } catch (Exception unused) {
        }
    }
}
