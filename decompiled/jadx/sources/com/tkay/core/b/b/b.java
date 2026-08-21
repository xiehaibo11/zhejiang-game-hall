package com.tkay.core.b.b;

import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYBiddingListener;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b implements TYBiddingListener {
    protected TYBaseAdAdapter c;

    public b(TYBaseAdAdapter tYBaseAdAdapter) {
        this.c = tYBaseAdAdapter;
    }

    private void a() {
        this.c = null;
    }
}
