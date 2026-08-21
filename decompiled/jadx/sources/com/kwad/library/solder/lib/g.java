package com.kwad.library.solder.lib;

import android.content.Context;
import com.kwad.library.solder.lib.ext.PluginError;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class g extends com.kwad.library.solder.lib.a.a {
    public g(String str) {
        super(str);
    }

    private static void e(File file) throws PluginError.LoadError {
        if (!file.exists()) {
            a.w("Sodler.simple.package", "Apk file not exist.");
            throw new PluginError.LoadError("Apk file not exist.", 4001);
        }
        if (file.getAbsolutePath().trim().startsWith("/data/")) {
            return;
        }
        a.w("Sodler.simple.package", "Apk file seems to locate in external path (not executable), path = " + file.getAbsolutePath());
    }

    @Override // com.kwad.library.solder.lib.a.a
    public void f(Context context, String str) throws PluginError.LoadError {
        e(new File(str));
    }
}
