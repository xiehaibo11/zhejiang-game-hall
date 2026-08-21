package com.mbridge.msdk.mbnative.controller;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.entity.m;
import com.mbridge.msdk.foundation.same.e.a;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbnative.a.f;
import com.mbridge.msdk.out.AdMobClickListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.Frame;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.UUID;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: NativePreloadController.java */
/* JADX INFO: loaded from: classes2.dex */
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Queue<Integer> f3777a = null;
    Queue<Long> b = null;
    private int p = 0;
    private String q = "";
    private Map<String, Boolean> C = new HashMap();
    private com.mbridge.msdk.foundation.same.e.b B = new com.mbridge.msdk.foundation.same.e.b(com.mbridge.msdk.foundation.controller.a.f().j());

    public b() {
        if (Looper.myLooper() == null) {
            Looper.prepare();
        }
        this.o = new Handler() { // from class: com.mbridge.msdk.mbnative.controller.b.1
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
            }
        };
    }

    /* JADX WARN: Removed duplicated region for block: B:117:0x02e7  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(java.util.Map<java.lang.String, java.lang.Object> r24, int r25, com.mbridge.msdk.out.AdMobClickListener r26) {
        /*
            Method dump skipped, instruction units count: 1102
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbnative.controller.b.a(java.util.Map, int, com.mbridge.msdk.out.AdMobClickListener):void");
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
        Queue<Integer> queue = this.f3777a;
        if (queue == null || queue.size() <= 0) {
            return;
        }
        try {
            int iIntValue = this.f3777a.poll().intValue();
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(int r25, long r26, int r28, com.mbridge.msdk.c.d r29, java.lang.String r30, java.lang.String r31, com.mbridge.msdk.b.a.a r32, boolean r33, com.mbridge.msdk.out.AdMobClickListener r34) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 1276
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbnative.controller.b.a(int, long, int, com.mbridge.msdk.c.d, java.lang.String, java.lang.String, com.mbridge.msdk.b.a.a, boolean, com.mbridge.msdk.out.AdMobClickListener):void");
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

    /* JADX INFO: compiled from: NativePreloadController.java */
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

        @Override // com.mbridge.msdk.foundation.same.e.d
        public final void a(boolean z) {
            this.i = z;
        }

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, final CampaignUnit campaignUnit) {
            b.this.y = true;
            b.this.a(true, this.l, (String) null);
            b.this.a(new Thread(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.b.a.1
                @Override // java.lang.Runnable
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

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void a(final int i, final String str) {
            b.this.a(new Thread(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.b.a.2
                @Override // java.lang.Runnable
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

        @Override // com.mbridge.msdk.mbnative.e.a.b
        public final void b(final List<Frame> list) {
            b.this.a(new Thread(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.b.a.3
                @Override // java.lang.Runnable
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
            if ((this.f3777a != null && this.f3777a.size() <= 0) || this.f3777a == null) {
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

    /* JADX INFO: renamed from: com.mbridge.msdk.mbnative.controller.b$b, reason: collision with other inner class name */
    /* JADX INFO: compiled from: NativePreloadController.java */
    public class RunnableC0274b implements Runnable {
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

        public RunnableC0274b(int i, com.mbridge.msdk.foundation.same.e.d dVar, int i2, String str, String str2) {
            this.b = i;
            this.c = dVar;
            this.d = i2;
            this.e = str;
            this.f = str2;
        }

        @Override // java.lang.Runnable
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
        final com.mbridge.msdk.foundation.same.e.a aVar2 = new com.mbridge.msdk.foundation.same.e.a() { // from class: com.mbridge.msdk.mbnative.controller.b.2
            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void cancelTask() {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void pauseTask(boolean z2) {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
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
        this.o.postDelayed(new com.mbridge.msdk.foundation.same.e.a() { // from class: com.mbridge.msdk.mbnative.controller.b.3
            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void cancelTask() {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
            public final void pauseTask(boolean z2) {
            }

            @Override // com.mbridge.msdk.foundation.same.e.a
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
                b.this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.b.3.1
                    @Override // java.lang.Runnable
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
        a.b bVar = new a.b() { // from class: com.mbridge.msdk.mbnative.controller.b.4
            @Override // com.mbridge.msdk.foundation.same.e.a.b
            public final void a(a.EnumC0259a enumC0259a) {
                if (enumC0259a == a.EnumC0259a.FINISH) {
                    b.this.o.post(new Runnable() { // from class: com.mbridge.msdk.mbnative.controller.b.4.1
                        @Override // java.lang.Runnable
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
        To view partially-correct add '--show-bad-code' argument
    */
    static /* synthetic */ void a(com.mbridge.msdk.mbnative.controller.b r11, java.util.List r12, java.lang.String r13) {
        /*
            java.lang.String r11 = "com.mbridge.msdk.videocommon.download.b"
            if (r12 == 0) goto L89
            int r0 = r12.size()     // Catch: java.lang.Exception -> L91
            if (r0 <= 0) goto L89
            java.lang.String r0 = "com.mbridge.msdk.nativex.view.MBMediaView"
            java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L81
            java.lang.Class.forName(r11)     // Catch: java.lang.Exception -> L81
            java.lang.Class r11 = java.lang.Class.forName(r11)     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = "getInstance"
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r0 = r11.getMethod(r0, r2)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L81
            r3 = 0
            java.lang.Object r0 = r0.invoke(r3, r2)     // Catch: java.lang.Exception -> L81
            if (r0 == 0) goto L9b
            java.lang.String r2 = "com.mbridge.msdk.videocommon.listener.a"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = "createUnitCache"
            r5 = 5
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L81
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r6[r1] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.util.concurrent.CopyOnWriteArrayList> r7 = java.util.concurrent.CopyOnWriteArrayList.class
            r9 = 2
            r6[r9] = r7     // Catch: java.lang.Exception -> L81
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L81
            r10 = 3
            r6[r10] = r7     // Catch: java.lang.Exception -> L81
            r7 = 4
            r6[r7] = r2     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r2 = r11.getMethod(r4, r6)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L81
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L81
            r4[r1] = r5     // Catch: java.lang.Exception -> L81
            r4[r8] = r13     // Catch: java.lang.Exception -> L81
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Exception -> L81
            r5.<init>(r12)     // Catch: java.lang.Exception -> L81
            r4[r9] = r5     // Catch: java.lang.Exception -> L81
            java.lang.Integer r12 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> L81
            r4[r10] = r12     // Catch: java.lang.Exception -> L81
            r4[r7] = r3     // Catch: java.lang.Exception -> L81
            r2.invoke(r0, r4)     // Catch: java.lang.Exception -> L81
            java.lang.String r12 = "load"
            java.lang.Class[] r2 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> L81
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r1] = r3     // Catch: java.lang.Exception -> L81
            java.lang.reflect.Method r11 = r11.getMethod(r12, r2)     // Catch: java.lang.Exception -> L81
            java.lang.Object[] r12 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L81
            r12[r1] = r13     // Catch: java.lang.Exception -> L81
            r11.invoke(r0, r12)     // Catch: java.lang.Exception -> L81
            goto L9b
        L81:
            java.lang.String r11 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L91
            java.lang.String r12 = "please import the videocommon aar"
            com.mbridge.msdk.foundation.tools.z.d(r11, r12)     // Catch: java.lang.Exception -> L91
            goto L9b
        L89:
            java.lang.String r11 = com.mbridge.msdk.mbnative.controller.b.d     // Catch: java.lang.Exception -> L91
            java.lang.String r12 = "onload 不用下载视频素材 size为0"
            com.mbridge.msdk.foundation.tools.z.b(r11, r12)     // Catch: java.lang.Exception -> L91
            goto L9b
        L91:
            r11 = move-exception
            java.lang.String r12 = com.mbridge.msdk.mbnative.controller.b.d
            java.lang.String r11 = com.mbridge.msdk.mbnative.b.a.a(r11)
            com.mbridge.msdk.foundation.tools.z.d(r12, r11)
        L9b:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbnative.controller.b.a(com.mbridge.msdk.mbnative.controller.b, java.util.List, java.lang.String):void");
    }
}
