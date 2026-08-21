package com.tencent.bugly.proguard;

import android.content.Context;
import android.os.Process;
import android.util.Pair;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;

public final class aj implements Runnable {
    protected int a;
    protected long b;
    protected long c;
    private int d;
    private int e;
    private final Context f;
    private final int g;
    private final byte[] h;
    private final aa i;
    private final ac j;
    private final af k;
    private final ai l;
    private final int m;
    private final ah n;
    private final ah o;
    private String p;
    private final String q;
    private final Map<String, String> r;
    private boolean s;

    public aj(Context context, int i, int i2, byte[] bArr, String str, String str2, ah ahVar, boolean z) {
        this(context, i, i2, bArr, str, str2, ahVar, 2, 30000, z);
    }

    public aj(Context context, int i, int i2, byte[] bArr, String str, String str2, ah ahVar, int i3, int i4, boolean z) {
        this.d = 2;
        this.e = 30000;
        this.p = null;
        this.a = 0;
        this.b = 0L;
        this.c = 0L;
        this.s = false;
        this.f = context;
        this.i = aa.a(context);
        this.h = bArr;
        this.j = ac.a();
        if (af.a == null) {
            af.a = new af(context);
        }
        this.k = af.a;
        this.l = ai.a();
        this.m = i;
        this.p = str;
        this.q = str2;
        this.n = ahVar;
        this.o = this.l.a;
        this.g = i2;
        if (i3 > 0) {
            this.d = i3;
        }
        if (i4 > 0) {
            this.e = i4;
        }
        this.s = z;
        this.r = null;
    }

    private static void a(String str) {
        al.e("[Upload] Failed to upload(%d): %s", 1, str);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0017  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x001a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(boolean z, int i, String str) {
        String strValueOf;
        int i2 = this.g;
        if (i2 == 630) {
            strValueOf = PointCategory.CRASH;
        } else if (i2 == 640) {
            strValueOf = "userinfo";
        } else if (i2 != 830) {
            if (i2 != 840) {
                strValueOf = String.valueOf(i2);
            }
        }
        if (z) {
            al.a("[Upload] Success: %s", strValueOf);
        } else {
            al.e("[Upload] Failed to upload(%d) %s: %s", Integer.valueOf(i), strValueOf, str);
        }
        if (this.b + this.c > 0) {
            this.l.a(this.l.a(this.s) + this.b + this.c, this.s);
        }
        ah ahVar = this.n;
        if (ahVar != null) {
            ahVar.a(z, str);
        }
        ah ahVar2 = this.o;
        if (ahVar2 != null) {
            ahVar2.a(z, str);
        }
    }

    private static boolean a(br brVar, aa aaVar, ac acVar) {
        if (brVar == null) {
            al.d("resp == null!", new Object[0]);
            return false;
        }
        if (brVar.a != 0) {
            al.e("resp result error %d", Byte.valueOf(brVar.a));
            return false;
        }
        try {
            if (!ap.b(brVar.g) && !aa.b().i().equals(brVar.g)) {
                w.a().a(ac.a, "device", brVar.g.getBytes("UTF-8"), true);
                aaVar.d(brVar.g);
            }
        } catch (Throwable th) {
            al.a(th);
        }
        aaVar.m = brVar.e;
        if (brVar.b == 510) {
            if (brVar.c == null) {
                al.e("[Upload] Strategy data is null. Response cmd: %d", Integer.valueOf(brVar.b));
                return false;
            }
            bt btVar = (bt) ae.a(brVar.c, bt.class);
            if (btVar == null) {
                al.e("[Upload] Failed to decode strategy from server. Response cmd: %d", Integer.valueOf(brVar.b));
                return false;
            }
            acVar.a(btVar);
        }
        return true;
    }

    @Override
    public final void run() {
        String str;
        Pair pair;
        boolean zBooleanValue;
        try {
            this.a = 0;
            this.b = 0L;
            this.c = 0L;
            if (ab.c(this.f) == null) {
                str = "network is not available";
            } else if (this.h == null || this.h.length == 0) {
                str = "request package is empty!";
            } else if (this.f == null || this.i == null || this.j == null || this.k == null) {
                str = "illegal access error";
            } else {
                str = this.j.c() == null ? "illegal local strategy" : null;
            }
            if (str != null) {
                a(false, 0, str);
                return;
            }
            byte[] bArrA = ap.a(this.h);
            if (bArrA == null) {
                a(false, 0, "failed to zip request body");
                return;
            }
            HashMap map = new HashMap(10);
            map.put("tls", "1");
            map.put("prodId", this.i.e());
            map.put("bundleId", this.i.c);
            map.put("appVer", this.i.o);
            if (this.r != null) {
                map.putAll(this.r);
            }
            map.put("cmd", Integer.toString(this.g));
            map.put(ConstantsAPI.Token.WX_TOKEN_PLATFORMID_KEY, Byte.toString((byte) 1));
            map.put("sdkVer", this.i.h);
            map.put("strategylastUpdateTime", Long.toString(this.j.c().o));
            this.l.a(this.m, System.currentTimeMillis());
            String str2 = this.p;
            this.j.c();
            String strB = str2;
            int i = 0;
            int i2 = 0;
            while (true) {
                int i3 = i + 1;
                if (i < this.d) {
                    if (i3 > 1) {
                        al.d("[Upload] Failed to upload last time, wait and try(%d) again.", Integer.valueOf(i3));
                        ap.b(this.e);
                        if (i3 == this.d) {
                            al.d("[Upload] Use the back-up url at the last time: %s", this.q);
                            strB = this.q;
                        }
                    }
                    al.c("[Upload] Send %d bytes", Integer.valueOf(bArrA.length));
                    strB = b(strB);
                    al.c("[Upload] Upload to %s with cmd %d (pid=%d | tid=%d).", strB, Integer.valueOf(this.g), Integer.valueOf(Process.myPid()), Integer.valueOf(Process.myTid()));
                    byte[] bArrA2 = this.k.a(strB, bArrA, this, map);
                    Map<String, String> map2 = this.k.c;
                    Pair<Boolean, Boolean> pairA = a(bArrA2, map2);
                    if (!((Boolean) pairA.first).booleanValue()) {
                        zBooleanValue = ((Boolean) pairA.second).booleanValue();
                    } else {
                        Pair<Boolean, Boolean> pairA2 = a(map2);
                        if (!((Boolean) pairA2.first).booleanValue()) {
                            zBooleanValue = ((Boolean) pairA2.second).booleanValue();
                        } else {
                            byte[] bArrB = ap.b(bArrA2);
                            if (bArrB != null) {
                                bArrA2 = bArrB;
                            }
                            br brVarA = ae.a(bArrA2);
                            if (brVarA == null) {
                                a(false, 1, "failed to decode response package");
                                Boolean bool = Boolean.FALSE;
                                pair = new Pair(bool, bool);
                            } else {
                                Object[] objArr = new Object[2];
                                objArr[0] = Integer.valueOf(brVarA.b);
                                objArr[1] = Integer.valueOf(brVarA.c == null ? 0 : brVarA.c.length);
                                al.c("[Upload] Response cmd is: %d, length of sBuffer is: %d", objArr);
                                if (!a(brVarA, this.i, this.j)) {
                                    a(false, 2, "failed to process response package");
                                    Boolean bool2 = Boolean.FALSE;
                                    pair = new Pair(bool2, bool2);
                                } else {
                                    a(true, 2, "successfully uploaded");
                                    Boolean bool3 = Boolean.TRUE;
                                    pair = new Pair(bool3, bool3);
                                }
                            }
                            zBooleanValue = !((Boolean) pair.first).booleanValue() ? ((Boolean) pair.second).booleanValue() : false;
                        }
                    }
                    if (!zBooleanValue) {
                        return;
                    }
                    i = i3;
                    i2 = 1;
                } else {
                    a(false, i2, "failed after many attempts");
                    return;
                }
            }
        } catch (Throwable th) {
            if (al.a(th)) {
                return;
            }
            th.printStackTrace();
        }
    }

    private Pair<Boolean, Boolean> a(byte[] bArr, Map<String, String> map) {
        if (bArr == null) {
            a("Failed to upload for no response!");
            return new Pair<>(Boolean.FALSE, Boolean.TRUE);
        }
        al.c("[Upload] Received %d bytes", Integer.valueOf(bArr.length));
        if (bArr.length == 0) {
            a(false, 1, "response data from server is empty");
            if (map != null) {
                for (Map.Entry<String, String> entry : map.entrySet()) {
                    al.c("[Upload] HTTP headers from server: key = %s, value = %s", entry.getKey(), entry.getValue());
                }
            }
            Boolean bool = Boolean.FALSE;
            return new Pair<>(bool, bool);
        }
        Boolean bool2 = Boolean.TRUE;
        return new Pair<>(bool2, bool2);
    }

    public final void a(long j) {
        this.a++;
        this.b += j;
    }

    public final void b(long j) {
        this.c += j;
    }

    private static String b(String str) {
        if (ap.b(str)) {
            return str;
        }
        try {
            return String.format("%s?aid=%s", str, UUID.randomUUID().toString());
        } catch (Throwable th) {
            al.a(th);
            return str;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00ba  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private Pair<Boolean, Boolean> a(Map<String, String> map) {
        boolean z;
        if (map == null || map.size() == 0) {
            al.d("[Upload] Headers is empty.", new Object[0]);
        } else if (!map.containsKey("status")) {
            al.d("[Upload] Headers does not contain %s", "status");
        } else if (!map.containsKey("Bugly-Version")) {
            al.d("[Upload] Headers does not contain %s", "Bugly-Version");
        } else {
            String str = map.get("Bugly-Version");
            if (!str.contains("bugly")) {
                al.d("[Upload] Bugly version is not valid: %s", str);
            } else {
                al.c("[Upload] Bugly version from headers is: %s", str);
                z = true;
                if (z) {
                    al.c("[Upload] Headers from server is not valid, just try again (pid=%d | tid=%d).", Integer.valueOf(Process.myPid()), Integer.valueOf(Process.myTid()));
                    a("[Upload] Failed to upload for no status header.");
                    if (map != null) {
                        for (Map.Entry<String, String> entry : map.entrySet()) {
                            al.c(String.format("[key]: %s, [value]: %s", entry.getKey(), entry.getValue()), new Object[0]);
                        }
                    }
                    al.c("[Upload] Failed to upload for no status header.", new Object[0]);
                    return new Pair<>(Boolean.FALSE, Boolean.TRUE);
                }
                int i = -1;
                try {
                    i = Integer.parseInt(map.get("status"));
                    al.c("[Upload] Status from server is %d (pid=%d | tid=%d).", Integer.valueOf(i), Integer.valueOf(Process.myPid()), Integer.valueOf(Process.myTid()));
                    if (i != 0) {
                        a(false, 1, "status of server is ".concat(String.valueOf(i)));
                        Boolean bool = Boolean.FALSE;
                        return new Pair<>(bool, bool);
                    }
                    Boolean bool2 = Boolean.TRUE;
                    return new Pair<>(bool2, bool2);
                } catch (Throwable unused) {
                    a("[Upload] Failed to upload for format of status header is invalid: " + Integer.toString(i));
                    return new Pair<>(Boolean.FALSE, Boolean.TRUE);
                }
            }
        }
        z = false;
        if (z) {
        }
    }
}
