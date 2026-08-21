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

public class bl extends bv.a implements cv.a {
    private long a;
    private XMPushService a;

    class a implements cv.b {
        a() {
        }

        @Override
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
                String strA = com.xiaomi.push.bj.a(com.xiaomi.push.v.a(), url);
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

        @Override
        protected String a(ArrayList<String> arrayList, String str, String str2, boolean z) throws IOException {
            try {
                if (fh.a().a()) {
                    str2 = bv.a();
                }
                return super.a(arrayList, str, str2, z);
            } catch (IOException e) {
                fj.a(0, ez.u.a(), 1, null, com.xiaomi.push.bj.c(a) ? 1 : 0);
                throw e;
            }
        }
    }

    bl(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    public static void a(XMPushService xMPushService) {
        bl blVar = new bl(xMPushService);
        bv.a().a(blVar);
        synchronized (cv.class) {
            cv.a(blVar);
            cv.a(xMPushService, null, new a(), "0", "push", "2.2");
        }
    }

    @Override
    public cv a(Context context, com.xiaomi.push.cu cuVar, cv.b bVar, String str) {
        return new b(context, cuVar, bVar, str);
    }

    @Override
    public void a(dw.a aVar) {
    }

    @Override
    public void a(dx.b bVar) {
        com.xiaomi.push.cr crVarB;
        if (bVar.b() && bVar.a() && System.currentTimeMillis() - this.a > 3600000) {
            com.xiaomi.channel.commonutils.logger.b.a("fetch bucket :" + bVar.a());
            this.a = System.currentTimeMillis();
            cv cvVarA = cv.a();
            cvVarA.a();
            cvVarA.b();
            fw fwVarA = this.a.a();
            if (fwVarA == null || (crVarB = cvVarA.b(fwVarA.a().c())) == null) {
                return;
            }
            ArrayList<String> arrayListA = crVarB.a();
            boolean z = true;
            Iterator<String> it = arrayListA.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                } else if (it.next().equals(fwVarA.a())) {
                    z = false;
                    break;
                }
            }
            if (!z || arrayListA.isEmpty()) {
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.a("bucket changed, force reconnect");
            this.a.a(0, (Exception) null);
            this.a.a(false);
        }
    }
}
