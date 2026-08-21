package com.igexin.push.extension.distribution.basic.d;

import android.content.ContentValues;
import android.database.Cursor;
import com.igexin.push.extension.distribution.basic.c.e;

public class b {
    public static b a;
    private static final String b = "EXT-" + b.class.getName();
    private static com.igexin.push.extension.distribution.basic.e.a c = null;

    public static b a() {
        if (a == null) {
            a = new b();
            c = new com.igexin.push.extension.distribution.basic.e.a(e.a);
        }
        return a;
    }

    public void a(int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("key", Integer.valueOf(i));
        contentValues.put("value", str);
        c.a("extconfig", (String) null, contentValues);
    }

    public void a(long j) {
        e.i = j;
        a(6, String.valueOf(j));
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x0058 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x004d A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b() {
        String str;
        Cursor cursorA = null;
        try {
            cursorA = e.e.a("select key, value from extconfig order by key", (String[]) null);
            if (cursorA != null) {
                while (cursorA.moveToNext()) {
                    int i = cursorA.getInt(cursorA.getColumnIndex("key"));
                    if (i == 11 || i == 12 || i == 14) {
                        byte[] blob = cursorA.getBlob(cursorA.getColumnIndex("value"));
                        if (blob != null) {
                            blob = com.igexin.b.b.a.c(blob);
                        }
                        if (blob != null) {
                            str = new String(blob);
                            if (i != 4) {
                                e.d = str;
                            } else if (i == 6) {
                                e.i = Long.parseLong(str);
                            }
                        }
                    } else {
                        try {
                            str = cursorA.getString(cursorA.getColumnIndex("value"));
                            if (i != 4) {
                            }
                        } catch (Throwable unused) {
                        }
                    }
                }
            }
            if (cursorA == null) {
                return;
            }
        } catch (Exception unused2) {
            if (cursorA == null) {
                return;
            }
        } catch (Throwable th) {
            if (cursorA != null) {
                cursorA.close();
            }
            throw th;
        }
        cursorA.close();
    }
}
