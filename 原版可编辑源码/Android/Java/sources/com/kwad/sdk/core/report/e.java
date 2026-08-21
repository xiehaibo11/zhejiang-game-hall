package com.kwad.sdk.core.report;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public abstract class e implements o<g> {
    protected d aqP;

    public e(d dVar) {
        a(dVar);
    }

    private void a(d dVar) {
        this.aqP = dVar;
    }

    private synchronized void c(g gVar) {
        com.kwad.sdk.core.e.c.d(getTag(), "deleteAction action = " + gVar);
        try {
            this.aqP.getReadableDatabase().delete(BV(), "actionId=?", new String[]{gVar.actionId});
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    protected abstract String BV();

    protected abstract String BW();

    @Override
    public final synchronized List<g> BX() {
        try {
            try {
                String strBW = BW();
                cursorRawQuery = TextUtils.isEmpty(strBW) ? null : this.aqP.getReadableDatabase().rawQuery(strBW, null);
                if (cursorRawQuery != null) {
                    ArrayList<g> arrayList = new ArrayList();
                    while (cursorRawQuery.moveToNext()) {
                        try {
                            arrayList.add(g(cursorRawQuery));
                        } catch (Exception e) {
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                    com.kwad.sdk.core.e.c.d(getTag(), "read size= " + arrayList.size());
                    for (g gVar : arrayList) {
                        com.kwad.sdk.core.e.c.d(getTag(), "read action=" + gVar);
                    }
                    return arrayList;
                }
            } catch (Exception e2) {
                com.kwad.sdk.core.e.c.printStackTrace(e2);
            }
            return new ArrayList();
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
        }
    }

    @Override
    public final synchronized void j(g gVar) {
        com.kwad.sdk.core.e.c.d(getTag(), "write = " + gVar);
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("actionId", gVar.actionId);
            contentValues.put("aLog", gVar.toJson().toString());
            try {
                this.aqP.getReadableDatabase().insert(BV(), null, contentValues);
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        } catch (Exception e2) {
            com.kwad.sdk.core.e.c.printStackTrace(e2);
        }
    }

    protected abstract g g(Cursor cursor);

    protected abstract String getTag();

    @Override
    public final synchronized long size() {
        long j;
        Cursor cursorRawQuery = null;
        try {
            cursorRawQuery = this.aqP.getReadableDatabase().rawQuery("select count(*) from " + BV(), null);
            cursorRawQuery.moveToFirst();
            j = cursorRawQuery.getLong(0);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            j = 0;
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(cursorRawQuery);
        }
        return j;
    }

    @Override
    public final synchronized void t(List<g> list) {
        com.kwad.sdk.core.e.c.d(getTag(), "delete size= " + list.size());
        SQLiteDatabase readableDatabase = null;
        try {
            try {
                readableDatabase = this.aqP.getReadableDatabase();
                readableDatabase.beginTransaction();
                Iterator<g> it = list.iterator();
                while (it.hasNext()) {
                    c(it.next());
                }
                readableDatabase.setTransactionSuccessful();
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
                if (readableDatabase != null) {
                    try {
                        readableDatabase.endTransaction();
                    } catch (Exception e2) {
                        com.kwad.sdk.core.e.c.printStackTrace(e2);
                    }
                }
            }
        } finally {
            if (readableDatabase != null) {
                try {
                    readableDatabase.endTransaction();
                } catch (Exception e3) {
                    com.kwad.sdk.core.e.c.printStackTrace(e3);
                }
            }
        }
    }
}
