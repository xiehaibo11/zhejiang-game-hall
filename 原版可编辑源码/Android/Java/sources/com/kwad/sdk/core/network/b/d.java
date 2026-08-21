package com.kwad.sdk.core.network.b;

import android.net.Uri;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.kwad.sdk.core.network.j;
import com.kwad.sdk.core.network.k;
import com.kwad.sdk.core.network.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.s;
import java.util.Random;
import okhttp3.internal.Version;

public final class d implements b {
    private static boolean apZ = true;
    public static double aqa = 1.0d;
    private static volatile boolean aqe = false;
    private static String aqf = "";
    private long aqb = -1;
    private long aqc = -1;
    private long aqd = -1;
    private k aqg = new k();

    public d() {
        aqa = new Random().nextDouble();
    }

    private static String BB() {
        if (aqe) {
            return aqf;
        }
        try {
            try {
                aqf = Version.userAgent();
            } catch (Exception unused) {
            }
        } catch (Throwable unused2) {
            aqf = (String) s.c(Version.class, TTDownloadField.TT_USERAGENT);
        }
        aqe = true;
        return aqf;
    }

    @Override
    private d Bt() {
        this.aqg.apr = SystemClock.elapsedRealtime();
        return this;
    }

    @Override
    private d Bu() {
        this.aqc = SystemClock.elapsedRealtime();
        dk("this.responseReceiveTime:" + this.aqc);
        return this;
    }

    @Override
    private d Bv() {
        if (Z(this.aqb) && Z(this.aqc)) {
            this.aqg.apy = this.aqc - this.aqb;
            dk("info.waiting_response_cost:" + this.aqg.apy);
        }
        return this;
    }

    @Override
    private d Bw() {
        if (Z(this.aqg.apr)) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            this.aqb = jElapsedRealtime;
            k kVar = this.aqg;
            kVar.apl = jElapsedRealtime - kVar.apr;
            if (Z(this.aqg.apj)) {
                k kVar2 = this.aqg;
                kVar2.apk = kVar2.apl - this.aqg.apj;
            }
            dk("info.request_create_cost:" + this.aqg.apl);
            dk("info.requestAddParamsCost:" + this.aqg.apk);
        }
        return this;
    }

    @Override
    private d By() {
        if (Z(this.aqc)) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            this.aqd = jElapsedRealtime;
            this.aqg.apw = jElapsedRealtime - this.aqc;
            dk("info.response_parse_cost:" + this.aqg.apw);
        }
        return this;
    }

    @Override
    private d Bz() {
        if (Z(this.aqd)) {
            this.aqg.apD = SystemClock.elapsedRealtime() - this.aqd;
            BI();
            dk("info.response_done_cost:" + this.aqg.apD);
        }
        return this;
    }

    private void BI() {
        k kVar = this.aqg;
        if (kVar == null || kVar.apC != 1 || ac(this.aqg.apD)) {
            return;
        }
        this.aqg.apD = -1L;
    }

    private d BJ() {
        this.aqg.apG = (int) com.kwad.sdk.ip.direct.a.FH();
        this.aqg.apH = (int) com.kwad.sdk.ip.direct.a.FI();
        this.aqg.apI = (int) com.kwad.sdk.ip.direct.a.FJ();
        return this;
    }

    private void BK() {
        j jVarB = b(this.aqg);
        l lVar = (l) ServiceProvider.get(l.class);
        if (lVar != null) {
            lVar.a(jVarB);
        }
        dk("reportError" + jVarB.toString());
    }

    private static boolean Z(long j) {
        return j != -1;
    }

    @Override
    private d Y(long j) {
        this.aqg.apx = j;
        dk("responseSize:" + j);
        return this;
    }

    private d ab(long j) {
        this.aqg.apz = j;
        dk("totalCost:" + j);
        return this;
    }

    private static boolean ac(long j) {
        return j >= 50;
    }

    private static j b(k kVar) {
        j jVar = new j();
        jVar.errorMsg = kVar.errorMsg;
        jVar.host = kVar.host;
        jVar.httpCode = kVar.httpCode;
        jVar.apg = kVar.apg;
        jVar.url = kVar.url;
        jVar.aph = kVar.aph;
        jVar.api = kVar.api;
        return jVar;
    }

    private static boolean b(j jVar) {
        if (TextUtils.isEmpty(jVar.url)) {
            return true;
        }
        String lowerCase = jVar.url.toLowerCase();
        return lowerCase.contains("beta") || lowerCase.contains("test") || lowerCase.contains("staging");
    }

    @Override
    private d bZ(int i) {
        this.aqg.httpCode = i;
        dk("http_code:" + i);
        return this;
    }

    private d ce(int i) {
        this.aqg.apC = i;
        dk("hasData:" + i);
        return this;
    }

    @Override
    private d cb(int i) {
        this.aqg.result = i;
        dk("result:" + i);
        return this;
    }

    private static void dk(String str) {
        if (apZ) {
            com.kwad.sdk.core.e.c.d("NetworkMonitorRecorder", str);
        }
    }

    @Override
    private d df(String str) {
        if (TextUtils.isEmpty(str)) {
            return this;
        }
        this.aqg.url = str;
        if (str.contains("?")) {
            String[] strArrSplit = str.split("\\?");
            if (strArrSplit.length > 0) {
                str = strArrSplit[0];
            }
        }
        if (!TextUtils.isEmpty(str)) {
            dk("url:" + str);
        }
        return this;
    }

    @Override
    private d dg(String str) {
        try {
            this.aqg.host = Uri.parse(str).getHost();
            dk("host:" + this.aqg.host);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("NetworkMonitorRecorder", Log.getStackTraceString(e));
        }
        return this;
    }

    @Override
    private d dh(String str) {
        this.aqg.errorMsg = str;
        dk(str);
        return this;
    }

    @Override
    private d di(String str) {
        this.aqg.apg = str;
        dk("reqType:" + str);
        dq(com.kwad.sdk.ip.direct.a.FG());
        BJ();
        return this;
    }

    @Override
    private d dj(String str) {
        this.aqg.apB = str;
        dk("requestId:" + str);
        return this;
    }

    private d dq(String str) {
        this.aqg.apE = str;
        return this;
    }

    @Override
    public final b Bx() {
        if (Z(this.aqg.apr)) {
            this.aqg.apj = SystemClock.elapsedRealtime() - this.aqg.apr;
            dk("info.request_prepare_cost:" + this.aqg.apj);
        }
        return this;
    }

    @Override
    public final b ca(int i) {
        return ce(1);
    }

    @Override
    public final b cc(int i) {
        this.aqg.apF = i;
        if (i != 0) {
            this.aqg.aph = 1;
        }
        return this;
    }

    @Override
    public final void report() {
        if (b((j) this.aqg)) {
            return;
        }
        this.aqg.api = BB();
        if (this.aqg.httpCode != 200) {
            BK();
            return;
        }
        long jElapsedRealtime = Z(this.aqg.apr) ? SystemClock.elapsedRealtime() - this.aqg.apr : -1L;
        ab(jElapsedRealtime);
        if (jElapsedRealtime > 30000 || jElapsedRealtime <= -1) {
            return;
        }
        l lVar = (l) ServiceProvider.get(l.class);
        if (lVar != null) {
            lVar.a(this.aqg);
        }
        dk("report normal" + this.aqg.toString());
    }
}
