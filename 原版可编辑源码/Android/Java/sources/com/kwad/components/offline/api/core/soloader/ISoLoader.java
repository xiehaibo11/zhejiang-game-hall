package com.kwad.components.offline.api.core.soloader;

import android.content.Context;

public interface ISoLoader {
    void loadSo(Context context, SoLoadListener soLoadListener);
}
