package com.mbridge.msdk.click.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;

public final class a {
    public static String a = "mtg_retry_report=1";
    public static int b = 10000;
    public static int c = 3;
    public static int d = 50;
    public static int e = 600000;
    public static int f = 0;
    public static int g = 1;
    public static int h = 2;
    public static int i = 3;
    public static int j = 4;
    public static int k = 5;
    private static String l = "RetryReportControl";
    private static int o;
    private static int p;
    private ConcurrentHashMap<String, com.mbridge.msdk.click.a.b> m;
    private c n;
    private BroadcastReceiver q;
    private final Handler r;

    private a() {
        this.m = new ConcurrentHashMap<>();
        this.n = new c(d);
        this.r = new b(Looper.getMainLooper());
        com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        c = aVarG.g();
        b = aVarG.i() * 1000;
        e = aVarG.h() * 1000;
        o = aVarG.f();
        p = aVarG.e();
        try {
            if (this.q == null) {
                this.q = new BroadcastReceiver() {
                    @Override
                    public final void onReceive(Context context, Intent intent) {
                        if ("android.net.conn.CONNECTIVITY_CHANGE".equals(intent.getAction())) {
                            a.this.r.sendEmptyMessage(2);
                        }
                    }
                };
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                if (contextJ != null) {
                    contextJ.registerReceiver(this.q, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private static class a {
        private static a a = new a();
    }

    public static a a() {
        return a.a;
    }

    private static class b extends Handler {
        public b(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                a.a(a.a());
            } else {
                Object obj = message.obj;
                if (obj instanceof String) {
                    a.a().a((String) obj, com.mbridge.msdk.click.a.b.a);
                }
            }
        }
    }

    private void a(com.mbridge.msdk.click.a.b bVar) {
        String str;
        String requestIdNotice;
        try {
            CampaignEx campaignExF = bVar.f();
            if (campaignExF != null) {
                String requestId = campaignExF.getRequestId();
                requestIdNotice = campaignExF.getRequestIdNotice();
                str = requestId;
            } else {
                str = "";
                requestIdNotice = str;
            }
            a(com.mbridge.msdk.foundation.controller.a.f().j(), bVar.i().toString(), bVar.g(), str, requestIdNotice, bVar.d());
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private static void a(Context context, String str, String str2, String str3, String str4, int i2) {
        if (context != null) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("key=2000105&");
                stringBuffer.append("url=" + URLEncoder.encode(str2, "utf-8") + "&");
                stringBuffer.append("type=" + i2 + "&");
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                    stringBuffer.append("b=" + com.mbridge.msdk.foundation.same.a.t + "&");
                }
                if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                    stringBuffer.append("c=" + com.mbridge.msdk.foundation.same.a.u + "&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid=");
                    stringBuffer.append(str3);
                    stringBuffer.append("&");
                }
                if (!TextUtils.isEmpty(str3)) {
                    stringBuffer.append("rid_n=");
                    stringBuffer.append(str4);
                    stringBuffer.append("&");
                }
                stringBuffer.append("reason=" + URLEncoder.encode(str, "utf-8"));
                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                    com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                } else {
                    a(context, stringBuffer.toString());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    private static void a(final Context context, final String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, d.a().a, e.a(str, context), new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str2) {
                    z.d(a.l, str2);
                }

                @Override
                public final void onFailed(String str2) {
                    n nVar = new n();
                    nVar.d(str);
                    nVar.a(System.currentTimeMillis());
                    nVar.a(0);
                    nVar.c("POST");
                    nVar.b(d.a().a);
                    o.a(i.a(context)).a(nVar);
                }
            });
        } catch (Exception e2) {
            e2.printStackTrace();
            z.d(l, e2.getMessage());
        }
    }

    private void a(String str) {
        Message messageObtainMessage = this.r.obtainMessage();
        messageObtainMessage.what = 1;
        messageObtainMessage.obj = str;
        this.r.sendMessageDelayed(messageObtainMessage, b);
    }

    private void a(String str, int i2) {
        String str2;
        c cVar = this.n;
        if (cVar != null) {
            com.mbridge.msdk.click.a.b bVarB = cVar.b(str);
            this.n.a(str);
            if (bVarB == null) {
                com.mbridge.msdk.click.a.b bVar = this.m.get(str);
                if (bVar == null || System.currentTimeMillis() > bVar.j() + ((long) e) || bVar.h() >= c || i2 == com.mbridge.msdk.click.a.b.b) {
                    return;
                }
                a(str);
                return;
            }
            if (System.currentTimeMillis() <= bVarB.j() + ((long) e)) {
                bVarB.a(i2);
                this.m.put(str, bVarB);
                if (ak.b(str) == 0) {
                    str2 = str + "?" + a;
                } else {
                    str2 = str + "&" + a;
                }
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), bVarB.f(), bVarB.e(), str2, bVarB.a(), bVarB.b(), bVarB.d());
                return;
            }
            if (i2 != com.mbridge.msdk.click.a.b.b) {
                a(bVarB);
            }
        }
    }

    private boolean a(int i2) {
        return i2 == j || i2 == i;
    }

    private boolean b(int i2) {
        return i2 == g || i2 == h;
    }

    public final void a(String str, String str2, CampaignEx campaignEx, String str3, boolean z, boolean z2, int i2) {
        if (!(a(i2) || b(i2) || i2 == k) || TextUtils.isEmpty(str)) {
            return;
        }
        String strReplace = str.replace("?" + a, "").replace("&" + a, "");
        if (this.m == null) {
            this.m = new ConcurrentHashMap<>();
        }
        com.mbridge.msdk.click.a.b bVarRemove = this.m.remove(strReplace);
        if (bVarRemove == null) {
            bVarRemove = new com.mbridge.msdk.click.a.b(str, str2);
            bVarRemove.b(i2);
            bVarRemove.a(z);
            bVarRemove.b(z2);
            bVarRemove.a(campaignEx);
            bVarRemove.a(str3);
        } else if (bVarRemove.c() != com.mbridge.msdk.click.a.b.b) {
            bVarRemove.b(str2);
        }
        if (!((a(i2) && o != 0) || (b(i2) && p != 0) || i2 == k)) {
            a(bVarRemove);
            return;
        }
        if (System.currentTimeMillis() >= bVarRemove.j() + ((long) e)) {
            if (bVarRemove.c() == com.mbridge.msdk.click.a.b.a) {
                a(bVarRemove);
                return;
            }
            return;
        }
        if (this.n == null) {
            this.n = new c(d);
        }
        this.n.a(strReplace, bVarRemove);
        if (bVarRemove.c() == com.mbridge.msdk.click.a.b.a) {
            if (bVarRemove.h() <= c) {
                a(strReplace);
            } else {
                a(bVarRemove);
            }
        }
    }

    static void a(a aVar) {
        c cVar = aVar.n;
        if (cVar != null) {
            Iterator<String> it = cVar.a().iterator();
            while (it.hasNext()) {
                aVar.a(it.next(), com.mbridge.msdk.click.a.b.b);
            }
        }
    }
}
