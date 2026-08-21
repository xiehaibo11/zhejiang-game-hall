package com.tkay.core.c;

import android.content.Context;
import android.os.CountDownTimer;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.r;
import com.tkay.core.common.h.k;
import com.tkay.core.common.h.l;
import com.tkay.core.common.l.p;
import com.tkay.core.common.s;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

public class e {
    public static final String a = e.class.getSimpleName();
    private static volatile e b = null;
    private Context c;
    private ConcurrentHashMap<String, d> d = new ConcurrentHashMap<>();

    public interface a {
        void a(AdError adError);

        void a(d dVar);

        void b(d dVar);
    }

    private e(Context context) {
        this.c = context;
    }

    public static e a(Context context) {
        if (b == null) {
            synchronized (e.class) {
                if (b == null) {
                    b = new e(context);
                }
            }
        }
        return b;
    }

    private void b() {
        this.d.clear();
    }

    public final void a() {
        Context context = this.c;
        if (context != null) {
            try {
                context.getSharedPreferences(com.tkay.core.common.b.f.A, 0).edit().clear().apply();
            } catch (Error | Exception unused) {
            }
        }
    }

    public final void a(Context context, String str, d dVar, String str2) {
        String strO = m.a().o();
        if (strO == null) {
            strO = "";
        }
        synchronized (this) {
            this.d.put(strO + str, dVar);
        }
        if (dVar.i() == 1) {
            if (m.a().H()) {
                Log.e("tkay", "PreInitNetwork may affect DebuggerMode.It is recommended to disable PreInitNetwork first and then setDebuggerMode.");
                return;
            }
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            str2 = "";
        }
        p.a(context, com.tkay.core.common.b.f.o, strO + str + "_PL_SY", str2);
    }

    private static void b(Context context, d dVar) {
        int iE = dVar.e();
        m.a().c(iE);
        p.a(context, com.tkay.core.common.b.f.o, "r", iE);
    }

    public final d a(String str) {
        String strO = m.a().o();
        if (strO == null) {
            strO = "";
        }
        if (this.d.containsKey(strO + str)) {
            return this.d.get(strO + str);
        }
        String strB = p.b(this.c, com.tkay.core.common.b.f.o, strO + str + "_PL_SY", "");
        if (!TextUtils.isEmpty(strB)) {
            d dVarB = d.b(strB);
            if (dVarB != null) {
                this.d.put(strO + str, dVarB);
            }
            return dVarB;
        }
        StringBuilder sb = new StringBuilder("no key[");
        sb.append(strO);
        sb.append(str);
        sb.append("]");
        return null;
    }

    public final d b(String str) {
        String strO = m.a().o();
        return this.d.get(strO + str);
    }

    public final void a(final d dVar, final String str, final String str2, final String str3, final Map<String, Object> map, final a aVar) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                d dVar2 = dVar;
                String strQ = dVar2 != null ? dVar2.Q() : null;
                Map<String, Object> mapD = m.a().d(str3);
                if (dVar != null) {
                    if ((!mapD.equals(r0.N())) || dVar.az() || s.a().c(e.this.c, str3)) {
                        String str4 = e.a;
                        final boolean[] zArr = new boolean[1];
                        long jZ = dVar.Z();
                        final CountDownTimer countDownTimer = new CountDownTimer(jZ, jZ) {
                            @Override
                            public final void onTick(long j) {
                            }

                            @Override
                            public final void onFinish() {
                                String str5 = e.a;
                                zArr[0] = true;
                                if (aVar != null) {
                                    aVar.a(dVar);
                                }
                            }
                        };
                        if (jZ == 0) {
                            zArr[0] = true;
                            a aVar2 = aVar;
                            if (aVar2 != null) {
                                aVar2.a(dVar);
                            }
                        } else {
                            String str5 = e.a;
                            countDownTimer.start();
                        }
                        new l(e.this.c, str, str2, str3, strQ, mapD, map).a(0, new k() {
                            @Override
                            public final void onLoadStart(int i) {
                            }

                            @Override
                            public final void onLoadFinish(int i, Object obj) {
                                String string = (String) obj;
                                try {
                                    JSONObject jSONObject = new JSONObject(string);
                                    jSONObject.put("updateTime", System.currentTimeMillis());
                                    string = jSONObject.toString();
                                } catch (JSONException e) {
                                    e.printStackTrace();
                                }
                                d dVarB = d.b(string);
                                if (dVarB != null) {
                                    e eVar = e.this;
                                    Context context = e.this.c;
                                    String str6 = str3;
                                    if (dVarB.aa() != 1) {
                                        string = "";
                                    }
                                    eVar.a(context, str6, dVarB, string);
                                    e.a(e.this.c, dVarB);
                                    if (dVarB.O() == 1) {
                                        s.a().a(e.this.c, str3);
                                    }
                                }
                                m.a().a(new Runnable() {
                                    @Override
                                    public final void run() {
                                        String str7 = e.a;
                                        if (countDownTimer != null) {
                                            countDownTimer.cancel();
                                        }
                                    }
                                });
                                if (zArr[0]) {
                                    if (aVar == null || dVarB == null) {
                                        return;
                                    }
                                    aVar.b(dVarB);
                                    return;
                                }
                                if (dVarB != null) {
                                    if (aVar != null) {
                                        aVar.a(dVarB);
                                    }
                                } else if (aVar != null) {
                                    aVar.a(ErrorCode.getErrorCode(ErrorCode.placeStrategyError, "", "Placement Service error."));
                                }
                            }

                            @Override
                            public final void onLoadError(int i, String str6, AdError adError) {
                                String str7 = e.a;
                                if (ErrorCode.statuError.equals(adError.getCode()) && (ErrorCode.placementIdError.equals(adError.getPlatformCode()) || ErrorCode.appIdError.equals(adError.getPlatformCode()) || "10001".equals(adError.getPlatformCode()))) {
                                    String str8 = str + str3 + str2;
                                    String str9 = e.a;
                                    StringBuilder sb = new StringBuilder("code: ");
                                    sb.append(adError.getPlatformCode());
                                    sb.append("msg: ");
                                    sb.append(adError.getPlatformMSG());
                                    sb.append(", key -> ");
                                    sb.append(str8);
                                    p.a(e.this.c, com.tkay.core.common.b.f.A, str8, System.currentTimeMillis());
                                }
                                m.a().a(new Runnable() {
                                    @Override
                                    public final void run() {
                                        String str10 = e.a;
                                        if (countDownTimer != null) {
                                            countDownTimer.cancel();
                                        }
                                    }
                                });
                                if (zArr[0] || aVar == null) {
                                    return;
                                }
                                aVar.a(dVar);
                            }

                            @Override
                            public final void onLoadCanceled(int i) {
                                if (zArr[0] || aVar == null) {
                                    return;
                                }
                                aVar.a(dVar);
                            }
                        });
                        return;
                    }
                    a aVar3 = aVar;
                    if (aVar3 != null) {
                        aVar3.a(dVar);
                        return;
                    }
                    return;
                }
                new l(e.this.c, str, str2, str3, strQ, mapD, map).a(0, new k() {
                    @Override
                    public final void onLoadStart(int i) {
                    }

                    @Override
                    public final void onLoadFinish(int i, Object obj) {
                        String string = (String) obj;
                        try {
                            JSONObject jSONObject = new JSONObject(string);
                            jSONObject.put("updateTime", System.currentTimeMillis());
                            string = jSONObject.toString();
                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                        d dVarB = d.b(string);
                        if (dVarB != null) {
                            e eVar = e.this;
                            Context context = e.this.c;
                            String str6 = str3;
                            if (dVarB.aa() != 1) {
                                string = "";
                            }
                            eVar.a(context, str6, dVarB, string);
                            e.a(e.this.c, dVarB);
                            if (dVarB.O() == 1) {
                                s.a().a(e.this.c, str3);
                            }
                            if (aVar != null) {
                                aVar.a(dVarB);
                                return;
                            }
                            return;
                        }
                        if (aVar != null) {
                            aVar.a(ErrorCode.getErrorCode(ErrorCode.placeStrategyError, "", "Placement Service error."));
                        }
                    }

                    @Override
                    public final void onLoadError(int i, String str6, AdError adError) {
                        String str7 = e.a;
                        if (ErrorCode.statuError.equals(adError.getCode()) && (ErrorCode.placementIdError.equals(adError.getPlatformCode()) || ErrorCode.appIdError.equals(adError.getPlatformCode()) || "10001".equals(adError.getPlatformCode()))) {
                            String str8 = str + str3 + str2;
                            String str9 = e.a;
                            StringBuilder sb = new StringBuilder("code: ");
                            sb.append(adError.getPlatformCode());
                            sb.append("msg: ");
                            sb.append(adError.getPlatformMSG());
                            sb.append(", key -> ");
                            sb.append(str8);
                            p.a(e.this.c, com.tkay.core.common.b.f.A, str8, System.currentTimeMillis());
                            if (m.a().z()) {
                                Log.e("tkay", "Please check these params in your code (AppId: " + str + ", AppKey: " + str2 + ", PlacementId: " + str3 + ")");
                            }
                        }
                        if (aVar != null) {
                            aVar.a(adError);
                        }
                    }

                    @Override
                    public final void onLoadCanceled(int i) {
                        if (aVar != null) {
                            aVar.a(ErrorCode.getErrorCode(ErrorCode.exception, "", "by canceled"));
                        }
                    }
                });
            }
        });
    }

    private List<r> c(String str) {
        List<r> listF;
        if (this.d == null) {
            return null;
        }
        ArrayList<d> arrayList = new ArrayList();
        arrayList.addAll(this.d.values());
        ArrayList arrayList2 = new ArrayList();
        for (d dVar : arrayList) {
            if (TextUtils.equals(String.valueOf(dVar.Y()), str) && (listF = dVar.F()) != null) {
                arrayList2.addAll(listF);
            }
        }
        return arrayList2;
    }

    private void a(JSONObject jSONObject, JSONObject jSONObject2, String str) {
        d dVarB;
        JSONObject jSONObjectAx;
        if (jSONObject != null) {
            if (jSONObject2 == null && TextUtils.isEmpty(str)) {
                return;
            }
            try {
                if (jSONObject2 != null) {
                    jSONObject.put("p_c", jSONObject2);
                } else {
                    if (TextUtils.isEmpty(str) || (dVarB = b(str)) == null || (jSONObjectAx = dVarB.ax()) == null) {
                        return;
                    }
                    jSONObject.put("p_c", jSONObjectAx);
                }
            } catch (Exception unused) {
            }
        }
    }

    static void a(Context context, d dVar) {
        int iE = dVar.e();
        m.a().c(iE);
        p.a(context, com.tkay.core.common.b.f.o, "r", iE);
    }
}
