package com.kwad.components.core.p.a;

import android.text.TextUtils;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.f;
import java.util.List;

public final class a {
    public final b Lj;
    public final com.kwad.components.core.p.b PI;
    public List<String> PJ;
    public boolean PK;
    public boolean PL;
    public d PM;

    public static class a {
        public b Lj;
        public com.kwad.components.core.p.b PI;
        public boolean PK;
        public boolean PL;

        public final a a(com.kwad.components.core.p.b bVar) {
            this.PI = bVar;
            return this;
        }

        public final a aE(boolean z) {
            this.PK = true;
            return this;
        }

        public final a aF(boolean z) {
            this.PL = z;
            return this;
        }

        public final a e(b bVar) {
            this.Lj = bVar;
            return this;
        }

        public final a pI() {
            if (com.kwad.components.ad.e.a.ml.booleanValue() && (this.Lj == null || this.PI == null)) {
                throw new IllegalStateException("AdRequestParams build Illegal");
            }
            return new a(this, (byte) 0);
        }
    }

    private a(a aVar) {
        this.Lj = aVar.Lj;
        this.PI = aVar.PI;
        this.PK = aVar.PK;
        this.PL = aVar.PL;
    }

    a(a aVar, byte b) {
        this(aVar);
    }

    public static void a(a aVar, int i, String str, boolean z) {
        aVar.PI.a(i, str, z);
    }

    public static void a(a aVar, AdResultData adResultData, boolean z) {
        boolean zIsAdResultDataEmpty = adResultData.isAdResultDataEmpty();
        com.kwad.components.core.p.b bVar = aVar.PI;
        if (zIsAdResultDataEmpty) {
            bVar.a(f.aoU.errorCode, TextUtils.isEmpty(adResultData.testErrorMsg) ? f.aoU.msg : adResultData.testErrorMsg, z);
        } else {
            bVar.a(adResultData, z);
        }
    }

    public final int getAdNum() {
        if (this.Lj.PN != null) {
            return this.Lj.PN.getAdNum();
        }
        return 1;
    }

    public final int getAdStyle() {
        if (this.Lj.PN != null) {
            return this.Lj.PN.adStyle;
        }
        return 0;
    }

    public final long getPosId() {
        if (this.Lj.PN != null) {
            return this.Lj.PN.getPosId();
        }
        return -1L;
    }
}
