package com.sigmob.sdk.base;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.Database.SQLiteBuider;
import com.czhj.sdk.common.models.AdStatus;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.Sigmob;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.db.a;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmobRequest;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAdRequest;
import com.sigmob.windad.WindAds;
import com.tkay.expressad.foundation.d.l;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public abstract class g {
    private static HashMap<String, b> c = new HashMap<>();
    protected WindAdRequest a;
    private b b;
    private boolean e;
    private String f;
    private int g;
    public AdStatus mADStatus = AdStatus.AdStatusNone;
    public int pIdEmpty_filters = 0;
    public int init_filters = 0;
    public int loadCount = 0;
    private int d = 0;
    private String h = WindAds.CNY;

    protected g(WindAdRequest windAdRequest, boolean z) {
        this.a = windAdRequest;
        windAdRequest.setHalfInterstitial(z);
    }

    private b a(String str) {
        b bVar = new b();
        Cursor cursorRawQuery = null;
        try {
            cursorRawQuery = com.sigmob.sdk.base.db.a.a().getReadableDatabase().rawQuery("select error_code, count(*) as num from adload_event where adslot_id = '" + str + "' group by adslot_id", null);
            a(bVar, cursorRawQuery);
        } catch (Throwable th) {
            try {
                SigmobLog.e(th.getMessage());
            } finally {
                if (cursorRawQuery != null && !cursorRawQuery.isClosed()) {
                    cursorRawQuery.close();
                }
            }
        }
        if (cursorRawQuery != null && !cursorRawQuery.isClosed()) {
        }
        return bVar;
    }

    private void a(b bVar, Cursor cursor) {
        if (cursor == null || !cursor.moveToFirst()) {
            return;
        }
        int i = cursor.getInt(cursor.getColumnIndexOrThrow("error_code"));
        int i2 = cursor.getInt(cursor.getColumnIndexOrThrow(l.d));
        do {
            if (i != 0) {
                bVar.a = i2;
            }
            bVar.b += i2;
            switch (i) {
                case 600200:
                case 600201:
                case 600203:
                case 600204:
                    bVar.f = i2;
                    break;
                case 600900:
                    bVar.e = i2;
                    break;
                case 600905:
                    bVar.c = i2;
                    break;
                case 610012:
                    bVar.g = i2;
                    break;
                case 610013:
                    bVar.d = i2;
                    break;
            }
        } while (cursor.moveToNext());
    }

    private void a(final String str, final int i) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            SQLiteDatabase writableDatabase = com.sigmob.sdk.base.db.a.a().getWritableDatabase();
            SQLiteBuider.Insert.Builder builder = new SQLiteBuider.Insert.Builder();
            builder.setTableName(com.sigmob.sdk.base.db.a.f);
            HashMap map = new HashMap();
            map.put("adslot_id", str);
            map.put("error_code", Integer.valueOf(i));
            map.put("timestamp", Long.valueOf(System.currentTimeMillis()));
            builder.setColumnValues(map);
            com.sigmob.sdk.base.db.a.a().a(writableDatabase, builder.build(), new a.a() {
                @Override
                public void a() {
                    SigmobLog.d(str + " insert  load error event " + i + " onSuccess: ");
                }

                @Override
                public void a(Throwable th) {
                    SigmobLog.e(str + " insert  load error event " + i + " onFailed: ", th);
                }
            });
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private void a(String str, String str2) {
        if (c() == null || c().size() <= 0) {
            return;
        }
        for (int i = 0; i < c().size(); i++) {
            c().get(i).getMacroCommon().addMarcoKey(str, str2);
        }
    }

    private void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            com.sigmob.sdk.base.db.a.a().getWritableDatabase().delete(com.sigmob.sdk.base.db.a.f, "adslot_id=?", new String[]{str});
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private void d() {
        this.pIdEmpty_filters = 0;
        b(a());
        this.b.a();
    }

    protected String a() {
        WindAdRequest windAdRequest = this.a;
        if (windAdRequest != null) {
            return windAdRequest.getPlacementId();
        }
        return null;
    }

    protected abstract void a(WindAdError windAdError);

    protected void a(boolean z) {
        this.e = z;
    }

    protected void b() {
        z.a("request", PointCategory.INIT, this.a, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmobRequest) {
                    PointEntitySigmobRequest pointEntitySigmobRequest = (PointEntitySigmobRequest) obj;
                    pointEntitySigmobRequest.setLoad_count(String.valueOf(g.this.b.b));
                    pointEntitySigmobRequest.setInvalid_load_count(String.valueOf(g.this.b.a));
                    pointEntitySigmobRequest.setGdpr_filters(String.valueOf(g.this.b.c));
                    pointEntitySigmobRequest.setInterval_filters(String.valueOf(g.this.b.d));
                    pointEntitySigmobRequest.setPldempty_filters(String.valueOf(g.this.pIdEmpty_filters));
                    pointEntitySigmobRequest.setInit_filters(String.valueOf(g.this.b.e));
                    pointEntitySigmobRequest.setLoading_filters(String.valueOf(g.this.b.g));
                    pointEntitySigmobRequest.setProguard_filters(String.valueOf(g.this.b.f));
                    HashMap map = new HashMap();
                    map.put("is_minor", c.a().d() ? "0" : "1");
                    map.put("is_unpersonalized", c.a().e() ? "0" : "1");
                    pointEntitySigmobRequest.setOptions(map);
                }
                g.this.d();
            }
        });
    }

    protected abstract List<BaseAdUnit> c();

    public int getBidFloor() {
        return this.g;
    }

    public String getBid_token() {
        return this.f;
    }

    public String getCurrency() {
        return this.h;
    }

    public abstract String getEcpm();

    public boolean loadAd() {
        this.e = false;
        this.f = null;
        return false;
    }

    public boolean loadAd(String str) {
        this.e = true;
        this.f = str;
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00e2  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00f5  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0107  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0133  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean loadAdFilter() {
        WindAdError sigMobError;
        String str;
        b bVar;
        WindAdRequest windAdRequest = this.a;
        if (windAdRequest == null || TextUtils.isEmpty(windAdRequest.getPlacementId())) {
            sigMobError = WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY;
            this.pIdEmpty_filters++;
            str = "PlacementId with WindAdRequest can't is null";
        } else {
            if (WindAds.sharedAds().isInit()) {
                b bVar2 = c.get(a());
                this.b = bVar2;
                if (bVar2 == null) {
                    b bVarA = a(a());
                    this.b = bVarA;
                    bVarA.e = this.init_filters;
                    c.put(a(), this.b);
                }
                if (this.e && TextUtils.isEmpty(this.f)) {
                    this.b.h++;
                    sigMobError = WindAdError.ERROR_SIGMOB_BID_TOKEN_IS_EMPTY;
                } else if (this.mADStatus == AdStatus.AdStatusReady) {
                    sigMobError = null;
                } else if (this.mADStatus == AdStatus.AdStatusLoading) {
                    this.b.g++;
                    sigMobError = WindAdError.ERROR_AD_LOAD_FAIL_LOADING;
                } else if (Sigmob.getInstance().getSigMobError() != null) {
                    sigMobError = Sigmob.getInstance().getSigMobError();
                    this.b.f++;
                } else if (!c.a().i()) {
                    SigmobLog.e("User GDPR Consent Status is denied");
                    sigMobError = WindAdError.ERROR_SIGMOB_GDPR_DENIED;
                    this.b.c++;
                } else if (i.a().F() > 0 && i.a().F() + this.b.i > System.currentTimeMillis()) {
                    SigmobLog.e("load interval Time error");
                    this.b.d++;
                    sigMobError = WindAdError.ERROR_AD_LOAD_FAIL_INTERVAL;
                }
                bVar = this.b;
                if (bVar != null) {
                    this.loadCount++;
                } else {
                    bVar.b += this.loadCount + 1;
                    this.loadCount = 0;
                }
                if (sigMobError != null) {
                    ClientMetadata.setUserId(this.a.getUserId());
                    return true;
                }
                if (this.b == null) {
                    this.d++;
                } else {
                    a(a(), sigMobError.getErrorCode());
                    this.b.a += this.d + 1;
                    this.d = 0;
                }
                z.a("request", sigMobError, this.a);
                a(sigMobError);
                return false;
            }
            this.init_filters++;
            sigMobError = WindAdError.ERROR_SIGMOB_NOT_INIT;
            str = "WindAds not initialize";
        }
        SigmobLog.e(str);
        bVar = this.b;
        if (bVar != null) {
        }
        if (sigMobError != null) {
        }
    }

    public void sendLossNotificationWithInfo(Map<String, Object> map) {
        String strValueOf;
        try {
            if (c() == null || c().size() <= 0) {
                return;
            }
            BaseAdUnit baseAdUnit = c().get(0);
            if (baseAdUnit.bidding_response != null) {
                String strReplace = baseAdUnit.bidding_response.lose_url;
                if (TextUtils.isEmpty(strReplace)) {
                    return;
                }
                if (map != null && map.size() > 0) {
                    if (map.get(WindAds.AUCTION_PRICE) != null) {
                        a(SigMacroCommon._PUBLISHERPRICE_, String.valueOf(map.get(WindAds.AUCTION_PRICE)));
                        strReplace = strReplace.replace("__AUCTION_PRICE__", String.valueOf(map.get(WindAds.AUCTION_PRICE)));
                    }
                    if (map.get(WindAds.CURRENCY) != null) {
                        a(SigMacroCommon._CURRENCY_, String.valueOf(map.get(WindAds.CURRENCY)));
                        strValueOf = String.valueOf(map.get(WindAds.CURRENCY));
                    } else {
                        a(SigMacroCommon._CURRENCY_, this.h);
                        strValueOf = this.h;
                    }
                    String strReplace2 = strReplace.replace("__CURRENCY__", strValueOf);
                    strReplace = map.get(WindAds.LOSS_REASON) != null ? strReplace2.replace("_BIDLOSSCODE_", String.valueOf(map.get(WindAds.LOSS_REASON))) : strReplace2;
                    if (map.get(WindAds.ADN_ID) != null) {
                        strReplace = strReplace.replace("_WINADNID_", String.valueOf(map.get(WindAds.ADN_ID)));
                    }
                }
                com.sigmob.sdk.base.network.b.a(strReplace, PointCategory.LOSE, this.a, baseAdUnit);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void sendWinNotificationWithInfo(Map<String, Object> map) {
        String strValueOf;
        try {
            if (c() == null || c().size() <= 0) {
                return;
            }
            BaseAdUnit baseAdUnit = c().get(0);
            if (baseAdUnit.bidding_response != null) {
                String strReplace = baseAdUnit.bidding_response.win_url;
                if (TextUtils.isEmpty(strReplace)) {
                    return;
                }
                if (map != null && map.size() > 0) {
                    if (map.get(WindAds.AUCTION_PRICE) != null) {
                        a(SigMacroCommon._PUBLISHERPRICE_, String.valueOf(map.get(WindAds.AUCTION_PRICE)));
                        strReplace = strReplace.replace("__AUCTION_PRICE__", String.valueOf(map.get(WindAds.AUCTION_PRICE)));
                    }
                    if (map.get(WindAds.HIGHEST_LOSS_PRICE) != null) {
                        a(SigMacroCommon._HIGHESTLOSSPRICE_, String.valueOf(map.get(WindAds.HIGHEST_LOSS_PRICE)));
                        strReplace = strReplace.replace("__HIGHEST_LOSS_PRICE__", String.valueOf(map.get(WindAds.HIGHEST_LOSS_PRICE)));
                    }
                    if (map.get(WindAds.CURRENCY) != null) {
                        a(SigMacroCommon._CURRENCY_, String.valueOf(map.get(WindAds.CURRENCY)));
                        strValueOf = String.valueOf(map.get(WindAds.CURRENCY));
                    } else {
                        a(SigMacroCommon._CURRENCY_, this.h);
                        strValueOf = this.h;
                    }
                    strReplace = strReplace.replace("__CURRENCY__", strValueOf);
                }
                com.sigmob.sdk.base.network.b.a(strReplace, PointCategory.WIN, this.a, baseAdUnit);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void setBidEcpm(int i) {
        List<BaseAdUnit> listC = c();
        if (listC == null || listC.size() <= 0) {
            return;
        }
        for (int i2 = 0; i2 < listC.size(); i2++) {
            listC.get(i2).getMacroCommon().addMarcoKey(SigMacroCommon._PUBLISHERPRICE_, String.valueOf(i));
        }
    }

    public void setBidFloor(int i) {
        this.g = i;
    }

    public void setCurrency(String str) {
        this.h = str;
    }
}
