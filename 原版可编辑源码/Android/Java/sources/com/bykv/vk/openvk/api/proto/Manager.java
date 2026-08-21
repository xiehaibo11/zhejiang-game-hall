package com.bykv.vk.openvk.api.proto;

import android.content.Context;

public interface Manager {
    Loader createLoader(Context context);

    Bridge getBridge(int i);

    ValueSet values();
}
