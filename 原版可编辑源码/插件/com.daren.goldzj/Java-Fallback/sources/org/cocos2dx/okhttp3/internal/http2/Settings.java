package org.cocos2dx.okhttp3.internal.http2;

import java.util.Arrays;

public final class Settings {
    static final int COUNT = 10;
    static final int DEFAULT_INITIAL_WINDOW_SIZE = 65535;
    static final int ENABLE_PUSH = 2;
    static final int HEADER_TABLE_SIZE = 1;
    static final int INITIAL_WINDOW_SIZE = 7;
    static final int MAX_CONCURRENT_STREAMS = 4;
    static final int MAX_FRAME_SIZE = 5;
    static final int MAX_HEADER_LIST_SIZE = 6;
    private int set;
    private final int[] values;

    public Settings() {
        this.values = new int[10];
    }

    void clear() {
        this.set = 0;
        Arrays.fill(this.values, 0);
    }

    Settings set(int r4, int r5) {
        if (r4 < 0) goto L7;
        int[] r0 = this.values;
        if (r4 >= r0.length) goto L7;
        this.set = (1 << r4) | this.set;
        r0[r4] = r5;
    L7:
        return this;
    }

    boolean isSet(int r3) {
        if (((1 << r3) & this.set) != 0) goto L7;
        return false;
    L7:
        return true;
    }

    int get(int r2) {
        return this.values[r2];
    }

    int size() {
        return Integer.bitCount(this.set);
    }

    int getHeaderTableSize() {
        if ((this.set & 2) != 0) goto L7;
        return -1;
    L7:
        return this.values[1];
    }

    boolean getEnablePush(boolean r4) {
        if ((this.set & 4) == 0) goto L5;
        int r42 = this.values[2];
    L8:
        if (r42 != 1) goto L11;
        return true;
    L11:
        return false;
    L5:
        if (r4 == false) goto L7;
        r42 = 1;
        goto L8
    L7:
        r42 = 0;
        goto L8
    }

    int getMaxConcurrentStreams(int r2) {
        if ((this.set & 16) != 0) goto L5;
        return r2;
    L5:
        return this.values[4];
    }

    int getMaxFrameSize(int r2) {
        if ((this.set & 32) != 0) goto L5;
        return r2;
    L5:
        return this.values[5];
    }

    int getMaxHeaderListSize(int r2) {
        if ((this.set & 64) != 0) goto L5;
        return r2;
    L5:
        return this.values[6];
    }

    int getInitialWindowSize() {
        if ((this.set & 128) != 0) goto L7;
        return 65535;
    L7:
        return this.values[7];
    }

    void merge(Settings r3) {
        int r0 = 0;
    L4:
        if (r0 >= 10) goto L10;
        if (r3.isSet(r0) == false) goto L9;
        set(r0, r3.get(r0));
    L9:
        r0 = r0 + 1;
        goto L4
    }
}
