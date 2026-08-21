package com.tkay.china.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

/* JADX INFO: loaded from: classes3.dex */
public final class k {
    private Context b;
    private boolean c = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5881a = null;

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
