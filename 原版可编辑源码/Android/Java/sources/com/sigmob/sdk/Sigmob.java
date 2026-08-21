package com.sigmob.sdk;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Base64;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.exceptions.CrashHandler;
import com.czhj.sdk.common.models.AdSlot;
import com.czhj.sdk.common.models.BidRequest;
import com.czhj.sdk.common.models.Device;
import com.czhj.sdk.common.models.ModelBuilderCreator;
import com.czhj.sdk.common.models.Version;
import com.czhj.sdk.common.mta.PointEntityCommon;
import com.czhj.sdk.common.network.JsonRequest;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.ImageManager;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.volley.VolleyLog;
import com.sigmob.sdk.base.common.d;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.h;
import com.sigmob.sdk.base.i;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.mta.PointEntitySigmobCrash;
import com.sigmob.sdk.base.services.j;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import java.io.ByteArrayOutputStream;
import java.util.HashMap;
import java.util.zip.DeflaterOutputStream;
import org.json.JSONObject;

public class Sigmob {
    private static Sigmob a;
    private static boolean b;
    public static SigMacroCommon macroCommon;
    private WindAdError c;
    private RepeatingHandlerRunnable d = null;

    private Sigmob() {
    }

    private String a(byte[] bArr) {
        if (bArr == null || bArr.length == 0) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        DeflaterOutputStream deflaterOutputStream = new DeflaterOutputStream(byteArrayOutputStream);
        try {
            deflaterOutputStream.write(bArr);
            deflaterOutputStream.flush();
            deflaterOutputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
    }

    private void c() {
        f.b();
        f.j();
        f.h();
        f.g();
        f.f();
        f.i();
    }

    public static BidRequest.Builder createRequest() {
        BidRequest.Builder builder = new BidRequest.Builder();
        try {
            builder.app(com.sigmob.sdk.base.network.a.b().build());
            Device.Builder builderCreateDevice = ModelBuilderCreator.createDevice();
            builderCreateDevice.did(ModelBuilderCreator.createDeviceId().build());
            builder.device(builderCreateDevice.build());
            builder.network(ModelBuilderCreator.createNetwork().build());
            AdSlot.Builder builderCreateAdSlot = ModelBuilderCreator.createAdSlot();
            builderCreateAdSlot.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.b.a()));
            builderCreateAdSlot.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.c.a()));
            builderCreateAdSlot.material_type.add(Integer.valueOf(com.sigmob.sdk.splash.a.d.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.b.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.g.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.a.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.c.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.e.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.f.a()));
            builderCreateAdSlot.creative_type.add(Integer.valueOf(l.h.a()));
            builder.slots.add(builderCreateAdSlot.build());
            builder.req_timestamp = Long.valueOf(System.currentTimeMillis());
            builder.privacy(com.sigmob.sdk.base.network.a.d().build());
            builder.user(com.sigmob.sdk.base.network.a.c().build());
            builder.disable_mediation = true;
            if (!TextUtils.isEmpty("4.9.0")) {
                Version.Builder builderCreateVersion = ModelBuilderCreator.createVersion("4.9.0");
                builderCreateVersion.version_str("4.9.0");
                builder.sdk_version(builderCreateVersion.build());
            }
            builder.wx_program_req(ModelBuilderCreator.createWXProgramReq().build());
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
        return builder;
    }

    private static void d() {
        try {
            j.a(j.a, com.sigmob.sdk.base.c.a().i() && !i.a().G());
        } catch (Throwable th) {
            SigmobLog.e("updateLocationMonitor fail", th);
        }
    }

    private static void e() {
        try {
            j.a(j.b, true);
        } catch (Throwable th) {
            SigmobLog.e("initAppInstallService fail", th);
        }
    }

    private static void f() {
        try {
            j.a(j.c, com.sigmob.sdk.base.c.a().i() && i.a().J());
        } catch (Throwable th) {
            SigmobLog.e("updateWifiScanService fail", th);
        }
    }

    private static void g() {
        try {
            j.a(j.d, true);
        } catch (Throwable th) {
            SigmobLog.e("initDownloadService fail", th);
        }
    }

    public static synchronized Sigmob getInstance() {
        if (a == null) {
            synchronized (Sigmob.class) {
                a = new Sigmob();
            }
        }
        return a;
    }

    private void h() {
        Networking.getRequestQueue().add(new JsonRequest(i.d(), new JsonRequest.Listener() {
            @Override
            public void onErrorResponse(VolleyError volleyError) {
                Sigmob.this.i();
                com.sigmob.sdk.base.c.a().a((Boolean) null);
            }

            @Override
            public void onSuccess(JSONObject jSONObject) {
                if (jSONObject != null) {
                    try {
                        com.sigmob.sdk.base.c.a().a(Boolean.valueOf(jSONObject.getBoolean(Constants.IS_REQUEST_IN_EEA_OR_UNKNOWN)));
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
                Sigmob.this.i();
            }
        }, 0));
    }

    private void i() {
        g();
        e();
        b.a();
        i.a().a(new i.a() {
            @Override
            public void a() {
                Sigmob.d();
                Sigmob.f();
                com.sigmob.sdk.base.services.b.a();
            }
        }).f();
        if (i.a().N()) {
            String[] strArrSplit = WindAds.class.getName().split("\\.");
            if (strArrSplit.length <= 2) {
                return;
            }
            final String str = strArrSplit[0] + "." + strArrSplit[1] + ".";
            CrashHandler.getInstance().add(new CrashHandler.CrashHandlerListener() {
                @Override
                public void reportCrash(String str2) {
                    if (TextUtils.isEmpty(str2)) {
                        return;
                    }
                    if (str2.contains(str) || str2.contains("com.czhj.")) {
                        PointEntitySigmobCrash.WindCrash(str2).sendServe();
                    }
                }
            });
        }
        j();
    }

    private void j() {
        ImageManager.with(b.b()).clearCache();
    }

    private void k() {
        RepeatingHandlerRunnable repeatingHandlerRunnable = new RepeatingHandlerRunnable(new Handler(Looper.getMainLooper())) {
            @Override
            protected void doWork() {
                try {
                    com.sigmob.sdk.base.network.f.a();
                    Sigmob.this.d.startRepeating(i.a().A());
                } catch (Throwable th) {
                    SigmobLog.e("retryFaildTracking error " + th.getMessage());
                }
            }
        };
        this.d = repeatingHandlerRunnable;
        repeatingHandlerRunnable.startRepeating(i.a().A());
    }

    public SigMacroCommon getMacroCommon() {
        if (macroCommon == null) {
            macroCommon = new SigMacroCommon();
        }
        return macroCommon;
    }

    public String getSDKToken() {
        String str = "2.01|" + a(createRequest().build().encode());
        z.a("token_request", (String) null, (BaseAdUnit) null, (z.a) null);
        SigmobLog.d("getSDKToken: " + str);
        return str;
    }

    public WindAdError getSigMobError() {
        return this.c;
    }

    public void init() {
        VolleyLog.DEBUG = h.e.booleanValue();
        z.a(PointCategory.INIT, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntityCommon) {
                    PointEntityCommon pointEntityCommon = (PointEntityCommon) obj;
                    HashMap map = new HashMap();
                    map.put("is_minor", com.sigmob.sdk.base.c.a().d() ? "0" : "1");
                    map.put("is_unpersonalized", com.sigmob.sdk.base.c.a().e() ? "0" : "1");
                    pointEntityCommon.setOptions(map);
                }
            }
        });
        if (i.a().L()) {
            z.a(PointCategory.PERMISSION, PointCategory.INIT, (BaseAdUnit) null, new z.a() {
                @Override
                public void a(Object obj) {
                    if (obj instanceof PointEntitySigmob) {
                        ((PointEntitySigmob) obj).setPermission(ClientMetadata.getInstance().getPermission(b.b()));
                    }
                }
            });
        }
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
            public void run() {
                z.a("app");
                Sigmob.this.c = d.a();
                f.d();
                Sigmob.this.k();
                Sigmob.this.h();
            }
        });
        ThreadPoolFactory.BackgroundThreadPool.getInstance().submit(new Runnable() {
            @Override
            public void run() {
                Sigmob.this.c();
            }
        });
        b = true;
    }
}
