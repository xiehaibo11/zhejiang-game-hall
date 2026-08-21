package com.kwad.sdk.core.report;

import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.xiaomi.mipush.sdk.Constants;

public final class j {
    private z.b aqY = new z.b();

    private void Cb() {
        if (this.aqY.att == null) {
            this.aqY.att = new z.a();
        }
    }

    public final z.b Ca() {
        return this.aqY;
    }

    public final j a(z.a aVar) {
        this.aqY.att = aVar;
        return this;
    }

    public final j a(AdTemplate adTemplate, String str, String str2, com.kwad.sdk.g.a<AdTrackLog> aVar) {
        Cb();
        this.aqY.att.c(adTemplate, str, str2);
        if (aVar != null && this.aqY.att.asR != null) {
            aVar.accept(this.aqY.att.asR);
        }
        return this;
    }

    public final j af(long j) {
        this.aqY.vy = j;
        return this;
    }

    public final j c(ac.a aVar) {
        this.aqY.jI = aVar;
        return this;
    }

    public final j cg(int i) {
        this.aqY.jG = i;
        return this;
    }

    public final j ch(int i) {
        this.aqY.asU = i;
        return this;
    }

    public final j ci(int i) {
        this.aqY.asV = i;
        return this;
    }

    public final j cj(int i) {
        this.aqY.arz = i;
        return this;
    }

    public final j ck(int i) {
        this.aqY.ata = i;
        return this;
    }

    public final j cl(int i) {
        this.aqY.atv = i;
        return this;
    }

    public final j cm(int i) {
        this.aqY.atA = i;
        return this;
    }

    public final j cn(int i) {
        this.aqY.cu(i);
        return this;
    }

    public final j co(int i) {
        this.aqY.atC = i;
        return this;
    }

    public final j cp(int i) {
        this.aqY.atD = i;
        return this;
    }

    public final j cq(int i) {
        this.aqY.atE = i;
        return this;
    }

    public final j cr(int i) {
        this.aqY.atb = i;
        return this;
    }

    public final j dt(String str) {
        this.aqY.UP = str;
        return this;
    }

    public final j du(String str) {
        this.aqY.aty = str;
        return this;
    }

    public final j i(double d) {
        this.aqY.jJ = d;
        return this;
    }

    public final j t(int i, int i2) {
        this.aqY.asW = i + Constants.ACCEPT_TIME_SEPARATOR_SP + i2;
        return this;
    }
}
