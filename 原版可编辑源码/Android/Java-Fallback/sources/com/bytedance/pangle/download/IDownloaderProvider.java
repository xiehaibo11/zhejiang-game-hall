package com.bytedance.pangle.download;

public interface IDownloaderProvider {
    com.bytedance.pangle.download.IDownloader getDownloader();
}
