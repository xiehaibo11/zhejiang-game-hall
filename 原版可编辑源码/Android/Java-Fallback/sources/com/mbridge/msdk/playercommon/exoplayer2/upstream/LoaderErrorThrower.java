package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface LoaderErrorThrower {

    public static final class Dummy implements com.mbridge.msdk.playercommon.exoplayer2.upstream.LoaderErrorThrower {
        public Dummy() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void maybeThrowError() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public final void maybeThrowError(int r1) throws java.io.IOException {
                r0 = this;
                return
        }
    }

    void maybeThrowError() throws java.io.IOException;

    void maybeThrowError(int r1) throws java.io.IOException;
}
