package com.tkay.expressad.exoplayer.e;

import java.lang.reflect.Constructor;

public final class c implements h {
    private static final Constructor<? extends e> a;
    private int b;
    private int c;

    static {
        Constructor<? extends e> constructor;
        try {
            constructor = Class.forName("com.tkay.expressad.exoplayer.ext.flac.FlacExtractor").asSubclass(e.class).getConstructor(new Class[0]);
        } catch (ClassNotFoundException unused) {
            constructor = null;
        } catch (Exception e) {
            throw new RuntimeException("Error instantiating FLAC extension", e);
        }
        a = constructor;
    }

    private synchronized c a(int i) {
        this.b = i;
        return this;
    }

    private synchronized c b(int i) {
        this.c = i;
        return this;
    }

    @Override
    public final synchronized e[] a() {
        e[] eVarArr;
        eVarArr = new e[a == null ? 2 : 3];
        eVarArr[0] = new com.tkay.expressad.exoplayer.e.a.e(this.c);
        eVarArr[1] = new com.tkay.expressad.exoplayer.e.a.g(this.b);
        if (a != null) {
            try {
                eVarArr[2] = a.newInstance(new Object[0]);
            } catch (Exception e) {
                throw new IllegalStateException("Unexpected error creating FLAC extractor", e);
            }
        }
        return eVarArr;
    }
}
