package com.tkay.core.common.f;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public class ag {
    public static final String a = ag.class.getSimpleName();
    public Context b;
    public com.tkay.core.common.j c;
    public String d;
    public String e;
    public int f;
    public long g;
    public long h;
    public long i;
    public List<aj> j;
    public List<aj> k;
    public List<aj> l;
    public String m;
    public boolean n;
    public com.tkay.core.c.d o;
    public String p;
    public String q;
    public Map<String, Object> r;
    public JSONObject s;
    public d t;
    public aj u;
    public double w;
    public am x;
    public ae y;
    public int v = 2;
    public int z = 0;

    private ag d(List<aj> list) {
        ag agVar = new ag();
        agVar.b = this.b;
        agVar.d = this.d;
        agVar.e = this.e;
        agVar.f = this.f;
        agVar.h = this.h;
        agVar.k = this.k;
        agVar.o = this.o;
        long j = this.g;
        if (j < 0) {
            agVar.g = com.heytap.mcssdk.constant.a.q;
        } else {
            agVar.g = j;
        }
        agVar.n = this.n;
        agVar.p = this.p;
        agVar.q = this.q;
        agVar.j = list;
        agVar.r = this.r;
        agVar.i = this.i;
        agVar.c = this.c;
        agVar.t = this.t;
        agVar.v = this.v;
        agVar.u = this.u;
        agVar.w = this.w;
        agVar.z = this.z;
        return agVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x008d  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x009a A[Catch: all -> 0x0134, TryCatch #0 {all -> 0x0134, blocks: (B:11:0x0065, B:27:0x0096, B:31:0x00b5, B:33:0x00bf, B:34:0x00c2, B:36:0x00d2, B:37:0x00e0, B:39:0x00e6, B:41:0x00f2, B:42:0x00fd, B:44:0x0103, B:45:0x010f, B:47:0x0115, B:48:0x011a, B:50:0x0120, B:51:0x0125, B:28:0x009a, B:30:0x00b2, B:16:0x007a, B:19:0x0084), top: B:58:0x0065 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00bf A[Catch: all -> 0x0134, TryCatch #0 {all -> 0x0134, blocks: (B:11:0x0065, B:27:0x0096, B:31:0x00b5, B:33:0x00bf, B:34:0x00c2, B:36:0x00d2, B:37:0x00e0, B:39:0x00e6, B:41:0x00f2, B:42:0x00fd, B:44:0x0103, B:45:0x010f, B:47:0x0115, B:48:0x011a, B:50:0x0120, B:51:0x0125, B:28:0x009a, B:30:0x00b2, B:16:0x007a, B:19:0x0084), top: B:58:0x0065 }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00d2 A[Catch: all -> 0x0134, TryCatch #0 {all -> 0x0134, blocks: (B:11:0x0065, B:27:0x0096, B:31:0x00b5, B:33:0x00bf, B:34:0x00c2, B:36:0x00d2, B:37:0x00e0, B:39:0x00e6, B:41:0x00f2, B:42:0x00fd, B:44:0x0103, B:45:0x010f, B:47:0x0115, B:48:0x011a, B:50:0x0120, B:51:0x0125, B:28:0x009a, B:30:0x00b2, B:16:0x007a, B:19:0x0084), top: B:58:0x0065 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ag a(List<aj> list, List<aj> list2) {
        String strValueOf;
        int iHashCode;
        List<w> listA;
        ag agVarD = d(list);
        agVarD.m = this.m;
        if (list2.size() > 0) {
            List<aj> listA2 = com.tkay.core.common.l.g.a(list2);
            agVarD.l = listA2;
            byte b = 0;
            aj ajVar = listA2.get(0);
            ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            for (aj ajVar2 : listA2) {
                if (ajVar2.l() == 7) {
                    arrayList.add(Integer.valueOf(Integer.parseInt(ajVar2.t())));
                    arrayList2.add(ajVar2.t());
                }
            }
            JSONObject jSONObject = new JSONObject();
            TYBidRequestInfo.fillBaseCommonParams(jSONObject, String.valueOf(agVarD.f), this.o, ajVar);
            try {
                strValueOf = String.valueOf(agVarD.f);
                iHashCode = strValueOf.hashCode();
            } catch (Throwable th) {
                th.printStackTrace();
            }
            if (iHashCode != 50) {
                b = (iHashCode == 52 && strValueOf.equals("4")) ? (byte) 1 : (byte) -1;
                if (b != 0) {
                    String string = agVarD.o.a(agVarD.e, agVarD.d, ajVar).get(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE).toString();
                    if (!TextUtils.isEmpty(string)) {
                        jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, string);
                    }
                } else if (b == 1) {
                    jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.GET_OFFER, 2);
                }
                if (agVarD.z == agVarD.l.size()) {
                    jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.GET_OFFER, 2);
                }
                listA = com.tkay.core.common.d.c.a(agVarD.b).a(arrayList2);
                if (listA.size() > 0) {
                    JSONObject jSONObject2 = new JSONObject();
                    JSONObject jSONObject3 = new JSONObject();
                    for (w wVar : listA) {
                        if (wVar.d() > 0) {
                            jSONObject2.put(wVar.a(), wVar.d());
                        }
                        if (wVar.c() > 0) {
                            jSONObject3.put(wVar.a(), wVar.c());
                        }
                    }
                    if (jSONObject2.length() > 0) {
                        jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.DIRECTLY_DA_OFFER_CLICK, jSONObject2);
                    }
                    if (jSONObject3.length() > 0) {
                        jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.DIRECTLY_DA_OFFER_IMPRESSION, jSONObject3);
                    }
                }
                jSONObject.put("unit_ids", new JSONArray(arrayList.toString()));
                agVarD.s = jSONObject;
            } else {
                if (!strValueOf.equals("2")) {
                }
                if (b != 0) {
                }
                if (agVarD.z == agVarD.l.size()) {
                }
                listA = com.tkay.core.common.d.c.a(agVarD.b).a(arrayList2);
                if (listA.size() > 0) {
                }
                jSONObject.put("unit_ids", new JSONArray(arrayList.toString()));
                agVarD.s = jSONObject;
            }
        }
        agVarD.x = this.x;
        agVarD.y = this.y;
        return agVarD;
    }

    public final ag a(List<aj> list) {
        return d(list);
    }

    public final ag b(List<aj> list) {
        ag agVarD = d(list);
        agVarD.p = this.p;
        agVarD.h = this.h;
        return agVarD;
    }

    public final ag c(List<aj> list) {
        ag agVarD = d(list);
        agVarD.q = this.q;
        return agVarD;
    }
}
