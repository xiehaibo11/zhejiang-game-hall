package com.tkay.china.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

public final class k {
    private Context b;
    private boolean c = false;
    String a = null;

    public k(Context context) {
        this.b = context;
    }

    public final String a() {
        try {
            Cursor cursorQuery = this.b.getContentResolver().query(Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID"), (String[]) null, (String) null, (String[]) null, (String) null);
            if (cursorQuery != null) {
                string = cursorQuery.moveToNext() ? cursorQuery.getString(cursorQuery.getColumnIndex("value")) : null;
                cursorQuery.close();
            }
        } catch (Exception e) {
            e.printStackTrace();
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return string;
    }
}
