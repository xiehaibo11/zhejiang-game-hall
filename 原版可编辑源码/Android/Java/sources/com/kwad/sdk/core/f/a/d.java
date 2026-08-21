package com.kwad.sdk.core.f.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

public final class d {
    private Context mContext;

    public d(Context context) {
        this.mContext = context;
    }

    private static String f(Cursor cursor) {
        String string;
        string = "";
        if (cursor != null && !cursor.isClosed()) {
            cursor.moveToFirst();
            int columnIndex = cursor.getColumnIndex("value");
            string = columnIndex > 0 ? cursor.getString(columnIndex) : "";
            int columnIndex2 = cursor.getColumnIndex("code");
            if (columnIndex2 > 0) {
                cursor.getInt(columnIndex2);
            }
            int columnIndex3 = cursor.getColumnIndex("expired");
            if (columnIndex3 > 0) {
                cursor.getLong(columnIndex3);
            }
        }
        return string;
    }

    public final String getOAID() {
        String strF = "";
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = this.mContext.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), null, null, new String[]{"oaid"}, null);
                strF = f(cursorQuery);
                new StringBuilder("getOAID oaid:").append(strF);
            } finally {
                try {
                } finally {
                }
            }
        } catch (Exception unused) {
        }
        return strF;
    }
}
