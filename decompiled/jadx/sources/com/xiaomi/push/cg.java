package com.xiaomi.push;

import android.content.ContentValues;
import android.content.Context;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.xiaomi.push.cj;

/* JADX INFO: loaded from: classes4.dex */
public class cg extends cj.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f8078a;

    public cg(String str, ContentValues contentValues, String str2) {
        super(str, contentValues);
        this.f8078a = "MessageInsertJob";
        this.f8078a = str2;
    }

    public static cg a(Context context, String str, hn hnVar) {
        byte[] bArrA = it.a(hnVar);
        if (bArrA == null || bArrA.length <= 0) {
            return null;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", (Integer) 0);
        contentValues.put("messageId", "");
        contentValues.put("messageItemId", hnVar.d());
        contentValues.put("messageItem", bArrA);
        contentValues.put(com.tkay.expressad.videocommon.e.b.u, bx.a(context).b());
        contentValues.put(DBDefinition.PACKAGE_NAME, bx.a(context).m170a());
        contentValues.put("createTimeStamp", Long.valueOf(System.currentTimeMillis()));
        contentValues.put("uploadTimestamp", (Integer) 0);
        return new cg(str, contentValues, "a job build to insert message to db");
    }
}
