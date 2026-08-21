package com.bytedance.android.live.base.api;

import com.bytedance.android.live.base.IService;

public interface MethodChannelService extends IService {
    String identity();

    Object invokeMethod(String str, Object... objArr);
}
