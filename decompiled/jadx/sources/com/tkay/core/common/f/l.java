package com.tkay.core.common.f;

import android.text.TextUtils;
import com.mbridge.msdk.mbbid.out.BidResponsed;
import com.qihoo360.replugin.RePlugin;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;
import com.tkay.core.common.c.k;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class l extends k implements Comparable<l> {
    private boolean A;
    private String B;
    private String C;
    private String D;
    private String E;
    private String F;
    private String G;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6158a;
    public String b;
    public String c;
    public int d;
    public long e;
    public long f;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public double l;
    public String m;
    public int n;
    public double o;
    public String p;
    public double q;
    public com.tkay.core.b.c.a r;
    public boolean s;
    private final String t;
    private boolean u;
    private final String v;
    private final String w;
    private final String x;
    private final String y;
    private final String z;

    private static String a(int i) {
        return i == 2 ? "102" : ErrorCode.networkError;
    }

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(l lVar) {
        l lVar2 = lVar;
        if (lVar2 == null) {
            return -1;
        }
        return ((this.sortPrice > 0.0d ? 1 : (this.sortPrice == 0.0d ? 0 : -1)) == 0 ? com.tkay.core.b.c.a().a(this.g, this.k) : this.sortPrice) > (lVar2 != null ? (lVar2.sortPrice > 0.0d ? 1 : (lVar2.sortPrice == 0.0d ? 0 : -1)) == 0 ? com.tkay.core.b.c.a().a(lVar2.g, lVar2.k) : lVar2.sortPrice : 0.0d) ? -1 : 1;
    }

    public l(boolean z, double d, String str, String str2, String str3, String str4, String str5) {
        super(z, d, str, str2, str3, str4, str5, TYAdConst.CURRENCY.USD);
        this.t = getClass().getSimpleName() + Constants.COLON_SEPARATOR;
        this.v = "${AUCTION_PRICE}";
        this.w = "${AUCTION_LOSS}";
        this.x = "${AUCTION_SEAT_ID}";
        this.y = "${AUCTION_BID_TO_WIN}";
        this.z = "${AUCTION_CURRENCY}";
    }

    public final boolean a() {
        return this.f < System.currentTimeMillis();
    }

    public final synchronized void a(aj ajVar) {
        a(ajVar, this.q);
    }

    public final synchronized void b() {
        this.A = true;
    }

    private synchronized void a(aj ajVar, double d) {
        if (this.u) {
            return;
        }
        this.u = true;
        double d2 = this.l > 0.0d ? this.l * d : d;
        double sortPrice = this.l > 0.0d ? getSortPrice() * this.l : getSortPrice();
        if (!TextUtils.isEmpty(this.winNoticeUrl)) {
            String strReplace = this.winNoticeUrl.replace("${AUCTION_BID_TO_WIN}", a(d2));
            if (this.d == 28) {
                strReplace = this.winNoticeUrl.replace("${AUCTION_PRICE}", a(sortPrice));
            }
            double sortPrice2 = getSortPrice();
            if (ajVar != null) {
                com.tkay.core.common.h.f fVarA = com.tkay.core.common.h.f.a(strReplace, ajVar.c(), ajVar.t());
                fVarA.a(b(ajVar, sortPrice2, d));
                fVarA.a(0, (com.tkay.core.common.h.k) null);
            }
        }
        if (this.biddingNotice != null) {
            if (this.d == 28) {
                this.biddingNotice.notifyBidWin(sortPrice);
            } else {
                this.biddingNotice.notifyBidWin(d2);
            }
            com.tkay.core.common.k.c.a(b(ajVar, getSortPrice(), d));
        }
        if ((ajVar.l() == 3 || ajVar.l() == 7) && !this.A) {
            com.tkay.core.b.c.a();
            com.tkay.core.b.c.a(this.k, this);
        }
    }

    public final synchronized void a(boolean z, double d, boolean z2) {
        if (this.l > 0.0d) {
            d *= this.l;
        }
        if (z) {
            String str = this.j;
            if (TextUtils.isEmpty(str)) {
                str = this.displayNoticeUrl;
            }
            if (!TextUtils.isEmpty(str)) {
                c(str.replace("${AUCTION_PRICE}", a(d)));
            }
        } else {
            String str2 = this.displayNoticeUrl;
            if (!TextUtils.isEmpty(str2)) {
                c(str2.replace("${AUCTION_PRICE}", a(d)).replace("${AUCTION_LOSS}", b(z2, 2)));
            }
        }
        if (this.biddingNotice != null) {
            this.biddingNotice.notifyBidDisplay(z, d);
            if (z) {
                this.biddingNotice = null;
            }
        }
    }

    public final synchronized void a(q qVar, boolean z) {
        String strReplace;
        int i = qVar.f6162a;
        aj ajVar = qVar.d;
        aj ajVar2 = qVar.c;
        double sortPrice = qVar.b;
        d dVar = qVar.e;
        if (ajVar2 != null && ajVar != null) {
            boolean zJ = ajVar2.j();
            int iC = ajVar2.c();
            l lVarA = com.tkay.core.b.c.a().a(ajVar);
            if (z) {
                if (lVarA != null && TextUtils.equals(lVarA.token, this.token)) {
                    com.tkay.core.b.c.a().a(this.k);
                    com.tkay.core.b.c.a();
                    com.tkay.core.b.c.b(this.k);
                }
                if (ajVar.l() == 3 || ajVar.l() == 7) {
                    com.tkay.core.common.a.a.a().b(com.tkay.core.common.b.m.a().f(), this.token);
                }
            }
            if (this.u) {
                return;
            }
            this.u = true;
            if (sortPrice <= getSortPrice()) {
                sortPrice = getSortPrice() + 0.01d;
            }
            String str = this.loseNoticeUrl;
            String strB = b(zJ, i);
            com.tkay.core.common.k.c.a(dVar, ajVar, sortPrice, strB);
            if (this.l > 0.0d) {
                sortPrice *= this.l;
            }
            if (!strB.equals(RePlugin.PROCESS_UI)) {
                if (this.biddingNotice != null) {
                    HashMap map = new HashMap(3);
                    if (this.d == 8) {
                        map.put(TYBiddingNotice.ADN_ID, Integer.valueOf(a(zJ, iC)));
                    }
                    this.biddingNotice.notifyBidLoss(strB, sortPrice, map);
                    this.biddingNotice = null;
                }
                if (!TextUtils.isEmpty(str)) {
                    String strReplace2 = str.replace("${AUCTION_PRICE}", a(sortPrice)).replace("${AUCTION_LOSS}", strB);
                    if (this.d == 8) {
                        strReplace = strReplace2.replace("${AUCTION_SEAT_ID}", String.valueOf(a(zJ, iC)));
                    } else if (this.d == 29) {
                        strReplace = strReplace2.replace("${AUCTION_SEAT_ID}", this.d == iC ? "1" : "10001");
                    } else {
                        strReplace = strReplace2.replace("${AUCTION_SEAT_ID}", "");
                    }
                    if (this.d == 6) {
                        strReplace = strReplace.replace("${AUCTION_CURRENCY}", TYAdConst.CURRENCY.USD.toString());
                    }
                    c(strReplace);
                }
            }
        }
    }

    private int a(boolean z, int i) {
        int i2 = this.d;
        return i == i2 ? !z ? 1 : 4 : (i == 67 || i2 == 35) ? 3 : 2;
    }

    private String a(double d) {
        int i = this.d;
        if (i == 8 || i == 28) {
            return String.valueOf((int) d);
        }
        return String.valueOf(d);
    }

    private String b(boolean z, int i) {
        if (i == 3) {
            return RePlugin.PROCESS_UI;
        }
        int i2 = this.d;
        if (i2 == 8) {
            return i == 1 ? "5" : "1";
        }
        if (i2 == 29) {
            return i == 1 ? "2002" : "2";
        }
        if (i2 == 34) {
            return a(i);
        }
        return (i2 == 59 || z) ? "102" : TYAdConst.BIDDING_TYPE.BIDDING_LOSS_WITH_LOW_PRICE_IN_NORMAL;
    }

    public final String c() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(k.a.b, this.token);
            jSONObject.put(BidResponsed.KEY_CUR, this.b);
            jSONObject.put("origin_price", this.originPrice);
            jSONObject.put("price", this.price);
            jSONObject.put("nurl", this.winNoticeUrl);
            jSONObject.put("lurl", this.loseNoticeUrl);
            jSONObject.put("unit_id", this.c);
            jSONObject.put("nw_firm_id", this.d);
            jSONObject.put("is_success", this.isSuccess ? 1 : 0);
            jSONObject.put("err_code", this.f6158a);
            jSONObject.put("err_msg", this.errorMsg);
            jSONObject.put("expire", this.e);
            jSONObject.put("out_data_time", this.f);
            jSONObject.put("is_send_winurl", this.u);
            jSONObject.put(k.a.e, this.i);
            jSONObject.put("tp_bid_id", this.g);
            jSONObject.put("burl", this.displayNoticeUrl);
            jSONObject.put("ad_source_id", this.k);
            jSONObject.put("cur_rate", this.l);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(com.tkay.core.common.l.ae, this.n);
            jSONObject.put("ctrl", jSONObject2);
            if (!TextUtils.isEmpty(this.m)) {
                jSONObject.put("bid_response", this.m);
            }
            jSONObject.put("ecpm_api", this.o);
            jSONObject.put(com.tkay.core.common.l.P, this.p);
            jSONObject.put("second_price", this.q);
            jSONObject.put("req_url", this.h);
            jSONObject.put("bd_type", this.useType);
            jSONObject.put(com.tkay.core.common.l.am, this.sortPrice);
            jSONObject.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, this.B);
        } catch (Throwable unused) {
        }
        return jSONObject.toString();
    }

    public static l a(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            l lVar = new l(jSONObject.optInt("is_success") == 1, jSONObject.has("price") ? jSONObject.optDouble("price", 0.0d) : 0.0d, jSONObject.optString(k.a.b), jSONObject.optString("nurl"), jSONObject.optString("lurl"), jSONObject.optString("burl"), jSONObject.optString("err_msg"));
            lVar.b = jSONObject.optString(BidResponsed.KEY_CUR);
            lVar.c = jSONObject.optString("unit_id");
            lVar.d = jSONObject.optInt("nw_firm_id");
            lVar.f6158a = jSONObject.optInt("err_code");
            lVar.e = jSONObject.optLong("expire");
            lVar.f = jSONObject.optLong("out_data_time");
            lVar.u = jSONObject.optBoolean("is_send_winurl");
            lVar.i = jSONObject.optString(k.a.e);
            lVar.g = jSONObject.optString("tp_bid_id");
            lVar.j = jSONObject.optString("burl_win");
            lVar.k = jSONObject.optString("ad_source_id");
            lVar.l = jSONObject.optDouble("cur_rate", 0.0d);
            if (jSONObject.has("bid_response")) {
                lVar.m = jSONObject.optString("bid_response");
            }
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("ctrl");
            if (jSONObjectOptJSONObject != null) {
                lVar.n = jSONObjectOptJSONObject.optInt(com.tkay.core.common.l.ae);
            }
            if (jSONObject.has("ecpm_api")) {
                lVar.o = jSONObject.optDouble("ecpm_api", 0.0d);
            }
            lVar.p = jSONObject.optString(com.tkay.core.common.l.P);
            if (jSONObject.has("second_price")) {
                lVar.q = jSONObject.optDouble("second_price", 0.0d);
            }
            lVar.h = jSONObject.optString("req_url", "");
            lVar.useType = jSONObject.optInt("bd_type", 1);
            if (jSONObject.has(com.tkay.core.common.l.am)) {
                lVar.sortPrice = jSONObject.optDouble(com.tkay.core.common.l.am, 0.0d);
            } else {
                lVar.sortPrice = lVar.price;
            }
            if (jSONObject.has("origin_price")) {
                lVar.originPrice = jSONObject.optDouble("origin_price", 0.0d);
            } else {
                lVar.originPrice = lVar.sortPrice;
            }
            Object objOpt = jSONObject.opt(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID);
            if (objOpt != null) {
                lVar.B = objOpt.toString();
            }
            return lVar;
        } catch (Throwable unused) {
            return null;
        }
    }

    private void b(double d) {
        this.q = d;
    }

    private int a(l lVar) {
        if (lVar == null) {
            return -1;
        }
        return ((this.sortPrice > 0.0d ? 1 : (this.sortPrice == 0.0d ? 0 : -1)) == 0 ? com.tkay.core.b.c.a().a(this.g, this.k) : this.sortPrice) > (lVar != null ? (lVar.sortPrice > 0.0d ? 1 : (lVar.sortPrice == 0.0d ? 0 : -1)) == 0 ? com.tkay.core.b.c.a().a(lVar.g, lVar.k) : lVar.sortPrice : 0.0d) ? -1 : 1;
    }

    private static String a(int i, String str) {
        return TextUtils.isEmpty(str) ? "" : i == 34 ? str.replace("${AUCTION_CURRENCY}", TYAdConst.CURRENCY.USD.toString()) : str;
    }

    public final void b(String str) {
        this.B = str;
    }

    private static void c(String str) {
        com.tkay.core.common.h.f.b(str).a(0, (com.tkay.core.common.h.k) null);
    }

    private void a(String str, aj ajVar, double d, double d2) {
        if (ajVar == null) {
            return;
        }
        com.tkay.core.common.h.f fVarA = com.tkay.core.common.h.f.a(str, ajVar.c(), ajVar.t());
        fVarA.a(b(ajVar, d, d2));
        fVarA.a(0, (com.tkay.core.common.h.k) null);
    }

    private void a(aj ajVar, double d, double d2) {
        com.tkay.core.common.k.c.a(b(ajVar, d, d2));
    }

    private ao b(aj ajVar, double d, double d2) {
        if (ajVar == null) {
            return null;
        }
        ao aoVar = new ao(ajVar.c(), ajVar.t(), d, d2);
        aoVar.c(this.B);
        aoVar.a(b(ajVar));
        aoVar.f(this.g);
        aoVar.d(this.D);
        aoVar.e(this.C);
        aoVar.g(this.E);
        aoVar.h(this.F);
        aoVar.i(this.G);
        return aoVar;
    }

    public final void a(Map<String, Object> map) {
        if (map == null) {
            return;
        }
        this.C = a(map, "offer_id");
        this.D = a(map, "dsp_id");
    }

    public final void a(d dVar) {
        if (dVar == null) {
            return;
        }
        this.F = String.valueOf(dVar.U());
        this.E = String.valueOf(dVar.I());
        this.G = dVar.W();
    }

    private static String a(Map<String, Object> map, String str) {
        Object obj = map.get(str);
        if (obj instanceof String) {
            return obj.toString();
        }
        return obj != null ? obj.toString() : "";
    }

    private static int b(aj ajVar) {
        if (ajVar == null) {
            return 0;
        }
        int iL = ajVar.l();
        if (iL != 2) {
            return (iL == 5 || iL == 6) ? 3 : 1;
        }
        return 2;
    }

    public final boolean d() {
        return this.price == 0.0d;
    }
}
