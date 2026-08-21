package com.kwad.library.solder.lib.a;

import android.content.Context;
import com.kwad.library.solder.lib.i;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a {
    protected File afP;
    protected String afQ;
    protected String afR;
    private final String afU;
    protected com.kwad.library.solder.lib.c.b afV;
    protected String mVersion;
    private final byte[] afT = new byte[0];
    private boolean afS = false;
    protected com.kwad.library.solder.lib.ext.c afy = i.wb().wd();

    public a(String str) {
        this.afU = str;
        this.afQ = str;
    }

    private void wl() {
        if (this.afS) {
            return;
        }
        synchronized (this.afT) {
            this.afS = true;
        }
    }

    public final a a(com.kwad.library.solder.lib.c.b bVar) {
        this.afV = bVar;
        return this;
    }

    public final void bD(String str) {
        this.mVersion = str;
    }

    public final void bE(String str) {
        this.afR = str;
    }

    public final void bF(String str) {
        this.afQ = str;
    }

    protected abstract void f(Context context, String str);

    public final String getId() {
        return this.afR;
    }

    public final String getVersion() {
        return this.mVersion;
    }

    public final void i(Context context, String str) {
        f(context, str);
        wl();
    }

    public final boolean isLoaded() {
        boolean z;
        if (this.afS) {
            return true;
        }
        synchronized (this.afT) {
            z = this.afS;
        }
        return z;
    }

    public String toString() {
        return "Plugin{, ApkPath = '" + this.afU + "'}";
    }

    public final String wm() {
        return this.afU;
    }

    public final String wn() {
        com.kwad.library.solder.lib.c.b bVar = this.afV;
        if (bVar != null) {
            return bVar.agB;
        }
        return null;
    }
}
