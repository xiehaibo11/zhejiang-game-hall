package com.tkay.core.common.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.tkay.core.common.f.w;
import java.util.ArrayList;
import java.util.List;

public class j extends com.tkay.core.common.c.a<w> {
    private static j c;
    private final String b;

    public static class a {
        public static final String a = "offer_action_record";
        public static final String b = "adsource_id";
        public static final String c = "type";
        public static final String d = "unit_id";
        public static final String e = "click_count";
        public static final String f = "show_count";
        public static final String g = "expire_time";
        public static final String h = "CREATE TABLE IF NOT EXISTS offer_action_record(adsource_id TEXT ,type INTEGER ,unit_id TEXT ,click_count INTEGER ,show_count INTEGER ,expire_time INTEGER )";
    }

    private j(b bVar) {
        super(bVar);
        this.b = j.class.getName();
    }

    public static j a(b bVar) {
        if (c == null) {
            synchronized (j.class) {
                if (c == null) {
                    c = new j(bVar);
                }
            }
        }
        return c;
    }

    public final synchronized void a(int i, String str, int i2, int i3) {
        w wVarA = a(i, str);
        if (wVarA != null) {
            wVarA.b(wVarA.d() + i2);
            wVarA.a(wVarA.c() + i3);
            a(wVarA);
        }
    }

    public final synchronized void a(int i, String str, long j) {
        w wVarA = a(i, str);
        if (wVarA != null) {
            wVarA.a(System.currentTimeMillis() + j);
            a(wVarA);
        }
    }

    public final synchronized List<w> a(int i) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = a().query(a.a, null, "type = ? and expire_time > ?", new String[]{String.valueOf(i), String.valueOf(System.currentTimeMillis())}, null, null, null);
                if (cursorQuery != null && cursorQuery.getCount() > 0) {
                    while (cursorQuery.moveToNext()) {
                        w wVar = new w(i, cursorQuery.getString(cursorQuery.getColumnIndex("unit_id")));
                        wVar.b(cursorQuery.getInt(cursorQuery.getColumnIndex(a.e)));
                        wVar.a(cursorQuery.getInt(cursorQuery.getColumnIndex("show_count")));
                        wVar.a(cursorQuery.getLong(cursorQuery.getColumnIndex("expire_time")));
                        arrayList.add(wVar);
                    }
                }
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

    public final synchronized List<w> a(List<String> list, int i) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        StringBuilder sb = new StringBuilder("SELECT * FROM offer_action_record WHERE adsource_id IN (");
        sb.append(b(list.size()));
        sb.append(") and type = ? and expire_time > ?");
        Cursor cursorQuery = null;
        try {
            try {
                String[] strArr = new String[list.size() + 2];
                list.toArray(strArr);
                strArr[list.size()] = String.valueOf(i);
                strArr[list.size() + 1] = String.valueOf(System.currentTimeMillis());
                cursorQuery = a().query(a.a, null, "adsource_id IN (" + b(list.size()) + ") and type = ? and expire_time > ?", strArr, null, null, null);
                if (cursorQuery != null && cursorQuery.getCount() > 0) {
                    while (cursorQuery.moveToNext()) {
                        w wVar = new w(i, cursorQuery.getString(cursorQuery.getColumnIndex("unit_id")));
                        wVar.b(cursorQuery.getInt(cursorQuery.getColumnIndex(a.e)));
                        wVar.a(cursorQuery.getInt(cursorQuery.getColumnIndex("show_count")));
                        wVar.a(cursorQuery.getLong(cursorQuery.getColumnIndex("expire_time")));
                        arrayList.add(wVar);
                    }
                }
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

    private static String b(int i) {
        if (i <= 0) {
            throw new RuntimeException("No placeholders");
        }
        StringBuilder sb = new StringBuilder((i * 2) - 1);
        sb.append("?");
        for (int i2 = 1; i2 < i; i2++) {
            sb.append(",?");
        }
        return sb.toString();
    }

    private synchronized long a(w wVar) {
        if (b() == null || wVar == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("type", Integer.valueOf(wVar.e()));
            contentValues.put("unit_id", wVar.a());
            contentValues.put(a.e, Integer.valueOf(wVar.d()));
            contentValues.put("show_count", Integer.valueOf(wVar.c()));
            contentValues.put("expire_time", Long.valueOf(wVar.b()));
            return b().update(a.a, contentValues, "type = ? and unit_id = ?", new String[]{String.valueOf(wVar.e()), wVar.a()});
        } catch (Exception unused) {
            return -1L;
        }
    }

    private synchronized long b(String str, int i, String str2) {
        if (b() == null) {
            return -1L;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("adsource_id", str);
            contentValues.put("type", Integer.valueOf(i));
            contentValues.put("unit_id", str2);
            w wVarA = a(i, str2);
            if (wVarA != null) {
                contentValues.put(a.e, Integer.valueOf(wVarA.d()));
                contentValues.put("show_count", Integer.valueOf(wVarA.c()));
                contentValues.put("expire_time", Long.valueOf(wVarA.b()));
            } else {
                contentValues.put(a.e, (Integer) 0);
                contentValues.put("show_count", (Integer) 0);
                contentValues.put("expire_time", (Integer) (-1));
            }
            return b().insert(a.a, null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0071 A[Catch: all -> 0x0080, PHI: r1
      0x0071: PHI (r1v5 android.database.Cursor) = (r1v3 android.database.Cursor), (r1v4 android.database.Cursor), (r1v6 android.database.Cursor) binds: [B:18:0x0068, B:22:0x006f, B:29:0x007d] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TryCatch #0 {, blocks: (B:10:0x005b, B:14:0x0062, B:23:0x0071, B:26:0x0078, B:27:0x007b, B:21:0x006c), top: B:39:0x0002, inners: #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized w a(int i, String str) {
        Cursor cursorQuery;
        try {
            cursorQuery = a().query(a.a, null, "type=? and unit_id = ?", new String[]{String.valueOf(i), str}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() > 0) {
                        cursorQuery.moveToNext();
                        w wVar = new w(i, str);
                        wVar.b(cursorQuery.getInt(cursorQuery.getColumnIndex(a.e)));
                        wVar.a(cursorQuery.getInt(cursorQuery.getColumnIndex("show_count")));
                        wVar.a(cursorQuery.getLong(cursorQuery.getColumnIndex("expire_time")));
                        cursorQuery.close();
                        return wVar;
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
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            return null;
        } catch (Exception unused4) {
            cursorQuery = null;
        } catch (OutOfMemoryError unused5) {
            cursorQuery = null;
        } catch (Throwable unused6) {
            cursorQuery = null;
        }
    }

    private boolean b(int i, String str) {
        Cursor cursorQuery = a().query(a.a, null, "type = ? and unit_id = ?", new String[]{String.valueOf(i), str}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    private boolean c(String str, int i, String str2) {
        Cursor cursorQuery = a().query(a.a, null, "adsource_id = ? and type = ? and unit_id = ?", new String[]{str, String.valueOf(i), str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            return true;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return false;
    }

    public final synchronized void a(String str, int i, String str2) {
        boolean z = false;
        Cursor cursorQuery = a().query(a.a, null, "adsource_id = ? and type = ? and unit_id = ?", new String[]{str, String.valueOf(i), str2}, null, null, null);
        if (cursorQuery != null && cursorQuery.getCount() > 0) {
            cursorQuery.close();
            z = true;
        } else if (cursorQuery != null) {
            cursorQuery.close();
        }
        if (!z) {
            b(str, i, str2);
        }
    }
}
