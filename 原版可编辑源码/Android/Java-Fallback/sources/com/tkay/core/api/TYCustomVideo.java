package com.tkay.core.api;

public interface TYCustomVideo {
    java.lang.String getVideoUrl();

    void reportVideoAutoStart();

    void reportVideoBreak(long r1);

    void reportVideoContinue(long r1);

    void reportVideoError(long r1, int r3, int r4);

    void reportVideoFinish();

    void reportVideoPause(long r1);

    void reportVideoStart();

    void reportVideoStartError(int r1, int r2);
}
