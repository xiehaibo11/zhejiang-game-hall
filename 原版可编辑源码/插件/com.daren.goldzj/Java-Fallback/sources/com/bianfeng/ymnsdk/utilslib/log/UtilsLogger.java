package com.bianfeng.ymnsdk.utilslib.log;

import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import java.util.Iterator;
import java.util.LinkedList;

public class UtilsLogger {
    public static final int ASSERT = 7;
    private static String[] COLORS = null;
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final String TAG = "YmnSdk";
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    private static LinkedList<String> logs;
    private static boolean showDebugLog;

    static {
        COLORS = new String[]{"#66007F", "#66007F", "#66007F", "#66007F", "#3A7F00", "#FF7F00", "#ff0000"};
        showDebugLog = false;
    }

    private UtilsLogger() {
    }

    public static boolean getShowDebugLog() {
        return showDebugLog;
    }

    public static void setDebugLog(boolean r0) {
        showDebugLog = r0;
    }

    public static void updateState() {
    L9:
        e = move-exception;
        i("updateState:" + e.getMessage());
    L11:
        System.out.println("state of showDebugLog is " + showDebugLog);
        return;
    L4:
        if (FileUtils.isSDCardMounted() == false) goto L11;
        System.out.println("state of showDebugLog is " + FileUtils.isSDCardMounted());     // Catch: Exception -> L9
        if (FileUtils.isFileExistInSdCard("bianfeng/sdk/debug") == false) goto L11;
        showDebugLog = true;     // Catch: Exception -> L9
        System.out.println("state of showDebugLog is " + showDebugLog);     // Catch: Exception -> L9
        goto L11
    }

    public static void setLogToCache(boolean r0) {
        if (r0 == false) goto L4;
        logs = new 1();
        return;
    L4:
        logs = null;
    }

    public static StringBuilder getCacheLog() {
        StringBuilder r0 = new StringBuilder();
        Iterator<String> r1 = logs.iterator();
    L4:
        if (r1.hasNext() == false) goto L6;
        r0.append(r1.next());
        goto L4
    L6:
        return r0;
    }

    public static int v(String r1, String r2) {
        return printlog(2, r1, r2);
    }

    public static int v(String r1) {
        return v(TAG, r1);
    }

    public static int d(String r1, String r2) {
        if (showDebugLog == false) goto L7;
        printlog(3, r1, r2);
        return -1;
    L7:
        return -1;
    }

    public static int d(String r1) {
        return d(TAG, r1);
    }

    public static int dRich(String r1) {
        return d(TAG, rich(r1));
    }

    public static int i(String r1, String r2) {
        if (showDebugLog == true) goto L7;
        return -1;
    L7:
        return printlog(4, r1, r2);
    }

    public static int i(Object r1, String r2) {
        return i(TAG, r1.getClass().getName() + ":" + r2);
    }

    public static int i(Class r1, String r2) {
        return i(TAG, r1.getName() + ":" + r2);
    }

    public static int i(String r1) {
        return i(TAG, r1);
    }

    public static int w(String r1, String r2) {
        return printlog(5, r1, r2);
    }

    public static int w(String r1) {
        return w(TAG, r1);
    }

    public static int wRich(String r1) {
        return w(TAG, rich(r1));
    }

    public static int e(String r1, String r2) {
        return printlog(6, r1, r2);
    }

    public static int e(Object r1, String r2) {
        return e(TAG, r1.getClass().getName() + ":" + r2);
    }

    public static int e(Class r1, String r2) {
        return e(TAG, r1.getName() + ":" + r2);
    }

    public static int e(String r1) {
        return e(TAG, r1);
    }

    public static int eRich(String r1) {
        return e(TAG, rich(r1));
    }

    public static int printlog(int r5, String r6, String r7) {
        if (logs == null) goto L6;
        logs.addLast(String.format("<font color='%s'>【%s】<br/>%s</font><br/><br/>", new Object[]{COLORS[r5], r6, r7.replace("\n", "<br/>")}));
    L6:
        return Log.println(r5, r6, "Thread name:" + Thread.currentThread().getName() + ";" + r7);
    }

    public static String rich(String r3) {
        StringBuilder r0 = new StringBuilder();
        r0.append("---------------------------------------------->>");
        if (r3.startsWith("\n") == true) goto L5;
        r0.append("\n");
    L5:
        r0.append(r3);
        if (r3.endsWith("\n") == true) goto L8;
        r0.append("\n");
    L8:
        r0.append("<<----------------------------------------------");
        return r0.toString();
    }
}
