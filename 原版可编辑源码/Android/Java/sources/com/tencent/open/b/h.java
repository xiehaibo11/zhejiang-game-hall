package com.tencent.open.b;

import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemClock;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.huawei.hms.adapter.internal.CommonCode;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tencent.connect.common.Constants;
import com.tencent.open.log.SLog;
import com.tencent.open.utils.HttpUtils;
import com.tencent.open.utils.i;
import com.tencent.open.utils.l;
import com.tencent.open.utils.m;
import java.io.IOException;
import java.io.Serializable;
import java.net.SocketTimeoutException;
import java.security.SecureRandom;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.TimeZone;
import java.util.concurrent.Executor;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class h {
    protected static h a;
    protected HandlerThread e;
    protected Handler f;
    protected Random b = new SecureRandom();
    protected List<Serializable> d = Collections.synchronizedList(new ArrayList());
    protected List<Serializable> c = Collections.synchronizedList(new ArrayList());
    protected Executor g = l.b();
    protected Executor h = l.b();

    protected void b() {
    }

    public static synchronized h a() {
        if (a == null) {
            a = new h();
        }
        return a;
    }

    private h() {
        this.e = null;
        if (this.e == null) {
            HandlerThread handlerThread = new HandlerThread("opensdk.report.handlerthread", 10);
            this.e = handlerThread;
            handlerThread.start();
        }
        if (!this.e.isAlive() || this.e.getLooper() == null) {
            return;
        }
        this.f = new Handler(this.e.getLooper()) {
            @Override
            public void handleMessage(Message message) {
                int i = message.what;
                if (i == 1000) {
                    h.this.b();
                } else if (i == 1001) {
                    h.this.d();
                }
                super.handleMessage(message);
            }
        };
    }

    public void a(final Bundle bundle, String str, final boolean z) {
        if (bundle == null) {
            return;
        }
        SLog.v("openSDK_LOG.ReportManager", "-->reportVia, bundle: " + bundle.toString());
        if (a("report_via", str) || z) {
            this.g.execute(new Runnable() {
                @Override
                public void run() {
                    try {
                        Bundle bundle2 = new Bundle();
                        bundle2.putString("uin", "1000");
                        bundle2.putString("platform", "1");
                        bundle2.putString("os_ver", Build.VERSION.RELEASE);
                        bundle2.putString(RequestParameters.POSITION, "");
                        bundle2.putString(PointCategory.NETWORK, a.a(com.tencent.open.utils.g.a()));
                        bundle2.putString("language", d.a());
                        bundle2.putString(CommonCode.MapKey.HAS_RESOLUTION, d.a(com.tencent.open.utils.g.a()));
                        bundle2.putString("apn", a.b(com.tencent.open.utils.g.a()));
                        bundle2.putString(Constants.PARAM_MODEL_NAME, com.tencent.open.utils.f.a().c(com.tencent.open.utils.g.a()));
                        bundle2.putString("timezone", TimeZone.getDefault().getID());
                        bundle2.putString("sdk_ver", Constants.SDK_VERSION);
                        bundle2.putString("qz_ver", m.d(com.tencent.open.utils.g.a(), Constants.PACKAGE_QZONE));
                        bundle2.putString(Constants.PARAM_QQ_VER, m.c(com.tencent.open.utils.g.a(), "com.tencent.mobileqq"));
                        bundle2.putString("qua", m.e(com.tencent.open.utils.g.a(), com.tencent.open.utils.g.b()));
                        bundle2.putString("packagename", com.tencent.open.utils.g.b());
                        bundle2.putString(Constants.PARAM_APP_VER, m.d(com.tencent.open.utils.g.a(), com.tencent.open.utils.g.b()));
                        if (bundle != null) {
                            bundle2.putAll(bundle);
                        }
                        h.this.d.add(new c(bundle2));
                        int size = h.this.d.size();
                        int iA = i.a(com.tencent.open.utils.g.a(), (String) null).a("Agent_ReportTimeInterval");
                        if (iA == 0) {
                            iA = 10000;
                        }
                        if (!h.this.a("report_via", size) && !z) {
                            if (h.this.f.hasMessages(1001)) {
                                return;
                            }
                            Message messageObtain = Message.obtain();
                            messageObtain.what = 1001;
                            h.this.f.sendMessageDelayed(messageObtain, iA);
                            return;
                        }
                        h.this.d();
                        h.this.f.removeMessages(1001);
                    } catch (Exception e) {
                        SLog.e("openSDK_LOG.ReportManager", "--> reporVia, exception in sub thread.", e);
                    }
                }
            });
        }
    }

    public void a(String str, long j, long j2, long j3, int i) {
        a(str, j, j2, j3, i, "", false);
    }

    public void a(String str, long j, long j2, long j3, int i, String str2, boolean z) {
        SLog.v("openSDK_LOG.ReportManager", "-->reportCgi, command: " + str + " | startTime: " + j + " | reqSize:" + j2 + " | rspSize: " + j3 + " | responseCode: " + i + " | detail: " + str2);
    }

    protected boolean a(String str, String str2) {
        int iA;
        SLog.d("openSDK_LOG.ReportManager", "-->availableFrequency, report: " + str + " | ext: " + str2);
        boolean z = false;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        int i = 100;
        if (str.equals("report_cgi")) {
            try {
                iA = a(Integer.parseInt(str2));
                if (this.b.nextInt(100) < iA) {
                    z = true;
                }
            } catch (Exception unused) {
                return false;
            }
        } else {
            if (str.equals("report_via")) {
                iA = f.a(str2);
                if (this.b.nextInt(100) < iA) {
                    i = iA;
                    z = true;
                }
            }
            SLog.d("openSDK_LOG.ReportManager", "-->availableFrequency, result: " + z + " | frequency: " + i);
            return z;
        }
        i = iA;
        SLog.d("openSDK_LOG.ReportManager", "-->availableFrequency, result: " + z + " | frequency: " + i);
        return z;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x001c A[PHI: r0
      0x001c: PHI (r0v9 int) = (r0v6 int), (r0v12 int) binds: [B:11:0x0034, B:5:0x0019] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected boolean a(String str, int i) {
        int iA;
        int i2 = 5;
        if (str.equals("report_cgi")) {
            iA = i.a(com.tencent.open.utils.g.a(), (String) null).a("Common_CGIReportMaxcount");
            if (iA != 0) {
                i2 = iA;
            }
        } else if (str.equals("report_via")) {
            iA = i.a(com.tencent.open.utils.g.a(), (String) null).a("Agent_ReportBatchCount");
            if (iA != 0) {
            }
        } else {
            i2 = 0;
        }
        SLog.d("openSDK_LOG.ReportManager", "-->availableCount, report: " + str + " | dataSize: " + i + " | maxcount: " + i2);
        return i >= i2;
    }

    protected int a(int i) {
        if (i == 0) {
            int iA = i.a(com.tencent.open.utils.g.a(), (String) null).a("Common_CGIReportFrequencySuccess");
            if (iA == 0) {
                return 10;
            }
            return iA;
        }
        int iA2 = i.a(com.tencent.open.utils.g.a(), (String) null).a("Common_CGIReportFrequencyFailed");
        if (iA2 == 0) {
            return 100;
        }
        return iA2;
    }

    protected Map<String, String> c() {
        List<Serializable> listB = g.b("report_via");
        if (listB != null) {
            this.d.addAll(listB);
        }
        SLog.d("openSDK_LOG.ReportManager", "-->prepareViaData, mViaList size: " + this.d.size());
        if (this.d.size() == 0) {
            return null;
        }
        JSONArray jSONArray = new JSONArray();
        for (Serializable serializable : this.d) {
            JSONObject jSONObject = new JSONObject();
            c cVar = (c) serializable;
            for (String str : cVar.a.keySet()) {
                try {
                    String str2 = cVar.a.get(str);
                    if (str2 == null) {
                        str2 = "";
                    }
                    jSONObject.put(str, str2);
                } catch (JSONException e) {
                    SLog.e("openSDK_LOG.ReportManager", "-->prepareViaData, put bundle to json array exception", e);
                }
            }
            jSONArray.put(jSONObject);
        }
        SLog.v("openSDK_LOG.ReportManager", "-->prepareViaData, JSONArray array: " + jSONArray.toString());
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.put("data", jSONArray);
            HashMap map = new HashMap();
            map.put("data", jSONObject2.toString());
            return map;
        } catch (JSONException e2) {
            SLog.e("openSDK_LOG.ReportManager", "-->prepareViaData, put bundle to json array exception", e2);
            return null;
        }
    }

    protected void d() {
        if (m.b(com.tencent.open.utils.g.a())) {
            this.g.execute(new Runnable() {
                /* JADX WARN: Code restructure failed: missing block: B:23:0x008e, code lost:
                
                    r18 = r5;
                    r22 = r9;
                    r20 = r14;
                    r7 = true;
                 */
                @Override
                /*
                    Code decompiled incorrectly, please refer to instructions dump.
                */
                public void run() {
                    int i;
                    long j;
                    long jB;
                    long j2;
                    long j3;
                    long j4;
                    com.tencent.open.a.g gVarB;
                    JSONObject jSONObjectD;
                    long jC;
                    int i2;
                    try {
                        Map<String, String> mapC = h.this.c();
                        if (mapC == null) {
                            return;
                        }
                        SLog.d("openSDK_LOG.ReportManager", "-->doReportVia, params: " + mapC.toString());
                        int iA = f.a();
                        long jElapsedRealtime = SystemClock.elapsedRealtime();
                        int i3 = 0;
                        int errorCodeFromException = 0;
                        while (true) {
                            int i4 = i3 + 1;
                            try {
                                try {
                                    gVarB = com.tencent.open.a.f.a().b("https://appsupport.qq.com/cgi-bin/appstage/mstats_batch_report", mapC);
                                    SLog.i("openSDK_LOG.ReportManager", "-->reportVia: statusCode " + gVarB.d());
                                    jSONObjectD = m.d(gVarB.a());
                                    jC = (long) gVarB.c();
                                    i = i4;
                                    jB = gVarB.b();
                                    try {
                                        try {
                                        } catch (JSONException unused) {
                                            j = 0;
                                            jB = 0;
                                            i3 = i;
                                            errorCodeFromException = -4;
                                        }
                                    } catch (SocketTimeoutException unused2) {
                                        j = 0;
                                        jElapsedRealtime = SystemClock.elapsedRealtime();
                                        errorCodeFromException = -8;
                                        jB = j;
                                    } catch (IOException e) {
                                        e = e;
                                        j = 0;
                                        errorCodeFromException = HttpUtils.getErrorCodeFromException(e);
                                        jB = j;
                                    }
                                } catch (Exception unused3) {
                                    j = 0;
                                    errorCodeFromException = -6;
                                    i3 = iA;
                                    jB = 0;
                                }
                            } catch (SocketTimeoutException unused4) {
                                i = i4;
                            } catch (IOException e2) {
                                e = e2;
                                i = i4;
                            } catch (JSONException unused5) {
                                i = i4;
                            }
                            if (gVarB.d() != 200) {
                                errorCodeFromException = gVarB.d();
                                j2 = jElapsedRealtime;
                                j3 = jB;
                                j4 = jC;
                                break;
                            }
                            try {
                                i2 = jSONObjectD.getInt("ret");
                            } catch (JSONException unused6) {
                                i2 = -4;
                            }
                            if (i2 == 0 || jB != 0) {
                                break;
                            }
                            j = jC;
                            i3 = i;
                            if (i3 >= iA) {
                                j2 = jElapsedRealtime;
                                j3 = jB;
                                j4 = j;
                                break;
                            }
                        }
                        boolean z = false;
                        h.this.a("mapp_apptrace_sdk", j2, j4, j3, errorCodeFromException, null, false);
                        if (z) {
                            g.a("report_via");
                        } else {
                            g.a("report_via", h.this.d);
                        }
                        h.this.d.clear();
                        SLog.i("openSDK_LOG.ReportManager", "-->doReportVia, uploadSuccess: " + z + " resultCode: " + errorCodeFromException);
                    } catch (Exception e3) {
                        SLog.e("openSDK_LOG.ReportManager", "-->doReportVia, exception in serial executor.", e3);
                    }
                }
            });
        }
    }

    public void a(final String str, final Map<String, String> map) {
        if (m.b(com.tencent.open.utils.g.a())) {
            l.b(new Runnable() {
                @Override
                public void run() {
                    int i = 0;
                    try {
                        int iA = f.a();
                        if (iA == 0) {
                            iA = 3;
                        }
                        SLog.d("openSDK_LOG.ReportManager", "-->httpRequest, retryCount: " + iA);
                        do {
                            i++;
                            try {
                                SLog.i("openSDK_LOG.ReportManager", "-->httpRequest, statusCode: " + com.tencent.open.a.f.a().a(str, map).d());
                            } catch (SocketTimeoutException e) {
                                SLog.e("openSDK_LOG.ReportManager", "-->ReportCenter httpRequest SocketTimeoutException:", e);
                            } catch (Exception e2) {
                                SLog.e("openSDK_LOG.ReportManager", "-->ReportCenter httpRequest Exception:", e2);
                            }
                        } while (i < iA);
                    } catch (Exception e3) {
                        SLog.e("openSDK_LOG.ReportManager", "-->httpRequest, exception in serial executor:", e3);
                    }
                }
            });
        }
    }
}
