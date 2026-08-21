package com.xiaomi.push.service;

import android.content.Context;
import android.net.Uri;
import android.os.Build;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.cv;
import com.xiaomi.push.dw;
import com.xiaomi.push.dx;
import com.xiaomi.push.ez;
import com.xiaomi.push.fh;
import com.xiaomi.push.fj;
import com.xiaomi.push.fw;
import com.xiaomi.push.gy;
import com.xiaomi.push.service.bv;
import java.io.IOException;
import java.net.URL;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
public class bl extends bv.a implements cv.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f8339a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private XMPushService f956a;

    class a implements cv.b {
        a() {
        }

        @Override // com.xiaomi.push.cv.b
        public String a(String str) throws IOException {
            Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
            builderBuildUpon.appendQueryParameter("sdkver", String.valueOf(48));
            builderBuildUpon.appendQueryParameter("osver", String.valueOf(Build.VERSION.SDK_INT));
            builderBuildUpon.appendQueryParameter("os", gy.a(Build.MODEL + Constants.COLON_SEPARATOR + Build.VERSION.INCREMENTAL));
            builderBuildUpon.appendQueryParameter("mi", String.valueOf(com.xiaomi.push.v.a()));
            String string = builderBuildUpon.toString();
            com.xiaomi.channel.commonutils.logger.b.c("fetch bucket from : " + string);
            URL url = new URL(string);
            int port = url.getPort() == -1 ? 80 : url.getPort();
            try {
                long jCurrentTimeMillis = System.currentTimeMillis();
                String strA = com.xiaomi.push.bj.a(com.xiaomi.push.v.m701a(), url);
                fj.a(url.getHost() + Constants.COLON_SEPARATOR + port, (int) (System.currentTimeMillis() - jCurrentTimeMillis), null);
                return strA;
            } catch (IOException e) {
                fj.a(url.getHost() + Constants.COLON_SEPARATOR + port, -1, e);
                throw e;
            }
        }
    }

    class b extends cv {
        protected b(Context context, com.xiaomi.push.cu cuVar, cv.b bVar, String str) {
            super(context, cuVar, bVar, str);
        }

        @Override // com.xiaomi.push.cv
        protected String a(ArrayList<String> arrayList, String str, String str2, boolean z) throws IOException {
            try {
                if (fh.m337a().m342a()) {
                    str2 = bv.m662a();
                }
                return super.a(arrayList, str, str2, z);
            } catch (IOException e) {
                fj.a(0, ez.GSLB_ERR.a(), 1, null, com.xiaomi.push.bj.c(f8092a) ? 1 : 0);
                throw e;
            }
        }
    }

    bl(XMPushService xMPushService) {
        this.f956a = xMPushService;
    }

    public static void a(XMPushService xMPushService) {
        bl blVar = new bl(xMPushService);
        bv.a().a(blVar);
        synchronized (cv.class) {
            cv.a(blVar);
            cv.a(xMPushService, null, new a(), "0", "push", "2.2");
        }
    }

    @Override // com.xiaomi.push.cv.a
    public cv a(Context context, com.xiaomi.push.cu cuVar, cv.b bVar, String str) {
        return new b(context, cuVar, bVar, str);
    }

    @Override // com.xiaomi.push.service.bv.a
    public void a(dw.a aVar) {
    }

    @Override // com.xiaomi.push.service.bv.a
    public void a(dx.b bVar) {
        com.xiaomi.push.cr crVarB;
        if (bVar.m252b() && bVar.m251a() && System.currentTimeMillis() - this.f8339a > 3600000) {
            com.xiaomi.channel.commonutils.logger.b.m43a("fetch bucket :" + bVar.m251a());
            this.f8339a = System.currentTimeMillis();
            cv cvVarA = cv.a();
            cvVarA.m209a();
            cvVarA.m212b();
            fw fwVarM603a = this.f956a.m603a();
            if (fwVarM603a == null || (crVarB = cvVarA.b(fwVarM603a.m365a().c())) == null) {
                return;
            }
            ArrayList<String> arrayListM197a = crVarB.m197a();
            boolean z = true;
            Iterator<String> it = arrayListM197a.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                } else if (it.next().equals(fwVarM603a.mo366a())) {
                    z = false;
                    break;
                }
            }
            if (!z || arrayListM197a.isEmpty()) {
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("bucket changed, force reconnect");
            this.f956a.a(0, (Exception) null);
            this.f956a.a(false);
        }
    }
}
