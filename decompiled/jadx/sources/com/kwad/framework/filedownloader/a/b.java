package com.kwad.framework.filedownloader.a;

import java.io.InputStream;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public interface b {
    String aY(String str);

    void addHeader(String str, String str2);

    void execute();

    InputStream getInputStream();

    int getResponseCode();

    Map<String, List<String>> ue();

    Map<String, List<String>> uf();

    void ug();
}
