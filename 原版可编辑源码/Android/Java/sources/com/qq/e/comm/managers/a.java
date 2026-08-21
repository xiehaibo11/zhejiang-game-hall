package com.qq.e.comm.managers;

import com.qq.e.comm.managers.plugin.e;
import com.qq.e.comm.util.GDTLogger;

class a implements Runnable {
    final b a;

    a(b bVar) {
        this.a = bVar;
    }

    @Override
    public void run() {
        try {
            this.a.d.getPOFactory();
            this.a.b = true;
        } catch (e e) {
            GDTLogger.e(e.getMessage(), e);
        }
    }
}
