package com.igexin.push.a.a;

import android.os.Message;
import com.igexin.push.core.CoreConsts;

public class a implements com.igexin.push.f.b.c {
    private long a = 0;

    @Override
    public void a() {
        Message messageObtain = Message.obtain();
        messageObtain.what = CoreConsts.h;
        com.igexin.push.core.c.a().a(messageObtain);
    }

    @Override
    public void a(long j) {
        this.a = j;
    }

    @Override
    public boolean b() {
        return System.currentTimeMillis() - this.a > 360000;
    }
}
