package com.alipay.sdk.app;

import com.alipay.sdk.util.e;

class h implements e.a {
    final PayTask a;

    @Override
    public void a() {
    }

    h(PayTask payTask) {
        this.a = payTask;
    }

    @Override
    public void b() {
        this.a.dismissLoading();
    }
}
