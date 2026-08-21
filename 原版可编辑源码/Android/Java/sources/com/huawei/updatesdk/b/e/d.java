package com.huawei.updatesdk.b.e;

import android.database.Cursor;
import android.net.Uri;
import android.os.AsyncTask;
import android.text.TextUtils;
import com.huawei.updatesdk.service.otaupdate.f;

public class d extends AsyncTask<Void, Void, String> {
    private String a;
    private String b;

    public d(String str, String str2) {
        this.a = null;
        this.a = str;
        this.b = str2;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x005f A[Catch: all -> 0x0058, Exception -> 0x005a, TRY_LEAVE, TryCatch #7 {Exception -> 0x005a, all -> 0x0058, blocks: (B:8:0x002a, B:10:0x0030, B:15:0x005f), top: B:46:0x002a }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected String doInBackground(Void... voidArr) throws Throwable {
        Throwable th;
        Cursor cursorQuery;
        String str;
        Cursor cursor = null;
        string = null;
        String string = null;
        cursor = null;
        if (TextUtils.isEmpty(this.a)) {
            return null;
        }
        try {
            try {
                cursorQuery = com.huawei.updatesdk.a.b.a.a.c().a().getContentResolver().query(Uri.parse(this.a), null, null, null, null);
                if (cursorQuery != null) {
                    try {
                        if (cursorQuery.moveToFirst()) {
                            string = cursorQuery.getString(cursorQuery.getColumnIndex("homecountry"));
                            f.e().a(string);
                            com.huawei.updatesdk.b.b.a.d().a(this.b, System.currentTimeMillis());
                            com.huawei.updatesdk.b.b.a.d().b(this.b, string);
                        } else {
                            com.huawei.updatesdk.a.a.a.a("GetAccountZoneTask", "cursor == null: ");
                        }
                        if (cursorQuery == null) {
                            return string;
                        }
                        try {
                            cursorQuery.close();
                            return string;
                        } catch (Exception unused) {
                        }
                    } catch (Exception e) {
                        e = e;
                        String str2 = string;
                        cursor = cursorQuery;
                        str = str2;
                        com.huawei.updatesdk.a.a.a.a("GetAccountZoneTask", "close cursor error: " + e.toString());
                        if (cursor != null) {
                            try {
                                cursor.close();
                            } catch (Exception unused2) {
                                string = str;
                            }
                        }
                        return str;
                    } catch (Throwable th2) {
                        th = th2;
                        if (cursorQuery != null) {
                            try {
                                cursorQuery.close();
                            } catch (Exception unused3) {
                                com.huawei.updatesdk.a.a.c.a.a.a.b("GetAccountZoneTask", "cursor Execption");
                            }
                        }
                        throw th;
                    }
                }
                com.huawei.updatesdk.a.a.c.a.a.a.b("GetAccountZoneTask", "cursor Execption");
                return string;
            } catch (Exception e2) {
                e = e2;
                str = null;
            }
        } catch (Throwable th3) {
            Cursor cursor2 = cursor;
            th = th3;
            cursorQuery = cursor2;
        }
    }
}
