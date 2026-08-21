package com.igexin.push.config;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.igexin.push.core.a.q;
import com.igexin.sdk.PushBuildConfig;
import org.json.JSONArray;

public class a implements com.igexin.push.core.b.b {
    public static final String a = a.class.getName();
    private static a b;

    public static a a() {
        if (b == null) {
            b = new a();
        }
        return b;
    }

    private void a(SQLiteDatabase sQLiteDatabase, int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", str);
        sQLiteDatabase.replace("config", null, contentValues);
    }

    private void a(SQLiteDatabase sQLiteDatabase, int i, byte[] bArr) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", bArr);
        sQLiteDatabase.replace("config", null, contentValues);
    }

    @Override
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    public void a(String str) {
        com.igexin.b.a.b.c.b().a(new f(this, str), true, false);
    }

    public void b() {
        com.igexin.b.a.b.c.b().a(new b(this), false, true);
    }

    /* JADX WARN: Removed duplicated region for block: B:115:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x00b2 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:94:0x004e A[SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b(SQLiteDatabase sQLiteDatabase) {
        byte[] blob;
        String string;
        Cursor cursor = null;
        try {
            Cursor cursorQuery = sQLiteDatabase.query("config", new String[]{"id", "value"}, null, null, null, null, "id");
            if (cursorQuery != null) {
                while (cursorQuery.moveToNext()) {
                    try {
                        int i = cursorQuery.getInt(0);
                        if (i == 24 || i == 26 || i == 64) {
                            blob = cursorQuery.getBlob(1);
                            if (blob != null) {
                                blob = com.igexin.b.a.a.a.c(blob, com.igexin.push.core.d.E);
                            }
                            string = null;
                            if (blob == null || string != null) {
                                if (i == 1) {
                                    if (i != 2) {
                                        if (i != 3) {
                                            if (i != 15) {
                                                if (i != 16) {
                                                    if (i == 24) {
                                                        l.a(new String(blob), false);
                                                    } else if (i == 26) {
                                                        try {
                                                            SDKUrlConfig.setIdcConfigUrl(q.a(new JSONArray(new String(blob))));
                                                        } catch (Exception unused) {
                                                        }
                                                    }
                                                } else if (!string.equals("null")) {
                                                    j.e = Integer.parseInt(string);
                                                }
                                            } else if (!string.equals("null")) {
                                                j.d = Integer.parseInt(string);
                                            }
                                        } else if (!string.equals("null")) {
                                            j.c = Long.parseLong(string);
                                        }
                                    } else if (!string.equals("null")) {
                                        j.b = Integer.parseInt(string);
                                    }
                                } else if (!string.equals("null")) {
                                    j.a = Integer.parseInt(string);
                                }
                            }
                        } else {
                            try {
                                string = cursorQuery.getString(1);
                                blob = null;
                                if (blob == null) {
                                }
                                if (i == 1) {
                                }
                            } catch (Throwable th) {
                                com.igexin.b.a.c.b.a(a + "|" + th.toString(), new Object[0]);
                            }
                        }
                    } catch (Throwable unused2) {
                        cursor = cursorQuery;
                        if (cursor != null) {
                            cursor.close();
                        }
                        com.igexin.b.a.c.b.a(a + "|current ver = " + PushBuildConfig.sdk_conf_version + ", last ver = " + com.igexin.push.core.d.J, new Object[0]);
                        if (PushBuildConfig.sdk_conf_version.equals(com.igexin.push.core.d.J)) {
                        }
                    }
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        } catch (Throwable unused3) {
        }
        com.igexin.b.a.c.b.a(a + "|current ver = " + PushBuildConfig.sdk_conf_version + ", last ver = " + com.igexin.push.core.d.J, new Object[0]);
        if (PushBuildConfig.sdk_conf_version.equals(com.igexin.push.core.d.J)) {
            com.igexin.push.core.b.i.a().e(PushBuildConfig.sdk_conf_version);
        }
    }

    public void b(String str) {
        com.igexin.b.a.b.c.b().a(new g(this, str), true, false);
    }

    public void c() {
        com.igexin.b.a.b.c.b().a(new c(this), false, true);
    }

    @Override
    public void c(SQLiteDatabase sQLiteDatabase) {
        a(sQLiteDatabase, 1, String.valueOf(j.a));
        a(sQLiteDatabase, 2, String.valueOf(j.b));
        a(sQLiteDatabase, 3, String.valueOf(j.c));
        a(sQLiteDatabase, 15, String.valueOf(j.d));
        a(sQLiteDatabase, 3, String.valueOf(j.c));
    }

    public void d() {
        com.igexin.b.a.b.c.b().a(new d(this), false, true);
    }

    public void e() {
        com.igexin.b.a.b.c.b().a(new e(this), false, true);
    }
}
