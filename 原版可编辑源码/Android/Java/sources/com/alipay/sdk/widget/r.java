package com.alipay.sdk.widget;

import android.view.View;

class r implements Runnable {
    final View a;
    final q b;

    r(q qVar, View view) {
        this.b = qVar;
        this.a = view;
    }

    @Override
    public void run() {
        this.a.setEnabled(true);
    }
}
