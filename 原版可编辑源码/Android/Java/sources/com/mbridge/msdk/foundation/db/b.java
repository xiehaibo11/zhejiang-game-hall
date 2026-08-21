package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.List;

public class b extends a {
    private static volatile b a;

    private b(h hVar) {
        super(hVar);
    }

    public static b a(Context context) {
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b(i.a(context));
                }
            }
        }
        return a;
    }

    public final void a(String str, List<CampaignEx> list) {
        if (TextUtils.isEmpty(str) || list == null || list.size() <= 0) {
            return;
        }
        try {
            String requestId = list.get(0).getRequestId();
            String encryptPrice = list.get(0).getEncryptPrice();
            String campaignUnitId = list.get(0).getCampaignUnitId();
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase == null) {
                return;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("bid_unit_id", campaignUnitId);
            contentValues.put("expect_bid_token", str);
            contentValues.put("expect_encrypt_price", "");
            contentValues.put("real_request_id", requestId);
            contentValues.put("real_encrypt_price", encryptPrice);
            contentValues.put("real_token_rule", (Integer) 1);
            contentValues.put("is_replace", (Integer) 0);
            writableDatabase.insert("bid_replace_campaign", null, contentValues);
            z.d("HBOPTIMIZE", "插入数据到对应关系表 期望 bidToken 值" + str + "+ 用于替换期望Offer 的RequestId " + requestId);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final int a(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || getWritableDatabase() == null) {
            return 0;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("is_replace", (Integer) 1);
            return getWritableDatabase().update("bid_replace_campaign", contentValues, "bid_unit_id = '" + str2 + "' AND expect_bid_token = '" + str + "'", null);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public final int a(String str) {
        try {
            String str2 = "real_request_id = '" + str + "' AND is_replace = 1";
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase == null) {
                return 0;
            }
            return writableDatabase.delete("bid_replace_campaign", str2, null);
        } catch (Exception e) {
            z.d("BidReplaceCampaignDao", e.getLocalizedMessage());
            return 0;
        }
    }

    public final int a() {
        try {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase == null) {
                return 0;
            }
            return writableDatabase.delete("bid_replace_campaign", "is_replace = 0", null);
        } catch (Exception e) {
            z.d("BidReplaceCampaignDao", e.getLocalizedMessage());
            return 0;
        }
    }

    public final int a(String str, String str2, String str3) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3) || getWritableDatabase() == null) {
            return 0;
        }
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("expect_encrypt_price", str3);
            return getWritableDatabase().update("bid_replace_campaign", contentValues, "bid_unit_id = '" + str2 + "' AND expect_bid_token = '" + str + "'", null);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x00db A[PHI: r9
      0x00db: PHI (r9v6 android.database.Cursor) = (r9v5 android.database.Cursor), (r9v7 android.database.Cursor) binds: [B:29:0x00d9, B:20:0x00c7] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<com.mbridge.msdk.foundation.entity.d> b(String str, String str2) {
        ArrayList arrayList = new ArrayList();
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return arrayList;
        }
        Cursor cursorRawQuery = null;
        try {
            try {
                synchronized (new Object()) {
                    cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM bid_replace_campaign WHERE bid_unit_id = '" + str + "' AND real_request_id = '" + str2 + "'", null);
                }
                if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                    while (cursorRawQuery.moveToNext()) {
                        com.mbridge.msdk.foundation.entity.d dVar = new com.mbridge.msdk.foundation.entity.d();
                        String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("bid_unit_id"));
                        String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("expect_bid_token"));
                        String string3 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("expect_encrypt_price"));
                        String string4 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("real_request_id"));
                        String string5 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("real_encrypt_price"));
                        int i = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("real_token_rule"));
                        int i2 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_replace"));
                        dVar.a(string);
                        dVar.b(string2);
                        dVar.c(string3);
                        dVar.d(string4);
                        dVar.e(string5);
                        dVar.a(i);
                        dVar.b(i2);
                        arrayList.add(dVar);
                    }
                }
            } catch (Exception e) {
                z.d("BidReplaceCampaignDao", e.getLocalizedMessage());
                if (0 != 0) {
                }
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return arrayList;
        } catch (Throwable th) {
            if (0 != 0) {
                cursorRawQuery.close();
            }
            throw th;
        }
    }
}
