package com.kwad.library.solder.lib.a;

import android.text.TextUtils;
import com.kwad.library.solder.lib.a.a;
import java.io.File;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public abstract class f<P extends a> {
    protected e afO;
    protected String afR;
    private final byte[] afT;
    protected int afW;
    protected int afX;
    protected StringBuffer afY;
    protected String afZ;
    protected String aga;
    protected boolean agb;
    protected P agc;
    protected com.kwad.library.solder.lib.ext.b agd;
    protected Throwable age;
    protected String agf;
    protected boolean agg;
    protected long agh;
    protected String agi;
    protected List<com.kwad.library.solder.lib.c.a> agj;
    protected com.kwad.library.solder.lib.c.b agk;
    protected String mDownloadUrl;
    protected int mState;
    protected String mVersion;

    public f() {
        this.mState = -1;
        this.afW = 0;
        this.afT = new byte[0];
        this.afY = new StringBuffer(String.valueOf(-1));
    }

    public f(com.kwad.library.solder.lib.c.b bVar) {
        this();
        this.agk = bVar;
        this.afR = bVar.agy;
        this.mVersion = bVar.version;
        this.agg = bVar.agg;
        this.agf = bVar.agf;
    }

    private List<com.kwad.library.solder.lib.c.a> A(String str, String str2) {
        String[] list;
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            File file = new File(this.afO.wg().bA(str));
            if (file.exists() && (list = file.list()) != null && list.length != 0) {
                for (String str3 : list) {
                    if (TextUtils.isEmpty(str3) || TextUtils.isEmpty(str2) || !str2.equals(str3) || !this.afO.wg().z(str, str3)) {
                        this.afO.wg().u(str, str3);
                    } else {
                        com.kwad.library.solder.lib.c.a aVar = new com.kwad.library.solder.lib.c.a();
                        aVar.agy = str;
                        aVar.version = str3;
                        aVar.qB = true;
                        arrayList.add(aVar);
                    }
                }
                Collections.sort(arrayList);
            }
        }
        return arrayList;
    }

    @Deprecated
    public final void P(long j) {
        this.agh = j;
    }

    public final f a(e eVar) {
        this.afO = eVar;
        return this;
    }

    public final void a(com.kwad.library.solder.lib.ext.b bVar) {
        this.agd = bVar;
    }

    public final void b(com.kwad.library.solder.lib.c.b bVar) {
        this.agk = bVar;
    }

    public final void bD(String str) {
        this.mVersion = str;
    }

    public final f bG(String str) {
        if (!TextUtils.isEmpty(str)) {
            StringBuffer stringBuffer = this.afY;
            stringBuffer.append(" --> ");
            stringBuffer.append(str);
        }
        return this;
    }

    public final void bH(String str) {
        this.afZ = str;
    }

    public final f bI(int i) {
        synchronized (this.afT) {
            this.mState = i;
        }
        return bG(String.valueOf(i));
    }

    public final void bI(String str) {
        this.aga = str;
    }

    public final void bJ(int i) {
        if (i > 0) {
            this.afX = i;
        }
    }

    public final void bJ(String str) {
        this.agi = str;
    }

    public final void bK(String str) {
        this.mDownloadUrl = str;
    }

    public abstract P bL(String str);

    public final void c(P p) {
        this.agc = p;
    }

    public final void cancel() {
        synchronized (this.afT) {
            bI(-7);
        }
    }

    public final String getDownloadUrl() {
        return this.mDownloadUrl;
    }

    public final String getId() {
        return this.afR;
    }

    public final int getState() {
        int i;
        synchronized (this.afT) {
            i = this.mState;
        }
        return i;
    }

    public final String getVersion() {
        return this.mVersion;
    }

    public final boolean isCanceled() {
        return this.mState == -7;
    }

    public final f j(Throwable th) {
        this.age = th;
        return bG(th.getLocalizedMessage());
    }

    public String toString() {
        return "PluginRequest{mId='" + this.afR + "'}";
    }

    public final String wA() {
        return this.agi;
    }

    public final List<com.kwad.library.solder.lib.c.a> wB() {
        return this.agj;
    }

    public final com.kwad.library.solder.lib.c.b wC() {
        return this.agk;
    }

    public final void wD() {
        String id = getId();
        if (TextUtils.isEmpty(id) || this.agj != null) {
            return;
        }
        this.agj = A(id, getVersion());
    }

    public final void wE() {
        bI(-3);
    }

    public final e wp() {
        return this.afO;
    }

    public final String wq() {
        return this.afY.toString();
    }

    public final Throwable wr() {
        return this.age;
    }

    public final boolean ws() {
        bI(-1);
        this.agj = null;
        int i = this.afW + 1;
        this.afW = i;
        return i <= this.afX;
    }

    public final boolean wt() {
        return this.agb;
    }

    public final int wu() {
        return this.afW;
    }

    public final String wv() {
        return !TextUtils.isEmpty(this.afZ) ? this.afZ : this.aga;
    }

    public final P ww() {
        return this.agc;
    }

    public final com.kwad.library.solder.lib.ext.b wx() {
        return this.agd;
    }

    public final boolean wy() {
        return this.agg;
    }

    public final String wz() {
        return this.agf;
    }
}
