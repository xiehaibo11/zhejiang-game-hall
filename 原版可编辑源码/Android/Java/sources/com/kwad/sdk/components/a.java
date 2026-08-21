package com.kwad.sdk.components;

import android.content.Context;

public interface a {
    Class getComponentsType();

    void init(Context context);

    int priority();
}
