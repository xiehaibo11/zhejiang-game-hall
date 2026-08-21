package com.sigmob.sdk.base.network;

import android.text.TextUtils;
import android.util.Log;
import com.czhj.sdk.common.ThreadPool.ThreadPoolFactory;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.Request;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.sigmob.sdk.Sigmob;
import com.sigmob.sdk.base.common.g;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.db.a;
import com.sigmob.sdk.base.i;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import java.util.Iterator;
import java.util.List;

public class f extends Request<NetworkResponse> {
    private static final int a = 0;
    private static int b;
    private final a c;

    public interface a extends Response.ErrorListener {
        void a(NetworkResponse networkResponse);
    }

    public f(String str, int i, int i2, a aVar) {
        super(0, str, aVar);
        this.c = aVar;
        if (i < 0) {
            i = 0;
        } else if (i > 3) {
            i = 3;
        }
        setShouldRetryServerErrors(true);
        setRetryPolicy(new DefaultRetryPolicy(i2, 10000, i, 0.0f));
        setShouldCache(false);
    }

    public f(String str, int i, a aVar) {
        this(str, i, 10000, aVar);
    }

    public static int a(BaseAdUnit baseAdUnit, String str, boolean z) {
        if (baseAdUnit == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str)) {
            return -1;
        }
        List<g> adTracker = baseAdUnit.getAdTracker(str);
        if (adTracker == null || adTracker.isEmpty()) {
            return -2;
        }
        for (g gVar : adTracker) {
            if (z) {
                gVar.a("js");
            }
            SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
            if (macroCommon instanceof SigMacroCommon) {
                macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, "1");
            }
            a(gVar, baseAdUnit, false);
        }
        return 0;
    }

    public static void a() {
        g.b(3000L);
        Networking.getAdTrackerRetryQueue().cancelAll();
        Iterator<g> it = g.a(3000, i.a().z()).iterator();
        while (it.hasNext()) {
            a(it.next(), (BaseAdUnit) null, false);
        }
        g.a(i.a().z());
    }

    public static void a(g gVar, BaseAdUnit baseAdUnit, boolean z) {
        a(gVar, baseAdUnit, z, true, true);
    }

    public static void a(final g gVar, final BaseAdUnit baseAdUnit, boolean z, final boolean z2, final boolean z3) {
        if (gVar == null || gVar.i() != g.a.a || gVar.m()) {
            return;
        }
        String strMacroProcess = Sigmob.getInstance().getMacroCommon().macroProcess(gVar.k());
        if (baseAdUnit != null) {
            strMacroProcess = baseAdUnit.getMacroCommon().macroProcess(strMacroProcess);
        }
        if (!z) {
            gVar.l();
        }
        final boolean z4 = gVar.f() != null;
        final String str = strMacroProcess;
        f fVar = new f(strMacroProcess, z4 ? 0 : gVar.j().intValue(), new a() {
            @Override
            public void a(NetworkResponse networkResponse) {
                if (z3) {
                    z.a(gVar, str, baseAdUnit, networkResponse, (z.a) null);
                }
                if (z4) {
                    Log.i("adtracker", "retry Send success " + f.b);
                    ThreadPoolFactory.MainThreadRun(new Runnable() {
                        @Override
                        public void run() {
                            gVar.g();
                        }
                    });
                }
            }

            @Override
            public void onErrorResponse(VolleyError volleyError) {
                NetworkResponse networkResponse = volleyError.networkResponse;
                if (z2 && (gVar.j().intValue() > 0 || z4)) {
                    ThreadPoolFactory.MainThreadRun(new Runnable() {
                        @Override
                        public void run() {
                            if (!z4) {
                                gVar.b(str);
                                gVar.a((a.a) null);
                                return;
                            }
                            gVar.d();
                            if (gVar.c() >= i.a().Q()) {
                                gVar.g();
                            } else {
                                gVar.e();
                            }
                        }
                    });
                }
                if (z3) {
                    z.a(gVar, str, baseAdUnit, volleyError);
                }
                SigmobLog.e(volleyError.getMessage());
            }
        });
        if (Networking.getAdTrackerRetryQueue() != null) {
            Networking.getAdTrackerRetryQueue().add(fVar);
        } else {
            z.a(gVar, strMacroProcess, baseAdUnit, (VolleyError) null);
            SigmobLog.e("RequestQueue is null");
        }
    }

    public static void a(BaseAdUnit baseAdUnit, com.sigmob.sdk.base.common.a aVar) {
        a(baseAdUnit, aVar, false);
    }

    public static void a(BaseAdUnit baseAdUnit, com.sigmob.sdk.base.common.a aVar, boolean z) {
        List<g> adTracker;
        if (aVar == null || baseAdUnit == null || TextUtils.isEmpty(aVar.a()) || (adTracker = baseAdUnit.getAdTracker(aVar.a())) == null) {
            return;
        }
        for (g gVar : adTracker) {
            SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
            if (macroCommon instanceof SigMacroCommon) {
                macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, "1");
            }
            a(gVar, baseAdUnit, z);
        }
    }

    @Override
    protected void deliverResponse(NetworkResponse networkResponse) {
        a aVar;
        synchronized (this.mLock) {
            aVar = this.c;
        }
        SigmobLog.i("send tracking: " + getUrl() + " success");
        if (aVar != null) {
            aVar.a(networkResponse);
        }
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        SigmobLog.e("send tracking: " + getUrl() + " fail");
        super.deliverError(volleyError);
    }

    @Override
    public int getMaxLength() {
        return 100;
    }

    @Override
    protected Response<NetworkResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        return Response.success(networkResponse, null);
    }
}
