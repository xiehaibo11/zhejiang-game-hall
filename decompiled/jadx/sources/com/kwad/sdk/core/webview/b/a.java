package com.kwad.sdk.core.webview.b;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebResourceResponse;
import com.kwad.sdk.core.NetworkMonitor;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.core.webview.b.b.a;
import com.kwad.sdk.core.webview.b.c.b;
import com.kwad.sdk.crash.utils.h;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.q;
import com.kwad.sdk.utils.t;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static volatile a ayy;
    private Context mContext;
    private long mInitTime;
    private volatile boolean mHasInit = false;
    private final List<com.kwad.sdk.h.a.b> ayz = new CopyOnWriteArrayList();
    private final List<String> ayA = new CopyOnWriteArrayList();
    private final List<String> ayB = new CopyOnWriteArrayList();
    private final NetworkMonitor.a ayC = new NetworkMonitor.a() { // from class: com.kwad.sdk.core.webview.b.a.2
        @Override // com.kwad.sdk.core.NetworkMonitor.a
        public final void a(NetworkMonitor.NetworkState networkState) {
            if (networkState == NetworkMonitor.NetworkState.NETWORK_WIFI || networkState == NetworkMonitor.NetworkState.NETWORK_MOBILE) {
                a.this.Eg();
            }
        }
    };

    private a() {
    }

    public static a Ee() {
        if (ayy == null) {
            synchronized (a.class) {
                if (ayy == null) {
                    ayy = new a();
                }
            }
        }
        return ayy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<com.kwad.sdk.h.a.b> Eh() {
        List<com.kwad.sdk.h.a.a> list;
        SdkConfigData sdkConfigDataZw = d.zw();
        if (sdkConfigDataZw == null || (list = sdkConfigDataZw.h5PreloadConfigs) == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (com.kwad.sdk.h.a.a aVar : list) {
            for (com.kwad.sdk.h.a.b bVar : aVar.aCa) {
                a(bVar, aVar);
                if (bVar.isValid()) {
                    arrayList.add(bVar);
                }
            }
        }
        return arrayList;
    }

    private WebResourceResponse Y(String str, String str2) {
        int i;
        String str3;
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            b.a aVar = new b.a();
            this.ayA.add(str);
            WebResourceResponse webResourceResponseA = a(str, str2, aVar, false);
            long jCurrentTimeMillis2 = System.currentTimeMillis() - jCurrentTimeMillis;
            if (webResourceResponseA != null) {
                c.d("HybridPackageManager", "load success time:" + jCurrentTimeMillis2 + "--url:" + str2);
                i = 1;
                str3 = "";
            } else {
                c.d("HybridPackageManager", "load fail errorMsg:" + aVar.msg + "-url:" + str2);
                i = 2;
                str3 = aVar.msg;
            }
            com.kwad.sdk.core.webview.b.c.b.a(str2, str, i, str3, jCurrentTimeMillis2);
            return webResourceResponseA;
        } catch (Throwable th) {
            c.printStackTraceOnly(th);
            com.kwad.sdk.core.webview.b.c.b.a(str2, str, 2, "HybridWebViewClient中 Exception " + Log.getStackTraceString(th), System.currentTimeMillis() - jCurrentTimeMillis);
            return null;
        }
    }

    private WebResourceResponse a(String str, String str2, b.a aVar, boolean z) {
        com.kwad.sdk.h.a.b bVarEa = ea(str);
        if (bVarEa != null) {
            return b.a(this.mContext, str2, bVarEa, aVar, z);
        }
        com.kwad.sdk.h.a.b bVarDZ = dZ(str);
        if (bVarDZ == null) {
            aVar.msg = "配置文件没有下发该zip资源";
            return null;
        }
        aVar.msg = "资源未下载:" + bVarDZ.loadType;
        b(bVarDZ);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(com.kwad.sdk.h.a.b bVar) {
        if (this.ayB.contains(bVar.aCb) || TextUtils.isEmpty(bVar.packageUrl)) {
            return;
        }
        com.kwad.sdk.core.webview.b.b.a.a(bVar, new a.InterfaceC0217a() { // from class: com.kwad.sdk.core.webview.b.a.4
            @Override // com.kwad.sdk.core.webview.b.b.a.InterfaceC0217a
            public final void c(com.kwad.sdk.h.a.b bVar2) {
                a.this.ayB.add(bVar2.aCb);
                c.d("HybridPackageManager", "download onStart: " + bVar2.toString());
            }

            @Override // com.kwad.sdk.core.webview.b.b.a.InterfaceC0217a
            public final void d(com.kwad.sdk.h.a.b bVar2) {
                c.d("HybridPackageManager", "download success: " + bVar2.toString());
                if (com.kwad.sdk.core.webview.b.b.b.a(a.this.mContext, bVar2)) {
                    c.d("HybridPackageManager", "install success: " + bVar2.toString());
                    a.this.ayz.add(bVar2);
                    a aVar = a.this;
                    aVar.bo(aVar.mContext);
                    com.kwad.sdk.core.webview.b.c.b.a(bVar2, 4);
                }
                a.this.ayB.remove(bVar2.aCb);
            }

            @Override // com.kwad.sdk.core.webview.b.b.a.InterfaceC0217a
            public final void e(com.kwad.sdk.h.a.b bVar2) {
                c.d("HybridPackageManager", "download failure: " + bVar2.toString());
                a.this.ayB.remove(bVar2.aCb);
            }
        });
    }

    private void a(com.kwad.sdk.h.a.b bVar, com.kwad.sdk.h.a.a aVar) {
        bVar.aCb = aVar.sceneId;
        if (TextUtils.isEmpty(bVar.packageUrl)) {
            return;
        }
        String strEe = com.kwad.sdk.core.webview.b.c.a.ee(bVar.packageUrl);
        if (TextUtils.isEmpty(strEe)) {
            return;
        }
        bVar.aCc = strEe;
        bVar.aCd = com.kwad.sdk.core.webview.b.c.a.C(this.mContext, bVar.aCc);
    }

    private void b(final com.kwad.sdk.h.a.b bVar) {
        g.execute(new Runnable() { // from class: com.kwad.sdk.core.webview.b.a.5
            @Override // java.lang.Runnable
            public final void run() {
                a.this.a(bVar);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bo(Context context) {
        String string;
        FileOutputStream fileOutputStream;
        synchronized (this.ayz) {
            FileOutputStream fileOutputStream2 = null;
            try {
                try {
                    File fileBs = com.kwad.sdk.core.webview.b.c.a.bs(context);
                    string = t.I(this.ayz).toString();
                    fileOutputStream = new FileOutputStream(fileBs);
                } catch (Exception unused) {
                }
            } catch (Throwable th) {
                th = th;
            }
            try {
                fileOutputStream.write(string.getBytes());
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
            } catch (Exception unused2) {
                fileOutputStream2 = fileOutputStream;
                c.e("updatePackageIndexFile", "read packageIndex file error");
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream2);
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream2 = fileOutputStream;
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream2);
                throw th;
            }
            this.ayA.clear();
            for (com.kwad.sdk.h.a.b bVar : this.ayz) {
                if (bVar.aCf) {
                    this.ayA.add(bVar.aCb);
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bp(Context context) {
        FileInputStream fileInputStream;
        List listA;
        synchronized (this.ayz) {
            FileInputStream fileInputStream2 = null;
            FileInputStream fileInputStream3 = null;
            List list = null;
            try {
                File fileBs = com.kwad.sdk.core.webview.b.c.a.bs(context);
                if (q.L(fileBs)) {
                    fileInputStream = new FileInputStream(fileBs);
                    try {
                        try {
                            listA = t.a(h.b(new InputStreamReader(fileInputStream)), new com.kwad.sdk.core.c<com.kwad.sdk.h.a.b>() { // from class: com.kwad.sdk.core.webview.b.a.6
                                private static com.kwad.sdk.h.a.b Ei() {
                                    return new com.kwad.sdk.h.a.b();
                                }

                                @Override // com.kwad.sdk.core.c
                                public final /* synthetic */ com.kwad.sdk.core.b yV() {
                                    return Ei();
                                }
                            });
                            fileInputStream3 = fileInputStream;
                        } catch (Exception e) {
                            e = e;
                            e.printStackTrace();
                            com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                        }
                    } catch (Throwable th) {
                        th = th;
                        fileInputStream2 = fileInputStream;
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream2);
                        throw th;
                    }
                } else {
                    listA = null;
                }
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream3);
                list = listA;
            } catch (Exception e2) {
                e = e2;
                fileInputStream = null;
            } catch (Throwable th2) {
                th = th2;
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream2);
                throw th;
            }
            if (list != null) {
                this.ayz.clear();
                this.ayz.addAll(list);
            }
            this.ayA.clear();
            for (com.kwad.sdk.h.a.b bVar : this.ayz) {
                if (!q.fr(com.kwad.sdk.core.webview.b.c.a.E(this.mContext, bVar.aCc))) {
                    this.ayz.remove(bVar);
                }
                if (bVar.aCf) {
                    this.ayA.add(bVar.aCb);
                }
            }
        }
    }

    private WebResourceResponse dY(String str) {
        try {
            b.a aVar = new b.a();
            synchronized (this.ayz) {
                Iterator<String> it = this.ayA.iterator();
                while (it.hasNext()) {
                    WebResourceResponse webResourceResponseA = a(it.next(), str, aVar, true);
                    if (webResourceResponseA != null) {
                        return webResourceResponseA;
                    }
                }
                return null;
            }
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    private com.kwad.sdk.h.a.b dZ(String str) {
        List<com.kwad.sdk.h.a.b> listEh = Eh();
        if (listEh != null && !listEh.isEmpty()) {
            for (com.kwad.sdk.h.a.b bVar : listEh) {
                if (bc.isEquals(str, bVar.aCb)) {
                    return bVar;
                }
            }
        }
        return null;
    }

    private com.kwad.sdk.h.a.b ea(String str) {
        synchronized (this.ayz) {
            if (!TextUtils.isEmpty(str) && this.ayz.size() > 0) {
                for (com.kwad.sdk.h.a.b bVar : this.ayz) {
                    if (TextUtils.equals(str, bVar.aCb)) {
                        return bVar;
                    }
                }
                return null;
            }
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void z(List<com.kwad.sdk.h.a.b> list) {
        synchronized (this.ayz) {
            bp(this.mContext);
            for (com.kwad.sdk.h.a.b bVar : this.ayz) {
                if (!list.contains(bVar)) {
                    q.aa(new File(bVar.aCd));
                    this.ayz.remove(bVar);
                } else if (q.fr(com.kwad.sdk.core.webview.b.c.a.E(this.mContext, bVar.aCc))) {
                    list.remove(bVar);
                }
            }
            bo(this.mContext);
        }
    }

    public final long Ef() {
        return this.mInitTime;
    }

    public final void Eg() {
        if (d.zF()) {
            g.execute(new Runnable() { // from class: com.kwad.sdk.core.webview.b.a.3
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        List<com.kwad.sdk.h.a.b> listEh = a.this.Eh();
                        if (listEh != null && !listEh.isEmpty()) {
                            a.this.z(listEh);
                            for (com.kwad.sdk.h.a.b bVar : listEh) {
                                if (bVar.packageType == 1 && (bVar.loadType == 1 || (bVar.loadType == 2 && ag.isWifiConnected(a.this.mContext)))) {
                                    a.this.a(bVar);
                                }
                            }
                        }
                    } catch (Throwable th) {
                        ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
                    }
                }
            });
        }
    }

    public final WebResourceResponse X(String str, String str2) {
        if (!this.mHasInit) {
            return null;
        }
        String strEd = com.kwad.sdk.core.webview.b.c.a.ed(str);
        if (TextUtils.isEmpty(strEd)) {
            return dY(str);
        }
        com.kwad.sdk.core.webview.b.c.b.b(str2, strEd, str);
        WebResourceResponse webResourceResponseY = Y(strEd, str);
        com.kwad.sdk.core.webview.b.c.b.c(str2, strEd, str);
        return webResourceResponseY;
    }

    public final synchronized void init(final Context context) {
        if (!this.mHasInit && context != null) {
            this.mContext = ServiceProvider.HD();
            this.mHasInit = true;
            g.execute(new aw() { // from class: com.kwad.sdk.core.webview.b.a.1
                @Override // com.kwad.sdk.utils.aw
                public final void doTask() {
                    try {
                        if (d.b(com.kwad.sdk.core.config.c.alH)) {
                            a.this.mInitTime = System.currentTimeMillis();
                            a.this.bp(context);
                            a.this.Eg();
                            NetworkMonitor.getInstance().a(a.this.mContext, a.this.ayC);
                        }
                    } catch (Throwable th) {
                        ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
                    }
                }
            });
        }
    }
}
