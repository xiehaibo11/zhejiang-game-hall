package com.loc;

import java.io.File;

public final class ck extends co {
    private int a;
    private String b;

    public ck(String str, co coVar) {
        super(coVar);
        this.a = 30;
        this.b = str;
    }

    private static int a(String str) {
        try {
            File file = new File(str);
            if (file.exists()) {
                return file.list().length;
            }
            return 0;
        } catch (Throwable th) {
            av.b(th, "fus", "gfn");
            return 0;
        }
    }

    @Override
    protected final boolean a() {
        return a(this.b) >= this.a;
    }
}
