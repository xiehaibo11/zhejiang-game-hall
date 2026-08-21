package com.kwad.components.offline.api.core.api;

public interface IZipper {
    boolean unZip(java.io.InputStream r1, java.lang.String r2);

    boolean zip(java.io.File r1, java.io.File r2);

    void zipFile(java.io.File r1);
}
