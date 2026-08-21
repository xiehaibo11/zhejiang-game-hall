package com.mbridge.msdk.mbbid.common.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.mbbid.common.BidResponsedEx;
import com.mbridge.msdk.mbbid.out.BidListennning;
import com.mbridge.msdk.mbbid.out.BidResponsed;
import com.tkay.core.c.d;
import com.tkay.core.common.c.l;
import java.lang.reflect.Method;

public final class b {
    private String a;
    private String b;
    private String c;
    private BidListennning e;
    private BidResponsedEx f;
    private int g;
    private long i;
    private long j;
    private boolean k;
    private int l;
    private boolean h = false;
    private Context d = com.mbridge.msdk.foundation.controller.a.f().j();

    public final void a(boolean z) {
        this.k = z;
    }

    public final void a(int i) {
        this.l = i;
    }

    public final void b(int i) {
        this.g = i;
    }

    public final void a(long j) {
        this.i = j;
    }

    public final void b(long j) {
        this.j = j;
    }

    public b(String str, String str2, String str3) {
        this.a = str;
        this.b = str2;
        this.c = str3;
    }

    public final void b(boolean z) {
        try {
            if (!this.h) {
                this.h = true;
                if (this.d == null) {
                    a(com.tkay.expressad.foundation.g.b.b.a);
                }
                com.mbridge.msdk.mbbid.common.b.a aVar = new com.mbridge.msdk.mbbid.common.b.a(this.d);
                d dVar = new d();
                String strK = com.mbridge.msdk.foundation.controller.a.f().k();
                dVar.a("app_id", strK);
                dVar.a("sign", SameMD5.getMD5(strK + com.mbridge.msdk.foundation.controller.a.f().l()));
                dVar.a("unit_id", this.b);
                if (!TextUtils.isEmpty(this.a)) {
                    dVar.a(l.a.c, this.a);
                }
                dVar.a("bid_floor", this.c);
                dVar.a(d.c, ae.b(this.d, this.b));
                dVar.a(d.a.O, ae.a(0));
                dVar.a(com.mbridge.msdk.foundation.same.net.g.d.b, com.mbridge.msdk.foundation.same.a.d.a(this.b, ""));
                String str = "1";
                dVar.a("req_type", this.k ? "1" : "2");
                dVar.a("orientation", v.t(this.d) + "");
                if (this.g == 296) {
                    if (this.i > 0 && this.j > 0) {
                        dVar.a("unit_size", this.j + "x" + this.i);
                        try {
                            Method method = Class.forName("com.mbridge.msdk.mbbanner.common.util.BannerUtils").getMethod("getCloseIds", String.class);
                            if (method.invoke(null, this.b) instanceof String) {
                                dVar.a("close_id", method.invoke(null, this.b).toString());
                            }
                        } catch (Exception unused) {
                            a(com.tkay.expressad.foundation.e.a.f);
                            return;
                        }
                    } else {
                        a(com.tkay.expressad.foundation.e.a.d);
                        return;
                    }
                } else if (this.g == 297) {
                    if (this.i > 0 && this.j > 0) {
                        dVar.a("unit_size", this.j + "x" + this.i);
                        StringBuilder sb = new StringBuilder();
                        sb.append(this.l);
                        sb.append("");
                        dVar.a("orientation", sb.toString());
                    } else {
                        a(com.tkay.expressad.foundation.e.a.e);
                        return;
                    }
                } else if (this.g != 298) {
                    if (!z) {
                        str = "0";
                    }
                    dVar.a("rw_plus", str);
                } else if (this.i > 0 && this.j > 0) {
                    dVar.a("unit_size", this.j + "x" + this.i);
                } else {
                    a(com.tkay.expressad.foundation.e.a.d);
                    return;
                }
                a aVar2 = new a(this.a, this.b) {
                    @Override
                    public final void a(BidResponsedEx bidResponsedEx) {
                        b.this.h = false;
                        b.this.f = bidResponsedEx;
                        com.mbridge.msdk.mbbid.common.c.a.a(b.this.d, b.this.b, bidResponsedEx.getBidId());
                        b.a(b.this, (BidResponsed) bidResponsedEx);
                    }

                    @Override
                    public final void a(int i, String str2) {
                        b.this.h = false;
                        com.mbridge.msdk.mbbid.common.c.a.b(b.this.d, b.this.b, str2);
                        b.this.a(str2);
                    }
                };
                aVar2.setUnitId(this.b);
                aVar2.setPlacementId(this.a);
                aVar.get(1, com.mbridge.msdk.foundation.same.net.f.d.a().a(false, ""), dVar, aVar2);
                return;
            }
            a("current unit is biding");
        } catch (Throwable th) {
            a(th.getMessage());
        }
    }

    public final void a(BidListennning bidListennning) {
        this.e = bidListennning;
    }

    private void a(String str) {
        BidListennning bidListennning = this.e;
        if (bidListennning != null) {
            bidListennning.onFailed(str);
        }
    }

    static void a(b bVar, BidResponsed bidResponsed) {
        BidListennning bidListennning = bVar.e;
        if (bidListennning != null) {
            bidListennning.onSuccessed(bidResponsed);
        }
    }
}
