package com.bianfeng.utilslib;

import android.util.Log;
import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes.dex */
public class Logger {
    public static final int ASSERT = 7;
    private static String[] COLORS = {"#66007F", "#66007F", "#66007F", "#66007F", "#3A7F00", "#FF7F00", "#ff0000"};
    public static final int DEBUG = 3;
    public static final int ERROR = 6;
    public static final int INFO = 4;
    public static final String TAG = "YmnSdk";
    public static final int VERBOSE = 2;
    public static final int WARN = 5;
    private static volatile Logger logger;
    private static LinkedList<String> logs;
    private static boolean showDebugLog;

    private Logger() {
    }

    public static Logger getInstance() {
        if (logger == null) {
            synchronized (Logger.class) {
                if (logger == null) {
                    logger = new Logger();
                }
            }
        }
        return logger;
    }

    public boolean getShowDebugLog() {
        return showDebugLog;
    }

    public void setDebugLog(boolean z) {
        showDebugLog = z;
    }

    public void updateState() {
        try {
            if (UtilsSdk.getFileUtils().isSdcardReady() && UtilsSdk.getFileUtils().isSdcardFileExist("bianfeng/sdk/debug")) {
                showDebugLog = true;
            }
        } catch (Exception e) {
            i("updateState:" + e.getMessage());
        }
        System.out.print("state of showDebugLog is " + showDebugLog);
    }

    public void setLogToCache(boolean z) {
        if (z) {
            logs = new LinkedList<String>() { // from class: com.bianfeng.utilslib.Logger.1
                private static final long serialVersionUID = 1;

                @Override // java.util.LinkedList, java.util.Deque
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

    public StringBuilder getCacheLog() {
        StringBuilder sb = new StringBuilder();
        Iterator<String> it = logs.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
        }
        return sb;
    }

    public int v(String str, String str2) {
        return printlog(2, str, str2);
    }

    public int v(String str) {
        return v("YmnSdk", str);
    }

    public int d(String str, String str2) {
        if (!showDebugLog) {
            return -1;
        }
        printlog(3, str, str2);
        return -1;
    }

    public int d(String str) {
        return d("YmnSdk", str);
    }

    public int dRich(String str) {
        return d("YmnSdk", rich(str));
    }

    public int i(String str, String str2) {
        if (showDebugLog) {
            return printlog(4, str, str2);
        }
        return -1;
    }

    public int i(String str) {
        return i("YmnSdk", str);
    }

    public int w(String str, String str2) {
        return printlog(5, str, str2);
    }

    public int w(String str) {
        return w("YmnSdk", str);
    }

    public int wRich(String str) {
        return w("YmnSdk", rich(str));
    }

    public int e(String str, String str2) {
        return printlog(6, str, str2);
    }

    public int e(String str) {
        return e("YmnSdk", str);
    }

    public int eRich(String str) {
        return e("YmnSdk", rich(str));
    }

    public int printlog(int i, String str, String str2) {
        if (logs != null) {
            logs.addLast(String.format("<font color='%s'>【%s】<br/>%s</font><br/><br/>", COLORS[i], str, str2.replace("\n", "<br/>")));
        }
        return Log.println(i, str, str2);
    }

    public String rich(String str) {
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
