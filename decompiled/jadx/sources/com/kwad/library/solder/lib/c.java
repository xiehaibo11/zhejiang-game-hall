package com.kwad.library.solder.lib;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.q;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
final class c implements com.kwad.library.solder.lib.a.c {
    private final File afw;
    private final File afx;
    private final com.kwad.library.solder.lib.ext.c afy;
    private final Context mContext;

    c(Context context, com.kwad.library.solder.lib.ext.c cVar) {
        Context applicationContext = context.getApplicationContext();
        this.mContext = applicationContext;
        this.afy = cVar;
        this.afw = applicationContext.getDir(cVar.wF(), 0);
        this.afx = this.mContext.getCacheDir();
    }

    private String a(com.kwad.library.solder.lib.a.a aVar) {
        return y(aVar.getId(), aVar.getVersion());
    }

    private static boolean a(String str, com.kwad.library.solder.lib.a.a aVar) {
        if (!q.fr(str)) {
            a.w("Sodler.installer", "Plugin not found, path = " + str);
            return false;
        }
        if (aVar != null && !TextUtils.isEmpty(aVar.wn()) && !TextUtils.equals(ad.ab(new File(str)), aVar.wn())) {
            return false;
        }
        new StringBuilder("Check plugin's signatures success, path = ").append(str);
        return true;
    }

    private boolean a(String str, com.kwad.library.solder.lib.a.a aVar, boolean z) {
        if (a(str, aVar)) {
            return true;
        }
        delete(str);
        return false;
    }

    private static void delete(String str) {
        q.delete(str);
    }

    private boolean i(String str, String str2, boolean z) {
        if (a(y(str, str2), null)) {
            return true;
        }
        t(str, str2);
        return false;
    }

    private void t(String str, String str2) {
        q.delete(y(str, str2));
    }

    private String wa() {
        return this.afw.getAbsolutePath();
    }

    private String x(String str, String str2) {
        return wa() + File.separator + str + File.separator + str2;
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final String b(com.kwad.library.solder.lib.a.a aVar) throws PluginError.InstallError {
        String strA = a(aVar);
        if (TextUtils.isEmpty(strA)) {
            throw new PluginError.InstallError("Can not get install path.", PluginError.ERROR_INS_INSTALL_PATH);
        }
        new StringBuilder("Install path = ").append(strA);
        File file = new File(strA);
        if (file.exists() && !this.afy.wL() && a(file.getAbsolutePath(), aVar, true)) {
            return strA;
        }
        String strWm = aVar.wm();
        new StringBuilder("Install plugin, path = ").append(strWm);
        File file2 = new File(strWm);
        if (!file2.exists()) {
            a.w("Sodler.installer", "Plugin path not exist");
            throw new PluginError.InstallError("Plugin file not exist.", 3001);
        }
        if (!a(strWm, aVar, true)) {
            a.w("Sodler.installer", "Check plugin's signatures fail.");
            throw new PluginError.InstallError("Check plugin's signatures fail.", 3003);
        }
        StringBuilder sb = new StringBuilder("Install plugin, from = ");
        sb.append(strWm);
        sb.append(", to = ");
        sb.append(strA);
        if (file2.renameTo(file)) {
            return strA;
        }
        try {
            vZ();
            try {
                q.f(file2, file);
                q.R(file2);
                return strA;
            } catch (Throwable th) {
                a.e("Sodler.installer", th);
                throw new PluginError.InstallError(th, 3004);
            }
        } catch (Throwable th2) {
            a.e("Sodler.installer", th2);
            throw new PluginError.InstallError(th2, 3005);
        }
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final String bA(String str) {
        return wa() + File.separator + str;
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final void bz(String str) {
        File file = new File(bA(str));
        if (file.exists()) {
            q.R(file);
        }
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final File d(String str, boolean z) {
        String md5;
        if (str == null || (md5 = com.kwad.library.solder.lib.d.b.getMD5(str)) == null) {
            return null;
        }
        if (!z) {
            return File.createTempFile(md5 + System.currentTimeMillis(), this.afy.wJ(), this.afx);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(md5);
        if (this.afy.wJ() != null) {
            sb.append(this.afy.wJ());
        }
        File file = new File(this.afx, sb.toString());
        if (file.exists() || file.createNewFile()) {
            return file;
        }
        return null;
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final void u(String str, String str2) {
        File file = new File(x(str, str2));
        if (file.exists()) {
            q.R(file);
        }
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final void vZ() throws IOException {
        if (this.afw.getFreeSpace() < 10000000) {
            throw new IOException("No enough capacity.");
        }
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final String y(String str, String str2) {
        return wa() + File.separator + str + File.separator + str2 + File.separator + this.afy.wK();
    }

    @Override // com.kwad.library.solder.lib.a.c
    public final boolean z(String str, String str2) {
        if (this.afy.wL()) {
            return false;
        }
        return i(str, str2, true);
    }
}
