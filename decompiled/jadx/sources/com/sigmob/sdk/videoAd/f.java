package com.sigmob.sdk.videoAd;

import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.g;
import java.io.Serializable;
import java.util.Locale;

/* JADX INFO: loaded from: classes3.dex */
public class f extends com.sigmob.sdk.base.common.g implements Serializable, Comparable<f> {
    private static final long serialVersionUID = 0;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final float f5182a;

    public f(com.sigmob.sdk.base.common.a aVar, float f) {
        this(g.a.QUARTILE_EVENT, aVar, f);
    }

    public f(g.a aVar, com.sigmob.sdk.base.common.a aVar2, float f) {
        super(aVar, null, null, aVar2, null);
        Preconditions.NoThrow.checkArgument(f >= 0.0f);
        this.f5182a = f;
    }

    f(g.a aVar, String str, float f, String str2) {
        super(aVar, str, str2, null);
        Preconditions.NoThrow.checkArgument(f >= 0.0f);
        this.f5182a = f;
    }

    private float q() {
        return this.f5182a;
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(f fVar) {
        return Double.compare(q(), fVar.q());
    }

    public String toString() {
        return String.format(Locale.US, "%2f: %s", Float.valueOf(this.f5182a), k());
    }
}
