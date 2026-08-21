package com.kwad.components.offline.api.core;

public interface IOfflineHostApi {
    com.kwad.components.offline.api.core.api.IAsync async();

    com.kwad.components.offline.api.core.api.ICache cache();

    com.kwad.components.offline.api.core.api.ICrash crash();

    com.kwad.components.offline.api.core.api.IDownloader downloader();

    com.kwad.components.offline.api.core.api.IEncrypt encrypt();

    com.kwad.components.offline.api.core.api.IEnvironment env();

    com.kwad.components.offline.api.core.network.IIdc idc();

    com.kwad.components.offline.api.core.api.IImageLoader imageLoader();

    com.kwad.components.offline.api.core.imageplayer.IImagePlayer imagePlayer();

    com.kwad.components.offline.api.core.adlive.ILive live();

    com.kwad.components.offline.api.core.api.IOfflineCompoLogcat log();

    com.kwad.components.offline.api.core.api.ILoggerReporter loggerReporter();

    com.kwad.components.offline.api.core.api.INet net();

    com.kwad.components.offline.api.core.api.IVibratorUtil vibratorUtil();

    com.kwad.components.offline.api.core.video.IVideo video();

    com.kwad.components.offline.api.core.webview.IWebView webview();

    com.kwad.components.offline.api.core.api.IZipper zipper();
}
