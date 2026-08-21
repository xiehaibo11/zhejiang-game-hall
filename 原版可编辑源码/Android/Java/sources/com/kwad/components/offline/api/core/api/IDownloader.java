package com.kwad.components.offline.api.core.api;

import java.io.File;

public interface IDownloader {
    boolean downloadSync(File file, String str);
}
