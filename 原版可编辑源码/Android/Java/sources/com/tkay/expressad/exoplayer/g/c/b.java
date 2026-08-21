package com.tkay.expressad.exoplayer.g.c;

import com.tkay.expressad.exoplayer.g.a;

public abstract class b implements a.a {
    @Override
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "SCTE-35 splice command: type=" + getClass().getSimpleName();
    }
}
