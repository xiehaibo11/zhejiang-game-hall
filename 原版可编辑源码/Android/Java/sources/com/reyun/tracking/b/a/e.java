package com.reyun.tracking.b.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

public class e {
    private Context a;

    public e(Context context) {
        this.a = context;
    }

    private String a(Cursor cursor) {
        if (cursor == null || cursor.isClosed()) {
            return null;
        }
        cursor.moveToFirst();
        int columnIndex = cursor.getColumnIndex("value");
        String string = columnIndex > 0 ? cursor.getString(columnIndex) : null;
        int columnIndex2 = cursor.getColumnIndex("code");
        if (columnIndex2 > 0) {
            cursor.getInt(columnIndex2);
        }
        int columnIndex3 = cursor.getColumnIndex("expired");
        if (columnIndex3 > 0) {
            cursor.getLong(columnIndex3);
        }
        return string;
    }

    public void a(com.reyun.tracking.b.d dVar) {
        try {
            this.a.getPackageManager().getPackageInfo("com.meizu.flyme.openidsdk", 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            Cursor cursorQuery = this.a.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), null, null, new String[]{"oaid"}, null);
            String strA = a(cursorQuery);
            if (dVar != null) {
                dVar.a(strA, false);
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
