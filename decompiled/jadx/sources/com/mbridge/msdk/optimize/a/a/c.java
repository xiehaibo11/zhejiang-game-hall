package com.mbridge.msdk.optimize.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

/* JADX INFO: compiled from: MeizuDeviceHelper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3860a;

    public c(Context context) {
        this.f3860a = context;
    }

    public final void a(com.mbridge.msdk.optimize.a.b bVar) {
        try {
            this.f3860a.getPackageManager().getPackageInfo("com.meizu.flyme.openidsdk", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            Cursor cursorQuery = this.f3860a.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), null, null, new String[]{"oaid"}, null);
            if (cursorQuery != null && !cursorQuery.isClosed()) {
                cursorQuery.moveToFirst();
                int columnIndex = cursorQuery.getColumnIndex("value");
                string = columnIndex > 0 ? cursorQuery.getString(columnIndex) : null;
                int columnIndex2 = cursorQuery.getColumnIndex("code");
                if (columnIndex2 > 0) {
                    cursorQuery.getInt(columnIndex2);
                }
                int columnIndex3 = cursorQuery.getColumnIndex("expired");
                if (columnIndex3 > 0) {
                    cursorQuery.getLong(columnIndex3);
                }
            }
            if (bVar != null) {
                bVar.a(string, false);
            }
            if (cursorQuery != null) {
                try {
                    cursorQuery.close();
                } catch (Exception unused) {
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
