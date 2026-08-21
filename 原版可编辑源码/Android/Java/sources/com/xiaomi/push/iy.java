package com.xiaomi.push;

import com.xiaomi.push.jb;

public class iy {
    private final jf a;
    private final jo a;

    public iy() {
        this(new jb.a());
    }

    public iy(jh jhVar) {
        jo joVar = new jo();
        this.a = joVar;
        this.a = jhVar.a(joVar);
    }

    public void a(iu iuVar, byte[] bArr) {
        try {
            this.a.a(bArr);
            iuVar.a(this.a);
        } finally {
            this.a.k();
        }
    }
}
