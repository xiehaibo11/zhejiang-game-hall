package com.mbridge.msdk.optimize.a.a;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;

/* JADX INFO: compiled from: VivoDeviceHelper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class h {
    private Context b;
    private boolean c = false;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f3868a = null;

    public h(Context context) {
        this.b = context;
    }

    public final String a() {
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
