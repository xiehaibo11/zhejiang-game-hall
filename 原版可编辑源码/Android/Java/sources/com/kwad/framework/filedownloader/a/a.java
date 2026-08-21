package com.kwad.framework.filedownloader.a;

import com.kwad.framework.filedownloader.f.c;

public final class a implements c.a {
    @Override
    public final int H(long j) {
        if (j < 1048576) {
            return 1;
        }
        if (j < 5242880) {
            return 2;
        }
        if (j < 52428800) {
            return 3;
        }
        return j < 104857600 ? 4 : 5;
    }
}
