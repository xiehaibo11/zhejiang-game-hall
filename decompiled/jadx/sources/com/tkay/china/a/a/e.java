package com.tkay.china.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f5873a;

    public e(Context context) {
        this.f5873a = context;
    }

    public final void a(com.tkay.china.a.a aVar) {
        try {
            this.f5873a.getPackageManager().getPackageInfo("com.meizu.flyme.openidsdk", 0);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        String string = null;
        try {
            Cursor cursorQuery = this.f5873a.getContentResolver().query(Uri.parse("content://com.meizu.flyme.openidsdk/"), (String[]) null, (String) null, new String[]{"oaid"}, (String) null);
            if (cursorQuery != null && !cursorQuery.isClosed()) {
                cursorQuery.moveToFirst();
                int columnIndex = cursorQuery.getColumnIndex("value");
                if (columnIndex > 0) {
                    string = cursorQuery.getString(columnIndex);
                }
            }
            aVar.a(string, false);
            if (cursorQuery != null) {
                try {
                    cursorQuery.close();
                } catch (Exception unused) {
                }
            }
        } catch (Throwable th2) {
            th2.getMessage();
        }
        if (TextUtils.isEmpty(string)) {
            aVar.a();
        }
    }
}
