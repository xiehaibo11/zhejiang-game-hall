package com.kwad.components.core.p.a;

import android.text.TextUtils;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.f;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    public final b Lj;
    public final com.kwad.components.core.p.b PI;
    public List<String> PJ;
    public boolean PK;
    public boolean PL;
    public d PM;

    /* JADX INFO: renamed from: com.kwad.components.core.p.a.a$a, reason: collision with other inner class name */
    public static class C0159a {
        public b Lj;
        public com.kwad.components.core.p.b PI;
        public boolean PK;
        public boolean PL;

        public final C0159a a(com.kwad.components.core.p.b bVar) {
            this.PI = bVar;
            return this;
        }

        public final C0159a aE(boolean z) {
            this.PK = true;
            return this;
        }

        public final C0159a aF(boolean z) {
            this.PL = z;
            return this;
        }

        public final C0159a e(b bVar) {
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

    private a(C0159a c0159a) {
        this.Lj = c0159a.Lj;
        this.PI = c0159a.PI;
        this.PK = c0159a.PK;
        this.PL = c0159a.PL;
    }

    /* synthetic */ a(C0159a c0159a, byte b) {
        this(c0159a);
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
