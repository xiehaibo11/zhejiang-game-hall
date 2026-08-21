package com.kwad.components.offline.api.core.api;

public interface IEncrypt {
    java.lang.String getFileMD5(java.io.File r1);

    byte[] getFileMD5Digest(java.io.File r1);

    java.lang.String getMD5(java.lang.String r1);

    java.lang.String getResponseData(java.lang.String r1);
}
