package com.xiaomi.push;

import com.xiaomi.push.jb;
import java.io.ByteArrayOutputStream;

public class ja {
    private jf a;
    private final jm a;
    private final ByteArrayOutputStream a;

    public ja() {
        this(new jb.a());
    }

    public ja(jh jhVar) {
        this.a = new ByteArrayOutputStream();
        jm jmVar = new jm(this.a);
        this.a = jmVar;
        this.a = jhVar.a(jmVar);
    }

    public byte[] a(iu iuVar) {
        this.a.reset();
        iuVar.b(this.a);
        return this.a.toByteArray();
    }
}
