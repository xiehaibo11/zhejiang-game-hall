package com.mbridge.msdk.mbdownload;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.support.v4.app.NotificationCompat;
import com.mbridge.msdk.foundation.tools.z;
import java.text.SimpleDateFormat;
import java.util.Date;

public class d {
    private static final String a = d.class.getName();
    private static Context b;
    private a c;

    private static class b {
        public static final d a = new d();
    }

    private d() {
        this.c = new a(b);
    }

    public static d a(Context context) {
        if (b == null && context == null) {
            throw null;
        }
        if (b == null) {
            b = context;
        }
        return b.a;
    }

    public final void a(String str, String str2, int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put(NotificationCompat.CATEGORY_PROGRESS, Integer.valueOf(i));
        contentValues.put("last_modified", e.a());
        this.c.getWritableDatabase().update("mb_download_task_list", contentValues, "cp=? and url=?", new String[]{str, str2});
    }

    public final void a(int i) {
        try {
            Date date = new Date(new Date().getTime() - ((long) (i * 1000)));
            this.c.getWritableDatabase().execSQL(" DELETE FROM mb_download_task_list WHERE strftime('yyyy-MM-dd HH:mm:ss', last_modified)<=strftime('yyyy-MM-dd HH:mm:ss', '" + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(date) + "')");
            z.a(a, "clearOverdueTasks(" + i + ") remove all tasks before " + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(date));
        } catch (Exception e) {
            z.d(a, e.getMessage());
        }
    }

    public void finalize() {
        this.c.close();
    }

    class a extends SQLiteOpenHelper {
        @Override
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        a(Context context) {
            super(context, "MB_DATA", (SQLiteDatabase.CursorFactory) null, 2);
        }

        @Override
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
            z.a(d.a, "CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);");
            sQLiteDatabase.execSQL("CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);");
        }
    }
}
