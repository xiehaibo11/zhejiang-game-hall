package com.reyun.tracking.b.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

public class m {
    private Context b;
    private boolean c = false;
    String a = null;

    public m(Context context) {
        this.b = context;
    }

    public String a() {
        try {
            Cursor cursorQuery = this.b.getContentResolver().query(Uri.parse("content://com.vivo.vms.IdProvider/IdentifierId/OAID"), null, null, null, null);
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
