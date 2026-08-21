package com.kwad.sdk.core.diskcache.b;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.ao;
import com.kwad.sdk.utils.av;
import java.io.File;
import java.io.IOException;

public final class a {
    private com.kwad.sdk.core.diskcache.a.a any;

    static final class a {
        static final a anz = new a(0);
    }

    private a() {
    }

    a(byte b) {
        this();
    }

    public static a Au() {
        return a.anz;
    }

    private boolean Av() {
        init(((e) ServiceProvider.get(e.class)).getContext());
        return this.any == null;
    }

    private File cE(String str) {
        if (Av() || TextUtils.isEmpty(str)) {
            return null;
        }
        return b.a(this.any, str);
    }

    private synchronized void init(Context context) {
        if (this.any != null || context == null) {
            return;
        }
        try {
            this.any = com.kwad.sdk.core.diskcache.a.a.a(av.cJ(context), 1, 1, 209715200L);
        } catch (Throwable unused) {
        }
    }

    public final boolean a(String str, a.a aVar) {
        File fileCE;
        if (!Av() && !TextUtils.isEmpty(str)) {
            String strCF = c.cF(str);
            if (b.a(this.any, str, strCF, aVar) && (fileCE = cE(strCF)) != null && fileCE.exists()) {
                return true;
            }
        }
        return false;
    }

    public final boolean b(String str, String str2, a.a aVar) {
        File fileCE;
        if (!Av() && !TextUtils.isEmpty(str)) {
            String strCF = c.cF(str2);
            if (b.a(this.any, str, strCF, aVar) && (fileCE = cE(strCF)) != null && fileCE.exists()) {
                return true;
            }
        }
        return false;
    }

    public final File bR(String str) {
        if (Av() || TextUtils.isEmpty(str)) {
            return null;
        }
        return cE(c.cF(str));
    }

    public final void cD(String str) {
        if (Av() || TextUtils.isEmpty(str)) {
            return;
        }
        b.a(this.any, str, c.cF(str));
    }

    public final void delete() {
        if (Av()) {
            return;
        }
        try {
            this.any.delete();
        } catch (IOException unused) {
        }
    }

    public final boolean remove(String str) {
        if (Av()) {
            return false;
        }
        try {
            ao.au(str, "cacheKey is not allowed empty");
            return this.any.remove(c.cF(str));
        } catch (IOException unused) {
            return false;
        }
    }
}
