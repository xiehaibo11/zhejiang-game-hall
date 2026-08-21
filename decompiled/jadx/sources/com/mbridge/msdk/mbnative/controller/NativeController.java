package com.mbridge.msdk.mbnative.controller;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.k;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.entity.h;
import com.mbridge.msdk.foundation.entity.m;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbnative.controller.a;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.NativeListener;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.core.c.d;
import com.tkay.expressad.foundation.d.r;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Timer;
import java.util.TimerTask;
import java.util.UUID;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class NativeController {
    private static boolean B;
    private boolean A;
    private int C;
    private int D;
    private int E;
    private int F;
    private com.mbridge.msdk.foundation.same.e.b G;
    private Map<String, Boolean> H;
    private List<com.mbridge.msdk.mbnative.controller.a> I;
    private List<a.InterfaceC0273a> J;
    private CopyOnWriteArrayList<com.mbridge.msdk.foundation.same.e.a> K;
    private Hashtable<String, AdSession> L;
    private int M;
    private String N;
    private i O;
    private int P;
    private a Q;
    private boolean R;
    private boolean S;
    private String T;
    private Timer U;
    private String V;
    private com.mbridge.msdk.c.d W;
    private long X;
    private int Y;
    private int Z;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected List<Integer> f3749a;
    private boolean aa;
    private int ab;
    private int ac;
    private boolean ad;
    protected List<Integer> b;
    Map<String, Object> d;
    private com.mbridge.msdk.c.c f;
    private com.mbridge.msdk.mbnative.c.a g;
    private NativeListener.NativeTrackingListener h;
    private Context i;
    private String j;
    private String k;
    private Queue<Integer> l;
    private Queue<Long> m;
    private String n;
    private e o;
    private com.mbridge.msdk.foundation.same.report.d p;
    private String q;
    private com.mbridge.msdk.click.b r;
    private int s;
    private int t;
    private int u;
    private int v;
    private String w;
    private boolean x;
    private boolean y;
    private boolean z;
    private static final String e = NativeController.class.getSimpleName();
    public static Map<String, Long> c = new HashMap();

    public interface b {
        void a();
    }

    private static class e extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private WeakReference<NativeController> f3770a;

        public e(NativeController nativeController) {
            this.f3770a = new WeakReference<>(nativeController);
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            NativeController nativeController;
            super.handleMessage(message);
            try {
                if (message.what == 0 && this.f3770a != null && (nativeController = this.f3770a.get()) != null) {
                    nativeController.p.a(message.arg1, (String) message.obj);
                }
                if (message.what == 1) {
                    NativeController nativeController2 = null;
                    if (this.f3770a != null && this.f3770a.get() != null) {
                        nativeController2 = this.f3770a.get();
                    }
                    if (nativeController2 != null) {
                        nativeController2.z = true;
                        z.b(NativeController.e, "time out return");
                        List<Campaign> listB = nativeController2.b(nativeController2.j, nativeController2.t, nativeController2.V);
                        if (nativeController2.y) {
                            return;
                        }
                        z.b(NativeController.e, "time out return isReturn = " + nativeController2.y);
                        nativeController2.a(listB);
                    }
                }
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }
    }

    public NativeController(com.mbridge.msdk.mbnative.c.a aVar, NativeListener.NativeTrackingListener nativeTrackingListener, Map<String, Object> map, Context context) {
        com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA;
        this.s = 1;
        this.t = 1;
        this.u = -1;
        this.v = 0;
        this.y = false;
        this.z = false;
        this.A = false;
        this.C = 0;
        this.D = 0;
        this.E = 0;
        this.F = 0;
        this.H = new HashMap();
        this.K = new CopyOnWriteArrayList<>();
        this.L = new Hashtable<>();
        this.M = 1;
        this.N = "";
        this.P = 2;
        this.T = "";
        this.V = "";
        this.i = context;
        this.d = map;
        this.f = new com.mbridge.msdk.c.c();
        this.g = aVar;
        this.h = nativeTrackingListener;
        this.I = new ArrayList();
        this.J = new ArrayList();
        String str = (String) map.get("unit_id");
        this.j = str;
        if (TextUtils.isEmpty(str)) {
            z.c(e, "load error,make sure you have correct unitid");
            return;
        }
        if (map.containsKey(MBridgeConstans.PLACEMENT_ID) && map.get(MBridgeConstans.PLACEMENT_ID) != null) {
            this.k = (String) map.get(MBridgeConstans.PLACEMENT_ID);
        } else {
            this.k = "";
        }
        if (map.containsKey("isPreloadImg")) {
            B = ((Boolean) map.get("isPreloadImg")).booleanValue();
        }
        this.l = new LinkedList();
        this.m = new LinkedList();
        this.G = new com.mbridge.msdk.foundation.same.e.b(this.i);
        if (Looper.myLooper() == null) {
            Looper.prepare();
        }
        this.o = new e(this);
        if (map.containsKey("catetory")) {
            this.w = (String) map.get("catetory");
        }
        try {
            if (!(com.mbridge.msdk.mbnative.controller.b.b().containsKey(this.j) ? com.mbridge.msdk.mbnative.controller.b.b().get(this.j).booleanValue() : false)) {
                if (map.containsKey("ad_num")) {
                    int iIntValue = ((Integer) map.get("ad_num")).intValue();
                    iIntValue = iIntValue < 1 ? 1 : iIntValue;
                    iIntValue = iIntValue > 10 ? 10 : iIntValue;
                    this.t = iIntValue;
                    this.s = iIntValue;
                }
                if (map.containsKey("ad_frame_num")) {
                    this.E = ((Integer) map.get("ad_frame_num")).intValue();
                }
            } else if (com.mbridge.msdk.mbnative.controller.b.d().containsKey(this.j)) {
                this.t = com.mbridge.msdk.mbnative.controller.b.d().get(this.j).intValue();
                if (map.containsKey("ad_num")) {
                    int iIntValue2 = ((Integer) map.get("ad_num")).intValue();
                    this.C = iIntValue2;
                    this.s = iIntValue2;
                }
                if (map.containsKey("ad_frame_num")) {
                    int iIntValue3 = ((Integer) map.get("ad_frame_num")).intValue();
                    this.D = iIntValue3;
                    this.E = iIntValue3;
                }
            }
        } catch (Exception e2) {
            z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
        }
        this.p = new com.mbridge.msdk.foundation.same.report.d(this.i);
        this.r = new com.mbridge.msdk.click.b(this.i, this.j);
        try {
            Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
            Class.forName("com.mbridge.msdk.videocommon.download.b");
            this.S = true;
            if (this.d != null && (this.d.containsKey("native_video_width") || this.d.containsKey("native_video_height") || map.containsKey(MBridgeConstans.NATIVE_VIDEO_SUPPORT))) {
                this.R = true;
            }
            com.mbridge.msdk.mbnative.controller.c.a(this.i, this.j);
            x.b();
            if (TextUtils.isEmpty(this.j)) {
                return;
            }
            com.mbridge.msdk.foundation.db.f.a(i.a(this.i)).a();
            int iA = a(map.containsKey("native_info") ? (String) map.get("native_info") : null);
            String str2 = this.j;
            iA = iA <= 0 ? this.s : iA;
            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e("", str2);
            this.W = dVarE;
            if (dVarE == null) {
                this.W = com.mbridge.msdk.c.d.d(str2);
            }
            List<Integer> listR = this.W.r();
            this.f3749a = listR;
            List<Campaign> listB = (listR == null || listR.size() <= 0 || !this.f3749a.contains(1) || (bVarA = com.mbridge.msdk.mbnative.a.f.a(1)) == null) ? null : bVarA.b(str2, iA);
            if (listB != null) {
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < listB.size(); i++) {
                    CampaignEx campaignEx = (CampaignEx) listB.get(i);
                    if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                        arrayList.add(campaignEx);
                    }
                }
                if (arrayList.size() > 0) {
                    Class<?> cls = Class.forName("com.mbridge.msdk.videocommon.download.b");
                    Class<?> cls2 = Class.forName("com.mbridge.msdk.videocommon.listener.a");
                    Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
                    cls.getMethod("createUnitCache", Context.class, String.class, CopyOnWriteArrayList.class, Integer.TYPE, cls2).invoke(objInvoke, context, this.j, new CopyOnWriteArrayList(arrayList), 1, null);
                    cls.getMethod(PointCategory.LOAD, String.class).invoke(objInvoke, this.j);
                }
            }
        } catch (Throwable unused) {
            z.d(e, "please import the nativex aar");
        }
    }

    public NativeController() {
        this.s = 1;
        this.t = 1;
        this.u = -1;
        this.v = 0;
        this.y = false;
        this.z = false;
        this.A = false;
        this.C = 0;
        this.D = 0;
        this.E = 0;
        this.F = 0;
        this.H = new HashMap();
        this.K = new CopyOnWriteArrayList<>();
        this.L = new Hashtable<>();
        this.M = 1;
        this.N = "";
        this.P = 2;
        this.T = "";
        this.V = "";
    }

    private int a(String str) {
        if (str == null) {
            return 0;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray.length() > 0) {
                for (int i = 0; i < jSONArray.length(); i++) {
                    JSONObject jSONObject = (JSONObject) jSONArray.opt(i);
                    if (2 == jSONObject.optInt("id", 0)) {
                        return jSONObject.optInt("ad_num");
                    }
                }
            }
        } catch (Exception e2) {
            z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
        }
        return 0;
    }

    public final void a(int i, String str) {
        String str2;
        boolean zA;
        this.y = false;
        this.z = false;
        this.A = false;
        this.aa = false;
        this.x = false;
        this.V = str;
        this.g.a(!TextUtils.isEmpty(str));
        String str3 = null;
        this.Q = null;
        Map<String, Long> map = c;
        if (map != null && map.size() > 0) {
            c.clear();
        }
        if (((com.mbridge.msdk.mbnative.controller.b.b() == null || !com.mbridge.msdk.mbnative.controller.b.b().containsKey(this.j)) ? false : com.mbridge.msdk.mbnative.controller.b.b().get(this.j).booleanValue()) && i == 1 && a(i)) {
            return;
        }
        if (this.d.containsKey("app_id") && this.d.containsKey("app_key") && this.d.containsKey(MBridgeConstans.KEY_WORD)) {
            str3 = (String) this.d.get("app_id");
            str2 = (String) this.d.get("app_key");
        } else {
            str2 = null;
        }
        this.f.a(this.i, str3, str2, this.j);
        com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(str3, this.j);
        this.W = dVarE;
        if (dVarE == null) {
            this.W = com.mbridge.msdk.c.d.d(this.j);
        }
        com.mbridge.msdk.mbnative.controller.b.e().put(this.j, Integer.valueOf(this.W.v() * this.t));
        this.f3749a = this.W.r();
        this.b = this.W.s();
        this.Z = this.W.p();
        this.Y = this.W.q();
        this.t = this.s;
        List<Integer> list = this.f3749a;
        if (list == null || list.size() == 0) {
            com.mbridge.msdk.mbnative.c.a aVar = this.g;
            if (aVar != null) {
                this.y = true;
                aVar.onAdLoadError("don't have sorceList");
                return;
            }
            return;
        }
        try {
            zA = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(com.mbridge.msdk.foundation.controller.a.f().j());
        } catch (Exception unused) {
            zA = false;
        }
        if (!zA) {
            com.mbridge.msdk.mbnative.c.a aVar2 = this.g;
            if (aVar2 != null) {
                aVar2.onAdLoadError("webview is not available");
                return;
            }
            return;
        }
        if (this.d.containsKey("native_info") && this.n == null) {
            String str4 = (String) this.d.get("native_info");
            this.n = str4;
            if (str4 != null) {
                try {
                    JSONArray jSONArray = new JSONArray(this.n);
                    if (jSONArray.length() > 0) {
                        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                            JSONObject jSONObject = (JSONObject) jSONArray.opt(i2);
                            int iOptInt = jSONObject.optInt("id", 0);
                            if (2 == iOptInt) {
                                this.ab = jSONObject.optInt("ad_num");
                                if (this.Z > 0) {
                                    jSONObject.remove("ad_num");
                                    jSONObject.put("ad_num", this.Z);
                                }
                            } else if (3 == iOptInt) {
                                this.ac = jSONObject.optInt("ad_num");
                                if (this.Z > 0) {
                                    jSONObject.remove("ad_num");
                                    jSONObject.put("ad_num", this.Z);
                                }
                            }
                        }
                    }
                    this.M = Math.max(this.ab, this.ac);
                    this.n = jSONArray.toString();
                } catch (JSONException e2) {
                    z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
                }
            }
        }
        if ((!this.f3749a.contains(1) || this.f3749a.get(0).intValue() == 1) && i == 0 && a(b(this.j, this.t, this.V))) {
            return;
        }
        this.ad = true;
        if (this.f3749a.contains(1) && i == 0 && this.f3749a.get(0).intValue() != 1) {
            int iIntValue = this.f3749a.get(0).intValue();
            com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = com.mbridge.msdk.mbnative.a.f.a(iIntValue);
            if (iIntValue == 2 && this.d.containsKey("native_info")) {
                this.t = this.M;
            } else {
                this.t = this.s;
            }
            if (bVarA != null && a(a(iIntValue, d(bVarA.b(this.j, this.t))))) {
                return;
            }
            this.x = false;
            this.ad = false;
            try {
                a(this.b.get(this.f3749a.indexOf(1)).intValue() * 1000, i, false, this.j, this.V);
            } catch (Exception unused2) {
            }
        }
        this.o.sendEmptyMessageDelayed(1, this.W.m() * 1000);
        List<Integer> list2 = this.f3749a;
        if (list2 != null && list2.size() > 0) {
            Queue<Integer> queue = this.l;
            if (queue != null && queue.size() > 0) {
                z.b(e, "setRequestQueue clear requestqueue");
                this.l.clear();
            }
            for (Integer num : this.f3749a) {
                Queue<Integer> queue2 = this.l;
                if (queue2 != null) {
                    queue2.add(num);
                }
            }
        }
        List<Integer> list3 = this.b;
        if (list3 != null && list3.size() > 0) {
            Queue<Long> queue3 = this.m;
            if (queue3 != null && queue3.size() > 0) {
                this.m.clear();
            }
            for (Integer num2 : this.b) {
                Queue<Long> queue4 = this.m;
                if (queue4 != null) {
                    queue4.add(Long.valueOf(num2.intValue() * 1000));
                }
            }
        }
        b(i, this.V);
    }

    private boolean a(int i) {
        int iMin;
        int iOptInt;
        int iOptInt2;
        com.mbridge.msdk.mbnative.c.a aVar;
        int i2 = 0;
        if (com.mbridge.msdk.mbnative.controller.b.b().containsKey(this.j) && com.mbridge.msdk.mbnative.controller.b.b().get(this.j).booleanValue()) {
            Map<String, Map<Long, Object>> mapA = com.mbridge.msdk.mbnative.controller.b.a();
            Map<Long, Object> map = mapA.get(i + "_" + this.j);
            Integer num = com.mbridge.msdk.mbnative.controller.b.d().get(this.j);
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (num != null) {
                this.t = num.intValue();
            }
            if (map != null && map.size() > 0) {
                Long next = map.keySet().iterator().next();
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (aVarB == null) {
                    aVarB = com.mbridge.msdk.c.b.a().b();
                }
                if (jCurrentTimeMillis - next.longValue() >= aVarB.ag() * 1000) {
                    mapA.remove(i + "_" + this.j);
                } else {
                    if (i == 1) {
                        List<Frame> list = (List) map.get(next);
                        if (list == null || list.size() <= 0 || (aVar = this.g) == null) {
                            return false;
                        }
                        if (this.E >= list.size()) {
                            mapA.remove(i + "_" + this.j);
                            aVar.onAdFramesLoaded(list);
                            return true;
                        }
                        if (this.E == 0) {
                            return false;
                        }
                        List<Frame> listSubList = list.subList(0, this.D);
                        aVar.onAdFramesLoaded(list);
                        list.removeAll(listSubList);
                        map.put(next, listSubList);
                        ArrayList arrayList = new ArrayList();
                        for (Frame frame : list) {
                            if (i2 >= this.E) {
                                arrayList.add(frame);
                            }
                            i2++;
                        }
                        map.put(next, arrayList);
                        mapA.put(i + "_" + this.j, map);
                        aVar.onAdFramesLoaded(listSubList);
                        return true;
                    }
                    List list2 = (List) map.get(next);
                    if (list2 != null && list2.size() > 0) {
                        List<Campaign> arrayList2 = new ArrayList<>();
                        if (((CampaignEx) list2.get(0)).getType() == 1) {
                            if (TextUtils.isEmpty(this.n)) {
                                iMin = Math.min(this.C, list2.size());
                            } else {
                                try {
                                    JSONArray jSONArray = new JSONArray(this.n);
                                    if (jSONArray.length() > 0) {
                                        iOptInt = 0;
                                        iOptInt2 = 0;
                                        for (int i3 = 0; i3 < jSONArray.length(); i3++) {
                                            JSONObject jSONObject = (JSONObject) jSONArray.opt(i3);
                                            int iOptInt3 = jSONObject.optInt("id", 0);
                                            if (2 == iOptInt3) {
                                                iOptInt = jSONObject.optInt("ad_num");
                                            } else if (3 == iOptInt3) {
                                                iOptInt2 = jSONObject.optInt("ad_num");
                                            }
                                        }
                                    } else {
                                        iOptInt = 0;
                                        iOptInt2 = 0;
                                    }
                                    if (3 == ((CampaignEx) list2.get(0)).getTemplate()) {
                                        iMin = Math.min(iOptInt2, list2.size());
                                    } else {
                                        iMin = Math.min(iOptInt, list2.size());
                                    }
                                } catch (Exception unused) {
                                    z.d(e, "load from catch error in get nativeinfo adnum");
                                    iMin = 0;
                                }
                            }
                            if (iMin <= 0) {
                                return false;
                            }
                            Iterator it = list2.iterator();
                            while (it.hasNext() && i2 != iMin) {
                                CampaignEx campaignEx = (CampaignEx) it.next();
                                campaignEx.getTemplate();
                                arrayList2.add(campaignEx);
                                it.remove();
                                i2++;
                            }
                        } else {
                            int iMin2 = Math.min(this.C, list2.size());
                            if (iMin2 > 0) {
                                Iterator it2 = list2.iterator();
                                while (it2.hasNext() && i2 != iMin2) {
                                    CampaignEx campaignEx2 = (CampaignEx) it2.next();
                                    campaignEx2.getTemplate();
                                    arrayList2.add(campaignEx2);
                                    it2.remove();
                                    i2++;
                                }
                            }
                        }
                        a(arrayList2);
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private void b(int i, String str) {
        Queue<Integer> queue = this.l;
        if (queue != null && queue.size() > 0) {
            int iIntValue = this.l.poll().intValue();
            this.X = MBridgeConstans.REQUEST_TIME_OUT;
            Queue<Long> queue2 = this.m;
            if (queue2 != null && queue2.size() > 0) {
                this.X = this.m.poll().longValue();
            }
            z.b(e, "start queue adsource = " + iIntValue);
            b(iIntValue, this.X, i, str);
            return;
        }
        if (this.y || this.g == null) {
            return;
        }
        z.b(e, "no ad source return");
        this.y = true;
        this.g.onAdLoadError("no ad source");
    }

    private void b(int i, long j, int i2, String str) {
        com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA;
        if (i2 == 0 && (bVarA = com.mbridge.msdk.mbnative.a.f.a(i)) != null) {
            if ((i == 1 || i == 2) && this.d.containsKey("native_info")) {
                this.t = this.M;
            } else {
                this.t = this.s;
            }
            if (a(a(i, d(bVarA.b(this.j, this.t))))) {
                return;
            }
        }
        this.x = false;
        if (i == 1) {
            a(j, i2, true, this.j, str);
        } else if (i == 2) {
            a(2, j, i2, str);
        } else {
            a(i, j, i2, str);
        }
    }

    public final void a(String str, int i, String str2) {
        z.b(e, "request error msg = " + str);
        Queue<Integer> queue = this.l;
        if ((queue != null && queue.size() <= 0) || this.l == null) {
            com.mbridge.msdk.mbnative.c.a aVar = this.g;
            if (aVar == null || this.y) {
                return;
            }
            this.y = true;
            aVar.onAdLoadError(str);
            z.b(e, "requestError return listener isReturn = " + this.y);
            return;
        }
        z.b(e, "request queue in request error");
        b(i, str2);
    }

    public final synchronized void a(int i, long j, int i2, String str) {
        m mVar;
        try {
            if (this.d.containsKey("native_info")) {
                this.t = Math.max(this.ab, this.ac);
            }
            if (i2 == 0) {
                com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = com.mbridge.msdk.mbnative.a.f.a(i);
                if (this.x) {
                    if (bVarA != null && a(a(1, d(bVarA.b(this.j, this.t))))) {
                        return;
                    }
                    z.b(e, "isGetApiReulst = " + this.aa + " isReturn = " + this.y);
                    if (this.Q != null && !this.aa) {
                        this.Q.b(true);
                    }
                    if (this.aa && !this.y) {
                        z.b(e, "222222");
                        a("mb load failed", i2, str);
                    }
                    if (!this.ad) {
                        return;
                    }
                } else if (i != 1 && bVarA != null && a(a(i, d(bVarA.b(this.j, this.t))))) {
                    return;
                }
            }
            if (this.u == -1) {
                this.u = i;
            } else if (this.u != i) {
                this.v = 0;
            }
            com.mbridge.msdk.foundation.db.f.a(i.a(this.i)).a();
            z.b(e, "START LOAD MB MVNATIVE");
            com.mbridge.msdk.mbnative.e.a.a aVar = new com.mbridge.msdk.mbnative.e.a.a(this.i);
            com.mbridge.msdk.foundation.same.net.g.d dVar = new com.mbridge.msdk.foundation.same.net.g.d();
            String strK = com.mbridge.msdk.foundation.controller.a.f().k();
            String strL = com.mbridge.msdk.foundation.controller.a.f().l();
            if (this.d != null && this.d.containsKey("app_id") && this.d.containsKey("app_key") && this.d.containsKey(MBridgeConstans.KEY_WORD) && this.d.get(MBridgeConstans.KEY_WORD) != null) {
                if (this.d.get("app_id") instanceof String) {
                    strK = (String) this.d.get("app_id");
                }
                if (this.d.get("app_key") instanceof String) {
                    strL = (String) this.d.get("app_key");
                }
                String str2 = this.d.get(MBridgeConstans.KEY_WORD) instanceof String ? (String) this.d.get(MBridgeConstans.KEY_WORD) : null;
                if (!TextUtils.isEmpty(str2)) {
                    dVar.a("smart", t.a(str2));
                }
            }
            dVar.a("app_id", strK);
            dVar.a("unit_id", this.j);
            if (!TextUtils.isEmpty(this.k)) {
                dVar.a(MBridgeConstans.PLACEMENT_ID, this.k);
            }
            dVar.a("req_type", "2");
            if (!TextUtils.isEmpty(this.w)) {
                dVar.a("category", this.w);
            }
            dVar.a("sign", SameMD5.getMD5(strK + strL));
            if (this.Z > 0 && i2 == 0) {
                dVar.a("ad_num", this.Z + "");
            } else {
                dVar.a("ad_num", this.s + "");
            }
            String strG = ae.g(this.j);
            if (!TextUtils.isEmpty(strG)) {
                dVar.a(at.j, strG);
            }
            dVar.a("only_impression", "1");
            dVar.a("ping_mode", "1");
            if (this.E != 0) {
                dVar.a("frame_num", this.E + "");
            }
            if (!TextUtils.isEmpty(this.n)) {
                dVar.a("native_info", this.n);
                if (i == 1 && !com.mbridge.msdk.click.b.f3142a) {
                    dVar.a("tnum", this.M + "");
                }
            } else if (i == 1 && !com.mbridge.msdk.click.b.f3142a) {
                dVar.a("tnum", this.s + "");
            }
            if (i == 1 && !TextUtils.isEmpty(this.N)) {
                dVar.a("ttc_ids", this.N);
            }
            String strA = com.mbridge.msdk.foundation.same.a.d.a(this.j, com.tkay.expressad.foundation.g.a.f.f6871a);
            if (!TextUtils.isEmpty(strA)) {
                dVar.a(com.mbridge.msdk.foundation.same.net.g.d.b, strA);
            }
            if (Build.VERSION.SDK_INT >= 14) {
                if (this.d.containsKey("native_video_width") && (this.d.get("native_video_width") instanceof Integer)) {
                    dVar.a("video_width", ((Integer) this.d.get("native_video_width")).intValue() + "");
                }
                if (this.d.containsKey("native_video_height") && (this.d.get("native_video_height") instanceof Integer)) {
                    dVar.a("video_height", ((Integer) this.d.get("native_video_height")).intValue() + "");
                }
                if (this.d.containsKey(MBridgeConstans.NATIVE_VIDEO_SUPPORT) && (this.d.get(MBridgeConstans.NATIVE_VIDEO_SUPPORT) instanceof Boolean)) {
                    ((Boolean) this.d.get(MBridgeConstans.NATIVE_VIDEO_SUPPORT)).booleanValue();
                }
                dVar.a("video_version", "2.0");
            }
            if (com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k()) == null) {
                com.mbridge.msdk.c.b.a().b();
            }
            if (!a(this.d)) {
                z.b(e, "没有param 参数 要传fqci");
                JSONArray jSONArrayA = ae.a(this.i, this.j);
                if (jSONArrayA.length() > 0) {
                    dVar.a(com.mbridge.msdk.foundation.same.net.g.d.c, ae.a(jSONArrayA));
                }
            }
            JSONArray jSONArray = new JSONArray();
            List<Long> listI = com.mbridge.msdk.foundation.controller.a.f().i();
            if (listI != null && listI.size() > 0) {
                Iterator<Long> it = listI.iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next().longValue());
                }
            }
            if (jSONArray.length() > 0) {
                dVar.a(d.a.O, ae.a(jSONArray));
            }
            if (com.mbridge.msdk.mbnative.controller.b.b().containsKey(this.j) && com.mbridge.msdk.mbnative.controller.b.b().get(this.j).booleanValue() && com.mbridge.msdk.mbnative.controller.b.c().get(this.j) != null && (mVar = com.mbridge.msdk.mbnative.controller.b.c().get(this.j)) != null) {
                if (i == 1) {
                    this.v = mVar.b();
                } else if (i == 2) {
                    this.v = mVar.a();
                }
            }
            dVar.a("offset", this.v + "");
            dVar.a("ad_type", "42");
            dVar.a("ad_source_id", i + "");
            if (!TextUtils.isEmpty(this.q)) {
                dVar.a(com.mbridge.msdk.foundation.same.net.g.d.f3456a, this.q);
            }
            a aVar2 = new a();
            aVar2.a(b(this.d));
            aVar2.setUnitId(this.j);
            aVar2.setPlacementId(this.k);
            aVar2.setAdType(42);
            if (i != 1 || this.x) {
                aVar2.b(true);
            } else {
                this.Q = aVar2;
                aVar2.b(false);
            }
            c cVar = new c(1, aVar2, i2, str);
            aVar2.a(cVar);
            aVar2.e(i2);
            aVar2.a(str);
            if (i2 == 0) {
                if (!TextUtils.isEmpty(str)) {
                    dVar.a("token", str);
                }
                aVar.choiceV3OrV5BySetting(1, dVar, aVar2, str);
            }
            if (i2 == 1) {
                aVar.getLoadOrSetting(1, com.mbridge.msdk.foundation.same.net.f.d.a().n, dVar, aVar2);
            }
            this.o.postDelayed(cVar, j);
        } catch (Exception e2) {
            z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
            z.d(e, e2.getMessage());
        }
    }

    public final void a(Campaign campaign, View view, List<View> list) {
        try {
            if (campaign.getType() == 3) {
                return;
            }
            if (this.h != null) {
                this.r.a(this.h);
            }
            com.mbridge.msdk.mbnative.a.f.a(campaign.getType()).a(this.j, campaign, this.V);
            final CampaignEx campaignEx = (CampaignEx) campaign;
            Class<?> cls = null;
            try {
                cls = Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
            } catch (Throwable unused) {
                z.d("", "MBMediaView can't found");
            }
            com.mbridge.msdk.foundation.same.a.d.a(this.j, campaignEx, com.tkay.expressad.foundation.g.a.f.f6871a);
            if (campaignEx != null) {
                if (view != null) {
                    if (cls != null && cls.isInstance(view)) {
                        return;
                    } else {
                        view.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.1
                            @Override // com.mbridge.msdk.widget.a
                            protected final void a(View view2) {
                                NativeController.a(NativeController.this, view2.getContext(), campaignEx);
                            }
                        });
                    }
                }
                if (list != null && list.size() > 0) {
                    for (View view2 : list) {
                        if (cls != null && cls.isInstance(view2)) {
                            break;
                        } else {
                            view2.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.8
                                @Override // com.mbridge.msdk.widget.a
                                protected final void a(View view3) {
                                    NativeController.a(NativeController.this, view3.getContext(), campaignEx);
                                }
                            });
                        }
                    }
                }
                if (campaignEx.isReport()) {
                    return;
                }
                a(campaignEx, view, list);
                Log.e(e, "sendImpression" + campaignEx);
            }
        } catch (Exception unused2) {
            z.d(e, "registerview exception!");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(CampaignEx campaignEx) {
        if (campaignEx.isReportClick()) {
            return;
        }
        campaignEx.setReportClick(true);
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().h() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(this.i, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().h(), false, false);
    }

    public final void a(Campaign campaign, View view) {
        try {
            if (campaign.getType() == 3) {
                return;
            }
            if (this.h != null) {
                this.r.a(this.h);
            }
            com.mbridge.msdk.mbnative.a.f.a(campaign.getType()).a(this.j, campaign, this.V);
            final CampaignEx campaignEx = (CampaignEx) campaign;
            com.mbridge.msdk.foundation.same.a.d.a(this.j, campaignEx, com.tkay.expressad.foundation.g.a.f.f6871a);
            if (campaignEx != null) {
                com.mbridge.msdk.widget.a aVar = new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.10
                    @Override // com.mbridge.msdk.widget.a
                    protected final void a(View view2) {
                        NativeController.a(NativeController.this, view2.getContext(), campaignEx);
                    }
                };
                try {
                    a(view, aVar, Class.forName("com.mbridge.msdk.nativex.view.MBMediaView"));
                } catch (Throwable unused) {
                    a(view, aVar, (Class) null);
                }
                if (campaignEx.isReport()) {
                    return;
                }
                ArrayList arrayList = new ArrayList();
                arrayList.add(view);
                a(campaignEx, view, (List<View>) arrayList);
                z.b(e, "sendImpression" + campaignEx);
            }
        } catch (Exception unused2) {
            z.d(e, "registerview exception!");
        }
    }

    private AdSession b(CampaignEx campaignEx) {
        if (this.L == null) {
            this.L = new Hashtable<>();
        }
        String requestIdNotice = campaignEx.getRequestIdNotice();
        AdSession adSessionA = this.L.get(requestIdNotice);
        if (adSessionA == null && campaignEx.isActiveOm()) {
            adSessionA = com.mbridge.msdk.a.b.a(this.i, true, campaignEx.getOmid(), campaignEx.getRequestId(), campaignEx.getId(), this.j, "", campaignEx.getRequestIdNotice());
        }
        if (adSessionA != null) {
            this.L.put(requestIdNotice, adSessionA);
        }
        return adSessionA;
    }

    private void a(CampaignEx campaignEx, View view, List<View> list) {
        AdSession adSessionB = null;
        try {
            if (this.i != null && campaignEx != null && (adSessionB = b(campaignEx)) != null) {
                adSessionB.registerAdView(view);
                adSessionB.start();
            }
            AdSession adSession = adSessionB;
            int iD = this.W != null ? this.W.d() : 0;
            final f fVar = new f(campaignEx, view, list, this, adSession);
            if (this.K == null) {
                this.K = new CopyOnWriteArrayList<>();
            }
            this.K.add(fVar);
            fVar.setonStateChangeListener(new a.b() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.11
                @Override // com.mbridge.msdk.foundation.same.e.a.b
                public final void a(a.EnumC0259a enumC0259a) {
                    if (enumC0259a != a.EnumC0259a.FINISH || NativeController.this.K == null || NativeController.this.K.size() <= 0 || !NativeController.this.K.contains(fVar)) {
                        return;
                    }
                    NativeController.this.K.remove(fVar);
                }
            });
            if (this.o != null) {
                this.o.postDelayed(fVar, iD * 1000);
            }
        } catch (Exception e2) {
            z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
        }
    }

    private void a(View view, View.OnClickListener onClickListener, Class cls) {
        try {
            if (view == null || onClickListener == null) {
                z.d("", "traverseView  subview or mOnClickListener is null");
                return;
            }
            if (cls == null || !cls.isInstance(view)) {
                view.setOnClickListener(onClickListener);
                if (view instanceof ViewGroup) {
                    ViewGroup viewGroup = (ViewGroup) view;
                    for (int i = 0; i < viewGroup.getChildCount(); i++) {
                        a(viewGroup.getChildAt(i), onClickListener, cls);
                    }
                }
            }
        } catch (Throwable unused) {
            z.d("", "traverseView  failed");
        }
    }

    private static class f extends com.mbridge.msdk.foundation.same.e.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private CampaignEx f3771a;
        private WeakReference<View> b;
        private WeakReference<List<View>> c;
        private WeakReference<NativeController> d;
        private WeakReference<AdSession> e;

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void cancelTask() {
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void pauseTask(boolean z) {
        }

        public f(CampaignEx campaignEx, View view, List<View> list, NativeController nativeController, AdSession adSession) {
            this.f3771a = campaignEx;
            this.b = new WeakReference<>(view);
            this.c = new WeakReference<>(list);
            this.d = new WeakReference<>(nativeController);
            this.e = new WeakReference<>(adSession);
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void runTask() {
            z.d(NativeController.e, "waitSomeTimeToReport run");
            try {
                if (this.d == null || this.b == null || this.c == null) {
                    return;
                }
                View view = this.b.get();
                List<View> list = this.c.get();
                NativeController nativeController = this.d.get();
                AdSession adSession = this.e != null ? this.e.get() : null;
                if (view == null || nativeController == null) {
                    return;
                }
                NativeController.a(nativeController, this.f3771a, view, list, adSession);
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }
    }

    public final void b(Campaign campaign, View view) {
        b(campaign, view, (List<View>) null);
    }

    public final void b(Campaign campaign, View view, List<View> list) {
        if (campaign != null) {
            int type = campaign.getType();
            if (type == 1 || type == 2) {
                Class<?> cls = null;
                try {
                    cls = Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
                } catch (Throwable unused) {
                }
                if (list == null || list.size() <= 0) {
                    if (view != null) {
                        a(view, cls);
                    }
                } else {
                    Iterator<View> it = list.iterator();
                    while (it.hasNext()) {
                        a(it.next(), cls);
                    }
                }
            }
        }
    }

    private void a(View view, Class cls) {
        try {
            if (view == null) {
                z.d("", "traverseView  subview  is null");
                return;
            }
            if (cls == null || !cls.isInstance(view)) {
                view.setOnClickListener(null);
                if (view instanceof ViewGroup) {
                    ViewGroup viewGroup = (ViewGroup) view;
                    for (int i = 0; i < viewGroup.getChildCount(); i++) {
                        a(viewGroup.getChildAt(i), cls);
                    }
                }
            }
        } catch (Throwable unused) {
            z.d("", "traverseView  failed");
        }
    }

    public final void a() {
        com.mbridge.msdk.foundation.same.e.a next;
        com.mbridge.msdk.foundation.same.e.b bVar = this.G;
        if (bVar != null) {
            bVar.a();
            this.G = null;
        }
        Hashtable<String, AdSession> hashtable = this.L;
        if (hashtable != null) {
            for (AdSession adSession : hashtable.values()) {
                if (adSession != null) {
                    adSession.finish();
                }
            }
            this.L.clear();
        }
        e eVar = this.o;
        if (eVar != null) {
            eVar.removeCallbacksAndMessages(null);
        }
        this.h = null;
        this.r.a();
        try {
            if (this.i != null) {
                com.mbridge.msdk.foundation.same.c.b.a(this.i).c();
            }
            if (this.I != null && this.I.size() > 0) {
                Iterator<com.mbridge.msdk.mbnative.controller.a> it = this.I.iterator();
                while (it.hasNext()) {
                    it.next().a();
                }
                this.I.clear();
                this.I = null;
            }
            if (this.J != null && this.J.size() > 0) {
                for (a.InterfaceC0273a interfaceC0273a : this.J) {
                }
                this.J.clear();
                this.J = null;
            }
            if (this.K == null || this.K.size() <= 0) {
                return;
            }
            Iterator<com.mbridge.msdk.foundation.same.e.a> it2 = this.K.iterator();
            if (it2.hasNext() && (next = it2.next()) != null) {
                next.cancel();
                this.o.removeCallbacks(next);
            }
            this.K.clear();
        } catch (Exception unused) {
        }
    }

    public class c implements Runnable {
        private int b;
        private com.mbridge.msdk.foundation.same.e.d c;
        private int d;
        private String e;

        public c(int i, com.mbridge.msdk.foundation.same.e.d dVar, int i2, String str) {
            this.b = i;
            this.c = dVar;
            this.d = i2;
            this.e = str;
        }

        @Override // java.lang.Runnable
        public final void run() {
            z.b(NativeController.e, "cancel task adsource is = " + this.b);
            this.c.a(true);
            int i = this.b;
            if (i == 1) {
                NativeController.this.aa = true;
                if (NativeController.this.x || this.d == 1) {
                    NativeController.this.a("REQUEST_TIMEOUT", this.d, this.e);
                    return;
                }
                return;
            }
            if (i != 2) {
                return;
            }
            if (!NativeController.this.y || this.d == 1) {
                NativeController.this.a("REQUEST_TIMEOUT", this.d, this.e);
            }
        }
    }

    public class a extends com.mbridge.msdk.mbnative.e.a.b implements com.mbridge.msdk.foundation.same.e.d {
        private Runnable c;
        private boolean b = false;
        private boolean d = true;
        private List<String> e = null;

        public a() {
        }

        public final void b(boolean z) {
            this.d = z;
        }

        @Override // com.mbridge.msdk.foundation.same.e.d
        public final void a(boolean z) {
            this.b = z;
        }

        public final void a(List<String> list) {
            this.e = list;
        }

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
            NativeController.this.aa = true;
            l lVarA = l.a(i.a(NativeController.this.i));
            lVarA.b();
            if (this.c != null) {
                z.b(NativeController.e, "REMOVE CANCEL TASK ON SUCCESS");
                NativeController.this.o.removeCallbacks(this.c);
            }
            z.d(NativeController.e, "onSuccess");
            ae.a((List<CampaignEx>) campaignUnit.getAds());
            if (campaignUnit != null && campaignUnit.getAds() != null && campaignUnit.getAds().size() > 0) {
                NativeController.this.q = campaignUnit.getSessionId();
                ArrayList arrayList = new ArrayList();
                ArrayList arrayList2 = new ArrayList();
                ArrayList arrayList3 = new ArrayList();
                if (NativeController.this.Y <= 0) {
                    if (NativeController.this.Y == -3) {
                        NativeController.this.Y = campaignUnit.getAds().size();
                    } else {
                        NativeController nativeController = NativeController.this;
                        nativeController.Y = nativeController.t;
                    }
                    if (NativeController.this.ab != 0 && campaignUnit.getTemplate() == 2) {
                        NativeController nativeController2 = NativeController.this;
                        nativeController2.Y = nativeController2.ab;
                    }
                    if (NativeController.this.ac != 0 && campaignUnit.getTemplate() == 3) {
                        NativeController nativeController3 = NativeController.this;
                        nativeController3.Y = nativeController3.ac;
                    }
                }
                boolean z = false;
                for (int i = 0; i < campaignUnit.getAds().size(); i++) {
                    CampaignEx campaignEx = campaignUnit.getAds().get(i);
                    campaignEx.setCampaignUnitId(this.unitId);
                    if (!TextUtils.isEmpty(NativeController.this.V)) {
                        campaignEx.setBidToken(NativeController.this.V);
                        campaignEx.setIsBidCampaign(true);
                    }
                    if (NativeController.B) {
                        campaignEx.loadIconUrlAsyncWithBlock(null);
                        campaignEx.loadImageUrlAsyncWithBlock(null);
                    }
                    if (campaignEx != null) {
                        boolean zC = ae.c(NativeController.this.i, campaignEx.getPackageName());
                        if (zC && com.mbridge.msdk.foundation.controller.a.e() != null) {
                            com.mbridge.msdk.foundation.controller.a.e().add(new com.mbridge.msdk.foundation.entity.i(campaignEx.getId(), campaignEx.getPackageName()));
                            z = true;
                        }
                        if (i < NativeController.this.t && campaignEx.getOfferType() != 99) {
                            if (ae.b(campaignEx)) {
                                campaignEx.setRtinsType(zC ? 1 : 2);
                            }
                            if (campaignEx.getWtick() == 1 || !zC) {
                                arrayList.add(campaignEx);
                                if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                                    arrayList3.add(campaignEx);
                                }
                            } else if (ae.b(campaignEx)) {
                                arrayList.add(campaignEx);
                                if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                                    arrayList3.add(campaignEx);
                                }
                            } else {
                                ae.a(this.unitId, campaignEx, com.mbridge.msdk.foundation.same.a.E);
                            }
                        }
                        if (i < NativeController.this.Y && campaignEx.getOfferType() != 99) {
                            if (ae.b(campaignEx)) {
                                campaignEx.setRtinsType(zC ? 1 : 2);
                            }
                            if (!zC || ae.b(campaignEx)) {
                                arrayList2.add(campaignEx);
                            }
                        }
                        if (!lVarA.a(campaignEx.getId())) {
                            h hVar = new h();
                            hVar.a(campaignEx.getId());
                            hVar.a(campaignEx.getFca());
                            hVar.b(campaignEx.getFcb());
                            hVar.d(0);
                            hVar.c(0);
                            hVar.a(System.currentTimeMillis());
                            lVarA.a(hVar);
                        }
                    }
                }
                NativeController.b(NativeController.this, arrayList3);
                if (z) {
                    com.mbridge.msdk.foundation.controller.a.f().h();
                }
                int type = campaignUnit.getAds().get(0) != null ? campaignUnit.getAds().get(0).getType() : 1;
                com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = com.mbridge.msdk.mbnative.a.f.a(type);
                if (bVarA != null) {
                    bVarA.a(this.unitId, arrayList2, NativeController.this.V);
                }
                if (arrayList.size() == 0) {
                    if (NativeController.this.x || type != 1) {
                        NativeController.this.a(com.tkay.expressad.reward.a.d.f7047a, b(), a());
                        return;
                    }
                    return;
                }
                if (NativeController.this.x || type != 1) {
                    NativeController nativeController4 = NativeController.this;
                    nativeController4.a((List<Campaign>) nativeController4.a(type, (List<Campaign>) nativeController4.d(arrayList)));
                }
                if (!NativeController.this.y && NativeController.this.z && !NativeController.this.x) {
                    NativeController nativeController5 = NativeController.this;
                    nativeController5.a((List<Campaign>) nativeController5.a(type, (List<Campaign>) nativeController5.d(arrayList)));
                }
                if (com.mbridge.msdk.mbnative.controller.b.b().containsKey(this.unitId) && com.mbridge.msdk.mbnative.controller.b.b().get(this.unitId).booleanValue()) {
                    com.mbridge.msdk.mbnative.controller.b.a(NativeController.this.u, this.unitId);
                    return;
                }
                int iIntValue = com.mbridge.msdk.mbnative.controller.b.e().containsKey(this.unitId) ? com.mbridge.msdk.mbnative.controller.b.e().get(this.unitId).intValue() : 1;
                int i2 = NativeController.this.t + NativeController.this.v;
                NativeController.this.v = i2 <= iIntValue ? i2 : 0;
                return;
            }
            this.unitId = "0_" + this.unitId;
            com.mbridge.msdk.mbnative.controller.b.b(NativeController.this.u, this.unitId);
            NativeController.this.v = 0;
        }

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void a(int i, String str) {
            NativeController.this.aa = true;
            if (this.b) {
                if (NativeController.this.y || !this.d) {
                    return;
                }
                z.b(NativeController.e, "onFailed onnative fail");
                NativeController.this.a(str, b(), a());
                return;
            }
            if (i == -1) {
                com.mbridge.msdk.mbnative.controller.b.b(NativeController.this.u, this.unitId);
                NativeController.this.v = 0;
            }
            if (this.c != null) {
                z.b(NativeController.e, "REMOVE CANCEL TASK ON onFailed");
                NativeController.this.o.removeCallbacks(this.c);
            }
            if (NativeController.this.y) {
                return;
            }
            if (b() == 1 || this.d) {
                NativeController.this.a(str, b(), a());
            }
        }

        public final void a(Runnable runnable) {
            this.c = runnable;
        }

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void b(List<Frame> list) {
            if (this.b) {
                return;
            }
            if (this.c != null) {
                z.b(NativeController.e, "REMOVE CANCEL TASK ON onAdLoaded");
                NativeController.this.o.removeCallbacks(this.c);
            }
            if (list == null || list.size() == 0) {
                if (NativeController.this.g != null) {
                    NativeController.this.y = true;
                    NativeController.this.g.onAdLoadError("frame is empty");
                    return;
                }
                return;
            }
            Iterator<Frame> it = list.iterator();
            while (it.hasNext()) {
                List<CampaignEx> campaigns = it.next().getCampaigns();
                if (campaigns == null || campaigns.size() == 0) {
                    if (NativeController.this.g != null) {
                        NativeController.this.y = true;
                        NativeController.this.g.onAdLoadError("ads in frame is empty");
                        return;
                    }
                    return;
                }
                for (CampaignEx campaignEx : campaigns) {
                    if (NativeController.B) {
                        campaignEx.loadImageUrlAsyncWithBlock(null);
                        campaignEx.loadIconUrlAsyncWithBlock(null);
                    }
                }
            }
            if (NativeController.this.g != null) {
                NativeController.this.g.onAdFramesLoaded(list);
            }
        }
    }

    public final List<Campaign> b(String str, int i, String str2) {
        int i2;
        int i3;
        List<Campaign> listA = null;
        if (this.f3749a != null) {
            ArrayList arrayList = new ArrayList(this.f3749a);
            for (int i4 = 0; i4 < arrayList.size(); i4++) {
                com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = com.mbridge.msdk.mbnative.a.f.a(((Integer) arrayList.get(i4)).intValue());
                if (bVarA != null) {
                    if ((((Integer) arrayList.get(i4)).intValue() == 1 || ((Integer) arrayList.get(i4)).intValue() == 2) && this.d.containsKey("native_info")) {
                        i3 = this.M;
                    } else {
                        i3 = this.s;
                    }
                    listA = a(((Integer) arrayList.get(i4)).intValue(), bVarA.b(str, i3));
                    if (listA != null) {
                        break;
                    }
                }
            }
            if (listA == null) {
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA2 = com.mbridge.msdk.mbnative.a.f.a(((Integer) arrayList.get(i5)).intValue());
                    if ((((Integer) arrayList.get(i5)).intValue() == 1 || ((Integer) arrayList.get(i5)).intValue() == 2) && this.d.containsKey("native_info")) {
                        i2 = this.M;
                    } else {
                        i2 = this.s;
                    }
                    listA = a(((Integer) arrayList.get(i5)).intValue(), bVarA2.a(str, i2));
                    if (listA != null) {
                        break;
                    }
                }
            }
        }
        return d(listA);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(final List<Campaign> list) {
        if ((!TextUtils.isEmpty(this.V) && list != null && list.size() == 0) || list == null || list.size() <= 0) {
            return false;
        }
        final com.mbridge.msdk.mbnative.c.a aVar = this.g;
        if (aVar == null) {
            return true;
        }
        CampaignEx campaignEx = (CampaignEx) list.get(0);
        final int template = campaignEx != null ? campaignEx.getTemplate() : 2;
        l lVarA = l.a(i.a(this.i));
        lVarA.b();
        for (int i = 0; i < list.size(); i++) {
            CampaignEx campaignEx2 = (CampaignEx) list.get(i);
            if (!lVarA.a(campaignEx2.getId())) {
                h hVar = new h();
                hVar.a(campaignEx2.getId());
                hVar.a(campaignEx2.getFca());
                hVar.b(campaignEx2.getFcb());
                hVar.d(0);
                hVar.c(0);
                hVar.a(System.currentTimeMillis());
                lVarA.a(hVar);
            }
        }
        int type = campaignEx.getType();
        if (this.S && this.R && type != 3 && type != 6 && type != 7) {
            if (e().h() == 3) {
                final List<Campaign> listB = b(list);
                if (list != null && list.size() > 0) {
                    a(list, new b() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.13
                        @Override // com.mbridge.msdk.mbnative.controller.NativeController.b
                        public final void a() {
                            List listA = NativeController.a(NativeController.this, listB, true);
                            if (listA == null || listA.size() <= 0) {
                                NativeController.this.a(aVar, "has no ads");
                            } else {
                                NativeController.this.a((List<Campaign>) listA, template, aVar);
                            }
                        }
                    });
                    return true;
                }
                a(aVar, "has no ads");
                return true;
            }
            List<Campaign> listC = c(list);
            if (listC != null && listC.size() > 0) {
                a(listC, new b() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.14
                    @Override // com.mbridge.msdk.mbnative.controller.NativeController.b
                    public final void a() {
                        List listA = NativeController.a(NativeController.this, list, false);
                        if (listA == null || listA.size() <= 0) {
                            NativeController.this.a(aVar, "has no ads");
                        } else {
                            NativeController.this.a((List<Campaign>) listA, template, aVar);
                        }
                    }
                });
                return true;
            }
            a(list, template, aVar);
            return true;
        }
        if (list != null && list.size() > 0) {
            Iterator<Campaign> it = list.iterator();
            while (it.hasNext()) {
                it.next().setVideoLength(0);
            }
            a(list, template, aVar);
            return true;
        }
        a(aVar, "has no ads");
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final List<Campaign> list, final int i, final NativeListener.NativeAdListener nativeAdListener) {
        this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.15
            @Override // java.lang.Runnable
            public final void run() {
                List list2 = list;
                if (list2 != null && list2.size() > 0) {
                    CampaignEx campaignEx = (CampaignEx) list.get(0);
                    NativeController.this.T = campaignEx.getRequestId();
                }
                NativeController.this.y = true;
                nativeAdListener.onAdLoaded(list, i);
                com.mbridge.msdk.mbnative.d.a.a(NativeController.this.i, list, NativeController.this.j);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final NativeListener.NativeAdListener nativeAdListener, final String str) {
        this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.2
            @Override // java.lang.Runnable
            public final void run() {
                nativeAdListener.onAdLoadError(str);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<Campaign> a(int i, List<Campaign> list) {
        if (i != 1 || !this.d.containsKey("native_info") || list == null || list.size() <= 0) {
            return list;
        }
        CampaignEx campaignEx = (CampaignEx) list.get(0);
        int template = campaignEx != null ? campaignEx.getTemplate() : 1;
        if (template == 2) {
            if (list == null) {
                return list;
            }
            int size = list.size();
            int i2 = this.ab;
            return size >= i2 ? list.subList(0, i2) : list;
        }
        if (template != 3 || list == null) {
            return list;
        }
        int size2 = list.size();
        int i3 = this.ac;
        return size2 >= i3 ? list.subList(0, i3) : list;
    }

    private void a(final long j, final int i, final boolean z, final String str, final String str2) {
        final UUID uuidG = v.G();
        if (uuidG == null) {
            this.H.put(str + "_" + z + "_ttc", false);
            this.H.put(str + "_" + z + "_post", false);
        } else {
            this.H.put(uuidG + str + "_" + z + "_ttc", false);
            this.H.put(uuidG + str + "_" + z + "_post", false);
        }
        final com.mbridge.msdk.foundation.same.e.a aVar = new com.mbridge.msdk.foundation.same.e.a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.3
            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void cancelTask() {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void pauseTask(boolean z2) {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void runTask() {
                if (NativeController.this.O == null) {
                    NativeController nativeController = NativeController.this;
                    nativeController.O = i.a(nativeController.i);
                }
                com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(NativeController.this.O);
                cVarA.a();
                NativeController.this.N = cVarA.a(str);
                if (NativeController.this.H == null || NativeController.this.H.isEmpty()) {
                    return;
                }
                if (uuidG == null) {
                    if (NativeController.this.H.containsKey(str + "_" + z + "_ttc")) {
                        NativeController.this.H.put(str + "_" + z + "_ttc", true);
                        return;
                    }
                }
                if (uuidG != null) {
                    if (NativeController.this.H.containsKey(uuidG + str + "_" + z + "_ttc")) {
                        NativeController.this.H.put(uuidG + str + "_" + z + "_ttc", true);
                    }
                }
            }
        };
        this.o.postDelayed(new com.mbridge.msdk.foundation.same.e.a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.4
            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void cancelTask() {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void pauseTask(boolean z2) {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void runTask() {
                boolean zBooleanValue = false;
                if (NativeController.this.H != null && !NativeController.this.H.isEmpty()) {
                    if (NativeController.this.H.containsKey(str + "_" + z + "_ttc")) {
                        zBooleanValue = ((Boolean) NativeController.this.H.get(str + "_" + z + "_ttc")).booleanValue();
                        NativeController.this.H.remove(str + "_" + z + "_ttc");
                    }
                    if (NativeController.this.H.containsKey(uuidG + str + "_" + z + "_ttc")) {
                        zBooleanValue = ((Boolean) NativeController.this.H.get(uuidG + str + "_" + z + "_ttc")).booleanValue();
                        NativeController.this.H.remove(uuidG + str + "_" + z + "_ttc");
                    }
                }
                if (zBooleanValue) {
                    return;
                }
                NativeController.this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.4.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (NativeController.this.H != null && !NativeController.this.H.isEmpty()) {
                            if (NativeController.this.H.containsKey(str + "_" + z + "_post")) {
                                NativeController.this.H.put(str + "_" + z + "_post", true);
                            }
                            if (NativeController.this.H.containsKey(uuidG + str + "_" + z + "_post")) {
                                NativeController.this.H.put(uuidG + str + "_" + z + "_post", true);
                            }
                        }
                        if (z) {
                            NativeController.this.x = true;
                        } else {
                            NativeController.this.x = false;
                        }
                        if (NativeController.this.G != null) {
                            NativeController.this.G.a(aVar);
                        }
                        NativeController.this.a(1, j, i, str2);
                    }
                });
            }
        }, 90000L);
        a.b bVar = new a.b() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.5
            @Override // com.mbridge.msdk.foundation.same.e.a.b
            public final void a(a.EnumC0259a enumC0259a) {
                if (enumC0259a == a.EnumC0259a.FINISH) {
                    NativeController.this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.5.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            if (z) {
                                NativeController.this.x = true;
                            }
                            boolean zBooleanValue = false;
                            if (NativeController.this.H != null && !NativeController.this.H.isEmpty()) {
                                if (NativeController.this.H.containsKey(str + "_" + z + "_post")) {
                                    zBooleanValue = ((Boolean) NativeController.this.H.get(str + "_" + z + "_post")).booleanValue();
                                    NativeController.this.H.remove(str + "_" + z + "_post");
                                }
                                if (NativeController.this.H.containsKey(uuidG + str + "_" + z + "_post")) {
                                    zBooleanValue = ((Boolean) NativeController.this.H.get(uuidG + str + "_" + z + "_post")).booleanValue();
                                    NativeController.this.H.remove(uuidG + str + "_" + z + "_post");
                                }
                            }
                            if (zBooleanValue) {
                                return;
                            }
                            NativeController.this.a(1, j, i, str2);
                        }
                    });
                }
            }
        };
        if (this.G == null) {
            this.G = new com.mbridge.msdk.foundation.same.e.b(this.i);
        }
        com.mbridge.msdk.foundation.same.e.b bVar2 = this.G;
        if (bVar2 != null) {
            bVar2.a(aVar, bVar);
        }
    }

    public static boolean a(Map<String, Object> map) {
        if (map != null) {
            try {
                if (map.containsKey("app_id") && map.containsKey("app_key") && map.containsKey(MBridgeConstans.KEY_WORD) && map.get(MBridgeConstans.KEY_WORD) != null) {
                    z.b(e, "有smart 参数");
                    return true;
                }
            } catch (Exception e2) {
                z.d(e, com.mbridge.msdk.mbnative.b.a.a(e2));
            }
        }
        z.b(e, "木有smart 参数");
        return false;
    }

    public static List<String> b(Map<String, Object> map) {
        ArrayList arrayList = null;
        try {
            if (!(map.get(MBridgeConstans.KEY_WORD) instanceof String)) {
                return null;
            }
            String str = (String) map.get(MBridgeConstans.KEY_WORD);
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray.length() == 0) {
                return null;
            }
            ArrayList arrayList2 = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                try {
                    JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                    if (jSONObjectOptJSONObject != null) {
                        String strOptString = jSONObjectOptJSONObject.optString("p");
                        if (!TextUtils.isEmpty(strOptString)) {
                            arrayList2.add(strOptString);
                        }
                    }
                } catch (Exception e2) {
                    e = e2;
                    arrayList = arrayList2;
                }
            }
            return arrayList2;
        } catch (Exception e3) {
            e = e3;
        }
        z.d(e, com.mbridge.msdk.mbnative.b.a.a(e));
        return arrayList;
    }

    private static class d implements H5DownLoadManager.IH5SourceDownloadListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f3769a;
        private CampaignEx b;
        private long c = System.currentTimeMillis();
        private boolean d;

        public d(String str, CampaignEx campaignEx, boolean z) {
            this.d = true;
            this.f3769a = str;
            this.b = campaignEx;
            this.d = z;
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onSuccess(String str) {
            try {
                if (this.d) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
                    com.mbridge.msdk.foundation.db.t.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    p pVar = new p(r.k, 20, jCurrentTimeMillis + "", str, this.b.getId(), this.f3769a, "", "2");
                    if (this.b != null && !TextUtils.isEmpty(this.b.getId())) {
                        pVar.n(this.b.getId());
                    }
                    if (this.b != null) {
                        pVar.b(this.b.getAdSpaceT());
                        pVar.k(this.b.getRequestId());
                        pVar.l(this.b.getRequestIdNotice());
                    }
                    pVar.h("1");
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.f3769a);
                }
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onFailed(String str, String str2) {
            try {
                if (this.d) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
                    com.mbridge.msdk.foundation.db.t.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    p pVar = new p(r.k, 21, jCurrentTimeMillis + "", str, this.b.getId(), this.f3769a, str2, "2");
                    pVar.k(this.b.getRequestId());
                    pVar.l(this.b.getRequestIdNotice());
                    if (this.b != null && !TextUtils.isEmpty(this.b.getId())) {
                        pVar.n(this.b.getId());
                    }
                    if (this.b != null) {
                        pVar.b(this.b.getAdSpaceT());
                    }
                    pVar.h("1");
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.f3769a);
                }
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }
    }

    private static final class g implements H5DownLoadManager.ZipDownloadListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f3772a;
        CampaignEx b;
        private long c = System.currentTimeMillis();
        private boolean d;

        public g(String str, CampaignEx campaignEx, boolean z) {
            this.d = true;
            this.f3772a = str;
            this.b = campaignEx;
            this.d = z;
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onSuccess(String str) {
            try {
                if (this.d) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
                    com.mbridge.msdk.foundation.db.t.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    p pVar = new p(r.k, 14, jCurrentTimeMillis + "", str, this.b.getId(), this.f3772a, "", "1");
                    if (this.b != null && !TextUtils.isEmpty(this.b.getId())) {
                        pVar.n(this.b.getId());
                    }
                    if (this.b != null) {
                        pVar.b(this.b.getAdSpaceT());
                        pVar.k(this.b.getRequestId());
                        pVar.l(this.b.getRequestIdNotice());
                    }
                    pVar.h("2");
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.f3772a);
                }
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }

        @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
        public final void onFailed(String str, String str2) {
            try {
                if (this.d) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - this.c;
                    com.mbridge.msdk.foundation.db.t.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                    p pVar = new p(r.k, 3, jCurrentTimeMillis + "", str2, this.b.getId(), this.f3772a, str, "1");
                    if (this.b != null && !TextUtils.isEmpty(this.b.getId())) {
                        pVar.n(this.b.getId());
                    }
                    if (this.b != null) {
                        pVar.b(this.b.getAdSpaceT());
                        pVar.k(this.b.getRequestId());
                        pVar.l(this.b.getRequestIdNotice());
                    }
                    pVar.h("2");
                    com.mbridge.msdk.foundation.same.report.c.a(pVar, this.f3772a);
                }
            } catch (Exception e) {
                z.d(NativeController.e, com.mbridge.msdk.mbnative.b.a.a(e));
            }
        }
    }

    public static void insertExcludeId(String str, CampaignEx campaignEx) {
        if (TextUtils.isEmpty(str) || campaignEx == null || com.mbridge.msdk.foundation.controller.a.f().j() == null) {
            return;
        }
        k kVarA = k.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        com.mbridge.msdk.foundation.entity.g gVar = new com.mbridge.msdk.foundation.entity.g();
        gVar.a(System.currentTimeMillis());
        gVar.b(str);
        gVar.a(campaignEx.getId());
        kVarA.a(gVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public com.mbridge.msdk.c.d e() {
        com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e("", this.j);
        this.W = dVarE;
        if (dVarE == null) {
            this.W = com.mbridge.msdk.c.d.d(this.j);
        }
        return this.W;
    }

    private List<Campaign> b(List<Campaign> list) {
        if (list != null) {
            CampaignEx campaignEx = null;
            for (int size = list.size() - 1; size >= 0; size--) {
                try {
                    campaignEx = (CampaignEx) list.get(size);
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                if (campaignEx != null && TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                    Campaign campaignRemove = list.remove(size);
                    com.mbridge.msdk.mbnative.a.f.a(campaignEx.getType()).a(this.j, campaignRemove, this.V);
                    z.a(e, "remove no videoURL ads:" + campaignRemove);
                }
            }
        }
        return list;
    }

    private List<Campaign> c(List<Campaign> list) {
        ArrayList arrayList = null;
        if (list != null) {
            for (Campaign campaign : list) {
                if (campaign instanceof CampaignEx) {
                    CampaignEx campaignEx = (CampaignEx) campaign;
                    if (TextUtils.isEmpty(campaignEx.getImageUrl()) && !TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                        if (arrayList == null) {
                            arrayList = new ArrayList();
                        }
                        arrayList.add(campaign);
                    }
                }
            }
        }
        return arrayList;
    }

    private void a(final List<Campaign> list, final b bVar) {
        f();
        final long jCurrentTimeMillis = System.currentTimeMillis();
        Timer timer = new Timer();
        this.U = timer;
        timer.schedule(new TimerTask() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.7
            @Override // java.util.TimerTask, java.lang.Runnable
            public final void run() {
                boolean z;
                z.a(NativeController.e, "search campain status");
                if (System.currentTimeMillis() - jCurrentTimeMillis < 60000) {
                    int iD = v.D(NativeController.this.i);
                    int iK = NativeController.this.e().k();
                    if (iD != 9 && iK == 2) {
                        bVar.a();
                        NativeController.this.f();
                        return;
                    }
                    if (iK == 3) {
                        bVar.a();
                        NativeController.this.f();
                        return;
                    }
                    loop0: while (true) {
                        z = false;
                        for (Campaign campaign : list) {
                            String id = campaign.getId();
                            if (campaign instanceof CampaignEx) {
                                StringBuilder sb = new StringBuilder();
                                sb.append(id);
                                CampaignEx campaignEx = (CampaignEx) campaign;
                                sb.append(campaignEx.getVideoUrlEncode());
                                sb.append(campaignEx.getBidToken());
                                id = sb.toString();
                            }
                            com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(NativeController.this.j, id);
                            if (aVarA == null || !com.mbridge.msdk.videocommon.download.d.a(aVarA, NativeController.this.e().f())) {
                                break;
                            } else {
                                z = true;
                            }
                        }
                    }
                    if (z) {
                        bVar.a();
                        NativeController.this.f();
                        return;
                    }
                    return;
                }
                bVar.a();
                NativeController.this.f();
            }
        }, 0L, 1000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        Timer timer = this.U;
        if (timer != null) {
            timer.cancel();
            this.U = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<Campaign> d(List<Campaign> list) {
        if (list == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(list.size());
        ArrayList arrayList2 = new ArrayList(list.size());
        for (Campaign campaign : list) {
            if (campaign instanceof CampaignEx) {
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (TextUtils.isEmpty(this.V) && TextUtils.isEmpty(campaignEx.getBidToken()) && !campaignEx.isBidCampaign()) {
                    arrayList2.add(campaignEx);
                } else if (!TextUtils.isEmpty(this.V) && TextUtils.equals(campaignEx.getBidToken(), this.V)) {
                    arrayList.add(campaign);
                }
            } else {
                arrayList2.add(campaign);
            }
        }
        return TextUtils.isEmpty(this.V) ? arrayList2 : arrayList;
    }

    public final String b() {
        return this.T;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0042  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:15:0x0039 -> B:16:0x0042). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ void a(com.mbridge.msdk.mbnative.controller.NativeController r7, android.content.Context r8, final com.mbridge.msdk.foundation.entity.CampaignEx r9) {
        /*
            if (r9 == 0) goto L42
            boolean r0 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            com.mbridge.msdk.mbnative.controller.NativeController$9 r6 = new com.mbridge.msdk.mbnative.controller.NativeController$9     // Catch: java.lang.Throwable -> L38
            r6.<init>()     // Catch: java.lang.Throwable -> L38
            boolean r0 = com.mbridge.msdk.click.c.a(r9)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            boolean r0 = r9.needShowIDialog()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L42
            com.mbridge.msdk.click.b r0 = r7.r     // Catch: java.lang.Throwable -> L38
            boolean r0 = r0.b(r9)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L2f
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = ""
            java.lang.String r5 = r7.j     // Catch: java.lang.Throwable -> L38
            r3 = r9
            r4 = r8
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L38
            goto L51
        L2f:
            r7.a(r9)     // Catch: java.lang.Throwable -> L38
            com.mbridge.msdk.mbnative.c.a r8 = r7.g     // Catch: java.lang.Throwable -> L38
            r8.onAdClick(r9)     // Catch: java.lang.Throwable -> L38
            goto L51
        L38:
            r8 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbnative.controller.NativeController.e
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L42:
            com.mbridge.msdk.click.b r8 = r7.r
            r8 = 0
            com.mbridge.msdk.click.b.f3142a = r8
            com.mbridge.msdk.click.b r8 = r7.r
            com.mbridge.msdk.mbnative.c.a r0 = r7.g
            r8.a(r9, r0)
            r7.a(r9)
        L51:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbnative.controller.NativeController.a(com.mbridge.msdk.mbnative.controller.NativeController, android.content.Context, com.mbridge.msdk.foundation.entity.CampaignEx):void");
    }

    static /* synthetic */ void a(NativeController nativeController, final CampaignEx campaignEx, View view, List list, AdSession adSession) {
        try {
            z.d(e, "trackView start");
            a.InterfaceC0273a interfaceC0273a = new a.InterfaceC0273a() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.12
                @Override // com.mbridge.msdk.mbnative.controller.a.InterfaceC0273a
                public final void a(ArrayList<View> arrayList, ArrayList<View> arrayList2) {
                    z.d(NativeController.e, "trackView onVisibilityChanged");
                    if (arrayList == null || arrayList.size() <= 0) {
                        return;
                    }
                    z.d(NativeController.e, "trackView send");
                    com.mbridge.msdk.mbnative.d.b.a(campaignEx, NativeController.this.i, NativeController.this.j, NativeController.this.g);
                }
            };
            com.mbridge.msdk.mbnative.controller.a aVar = new com.mbridge.msdk.mbnative.controller.a(list, interfaceC0273a, new Handler(Looper.getMainLooper()));
            aVar.a(view);
            if (nativeController.I != null) {
                nativeController.I.add(aVar);
            }
            if (nativeController.J != null) {
                nativeController.J.add(interfaceC0273a);
            }
            if (adSession != null) {
                AdEvents.createAdEvents(adSession).impressionOccurred();
            }
        } catch (Exception unused) {
        }
    }

    static /* synthetic */ void b(NativeController nativeController, List list) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    z.b(e, "===创建下载任务");
                    try {
                        Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
                        Class.forName("com.mbridge.msdk.videocommon.download.b");
                        Class<?> cls = Class.forName("com.mbridge.msdk.videocommon.download.b");
                        Class<?> cls2 = Class.forName("com.mbridge.msdk.videocommon.listener.a");
                        Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
                        if (objInvoke != null) {
                            cls.getMethod("createUnitCache", Context.class, String.class, CopyOnWriteArrayList.class, Integer.TYPE, cls2).invoke(objInvoke, nativeController.i, nativeController.j, new CopyOnWriteArrayList(list), 1, null);
                            cls.getMethod(PointCategory.LOAD, String.class).invoke(objInvoke, nativeController.j);
                        }
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            CampaignEx campaignEx = (CampaignEx) it.next();
                            if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getImageUrl())) {
                                com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getImageUrl(), new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.mbnative.controller.NativeController.6
                                    @Override // com.mbridge.msdk.foundation.same.c.c
                                    public final void onFailedLoad(String str, String str2) {
                                    }

                                    @Override // com.mbridge.msdk.foundation.same.c.c
                                    public final void onSuccessLoad(Bitmap bitmap, String str) {
                                    }
                                });
                            }
                            try {
                                String str = campaignEx.getendcard_url();
                                if (!TextUtils.isEmpty(str)) {
                                    if (str.contains(".zip") && str.contains("md5filename")) {
                                        H5DownLoadManager.getInstance().downloadH5Res(str, new g(nativeController.j, campaignEx, TextUtils.isEmpty(H5DownLoadManager.getInstance().getH5ResAddress(str))));
                                    } else {
                                        H5DownLoadManager.getInstance().downloadH5Res(str, new d(nativeController.j, campaignEx, TextUtils.isEmpty(HTMLResourceManager.getInstance().getHtmlContentFromUrl(str))));
                                    }
                                }
                            } catch (Exception unused) {
                            }
                        }
                        return;
                    } catch (Throwable unused2) {
                        z.d(e, "please import the videocommon and nativex aar");
                        return;
                    }
                }
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    th.printStackTrace();
                    return;
                }
                return;
            }
        }
        z.b(e, "onload 不用下载视频素材 size为0");
    }

    static /* synthetic */ List a(NativeController nativeController, List list, boolean z) {
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                Campaign campaign = (Campaign) list.get(size);
                String id = campaign.getId();
                boolean z2 = campaign instanceof CampaignEx;
                if (z2) {
                    StringBuilder sb = new StringBuilder();
                    sb.append(id);
                    CampaignEx campaignEx = (CampaignEx) campaign;
                    sb.append(campaignEx.getVideoUrlEncode());
                    sb.append(campaignEx.getBidToken());
                    id = sb.toString();
                }
                com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(nativeController.j, id);
                if (z) {
                    if (aVarA == null || !com.mbridge.msdk.videocommon.download.d.a(aVarA, nativeController.e().f())) {
                        com.mbridge.msdk.mbnative.a.f.a(campaign.getType()).a(nativeController.j, (Campaign) list.remove(size), nativeController.V);
                    }
                } else if (z2) {
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (TextUtils.isEmpty(campaignEx2.getImageUrl()) && !TextUtils.isEmpty(campaignEx2.getVideoUrlEncode()) && (aVarA == null || !com.mbridge.msdk.videocommon.download.d.a(aVarA, nativeController.e().f()))) {
                        com.mbridge.msdk.mbnative.a.f.a(campaign.getType()).a(nativeController.j, (Campaign) list.remove(size), nativeController.V);
                    }
                }
            }
        }
        return list;
    }
}
