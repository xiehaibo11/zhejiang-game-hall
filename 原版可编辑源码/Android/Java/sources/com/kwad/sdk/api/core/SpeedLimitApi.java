package com.kwad.sdk.api.core;

import java.io.InputStream;

@KsAdSdkDynamicApi
public interface SpeedLimitApi {
    @KsAdSdkDynamicApi
    InputStream wrapInputStream(InputStream inputStream);
}
