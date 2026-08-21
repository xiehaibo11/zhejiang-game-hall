package com.igexin.push.core.b;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class e implements b {
    private static e a;
    private List<com.igexin.push.core.bean.h> b = new CopyOnWriteArrayList();

    private e() {
    }

    private int a(byte b) {
        Iterator<com.igexin.push.core.bean.h> it = this.b.iterator();
        int i = 0;
        while (it.hasNext()) {
            if (it.next().c() == b) {
                i++;
            }
        }
        return i;
    }

    public static e a() {
        if (a == null) {
            a = new e();
        }
        return a;
    }

    private com.igexin.push.core.bean.h a(long j) {
        for (com.igexin.push.core.bean.h hVar : this.b) {
            if (hVar.a() == j) {
                return hVar;
            }
        }
        return null;
    }

    private static ContentValues b(com.igexin.push.core.bean.h hVar) {
        if (hVar == null) {
            return null;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Long.valueOf(hVar.a()));
        contentValues.put("data", com.igexin.b.b.a.b(hVar.b().getBytes()));
        contentValues.put("type", Byte.valueOf(hVar.c()));
        contentValues.put("time", Long.valueOf(hVar.d()));
        return contentValues;
    }

    private void b(byte b) {
        com.igexin.push.core.bean.h hVar = null;
        try {
            Iterator<com.igexin.push.core.bean.h> it = this.b.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                com.igexin.push.core.bean.h next = it.next();
                if (next.c() == b) {
                    hVar = next;
                    break;
                }
            }
            if (hVar != null) {
                a(hVar.a(), true, true);
            }
        } catch (Throwable unused) {
        }
    }

    public void a(long j, boolean z, boolean z2) {
        com.igexin.push.core.bean.h hVarA = a(j);
        if (hVarA != null) {
            this.b.remove(hVarA);
        }
        if (z) {
            com.igexin.b.a.b.c.b().a(new g(this, b(hVarA), j), z2, !z2);
        }
    }

    @Override
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    public void a(com.igexin.push.core.bean.h hVar) {
        if (hVar != null) {
            if (this.b.size() < 319 || hVar.c() == 2 || hVar.c() == 7 || hVar.c() == 9) {
                switch (hVar.c()) {
                    case 2:
                    case 7:
                    case 9:
                        b(hVar.c());
                        break;
                    case 3:
                        if (a((byte) 3) >= 300) {
                            return;
                        }
                        break;
                    case 5:
                        if (a((byte) 5) >= 3) {
                            return;
                        }
                        break;
                    case 6:
                        if (a((byte) 6) >= 10) {
                            return;
                        }
                        break;
                    case 8:
                        if (a((byte) 8) >= 3) {
                            return;
                        }
                        break;
                }
                this.b.add(hVar);
                com.igexin.b.a.b.c.b().a(new f(this, b(hVar)), false, true);
            }
        }
    }

    public boolean a(long j, long j2) {
        com.igexin.push.core.bean.h hVarA = a(j);
        if (hVarA == null) {
            return false;
        }
        hVarA.a(j2);
        com.igexin.b.a.b.c.b().a(new h(this, b(hVarA), j), true, true);
        return true;
    }

    public List<com.igexin.push.core.bean.h> b() {
        return this.b;
    }

    @Override
    public void b(SQLiteDatabase sQLiteDatabase) {
        Cursor cursorQuery = null;
        try {
            cursorQuery = sQLiteDatabase.query("ral", new String[]{"id", "data", "type", "time"}, null, null, null, null, null);
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (cursorQuery != null) {
                while (cursorQuery.moveToNext()) {
                    long j = cursorQuery.getLong(0);
                    byte b = (byte) cursorQuery.getInt(2);
                    long j2 = cursorQuery.getLong(3);
                    if (jCurrentTimeMillis - j2 > 259200000) {
                        a(j, true, true);
                    } else {
                        this.b.add(new com.igexin.push.core.bean.h(j, new String(com.igexin.b.b.a.c(cursorQuery.getBlob(1))), b, j2));
                    }
                }
            }
            if (cursorQuery == null) {
                return;
            }
        } catch (Exception unused) {
            if (cursorQuery == null) {
                return;
            }
        } catch (Throwable th) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
        cursorQuery.close();
    }

    @Override
    public void c(SQLiteDatabase sQLiteDatabase) {
    }
}
