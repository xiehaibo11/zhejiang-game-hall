package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.out.Campaign;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: SCDao.java */
/* JADX INFO: loaded from: classes2.dex */
public class p extends a<Campaign> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f3371a = p.class.getName();
    private static p b = null;

    private p(h hVar) {
        super(hVar);
    }

    public static p a(h hVar) {
        if (b == null) {
            synchronized (p.class) {
                if (b == null) {
                    b = new p(hVar);
                }
            }
        }
        return b;
    }

    public final synchronized long a(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("package_name", campaignEx.getPackageName());
            contentValues.put("download_url", campaignEx.getClickURL());
            contentValues.put("click_mode", campaignEx.getClick_mode());
            contentValues.put("ttc", Boolean.valueOf(campaignEx.isPreClick()));
            contentValues.put("get_time", Long.valueOf(System.currentTimeMillis()));
            if (a(campaignEx.getPackageName())) {
                return getWritableDatabase().update(com.tkay.expressad.d.a.b.bH, contentValues, "package_name = '" + campaignEx.getPackageName() + "'", null);
            }
            return getWritableDatabase().insert(com.tkay.expressad.d.a.b.bH, null, contentValues);
        } catch (Exception e) {
            e.printStackTrace();
            return -1L;
        }
    }

    public final synchronized void a(final List<CampaignEx> list) {
        if (list != null) {
            if (list.size() != 0) {
                new Thread(new Runnable() { // from class: com.mbridge.msdk.foundation.db.p.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            p.this.a((CampaignEx) it.next());
                        }
                    }
                }).start();
            }
        }
    }

    private synchronized boolean a(String str) {
        Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT get_time FROM sc WHERE package_name='" + str + "'", null);
        if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused) {
            }
            return true;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused2) {
            }
        }
        return false;
    }
}
