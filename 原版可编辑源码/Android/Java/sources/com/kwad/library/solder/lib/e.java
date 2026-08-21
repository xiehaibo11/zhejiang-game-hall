package com.kwad.library.solder.lib;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.library.solder.lib.a.g;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.q;
import java.io.File;

final class e implements com.kwad.library.solder.lib.a.g {
    private g.a afA;
    private final Context mContext;

    e(Context context) {
        this.mContext = context.getApplicationContext();
    }

    private void a(int i, com.kwad.library.solder.lib.a.f fVar) {
        if (i == 0) {
            com.kwad.library.solder.lib.c.b bVarK = f.k(fVar);
            if (bVarK != null) {
                StringBuilder sb = new StringBuilder("Download new plugin, version = ");
                sb.append(bVarK.version);
                sb.append(", url = ");
                sb.append(bVarK.agz);
                fVar.bI(3);
                fVar.bK(bVarK.agz);
                fVar.P(bVarK.agA);
                fVar.bJ(bVarK.agB);
                fVar.bD(bVarK.version);
                return;
            }
        } else if (i != -1) {
            return;
        }
        fVar.bI(-3);
    }

    private static void a(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("onCanceled state = ").append(fVar.getState());
        fVar.bI(-7);
        fVar.wp().wi().o(fVar);
    }

    private void a(com.kwad.library.solder.lib.a.f fVar, PluginError.UpdateError updateError) {
        new StringBuilder("onError state = ").append(fVar.getState());
        fVar.bI(-4);
        fVar.j(updateError);
        fVar.wE();
        b(fVar);
    }

    private void a(com.kwad.library.solder.lib.a.f fVar, File file) throws PluginError.UpdateError {
        long jCurrentTimeMillis = System.currentTimeMillis();
        Log.v("Sodler.update", "start download:" + fVar.getId());
        g.a aVar = this.afA;
        if (aVar == null) {
            throw new PluginError.UpdateError("update ", PluginError.ERROR_UPD_NO_DOWNLOADER);
        }
        aVar.a(fVar, file);
        Log.v("Sodler.update", "finish download:" + fVar.getId() + " cost:" + (System.currentTimeMillis() - jCurrentTimeMillis));
    }

    private static void b(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("onPostUpdate state = ").append(fVar.getState());
        fVar.wp().wi().q(fVar);
    }

    private static void c(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("onPreUpdate state = ").append(fVar.getState());
        fVar.wp().wi().p(fVar);
    }

    private com.kwad.library.solder.lib.a.f j(com.kwad.library.solder.lib.a.f fVar) {
        if (fVar.wt()) {
            fVar.wp().wg().bz(fVar.getId());
        }
        try {
        } catch (Exception e) {
            a.w("Sodler.update", "Request remote plugin info fail, error = " + e.toString());
            a.e("Sodler.update", e);
            fVar.bI(-2);
            fVar.j(new PluginError.UpdateError(e, PluginError.ERROR_UPD_REQUEST));
        }
        if (fVar.wy()) {
            com.kwad.library.solder.lib.c.b bVarK = f.k(fVar);
            fVar.bI(2);
            fVar.bD(bVarK.version);
            return fVar;
        }
        if (!fVar.wy() && fVar.wC() == null) {
            fVar.wp().wh().e(fVar);
        }
        if (TextUtils.isEmpty(fVar.getId())) {
            a(-1, fVar);
            return fVar;
        }
        a(0, fVar);
        return fVar;
    }

    @Override
    public final com.kwad.library.solder.lib.a.g a(g.a aVar) {
        this.afA = aVar;
        return this;
    }

    @Override
    public final com.kwad.library.solder.lib.a.f i(com.kwad.library.solder.lib.a.f fVar) {
        new StringBuilder("Start update, id = ").append(fVar.getId());
        fVar.bG("Update");
        c(fVar);
        j(fVar);
        if (fVar.isCanceled()) {
            a(fVar);
            return fVar;
        }
        if (fVar.getState() == 2) {
            try {
                fVar.wp().wg().vZ();
                try {
                    File fileD = fVar.wp().wg().d(fVar.wz(), false);
                    if (fVar.isCanceled()) {
                        a(fVar);
                        return fVar;
                    }
                    try {
                        q.a(this.mContext, fVar.wz(), fileD);
                        fVar.bH(fileD.getAbsolutePath());
                        fVar.bI(1);
                        b(fVar);
                        return fVar;
                    } catch (Throwable th) {
                        a.e("Sodler.update", th);
                        a(fVar, new PluginError.UpdateError(th, 2004));
                        return fVar;
                    }
                } catch (Throwable th2) {
                    new StringBuilder("Can not get temp file, error = ").append(th2.getLocalizedMessage());
                    a.e("Sodler.update", th2);
                    a(fVar, new PluginError.UpdateError(th2, 2003));
                    return fVar;
                }
            } catch (Throwable th3) {
                a.e("Sodler.update", th3);
                a(fVar, new PluginError.UpdateError(th3, 2005));
                return fVar;
            }
        }
        if (fVar.getState() != 3) {
            b(fVar);
            return fVar;
        }
        try {
            fVar.wp().wg().vZ();
            try {
                File fileD2 = fVar.wp().wg().d(fVar.getDownloadUrl(), fVar.wp().wd().wM());
                if (fVar.wA() != null && fileD2.exists() && TextUtils.equals(ad.ab(fileD2), fVar.wA())) {
                    fVar.bH(fileD2.getAbsolutePath());
                    fVar.bI(1);
                    b(fVar);
                    return fVar;
                }
                try {
                    a(fVar, fileD2);
                    fVar.bH(fileD2.getAbsolutePath());
                    fVar.bI(1);
                    b(fVar);
                    return fVar;
                } catch (PluginError.CancelError unused) {
                    a(fVar);
                    return fVar;
                } catch (PluginError.UpdateError e) {
                    new StringBuilder("Download plugin fail, error = ").append(e.getLocalizedMessage());
                    a.e("Sodler.update", e);
                    fVar.j(e);
                    a(fVar, e);
                    return fVar;
                }
            } catch (Throwable th4) {
                new StringBuilder("Can not get temp file, error = ").append(th4.getLocalizedMessage());
                a.e("Sodler.update", th4);
                a(fVar, new PluginError.UpdateError(th4, 2003));
                return fVar;
            }
        } catch (Throwable th5) {
            a.e("Sodler.update", th5);
            a(fVar, new PluginError.UpdateError(th5, 2005));
            return fVar;
        }
    }
}
