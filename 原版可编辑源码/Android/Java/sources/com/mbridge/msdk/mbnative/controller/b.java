package com.mbridge.msdk.mbnative.controller;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import com.loc.at;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.entity.m;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbnative.a.f;
import com.mbridge.msdk.out.AdMobClickListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.PreloadListener;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.core.c.d;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.UUID;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    private static final String d = b.class.getSimpleName();
    private static Map<String, Map<Long, Object>> e = new HashMap();
    private static Map<String, Boolean> f = new HashMap();
    private static Map<String, m> g = new HashMap();
    private static Map<String, Integer> h = new HashMap();
    private static Map<String, Integer> i = new HashMap();
    private static b j = null;
    private static int w = -1;
    private static int x = -2;
    private int A;
    protected List<Integer> c;
    private com.mbridge.msdk.c.c k;
    private com.mbridge.msdk.click.b l;
    private com.mbridge.msdk.c.d m;
    private String n;
    private Handler o;
    private i r;
    private Map<String, Object> s;
    private List<Integer> t;
    private List<Integer> u;
    private boolean v;
    private boolean y;
    private int z;
    Queue<Integer> a = null;
    Queue<Long> b = null;
    private int p = 0;
    private String q = "";
    private Map<String, Boolean> C = new HashMap();
    private com.mbridge.msdk.foundation.same.e.b B = new com.mbridge.msdk.foundation.same.e.b(com.mbridge.msdk.foundation.controller.a.f().j());

    public b() {
        if (Looper.myLooper() == null) {
            Looper.prepare();
        }
        this.o = new Handler() {
            @Override
            public final void handleMessage(Message message) {
            }
        };
    }

    /* JADX WARN: Removed duplicated region for block: B:117:0x02e7  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(Map<String, Object> map, int i2, AdMobClickListener adMobClickListener) {
        String str;
        String str2;
        String str3;
        String str4;
        com.mbridge.msdk.b.a.a aVar;
        String str5;
        com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA;
        com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA2;
        List<Campaign> listB;
        Object obj;
        try {
            this.s = map;
            this.y = false;
            if (!map.containsKey("unit_id")) {
                z.c(d, "preload error,make sure you have unitid");
                return;
            }
            String str6 = (String) map.get("unit_id");
            if (e.containsKey(((i2 + 1) % 2) + "_" + str6)) {
                if (!e.containsKey(i2 + "_" + str6)) {
                    z.d(d, "An id can have only one AD form");
                    return;
                }
            }
            if (TextUtils.isEmpty(str6)) {
                z.c(d, "preload error,make sure you have correct unitid");
                return;
            }
            if (map.containsKey("isPreloadImg")) {
                this.v = ((Boolean) map.get("isPreloadImg")).booleanValue();
            }
            if (this.l == null) {
                this.l = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), str6);
            } else {
                this.l.a(str6);
            }
            if (map.containsKey("ad_frame_num")) {
                this.p = ((Integer) map.get("ad_frame_num")).intValue();
            }
            if (map.containsKey("catetory")) {
                this.n = (String) map.get("catetory");
            }
            if (f.containsKey(str6) && f.get(str6).booleanValue()) {
                Map<String, Map<Long, Object>> map2 = e;
                Map<Long, Object> map3 = map2.get(i2 + "_" + str6);
                com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (map3 != null && map3.size() > 0) {
                    Long next = map3.keySet().iterator().next();
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (aVarB == null) {
                        aVarB = com.mbridge.msdk.c.b.a().b();
                    }
                    if (jCurrentTimeMillis - next.longValue() >= aVarB.ag() * 1000) {
                        map2.remove(str6);
                    } else if (i2 == 1) {
                        return;
                    }
                }
            }
            f.put(str6, true);
            this.A = 1;
            try {
                if (map.containsKey("ad_num")) {
                    int iIntValue = ((Integer) map.get("ad_num")).intValue();
                    this.A = iIntValue;
                    if (iIntValue < 1) {
                        this.A = 1;
                    }
                    if (this.A > 10) {
                        this.A = 10;
                    }
                }
            } catch (Exception unused) {
                z.d(d, "ADNUM MUST BE INTEGER");
            }
            h.put(str6, Integer.valueOf(this.A));
            com.mbridge.msdk.b.a.a aVar2 = (!map.containsKey(MBridgeConstans.PRELOAD_RESULT_LISTENER) || (obj = map.get(MBridgeConstans.PRELOAD_RESULT_LISTENER)) == null) ? null : new com.mbridge.msdk.b.a.a((PreloadListener) obj);
            if (map.containsKey("app_id") && map.containsKey("app_key") && map.containsKey(MBridgeConstans.KEY_WORD)) {
                str2 = (String) map.get("app_id");
                str = (String) map.get("app_key");
            } else {
                str = null;
                str2 = null;
            }
            if (this.k == null) {
                this.k = new com.mbridge.msdk.c.c();
            }
            this.k.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, str6);
            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(str2, str6);
            this.m = dVarE;
            if (dVarE == null) {
                this.m = com.mbridge.msdk.c.d.d(str6);
            }
            if (map.containsKey(MBridgeConstans.PLACEMENT_ID) && map.get(MBridgeConstans.PLACEMENT_ID) != null) {
                String str7 = (String) map.get(MBridgeConstans.PLACEMENT_ID);
                str3 = TextUtils.isEmpty(str7) ? "" : str7;
            }
            this.t = this.m.r();
            this.c = this.m.s();
            this.u = this.m.s();
            if (this.t == null || this.t.size() <= 0) {
                com.mbridge.msdk.b.a.a aVar3 = aVar2;
                if (aVar3 != null) {
                    aVar3.onPreloadFaild("don't have sorceList");
                    return;
                }
                return;
            }
            this.a = new LinkedList();
            Iterator<Integer> it = this.t.iterator();
            while (it.hasNext()) {
                this.a.add(it.next());
            }
            if (this.u != null && this.u.size() > 0) {
                this.b = new LinkedList();
                Iterator<Integer> it2 = this.u.iterator();
                while (it2.hasNext()) {
                    this.b.add(Long.valueOf(it2.next().intValue() * 1000));
                }
            }
            if (this.t.contains(1) && i2 == 0) {
                try {
                    str4 = "";
                    com.mbridge.msdk.b.a.a aVar4 = aVar2;
                    str5 = str6;
                    try {
                        a(1, this.c.get(this.t.indexOf(1)).intValue() * 1000, i2, str6, str3, false, aVar2, adMobClickListener);
                        bVarA2 = f.a(1);
                    } catch (Exception unused2) {
                    }
                    if (bVarA2 == null || (listB = bVarA2.b(str5, 0)) == null) {
                        aVar = aVar4;
                    } else if (listB.size() > 0) {
                        aVar = aVar4;
                        try {
                            a(true, aVar, (String) null);
                        } catch (Exception unused3) {
                        }
                    }
                } catch (Exception unused4) {
                    str4 = "";
                    aVar = aVar2;
                    str5 = str6;
                }
            } else {
                str4 = "";
                aVar = aVar2;
                str5 = str6;
            }
            a(i2, this.m, str5, str3, aVar, adMobClickListener);
            i.put(str5, Integer.valueOf(this.m != null ? this.m.v() * this.A : 1));
            try {
                Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
                Class.forName("com.mbridge.msdk.videocommon.download.b");
                c.a(com.mbridge.msdk.foundation.controller.a.f().j(), str5);
                x.b();
                if (TextUtils.isEmpty(str5)) {
                    return;
                }
                com.mbridge.msdk.foundation.db.f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a();
                int iA = a(map.containsKey("native_info") ? (String) map.get("native_info") : null);
                if (iA <= 0) {
                    iA = this.A;
                }
                com.mbridge.msdk.c.d dVarE2 = com.mbridge.msdk.c.b.a().e(str4, str5);
                this.m = dVarE2;
                if (dVarE2 == null) {
                    this.m = com.mbridge.msdk.c.d.d(str5);
                }
                List<Integer> listR = this.m.r();
                this.t = listR;
                List<Campaign> listB2 = (listR == null || listR.size() <= 0 || !this.t.contains(1) || (bVarA = f.a(1)) == null) ? null : bVarA.b(str5, iA);
                if (listB2 != null) {
                    ArrayList arrayList = new ArrayList();
                    for (int i3 = 0; i3 < listB2.size(); i3++) {
                        CampaignEx campaignEx = (CampaignEx) listB2.get(i3);
                        if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                            arrayList.add(campaignEx);
                        }
                    }
                    if (arrayList.size() > 0) {
                        Class<?> cls = Class.forName("com.mbridge.msdk.videocommon.download.b");
                        Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
                        cls.getMethod("createUnitCache", Context.class, String.class, CopyOnWriteArrayList.class, Integer.TYPE, Class.forName("com.mbridge.msdk.videocommon.listener.a")).invoke(objInvoke, com.mbridge.msdk.foundation.controller.a.f().j(), str5, new CopyOnWriteArrayList(arrayList), 1, null);
                        cls.getMethod(PointCategory.LOAD, String.class).invoke(objInvoke, str5);
                    }
                }
            } catch (Throwable unused5) {
                z.d(d, "init cam cache failed");
            }
        } catch (Exception e2) {
            z.d(d, com.mbridge.msdk.mbnative.b.a.a(e2));
        }
    }

    private int a(String str) {
        if (str == null) {
            return 0;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray.length() > 0) {
                for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                    JSONObject jSONObject = (JSONObject) jSONArray.opt(i2);
                    if (2 == jSONObject.optInt("id", 0)) {
                        return jSONObject.optInt("ad_num");
                    }
                }
            }
        } catch (Exception e2) {
            z.d(d, com.mbridge.msdk.mbnative.b.a.a(e2));
        }
        return 0;
    }

    private void a(int i2, com.mbridge.msdk.c.d dVar, String str, String str2, com.mbridge.msdk.b.a.a aVar, AdMobClickListener adMobClickListener) {
        Queue<Integer> queue = this.a;
        if (queue == null || queue.size() <= 0) {
            return;
        }
        try {
            int iIntValue = this.a.poll().intValue();
            long jLongValue = MBridgeConstans.REQUEST_TIME_OUT;
            if (this.b != null && this.b.size() > 0) {
                jLongValue = this.b.poll().longValue();
            }
            z.b(d, "preload start queue adsource = " + iIntValue);
            a(iIntValue, jLongValue, str, str2, this.s, i2, dVar, aVar, adMobClickListener);
        } catch (Throwable unused) {
            z.d(d, "queue poll exception");
        }
    }

    private void a(int i2, long j2, String str, String str2, Map<String, Object> map, int i3, com.mbridge.msdk.c.d dVar, com.mbridge.msdk.b.a.a aVar, AdMobClickListener adMobClickListener) throws Throwable {
        com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA;
        if (i2 != 1 && (bVarA = f.a(i2)) != null) {
            List<Campaign> listB = bVarA.b(str, this.A);
            if (listB != null && listB.size() > 0) {
                a(true, aVar, (String) null);
                return;
            }
        }
        if (i2 == 1) {
            a(i2, j2, i3, str, str2, true, aVar, adMobClickListener);
        } else if (i2 == 2) {
            a(2, j2, i3, dVar, str, str2, aVar, false, adMobClickListener);
        } else {
            a(i2, j2, i3, dVar, str, str2, aVar, false, adMobClickListener);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:126:0x02bc A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:129:0x02cb A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:139:0x030c A[Catch: Exception -> 0x04e8, LOOP:1: B:137:0x0306->B:139:0x030c, LOOP_END, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:142:0x0323 A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:155:0x0354  */
    /* JADX WARN: Removed duplicated region for block: B:165:0x0389  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x038b A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:169:0x03da A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:172:0x03e5 A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:186:0x0484 A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:189:0x04b6 A[Catch: Exception -> 0x04e8, TryCatch #3 {Exception -> 0x04e8, blocks: (B:3:0x001c, B:6:0x0070, B:8:0x0078, B:10:0x0080, B:12:0x0088, B:14:0x0090, B:16:0x009a, B:17:0x00a4, B:19:0x00ae, B:20:0x00b8, B:22:0x00c2, B:24:0x00cc, B:26:0x00d2, B:27:0x00db, B:29:0x00f4, B:30:0x00fb, B:32:0x0101, B:33:0x0106, B:35:0x012d, B:36:0x0132, B:43:0x014b, B:46:0x0153, B:48:0x015b, B:50:0x0161, B:52:0x0166, B:54:0x016a, B:58:0x0180, B:60:0x0188, B:62:0x018e, B:66:0x0199, B:67:0x01ab, B:69:0x01af, B:70:0x01c5, B:72:0x01cd, B:74:0x01dc, B:75:0x01f2, B:78:0x0203, B:80:0x0209, B:84:0x0216, B:86:0x021d, B:88:0x0223, B:114:0x026e, B:115:0x027b, B:124:0x0293, B:126:0x02bc, B:127:0x02c3, B:129:0x02cb, B:131:0x02e4, B:132:0x02ed, B:134:0x02fc, B:136:0x0302, B:137:0x0306, B:139:0x030c, B:140:0x031c, B:142:0x0323, B:143:0x032c, B:145:0x0334, B:151:0x0344, B:157:0x0358, B:159:0x0360, B:160:0x0367, B:164:0x0374, B:167:0x039f, B:169:0x03da, B:170:0x03df, B:172:0x03e5, B:174:0x03ed, B:176:0x03f7, B:177:0x0417, B:179:0x0421, B:181:0x042b, B:182:0x044b, B:183:0x0452, B:187:0x0487, B:189:0x04b6, B:193:0x04cb, B:192:0x04c2, B:186:0x0484, B:166:0x038b, B:152:0x0349, B:153:0x034e, B:94:0x022c, B:96:0x0232, B:108:0x0257, B:118:0x0286, B:194:0x04d3), top: B:205:0x001c }] */
    /* JADX WARN: Removed duplicated region for block: B:190:0x04bd  */
    /* JADX WARN: Unreachable blocks removed: 2, instructions: 2 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(int i2, long j2, int i3, com.mbridge.msdk.c.d dVar, String str, String str2, com.mbridge.msdk.b.a.a aVar, boolean z, AdMobClickListener adMobClickListener) throws Throwable {
        int i4;
        int i5;
        int iOptInt;
        JSONArray jSONArray;
        List<Long> listI;
        int i6;
        int iB;
        String strA;
        a aVar2;
        m mVar;
        Iterator<Long> it;
        String str3;
        int iOptInt2;
        String string;
        List<Campaign> listB;
        List<Campaign> listB2;
        try {
            com.mbridge.msdk.foundation.db.f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a();
            int iP = this.m.p();
            int iQ = this.m.q();
            z.b(d, "START LOAD MB MVNATIVE");
            com.mbridge.msdk.mbnative.e.a.a aVar3 = new com.mbridge.msdk.mbnative.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j());
            com.mbridge.msdk.foundation.same.net.g.d dVar2 = new com.mbridge.msdk.foundation.same.net.g.d();
            String strK = com.mbridge.msdk.foundation.controller.a.f().k();
            String strL = com.mbridge.msdk.foundation.controller.a.f().l();
            if (this.s != null && this.s.containsKey("app_id") && this.s.containsKey("app_key") && this.s.containsKey(MBridgeConstans.KEY_WORD) && this.s.get(MBridgeConstans.KEY_WORD) != null) {
                if (this.s.get("app_id") instanceof String) {
                    strK = (String) this.s.get("app_id");
                }
                if (this.s.get("app_key") instanceof String) {
                    strL = (String) this.s.get("app_key");
                }
                String str4 = this.s.get(MBridgeConstans.KEY_WORD) instanceof String ? (String) this.s.get(MBridgeConstans.KEY_WORD) : null;
                if (!TextUtils.isEmpty(str4)) {
                    dVar2.a("smart", t.a(str4));
                }
            }
            String str5 = strK;
            String str6 = strL;
            dVar2.a("app_id", str5);
            dVar2.a("unit_id", str);
            dVar2.a("req_type", "1");
            if (!TextUtils.isEmpty(this.n)) {
                dVar2.a("category", this.n);
            }
            if (!TextUtils.isEmpty(str2)) {
                dVar2.a(MBridgeConstans.PLACEMENT_ID, str2);
            }
            dVar2.a("sign", SameMD5.getMD5(str5 + str6));
            dVar2.a("only_impression", "1");
            String strG = ae.g(str);
            if (!TextUtils.isEmpty(strG)) {
                dVar2.a(at.j, strG);
            }
            int iIntValue = h.get(str).intValue();
            if (iP != w && iP != 0 && iIntValue != 0) {
                if (i3 == 0) {
                    com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = f.a(i2);
                    if (z) {
                        if (bVarA != null && (listB2 = bVarA.b(str, iIntValue)) != null && listB2.size() > 0) {
                            a(true, aVar, (String) null);
                            return;
                        } else {
                            if (this.y) {
                                a("", i3, str, str2, aVar, adMobClickListener);
                                return;
                            }
                            return;
                        }
                    }
                    if (i2 != 1 && bVarA != null && (listB = bVarA.b(str, iIntValue)) != null && listB.size() > 0) {
                        a(true, aVar, (String) null);
                        return;
                    }
                }
                if (iIntValue != 0) {
                    dVar2.a("ad_num", iIntValue + "");
                }
                if (this.p != 0) {
                    dVar2.a("frame_num", this.p + "");
                }
                if (this.s.containsKey("native_info")) {
                    String str7 = (String) this.s.get("native_info");
                    if (TextUtils.isEmpty(str7)) {
                        i4 = iIntValue;
                        i5 = 0;
                        iOptInt = 0;
                    } else {
                        z.d(d, "nativeinfo" + str7);
                        try {
                            JSONArray jSONArray2 = new JSONArray(str7);
                            if (jSONArray2.length() > 0) {
                                str3 = str7;
                                int i7 = 0;
                                iOptInt = 0;
                                iOptInt2 = 0;
                                while (i7 < jSONArray2.length()) {
                                    try {
                                        JSONObject jSONObject = (JSONObject) jSONArray2.opt(i7);
                                        int i8 = iOptInt;
                                        i4 = iIntValue;
                                        try {
                                            int iOptInt3 = jSONObject.optInt("id", 0);
                                            if (2 == iOptInt3) {
                                                iOptInt = jSONObject.optInt("ad_num");
                                                if (iP > 0) {
                                                    try {
                                                        jSONObject.put("ad_num", iP);
                                                    } catch (JSONException e2) {
                                                        e = e2;
                                                        z.d(d, com.mbridge.msdk.mbnative.b.a.a(e));
                                                        i5 = iOptInt2;
                                                        string = str3;
                                                        dVar2.a("native_info", string);
                                                        iP = i4;
                                                        dVar2.a("ad_num", iP + "");
                                                        dVar2.a("ping_mode", "1");
                                                        if (com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k()) == null) {
                                                        }
                                                        if (!NativeController.a(this.s)) {
                                                        }
                                                        jSONArray = new JSONArray();
                                                        listI = com.mbridge.msdk.foundation.controller.a.f().i();
                                                        if (listI != null) {
                                                            it = listI.iterator();
                                                            while (it.hasNext()) {
                                                            }
                                                        }
                                                        int i9 = iOptInt;
                                                        if (jSONArray.length() > 0) {
                                                        }
                                                        if (g.containsKey(str)) {
                                                            i6 = 1;
                                                            iB = 0;
                                                        }
                                                        if (i2 == i6) {
                                                            dVar2.a("ttc_ids", this.q);
                                                        }
                                                        if (!this.s.containsKey("native_info")) {
                                                            if (i2 == 1) {
                                                            }
                                                        }
                                                        dVar2.a("offset", iB + "");
                                                        dVar2.a("ad_type", "42");
                                                        dVar2.a("ad_source_id", i2 + "");
                                                        strA = com.mbridge.msdk.foundation.same.a.d.a(str, com.tkay.expressad.foundation.g.a.f.a);
                                                        if (!TextUtils.isEmpty(strA)) {
                                                        }
                                                        if (Build.VERSION.SDK_INT >= 14) {
                                                        }
                                                        aVar2 = new a(i2);
                                                        aVar2.setUnitId(str);
                                                        aVar2.setPlacementId(str2);
                                                        aVar2.setAdType(42);
                                                        aVar2.d(i4);
                                                        aVar2.b(i9);
                                                        aVar2.c(i5);
                                                        aVar2.a(iQ);
                                                        aVar2.a(adMobClickListener);
                                                        aVar2.a(aVar);
                                                        if (i2 == 1) {
                                                            aVar2.b(true);
                                                        }
                                                        aVar2.a(NativeController.b(this.s));
                                                        b bVar = new b(1, aVar2, i3, str, str2);
                                                        aVar2.a(bVar);
                                                        aVar2.e(i3);
                                                        bVar.a(aVar);
                                                        bVar.a(adMobClickListener);
                                                        bVar.a(z);
                                                        bVar.a(str);
                                                        if (i3 != 0) {
                                                        }
                                                        this.o.postDelayed(bVar, j2);
                                                        return;
                                                    }
                                                } else {
                                                    continue;
                                                }
                                            } else {
                                                if (3 == iOptInt3) {
                                                    iOptInt2 = jSONObject.optInt("ad_num");
                                                    if (iP > 0) {
                                                        jSONObject.put("ad_num", iP);
                                                    }
                                                }
                                                iOptInt = i8;
                                            }
                                            i7++;
                                            iIntValue = i4;
                                        } catch (JSONException e3) {
                                            e = e3;
                                            iOptInt = i8;
                                        }
                                    } catch (JSONException e4) {
                                        e = e4;
                                        i4 = iIntValue;
                                    }
                                }
                                i4 = iIntValue;
                                i5 = iOptInt2;
                            } else {
                                i4 = iIntValue;
                                str3 = str7;
                                i5 = 0;
                                iOptInt = 0;
                            }
                            try {
                                this.z = Math.max(iOptInt, i5);
                                string = jSONArray2.toString();
                            } catch (JSONException e5) {
                                e = e5;
                                iOptInt2 = i5;
                                z.d(d, com.mbridge.msdk.mbnative.b.a.a(e));
                                i5 = iOptInt2;
                                string = str3;
                            }
                        } catch (JSONException e6) {
                            e = e6;
                            i4 = iIntValue;
                            str3 = str7;
                            iOptInt = 0;
                            iOptInt2 = 0;
                        }
                        dVar2.a("native_info", string);
                    }
                    iP = i4;
                } else {
                    i4 = iIntValue;
                    if (iP == x || iP == 0) {
                        iP = i4;
                    }
                    i5 = 0;
                    iOptInt = 0;
                }
                dVar2.a("ad_num", iP + "");
                dVar2.a("ping_mode", "1");
                if (com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k()) == null) {
                    com.mbridge.msdk.c.b.a().b();
                }
                if (!NativeController.a(this.s)) {
                    z.b(d, "没有param 参数 要传fqci");
                    JSONArray jSONArrayA = ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), str);
                    if (jSONArrayA.length() > 0) {
                        dVar2.a(com.mbridge.msdk.foundation.same.net.g.d.c, ae.a(jSONArrayA));
                    }
                }
                jSONArray = new JSONArray();
                listI = com.mbridge.msdk.foundation.controller.a.f().i();
                if (listI != null && listI.size() > 0) {
                    it = listI.iterator();
                    while (it.hasNext()) {
                        jSONArray.put(it.next().longValue());
                        iOptInt = iOptInt;
                    }
                }
                int i92 = iOptInt;
                if (jSONArray.length() > 0) {
                    dVar2.a(d.a.O, ae.a(jSONArray));
                }
                if (g.containsKey(str) || (mVar = g.get(str)) == null) {
                    i6 = 1;
                    iB = 0;
                } else {
                    if (i2 != 1 && i2 == 2) {
                        iB = mVar.a();
                    } else {
                        iB = mVar.b();
                    }
                    i6 = 1;
                }
                if (i2 == i6 && !TextUtils.isEmpty(this.q)) {
                    dVar2.a("ttc_ids", this.q);
                }
                if (!this.s.containsKey("native_info") && i2 == 1) {
                    dVar2.a("tnum", this.z + "");
                } else if (i2 == 1) {
                    dVar2.a("tnum", this.A + "");
                }
                dVar2.a("offset", iB + "");
                dVar2.a("ad_type", "42");
                dVar2.a("ad_source_id", i2 + "");
                strA = com.mbridge.msdk.foundation.same.a.d.a(str, com.tkay.expressad.foundation.g.a.f.a);
                if (!TextUtils.isEmpty(strA)) {
                    dVar2.a(com.mbridge.msdk.foundation.same.net.g.d.b, strA);
                }
                if (Build.VERSION.SDK_INT >= 14) {
                    if (this.s.containsKey("native_video_width") && (this.s.get("native_video_width") instanceof Integer)) {
                        dVar2.a("video_width", ((Integer) this.s.get("native_video_width")).intValue() + "");
                    }
                    if (this.s.containsKey("native_video_height") && (this.s.get("native_video_height") instanceof Integer)) {
                        dVar2.a("video_height", ((Integer) this.s.get("native_video_height")).intValue() + "");
                    }
                    dVar2.a("video_version", "2.0");
                }
                aVar2 = new a(i2);
                aVar2.setUnitId(str);
                aVar2.setPlacementId(str2);
                aVar2.setAdType(42);
                aVar2.d(i4);
                aVar2.b(i92);
                aVar2.c(i5);
                aVar2.a(iQ);
                aVar2.a(adMobClickListener);
                aVar2.a(aVar);
                if (i2 == 1 || z) {
                    aVar2.b(true);
                }
                aVar2.a(NativeController.b(this.s));
                b bVar2 = new b(1, aVar2, i3, str, str2);
                aVar2.a(bVar2);
                aVar2.e(i3);
                bVar2.a(aVar);
                bVar2.a(adMobClickListener);
                bVar2.a(z);
                bVar2.a(str);
                if (i3 != 0) {
                    aVar3.choiceV3OrV5BySetting(1, dVar2, aVar2, "");
                } else if (i3 == 1) {
                    aVar3.getLoadOrSetting(1, com.mbridge.msdk.foundation.same.net.f.d.a().n, dVar2, aVar2);
                }
                this.o.postDelayed(bVar2, j2);
                return;
            }
            a("The request was refused", i3, str, str2, aVar, adMobClickListener);
        } catch (Exception e7) {
            z.d(d, com.mbridge.msdk.mbnative.b.a.a(e7));
            z.d(d, e7.getMessage());
        }
    }

    public static void a(int i2, String str) {
        m mVar;
        if (g.containsKey(str)) {
            mVar = g.get(str);
        } else {
            mVar = new m();
        }
        int iIntValue = h.get(str).intValue();
        int iIntValue2 = i.containsKey(str) ? i.get(str).intValue() : 1;
        if (i2 == 1) {
            int iB = iIntValue + mVar.b();
            mVar.b(iB <= iIntValue2 ? iB : 0);
        } else if (i2 == 2) {
            int iA = iIntValue + mVar.a();
            mVar.a(iA <= iIntValue2 ? iA : 0);
        }
        g.put(str, mVar);
    }

    public static void b(int i2, String str) {
        if (g.containsKey(str)) {
            m mVar = g.get(str);
            if (i2 == 1) {
                mVar.b(0);
            } else if (i2 == 2) {
                mVar.a(0);
            }
            g.put(str, mVar);
        }
    }

    public class a extends com.mbridge.msdk.mbnative.e.a.b implements com.mbridge.msdk.foundation.same.e.d {
        private int b;
        private int c;
        private int d;
        private int e;
        private int f;
        private AdMobClickListener g;
        private Runnable j;
        private com.mbridge.msdk.b.a.a l;
        private List<String> h = null;
        private boolean i = false;
        private boolean k = true;

        public final void a(AdMobClickListener adMobClickListener) {
            this.g = adMobClickListener;
        }

        public final void a(List<String> list) {
            this.h = list;
        }

        public final void a(int i) {
            this.f = i;
        }

        public final void b(int i) {
            this.d = i;
        }

        public final void c(int i) {
            this.e = i;
        }

        public final void d(int i) {
            this.c = i;
        }

        public a(int i) {
            this.b = i;
        }

        public final void a(com.mbridge.msdk.b.a.a aVar) {
            this.l = aVar;
        }

        public final void b(boolean z) {
            this.k = z;
        }

        @Override
        public final void a(boolean z) {
            this.i = z;
        }

        @Override
        public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, final CampaignUnit campaignUnit) {
            b.this.y = true;
            b.this.a(true, this.l, (String) null);
            b.this.a(new Thread(new Runnable() {
                @Override
                public final void run() {
                    boolean z;
                    if (MBridgeConstans.PRELOAD_RESULT_IN_SUBTHREAD && Looper.myLooper() == null) {
                        Looper.prepare();
                        z = true;
                    } else {
                        z = false;
                    }
                    if (a.this.j != null) {
                        z.b(b.d, "REMOVE CANCEL TASK ON SUCCESS");
                        b.this.o.removeCallbacks(a.this.j);
                    }
                    z.d(b.d, "onSuccess");
                    ae.a((List<CampaignEx>) campaignUnit.getAds());
                    if (b.e.containsKey("0_" + a.this.unitId)) {
                        b.e.remove("0_" + a.this.unitId);
                    }
                    if (a.this.f > 0) {
                        if (campaignUnit.ads.size() <= a.this.f) {
                            a.this.c = campaignUnit.ads.size();
                        } else {
                            a aVar = a.this;
                            aVar.c = aVar.f;
                        }
                    } else if (a.this.f == -1) {
                        a.this.c = 0;
                    } else if (a.this.f == -3) {
                        a.this.c = campaignUnit.ads.size();
                    } else if (a.this.f == -2) {
                        if (campaignUnit.getTemplate() == 3) {
                            if (a.this.e != 0) {
                                a aVar2 = a.this;
                                aVar2.c = aVar2.e;
                            }
                        } else if (a.this.d != 0) {
                            a aVar3 = a.this;
                            aVar3.c = aVar3.d;
                        }
                        if (a.this.c <= 0) {
                            a.this.c = ((Integer) b.h.get(a.this.unitId)).intValue();
                        }
                    }
                    if (campaignUnit.ads.size() < a.this.c) {
                        a.this.c = campaignUnit.ads.size();
                    }
                    ArrayList arrayList = new ArrayList();
                    ArrayList arrayList2 = new ArrayList();
                    boolean z2 = false;
                    for (int i = 0; i < campaignUnit.ads.size(); i++) {
                        CampaignEx campaignEx = campaignUnit.ads.get(i);
                        campaignEx.setCampaignUnitId(a.this.unitId);
                        boolean zC = ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx.getPackageName());
                        if (zC && com.mbridge.msdk.foundation.controller.a.e() != null) {
                            com.mbridge.msdk.foundation.controller.a.e().add(new com.mbridge.msdk.foundation.entity.i(campaignEx.getId(), campaignEx.getPackageName()));
                            z2 = true;
                        }
                        if (arrayList.size() < a.this.c && campaignEx.getOfferType() != 99) {
                            if (ae.b(campaignEx)) {
                                campaignEx.setRtinsType(zC ? 1 : 2);
                            }
                            if (campaignEx.getWtick() == 1 || !zC) {
                                arrayList.add(campaignEx);
                                if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                                    arrayList2.add(campaignEx);
                                }
                            } else if (ae.b(campaignEx)) {
                                arrayList.add(campaignEx);
                                if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                                    arrayList2.add(campaignEx);
                                }
                            } else {
                                ae.a(a.this.unitId, campaignEx, com.mbridge.msdk.foundation.same.a.E);
                            }
                        }
                        b.this.a(b.this.v, campaignEx);
                    }
                    b.a(b.this, arrayList2, a.this.unitId);
                    if (z2) {
                        com.mbridge.msdk.foundation.controller.a.f().h();
                    }
                    com.mbridge.msdk.mbnative.a.b<String, List<Campaign>> bVarA = f.a(campaignUnit.getAds().get(0) != null ? campaignUnit.getAds().get(0).getType() : 1);
                    if (bVarA != null) {
                        bVarA.a(a.this.unitId, arrayList);
                    }
                    b.a(a.this.b, a.this.unitId);
                    if (Looper.myLooper() == null || !z) {
                        return;
                    }
                    Looper.loop();
                }
            }));
        }

        @Override
        public final void a(final int i, final String str) {
            b.this.a(new Thread(new Runnable() {
                @Override
                public final void run() {
                    boolean z;
                    if (MBridgeConstans.PRELOAD_RESULT_IN_SUBTHREAD && Looper.myLooper() == null) {
                        Looper.prepare();
                        z = true;
                    } else {
                        z = false;
                    }
                    if (!a.this.i) {
                        if (a.this.j != null) {
                            z.b(b.d, "REMOVE CANCEL TASK ON onFailed");
                            b.this.o.removeCallbacks(a.this.j);
                        }
                        if (a.this.b() == 1 || a.this.k) {
                            b.this.a(str, a.this.b(), a.this.unitId, a.this.placementId, a.this.l, a.this.g);
                        }
                    } else if (a.this.k) {
                        b.this.a(str, a.this.b(), a.this.unitId, a.this.placementId, a.this.l, a.this.g);
                    }
                    if (i == -1) {
                        b.b(a.this.b, a.this.unitId);
                    }
                    if (Looper.myLooper() == null || !z) {
                        return;
                    }
                    Looper.loop();
                }
            }));
        }

        public final void a(Runnable runnable) {
            this.j = runnable;
        }

        @Override
        public final void b(final List<Frame> list) {
            b.this.a(new Thread(new Runnable() {
                @Override
                public final void run() {
                    boolean z;
                    if (MBridgeConstans.PRELOAD_RESULT_IN_SUBTHREAD && Looper.myLooper() == null) {
                        Looper.prepare();
                        z = true;
                    } else {
                        z = false;
                    }
                    if (!a.this.i && a.this.j != null) {
                        z.b(b.d, "REMOVE CANCEL TASK ON onAdLoaded");
                        b.this.o.removeCallbacks(a.this.j);
                    }
                    List list2 = list;
                    if (list2 != null && list2.size() > 0) {
                        Iterator it = list.iterator();
                        while (it.hasNext()) {
                            Iterator<CampaignEx> it2 = ((Frame) it.next()).getCampaigns().iterator();
                            while (it2.hasNext()) {
                                b.this.a(b.this.v, it2.next());
                            }
                        }
                        HashMap map = new HashMap();
                        map.put(Long.valueOf(System.currentTimeMillis()), list);
                        if (b.e.containsKey("1_" + a.this.unitId)) {
                            b.e.remove("1_" + a.this.unitId);
                        }
                        b.e.put("1_" + a.this.unitId, map);
                    }
                    if (Looper.myLooper() == null || !z) {
                        return;
                    }
                    Looper.loop();
                }
            }));
        }
    }

    public final void a(String str, int i2, String str2, String str3, com.mbridge.msdk.b.a.a aVar, AdMobClickListener adMobClickListener) {
        Log.e(d, str);
        try {
            if ((this.a != null && this.a.size() <= 0) || this.a == null) {
                a(false, aVar, str);
            } else {
                a(i2, this.m, str2, str3, aVar, adMobClickListener);
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    public class b implements Runnable {
        private int b;
        private com.mbridge.msdk.foundation.same.e.d c;
        private int d;
        private String e;
        private String f;
        private com.mbridge.msdk.b.a.a g;
        private boolean h = false;
        private AdMobClickListener i;

        public final void a(AdMobClickListener adMobClickListener) {
            this.i = adMobClickListener;
        }

        public final void a(boolean z) {
            this.h = z;
        }

        public final void a(com.mbridge.msdk.b.a.a aVar) {
            this.g = aVar;
        }

        public final void a(String str) {
            this.e = str;
        }

        public b(int i, com.mbridge.msdk.foundation.same.e.d dVar, int i2, String str, String str2) {
            this.b = i;
            this.c = dVar;
            this.d = i2;
            this.e = str;
            this.f = str2;
        }

        @Override
        public final void run() {
            z.b(b.d, "cancel task adsource is = " + this.b);
            this.c.a(true);
            int i = this.b;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                b.this.a("REQUEST_TIMEOUT", this.d, this.e, this.f, this.g, this.i);
            } else {
                b.this.y = true;
                if (this.h || this.d == 1) {
                    b.this.a("REQUEST_TIMEOUT", this.d, this.e, this.f, this.g, this.i);
                }
            }
        }
    }

    public static Map<String, Map<Long, Object>> a() {
        return e;
    }

    public static Map<String, Boolean> b() {
        return f;
    }

    public static Map<String, m> c() {
        return g;
    }

    public static Map<String, Integer> d() {
        return h;
    }

    public static Map<String, Integer> e() {
        return i;
    }

    private void a(final int i2, final long j2, final int i3, final String str, final String str2, final boolean z, final com.mbridge.msdk.b.a.a aVar, final AdMobClickListener adMobClickListener) {
        final UUID uuidG = v.G();
        if (uuidG == null) {
            this.C.put(str + "_" + z + "_ttc", false);
            this.C.put(str + "_" + z + "_post", false);
        } else {
            this.C.put(uuidG + str + "_" + z + "_ttc", false);
            this.C.put(uuidG + str + "_" + z + "_post", false);
        }
        final com.mbridge.msdk.foundation.same.e.a aVar2 = new com.mbridge.msdk.foundation.same.e.a() {
            @Override
            public final void cancelTask() {
            }

            @Override
            public final void pauseTask(boolean z2) {
            }

            @Override
            public final void runTask() {
                if (b.this.r == null) {
                    b.this.r = i.a(com.mbridge.msdk.foundation.controller.a.f().j());
                }
                com.mbridge.msdk.foundation.db.c cVarA = com.mbridge.msdk.foundation.db.c.a(b.this.r);
                cVarA.a();
                b.this.q = cVarA.a(str);
                if (b.this.C == null || b.this.C.isEmpty()) {
                    return;
                }
                if (uuidG == null) {
                    if (b.this.C.containsKey(str + "_" + z + "_ttc")) {
                        b.this.C.put(str + "_" + z + "_ttc", true);
                        return;
                    }
                }
                if (uuidG != null) {
                    if (b.this.C.containsKey(uuidG + str + "_" + z + "_ttc")) {
                        b.this.C.put(uuidG + str + "_" + z + "_ttc", true);
                    }
                }
            }
        };
        this.o.postDelayed(new com.mbridge.msdk.foundation.same.e.a() {
            @Override
            public final void cancelTask() {
            }

            @Override
            public final void pauseTask(boolean z2) {
            }

            @Override
            public final void runTask() {
                boolean zBooleanValue = false;
                if (b.this.C != null && !b.this.C.isEmpty()) {
                    if (b.this.C.containsKey(str + "_" + z + "_ttc")) {
                        zBooleanValue = ((Boolean) b.this.C.get(str + "_" + z + "_ttc")).booleanValue();
                        b.this.C.remove(str + "_" + z + "_ttc");
                    }
                    if (b.this.C.containsKey(uuidG + str + "_" + z + "_ttc")) {
                        zBooleanValue = ((Boolean) b.this.C.get(uuidG + str + "_" + z + "_ttc")).booleanValue();
                        b.this.C.remove(uuidG + str + "_" + z + "_ttc");
                    }
                }
                if (zBooleanValue) {
                    return;
                }
                b.this.o.post(new Runnable() {
                    @Override
                    public final void run() throws Throwable {
                        if (b.this.C != null && !b.this.C.isEmpty()) {
                            if (b.this.C.containsKey(str + "_" + z + "_post")) {
                                b.this.C.put(str + "_" + z + "_post", true);
                            }
                            if (b.this.C.containsKey(uuidG + str + "_" + z + "_post")) {
                                b.this.C.put(uuidG + str + "_" + z + "_post", true);
                            }
                        }
                        if (b.this.B != null) {
                            b.this.B.a(aVar2);
                        }
                        b.this.a(i2, j2, i3, b.this.m, str, str2, aVar, z, adMobClickListener);
                    }
                });
            }
        }, 90000L);
        a.b bVar = new a.b() {
            @Override
            public final void a(a.a aVar3) {
                if (aVar3 == a.a.e) {
                    b.this.o.post(new Runnable() {
                        @Override
                        public final void run() throws Throwable {
                            boolean zBooleanValue = false;
                            if (b.this.C != null && !b.this.C.isEmpty()) {
                                if (b.this.C.containsKey(str + "_" + z + "_post")) {
                                    zBooleanValue = ((Boolean) b.this.C.get(str + "_" + z + "_post")).booleanValue();
                                    b.this.C.remove(str + "_" + z + "_post");
                                }
                                if (b.this.C.containsKey(uuidG + str + "_" + z + "_post")) {
                                    zBooleanValue = ((Boolean) b.this.C.get(uuidG + str + "_" + z + "_post")).booleanValue();
                                    b.this.C.remove(uuidG + str + "_" + z + "_post");
                                }
                            }
                            if (zBooleanValue) {
                                return;
                            }
                            b.this.a(i2, j2, i3, b.this.m, str, str2, aVar, z, adMobClickListener);
                        }
                    });
                }
            }
        };
        if (this.B == null) {
            this.B = new com.mbridge.msdk.foundation.same.e.b(com.mbridge.msdk.foundation.controller.a.f().j());
        }
        com.mbridge.msdk.foundation.same.e.b bVar2 = this.B;
        if (bVar2 != null) {
            bVar2.a(aVar2, bVar);
        }
    }

    public final void a(boolean z, com.mbridge.msdk.b.a.a aVar, String str) {
        if (z) {
            if (aVar == null || aVar.a()) {
                return;
            }
            aVar.a(true);
            aVar.onPreloadSucceed();
            return;
        }
        if (aVar == null || aVar.a()) {
            return;
        }
        aVar.a(true);
        aVar.onPreloadFaild(str);
    }

    public final void a(boolean z, Campaign campaign) {
        if (campaign == null) {
            return;
        }
        if (z && campaign.getIconDrawable() == null) {
            campaign.loadIconUrlAsyncWithBlock(null);
        }
        if (z && campaign.getBigDrawable() == null) {
            campaign.loadImageUrlAsyncWithBlock(null);
        }
    }

    public final void a(Thread thread) {
        if (!MBridgeConstans.PRELOAD_RESULT_IN_SUBTHREAD) {
            thread.run();
        } else {
            thread.start();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0089 A[Catch: Exception -> 0x0091, TRY_LEAVE, TryCatch #1 {Exception -> 0x0091, blocks: (B:4:0x0004, B:10:0x0081, B:11:0x0089, B:6:0x000a, B:8:0x0028), top: B:19:0x0004, inners: #0 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static void a(b bVar, List list, String str) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    try {
                        Class.forName("com.mbridge.msdk.nativex.view.MBMediaView");
                        Class.forName("com.mbridge.msdk.videocommon.download.b");
                        Class<?> cls = Class.forName("com.mbridge.msdk.videocommon.download.b");
                        Object objInvoke = cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]);
                        if (objInvoke != null) {
                            cls.getMethod("createUnitCache", Context.class, String.class, CopyOnWriteArrayList.class, Integer.TYPE, Class.forName("com.mbridge.msdk.videocommon.listener.a")).invoke(objInvoke, com.mbridge.msdk.foundation.controller.a.f().j(), str, new CopyOnWriteArrayList(list), 1, null);
                            cls.getMethod(PointCategory.LOAD, String.class).invoke(objInvoke, str);
                        }
                    } catch (Exception unused) {
                        z.d(d, "please import the videocommon aar");
                    }
                } else {
                    z.b(d, "onload 不用下载视频素材 size为0");
                }
            } catch (Exception e2) {
                z.d(d, com.mbridge.msdk.mbnative.b.a.a(e2));
            }
        }
    }
}
