package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import android.text.TextUtils;
import com.tkay.core.common.f.ad;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class l extends com.tkay.core.common.c.a<ad> {
    private static volatile l c;
    private final String b;

    public static class a {
        public static final String a = "placement_ad_impression";
        public static final String b = "format";
        public static final String c = "placement_id";
        public static final String d = "adsource_id";
        public static final String e = "hour_time";
        public static final String f = "hour_imp";
        public static final String g = "date_time";
        public static final String h = "date_imp";
        public static final String i = "show_time";
        public static final String j = "CREATE TABLE IF NOT EXISTS placement_ad_impression(format INTEGER ,placement_id TEXT ,adsource_id TEXT ,hour_time TEXT ,hour_imp INTEGER ,date_time TEXT ,date_imp INTEGER , show_time INTEGER)";
    }

    private l(b bVar) {
        super(bVar);
        this.b = l.class.getName();
    }

    public static l a(b bVar) {
        if (c == null) {
            synchronized (l.class) {
                if (c == null) {
                    c = new l(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized Map<String, ad> a(int i, String str, String str2) {
        HashMap map = new HashMap();
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.a, null, "format=?", new String[]{String.valueOf(i)}, null, null, null);
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
        if (cursorQuery == null || cursorQuery.getCount() <= 0) {
            if (cursorQuery != null) {
            }
            return map;
        }
        while (cursorQuery.moveToNext()) {
            String string = cursorQuery.getString(cursorQuery.getColumnIndex(a.c));
            ad adVar = (ad) map.get(string);
            if (adVar == null) {
                adVar = new ad();
                adVar.b = string;
                adVar.a = cursorQuery.getInt(cursorQuery.getColumnIndex("format"));
                adVar.f = new ConcurrentHashMap<>();
                map.put(string, adVar);
            }
            ad.a aVar = new ad.a();
            aVar.a = cursorQuery.getString(cursorQuery.getColumnIndex("adsource_id"));
            aVar.b = cursorQuery.getString(cursorQuery.getColumnIndex(a.e));
            aVar.c = cursorQuery.getString(cursorQuery.getColumnIndex(a.g));
            if (!TextUtils.equals(aVar.b, str2)) {
                aVar.e = 0;
            } else {
                aVar.e = cursorQuery.getInt(cursorQuery.getColumnIndex(a.f));
            }
            adVar.d += aVar.e;
            if (!TextUtils.equals(aVar.c, str)) {
                aVar.d = 0;
            } else {
                aVar.d = cursorQuery.getInt(cursorQuery.getColumnIndex(a.h));
            }
            adVar.c += aVar.d;
            aVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex("show_time"));
            if (aVar.f >= adVar.e) {
                adVar.e = aVar.f;
            }
            adVar.f.put(aVar.a, aVar);
        }
        cursorQuery.close();
        return map;
        cursorQuery.close();
        return map;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00e5 A[Catch: all -> 0x00f4, PHI: r11
      0x00e5: PHI (r11v7 android.database.Cursor) = (r11v5 android.database.Cursor), (r11v6 android.database.Cursor), (r11v8 android.database.Cursor) binds: [B:30:0x00dc, B:34:0x00e3, B:41:0x00f1] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #1 {, blocks: (B:26:0x00d6, B:35:0x00e5, B:38:0x00ec, B:39:0x00ef, B:33:0x00e0), top: B:51:0x0002, inners: #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized ad a(String str, String str2, String str3) {
        Cursor cursorQuery;
        ad adVar;
        try {
            cursorQuery = a().query(a.a, null, "placement_id=?", new String[]{str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        adVar = new ad();
                        adVar.f = new ConcurrentHashMap<>();
                        while (cursorQuery.moveToNext()) {
                            adVar.a = cursorQuery.getInt(cursorQuery.getColumnIndex("format"));
                            adVar.b = cursorQuery.getString(cursorQuery.getColumnIndex(a.c));
                            ad.a aVar = new ad.a();
                            aVar.a = cursorQuery.getString(cursorQuery.getColumnIndex("adsource_id"));
                            aVar.b = cursorQuery.getString(cursorQuery.getColumnIndex(a.e));
                            aVar.c = cursorQuery.getString(cursorQuery.getColumnIndex(a.g));
                            if (!TextUtils.equals(aVar.b, str3)) {
                                aVar.e = 0;
                            } else {
                                aVar.e = cursorQuery.getInt(cursorQuery.getColumnIndex(a.f));
                            }
                            adVar.d += aVar.e;
                            if (!TextUtils.equals(aVar.c, str2)) {
                                aVar.d = 0;
                            } else {
                                aVar.d = cursorQuery.getInt(cursorQuery.getColumnIndex(a.h));
                            }
                            adVar.c += aVar.d;
                            aVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex("show_time"));
                            if (aVar.f >= adVar.e) {
                                adVar.e = aVar.f;
                            }
                            adVar.f.put(aVar.a, aVar);
                        }
                    } else {
                        adVar = null;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                } catch (OutOfMemoryError unused2) {
                    try {
                        System.gc();
                        if (cursorQuery != null) {
                        }
                        return null;
                    } finally {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                    }
                } catch (Throwable unused3) {
                    if (cursorQuery != null) {
                    }
                    return null;
                }
            }
            cursorQuery.close();
            return adVar;
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x009f A[Catch: all -> 0x00ae, PHI: r11
      0x009f: PHI (r11v7 android.database.Cursor) = (r11v5 android.database.Cursor), (r11v6 android.database.Cursor), (r11v8 android.database.Cursor) binds: [B:24:0x0096, B:28:0x009d, B:35:0x00ab] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #7 {, blocks: (B:20:0x0090, B:29:0x009f, B:32:0x00a6, B:33:0x00a9, B:27:0x009a), top: B:47:0x0002, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized ad.a a(String str, String str2, String str3, String str4) {
        Cursor cursorQuery;
        ad.a aVar;
        try {
            cursorQuery = a().query(a.a, null, "adsource_id=? AND placement_id=?", new String[]{str2, str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        cursorQuery.moveToNext();
                        aVar = new ad.a();
                        aVar.a = cursorQuery.getString(cursorQuery.getColumnIndex("adsource_id"));
                        aVar.b = cursorQuery.getString(cursorQuery.getColumnIndex(a.e));
                        aVar.c = cursorQuery.getString(cursorQuery.getColumnIndex(a.g));
                        if (!TextUtils.equals(aVar.b, str4)) {
                            aVar.e = 0;
                        } else {
                            aVar.e = cursorQuery.getInt(cursorQuery.getColumnIndex(a.f));
                        }
                        if (!TextUtils.equals(aVar.c, str3)) {
                            aVar.d = 0;
                        } else {
                            aVar.d = cursorQuery.getInt(cursorQuery.getColumnIndex(a.h));
                        }
                        aVar.f = cursorQuery.getLong(cursorQuery.getColumnIndex("show_time"));
                    } else {
                        aVar = null;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                } catch (OutOfMemoryError unused2) {
                    try {
                        System.gc();
                        if (cursorQuery != null) {
                        }
                        return null;
                    } finally {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                    }
                } catch (Throwable unused3) {
                    if (cursorQuery != null) {
                    }
                    return null;
                }
            }
            cursorQuery.close();
            return aVar;
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
    }

    public final synchronized long a(int i, String str, ad.a aVar) {
        boolean z;
        if (b() == null || aVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("format", Integer.valueOf(i));
            contentValues.put(a.c, str);
            contentValues.put("adsource_id", aVar.a);
            contentValues.put(a.e, aVar.b);
            contentValues.put(a.f, Integer.valueOf(aVar.e));
            contentValues.put(a.g, aVar.c);
            contentValues.put(a.h, Integer.valueOf(aVar.d));
            contentValues.put("show_time", Long.valueOf(aVar.f));
            Cursor cursorQuery = a().query(a.a, new String[]{"adsource_id"}, "adsource_id=?", new String[]{aVar.a}, "adsource_id", null, null);
            if (cursorQuery == null || cursorQuery.getCount() <= 0) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                z = false;
            } else {
                cursorQuery.close();
                z = true;
            }
            if (z) {
                return b().update(a.a, contentValues, "adsource_id = ? ", new String[]{aVar.a});
            }
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    private boolean b(String str) {
        Cursor cursorQuery = a().query(a.a, new String[]{"adsource_id"}, "adsource_id=?", new String[]{str}, "adsource_id", null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private static ad a(Cursor cursor, String str, String str2) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        ad adVar = new ad();
        adVar.f = new ConcurrentHashMap<>();
        while (cursor.moveToNext()) {
            adVar.a = cursor.getInt(cursor.getColumnIndex("format"));
            adVar.b = cursor.getString(cursor.getColumnIndex(a.c));
            ad.a aVar = new ad.a();
            aVar.a = cursor.getString(cursor.getColumnIndex("adsource_id"));
            aVar.b = cursor.getString(cursor.getColumnIndex(a.e));
            aVar.c = cursor.getString(cursor.getColumnIndex(a.g));
            if (!TextUtils.equals(aVar.b, str2)) {
                aVar.e = 0;
            } else {
                aVar.e = cursor.getInt(cursor.getColumnIndex(a.f));
            }
            adVar.d += aVar.e;
            if (!TextUtils.equals(aVar.c, str)) {
                aVar.d = 0;
            } else {
                aVar.d = cursor.getInt(cursor.getColumnIndex(a.h));
            }
            adVar.c += aVar.d;
            aVar.f = cursor.getLong(cursor.getColumnIndex("show_time"));
            if (aVar.f >= adVar.e) {
                adVar.e = aVar.f;
            }
            adVar.f.put(aVar.a, aVar);
        }
        return adVar;
    }

    private static ad.a b(Cursor cursor, String str, String str2) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        cursor.moveToNext();
        ad.a aVar = new ad.a();
        aVar.a = cursor.getString(cursor.getColumnIndex("adsource_id"));
        aVar.b = cursor.getString(cursor.getColumnIndex(a.e));
        aVar.c = cursor.getString(cursor.getColumnIndex(a.g));
        if (!TextUtils.equals(aVar.b, str2)) {
            aVar.e = 0;
        } else {
            aVar.e = cursor.getInt(cursor.getColumnIndex(a.f));
        }
        if (!TextUtils.equals(aVar.c, str)) {
            aVar.d = 0;
        } else {
            aVar.d = cursor.getInt(cursor.getColumnIndex(a.h));
        }
        aVar.f = cursor.getLong(cursor.getColumnIndex("show_time"));
        return aVar;
    }

    public final void a(String str) {
        synchronized (this) {
            try {
                String str2 = "date_time!='" + str + "'";
                if (b() == null) {
                } else {
                    b().delete(a.a, str2, null);
                }
            } catch (Exception unused) {
            }
        }
    }
}
