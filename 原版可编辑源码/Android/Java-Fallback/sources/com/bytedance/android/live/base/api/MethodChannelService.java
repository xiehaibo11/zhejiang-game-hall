package com.bytedance.android.live.base.api;

public interface MethodChannelService extends com.bytedance.android.live.base.IService {
    java.lang.String identity();

    java.lang.Object invokeMethod(java.lang.String r1, java.lang.Object... r2);
}
