package com.xiaomi.push;

import com.xiaomi.push.ao;

final class ha extends ao.b {
    final Runnable a;

    ha(Runnable runnable) {
        this.a = runnable;
    }

    @Override
    public void b() {
        this.a.run();
    }
}
