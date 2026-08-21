package com.ss.android.downloadlib.event;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.downloadlib.exception.q;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    private static volatile df df;
    private SQLiteDatabase rg;

    public static df rg() {
        if (df == null) {
            synchronized (df.class) {
                if (df == null) {
                    df = new df();
                }
            }
        }
        return df;
    }

    private df() {
        try {
            this.rg = new rg(bm.getContext()).getWritableDatabase();
        } catch (Throwable th) {
            q.rg().rg(th, "ClickEventHelper");
        }
    }

    public boolean df() {
        return DownloadSetting.obtainGlobal().optInt("click_event_switch", 0) == 1;
    }

    public boolean q() {
        return DownloadSetting.obtainGlobal().optInt("click_event_switch", 0) == 2;
    }

    public void rg(long j, String str) {
        SQLiteDatabase sQLiteDatabase = this.rg;
        if (sQLiteDatabase == null || !sQLiteDatabase.isOpen() || j <= 0 || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString("req_id");
            if (TextUtils.isEmpty(strOptString)) {
                return;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("ad_id", Long.valueOf(j));
            contentValues.put("req_id", strOptString);
            contentValues.put("time", Long.valueOf(System.currentTimeMillis()));
            this.rg.insert("click_event", null, contentValues);
        } catch (Exception e) {
            e.printStackTrace();
        }
        q(j, str);
    }

    public boolean df(long j, String str) {
        SQLiteDatabase sQLiteDatabase = this.rg;
        if (sQLiteDatabase == null || !sQLiteDatabase.isOpen() || j <= 0 || TextUtils.isEmpty(str)) {
            return false;
        }
        Cursor cursorQuery = null;
        try {
            try {
                String strOptString = new JSONObject(str).optString("req_id");
                if (TextUtils.isEmpty(strOptString)) {
                    return false;
                }
                cursorQuery = this.rg.query("click_event", rg.rg, "time > ? AND ad_id = ? AND req_id = ?", new String[]{String.valueOf(System.currentTimeMillis() - 1209600000), String.valueOf(j), strOptString}, null, null, null, null);
                boolean z = cursorQuery.getCount() > 0;
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return z;
            } catch (Exception e) {
                e.printStackTrace();
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return false;
            }
        } catch (Throwable th) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
    }

    private void q(long j, String str) {
        SQLiteDatabase sQLiteDatabase = this.rg;
        if (sQLiteDatabase == null || !sQLiteDatabase.isOpen() || j <= 0 || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString("req_id");
            if (TextUtils.isEmpty(strOptString)) {
                return;
            }
            this.rg.delete("click_event", "time < ? AND ad_id = ? AND req_id = ?", new String[]{String.valueOf(System.currentTimeMillis() - 1209600000), String.valueOf(j), strOptString});
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
