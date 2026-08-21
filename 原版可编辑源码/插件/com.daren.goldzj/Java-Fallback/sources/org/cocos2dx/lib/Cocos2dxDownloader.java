package org.cocos2dx.lib;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.OkHttpClient;
import org.cocos2dx.okhttp3.Request;

public class Cocos2dxDownloader {
    private static ConcurrentHashMap<String, Boolean> _resumingSupport;
    private int _countOfMaxProcessingTasks;
    private OkHttpClient _httpClient;
    private int _id;
    private int _runningTaskCount;
    private ConcurrentHashMap<Integer, Call> _taskMap;
    private Queue<Runnable> _taskQueue;
    private String _tempFileNameSuffix;

    class 3 implements Runnable {
        String domain;
        long downloadStart;
        File finalFile;
        String host;
        File tempFile;
        final Cocos2dxDownloader val$downloader;
        final String[] val$header;
        final int val$id;
        final String val$path;
        final String val$url;

        3(String r1, String r2, Cocos2dxDownloader r3, String[] r4, int r5) {
            this.val$path = r1;
            this.val$url = r2;
            this.val$downloader = r3;
            this.val$header = r4;
            this.val$id = r5;
            this.domain = null;
            this.host = null;
            this.tempFile = null;
            this.finalFile = null;
            this.downloadStart = 0;
        }

        @Override
        public void run() {
            if (this.val$path.length() > 0) goto L49;
        L34:
            Request.Builder r0 = new Request.Builder().url(this.val$url);
            int r3 = 0;
        L35:
            String[] r4 = this.val$header;
            if (r3 >= (r4.length / 2)) goto L39;
            int r5 = r3 * 2;
            r0.addHeader(r4[r5], r4[r5 + 1]);
            r3 = r3 + 1;
            goto L35
        L39:
            if (this.downloadStart <= 0) goto L41;
            r0.addHeader("RANGE", "bytes=" + this.downloadStart + "-");
        L41:
            Call r02 = Cocos2dxDownloader.access$300(this.val$downloader).newCall(r0.build());
            r02.enqueue(new 1(this));
        L42:
            if (r02 != null) goto L44;
            final String r03 = "Can't create DownloadTask for " + this.val$url;
            Cocos2dxHelper.runOnGLThread(new 2(this, r03));
            return;
        L44:
            Cocos2dxDownloader.access$700(this.val$downloader).put(Integer.valueOf(this.val$id), r02);
            return;
        L49:
            this.domain = new URI(this.val$url).getHost();     // Catch: NullPointerException -> L29 URISyntaxException -> L31
            this.tempFile = new File(this.val$path + Cocos2dxDownloader.access$100(this.val$downloader));
            if (this.tempFile.isDirectory() == true) goto L33;
            File r04 = this.tempFile.getParentFile();
            if (r04.isDirectory() == false) goto L11;
        L13:
            this.finalFile = new File(this.val$path);
            if (this.finalFile.isDirectory() == true) goto L33;
            long r32 = this.tempFile.length();
            if (this.domain.startsWith("www.") == false) goto L19;
            String r05 = this.domain.substring(4);
        L20:
            this.host = r05;
            if (r32 <= 0) goto L34;
            if (Cocos2dxDownloader.access$200().containsKey(this.host) == true) goto L25;
        L47:
            PrintWriter r06 = new PrintWriter(this.tempFile);     // Catch: FileNotFoundException -> L46
            r06.print("");     // Catch: FileNotFoundException -> L46
            r06.close();     // Catch: FileNotFoundException -> L46
            goto L34
        L25:
            if (((Boolean) Cocos2dxDownloader.access$200().get(this.host)).booleanValue() == false) goto L47;
            this.downloadStart = r32;
            goto L34
        L19:
            r05 = this.domain;
            goto L20
        L11:
            if (r04.mkdirs() == true) goto L13;
        L33:
            r02 = null;
            goto L42
        L29:
            e = move-exception;
            e.printStackTrace();
        L31:
            e = move-exception;
            e.printStackTrace();
            goto L33
        }
    }

    native void nativeOnFinish(int r1, int r2, int r3, String r4, byte[] r5);

    native void nativeOnProgress(int r1, int r2, long r3, long r5, long r7);

    public Cocos2dxDownloader() {
        this._httpClient = null;
        this._taskMap = new ConcurrentHashMap();
        this._taskQueue = new LinkedList();
        this._runningTaskCount = 0;
    }

    static int access$000(Cocos2dxDownloader r0) {
        return r0._id;
    }

    static String access$100(Cocos2dxDownloader r0) {
        return r0._tempFileNameSuffix;
    }

    static ConcurrentHashMap access$200() {
        return _resumingSupport;
    }

    static OkHttpClient access$300(Cocos2dxDownloader r0) {
        return r0._httpClient;
    }

    static void access$400(Cocos2dxDownloader r0, int r1, int r2, String r3, byte[] r4) {
        r0.onFinish(r1, r2, r3, r4);
    }

    static void access$500(Cocos2dxDownloader r0, int r1, long r2, long r4, long r6) {
        r0.onProgress(r1, r2, r4, r6);
    }

    static void access$600(Cocos2dxDownloader r0) {
        r0.runNextTaskIfExists();
    }

    static ConcurrentHashMap access$700(Cocos2dxDownloader r0) {
        return r0._taskMap;
    }

    static {
        _resumingSupport = new ConcurrentHashMap();
    }

    private void onProgress(final int r11, final long r12, final long r14, final long r16) {
        Cocos2dxHelper.runOnGLThread(new 1(this, r11, r12, r14, r16));
    }

    private void onFinish(final int r8, final int r9, final String r10, final byte[] r11) {
        if (this._taskMap.get(Integer.valueOf(r8)) != null) goto L5;
        return;
    L5:
        this._taskMap.remove(Integer.valueOf(r8));
        this._runningTaskCount--;
        Cocos2dxHelper.runOnGLThread(new 2(this, r8, r9, r10, r11));
        runNextTaskIfExists();
    }

    public static Cocos2dxDownloader createDownloader(int r3, int r4, String r5, int r6) {
        Cocos2dxDownloader r0 = new Cocos2dxDownloader();
        r0._id = r3;
        if (r4 <= 0) goto L5;
        r0._httpClient = new OkHttpClient().newBuilder().followRedirects(true).followSslRedirects(true).callTimeout(r4, TimeUnit.SECONDS).build();
    L6:
        r0._tempFileNameSuffix = r5;
        r0._countOfMaxProcessingTasks = r6;
        return r0;
    L5:
        r0._httpClient = new OkHttpClient().newBuilder().followRedirects(true).followSslRedirects(true).build();
        goto L6
    }

    public static void createTask(Cocos2dxDownloader r7, int r8, String r9, String r10, String[] r11) {
        r7.enqueueTask(new 3(r10, r9, r7, r11, r8));
    }

    public static void abort(final Cocos2dxDownloader r2, final int r3) {
        Cocos2dxHelper.getActivity().runOnUiThread(new 4(r2, r3));
    }

    public static void cancelAllRequests(final Cocos2dxDownloader r2) {
        Cocos2dxHelper.getActivity().runOnUiThread(new 5(r2));
    }

    private void enqueueTask(Runnable r4) {
        Queue<Runnable> r0 = this._taskQueue;
        monitor-enter(r0);
    L10:
        th = move-exception;
        throw th;
    L5:
        if (this._runningTaskCount >= this._countOfMaxProcessingTasks) goto L7;
        Cocos2dxHelper.getActivity().runOnUiThread(r4);     // Catch: Throwable -> L10
        this._runningTaskCount++;
    L8:
        monitor-exit(r0);     // Catch: Throwable -> L10
        return;
    L7:
        this._taskQueue.add(r4);     // Catch: Throwable -> L10
        goto L8
    }

    private void runNextTaskIfExists() {
        Queue<Runnable> r0 = this._taskQueue;
        monitor-enter(r0);
    L14:
    L11:
        th = move-exception;
        throw th;
    L5:
        if (this._runningTaskCount >= this._countOfMaxProcessingTasks) goto L9;
        if (this._taskQueue.size() <= 0) goto L9;
        Cocos2dxHelper.getActivity().runOnUiThread(this._taskQueue.poll());     // Catch: Throwable -> L11
        this._runningTaskCount++;
    L9:
        monitor-exit(r0);     // Catch: Throwable -> L11
    }
}
