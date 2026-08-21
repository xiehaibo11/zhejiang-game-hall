package com.kwad.components.ad.reward.e;

public abstract class a implements f {
    @Override
    private int compareTo(f fVar) {
        return getPriority() - fVar.getPriority();
    }

    @Override
    public int getPriority() {
        return 0;
    }
}
