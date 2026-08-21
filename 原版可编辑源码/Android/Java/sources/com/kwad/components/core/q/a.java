package com.kwad.components.core.q;

import com.kwad.sdk.api.core.SpeedLimitApi;
import java.io.InputStream;

public class a implements SpeedLimitApi {
    @Override
    public InputStream wrapInputStream(InputStream inputStream) {
        b.pL();
        return b.wrapInputStream(inputStream);
    }
}
