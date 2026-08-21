package com.bykv.vk.openvk;

import android.os.Bundle;
import java.io.Serializable;

public interface TTAdEvent extends Serializable {
    void onEvent(int i, Bundle bundle);
}
