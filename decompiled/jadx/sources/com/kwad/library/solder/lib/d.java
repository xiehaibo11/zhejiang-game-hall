package com.kwad.library.solder.lib;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.q;
import java.io.File;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
final class d implements com.kwad.library.solder.lib.a.d {
    private final ConcurrentHashMap<String, com.kwad.library.solder.lib.a.a> afz = new ConcurrentHashMap<>();
    private final Context mContext;

    d(Context context) {
        this.mContext = context.getApplicationContext();
    }

    private static void a(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("onCanceled state = ").append(fVar.getState());
        fVar.bI(-7);
        fVar.wp().wi().o(fVar);
    }

    private com.kwad.library.solder.lib.a.a b(com.kwad.library.solder.lib.a.f fVar, com.kwad.library.solder.lib.a.a aVar) throws PluginError.LoadError {
        String strWm = aVar.wm();
        File file = new File(strWm);
        new StringBuilder("Loading plugin, path = ").append(strWm);
        com.kwad.library.solder.lib.a.e eVarWp = fVar.wp();
        if (!file.exists()) {
            throw new PluginError.LoadError("Apk file not exist.", 3001);
        }
        String id = fVar.getId();
        String version = fVar.getVersion();
        com.kwad.library.solder.lib.a.a aVarBB = bB(id);
        if (aVarBB != null) {
            new StringBuilder("The current plugin has been loaded, id = ").append(version);
            return aVarBB;
        }
        aVar.bE(id);
        aVar.bD(version);
        if (eVarWp.wg().z(id, version)) {
            String strY = eVarWp.wg().y(id, version);
            if (q.fq(strY)) {
                aVar.bF(strY);
                aVar.i(this.mContext, strY);
                b(id, aVar);
                return aVar;
            }
        }
        String strB = eVarWp.wg().b(aVar);
        aVar.bF(strB);
        new StringBuilder("installed .").append(strB);
        aVar.i(this.mContext, strB);
        b(id, aVar);
        if (strWm.endsWith(eVarWp.wd().wJ())) {
            q.delete(strWm);
        }
        return aVar;
    }

    private void b(com.kwad.library.solder.lib.a.f fVar, PluginError pluginError) {
        new StringBuilder("onError state = ").append(fVar.getState());
        fVar.bI(-5);
        fVar.j(pluginError);
        h(fVar);
    }

    private synchronized void b(String str, com.kwad.library.solder.lib.a.a aVar) {
        if (aVar != null) {
            if (aVar.isLoaded()) {
                this.afz.put(str, aVar);
            }
        }
    }

    private static void g(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("onPreLoad state = ").append(fVar.getState());
        fVar.wp().wi();
    }

    private static void h(com.kwad.library.solder.lib.a.f fVar) {
        PluginError loadError;
        new StringBuilder("onPostLoad state = ").append(fVar.getState());
        if (fVar.getState() == 0) {
            com.kwad.library.solder.lib.a.a aVarWw = fVar.ww();
            if (aVarWw != null) {
                fVar.wp().wi().c(fVar, aVarWw);
                return;
            }
            fVar.bI(-1);
        }
        if (fVar.wr() != null) {
            loadError = fVar.wr() instanceof PluginError ? (PluginError) fVar.wr() : new PluginError.LoadError(fVar.wr(), 4011);
        } else {
            loadError = new PluginError.LoadError("Can not get plugin instance " + fVar.getState(), 4011);
        }
        fVar.wp().wi().c(fVar, loadError);
    }

    @Override // com.kwad.library.solder.lib.a.d
    public final synchronized com.kwad.library.solder.lib.a.a bB(String str) {
        com.kwad.library.solder.lib.a.a aVar = this.afz.get(str);
        if (aVar != null) {
            if (!aVar.isLoaded()) {
                return null;
            }
        }
        return aVar;
    }

    @Override // com.kwad.library.solder.lib.a.d
    public final com.kwad.library.solder.lib.a.f f(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("Loading plugin, id = ").append(fVar.getId());
        fVar.bG("Load");
        g(fVar);
        if (fVar.isCanceled()) {
            a(fVar);
            return fVar;
        }
        fVar.wD();
        com.kwad.library.solder.lib.a.a aVar = this.afz.get(fVar.getId());
        if (aVar != null && aVar.isLoaded()) {
            fVar.c(aVar);
            new StringBuilder("Load plugin success, path = ").append(aVar.wm());
            fVar.bI(0);
            h(fVar);
            return fVar;
        }
        List<com.kwad.library.solder.lib.c.a> listWB = fVar.wB();
        com.kwad.library.solder.lib.c.b bVarK = f.k(fVar);
        if (bVarK == null) {
            fVar.bI(-1);
            h(fVar);
            return fVar;
        }
        com.kwad.library.solder.lib.c.a aVar2 = null;
        if (listWB != null && !listWB.isEmpty()) {
            for (com.kwad.library.solder.lib.c.a aVar3 : listWB) {
                if (bVarK.version.equals(aVar3.version)) {
                    aVar2 = aVar3;
                } else {
                    fVar.wp().wg().u(fVar.getId(), aVar3.version);
                }
            }
        }
        if (aVar2 != null) {
            String strY = fVar.wp().wg().y(aVar2.agy, aVar2.version);
            new StringBuilder("-------本地已存在--------").append(strY);
            fVar.bH(strY);
            fVar.bI(strY);
            fVar.bI(1);
            fVar.bD(aVar2.version);
        } else {
            if (!ag.isWifiConnected(this.mContext) && (bVarK.agC || (bVarK.agD && fVar.wu() > 0))) {
                b(fVar, new PluginError.NotWifiDownloadError("It can be downloaded only on WiFi", PluginError.ERROR_UPD_NOT_WIFI_DOWNLOAD));
                return fVar;
            }
            fVar.wp().wf().i(fVar);
        }
        if (fVar.getState() != 1) {
            h(fVar);
            return fVar;
        }
        String strWv = fVar.wv();
        new StringBuilder("-------更新成功或者获取到本地成功------------").append(strWv);
        if (TextUtils.isEmpty(strWv)) {
            fVar.bI(-1);
            h(fVar);
            return fVar;
        }
        com.kwad.library.solder.lib.a.a aVarA = fVar.bL(strWv).a(bVarK);
        if (fVar.isCanceled()) {
            a(fVar);
            return fVar;
        }
        try {
            fVar.c(b(fVar, aVarA));
            new StringBuilder("Load plugin success, path = ").append(strWv);
            fVar.bI(0);
            h(fVar);
            return fVar;
        } catch (PluginError.InstallError e) {
            e = e;
            b(fVar, e);
            return fVar;
        } catch (PluginError.LoadError e2) {
            e = e2;
            b(fVar, e);
            return fVar;
        } catch (Throwable th) {
            a.e("Sodler.loader", "Load plugin failed, path = " + strWv, th);
            b(fVar, new PluginError.InstallError("Load or install plugin failed", 4004));
            return fVar;
        }
    }
}
