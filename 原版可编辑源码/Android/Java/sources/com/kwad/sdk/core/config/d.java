package com.kwad.sdk.core.config;

import android.content.Context;
import android.text.TextUtils;
import com.ksad.annotation.invoker.ForInvoker;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.core.config.item.e;
import com.kwad.sdk.core.config.item.f;
import com.kwad.sdk.core.config.item.k;
import com.kwad.sdk.core.config.item.m;
import com.kwad.sdk.core.config.item.p;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.y;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

public class d {
    private static volatile SdkConfigData amA;
    private static final AtomicBoolean amz = new AtomicBoolean(false);

    public static boolean R(long j) {
        return (j & c.akC.getValue().longValue()) != 0;
    }

    public static double a(f fVar) {
        Double dZZ = (Double) b(fVar);
        if (dZZ == null) {
            dZZ = fVar.zZ();
        }
        return dZZ.doubleValue();
    }

    public static int a(k kVar) {
        Integer numZZ = (Integer) b((com.kwad.sdk.core.config.item.b) kVar);
        if (numZZ == null) {
            numZZ = kVar.zZ();
        }
        return numZZ.intValue();
    }

    public static long a(m mVar) {
        Long lZZ = (Long) b(mVar);
        if (lZZ == null) {
            lZZ = mVar.zZ();
        }
        return lZZ.longValue();
    }

    public static String a(p pVar) {
        String str = (String) b(pVar);
        return str != null ? str : pVar.zZ();
    }

    public static JSONObject a(e eVar) {
        JSONObject jSONObject = (JSONObject) b(eVar);
        return jSONObject != null ? jSONObject : eVar.zZ();
    }

    public static boolean a(com.kwad.sdk.core.config.item.d dVar) {
        Boolean boolZZ = (Boolean) b(dVar);
        if (boolZZ == null) {
            boolZZ = dVar.zZ();
        }
        return boolZZ.booleanValue();
    }

    public static synchronized void aQ(Context context) {
        if (amz.get()) {
            return;
        }
        com.kwad.sdk.core.e.c.d("SdkConfigManager", "loadCache");
        c.init();
        yZ();
        b.aP(context);
        zw();
        amz.set(true);
    }

    public static <T> T b(com.kwad.sdk.core.config.item.b<T> bVar) {
        if (!isLoaded()) {
            final Context contextHD = ServiceProvider.HD();
            b.a(contextHD, bVar);
            g.execute(new aw() {
                @Override
                public final void doTask() {
                    d.aQ(contextHD);
                }
            });
        }
        T value = bVar.getValue();
        return value != null ? value : bVar.zZ();
    }

    public static boolean b(k kVar) {
        Integer num = (Integer) b((com.kwad.sdk.core.config.item.b) kVar);
        return num != null ? num.intValue() > 0 : kVar.zZ().intValue() > 0;
    }

    public static void c(SdkConfigData sdkConfigData) {
        synchronized (d.class) {
            amA = sdkConfigData;
        }
    }

    public static boolean gF() {
        return c.alP.getValue().booleanValue();
    }

    public static String getLogObiwanData() {
        return c.alU.getValue();
    }

    public static String getUserAgent() {
        return c.alD.getValue();
    }

    public static boolean isCanUseTk() {
        return a(c.alr);
    }

    public static boolean isLoaded() {
        return amz.get();
    }

    public static boolean vK() {
        return c.amm.getValue().booleanValue();
    }

    public static List<String> xA() {
        return c.akK.getValue();
    }

    public static boolean xB() {
        return c.alC.getValue().intValue() == 1;
    }

    public static boolean xC() {
        return c.alE.getValue().intValue() == 1;
    }

    public static boolean xE() {
        return c.alY.getValue().booleanValue();
    }

    public static boolean xF() {
        return c.alZ.getValue().booleanValue();
    }

    public static int xG() {
        if (amA != null) {
            return amA.goodIdcThresholdMs;
        }
        return 200;
    }

    public static int xH() {
        return c.amb.getValue().intValue();
    }

    public static double xI() {
        return c.alL.getValue().floatValue();
    }

    public static boolean xJ() {
        return c.amp.getValue().booleanValue();
    }

    public static boolean xN() {
        return c.amy.getValue().booleanValue();
    }

    public static int xr() {
        return c.akm.getValue().intValue();
    }

    public static boolean xs() {
        return false;
    }

    public static boolean xt() {
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return c.akq.getValue().intValue() == 1;
    }

    public static boolean xu() {
        return c.alc.getValue().intValue() == 1;
    }

    public static boolean xv() {
        return c.ale.getValue().intValue() == 1;
    }

    public static boolean xw() {
        return c.ald.getValue().intValue() == 1;
    }

    public static boolean xx() {
        return c.alb.getValue().intValue() == 1;
    }

    public static String xy() {
        return c.alp.getImei();
    }

    public static String xz() {
        return c.alp.getOaid();
    }

    public static boolean yX() {
        return c.aku.getValue().intValue() == 1;
    }

    public static int yY() {
        return c.akv.getValue().intValue();
    }

    @ForInvoker(methodId = "initConfigList")
    private static void yZ() {
        com.kwad.components.ad.d.a.init();
        com.kwad.components.ad.feed.a.a.init();
        com.kwad.components.ad.fullscreen.a.a.init();
        com.kwad.components.ad.interstitial.a.a.init();
        com.kwad.components.ad.reward.a.a.init();
        com.kwad.components.ad.splashscreen.b.a.init();
    }

    public static boolean zA() {
        return c.akB.getValue().booleanValue();
    }

    public static boolean zB() {
        return c.alX.getValue().intValue() == 1;
    }

    public static int zC() {
        return c.akz.getValue().intValue();
    }

    public static int zD() {
        return c.alG.getValue().intValue();
    }

    public static int zE() {
        return c.alF.getValue().intValue();
    }

    public static boolean zF() {
        return c.alH.getValue().intValue() == 1;
    }

    public static boolean zG() {
        return c.alI.getValue().booleanValue();
    }

    public static float zH() {
        float fFloatValue = c.alJ.getValue().floatValue();
        if (fFloatValue <= 0.0f || fFloatValue > 1.0f) {
            return 0.3f;
        }
        return fFloatValue;
    }

    public static float zI() {
        return c.alK.getValue().floatValue();
    }

    public static boolean zJ() {
        return c.alM.getValue().booleanValue();
    }

    public static boolean zK() {
        return c.alQ.getValue().intValue() > 0;
    }

    public static boolean zL() {
        return c.alW.getValue().intValue() == 1;
    }

    public static long zM() {
        return c.alV.getValue().longValue();
    }

    public static boolean zN() {
        return c.ama.Ae();
    }

    public static com.kwad.sdk.core.network.idc.a.a zO() {
        return c.amc.getValue();
    }

    public static long zP() {
        return c.amd.getValue().longValue();
    }

    public static int zQ() {
        return c.ame.getValue().intValue();
    }

    public static boolean zR() {
        return c.amf.getValue().floatValue() == 1.0f;
    }

    public static boolean zS() {
        return c.amg.Ae();
    }

    public static boolean zT() {
        return c.ami.Ae();
    }

    public static String zU() {
        return c.amj.getValue();
    }

    public static String zV() {
        return c.amk.getValue();
    }

    public static String zW() {
        return c.aml.getValue();
    }

    public static int zX() {
        return c.amo.getValue().intValue();
    }

    public static boolean zY() {
        return c.amq.getValue().booleanValue();
    }

    public static List<String> za() {
        return c.akM.getValue();
    }

    public static String zb() {
        return c.akJ.getValue();
    }

    public static List<String> zc() {
        return c.akL.getValue();
    }

    public static int zd() {
        return c.amh.getValue().intValue();
    }

    public static boolean ze() {
        return c.akE.getValue().booleanValue();
    }

    public static String zf() {
        return c.akG.getValue();
    }

    public static String zg() {
        return c.akH.getValue();
    }

    public static boolean zh() {
        return c.akr.getValue().intValue() == 1;
    }

    public static int zi() {
        return c.aks.getValue().intValue();
    }

    public static boolean zj() {
        return c.akt.getValue().intValue() == 1;
    }

    public static int zk() {
        return c.akT.getValue().intValue();
    }

    public static int zl() {
        return c.akU.getValue().intValue();
    }

    public static int zm() {
        return c.akV.getValue().intValue();
    }

    public static long zn() {
        return ((long) c.akW.getValue().intValue()) * 60000;
    }

    public static boolean zo() {
        return c.alf.getValue().intValue() == 1;
    }

    public static boolean zp() {
        return c.alg.getValue().intValue() == 1;
    }

    public static int zq() {
        return c.aln.getValue().intValue();
    }

    public static boolean zr() {
        return c.alo.getValue().booleanValue();
    }

    public static boolean zs() {
        return !c.alt.getValue().booleanValue();
    }

    public static boolean zt() {
        return a(c.als);
    }

    public static boolean zu() {
        return c.alv.getValue().intValue() == 1;
    }

    public static int zv() {
        return c.alw.getValue().intValue();
    }

    public static SdkConfigData zw() {
        if (amA == null) {
            synchronized (d.class) {
                if (amA == null) {
                    amA = new SdkConfigData();
                    String strCg = y.cg(ServiceProvider.HD());
                    if (TextUtils.isEmpty(strCg)) {
                        com.kwad.sdk.core.e.c.d("SdkConfigManager", "configCache is empty");
                    } else {
                        try {
                            amA.parseJson(new JSONObject(strCg));
                        } catch (JSONException e) {
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                }
            }
        }
        return amA;
    }

    public static boolean zx() {
        return c.akx.getValue().intValue() == 1;
    }

    public static boolean zy() {
        return c.aky.getValue().intValue() == 1;
    }

    public static int zz() {
        return c.akA.getValue().intValue();
    }
}
