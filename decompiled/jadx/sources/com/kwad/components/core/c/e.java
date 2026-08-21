package com.kwad.components.core.c;

import android.content.ContentValues;
import android.database.Cursor;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class e implements h {
    private static volatile e IC;
    private String ID;
    private int IE = 0;
    private int IF = 1;
    private long IG = com.tkay.expressad.d.a.b.aC;
    private boolean IH = false;

    private e() {
    }

    private e(long j) {
        this.ID = String.valueOf(j);
    }

    public static e I(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return null;
        }
        long j = adTemplate.posId;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        e eVar = new e(j);
        eVar.IE = adInfoCg.adBaseInfo.adCacheStrategy;
        eVar.IG = adInfoCg.adBaseInfo.adCacheSecond;
        eVar.IF = adInfoCg.adBaseInfo.adCacheSize;
        eVar.IH = adInfoCg.adBaseInfo.adCacheSwitch == 1;
        return eVar;
    }

    public static synchronized List<e> a(Cursor cursor) {
        if (cursor == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        while (cursor.moveToNext()) {
            try {
                arrayList.add(b(cursor));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return arrayList;
    }

    private static synchronized e b(Cursor cursor) {
        e eVar;
        String string = cursor.getString(cursor.getColumnIndex("posId"));
        int i = cursor.getInt(cursor.getColumnIndex("strategyCode"));
        int i2 = cursor.getInt(cursor.getColumnIndex("cacheSize"));
        long j = cursor.getLong(cursor.getColumnIndex("cacheSecond"));
        boolean z = true;
        if (cursor.getInt(cursor.getColumnIndex("enable")) != 1) {
            z = false;
        }
        eVar = new e();
        eVar.ID = string;
        eVar.IE = i;
        eVar.IF = i2;
        eVar.IG = j;
        eVar.IH = z;
        return eVar;
    }

    private static e mp() {
        if (IC == null) {
            synchronized (e.class) {
                if (IC == null) {
                    IC = new e();
                }
            }
        }
        return IC;
    }

    public static e p(long j) {
        e eVarAe;
        return (a.mg() == null || (eVarAe = a.mg().ae(String.valueOf(j))) == null) ? mp() : eVarAe;
    }

    public final boolean isDefault() {
        return equals(mp());
    }

    public final boolean isEnable() {
        return this.IH;
    }

    public final int mq() {
        return this.IE;
    }

    public final int mr() {
        return this.IF;
    }

    public final long ms() {
        return this.IG;
    }

    @Override // com.kwad.components.core.c.h
    public final ContentValues mt() {
        ContentValues contentValues = new ContentValues();
        contentValues.put("posId", this.ID);
        contentValues.put("strategyCode", Integer.valueOf(this.IE));
        contentValues.put("cacheSize", Integer.valueOf(this.IF));
        contentValues.put("cacheSecond", Long.valueOf(this.IG));
        contentValues.put("enable", Integer.valueOf(this.IH ? 1 : 0));
        return contentValues;
    }
}
