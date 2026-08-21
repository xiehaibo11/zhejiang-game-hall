package com.bianfeng.ymnsdk.utilslib.log;

import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.xiaomi.mipush.sdk.Constants;
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

    public static void setDebugLog(boolean showDebugLog2) {
        showDebugLog = showDebugLog2;
    }

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

    public static void setLogToCache(boolean b) {
        if (b) {
            logs = new LinkedList<String>() {
                private static final long serialVersionUID = 1;

                @Override
                public void addLast(String object) {
                    if (size() > 5000) {
                        removeFirst();
                    }
                    super.addLast(object);
                }
            };
        } else {
            logs = null;
        }
    }

    public static StringBuilder getCacheLog() {
        StringBuilder builder = new StringBuilder();
        for (String log : logs) {
            builder.append(log);
        }
        return builder;
    }

    public static int v(String tag, String msg) {
        return printlog(2, tag, msg);
    }

    public static int v(String msg) {
        return v("YmnSdk", msg);
    }

    public static int d(String tag, String msg) {
        if (showDebugLog) {
            printlog(3, tag, msg);
        }
        return -1;
    }

    public static int d(String msg) {
        return d("YmnSdk", msg);
    }

    public static int dRich(String msg) {
        return d("YmnSdk", rich(msg));
    }

    public static int i(String tag, String msg) {
        if (!showDebugLog) {
            return -1;
        }
        int number = printlog(4, tag, msg);
        return number;
    }

    public static int i(Object object, String msg) {
        return i("YmnSdk", object.getClass().getName() + Constants.COLON_SEPARATOR + msg);
    }

    public static int i(Class object, String msg) {
        return i("YmnSdk", object.getName() + Constants.COLON_SEPARATOR + msg);
    }

    public static int i(String msg) {
        return i("YmnSdk", msg);
    }

    public static int w(String tag, String msg) {
        return printlog(5, tag, msg);
    }

    public static int w(String msg) {
        return w("YmnSdk", msg);
    }

    public static int wRich(String msg) {
        return w("YmnSdk", rich(msg));
    }

    public static int e(String tag, String msg) {
        return printlog(6, tag, msg);
    }

    public static int e(Object object, String msg) {
        return e("YmnSdk", object.getClass().getName() + Constants.COLON_SEPARATOR + msg);
    }

    public static int e(Class object, String msg) {
        return e("YmnSdk", object.getName() + Constants.COLON_SEPARATOR + msg);
    }

    public static int e(String msg) {
        return e("YmnSdk", msg);
    }

    public static int eRich(String msg) {
        return e("YmnSdk", rich(msg));
    }

    public static int printlog(int priority, String tag, String msg) {
        if (logs != null) {
            String htmlMsg = msg.replace("\n", "<br/>");
            logs.addLast(String.format("<font color='%s'>【%s】<br/>%s</font><br/><br/>", COLORS[priority], tag, htmlMsg));
        }
        return Log.println(priority, tag, "Thread name:" + Thread.currentThread().getName() + ";" + msg);
    }

    public static String rich(String msg) {
        StringBuilder builder = new StringBuilder();
        builder.append("---------------------------------------------->>");
        if (!msg.startsWith("\n")) {
            builder.append("\n");
        }
        builder.append(msg);
        if (!msg.endsWith("\n")) {
            builder.append("\n");
        }
        builder.append("<<----------------------------------------------");
        return builder.toString();
    }
}
