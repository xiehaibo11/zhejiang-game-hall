package com.kwad.components.core.q;

import com.kwad.sdk.api.core.SpeedLimitApi;
import java.io.InputStream;

/* JADX INFO: loaded from: classes2.dex */
public class a implements SpeedLimitApi {
    @Override // com.kwad.sdk.api.core.SpeedLimitApi
    public InputStream wrapInputStream(InputStream inputStream) {
        b.pL();
        return b.wrapInputStream(inputStream);
    }
}
