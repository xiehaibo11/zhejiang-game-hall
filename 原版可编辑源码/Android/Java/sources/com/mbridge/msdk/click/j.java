package com.mbridge.msdk.click;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.URLUtil;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.click.g;
import com.mbridge.msdk.click.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URI;
import java.util.concurrent.Semaphore;

public final class j extends d implements a.b {
    private e c;
    private CommonJumpLoader.JumpLoaderResult d;
    private boolean f;
    private Context g;
    private com.mbridge.msdk.foundation.same.e.b h;
    private g.a i;
    private boolean k;
    private boolean a = false;
    private long b = 0;
    private boolean e = true;
    private Handler j = new Handler(Looper.getMainLooper());

    public j(Context context, boolean z) {
        this.g = context;
        this.k = z;
        if (z) {
            this.h = new com.mbridge.msdk.foundation.same.e.b(context, 2);
        } else {
            this.h = new com.mbridge.msdk.foundation.same.e.b(context);
        }
    }

    public final void a(String str, e eVar, boolean z, String str2, String str3, String str4, com.mbridge.msdk.rover.d dVar, CampaignEx campaignEx, boolean z2, boolean z3, int i) {
        this.c = eVar;
        this.f = z;
        this.h.a(new a(this.g, str, str2, str3, str4, dVar, campaignEx, z2, z3, i), this);
    }

    @Override
    public final void a() {
        this.e = false;
    }

    private class a extends com.mbridge.msdk.foundation.same.e.a {
        private final Context c;
        private String d;
        private String e;
        private String f;
        private String g;
        private com.mbridge.msdk.rover.d h;
        private CampaignEx i;
        private boolean j;
        private boolean k;
        private int l;
        private final Semaphore b = new Semaphore(0);
        private i.a m = new i.a() {
            @Override
            public final boolean a(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true, str, "");
                if (zA) {
                    a();
                }
                return zA;
            }

            @Override
            public final boolean b(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true, str, "");
                if (zA) {
                    a.a(a.this, true, true, str, "");
                    a();
                }
                return zA;
            }

            @Override
            public final boolean c(String str) {
                a.a(a.this, false, false, str, "");
                return false;
            }

            @Override
            public final void a(String str, boolean z, String str2) {
                a.this.a(str);
                j.this.d.setContent(str2);
                a.a(a.this, true, false, str, "timeout");
                a();
            }

            private void a() {
                synchronized (j.this) {
                    j.this.d.setSuccess(true);
                    a.a(a.this);
                }
            }

            @Override
            public final void a(int i, String str, String str2, String str3) {
                if (!TextUtils.isEmpty(str2)) {
                    j.this.d.setExceptionMsg(str2);
                }
                if (!TextUtils.isEmpty(str3)) {
                    j.this.d.setContent(str3);
                }
                a.this.a(str);
                a.a(a.this, true, false, str, str2);
                a();
            }
        };

        @Override
        public final void cancelTask() {
        }

        @Override
        public final void pauseTask(boolean z) {
        }

        public a(Context context, String str, String str2, String str3, String str4, com.mbridge.msdk.rover.d dVar, CampaignEx campaignEx, boolean z, boolean z2, int i) {
            this.c = context;
            this.d = str;
            this.e = str2;
            this.f = str3;
            this.g = str4;
            this.h = dVar;
            this.i = campaignEx;
            this.j = z;
            this.k = z2;
            this.l = i;
        }

        /* JADX WARN: Code restructure failed: missing block: B:65:0x01c1, code lost:
        
            r3.setjumpDone(r15);
            r3.setUrl(r1);
         */
        /* JADX WARN: Removed duplicated region for block: B:103:0x0269 A[EDGE_INSN: B:103:0x0269->B:94:0x0269 BREAK  A[LOOP:0: B:20:0x005c->B:80:0x0214], SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:22:0x0060  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private CommonJumpLoader.JumpLoaderResult a(String str, boolean z, boolean z2, CampaignEx campaignEx, int i) {
            String scheme;
            String host;
            int i2;
            int i3;
            boolean z3;
            String strMatchLoopback = str;
            String scheme2 = "";
            z.d("302", "startJavaHTTPSpider");
            if (j.this.f) {
                String strA = com.mbridge.msdk.c.a.a(this.c, strMatchLoopback);
                if (!TextUtils.isEmpty(strA)) {
                    strMatchLoopback = strMatchLoopback + strA;
                }
            }
            CampaignEx campaignEx2 = this.i;
            if (campaignEx2 != null) {
                strMatchLoopback = campaignEx2.matchLoopback(strMatchLoopback);
            }
            CommonJumpLoader.JumpLoaderResult jumpLoaderResult = new CommonJumpLoader.JumpLoaderResult();
            g gVar = new g();
            try {
            } catch (Exception unused) {
                scheme = "";
            }
            if (b(strMatchLoopback)) {
                host = "";
                i2 = 0;
                while (true) {
                    if (i2 >= 10) {
                        break;
                    }
                    if (!j.this.e) {
                        return null;
                    }
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    j.this.i = gVar.a(strMatchLoopback, z, z2, campaignEx);
                    int iCurrentTimeMillis = (int) (System.currentTimeMillis() - jCurrentTimeMillis);
                    if (j.this.i != null) {
                        if (!TextUtils.isEmpty(j.this.i.h)) {
                            jumpLoaderResult.setUrl(strMatchLoopback);
                            jumpLoaderResult.setExceptionMsg(j.this.i.h);
                            jumpLoaderResult.setType(1);
                            jumpLoaderResult.setHeader(j.this.i.a());
                            jumpLoaderResult.setSuccess(false);
                            if (i2 == 0) {
                                i3 = iCurrentTimeMillis;
                                com.mbridge.msdk.click.a.a.a().a(strMatchLoopback, j.this.i.h, campaignEx, this.g, z, z2, i);
                            } else {
                                i3 = iCurrentTimeMillis;
                            }
                            com.mbridge.msdk.rover.d dVar = this.h;
                            if (dVar != null) {
                                dVar.c(strMatchLoopback, com.mbridge.msdk.rover.a.a, i3, j.this.i.f, j.this.i.toString(), j.this.i.h);
                            }
                        } else {
                            jumpLoaderResult.setSuccess(true);
                            com.mbridge.msdk.rover.d dVar2 = this.h;
                            if (dVar2 != null) {
                                z3 = true;
                                dVar2.b(strMatchLoopback, com.mbridge.msdk.rover.a.a, iCurrentTimeMillis, j.this.i.f, j.this.i.toString(), j.this.i.h);
                            } else {
                                z3 = true;
                            }
                            int i4 = j.this.i.f;
                            if (!((i4 == 301 || i4 == 302 || i4 == 307) ? z3 : false)) {
                                if (j.this.i.f == 200 ? z3 : false) {
                                    jumpLoaderResult.setjumpDone(z3);
                                    jumpLoaderResult.setUrl(strMatchLoopback);
                                    jumpLoaderResult.setContent(j.this.i.g == null ? null : j.this.i.g);
                                } else {
                                    jumpLoaderResult.setjumpDone(false);
                                    jumpLoaderResult.setUrl(strMatchLoopback);
                                    if (i2 == 0) {
                                        com.mbridge.msdk.click.a.a.a().a(strMatchLoopback, j.this.i.h, campaignEx, this.g, z, z2, i);
                                    }
                                }
                            } else {
                                jumpLoaderResult.setIs302Jump(z3);
                                if (!TextUtils.isEmpty(j.this.i.a)) {
                                    strMatchLoopback = j.this.i.a;
                                    if (!b(strMatchLoopback)) {
                                        if (!b(strMatchLoopback)) {
                                            try {
                                                URI uriCreate = URI.create(strMatchLoopback);
                                                scheme2 = uriCreate.getScheme();
                                                host = uriCreate.getHost();
                                            } catch (Exception unused2) {
                                            }
                                        }
                                    } else {
                                        if (!strMatchLoopback.startsWith("/") || TextUtils.isEmpty(scheme2) || TextUtils.isEmpty(host)) {
                                            break;
                                        }
                                        strMatchLoopback = scheme2 + "://" + host + strMatchLoopback;
                                        scheme2 = null;
                                        host = null;
                                    }
                                    if (!ad.a.a(strMatchLoopback)) {
                                        if (j.this.f) {
                                            String strA2 = com.mbridge.msdk.c.a.a(this.c, strMatchLoopback);
                                            if (!TextUtils.isEmpty(strA2)) {
                                                strMatchLoopback = strMatchLoopback + strA2;
                                            }
                                        }
                                        CampaignEx campaignEx3 = this.i;
                                        if (campaignEx3 != null) {
                                            strMatchLoopback = campaignEx3.matchLoopback(strMatchLoopback);
                                        }
                                        i2++;
                                    } else {
                                        jumpLoaderResult.setjumpDone(z3);
                                        jumpLoaderResult.setUrl(strMatchLoopback);
                                        break;
                                    }
                                } else {
                                    jumpLoaderResult.setjumpDone(z3);
                                    jumpLoaderResult.setUrl(strMatchLoopback);
                                    break;
                                }
                            }
                        }
                    } else {
                        jumpLoaderResult.setUrl(strMatchLoopback);
                        jumpLoaderResult.setSuccess(false);
                        com.mbridge.msdk.rover.d dVar3 = this.h;
                        if (dVar3 != null) {
                            dVar3.c(strMatchLoopback, com.mbridge.msdk.rover.a.a, iCurrentTimeMillis, 0, "", "headerFiled is null");
                        }
                    }
                }
                return jumpLoaderResult;
            }
            URI uriCreate2 = URI.create(strMatchLoopback);
            scheme = uriCreate2.getScheme();
            try {
                scheme2 = uriCreate2.getHost();
            } catch (Exception unused3) {
            }
            host = scheme2;
            scheme2 = scheme;
            i2 = 0;
            while (true) {
                if (i2 >= 10) {
                }
                i2++;
            }
            return jumpLoaderResult;
        }

        private boolean a(String str) {
            CampaignEx campaignEx = this.i;
            if (campaignEx != null) {
                campaignEx.getLinkType();
            }
            if (ad.a.a(str)) {
                j.this.d.setCode(1);
                j.this.d.setUrl(str);
                j.this.d.setjumpDone(true);
                return true;
            }
            if (c(str)) {
                j.this.d.setCode(3);
                j.this.d.setUrl(str);
                j.this.d.setjumpDone(true);
                return true;
            }
            j.this.d.setCode(2);
            j.this.d.setUrl(str);
            return false;
        }

        private boolean b(String str) {
            return !URLUtil.isNetworkUrl(str);
        }

        private boolean c(String str) {
            return !TextUtils.isEmpty(str) && str.toLowerCase().contains("apk");
        }

        @Override
        public final void runTask() {
            if (j.this.c != null) {
                j.this.c.a(null);
            }
            j.this.d = new CommonJumpLoader.JumpLoaderResult();
            j.this.d.setUrl(this.d);
            j.this.d = a(this.d, this.j, this.k, this.i, this.l);
            if (!TextUtils.isEmpty(j.this.d.getExceptionMsg())) {
                j.this.d.setSuccess(true);
            }
            if (j.this.e && j.this.d.isSuccess()) {
                if (j.this.i != null) {
                    j.this.d.setStatusCode(j.this.i.f);
                }
                if (!c(j.this.d.getUrl()) && !ad.a.a(j.this.d.getUrl()) && 200 == j.this.i.f && !TextUtils.isEmpty(j.this.d.getContent()) && !j.this.d.getContent().contains(com.tkay.expressad.foundation.g.a.bU)) {
                    j.this.d.setType(2);
                    if (!TextUtils.isEmpty(j.this.d.getContent())) {
                        Log.e("302", "startWebViewHtmlParser");
                        new i(j.this.k).a(this.e, this.f, this.g, this.c, j.this.d.getUrl(), j.this.d.getContent(), this.m);
                        z.d("302", "startWebViewHtmlParser");
                    } else {
                        z.a("302", "startWebViewSpider");
                        try {
                            new i(j.this.k).a(this.e, this.f, this.g, this.c, j.this.d.getUrl(), this.m);
                        } catch (Exception unused) {
                            z.d("TAG", "webview spider start error");
                        }
                    }
                    this.b.acquireUninterruptibly();
                    return;
                }
                com.mbridge.msdk.rover.d dVar = this.h;
                if (dVar != null) {
                    dVar.a(j.this.d.getUrl(), com.mbridge.msdk.rover.a.a, 0, 0, "", "");
                }
                if (j.this.i != null) {
                    j.this.d.setType(1);
                    j.this.d.setExceptionMsg(j.this.i.h);
                    j.this.d.setStatusCode(j.this.i.f);
                    j.this.d.setHeader(j.this.i.a());
                    j.this.d.setContent(j.this.i.g);
                }
                a(j.this.d.getUrl());
            }
        }

        static void a(a aVar, boolean z, boolean z2, String str, String str2) {
            int i;
            long j = j.this.b;
            if (j == 0) {
                j.this.b = System.currentTimeMillis();
                i = 0;
            } else {
                long jCurrentTimeMillis = System.currentTimeMillis();
                i = (int) (jCurrentTimeMillis - j);
                j.this.b = jCurrentTimeMillis;
            }
            int i2 = i;
            if (!z) {
                com.mbridge.msdk.rover.d dVar = aVar.h;
                if (dVar != null) {
                    dVar.b(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
                    return;
                }
                return;
            }
            if (z2) {
                if (aVar.h == null || j.this.a) {
                    return;
                }
                j.this.a = true;
                aVar.h.a(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
                return;
            }
            if (aVar.h == null || j.this.a) {
                return;
            }
            j.this.a = true;
            aVar.h.c(str, com.mbridge.msdk.rover.a.b, i2, 0, "", str2);
        }

        static void a(a aVar) {
            aVar.b.release();
        }
    }

    @Override
    public final void a(a.a aVar) {
        if (aVar == a.a.e && this.e) {
            this.j.post(new Runnable() {
                @Override
                public final void run() {
                    if (j.this.c != null) {
                        if (j.this.d.isSuccess()) {
                            j.this.c.b(j.this.d);
                        } else {
                            j.this.c.a(j.this.d, j.this.d.getMsg());
                        }
                    }
                }
            });
        }
    }
}
