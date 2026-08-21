package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.ArrayList;
import java.util.List;

public class o extends a {
    private static o a;

    private o(h hVar) {
        super(hVar);
    }

    public static o a(h hVar) {
        if (a == null) {
            synchronized (o.class) {
                if (a == null) {
                    a = new o(hVar);
                }
            }
        }
        return a;
    }

    public final synchronized int a() {
        int i;
        Cursor cursorQuery = null;
        i = 0;
        try {
            try {
                cursorQuery = getReadableDatabase().query("reporterror", new String[]{" count(*) "}, null, null, null, null, null);
                if (cursorQuery != null && cursorQuery.moveToFirst()) {
                    i = cursorQuery.getInt(0);
                }
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null) {
                }
            }
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
        return i;
    }

    public final synchronized int a(String str) {
        try {
            String[] strArr = {str};
            if (getWritableDatabase() == null) {
                return -1;
            }
            return getWritableDatabase().delete("reporterror", "url=?", strArr);
        } catch (Exception unused) {
            return -1;
        }
    }

    public final synchronized int a(String str, String str2, long j) {
        if (str == null) {
            str = "";
        }
        try {
            if (getWritableDatabase() == null) {
                return -1;
            }
            return getWritableDatabase().rawQuery("DELETE from reporterror where url='" + str2 + "' and data='" + str + "' and time_stamp" + ContainerUtils.KEY_VALUE_DELIMITER + j + " or count > 5 ", null).getCount();
        } catch (Exception unused) {
            return -1;
        }
    }

    private synchronized int b(int i) {
        try {
        } catch (Exception unused) {
            return -1;
        }
        return getWritableDatabase().rawQuery("DELETE from reporterror where count >= " + i, null).getCount();
    }

    public final synchronized int b() {
        int count;
        Cursor cursorQuery = null;
        count = 0;
        try {
            try {
                cursorQuery = getReadableDatabase().query("reporterror", new String[]{" count(*) "}, null, null, null, null, null, null);
                count = cursorQuery.getCount();
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null) {
                }
                return count;
            }
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
        return count;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00ab A[Catch: all -> 0x00af, TRY_ENTER, TryCatch #5 {, blocks: (B:27:0x00a1, B:19:0x0092, B:34:0x00ab, B:35:0x00ae), top: B:44:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized List<com.mbridge.msdk.foundation.entity.n> a(int i) {
        ArrayList arrayList;
        Exception e;
        Cursor cursorQuery;
        ArrayList arrayList2;
        Cursor cursor = null;
        arrayList2 = null;
        arrayList2 = null;
        try {
            b(5);
            cursorQuery = getReadableDatabase().query("reporterror", null, null, null, null, null, null, i + "");
            if (cursorQuery != null) {
                try {
                    try {
                        if (cursorQuery.getCount() > 0) {
                            arrayList = new ArrayList();
                            while (cursorQuery.moveToNext()) {
                                try {
                                    String string = cursorQuery.getString(cursorQuery.getColumnIndex("url"));
                                    String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("data"));
                                    String string3 = cursorQuery.getString(cursorQuery.getColumnIndex("method"));
                                    String string4 = cursorQuery.getString(cursorQuery.getColumnIndex("unitId"));
                                    int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex("count"));
                                    long j = cursorQuery.getLong(cursorQuery.getColumnIndex("time_stamp"));
                                    com.mbridge.msdk.foundation.entity.n nVar = new com.mbridge.msdk.foundation.entity.n(string, string3, string2, string4);
                                    nVar.a(i2 + 1);
                                    nVar.a(j);
                                    arrayList.add(nVar);
                                } catch (Exception e2) {
                                    e = e2;
                                    e.printStackTrace();
                                    if (cursorQuery != null) {
                                        cursorQuery.close();
                                    }
                                    arrayList2 = arrayList;
                                }
                            }
                            arrayList2 = arrayList;
                        }
                    } catch (Exception e3) {
                        e = e3;
                        arrayList = null;
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorQuery;
                    if (cursor != null) {
                        cursor.close();
                    }
                    throw th;
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        } catch (Exception e4) {
            arrayList = null;
            e = e4;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            if (cursor != null) {
            }
            throw th;
        }
        return arrayList2;
    }

    private synchronized boolean b(String str, String str2, long j) {
        if (str == null) {
            str = "";
        }
        try {
            if (getWritableDatabase() == null) {
                return false;
            }
            StringBuilder sb = new StringBuilder();
            sb.append("select * from reporterror where url='");
            sb.append(str2);
            sb.append("' and ");
            sb.append("data");
            sb.append("='");
            sb.append(str);
            sb.append("' and ");
            sb.append("time_stamp");
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(j);
            return getReadableDatabase().rawQuery(sb.toString(), null).getCount() > 0;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final synchronized long a(com.mbridge.msdk.foundation.entity.n nVar) {
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("url", nVar.b());
            contentValues.put("method", nVar.c());
            contentValues.put("data", nVar.d());
            contentValues.put("unitId", nVar.a());
            contentValues.put("time_stamp", Long.valueOf(nVar.g()));
            if (getWritableDatabase() == null) {
                return -1L;
            }
            if (b(nVar.d(), nVar.b(), nVar.g())) {
                return getWritableDatabase().rawQuery("UPDATE reporterror SET count = " + nVar.f() + " where url='" + nVar.b() + "' and data='" + nVar.d() + "' and time_stamp" + ContainerUtils.KEY_VALUE_DELIMITER + nVar.g(), null).getCount();
            }
            contentValues.put("count", Integer.valueOf(nVar.f()));
            return getWritableDatabase().insert("reporterror", null, contentValues);
        } catch (Exception unused) {
            return -1L;
        }
    }
}
