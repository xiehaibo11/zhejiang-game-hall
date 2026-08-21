package com.kwad.components.ad.reward.e;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a implements f {
    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(f fVar) {
        return getPriority() - fVar.getPriority();
    }

    @Override // com.kwad.components.ad.reward.e.f
    public int getPriority() {
        return 0;
    }
}
