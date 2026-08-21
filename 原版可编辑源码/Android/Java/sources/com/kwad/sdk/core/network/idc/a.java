package com.kwad.sdk.core.network.idc;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import java.net.URLDecoder;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;

public final class a {
    private final Map<String, String> apS;
    private final com.kwad.sdk.core.network.idc.a.a apT;
    private final Random apU;
    private final Map<String, AtomicBoolean> apV;
    private Context mContext;

    static final class a {
        private static final a apX = new a(0);
    }

    private a() {
        this.apS = new ConcurrentHashMap(8);
        this.apT = new com.kwad.sdk.core.network.idc.a.a();
        this.apU = new Random(System.currentTimeMillis());
        HashMap map = new HashMap();
        this.apV = map;
        map.put("api", new AtomicBoolean(false));
        this.apV.put("ulog", new AtomicBoolean(false));
        this.apV.put("zt", new AtomicBoolean(false));
        this.apV.put("cdn", new AtomicBoolean(false));
    }

    a(byte b) {
        this();
    }

    public static a Bo() {
        return a.apX;
    }

    private void Bp() {
        com.kwad.sdk.core.network.idc.a.a aVarAY = b.aY(this.mContext);
        if (aVarAY.isEmpty()) {
            aVarAY = b.aX(this.mContext);
        }
        this.apT.b(aVarAY);
    }

    private void O(String str, String str2) {
        String host;
        StringBuilder sb;
        List<String> listDd = this.apT.dd(str2);
        if (listDd.isEmpty() || (host = Uri.parse(str).getHost()) == null || host.isEmpty()) {
            return;
        }
        c.d("IdcManager", ">>> switchHost start, type = " + str2 + ", old host = " + host);
        AtomicBoolean atomicBoolean = this.apV.get(str2);
        if (atomicBoolean.compareAndSet(false, true)) {
            try {
                String strDb = db(str2);
                if ((TextUtils.isEmpty(strDb) || host.equals(strDb)) ? false : true) {
                    atomicBoolean.set(false);
                    sb = new StringBuilder("<<< switchHost end, type = ");
                } else {
                    int size = listDd.size();
                    int iIndexOf = listDd.indexOf(host);
                    boolean z = iIndexOf >= 0;
                    if (z) {
                        size--;
                    }
                    if (size <= 0) {
                        atomicBoolean.set(false);
                        sb = new StringBuilder("<<< switchHost end, type = ");
                    } else {
                        int iNextInt = this.apU.nextInt(size) + 1;
                        if (z) {
                            iNextInt += iIndexOf;
                        }
                        int size2 = iNextInt % listDd.size();
                        String str3 = listDd.get(size2);
                        c.d("IdcManager", "switchHost success, type = " + str2 + ", old host = " + host + ",new host = " + str3 + ",hostList = " + listDd + ", key = " + size2);
                        Q(str2, str3);
                        atomicBoolean.set(false);
                        sb = new StringBuilder("<<< switchHost end, type = ");
                    }
                }
                sb.append(str2);
                sb.append(", old host = ");
                sb.append(host);
                c.d("IdcManager", sb.toString());
            } catch (Throwable th) {
                atomicBoolean.set(false);
                c.d("IdcManager", "<<< switchHost end, type = " + str2 + ", old host = " + host);
                throw th;
            }
        }
    }

    private void Q(String str, String str2) {
        this.apS.put(str, str2);
        g.execute(new Runnable() {
            @Override
            public final void run() {
                b.a(a.this.mContext, (Map<String, String>) a.this.apS);
            }
        });
    }

    private static boolean a(DomainException domainException) {
        if (domainException.getHttpCode() >= 500) {
            return true;
        }
        return domainException.isConnectException();
    }

    private void da(String str) {
        String strDb = db(str);
        List<String> listDd = this.apT.dd(str);
        if (listDd.isEmpty()) {
            return;
        }
        String str2 = listDd.get(0);
        if (!TextUtils.equals(str2, strDb) && ag.fB(str2)) {
            Q(str, str2);
        }
    }

    private String db(String str) {
        return this.apS.get(str);
    }

    public final String P(String str, String str2) {
        String str3 = this.apS.get(str);
        return TextUtils.isEmpty(str3) ? str2 : str3;
    }

    public final String R(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        String strDb = db(str2);
        if (strDb == null || strDb.isEmpty()) {
            return str;
        }
        Uri uri = Uri.parse(str);
        if (TextUtils.isEmpty(uri.getPath()) || strDb.equals(uri.getHost())) {
            return str;
        }
        Uri.Builder builder = new Uri.Builder();
        builder.authority(strDb);
        builder.scheme(TextUtils.isEmpty(uri.getScheme()) ? "https" : uri.getScheme());
        builder.path(uri.getPath());
        if (!TextUtils.isEmpty(uri.getQuery())) {
            builder.query(uri.getQuery());
        }
        return URLDecoder.decode(builder.build().toString());
    }

    public final void a(com.kwad.sdk.core.network.idc.a.a aVar) {
        this.apT.b(aVar);
        g.execute(new Runnable() {
            @Override
            public final void run() {
                b.a(a.this.mContext, a.this.apT);
            }
        });
    }

    public final void a(String str, int i, Throwable th) {
        a(str, "ulog", new DomainException(i, th));
    }

    public final void a(String str, String str2, DomainException domainException) {
        if (str != null && a(domainException)) {
            O(str, str2);
        }
    }

    public final void d(String str, Throwable th) {
        a(str, "cdn", new DomainException(th));
    }

    public final String dc(String str) {
        return R(str, "cdn");
    }

    public final void init(final Context context) {
        this.mContext = context.getApplicationContext();
        g.execute(new aw() {
            @Override
            public final void doTask() {
                a.this.apS.putAll(b.aZ(context));
                a.this.Bp();
                if (a.this.apT.isEmpty()) {
                    return;
                }
                Iterator<String> it = a.this.apT.Bs().iterator();
                while (it.hasNext()) {
                    a.this.da(it.next());
                }
            }
        });
    }
}
