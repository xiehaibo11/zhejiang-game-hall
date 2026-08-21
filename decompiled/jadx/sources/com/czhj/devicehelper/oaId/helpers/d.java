package com.czhj.devicehelper.oaId.helpers;

import android.content.Context;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.net.Uri;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.sdk.logger.SigmobLog;

/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f1727a;

    public d(Context context) {
        this.f1727a = context;
    }

    private String a(Cursor cursor) {
        if (cursor == null || cursor.isClosed()) {
            return null;
        }
        cursor.moveToFirst();
        int columnIndex = cursor.getColumnIndex("value");
        if (columnIndex > 0) {
            return cursor.getString(columnIndex);
        }
        return null;
    }

    private boolean a() {
        try {
            PackageManager packageManager = this.f1727a.getPackageManager();
            if (packageManager != null) {
                return packageManager.resolveContentProvider("com.meizu.flyme.openidsdk", 0) != null;
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }

    public void a(DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (a()) {
            try {
                Cursor cursorQuery = this.f1727a.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), null, null, new String[]{"oaid"}, null);
                String strA = a(cursorQuery);
                if (appIdsUpdater != null) {
                    appIdsUpdater.OnIdsAvalid(strA);
                }
                cursorQuery.close();
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
    }
}
