package com.mbridge.msdk.foundation.db;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.entity.AabEntity;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.RewardPlus;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.out.Campaign;
import com.tkay.basead.b.a;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.c.l;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class f extends a<Campaign> {
    private static final String a = f.class.getName();
    private static f b = null;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private final String j;
    private final String k;
    private final String l;
    private final String m;
    private final String n;
    private final String o;
    private final String p;
    private final String q;
    private final String r;

    protected f(h hVar) {
        super(hVar);
        this.c = "rid";
        this.d = "cid";
        this.e = "plct";
        this.f = "plctb";
        this.g = "timestamp";
        this.h = "ridCount";
        this.i = " WHERE ";
        this.j = " AND ";
        this.k = "SELECT ";
        this.l = "*";
        this.m = " FROM ";
        this.n = " AND readyState = '0'";
        this.o = " AND is_bid_campaign = 1";
        this.p = " order by ts ASC";
        this.q = " group by request_id";
        this.r = " group by bid_token";
    }

    public static f a(h hVar) {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new f(hVar);
                }
            }
        }
        return b;
    }

    public final synchronized void a(String str, int i, int i2) {
        try {
            String str2 = "unitid = " + str + " AND level = " + i + " AND adSource = " + i2;
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, int i, int i2, boolean z) {
        String string;
        try {
            String str2 = "unitid = " + str + " AND level = " + i + " AND adSource = " + i2;
            StringBuilder sb = new StringBuilder();
            sb.append(str2);
            sb.append(" AND is_bid_campaign = ");
            sb.append(z ? 1 : 0);
            string = sb.toString();
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, string, null);
    }

    public final synchronized void a(String str, List<CampaignEx> list) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("readyState", (Integer) 2);
                    String str2 = "id = '" + campaignEx.getId() + "' AND unitid = " + str + " AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                    StringBuilder sb = new StringBuilder();
                    sb.append(str2);
                    sb.append(" AND is_bid_campaign = ");
                    sb.append(campaignEx.isBidCampaign() ? 1 : 0);
                    String string = sb.toString();
                    try {
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, string, null);
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, boolean z) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        if (campaignEx.getLoadTimeoutState() == 0) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("unitid");
                            sb.append(" = '");
                            sb.append(str);
                            sb.append("' AND ");
                            sb.append("id");
                            sb.append(" = '");
                            sb.append(campaignEx.getId());
                            sb.append("' AND ");
                            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
                            sb.append(" = '");
                            sb.append(campaignEx.getRequestId());
                            sb.append("'");
                            if (z) {
                                sb.append(" AND is_bid_campaign = 1");
                            } else {
                                sb.append(" AND is_bid_campaign = 0");
                            }
                            ContentValues contentValues = new ContentValues();
                            contentValues.put("readyState", (Integer) 2);
                            SQLiteDatabase writableDatabase = getWritableDatabase();
                            if (writableDatabase != null) {
                                writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, sb.toString(), null);
                            }
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, String str2, int i) {
        if (!TextUtils.isEmpty(str) && list != null && list.size() > 0 && !TextUtils.isEmpty(str2)) {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase == null) {
                return;
            }
            try {
                for (CampaignEx campaignEx : list) {
                    if (campaignEx != null) {
                        String str3 = "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                        ContentValues contentValues = new ContentValues();
                        contentValues.put(str2, Integer.valueOf(i));
                        writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
                    }
                }
            } catch (Exception unused) {
            }
        }
    }

    public final synchronized void a(String str, List<CampaignEx> list, List<CampaignEx> list2, boolean z) {
        if (getWritableDatabase() == null) {
            return;
        }
        try {
            if (list != null) {
                try {
                    if (list.size() > 0) {
                        for (CampaignEx campaignEx : list) {
                            try {
                                ContentValues contentValues = new ContentValues();
                                contentValues.put("readyState", (Integer) 0);
                                String str2 = "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'";
                                getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, z ? str2 + " AND is_bid_campaign = 1" : str2 + " AND is_bid_campaign = 0", null);
                            } catch (Exception e) {
                                z.d("CampaignDao", e.getLocalizedMessage());
                            }
                        }
                    }
                } catch (Exception e2) {
                    z.d("CampaignDao", e2.getLocalizedMessage());
                }
            }
            if (list2 != null && list2.size() > 0) {
                for (CampaignEx campaignEx2 : list2) {
                    try {
                        if (campaignEx2.getLoadTimeoutState() == 0) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("unitid");
                            sb.append(" = '");
                            sb.append(str);
                            sb.append("' AND ");
                            sb.append("id");
                            sb.append(" = '");
                            sb.append(campaignEx2.getId());
                            sb.append("' AND ");
                            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
                            sb.append(" = '");
                            sb.append(campaignEx2.getRequestId());
                            sb.append("'");
                            if (z) {
                                sb.append(" AND is_bid_campaign = 1");
                            } else {
                                sb.append(" AND is_bid_campaign = 0");
                            }
                            ContentValues contentValues2 = new ContentValues();
                            contentValues2.put("readyState", (Integer) 2);
                            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues2, sb.toString(), null);
                        }
                    } catch (SQLException e3) {
                        z.d("CampaignDao", e3.getLocalizedMessage());
                    }
                }
            }
        } catch (Throwable th) {
            throw th;
        }
    }

    public final synchronized void b(String str, List<CampaignEx> list) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("readyState", (Integer) 0);
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'", null);
                        }
                    } catch (Exception e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, String str2) {
        try {
            String str3 = "id = '" + str + "' AND unitid = " + str2;
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str3, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            if (writableDatabase != null) {
                writableDatabase.delete(MBInterstitialActivity.INTENT_CAMAPIGN, "unitid = '" + str + "' AND readyState = 2", null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized List<CampaignEx> b(String str) {
        try {
            Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM " + MBInterstitialActivity.INTENT_CAMAPIGN + " WHERE unitid = '" + str + "' AND readyState = 2", null);
            if (cursorRawQuery == null || cursorRawQuery.getCount() <= 0) {
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return null;
            }
            ArrayList arrayList = new ArrayList();
            while (cursorRawQuery.moveToNext()) {
                arrayList.add(a(cursorRawQuery));
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            return arrayList;
        } catch (Exception unused) {
            return null;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public final synchronized void a(List<CampaignEx> list, String str) {
        if (list != null) {
            if (list.size() > 0) {
                for (CampaignEx campaignEx : list) {
                    try {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("readyState", (Integer) 2);
                        SQLiteDatabase writableDatabase = getWritableDatabase();
                        if (writableDatabase != null) {
                            writableDatabase.update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "unitid = '" + str + "' AND id = '" + campaignEx.getId() + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + campaignEx.getRequestId() + "'", null);
                        }
                    } catch (SQLException e) {
                        z.d("CampaignDao", e.getLocalizedMessage());
                    }
                }
            }
        }
    }

    public final synchronized void a(String str, String str2, boolean z, String str3) {
        String string;
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("id = '");
            sb.append(str);
            sb.append("' AND ");
            sb.append("unitid");
            sb.append(" = ");
            sb.append(str2);
            sb.append(" AND ");
            sb.append("is_bid_campaign");
            sb.append(" = ");
            sb.append(z ? "1" : "0");
            sb.append(" AND ");
            sb.append(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
            sb.append(" = '");
            sb.append(str3);
            sb.append("'");
            string = sb.toString();
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("readyState", (Integer) 2);
        getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, string, null);
    }

    public final synchronized void b(String str, String str2) {
        try {
            if (getWritableDatabase() == null) {
                return;
            }
            String str3 = "id = '" + str + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + str2 + "'";
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, String str2, int i, int i2, boolean z) {
        String str3;
        try {
            String str4 = "id = '" + str + "' AND unitid = " + str2 + " AND level = " + i + " AND adSource = " + i2;
            if (z) {
                str3 = str4 + " AND is_bid_campaign = 1";
            } else {
                str3 = str4 + " AND is_bid_campaign = 0";
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str3, null);
    }

    public final synchronized void c(String str) {
        String str2;
        try {
            str2 = "unitid = " + str;
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (getWritableDatabase() == null) {
            return;
        }
        getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
    }

    public final synchronized void a(String str, int i, boolean z) {
        String str2;
        try {
            if (z) {
                str2 = "placement_id = " + str + " AND ad_type = " + i;
            } else {
                str2 = "ad_type = " + i;
            }
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void d(String str) {
        try {
            String str2 = "unitid = " + str + " AND short_ctime<" + (System.currentTimeMillis() - 604800000);
            if (getWritableDatabase() == null) {
            } else {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(String str, ContentValues contentValues) {
        try {
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, "id = ?", new String[]{str});
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:71:0x025b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized String e(String str) {
        JSONObject jSONObject;
        JSONArray jSONArray;
        JSONObject jSONObject2;
        JSONObject jSONObject3;
        JSONObject jSONObject4;
        JSONObject jSONObject5;
        JSONObject jSONObject6;
        JSONObject jSONObject7;
        JSONObject jSONObject8;
        JSONObject jSONObject9;
        long jLongValue;
        long jLongValue2;
        long jLongValue3;
        long jLongValue4;
        long jLongValue5;
        long jLongValue6;
        long jLongValue7;
        Cursor cursorRawQuery;
        JSONObject jSONObject10;
        JSONObject jSONObject11;
        int i;
        JSONObject jSONObject12;
        int i2;
        int i3;
        int i4;
        JSONObject jSONObject13;
        int i5;
        jSONObject = new JSONObject();
        try {
            String str2 = "SELECT * FROM campaign WHERE unitid = '" + str + "'";
            jSONArray = new JSONArray();
            jSONObject2 = new JSONObject();
            jSONObject3 = new JSONObject();
            jSONObject4 = new JSONObject();
            jSONObject5 = new JSONObject();
            jSONObject6 = new JSONObject();
            jSONObject7 = new JSONObject();
            jSONObject8 = new JSONObject();
            jSONObject9 = new JSONObject();
            Long lValueOf = Long.valueOf(System.currentTimeMillis());
            jLongValue = lValueOf.longValue() - 86400000;
            jLongValue2 = lValueOf.longValue() - 172800000;
            jLongValue3 = lValueOf.longValue() - 259200000;
            jLongValue4 = lValueOf.longValue() - 345600000;
            jLongValue5 = lValueOf.longValue() - 432000000;
            jLongValue6 = lValueOf.longValue() - 518400000;
            jLongValue7 = lValueOf.longValue() - 604800000;
            cursorRawQuery = null;
            try {
                cursorRawQuery = getReadableDatabase().rawQuery(str2, null);
            } catch (Throwable unused) {
                jSONObject10 = jSONObject2;
            }
        } catch (Throwable th) {
            th = th;
        }
        if (cursorRawQuery != null) {
            if (cursorRawQuery.getCount() > 0) {
                JSONObject jSONObject14 = jSONObject8;
                JSONObject jSONObject15 = jSONObject9;
                int i6 = 0;
                int i7 = 0;
                int i8 = 0;
                int i9 = 0;
                int i10 = 0;
                int i11 = 0;
                int i12 = 0;
                while (cursorRawQuery.moveToNext()) {
                    try {
                        JSONObject jSONObject16 = jSONObject7;
                        if (cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_deleted")) == 0) {
                            jSONArray.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")));
                        }
                        long j = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("short_ctime"));
                        long j2 = jLongValue;
                        if (j > jLongValue && i6 < 10) {
                            i6++;
                            jSONObject3.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                        } else if (j < jLongValue && j > jLongValue2 && i7 < 10) {
                            i7++;
                            jSONObject4.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                        } else if (j < jLongValue2 && j > jLongValue3 && i8 < 10) {
                            i8++;
                            jSONObject5.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                        } else if (j >= jLongValue3 || j <= jLongValue4 || i10 >= 10) {
                            if (j >= jLongValue4 || j <= jLongValue5 || i9 >= 10) {
                                jSONObject11 = jSONObject16;
                                if (j >= jLongValue5 || j <= jLongValue6) {
                                    i = i6;
                                    jSONObject12 = jSONObject14;
                                    i2 = i11;
                                } else {
                                    i2 = i11;
                                    if (i2 < 10) {
                                        i11 = i2 + 1;
                                        i = i6;
                                        jSONObject12 = jSONObject14;
                                        jSONObject12.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                                    } else {
                                        i = i6;
                                        jSONObject12 = jSONObject14;
                                    }
                                }
                                if (j >= jLongValue6 || j <= jLongValue7) {
                                    i3 = i7;
                                    i4 = i8;
                                    jSONObject13 = jSONObject15;
                                    i5 = i12;
                                } else {
                                    i3 = i7;
                                    i5 = i12;
                                    if (i5 < 10) {
                                        i12 = i5 + 1;
                                        i4 = i8;
                                        jSONObject13 = jSONObject15;
                                        jSONObject13.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                                        i7 = i3;
                                        jSONObject14 = jSONObject12;
                                        jSONObject15 = jSONObject13;
                                        i8 = i4;
                                        i6 = i;
                                        i11 = i2;
                                        jSONObject7 = jSONObject11;
                                        jLongValue = j2;
                                    } else {
                                        i4 = i8;
                                        jSONObject13 = jSONObject15;
                                    }
                                }
                                i12 = i5;
                                i7 = i3;
                                jSONObject14 = jSONObject12;
                                jSONObject15 = jSONObject13;
                                i8 = i4;
                                i6 = i;
                                i11 = i2;
                                jSONObject7 = jSONObject11;
                                jLongValue = j2;
                            } else {
                                i9++;
                                jSONObject11 = jSONObject16;
                                jSONObject11.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                                i = i6;
                                jSONObject12 = jSONObject14;
                            }
                            i2 = i11;
                            i4 = i8;
                            jSONObject13 = jSONObject15;
                            jSONObject14 = jSONObject12;
                            jSONObject15 = jSONObject13;
                            i8 = i4;
                            i6 = i;
                            i11 = i2;
                            jSONObject7 = jSONObject11;
                            jLongValue = j2;
                        } else {
                            i10++;
                            jSONObject6.put(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")), cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_click")));
                        }
                        i2 = i11;
                        jSONObject11 = jSONObject16;
                        i = i6;
                        i4 = i8;
                        jSONObject13 = jSONObject15;
                        jSONObject12 = jSONObject14;
                        jSONObject14 = jSONObject12;
                        jSONObject15 = jSONObject13;
                        i8 = i4;
                        i6 = i;
                        i11 = i2;
                        jSONObject7 = jSONObject11;
                        jLongValue = j2;
                    } catch (Throwable unused2) {
                        jSONObject10 = jSONObject2;
                    }
                }
                JSONObject jSONObject17 = jSONObject7;
                JSONObject jSONObject18 = jSONObject15;
                JSONObject jSONObject19 = jSONObject14;
                jSONObject10 = jSONObject2;
                try {
                    jSONObject10.put("1", jSONObject3);
                    jSONObject10.put("2", jSONObject4);
                    jSONObject10.put("3", jSONObject5);
                    jSONObject10.put("4", jSONObject6);
                    jSONObject10.put("5", jSONObject17);
                    jSONObject10.put("6", jSONObject19);
                    jSONObject10.put("7", jSONObject18);
                } catch (Throwable unused3) {
                    if (cursorRawQuery != null) {
                        try {
                            cursorRawQuery.close();
                        } catch (Throwable th2) {
                            th = th2;
                            jSONObject = jSONObject;
                            z.d("CampaignDao", th.getLocalizedMessage());
                        }
                    }
                }
            } else {
                jSONObject10 = jSONObject2;
            }
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            jSONObject = jSONObject;
            jSONObject.put(com.kuaishou.weapon.p0.t.q, jSONArray);
            jSONObject.put("c", jSONObject10);
        }
        return jSONObject.toString();
    }

    public final synchronized void a() {
        try {
            String str = "ts<" + (System.currentTimeMillis() - 3600000) + " AND ts>0";
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str, null);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(long j, String str) {
        String str2;
        String[] strArr;
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            str2 = "(plctb>0 and (plctb* 1000+ts)<" + jCurrentTimeMillis + ") or (plctb<=0 and ts<" + (jCurrentTimeMillis - j) + ") and unitid=?";
            strArr = new String[]{str};
        } catch (Exception e) {
            z.d(a, e.getMessage());
        }
        if (getWritableDatabase() != null) {
            getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, strArr);
        }
    }

    public final synchronized void b(long j, String str) {
        try {
            String str2 = "ts<" + (System.currentTimeMillis() - j) + " and unitid=?";
            String[] strArr = {str};
            if (getWritableDatabase() != null) {
                getWritableDatabase().delete(MBInterstitialActivity.INTENT_CAMAPIGN, str2, strArr);
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void a(List<CampaignEx> list, String str, String str2, int i) {
        if (list != null) {
            if (list.size() != 0) {
                if (getWritableDatabase() == null) {
                    return;
                }
                Iterator<CampaignEx> it = list.iterator();
                while (it.hasNext()) {
                    a(it.next(), str, str2, i);
                }
            }
        }
    }

    private synchronized long a(CampaignEx campaignEx, String str, String str2, int i) {
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            if (campaignEx.getPv_urls() != null && campaignEx.getPv_urls().size() > 0) {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = campaignEx.getPv_urls().iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                contentValues.put("pv_urls", jSONArray.toString());
            }
            contentValues.put("id", campaignEx.getId());
            if (TextUtils.isEmpty(str)) {
                str = "";
            }
            contentValues.put(l.a.c, str);
            contentValues.put("unitid", str2);
            contentValues.put("number_rating", Integer.valueOf(campaignEx.getNumberRating()));
            contentValues.put("tab", Integer.valueOf(campaignEx.getTab()));
            contentValues.put("package_name", campaignEx.getPackageName());
            contentValues.put("app_name", campaignEx.getAppName());
            contentValues.put("app_desc", campaignEx.getAppDesc());
            contentValues.put("app_size", campaignEx.getSize());
            contentValues.put("image_size", campaignEx.getImageSize());
            contentValues.put("icon_url", campaignEx.getIconUrl());
            contentValues.put("image_url", campaignEx.getImageUrl());
            contentValues.put("impression_url", campaignEx.getImpressionURL());
            contentValues.put("notice_url", campaignEx.getNoticeUrl());
            contentValues.put("download_url", campaignEx.getClickURL());
            contentValues.put("wtick", Integer.valueOf(campaignEx.getWtick()));
            contentValues.put(a.a.o, campaignEx.getDeepLinkURL());
            contentValues.put("user_activation", Boolean.toString(campaignEx.getUserActivation()));
            contentValues.put("only_impression", campaignEx.getOnlyImpressionURL());
            contentValues.put("ts", Long.valueOf(campaignEx.getTimestamp()));
            contentValues.put("template", Integer.valueOf(campaignEx.getTemplate()));
            contentValues.put("click_mode", campaignEx.getClick_mode());
            contentValues.put("landing_type", campaignEx.getLandingType());
            contentValues.put("link_type", Integer.valueOf(campaignEx.getLinkType()));
            contentValues.put("star", Double.valueOf(campaignEx.getRating()));
            contentValues.put("cti", Integer.valueOf(campaignEx.getClickInterval()));
            contentValues.put("cpti", Integer.valueOf(campaignEx.getPreClickInterval()));
            contentValues.put("preclick", Boolean.valueOf(campaignEx.isPreClick()));
            contentValues.put("level", Integer.valueOf(campaignEx.getCacheLevel()));
            contentValues.put("adSource", Integer.valueOf(campaignEx.getType()));
            contentValues.put("ad_call", campaignEx.getAdCall());
            contentValues.put("fc_a", Integer.valueOf(campaignEx.getFca()));
            contentValues.put("fc_b", Integer.valueOf(campaignEx.getFcb()));
            contentValues.put("ad_url_list", campaignEx.getAd_url_list());
            contentValues.put("video_url", campaignEx.getVideoUrlEncode());
            contentValues.put("video_size", Integer.valueOf(campaignEx.getVideoSize()));
            contentValues.put("video_length", Integer.valueOf(campaignEx.getVideoLength()));
            contentValues.put("video_resolution", campaignEx.getVideoResolution());
            contentValues.put("endcard_click_result", Integer.valueOf(campaignEx.getEndcard_click_result()));
            contentValues.put("watch_mile", Integer.valueOf(campaignEx.getWatchMile()));
            contentValues.put("view_com_time", Integer.valueOf(campaignEx.getVideoCompleteTime()));
            contentValues.put("advImp", campaignEx.getAdvImp());
            contentValues.put("bty", Integer.valueOf(campaignEx.getBty()));
            contentValues.put("t_imp", Integer.valueOf(campaignEx.getTImp()));
            contentValues.put("guidelines", campaignEx.getGuidelines());
            contentValues.put("offer_type", Integer.valueOf(campaignEx.getOfferType()));
            contentValues.put("html_url", campaignEx.getHtmlUrl());
            contentValues.put("end_screen_url", campaignEx.getEndScreenUrl());
            contentValues.put("reward_amount", Integer.valueOf(campaignEx.getRewardAmount()));
            contentValues.put("reward_name", campaignEx.getRewardName());
            contentValues.put("reward_play_status", Integer.valueOf(campaignEx.getRewardPlayStatus()));
            contentValues.put("adv_id", campaignEx.getAdvId());
            contentValues.put("ttc_ct2", Integer.valueOf(campaignEx.getTtc_ct2() * 1000));
            contentValues.put("ttc_type", Integer.valueOf(campaignEx.getTtc_type()));
            contentValues.put("retarget", Integer.valueOf(campaignEx.getRetarget_offer()));
            contentValues.put("native_ad_tracking", campaignEx.getNativeVideoTrackingString());
            contentValues.put("playable_ads_without_video", Integer.valueOf(campaignEx.getPlayable_ads_without_video()));
            contentValues.put("endcard_url", campaignEx.getendcard_url());
            contentValues.put("video_end_type", Integer.valueOf(campaignEx.getVideo_end_type()));
            contentValues.put("loopback", campaignEx.getLoopbackString());
            contentValues.put("md5_file", campaignEx.getVideoMD5Value());
            contentValues.put("nv_t2", Integer.valueOf(campaignEx.getNvT2()));
            contentValues.put("gif_url", campaignEx.getGifUrl());
            if (campaignEx.getRewardTemplateMode() != null) {
                contentValues.put("reward_teamplate", campaignEx.getRewardTemplateMode().a());
            }
            contentValues.put("c_coi", Integer.valueOf(campaignEx.getClickTimeOutInterval()));
            contentValues.put("c_ua", Integer.valueOf(campaignEx.getcUA()));
            contentValues.put("imp_ua", Integer.valueOf(campaignEx.getImpUA()));
            contentValues.put("jm_pd", Integer.valueOf(campaignEx.getJmPd()));
            contentValues.put("is_deleted", Integer.valueOf(campaignEx.getIsDeleted()));
            contentValues.put("is_click", Integer.valueOf(campaignEx.getIsClick()));
            contentValues.put("is_add_sucesful", Integer.valueOf(campaignEx.getIsAddSuccesful()));
            contentValues.put("short_ctime", String.valueOf(System.currentTimeMillis()));
            contentValues.put("ia_icon", campaignEx.getKeyIaIcon());
            contentValues.put("ia_url", campaignEx.getKeyIaUrl());
            contentValues.put("ia_rst", Integer.valueOf(campaignEx.getKeyIaRst()));
            contentValues.put("ia_ori", Integer.valueOf(campaignEx.getKeyIaOri()));
            contentValues.put("ad_type", Integer.valueOf(campaignEx.getAdType()));
            contentValues.put("ia_ext1", campaignEx.getIa_ext1());
            contentValues.put("ia_ext2", campaignEx.getIa_ext2());
            contentValues.put("is_download_zip", Integer.valueOf(campaignEx.getIsDownLoadZip()));
            contentValues.put("ia_cache", campaignEx.getInteractiveCache());
            contentValues.put("gh_id", campaignEx.getGhId());
            contentValues.put("gh_path", campaignEx.getGhPath());
            contentValues.put("bind_id", campaignEx.getBindId());
            contentValues.put("oc_time", Integer.valueOf(campaignEx.getOc_time()));
            contentValues.put("oc_type", Integer.valueOf(campaignEx.getOc_type()));
            contentValues.put("t_list", campaignEx.getT_list());
            CampaignEx.a adchoice = campaignEx.getAdchoice();
            if (adchoice != null) {
                contentValues.put("adchoice", adchoice.c());
                contentValues.put("adchoice_size_height", Integer.valueOf(adchoice.b()));
                contentValues.put("adchoice_size_width", Integer.valueOf(adchoice.a()));
            }
            contentValues.put("plct", Long.valueOf(campaignEx.getPlct()));
            contentValues.put("plctb", Long.valueOf(campaignEx.getPlctb()));
            contentValues.put("ad_html", campaignEx.getAdHtml());
            contentValues.put("ad_zip", campaignEx.getAdZip());
            contentValues.put("banner_url", campaignEx.getBannerUrl());
            contentValues.put("banner_html", campaignEx.getBannerHtml());
            contentValues.put("creative_id", Long.valueOf(campaignEx.getCreativeId()));
            contentValues.put("is_bid_campaign", Boolean.valueOf(campaignEx.isBidCampaign()));
            contentValues.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN, campaignEx.getBidToken());
            contentValues.put("mraid", campaignEx.getMraid());
            contentValues.put("is_mraid_campaign", Boolean.valueOf(campaignEx.isMraid()));
            contentValues.put("omid", campaignEx.getOmid());
            contentValues.put("mof_tplid", Integer.valueOf(campaignEx.getMof_tplid()));
            contentValues.put("ready_rate", Integer.valueOf(campaignEx.getReady_rate()));
            if (campaignEx.getRewardPlus() != null && campaignEx.getRewardPlus().toJsonObject() != null) {
                contentValues.put("rw_pl", campaignEx.getRewardPlus().toJsonObject().toString());
            }
            if (campaignEx.getApkDisplayInfo() != null && campaignEx.getApkDisplayInfo().toJson() != null) {
                contentValues.put("apk_info", campaignEx.getApkDisplayInfo().toJson().toString());
            }
            contentValues.put("ext_data", campaignEx.getExt_data());
            contentValues.put("nscpt", Integer.valueOf(campaignEx.getNscpt()));
            contentValues.put("mof_template_url", campaignEx.getMof_template_url());
            contentValues.put("req_ext_data", campaignEx.getReq_ext_data());
            contentValues.put("readyState", Integer.valueOf(campaignEx.getReadyState()));
            contentValues.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, campaignEx.getRequestId());
            contentValues.put("load_timeout", Integer.valueOf(campaignEx.getLoadTimeoutState()));
            contentValues.put("apk_alt", Integer.valueOf(campaignEx.getApkAlt()));
            contentValues.put("atat_type", Integer.valueOf(campaignEx.getAtatType()));
            contentValues.put("ntbarpasbl", Integer.valueOf(campaignEx.getNtbarpasbl()));
            contentValues.put("ntbarpt", Integer.valueOf(campaignEx.getNtbarpt()));
            contentValues.put("akdlui", campaignEx.getAkdlui());
            contentValues.put("flb", Integer.valueOf(campaignEx.getFlb()));
            contentValues.put("adspace_t", Integer.valueOf(campaignEx.getAdSpaceT()));
            contentValues.put("cbd", Integer.valueOf(campaignEx.getCbd()));
            contentValues.put("vst", Integer.valueOf(campaignEx.getVst()));
            contentValues.put("flb_skiptime", Integer.valueOf(campaignEx.getFlbSkipTime()));
            contentValues.put("vcn", Integer.valueOf(campaignEx.getVcn()));
            contentValues.put("token_r", Integer.valueOf(campaignEx.getTokenRule()));
            contentValues.put("encrypt_p", campaignEx.getEncryptPrice());
            contentValues.put("vck_t", Integer.valueOf(campaignEx.getVideoCheckType()));
            contentValues.put("vctn_t", Integer.valueOf(campaignEx.getVideoCtnType()));
            contentValues.put("rs_ignc_r", campaignEx.getRsIgnoreCheckRuleString());
            contentValues.put("tp_offer", Integer.valueOf(campaignEx.getTpOffer()));
            contentValues.put("fac", Integer.valueOf(campaignEx.getFac()));
            if (campaignEx.getAabEntity() != null) {
                contentValues.put(CampaignEx.JSON_KEY_AAB, campaignEx.getAabEntity().toJson().toString());
            }
            return getWritableDatabase().insert(MBInterstitialActivity.INTENT_CAMAPIGN, null, contentValues);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return -1L;
        }
    }

    public final synchronized long a(CampaignEx campaignEx, String str, int i) {
        String str2;
        if (campaignEx == null) {
            return 0L;
        }
        try {
            if (getWritableDatabase() == null) {
                return -1L;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("id", campaignEx.getId());
            if (campaignEx.getPv_urls() != null && campaignEx.getPv_urls().size() > 0) {
                JSONArray jSONArray = new JSONArray();
                Iterator<String> it = campaignEx.getPv_urls().iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next());
                }
                contentValues.put("pv_urls", jSONArray.toString());
            }
            contentValues.put("unitid", str);
            contentValues.put("number_rating", Integer.valueOf(campaignEx.getNumberRating()));
            contentValues.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, campaignEx.getRequestId());
            contentValues.put("tab", Integer.valueOf(campaignEx.getTab()));
            contentValues.put("package_name", campaignEx.getPackageName());
            contentValues.put("app_name", campaignEx.getAppName());
            contentValues.put("app_desc", campaignEx.getAppDesc());
            contentValues.put("app_size", campaignEx.getSize());
            contentValues.put("image_size", campaignEx.getImageSize());
            contentValues.put("icon_url", campaignEx.getIconUrl());
            contentValues.put("image_url", campaignEx.getImageUrl());
            contentValues.put("impression_url", campaignEx.getImpressionURL());
            contentValues.put("notice_url", campaignEx.getNoticeUrl());
            contentValues.put("download_url", campaignEx.getClickURL());
            contentValues.put("wtick", Integer.valueOf(campaignEx.getWtick()));
            contentValues.put(a.a.o, campaignEx.getDeepLinkURL());
            contentValues.put("user_activation", Boolean.toString(campaignEx.getUserActivation()));
            contentValues.put("only_impression", campaignEx.getOnlyImpressionURL());
            contentValues.put("ts", Long.valueOf(campaignEx.getTimestamp()));
            contentValues.put("template", Integer.valueOf(campaignEx.getTemplate()));
            contentValues.put("click_mode", campaignEx.getClick_mode());
            contentValues.put("landing_type", campaignEx.getLandingType());
            contentValues.put("link_type", Integer.valueOf(campaignEx.getLinkType()));
            contentValues.put("star", Double.valueOf(campaignEx.getRating()));
            contentValues.put("cti", Integer.valueOf(campaignEx.getClickInterval()));
            contentValues.put("cpti", Integer.valueOf(campaignEx.getPreClickInterval()));
            contentValues.put("preclick", Boolean.valueOf(campaignEx.isPreClick()));
            contentValues.put("level", Integer.valueOf(campaignEx.getCacheLevel()));
            contentValues.put("adSource", Integer.valueOf(campaignEx.getType()));
            contentValues.put("ad_call", campaignEx.getAdCall());
            contentValues.put("fc_a", Integer.valueOf(campaignEx.getFca()));
            contentValues.put("fc_b", Integer.valueOf(campaignEx.getFcb()));
            contentValues.put("ad_url_list", campaignEx.getAd_url_list());
            contentValues.put("video_url", campaignEx.getVideoUrlEncode());
            contentValues.put("video_size", Integer.valueOf(campaignEx.getVideoSize()));
            contentValues.put("video_length", Integer.valueOf(campaignEx.getVideoLength()));
            contentValues.put("video_resolution", campaignEx.getVideoResolution());
            contentValues.put("endcard_click_result", Integer.valueOf(campaignEx.getEndcard_click_result()));
            contentValues.put("watch_mile", Integer.valueOf(campaignEx.getWatchMile()));
            contentValues.put("view_com_time", Integer.valueOf(campaignEx.getVideoCompleteTime()));
            contentValues.put("advImp", campaignEx.getAdvImp());
            contentValues.put("bty", Integer.valueOf(campaignEx.getBty()));
            contentValues.put("t_imp", Integer.valueOf(campaignEx.getTImp()));
            contentValues.put("guidelines", campaignEx.getGuidelines());
            contentValues.put("offer_type", Integer.valueOf(campaignEx.getOfferType()));
            contentValues.put("html_url", campaignEx.getHtmlUrl());
            contentValues.put("end_screen_url", campaignEx.getEndScreenUrl());
            contentValues.put("reward_amount", Integer.valueOf(campaignEx.getRewardAmount()));
            contentValues.put("reward_name", campaignEx.getRewardName());
            contentValues.put("reward_play_status", Integer.valueOf(campaignEx.getRewardPlayStatus()));
            contentValues.put("adv_id", campaignEx.getAdvId());
            contentValues.put("ttc_ct2", Integer.valueOf(campaignEx.getTtc_ct2() * 1000));
            contentValues.put("ttc_type", Integer.valueOf(campaignEx.getTtc_type()));
            contentValues.put("retarget", Integer.valueOf(campaignEx.getRetarget_offer()));
            contentValues.put("native_ad_tracking", campaignEx.getNativeVideoTrackingString());
            contentValues.put("playable_ads_without_video", Integer.valueOf(campaignEx.getPlayable_ads_without_video()));
            contentValues.put("endcard_url", campaignEx.getendcard_url());
            contentValues.put("video_end_type", Integer.valueOf(campaignEx.getVideo_end_type()));
            contentValues.put("loopback", campaignEx.getLoopbackString());
            contentValues.put("md5_file", campaignEx.getVideoMD5Value());
            contentValues.put("nv_t2", Integer.valueOf(campaignEx.getNvT2()));
            contentValues.put("gif_url", campaignEx.getGifUrl());
            if (campaignEx.getRewardTemplateMode() != null) {
                contentValues.put("reward_teamplate", campaignEx.getRewardTemplateMode().a());
            }
            contentValues.put("c_coi", Integer.valueOf(campaignEx.getClickTimeOutInterval()));
            contentValues.put("c_ua", Integer.valueOf(campaignEx.getcUA()));
            contentValues.put("imp_ua", Integer.valueOf(campaignEx.getImpUA()));
            contentValues.put("jm_pd", Integer.valueOf(campaignEx.getJmPd()));
            contentValues.put("is_deleted", Integer.valueOf(campaignEx.getIsDeleted()));
            contentValues.put("is_click", Integer.valueOf(campaignEx.getIsClick()));
            contentValues.put("is_add_sucesful", Integer.valueOf(campaignEx.getIsAddSuccesful()));
            contentValues.put("short_ctime", String.valueOf(System.currentTimeMillis()));
            contentValues.put("ia_icon", campaignEx.getKeyIaIcon());
            contentValues.put("ia_url", campaignEx.getKeyIaUrl());
            contentValues.put("ia_rst", Integer.valueOf(campaignEx.getKeyIaRst()));
            contentValues.put("ia_ori", Integer.valueOf(campaignEx.getKeyIaOri()));
            contentValues.put("ad_type", Integer.valueOf(campaignEx.getAdType()));
            contentValues.put("ia_ext1", campaignEx.getIa_ext1());
            contentValues.put("ia_ext2", campaignEx.getIa_ext2());
            contentValues.put("is_download_zip", Integer.valueOf(campaignEx.getIsDownLoadZip()));
            contentValues.put("ia_cache", campaignEx.getInteractiveCache());
            contentValues.put("gh_id", campaignEx.getGhId());
            contentValues.put("gh_path", campaignEx.getGhPath());
            contentValues.put("bind_id", campaignEx.getBindId());
            contentValues.put("oc_time", Integer.valueOf(campaignEx.getOc_time()));
            contentValues.put("oc_type", Integer.valueOf(campaignEx.getOc_type()));
            contentValues.put("t_list", campaignEx.getT_list());
            CampaignEx.a adchoice = campaignEx.getAdchoice();
            if (adchoice != null) {
                contentValues.put("adchoice", adchoice.c());
                contentValues.put("adchoice_size_height", Integer.valueOf(adchoice.b()));
                contentValues.put("adchoice_size_width", Integer.valueOf(adchoice.a()));
            }
            contentValues.put("plct", Long.valueOf(campaignEx.getPlct()));
            contentValues.put("plctb", Long.valueOf(campaignEx.getPlctb()));
            contentValues.put("ad_html", campaignEx.getAdHtml());
            contentValues.put("ad_zip", campaignEx.getAdZip());
            contentValues.put("banner_url", campaignEx.getBannerUrl());
            contentValues.put("banner_html", campaignEx.getBannerHtml());
            contentValues.put("creative_id", Long.valueOf(campaignEx.getCreativeId()));
            contentValues.put("is_bid_campaign", Boolean.valueOf(campaignEx.isBidCampaign()));
            contentValues.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN, campaignEx.getBidToken());
            contentValues.put("mraid", campaignEx.getMraid());
            contentValues.put("is_mraid_campaign", Boolean.valueOf(campaignEx.isMraid()));
            contentValues.put("omid", campaignEx.getOmid());
            contentValues.put("mof_tplid", Integer.valueOf(campaignEx.getMof_tplid()));
            if (campaignEx.getRewardPlus() != null && campaignEx.getRewardPlus().toJsonObject() != null) {
                contentValues.put("rw_pl", campaignEx.getRewardPlus().toJsonObject().toString());
            }
            if (campaignEx.getApkDisplayInfo() != null && campaignEx.getApkDisplayInfo().toJson() != null) {
                contentValues.put("apk_info", campaignEx.getApkDisplayInfo().toJson().toString());
            }
            contentValues.put("ready_rate", Integer.valueOf(campaignEx.getReady_rate()));
            contentValues.put("ext_data", campaignEx.getExt_data());
            contentValues.put("nscpt", Integer.valueOf(campaignEx.getNscpt()));
            contentValues.put("mof_template_url", campaignEx.getMof_template_url());
            contentValues.put("req_ext_data", campaignEx.getReq_ext_data());
            contentValues.put("readyState", Integer.valueOf(campaignEx.getReadyState()));
            contentValues.put("load_timeout", Integer.valueOf(campaignEx.getLoadTimeoutState()));
            contentValues.put(l.a.c, campaignEx.getPlacementId());
            contentValues.put("apk_alt", Integer.valueOf(campaignEx.getApkAlt()));
            contentValues.put("atat_type", Integer.valueOf(campaignEx.getAtatType()));
            contentValues.put("ntbarpasbl", Integer.valueOf(campaignEx.getNtbarpasbl()));
            contentValues.put("ntbarpt", Integer.valueOf(campaignEx.getNtbarpt()));
            contentValues.put("akdlui", campaignEx.getAkdlui());
            contentValues.put("flb", Integer.valueOf(campaignEx.getFlb()));
            contentValues.put("adspace_t", Integer.valueOf(campaignEx.getAdSpaceT()));
            contentValues.put("cbd", Integer.valueOf(campaignEx.getCbd()));
            contentValues.put("vst", Integer.valueOf(campaignEx.getVst()));
            contentValues.put("flb_skiptime", Integer.valueOf(campaignEx.getFlbSkipTime()));
            contentValues.put("vcn", Integer.valueOf(campaignEx.getVcn()));
            contentValues.put("token_r", Integer.valueOf(campaignEx.getTokenRule()));
            contentValues.put("encrypt_p", campaignEx.getEncryptPrice());
            contentValues.put("vck_t", Integer.valueOf(campaignEx.getVideoCheckType()));
            contentValues.put("vctn_t", Integer.valueOf(campaignEx.getVideoCtnType()));
            contentValues.put("rs_ignc_r", campaignEx.getRsIgnoreCheckRuleString());
            contentValues.put("tp_offer", Integer.valueOf(campaignEx.getTpOffer()));
            contentValues.put("fac", Integer.valueOf(campaignEx.getFac()));
            if (campaignEx.getAabEntity() != null) {
                contentValues.put(CampaignEx.JSON_KEY_AAB, campaignEx.getAabEntity().toJson().toString());
            }
            if (a(campaignEx.getId(), campaignEx.getTab(), str, i, campaignEx.getType(), campaignEx.isBidCampaign())) {
                if (campaignEx.isBidCampaign()) {
                    str2 = "unitid = " + str + " AND is_bid_campaign = 1";
                } else {
                    str2 = "id = " + campaignEx.getId() + " AND unitid = " + str + " AND is_bid_campaign = 0";
                }
                return getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str2, null);
            }
            return getWritableDatabase().insert(MBInterstitialActivity.INTENT_CAMAPIGN, null, contentValues);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return -1L;
        }
    }

    public final synchronized void b(final List<CampaignEx> list, final String str) {
        if (list != null) {
            if (list.size() != 0) {
                new Thread(new Runnable() {
                    @Override
                    public final void run() {
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            f.this.a((CampaignEx) it.next(), str, 0);
                        }
                    }
                }).start();
            }
        }
    }

    public final synchronized int a(String str, long j) {
        try {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            long jW = aVarB.W() * 1000;
            a(jW, str);
            List<CampaignEx> listA = a(str, 0, 0, 1, false);
            if (listA != null && !listA.isEmpty()) {
                Iterator<CampaignEx> it = listA.iterator();
                while (it.hasNext()) {
                    if (!it.next().isSpareOffer(j, jW)) {
                        return 0;
                    }
                }
                return 1;
            }
            return -1;
        } catch (Exception unused) {
            return 0;
        }
    }

    public final synchronized boolean a(String str, int i, String str2, int i2, int i3, boolean z) {
        String str3;
        if (z) {
            str3 = "SELECT id FROM campaign WHERE unitid = " + str2 + " AND is_bid_campaign = 1";
        } else {
            str3 = "SELECT id FROM campaign WHERE id='" + str + "' AND tab" + ContainerUtils.KEY_VALUE_DELIMITER + i + " AND unitid = '" + str2 + "' AND level = " + i2 + " AND adSource = " + i3 + " AND is_bid_campaign = 0";
        }
        Cursor cursorRawQuery = getReadableDatabase().rawQuery(str3, null);
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

    public final List<CampaignEx> a(String str, int i, int i2, int i3) {
        String str2;
        String str3 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        if (i > 0) {
            str2 = " LIMIT " + i;
        } else {
            str2 = "";
        }
        return h("SELECT * FROM campaign" + str3 + str2);
    }

    public final synchronized List<CampaignEx> a(String str, int i, int i2, int i3, boolean z) {
        String str2;
        String str3;
        String str4 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        if (z) {
            str2 = str4 + " AND is_bid_campaign = 1";
        } else {
            str2 = str4 + " AND is_bid_campaign = 0";
        }
        str3 = "";
        if (i > 0) {
            str3 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + str2 + str3);
    }

    public final synchronized List<CampaignEx> a(String str, int i, int i2, int i3, String str2) {
        String str3;
        String str4;
        str3 = ((" WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3) + " AND is_bid_campaign = 1") + " AND readyState = '0'";
        if (!TextUtils.isEmpty(str2)) {
            str3 = str3 + " AND request_id = '" + str2 + "'";
        }
        str4 = "";
        if (i > 0) {
            str4 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + (str3 + " order by ts ASC") + str4);
    }

    public final synchronized List<CampaignEx> b(String str, int i, int i2, int i3) {
        String str2;
        String str3;
        str2 = " WHERE unitid = '" + str + "' AND level = " + i2 + " AND adSource = " + i3;
        str3 = "";
        if (i > 0) {
            str3 = " LIMIT " + i;
        }
        return h("SELECT * FROM campaign" + str2 + str3);
    }

    /* JADX WARN: Removed duplicated region for block: B:62:0x06cd A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:69:0x06b1 A[EXC_TOP_SPLITTER, PHI: r10
      0x06b1: PHI (r10v8 android.database.Cursor) = (r10v7 android.database.Cursor), (r10v9 android.database.Cursor) binds: [B:48:0x06c5, B:40:0x06af] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized List<CampaignEx> h(String str) {
        Throwable th;
        Cursor cursorRawQuery;
        try {
            cursorRawQuery = getReadableDatabase().rawQuery(str, null);
            if (cursorRawQuery != null) {
                try {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            ArrayList arrayList = new ArrayList();
                            while (cursorRawQuery.moveToNext()) {
                                CampaignEx campaignEx = new CampaignEx();
                                String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("pv_urls"));
                                boolean z = false;
                                if (!TextUtils.isEmpty(string)) {
                                    JSONArray jSONArray = new JSONArray(string);
                                    ArrayList arrayList2 = new ArrayList();
                                    for (int i = 0; i < jSONArray.length(); i++) {
                                        arrayList2.add(jSONArray.getString(i));
                                    }
                                    campaignEx.setPv_urls(arrayList2);
                                }
                                campaignEx.setId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("id")));
                                campaignEx.setTab(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("tab")));
                                campaignEx.setPackageName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("package_name")));
                                campaignEx.setAppName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_name")));
                                campaignEx.setAppDesc(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_desc")));
                                campaignEx.setSize(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("app_size")));
                                campaignEx.setImageSize(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("image_size")));
                                campaignEx.setIconUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("icon_url")));
                                campaignEx.setImageUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("image_url")));
                                campaignEx.setImpressionURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("impression_url")));
                                campaignEx.setNoticeUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("notice_url")));
                                campaignEx.setClickURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("download_url")));
                                campaignEx.setWtick(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("wtick")));
                                campaignEx.setDeepLinkUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex(a.a.o)));
                                campaignEx.setUserActivation(Boolean.parseBoolean(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("user_activation"))));
                                campaignEx.setOnlyImpressionURL(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("only_impression")));
                                campaignEx.setPreClick(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("preclick")) == 1);
                                campaignEx.setTemplate(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("template")));
                                campaignEx.setLandingType(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("landing_type")));
                                campaignEx.setLinkType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("link_type")));
                                campaignEx.setClick_mode(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("click_mode")));
                                campaignEx.setRating(Double.parseDouble(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("star"))));
                                campaignEx.setNumberRating(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("number_rating")));
                                campaignEx.setClickInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cti")));
                                campaignEx.setPreClickInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cpti")));
                                campaignEx.setTimestamp(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("ts")));
                                campaignEx.setCacheLevel(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("level")));
                                campaignEx.setType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adSource")));
                                campaignEx.setAdCall(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_call")));
                                campaignEx.setFca(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("fc_a")));
                                campaignEx.setFcb(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("fc_b")));
                                campaignEx.setAd_url_list(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_url_list")));
                                campaignEx.setVideoLength(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_length")));
                                campaignEx.setVideoSize(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_size")));
                                campaignEx.setVideoResolution(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_resolution")));
                                campaignEx.setEndcard_click_result(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("endcard_click_result")));
                                campaignEx.setVideoUrlEncode(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("video_url")));
                                campaignEx.setWatchMile(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("watch_mile")));
                                campaignEx.setVideoCompleteTime(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("view_com_time")));
                                campaignEx.setTImp(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("t_imp")));
                                campaignEx.setBty(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("bty")));
                                campaignEx.setAdvImp(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("advImp")));
                                campaignEx.setOfferType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("offer_type")));
                                campaignEx.setGuidelines(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("guidelines")));
                                campaignEx.setHtmlUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("html_url")));
                                campaignEx.setEndScreenUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("end_screen_url")));
                                campaignEx.setRewardName(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("reward_name")));
                                campaignEx.setRewardAmount(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("reward_amount")));
                                campaignEx.setRewardPlayStatus(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("reward_play_status")));
                                campaignEx.setAdvId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("adv_id")));
                                campaignEx.setTtc_ct2(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ttc_ct2")));
                                campaignEx.setTtc_type(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ttc_type")));
                                campaignEx.setRetarget_offer(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("retarget")));
                                campaignEx.setCampaignUnitId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("unitid")));
                                campaignEx.setNativeVideoTracking(CampaignEx.TrackingStr2Object(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("native_ad_tracking"))));
                                campaignEx.setNativeVideoTrackingString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("native_ad_tracking")));
                                campaignEx.setVideo_end_type(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("video_end_type")));
                                campaignEx.setendcard_url(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("endcard_url")));
                                campaignEx.setPlayable_ads_without_video(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("playable_ads_without_video")));
                                campaignEx.setLoopbackString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("loopback")));
                                campaignEx.setLoopbackMap(CampaignEx.loopbackStrToMap(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("loopback"))));
                                campaignEx.setMof_template_url(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("mof_template_url")));
                                campaignEx.setMof_tplid(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("mof_tplid")));
                                campaignEx.setRewardTemplateMode(CampaignEx.c.a(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("reward_teamplate"))));
                                campaignEx.setVideoMD5Value(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("md5_file")));
                                campaignEx.setGifUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gif_url")));
                                campaignEx.setNvT2(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("nv_t2")));
                                campaignEx.setClickTimeOutInterval(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("c_coi")));
                                campaignEx.setcUA(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("c_ua")));
                                campaignEx.setImpUA(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("imp_ua")));
                                campaignEx.setGhId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gh_id")));
                                campaignEx.setGhPath(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("gh_path")));
                                campaignEx.setBindId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("bind_id")));
                                campaignEx.setOc_time(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("oc_time")));
                                campaignEx.setOc_type(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("oc_type")));
                                campaignEx.setT_list(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("t_list")));
                                String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("adchoice"));
                                if (!TextUtils.isEmpty(string2)) {
                                    campaignEx.setAdchoice(CampaignEx.a.a(string2));
                                }
                                campaignEx.setAdchoiceSizeHeight(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adchoice_size_height")));
                                campaignEx.setAdchoiceSizeWidth(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adchoice_size_width")));
                                campaignEx.setPlct(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("plct")));
                                campaignEx.setPlctb(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("plctb")));
                                campaignEx.setAdZip(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_zip")));
                                campaignEx.setAdHtml(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ad_html")));
                                campaignEx.setBannerUrl(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("banner_url")));
                                campaignEx.setBannerHtml(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("banner_html")));
                                campaignEx.setCreativeId(cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("creative_id")));
                                campaignEx.setIsBidCampaign(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_bid_campaign")) == 1);
                                campaignEx.setBidToken(cursorRawQuery.getString(cursorRawQuery.getColumnIndex(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN)));
                                campaignEx.setAdType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ad_type")));
                                campaignEx.setFac(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("fac")));
                                campaignEx.setTpOffer(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("tp_offer")));
                                campaignEx.setMraid(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("mraid")));
                                if (cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("is_mraid_campaign")) == 1) {
                                    z = true;
                                }
                                campaignEx.setIsMraid(z);
                                campaignEx.setOmid(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("omid")));
                                campaignEx.setReady_rate(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ready_rate")));
                                campaignEx.setExt_data(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("ext_data")));
                                campaignEx.setNscpt(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("nscpt")));
                                campaignEx.setReq_ext_data(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("req_ext_data")));
                                campaignEx.setReadyState(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("readyState")));
                                campaignEx.setLoadTimeoutState(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("load_timeout")));
                                campaignEx.setPlacementId(cursorRawQuery.getString(cursorRawQuery.getColumnIndex(l.a.c)));
                                campaignEx.setApkAlt(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("apk_alt")));
                                campaignEx.setAkdlui(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("akdlui")));
                                campaignEx.setNtbarpasbl(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ntbarpasbl")));
                                campaignEx.setNtbarpt(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ntbarpt")));
                                campaignEx.setAtatType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("atat_type")));
                                campaignEx.setRewardPlus(RewardPlus.parseByString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rw_pl"))));
                                campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("apk_info"))));
                                campaignEx.setFlb(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("flb")));
                                campaignEx.setFlbSkipTime(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("flb_skiptime")));
                                campaignEx.setCbd(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("cbd")));
                                campaignEx.setVst(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vst")));
                                campaignEx.setAdSpaceT(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("adspace_t")));
                                campaignEx.setVcn(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vcn")));
                                campaignEx.setTokenRule(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("token_r")));
                                campaignEx.setEncryptPrice(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("encrypt_p")));
                                campaignEx.setVideoCheckType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vck_t")));
                                campaignEx.setVideoCtnType(cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vctn_t")));
                                campaignEx.setRsIgnoreCheckRuleByString(cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rs_ignc_r")));
                                campaignEx.setAabEntity(AabEntity.parser(cursorRawQuery.getString(cursorRawQuery.getColumnIndex(CampaignEx.JSON_KEY_AAB))));
                                arrayList.add(campaignEx);
                            }
                            if (cursorRawQuery != null) {
                                try {
                                    cursorRawQuery.close();
                                } catch (Exception unused) {
                                }
                            }
                            return arrayList;
                        }
                    } catch (Exception e) {
                        e = e;
                        z.d("CampaignDao", e.getLocalizedMessage());
                        if (cursorRawQuery != null) {
                        }
                    }
                } catch (Throwable th2) {
                    th = th2;
                    if (cursorRawQuery != null) {
                        try {
                            cursorRawQuery.close();
                        } catch (Exception unused2) {
                        }
                    }
                    throw th;
                }
            }
        } catch (Exception e2) {
            e = e2;
            cursorRawQuery = null;
        } catch (Throwable th3) {
            th = th3;
            cursorRawQuery = null;
            if (cursorRawQuery != null) {
            }
            throw th;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x0121 A[EXC_TOP_SPLITTER, PHI: r1
      0x0121: PHI (r1v8 android.database.Cursor) = (r1v7 android.database.Cursor), (r1v9 android.database.Cursor) binds: [B:33:0x0134, B:23:0x011f] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<com.mbridge.msdk.foundation.entity.c> f(String str) {
        ArrayList arrayList = new ArrayList();
        if (TextUtils.isEmpty(str)) {
            return arrayList;
        }
        String str2 = "SELECT request_id as rid ,count(*) as ridCount ,vcn,token_r,bid_token,ts as timestamp FROM campaign" + (((((" WHERE unitid = '" + str + "' AND level = 0 AND adSource = 1") + " AND is_bid_campaign = 1") + " AND readyState = '0'") + " group by request_id") + " order by ts ASC");
        Cursor cursorRawQuery = null;
        try {
            try {
                synchronized (new Object()) {
                    cursorRawQuery = getReadableDatabase().rawQuery(str2, null);
                }
                if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                    while (cursorRawQuery.moveToNext()) {
                        com.mbridge.msdk.foundation.entity.c cVar = new com.mbridge.msdk.foundation.entity.c();
                        String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rid"));
                        if (!TextUtils.isEmpty(string)) {
                            String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN));
                            int i = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("ridCount"));
                            int i2 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("vcn"));
                            int i3 = cursorRawQuery.getInt(cursorRawQuery.getColumnIndex("token_r"));
                            long j = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("timestamp"));
                            cVar.a(string);
                            cVar.c(i);
                            cVar.c(j);
                            cVar.a(i3);
                            cVar.b(i2);
                            if (!TextUtils.isEmpty(string2)) {
                                cVar.b(string2);
                            }
                            arrayList.add(cVar);
                        }
                    }
                }
            } catch (Exception e) {
                z.d("CampaignDao", e.getLocalizedMessage());
                if (0 != 0) {
                }
            }
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused) {
                }
            }
            return arrayList;
        } catch (Throwable th) {
            if (0 != 0) {
                try {
                    cursorRawQuery.close();
                } catch (Exception unused2) {
                }
            }
            throw th;
        }
    }

    public final int c(String str, String str2) {
        String str3;
        if (!TextUtils.isEmpty(str)) {
            str3 = "unitid = '" + str2 + "' AND " + TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID + " = '" + str + "' AND is_bid_campaign = 1";
        } else {
            str3 = "unitid = '" + str2 + "' AND is_bid_campaign = 1";
        }
        String str4 = str3 + " AND readyState = '0'";
        try {
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            return getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str4, null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            return 0;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x010e A[EXC_TOP_SPLITTER, PHI: r1
      0x010e: PHI (r1v3 android.database.Cursor) = (r1v2 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:31:0x0121, B:21:0x010c] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> g(String str) {
        String str2 = "SELECT request_id as rid, id as cid, plct as plct, plctb as plctb, ts as timestamp FROM campaign" + (((" WHERE unitid = '" + str + "' AND level = 0 AND adSource = 1") + " AND is_bid_campaign = 1") + " AND readyState = '0'");
        ConcurrentHashMap<String, com.mbridge.msdk.foundation.entity.c> concurrentHashMap = new ConcurrentHashMap<>();
        Cursor cursorRawQuery = null;
        try {
            try {
                synchronized (new Object()) {
                    cursorRawQuery = getReadableDatabase().rawQuery(str2, null);
                }
                if (cursorRawQuery != null && cursorRawQuery.getCount() > 0) {
                    while (cursorRawQuery.moveToNext()) {
                        String string = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("rid"));
                        String string2 = cursorRawQuery.getString(cursorRawQuery.getColumnIndex("cid"));
                        long j = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("plct"));
                        long j2 = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("plctb"));
                        long j3 = cursorRawQuery.getLong(cursorRawQuery.getColumnIndex("timestamp"));
                        if (concurrentHashMap.containsKey(string)) {
                            com.mbridge.msdk.foundation.entity.c cVar = concurrentHashMap.get(string);
                            if (cVar != null) {
                                cVar.a(string);
                                cVar.a(j);
                                cVar.b(j2);
                                cVar.c(j3);
                                if (cVar.c() != null) {
                                    cVar.c().add(string2);
                                }
                            }
                        } else {
                            com.mbridge.msdk.foundation.entity.c cVar2 = new com.mbridge.msdk.foundation.entity.c();
                            cVar2.a(string);
                            cVar2.a(j);
                            cVar2.b(j2);
                            cVar2.c(j3);
                            ArrayList arrayList = new ArrayList();
                            arrayList.add(string2);
                            cVar2.a(arrayList);
                            concurrentHashMap.put(string, cVar2);
                        }
                    }
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        cursorRawQuery.close();
                    } catch (Exception unused) {
                    }
                }
                throw th;
            }
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
            if (0 != 0) {
            }
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused2) {
            }
        }
        return concurrentHashMap;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:67:0x07a7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0784 A[EXC_TOP_SPLITTER, PHI: r9
      0x0784: PHI (r9v11 ??) = (r9v10 ??), (r9v13 ??) binds: [B:55:0x07a0, B:39:0x0782] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r1v5, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r9v10 */
    /* JADX WARN: Type inference failed for: r9v11, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r9v13, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r9v5, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r9v7 */
    /* JADX WARN: Type inference failed for: r9v8 */
    /* JADX WARN: Type inference failed for: r9v9, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<CampaignEx> a(String str, int i) throws Throwable {
        Throwable th;
        ?? RawQuery = "SELECT * FROM campaign" + (" WHERE unitid = '" + str + "' AND is_deleted" + ContainerUtils.KEY_VALUE_DELIMITER + i);
        try {
            try {
                try {
                    try {
                    } catch (Exception e) {
                        e = e;
                        z.d("CampaignDao", e.getLocalizedMessage());
                        if (RawQuery != 0) {
                        }
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Throwable th3) {
                th = th3;
                if (RawQuery != 0) {
                    try {
                        RawQuery.close();
                    } catch (Exception unused) {
                    }
                }
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            RawQuery = 0;
        } catch (Throwable th4) {
            th = th4;
            RawQuery = 0;
            if (RawQuery != 0) {
            }
            throw th;
        }
        synchronized (new Object()) {
            try {
                RawQuery = getReadableDatabase().rawQuery(RawQuery, null);
                if (RawQuery == 0 || RawQuery.getCount() <= 0) {
                    if (RawQuery != 0) {
                        try {
                            RawQuery.close();
                        } catch (Exception unused2) {
                        }
                    }
                    return null;
                }
                ArrayList arrayList = new ArrayList();
                while (RawQuery.moveToNext()) {
                    CampaignEx campaignEx = new CampaignEx();
                    String string = RawQuery.getString(RawQuery.getColumnIndex("pv_urls"));
                    boolean z = false;
                    if (!TextUtils.isEmpty(string)) {
                        JSONArray jSONArray = new JSONArray(string);
                        ArrayList arrayList2 = new ArrayList();
                        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                            arrayList2.add(jSONArray.getString(i2));
                        }
                        campaignEx.setPv_urls(arrayList2);
                    }
                    campaignEx.setId(RawQuery.getString(RawQuery.getColumnIndex("id")));
                    campaignEx.setTab(RawQuery.getInt(RawQuery.getColumnIndex("tab")));
                    campaignEx.setPackageName(RawQuery.getString(RawQuery.getColumnIndex("package_name")));
                    campaignEx.setAppName(RawQuery.getString(RawQuery.getColumnIndex("app_name")));
                    campaignEx.setAppDesc(RawQuery.getString(RawQuery.getColumnIndex("app_desc")));
                    campaignEx.setSize(RawQuery.getString(RawQuery.getColumnIndex("app_size")));
                    campaignEx.setImageSize(RawQuery.getString(RawQuery.getColumnIndex("image_size")));
                    campaignEx.setIconUrl(RawQuery.getString(RawQuery.getColumnIndex("icon_url")));
                    campaignEx.setImageUrl(RawQuery.getString(RawQuery.getColumnIndex("image_url")));
                    campaignEx.setImpressionURL(RawQuery.getString(RawQuery.getColumnIndex("impression_url")));
                    campaignEx.setNoticeUrl(RawQuery.getString(RawQuery.getColumnIndex("notice_url")));
                    campaignEx.setClickURL(RawQuery.getString(RawQuery.getColumnIndex("download_url")));
                    campaignEx.setWtick(RawQuery.getInt(RawQuery.getColumnIndex("wtick")));
                    campaignEx.setDeepLinkUrl(RawQuery.getString(RawQuery.getColumnIndex(a.a.o)));
                    campaignEx.setUserActivation(Boolean.parseBoolean(RawQuery.getString(RawQuery.getColumnIndex("user_activation"))));
                    campaignEx.setOnlyImpressionURL(RawQuery.getString(RawQuery.getColumnIndex("only_impression")));
                    campaignEx.setPreClick(RawQuery.getInt(RawQuery.getColumnIndex("preclick")) == 1);
                    campaignEx.setTemplate(RawQuery.getInt(RawQuery.getColumnIndex("template")));
                    campaignEx.setLandingType(RawQuery.getString(RawQuery.getColumnIndex("landing_type")));
                    campaignEx.setLinkType(RawQuery.getInt(RawQuery.getColumnIndex("link_type")));
                    campaignEx.setClick_mode(RawQuery.getString(RawQuery.getColumnIndex("click_mode")));
                    campaignEx.setRating(Double.parseDouble(RawQuery.getString(RawQuery.getColumnIndex("star"))));
                    campaignEx.setNumberRating(RawQuery.getInt(RawQuery.getColumnIndex("number_rating")));
                    campaignEx.setClickInterval(RawQuery.getInt(RawQuery.getColumnIndex("cti")));
                    campaignEx.setPreClickInterval(RawQuery.getInt(RawQuery.getColumnIndex("cpti")));
                    campaignEx.setTimestamp(RawQuery.getLong(RawQuery.getColumnIndex("ts")));
                    campaignEx.setCacheLevel(RawQuery.getInt(RawQuery.getColumnIndex("level")));
                    campaignEx.setAdCall(RawQuery.getString(RawQuery.getColumnIndex("ad_call")));
                    campaignEx.setFca(RawQuery.getInt(RawQuery.getColumnIndex("fc_a")));
                    campaignEx.setFcb(RawQuery.getInt(RawQuery.getColumnIndex("fc_b")));
                    campaignEx.setAd_url_list(RawQuery.getString(RawQuery.getColumnIndex("ad_url_list")));
                    campaignEx.setVideoLength(RawQuery.getInt(RawQuery.getColumnIndex("video_length")));
                    campaignEx.setVideoSize(RawQuery.getInt(RawQuery.getColumnIndex("video_size")));
                    campaignEx.setVideoResolution(RawQuery.getString(RawQuery.getColumnIndex("video_resolution")));
                    campaignEx.setEndcard_click_result(RawQuery.getInt(RawQuery.getColumnIndex("endcard_click_result")));
                    campaignEx.setVideoUrlEncode(RawQuery.getString(RawQuery.getColumnIndex("video_url")));
                    campaignEx.setWatchMile(RawQuery.getInt(RawQuery.getColumnIndex("watch_mile")));
                    campaignEx.setVideoCompleteTime(RawQuery.getInt(RawQuery.getColumnIndex("view_com_time")));
                    campaignEx.setTImp(RawQuery.getInt(RawQuery.getColumnIndex("t_imp")));
                    campaignEx.setBty(RawQuery.getInt(RawQuery.getColumnIndex("bty")));
                    campaignEx.setAdvImp(RawQuery.getString(RawQuery.getColumnIndex("advImp")));
                    campaignEx.setGuidelines(RawQuery.getString(RawQuery.getColumnIndex("guidelines")));
                    campaignEx.setOfferType(RawQuery.getInt(RawQuery.getColumnIndex("offer_type")));
                    campaignEx.setHtmlUrl(RawQuery.getString(RawQuery.getColumnIndex("html_url")));
                    campaignEx.setGuidelines(RawQuery.getString(RawQuery.getColumnIndex("guidelines")));
                    campaignEx.setHtmlUrl(RawQuery.getString(RawQuery.getColumnIndex("html_url")));
                    campaignEx.setEndScreenUrl(RawQuery.getString(RawQuery.getColumnIndex("end_screen_url")));
                    campaignEx.setRewardName(RawQuery.getString(RawQuery.getColumnIndex("reward_name")));
                    campaignEx.setRewardAmount(RawQuery.getInt(RawQuery.getColumnIndex("reward_amount")));
                    campaignEx.setRewardPlayStatus(RawQuery.getInt(RawQuery.getColumnIndex("reward_play_status")));
                    campaignEx.setAdvId(RawQuery.getString(RawQuery.getColumnIndex("adv_id")));
                    campaignEx.setTtc_ct2(RawQuery.getInt(RawQuery.getColumnIndex("ttc_ct2")));
                    campaignEx.setTtc_type(RawQuery.getInt(RawQuery.getColumnIndex("ttc_type")));
                    campaignEx.setRetarget_offer(RawQuery.getInt(RawQuery.getColumnIndex("retarget")));
                    campaignEx.setCampaignUnitId(RawQuery.getString(RawQuery.getColumnIndex("unitid")));
                    campaignEx.setNativeVideoTracking(CampaignEx.TrackingStr2Object(RawQuery.getString(RawQuery.getColumnIndex("native_ad_tracking"))));
                    campaignEx.setNativeVideoTrackingString(RawQuery.getString(RawQuery.getColumnIndex("native_ad_tracking")));
                    campaignEx.setVideo_end_type(RawQuery.getInt(RawQuery.getColumnIndex("video_end_type")));
                    campaignEx.setendcard_url(RawQuery.getString(RawQuery.getColumnIndex("endcard_url")));
                    campaignEx.setPlayable_ads_without_video(RawQuery.getInt(RawQuery.getColumnIndex("playable_ads_without_video")));
                    campaignEx.setLoopbackString(RawQuery.getString(RawQuery.getColumnIndex("loopback")));
                    campaignEx.setLoopbackMap(CampaignEx.loopbackStrToMap(RawQuery.getString(RawQuery.getColumnIndex("loopback"))));
                    campaignEx.setRewardTemplateMode(CampaignEx.c.a(RawQuery.getString(RawQuery.getColumnIndex("reward_teamplate"))));
                    campaignEx.setVideoMD5Value(RawQuery.getString(RawQuery.getColumnIndex("md5_file")));
                    campaignEx.setGifUrl(RawQuery.getString(RawQuery.getColumnIndex("gif_url")));
                    campaignEx.setNvT2(RawQuery.getInt(RawQuery.getColumnIndex("nv_t2")));
                    campaignEx.setClickTimeOutInterval(RawQuery.getInt(RawQuery.getColumnIndex("c_coi")));
                    campaignEx.setcUA(RawQuery.getInt(RawQuery.getColumnIndex("c_ua")));
                    campaignEx.setImpUA(RawQuery.getInt(RawQuery.getColumnIndex("imp_ua")));
                    campaignEx.setIsDeleted(RawQuery.getInt(RawQuery.getColumnIndex("is_deleted")));
                    campaignEx.setIsClick(RawQuery.getInt(RawQuery.getColumnIndex("is_click")));
                    campaignEx.setIsAddSuccesful(RawQuery.getInt(RawQuery.getColumnIndex("is_add_sucesful")));
                    campaignEx.setKeyIaOri(RawQuery.getInt(RawQuery.getColumnIndex("ia_ori")));
                    campaignEx.setAdType(RawQuery.getInt(RawQuery.getColumnIndex("ad_type")));
                    campaignEx.setIa_ext1(RawQuery.getString(RawQuery.getColumnIndex("ia_ext1")));
                    campaignEx.setIa_ext2(RawQuery.getString(RawQuery.getColumnIndex("ia_ext2")));
                    campaignEx.setKeyIaRst(RawQuery.getInt(RawQuery.getColumnIndex("ia_rst")));
                    campaignEx.setKeyIaUrl(RawQuery.getString(RawQuery.getColumnIndex("ia_url")));
                    campaignEx.setKeyIaIcon(RawQuery.getString(RawQuery.getColumnIndex("ia_icon")));
                    campaignEx.setIsDownLoadZip(RawQuery.getInt(RawQuery.getColumnIndex("is_download_zip")));
                    campaignEx.setInteractiveCache(RawQuery.getString(RawQuery.getColumnIndex("ia_cache")));
                    campaignEx.setFac(RawQuery.getInt(RawQuery.getColumnIndex("fac")));
                    campaignEx.setTpOffer(RawQuery.getInt(RawQuery.getColumnIndex("tp_offer")));
                    campaignEx.setGhId(RawQuery.getString(RawQuery.getColumnIndex("gh_id")));
                    campaignEx.setGhPath(RawQuery.getString(RawQuery.getColumnIndex("gh_path")));
                    campaignEx.setBindId(RawQuery.getString(RawQuery.getColumnIndex("bind_id")));
                    campaignEx.setOc_time(RawQuery.getInt(RawQuery.getColumnIndex("oc_time")));
                    campaignEx.setOc_type(RawQuery.getInt(RawQuery.getColumnIndex("oc_type")));
                    campaignEx.setT_list(RawQuery.getString(RawQuery.getColumnIndex("t_list")));
                    String string2 = RawQuery.getString(RawQuery.getColumnIndex("adchoice"));
                    if (!TextUtils.isEmpty(string2)) {
                        campaignEx.setAdchoice(CampaignEx.a.a(string2));
                    }
                    campaignEx.setAdchoiceSizeHeight(RawQuery.getInt(RawQuery.getColumnIndex("adchoice_size_height")));
                    campaignEx.setAdchoiceSizeWidth(RawQuery.getInt(RawQuery.getColumnIndex("adchoice_size_width")));
                    campaignEx.setPlct(RawQuery.getLong(RawQuery.getColumnIndex("plct")));
                    campaignEx.setPlctb(RawQuery.getLong(RawQuery.getColumnIndex("plctb")));
                    campaignEx.setAdZip(RawQuery.getString(RawQuery.getColumnIndex("ad_zip")));
                    campaignEx.setAdHtml(RawQuery.getString(RawQuery.getColumnIndex("ad_html")));
                    campaignEx.setBannerUrl(RawQuery.getString(RawQuery.getColumnIndex("banner_url")));
                    campaignEx.setBannerHtml(RawQuery.getString(RawQuery.getColumnIndex("banner_html")));
                    campaignEx.setCreativeId(RawQuery.getLong(RawQuery.getColumnIndex("creative_id")));
                    campaignEx.setIsBidCampaign(RawQuery.getInt(RawQuery.getColumnIndex("is_bid_campaign")) == 1);
                    campaignEx.setBidToken(RawQuery.getString(RawQuery.getColumnIndex(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN)));
                    campaignEx.setMraid(RawQuery.getString(RawQuery.getColumnIndex("mraid")));
                    if (RawQuery.getInt(RawQuery.getColumnIndex("is_mraid_campaign")) == 1) {
                        z = true;
                    }
                    campaignEx.setIsMraid(z);
                    campaignEx.setOmid(RawQuery.getString(RawQuery.getColumnIndex("omid")));
                    campaignEx.setReady_rate(RawQuery.getInt(RawQuery.getColumnIndex("ready_rate")));
                    campaignEx.setExt_data(RawQuery.getString(RawQuery.getColumnIndex("ext_data")));
                    campaignEx.setNscpt(RawQuery.getInt(RawQuery.getColumnIndex("nscpt")));
                    campaignEx.setMof_template_url(RawQuery.getString(RawQuery.getColumnIndex("mof_template_url")));
                    campaignEx.setMof_tplid(RawQuery.getInt(RawQuery.getColumnIndex("mof_tplid")));
                    campaignEx.setReq_ext_data(RawQuery.getString(RawQuery.getColumnIndex("req_ext_data")));
                    campaignEx.setReadyState(RawQuery.getInt(RawQuery.getColumnIndex("readyState")));
                    campaignEx.setLoadTimeoutState(RawQuery.getInt(RawQuery.getColumnIndex("load_timeout")));
                    campaignEx.setPlacementId(RawQuery.getString(RawQuery.getColumnIndex(l.a.c)));
                    campaignEx.setApkAlt(RawQuery.getInt(RawQuery.getColumnIndex("apk_alt")));
                    campaignEx.setAkdlui(RawQuery.getString(RawQuery.getColumnIndex("akdlui")));
                    campaignEx.setNtbarpasbl(RawQuery.getInt(RawQuery.getColumnIndex("ntbarpasbl")));
                    campaignEx.setNtbarpt(RawQuery.getInt(RawQuery.getColumnIndex("ntbarpt")));
                    campaignEx.setAtatType(RawQuery.getInt(RawQuery.getColumnIndex("atat_type")));
                    campaignEx.setRewardPlus(RewardPlus.parseByString(RawQuery.getString(RawQuery.getColumnIndex("rw_pl"))));
                    campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(RawQuery.getString(RawQuery.getColumnIndex("apk_info"))));
                    campaignEx.setFlb(RawQuery.getInt(RawQuery.getColumnIndex("flb")));
                    campaignEx.setFlbSkipTime(RawQuery.getInt(RawQuery.getColumnIndex("flb_skiptime")));
                    campaignEx.setCbd(RawQuery.getInt(RawQuery.getColumnIndex("cbd")));
                    campaignEx.setVst(RawQuery.getInt(RawQuery.getColumnIndex("vst")));
                    campaignEx.setAdSpaceT(RawQuery.getInt(RawQuery.getColumnIndex("adspace_t")));
                    campaignEx.setVcn(RawQuery.getInt(RawQuery.getColumnIndex("vcn")));
                    campaignEx.setTokenRule(RawQuery.getInt(RawQuery.getColumnIndex("token_r")));
                    campaignEx.setEncryptPrice(RawQuery.getString(RawQuery.getColumnIndex("encrypt_p")));
                    campaignEx.setVideoCheckType(RawQuery.getInt(RawQuery.getColumnIndex("vck_t")));
                    campaignEx.setVideoCtnType(RawQuery.getInt(RawQuery.getColumnIndex("vctn_t")));
                    campaignEx.setRsIgnoreCheckRuleByString(RawQuery.getString(RawQuery.getColumnIndex("rs_ignc_r")));
                    campaignEx.setAabEntity(AabEntity.parser(RawQuery.getString(RawQuery.getColumnIndex(CampaignEx.JSON_KEY_AAB))));
                    arrayList.add(campaignEx);
                }
                if (RawQuery != 0) {
                    try {
                        RawQuery.close();
                    } catch (Exception unused3) {
                    }
                }
                return arrayList;
            } catch (Throwable th5) {
                th = th5;
                throw th;
            }
        }
    }

    private CampaignEx a(Cursor cursor) {
        if (cursor == null || cursor.getCount() <= 0) {
            return null;
        }
        CampaignEx campaignEx = new CampaignEx();
        try {
            String string = cursor.getString(cursor.getColumnIndex("pv_urls"));
            if (!TextUtils.isEmpty(string)) {
                JSONArray jSONArray = new JSONArray(string);
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < jSONArray.length(); i++) {
                    arrayList.add(jSONArray.getString(i));
                }
                campaignEx.setPv_urls(arrayList);
            }
        } catch (JSONException unused) {
        }
        campaignEx.setId(cursor.getString(cursor.getColumnIndex("id")));
        campaignEx.setTab(cursor.getInt(cursor.getColumnIndex("tab")));
        campaignEx.setPackageName(cursor.getString(cursor.getColumnIndex("package_name")));
        campaignEx.setAppName(cursor.getString(cursor.getColumnIndex("app_name")));
        campaignEx.setAppDesc(cursor.getString(cursor.getColumnIndex("app_desc")));
        campaignEx.setSize(cursor.getString(cursor.getColumnIndex("app_size")));
        campaignEx.setImageSize(cursor.getString(cursor.getColumnIndex("image_size")));
        campaignEx.setIconUrl(cursor.getString(cursor.getColumnIndex("icon_url")));
        campaignEx.setImageUrl(cursor.getString(cursor.getColumnIndex("image_url")));
        campaignEx.setImpressionURL(cursor.getString(cursor.getColumnIndex("impression_url")));
        campaignEx.setNoticeUrl(cursor.getString(cursor.getColumnIndex("notice_url")));
        campaignEx.setClickURL(cursor.getString(cursor.getColumnIndex("download_url")));
        campaignEx.setWtick(cursor.getInt(cursor.getColumnIndex("wtick")));
        campaignEx.setDeepLinkUrl(cursor.getString(cursor.getColumnIndex(a.a.o)));
        campaignEx.setUserActivation(Boolean.parseBoolean(cursor.getString(cursor.getColumnIndex("user_activation"))));
        campaignEx.setOnlyImpressionURL(cursor.getString(cursor.getColumnIndex("only_impression")));
        campaignEx.setPreClick(cursor.getInt(cursor.getColumnIndex("preclick")) == 1);
        campaignEx.setTemplate(cursor.getInt(cursor.getColumnIndex("template")));
        campaignEx.setLandingType(cursor.getString(cursor.getColumnIndex("landing_type")));
        campaignEx.setLinkType(cursor.getInt(cursor.getColumnIndex("link_type")));
        campaignEx.setClick_mode(cursor.getString(cursor.getColumnIndex("click_mode")));
        campaignEx.setRating(Double.parseDouble(cursor.getString(cursor.getColumnIndex("star"))));
        campaignEx.setNumberRating(cursor.getInt(cursor.getColumnIndex("number_rating")));
        campaignEx.setClickInterval(cursor.getInt(cursor.getColumnIndex("cti")));
        campaignEx.setPreClickInterval(cursor.getInt(cursor.getColumnIndex("cpti")));
        campaignEx.setTimestamp(cursor.getLong(cursor.getColumnIndex("ts")));
        campaignEx.setCacheLevel(cursor.getInt(cursor.getColumnIndex("level")));
        campaignEx.setAdCall(cursor.getString(cursor.getColumnIndex("ad_call")));
        campaignEx.setFcb(cursor.getInt(cursor.getColumnIndex("fc_b")));
        campaignEx.setAd_url_list(cursor.getString(cursor.getColumnIndex("ad_url_list")));
        campaignEx.setVideoLength(cursor.getInt(cursor.getColumnIndex("video_length")));
        campaignEx.setVideoSize(cursor.getInt(cursor.getColumnIndex("video_size")));
        campaignEx.setVideoResolution(cursor.getString(cursor.getColumnIndex("video_resolution")));
        campaignEx.setEndcard_click_result(cursor.getInt(cursor.getColumnIndex("endcard_click_result")));
        campaignEx.setVideoUrlEncode(cursor.getString(cursor.getColumnIndex("video_url")));
        campaignEx.setWatchMile(cursor.getInt(cursor.getColumnIndex("watch_mile")));
        campaignEx.setVideoCompleteTime(cursor.getInt(cursor.getColumnIndex("view_com_time")));
        campaignEx.setTImp(cursor.getInt(cursor.getColumnIndex("t_imp")));
        campaignEx.setBty(cursor.getInt(cursor.getColumnIndex("bty")));
        campaignEx.setAdvImp(cursor.getString(cursor.getColumnIndex("advImp")));
        campaignEx.setGuidelines(cursor.getString(cursor.getColumnIndex("guidelines")));
        campaignEx.setOfferType(cursor.getInt(cursor.getColumnIndex("offer_type")));
        campaignEx.setHtmlUrl(cursor.getString(cursor.getColumnIndex("html_url")));
        campaignEx.setGuidelines(cursor.getString(cursor.getColumnIndex("guidelines")));
        campaignEx.setHtmlUrl(cursor.getString(cursor.getColumnIndex("html_url")));
        campaignEx.setEndScreenUrl(cursor.getString(cursor.getColumnIndex("end_screen_url")));
        campaignEx.setRewardName(cursor.getString(cursor.getColumnIndex("reward_name")));
        campaignEx.setRewardAmount(cursor.getInt(cursor.getColumnIndex("reward_amount")));
        campaignEx.setRewardPlayStatus(cursor.getInt(cursor.getColumnIndex("reward_play_status")));
        campaignEx.setAdvId(cursor.getString(cursor.getColumnIndex("adv_id")));
        campaignEx.setTtc_ct2(cursor.getInt(cursor.getColumnIndex("ttc_ct2")));
        campaignEx.setTtc_type(cursor.getInt(cursor.getColumnIndex("ttc_type")));
        campaignEx.setRetarget_offer(cursor.getInt(cursor.getColumnIndex("retarget")));
        campaignEx.setCampaignUnitId(cursor.getString(cursor.getColumnIndex("unitid")));
        campaignEx.setNativeVideoTracking(CampaignEx.TrackingStr2Object(cursor.getString(cursor.getColumnIndex("native_ad_tracking"))));
        campaignEx.setNativeVideoTrackingString(cursor.getString(cursor.getColumnIndex("native_ad_tracking")));
        campaignEx.setVideo_end_type(cursor.getInt(cursor.getColumnIndex("video_end_type")));
        campaignEx.setendcard_url(cursor.getString(cursor.getColumnIndex("endcard_url")));
        campaignEx.setPlayable_ads_without_video(cursor.getInt(cursor.getColumnIndex("playable_ads_without_video")));
        campaignEx.setLoopbackString(cursor.getString(cursor.getColumnIndex("loopback")));
        campaignEx.setLoopbackMap(CampaignEx.loopbackStrToMap(cursor.getString(cursor.getColumnIndex("loopback"))));
        campaignEx.setMof_template_url(cursor.getString(cursor.getColumnIndex("mof_template_url")));
        campaignEx.setMof_tplid(cursor.getInt(cursor.getColumnIndex("mof_tplid")));
        campaignEx.setRewardTemplateMode(CampaignEx.c.a(cursor.getString(cursor.getColumnIndex("reward_teamplate"))));
        campaignEx.setVideoMD5Value(cursor.getString(cursor.getColumnIndex("md5_file")));
        campaignEx.setGifUrl(cursor.getString(cursor.getColumnIndex("gif_url")));
        campaignEx.setNvT2(cursor.getInt(cursor.getColumnIndex("nv_t2")));
        campaignEx.setClickTimeOutInterval(cursor.getInt(cursor.getColumnIndex("c_coi")));
        campaignEx.setcUA(cursor.getInt(cursor.getColumnIndex("c_ua")));
        campaignEx.setImpUA(cursor.getInt(cursor.getColumnIndex("imp_ua")));
        campaignEx.setJmPd(cursor.getInt(cursor.getColumnIndex("jm_pd")));
        campaignEx.setIsDeleted(cursor.getInt(cursor.getColumnIndex("is_deleted")));
        campaignEx.setIsClick(cursor.getInt(cursor.getColumnIndex("is_click")));
        campaignEx.setIsAddSuccesful(cursor.getInt(cursor.getColumnIndex("is_add_sucesful")));
        campaignEx.setIsDownLoadZip(cursor.getInt(cursor.getColumnIndex("is_download_zip")));
        campaignEx.setInteractiveCache(cursor.getString(cursor.getColumnIndex("ia_cache")));
        campaignEx.setKeyIaOri(cursor.getInt(cursor.getColumnIndex("ia_ori")));
        campaignEx.setAdType(cursor.getInt(cursor.getColumnIndex("ad_type")));
        campaignEx.setIa_ext1(cursor.getString(cursor.getColumnIndex("ia_ext1")));
        campaignEx.setIa_ext2(cursor.getString(cursor.getColumnIndex("ia_ext2")));
        campaignEx.setKeyIaRst(cursor.getInt(cursor.getColumnIndex("ia_rst")));
        campaignEx.setKeyIaUrl(cursor.getString(cursor.getColumnIndex("ia_url")));
        campaignEx.setKeyIaIcon(cursor.getString(cursor.getColumnIndex("ia_icon")));
        campaignEx.setFac(cursor.getInt(cursor.getColumnIndex("fac")));
        campaignEx.setTpOffer(cursor.getInt(cursor.getColumnIndex("tp_offer")));
        campaignEx.setGhId(cursor.getString(cursor.getColumnIndex("gh_id")));
        campaignEx.setGhPath(cursor.getString(cursor.getColumnIndex("gh_path")));
        campaignEx.setBindId(cursor.getString(cursor.getColumnIndex("bind_id")));
        campaignEx.setOc_time(cursor.getInt(cursor.getColumnIndex("oc_time")));
        campaignEx.setOc_type(cursor.getInt(cursor.getColumnIndex("oc_type")));
        campaignEx.setT_list(cursor.getString(cursor.getColumnIndex("t_list")));
        String string2 = cursor.getString(cursor.getColumnIndex("adchoice"));
        if (!TextUtils.isEmpty(string2)) {
            campaignEx.setAdchoice(CampaignEx.a.a(string2));
        }
        campaignEx.setAdchoiceSizeHeight(cursor.getInt(cursor.getColumnIndex("adchoice_size_height")));
        campaignEx.setAdchoiceSizeWidth(cursor.getInt(cursor.getColumnIndex("adchoice_size_width")));
        campaignEx.setPlct(cursor.getLong(cursor.getColumnIndex("plct")));
        campaignEx.setPlctb(cursor.getLong(cursor.getColumnIndex("plctb")));
        campaignEx.setAdZip(cursor.getString(cursor.getColumnIndex("ad_zip")));
        campaignEx.setAdHtml(cursor.getString(cursor.getColumnIndex("ad_html")));
        campaignEx.setBannerUrl(cursor.getString(cursor.getColumnIndex("banner_url")));
        campaignEx.setBannerHtml(cursor.getString(cursor.getColumnIndex("banner_html")));
        campaignEx.setCreativeId(cursor.getLong(cursor.getColumnIndex("creative_id")));
        campaignEx.setIsBidCampaign(cursor.getInt(cursor.getColumnIndex("is_bid_campaign")) == 1);
        campaignEx.setBidToken(cursor.getString(cursor.getColumnIndex(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN)));
        campaignEx.setMraid(cursor.getString(cursor.getColumnIndex("mraid")));
        campaignEx.setIsMraid(cursor.getInt(cursor.getColumnIndex("is_mraid_campaign")) == 1);
        campaignEx.setOmid(cursor.getString(cursor.getColumnIndex("omid")));
        campaignEx.setReady_rate(cursor.getInt(cursor.getColumnIndex("ready_rate")));
        campaignEx.setExt_data(cursor.getString(cursor.getColumnIndex("ext_data")));
        campaignEx.setNscpt(cursor.getInt(cursor.getColumnIndex("nscpt")));
        campaignEx.setReq_ext_data(cursor.getString(cursor.getColumnIndex("req_ext_data")));
        campaignEx.setReadyState(cursor.getInt(cursor.getColumnIndex("readyState")));
        campaignEx.setLoadTimeoutState(cursor.getInt(cursor.getColumnIndex("load_timeout")));
        campaignEx.setPlacementId(cursor.getString(cursor.getColumnIndex(l.a.c)));
        campaignEx.setApkAlt(cursor.getInt(cursor.getColumnIndex("apk_alt")));
        campaignEx.setAkdlui(cursor.getString(cursor.getColumnIndex("akdlui")));
        campaignEx.setNtbarpasbl(cursor.getInt(cursor.getColumnIndex("ntbarpasbl")));
        campaignEx.setNtbarpt(cursor.getInt(cursor.getColumnIndex("ntbarpt")));
        campaignEx.setAtatType(cursor.getInt(cursor.getColumnIndex("atat_type")));
        campaignEx.setRewardPlus(RewardPlus.parseByString(cursor.getString(cursor.getColumnIndex("rw_pl"))));
        campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(cursor.getString(cursor.getColumnIndex("apk_info"))));
        campaignEx.setFlb(cursor.getInt(cursor.getColumnIndex("flb")));
        campaignEx.setFlbSkipTime(cursor.getInt(cursor.getColumnIndex("flb_skiptime")));
        campaignEx.setCbd(cursor.getInt(cursor.getColumnIndex("cbd")));
        campaignEx.setVst(cursor.getInt(cursor.getColumnIndex("vst")));
        campaignEx.setAdSpaceT(cursor.getInt(cursor.getColumnIndex("adspace_t")));
        campaignEx.setVcn(cursor.getInt(cursor.getColumnIndex("vcn")));
        campaignEx.setTokenRule(cursor.getInt(cursor.getColumnIndex("token_r")));
        campaignEx.setEncryptPrice(cursor.getString(cursor.getColumnIndex("encrypt_p")));
        campaignEx.setVideoCheckType(cursor.getInt(cursor.getColumnIndex("vck_t")));
        campaignEx.setVideoCtnType(cursor.getInt(cursor.getColumnIndex("vctn_t")));
        campaignEx.setRsIgnoreCheckRuleByString(cursor.getString(cursor.getColumnIndex("rs_ignc_r")));
        return campaignEx;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v12 */
    /* JADX WARN: Type inference failed for: r0v14 */
    /* JADX WARN: Type inference failed for: r0v15 */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r0v17 */
    /* JADX WARN: Type inference failed for: r0v18 */
    /* JADX WARN: Type inference failed for: r0v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5, types: [com.mbridge.msdk.foundation.entity.CampaignEx] */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v6 */
    public final CampaignEx d(String str, String str2) throws Throwable {
        ?? r5;
        Cursor cursorRawQuery;
        ?? A = 0;
        A = 0;
        A = 0;
        A = 0;
        A = 0;
        Cursor cursor = null;
        try {
            try {
                cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM campaign where unitid ='" + str2 + "' and id = '" + str + "'", null);
                if (cursorRawQuery != null) {
                    try {
                        if (cursorRawQuery.getCount() > 0) {
                            while (cursorRawQuery.moveToNext()) {
                                A = a(cursorRawQuery);
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        ?? r3 = A;
                        cursor = cursorRawQuery;
                        r5 = r3;
                        z.d("CampaignDao", e.getLocalizedMessage());
                        if (cursor != null) {
                            try {
                                cursor.close();
                            } catch (Exception unused) {
                            }
                        }
                        A = r5;
                    } catch (Throwable th) {
                        th = th;
                        A = cursorRawQuery;
                        if (A != 0) {
                            try {
                                A.close();
                            } catch (Exception unused2) {
                            }
                        }
                        throw th;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e2) {
            e = e2;
            r5 = 0;
        }
        if (cursorRawQuery != null) {
            try {
                cursorRawQuery.close();
            } catch (Exception unused3) {
            }
        }
        return A;
    }

    public final synchronized void e(String str, String str2) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String str3 = "unitid = '" + str + "'";
            if (!TextUtils.isEmpty(str2)) {
                str3 = str3 + " AND bid_token != '" + str2 + "'";
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, (str3 + " AND is_bid_campaign = 1") + " AND bid_token IS NOT NULL", null);
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
    }

    public final synchronized void f(String str, String str2) {
        try {
        } catch (Exception e) {
            z.d("CampaignDao", e.getLocalizedMessage());
        }
        if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(str)) {
            String str3 = "unitid = '" + str + "' AND " + TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN + " = '" + str2 + "' AND " + TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BID_TOKEN + " IS NOT NULL";
            ContentValues contentValues = new ContentValues();
            contentValues.put("readyState", (Integer) 2);
            getWritableDatabase().update(MBInterstitialActivity.INTENT_CAMAPIGN, contentValues, str3, null);
        }
    }

    public final List<CampaignEx> b(String str, int i, boolean z) throws Throwable {
        ArrayList arrayList;
        String str2;
        Cursor cursor = null;
        arrayList = null;
        ArrayList arrayList2 = null;
        cursor = null;
        try {
            try {
                if (z) {
                    str2 = "placement_id = " + str + " AND ad_type = " + i;
                } else {
                    str2 = "ad_type = " + i;
                }
                Cursor cursorRawQuery = getReadableDatabase().rawQuery("SELECT * FROM campaign WHERE " + str2, null);
                if (cursorRawQuery != null) {
                    try {
                        try {
                            if (cursorRawQuery.getCount() > 0) {
                                arrayList = new ArrayList();
                                while (cursorRawQuery.moveToNext()) {
                                    try {
                                        arrayList.add(a(cursorRawQuery));
                                    } catch (Exception e) {
                                        cursor = cursorRawQuery;
                                        e = e;
                                        z.d("CampaignDao", e.getLocalizedMessage());
                                        if (cursor != null) {
                                            try {
                                                cursor.close();
                                            } catch (Exception unused) {
                                            }
                                        }
                                        return arrayList;
                                    }
                                }
                                arrayList2 = arrayList;
                            }
                        } catch (Throwable th) {
                            cursor = cursorRawQuery;
                            th = th;
                            if (cursor != null) {
                                try {
                                    cursor.close();
                                } catch (Exception unused2) {
                                }
                            }
                            throw th;
                        }
                    } catch (Exception e2) {
                        cursor = cursorRawQuery;
                        e = e2;
                        arrayList = null;
                    }
                }
                if (cursorRawQuery == null) {
                    return arrayList2;
                }
                try {
                    cursorRawQuery.close();
                    return arrayList2;
                } catch (Exception unused3) {
                    return arrayList2;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e3) {
            e = e3;
            arrayList = null;
        }
    }
}
