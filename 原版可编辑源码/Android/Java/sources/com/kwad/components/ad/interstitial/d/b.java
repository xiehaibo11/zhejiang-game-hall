package com.kwad.components.ad.interstitial.d;

import com.kwad.sdk.mvp.Presenter;
import java.util.List;

public class b extends Presenter {
    public c jf;

    @Override
    public void ah() {
        super.ah();
        this.jf = (c) Gk();
    }

    public void cN() {
        List<Presenter> listGj = Gj();
        if (listGj == null) {
            return;
        }
        for (Presenter presenter : listGj) {
            if (presenter instanceof b) {
                ((b) presenter).cN();
            }
        }
    }

    public void cO() {
        List<Presenter> listGj = Gj();
        if (listGj == null) {
            return;
        }
        for (Presenter presenter : listGj) {
            if (presenter instanceof b) {
                ((b) presenter).cO();
            }
        }
    }
}
