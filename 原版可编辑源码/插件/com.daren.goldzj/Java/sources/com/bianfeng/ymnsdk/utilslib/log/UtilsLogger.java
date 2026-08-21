package com.bianfeng.ymnsdk.utilslib.log;

import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import java.util.Iterator;
import java.util.LinkedList;

public class UtilsLogger {
    public static final int ASSERT = 7;
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final String TAG = "YmnSdk";
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    private static LinkedList<String> logs;
    private static String[] COLORS = {"#66007F", "#66007F", "#66007F", "#66007F", "#3A7F00", "#FF7F00", "#ff0000"};
    private static boolean showDebugLog = false;

    private UtilsLogger() {
    }

    public static boolean getShowDebugLog() {
        return showDebugLog;
    }

    public static void setDebugLog(boolean z) {
        showDebugLog = z;
    }

    /* JADX WARN: Failed to analyze thrown exceptions
    java.util.ConcurrentModificationException
    	at java.base/java.util.ArrayList$Itr.checkForComodification(Unknown Source)
    	at java.base/java.util.ArrayList$Itr.next(Unknown Source)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.processInstructions(MethodThrowsVisitor.java:117)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.visit(MethodThrowsVisitor.java:68)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.checkInsn(MethodThrowsVisitor.java:178)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.processInstructions(MethodThrowsVisitor.java:131)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.visit(MethodThrowsVisitor.java:68)
     */
    public static void updateState() {
        try {
            if (FileUtils.isSDCardMounted()) {
                System.out.println("state of showDebugLog is " + FileUtils.isSDCardMounted());
                if (FileUtils.isFileExistInSdCard("bianfeng/sdk/debug")) {
                    showDebugLog = true;
                    System.out.println("state of showDebugLog is " + showDebugLog);
                }
            }
        } catch (Exception e) {
            i("updateState:" + e.getMessage());
        }
        System.out.println("state of showDebugLog is " + showDebugLog);
    }

    public static void setLogToCache(boolean z) {
        if (z) {
            logs = new LinkedList<String>() {
                private static final long serialVersionUID = 1;

                @Override
                public void addLast(String str) {
                    if (size() > 5000) {
                        removeFirst();
                    }
                    super.addLast(str);
                }
            };
        } else {
            logs = null;
        }
    }

    public static StringBuilder getCacheLog() {
        StringBuilder sb = new StringBuilder();
        Iterator<String> it = logs.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
        }
        return sb;
    }

    public static int v(String str, String str2) {
        return printlog(2, str, str2);
    }

    public static int v(String str) {
        return v(TAG, str);
    }

    public static int d(String str, String str2) {
        if (!showDebugLog) {
            return -1;
        }
        printlog(3, str, str2);
        return -1;
    }

    public static int d(String str) {
        return d(TAG, str);
    }

    public static int dRich(String str) {
        return d(TAG, rich(str));
    }

    public static int i(String str, String str2) {
        if (showDebugLog) {
            return printlog(4, str, str2);
        }
        return -1;
    }

    public static int i(Object obj, String str) {
        return i(TAG, obj.getClass().getName() + ":" + str);
    }

    public static int i(Class cls, String str) {
        return i(TAG, cls.getName() + ":" + str);
    }

    public static int i(String str) {
        return i(TAG, str);
    }

    public static int w(String str, String str2) {
        return printlog(5, str, str2);
    }

    public static int w(String str) {
        return w(TAG, str);
    }

    public static int wRich(String str) {
        return w(TAG, rich(str));
    }

    public static int e(String str, String str2) {
        return printlog(6, str, str2);
    }

    public static int e(Object obj, String str) {
        return e(TAG, obj.getClass().getName() + ":" + str);
    }

    public static int e(Class cls, String str) {
        return e(TAG, cls.getName() + ":" + str);
    }

    public static int e(String str) {
        return e(TAG, str);
    }

    public static int eRich(String str) {
        return e(TAG, rich(str));
    }

    public static int printlog(int i, String str, String str2) {
        if (logs != null) {
            logs.addLast(String.format("<font color='%s'>【%s】<br/>%s</font><br/><br/>", COLORS[i], str, str2.replace("\n", "<br/>")));
        }
        return Log.println(i, str, "Thread name:" + Thread.currentThread().getName() + ";" + str2);
    }

    public static String rich(String str) {
        StringBuilder sb = new StringBuilder();
        sb.append("---------------------------------------------->>");
        if (!str.startsWith("\n")) {
            sb.append("\n");
        }
        sb.append(str);
        if (!str.endsWith("\n")) {
            sb.append("\n");
        }
        sb.append("<<----------------------------------------------");
        return sb.toString();
    }
}
