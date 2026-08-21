package com.bykv.vk.openvk.live;

import java.io.Serializable;

public interface TTLiveAuthCallback extends Serializable {
    void onAuth(TTLiveToken tTLiveToken);

    void onFailed(Throwable th);
}
