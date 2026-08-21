package com.kwad.components.ad.reward.e;

public abstract class a implements com.kwad.components.ad.reward.e.f {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    @Override
    public int compareTo(com.kwad.components.ad.reward.e.f r1) {
            r0 = this;
            com.kwad.components.ad.reward.e.f r1 = (com.kwad.components.ad.reward.e.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    @Override
    public int getPriority() {
            r1 = this;
            r0 = 0
            return r0
    }
}
