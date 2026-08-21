package com.kwad.library.b;

import android.content.Context;
import android.content.res.Resources;
import android.os.Build;
import android.util.Log;
import com.kwad.library.b.a.b;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.library.solder.lib.h;
import com.kwad.sdk.utils.q;
import dalvik.system.BaseDexClassLoader;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends h {
    private b aeX;
    private Resources aeY;

    public a(String str) {
        super(str);
    }

    private b a(File file, File file2) {
        if (Build.VERSION.SDK_INT < 26) {
            if (!file.canRead()) {
                file.setReadable(true);
            }
            if (!file.canWrite()) {
                file.setWritable(true);
            }
            if (!file.canRead() || !file.canWrite()) {
                file = null;
            }
        }
        return new b(new com.kwad.library.b.a.a((BaseDexClassLoader) getClass().getClassLoader()), file2.getAbsolutePath(), file, this.afP.getAbsolutePath(), this.afV.agG, this.afV.agF);
    }

    private File d(File file) throws IOException {
        File file2 = new File(file.getParentFile(), this.afy.wG());
        q.X(file2);
        return file2;
    }

    @Override // com.kwad.library.solder.lib.h, com.kwad.library.solder.lib.g, com.kwad.library.solder.lib.a.a
    public final void f(Context context, String str) throws PluginError.LoadError {
        super.f(context, str);
        File file = new File(str);
        try {
            this.aeX = a(d(file), file);
            try {
                this.aeY = com.kwad.library.b.b.a.a(context, context.getResources(), str);
                StringBuilder sb = new StringBuilder("Install plugin mClassLoader: ");
                sb.append(this.aeX);
                sb.append(", mResources: ");
                sb.append(this.aeY);
            } catch (Exception e) {
                Log.getStackTraceString(e);
                throw new PluginError.LoadError(e, 4006);
            }
        } catch (IOException e2) {
            throw new PluginError.LoadError(e2, 4002);
        }
    }

    public final Resources getResources() {
        return this.aeY;
    }

    public final b vV() {
        return this.aeX;
    }
}
