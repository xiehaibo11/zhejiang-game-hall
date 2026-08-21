package com.kwad.sdk.utils;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;

public final class ae {
    private static String aIN;
    private static boolean aIO;

    public static String ch(Context context) {
        if (!TextUtils.isEmpty(aIN) || aIO || !as.IT()) {
            return aIN;
        }
        Cursor cursorQuery = null;
        try {
            cursorQuery = context.getContentResolver().query(Uri.parse("content://com.xiaomi.market.provider.DirectMailProvider"), null, null, null, null);
            aIN = k(cursorQuery);
        } catch (Throwable unused) {
        }
        com.kwad.sdk.crash.utils.b.closeQuietly(cursorQuery);
        aIO = TextUtils.isEmpty(aIN);
        return aIN;
    }

    private static String k(Cursor cursor) {
        int columnIndex;
        if (cursor == null || cursor.isClosed()) {
            com.kwad.sdk.core.e.c.i("MiMarketHelper", "cursor is null");
            return "";
        }
        cursor.moveToFirst();
        int columnIndex2 = cursor.getColumnIndex("support");
        return ((columnIndex2 <= 0 || cursor.getInt(columnIndex2) != 0) && (columnIndex = cursor.getColumnIndex("detailStyle")) > 0) ? cursor.getString(columnIndex) : "";
    }
}
