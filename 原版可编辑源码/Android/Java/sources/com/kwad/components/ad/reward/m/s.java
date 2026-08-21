package com.kwad.components.ad.reward.m;

import android.view.ViewGroup;
import android.view.ViewStub;

public abstract class s extends d {
    protected ViewGroup sw;

    public final void a(ViewGroup viewGroup, int i, int i2) {
        if (this.sw != null) {
            return;
        }
        ViewStub viewStub = (ViewStub) viewGroup.findViewById(i);
        this.sw = (ViewGroup) (viewStub != null ? viewStub.inflate() : viewGroup.findViewById(i2));
    }

    @Override
    public ViewGroup gQ() {
        return this.sw;
    }
}
