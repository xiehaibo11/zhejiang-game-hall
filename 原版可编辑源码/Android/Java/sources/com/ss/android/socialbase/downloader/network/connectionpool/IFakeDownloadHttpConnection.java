package com.ss.android.socialbase.downloader.network.connectionpool;

public interface IFakeDownloadHttpConnection {
    void execute() throws Exception;

    boolean isRequesting();

    boolean isSuccessful();

    boolean isValid();

    void joinExecute() throws InterruptedException;
}
