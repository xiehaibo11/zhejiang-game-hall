package com.sigmob.sdk.videoAd;

import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.g;
import java.io.Serializable;
import java.util.Locale;

public class f extends com.sigmob.sdk.base.common.g implements Serializable, Comparable<f> {
    private static final long serialVersionUID = 0;
    private final float a;

    public f(com.sigmob.sdk.base.common.a aVar, float f) {
        this(g.a.b, aVar, f);
    }

    public f(g.a aVar, com.sigmob.sdk.base.common.a aVar2, float f) {
        super(aVar, null, null, aVar2, null);
        Preconditions.NoThrow.checkArgument(f >= 0.0f);
        this.a = f;
    }

    f(g.a aVar, String str, float f, String str2) {
        super(aVar, str, str2, null);
        Preconditions.NoThrow.checkArgument(f >= 0.0f);
        this.a = f;
    }

    private float q() {
        return this.a;
    }

    @Override
    public int compareTo(f fVar) {
        return Double.compare(q(), fVar.q());
    }

    public String toString() {
        return String.format(Locale.US, "%2f: %s", Float.valueOf(this.a), k());
    }
}
