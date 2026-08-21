package com.huawei.updatesdk.service.otaupdate;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.AsyncTask;
import java.util.Locale;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

public class c {
    private static String a;

    public interface a {
        void a(Boolean bool);
    }

    private static class b extends AsyncTask<Void, Void, Boolean> {
        a a;

        public b(a aVar) {
            this.a = aVar;
        }

        /* JADX WARN: Removed duplicated region for block: B:33:0x006f A[EXC_TOP_SPLITTER, PHI: r1 r2
          0x006f: PHI (r1v1 android.database.Cursor) = (r1v0 android.database.Cursor), (r1v2 android.database.Cursor) binds: [B:20:0x008e, B:13:0x006d] A[DONT_GENERATE, DONT_INLINE]
          0x006f: PHI (r2v2 boolean) = (r2v0 boolean), (r2v4 boolean) binds: [B:20:0x008e, B:13:0x006d] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        protected Boolean doInBackground(Void... voidArr) {
            Cursor cursorQuery = null;
            boolean z = false;
            try {
                try {
                    cursorQuery = com.huawei.updatesdk.a.b.a.a.c().a().getContentResolver().query(Uri.parse(c.a), null, null, null, null);
                    if (cursorQuery == null || !cursorQuery.moveToFirst()) {
                        com.huawei.updatesdk.a.a.a.a("AutoUpdateUtil", "cursor == null");
                    } else {
                        boolean zBooleanValue = Boolean.valueOf(cursorQuery.getString(cursorQuery.getColumnIndex("isagree"))).booleanValue();
                        boolean zBooleanValue2 = Boolean.valueOf(cursorQuery.getString(cursorQuery.getColumnIndex("isopenautoupdate"))).booleanValue();
                        boolean zBooleanValue3 = Boolean.valueOf(cursorQuery.getString(cursorQuery.getColumnIndex("isneverreminder"))).booleanValue();
                        if (zBooleanValue && !zBooleanValue2 && !zBooleanValue3) {
                            z = true;
                        }
                    }
                } catch (Exception e) {
                    com.huawei.updatesdk.a.a.a.a("AutoUpdateUtil", "close cursor error: " + e.toString());
                    if (0 != 0) {
                    }
                }
                if (cursorQuery != null) {
                    try {
                        cursorQuery.close();
                    } catch (Exception unused) {
                        com.huawei.updatesdk.a.a.c.a.a.a.b("AutoUpdateUtil", "cursor Execption");
                    }
                }
                return Boolean.valueOf(z);
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        cursorQuery.close();
                    } catch (Exception unused2) {
                        com.huawei.updatesdk.a.a.c.a.a.a.b("AutoUpdateUtil", "cursor Execption");
                    }
                }
                throw th;
            }
        }

        @Override
        protected void onPostExecute(Boolean bool) {
            a aVar = this.a;
            if (aVar != null) {
                aVar.a(bool);
            }
        }
    }

    public void a(Context context, String str, a aVar, boolean z) {
        if (!com.huawei.updatesdk.b.h.b.b(context, str, z) || !f.e().d()) {
            aVar.a(false);
            return;
        }
        b bVar = new b(aVar);
        bVar.executeOnExecutor(Executors.newSingleThreadExecutor(), new Void[0]);
        try {
            a = String.format(Locale.ROOT, "content://%s.commondata/item/4", str);
            bVar.get(500L, TimeUnit.MILLISECONDS);
        } catch (Exception e) {
            bVar.cancel(true);
            com.huawei.updatesdk.a.a.a.a("AutoUpdateUtil", "init AutoUpdateInfo error: " + e.toString());
            aVar.a(false);
        }
    }
}
