package com.ss.android.socialbase.appdownloader;

import android.content.Context;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.tkay.expressad.foundation.h.i;

public class rz {
    public static int rg(String str) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, "layout", DownloadComponentManager.getAppContext().getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int rg(Context context, String str) {
        try {
            return context.getResources().getIdentifier(str, i.g, context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int df(String str) {
        return rg(DownloadComponentManager.getAppContext(), str);
    }

    public static int q(String str) {
        try {
            return rg(str, DownloadComponentManager.getAppContext().getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int rg(String str, String str2) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, i.c, str2);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int pt(String str) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, "style", DownloadComponentManager.getAppContext().getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int pp(String str) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, "id", DownloadComponentManager.getAppContext().getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int c(String str) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, "color", DownloadComponentManager.getAppContext().getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static int df(String str, String str2) {
        try {
            return DownloadComponentManager.getAppContext().getResources().getIdentifier(str, "attr", str2);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}
