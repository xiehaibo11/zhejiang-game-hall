package com.vivo.push;

import android.content.Context;

public abstract class l implements Runnable {
    protected Context a;
    private int b;
    private o c;

    public l(o oVar) {
        this.b = -1;
        this.c = oVar;
        int iB = oVar.b();
        this.b = iB;
        if (iB < 0) {
            throw new IllegalArgumentException("PushTask need a > 0 task id.");
        }
        this.a = e.a().h();
    }

    public final int a() {
        return this.b;
    }

    protected abstract void a(o oVar);

    @Override
    public final void run() {
        Context context = this.a;
        if (context != null && !(this.c instanceof com.vivo.push.b.n)) {
            com.vivo.push.util.p.a(context, "[执行指令]" + this.c);
        }
        a(this.c);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(getClass().getSimpleName());
        sb.append("{");
        o oVar = this.c;
        sb.append(oVar == null ? "[null]" : oVar.toString());
        sb.append("}");
        return sb.toString();
    }
}
