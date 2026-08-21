package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;
import com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper;

public class MeizuDeviceIDHelper {
    private Context mContext;

    public MeizuDeviceIDHelper(Context context) {
        this.mContext = context;
    }

    public void getMeizuID(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        try {
            this.mContext.getPackageManager().getPackageInfo("com.meizu.flyme.openidsdk", 0);
        } catch (Exception e) {
            Log.i("Wooo", "intentForID getMEIZID service not found;");
            e.printStackTrace();
        }
        try {
            Cursor cursorQuery = this.mContext.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), null, null, new String[]{"oaid"}, null);
            String oaid = getOaid(cursorQuery);
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(oaid);
            }
            cursorQuery.close();
        } catch (Throwable th) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
            }
            th.printStackTrace();
        }
    }

    private String getOaid(Cursor cursor) {
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
}
