package com.mbridge.msdk.mbdownload;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.support.v4.app.NotificationCompat;
import com.mbridge.msdk.foundation.tools.z;
import java.text.SimpleDateFormat;
import java.util.Date;

/* JADX INFO: compiled from: DownloadTaskList.java */
/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3668a = d.class.getName();
    private static Context b;
    private a c;

    /* JADX INFO: compiled from: DownloadTaskList.java */
    private static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final d f3670a = new d();
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
        return b.f3670a;
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
            z.a(f3668a, "clearOverdueTasks(" + i + ") remove all tasks before " + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(date));
        } catch (Exception e) {
            z.d(f3668a, e.getMessage());
        }
    }

    public void finalize() {
        this.c.close();
    }

    /* JADX INFO: compiled from: DownloadTaskList.java */
    class a extends SQLiteOpenHelper {
        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        }

        a(Context context) {
            super(context, "MB_DATA", (SQLiteDatabase.CursorFactory) null, 2);
        }

        @Override // android.database.sqlite.SQLiteOpenHelper
        public final void onCreate(SQLiteDatabase sQLiteDatabase) {
            z.a(d.f3668a, "CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);");
            sQLiteDatabase.execSQL("CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);");
        }
    }
}
