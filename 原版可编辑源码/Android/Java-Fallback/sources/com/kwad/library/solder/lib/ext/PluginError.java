package com.kwad.library.solder.lib.ext;

public abstract class PluginError extends java.lang.Exception {
    public static final int ERROR_INS_CAPACITY = 3005;
    public static final int ERROR_INS_INSTALL = 3004;
    public static final int ERROR_INS_INSTALL_PATH = 3006;
    public static final int ERROR_INS_NOT_FOUND = 3001;
    public static final int ERROR_INS_PACKAGE_INFO = 3002;
    public static final int ERROR_INS_SIGNATURE = 3003;
    public static final int ERROR_LOA_CLASS = 4007;
    public static final int ERROR_LOA_CLASSLOADER = 4005;
    public static final int ERROR_LOA_CREATE_PLUGIN = 4011;
    public static final int ERROR_LOA_NOT_FOUND = 4001;
    public static final int ERROR_LOA_NOT_LOADED = 4010;
    public static final int ERROR_LOA_OPT_DIR = 4002;
    public static final int ERROR_LOA_RESOURCES = 4006;
    public static final int ERROR_LOA_SO_DIR = 4003;
    public static final int ERROR_LOA_SO_INSTALL = 4004;
    public static final int ERROR_LOA_SO_MD5_CHECK = 4008;
    private static final int ERROR_OVER_RETRY = 1001;
    public static final int ERROR_UPD_CANCELED = 2001;
    public static final int ERROR_UPD_CAPACITY = 2005;
    public static final int ERROR_UPD_DOWNLOAD = 2002;
    public static final int ERROR_UPD_EXTRACT = 2004;
    public static final int ERROR_UPD_NOT_WIFI_DOWNLOAD = 2007;
    public static final int ERROR_UPD_NO_DOWNLOADER = 2008;
    public static final int ERROR_UPD_NO_TEMP = 2003;
    public static final int ERROR_UPD_REQUEST = 2006;
    private final int mCode;

    public static final class CancelError extends com.kwad.library.solder.lib.ext.PluginError {
        public CancelError(int r2) {
                r1 = this;
                java.lang.String r0 = "Operation was canceled."
                r1.<init>(r0, r2)
                return
        }
    }

    public static final class InstallError extends com.kwad.library.solder.lib.ext.PluginError {
        public InstallError(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public InstallError(java.lang.Throwable r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    public static final class LoadError extends com.kwad.library.solder.lib.ext.PluginError {
        public LoadError(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public LoadError(java.lang.Throwable r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                java.lang.StackTraceElement[] r1 = r1.getStackTrace()
                r0.setStackTrace(r1)
                return
        }
    }

    public static final class NotWifiDownloadError extends com.kwad.library.solder.lib.ext.PluginError {
        public NotWifiDownloadError(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public NotWifiDownloadError(java.lang.Throwable r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                java.lang.StackTraceElement[] r1 = r1.getStackTrace()
                r0.setStackTrace(r1)
                return
        }
    }

    public static final class RetryError extends com.kwad.library.solder.lib.ext.PluginError {
        public RetryError() {
                r2 = this;
                java.lang.String r0 = "Reach max retry."
                r1 = 1001(0x3e9, float:1.403E-42)
                r2.<init>(r0, r1)
                return
        }
    }

    public static final class UpdateError extends com.kwad.library.solder.lib.ext.PluginError {
        public UpdateError(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public UpdateError(java.lang.Throwable r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    public PluginError(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mCode = r2
            return
    }

    public PluginError(java.lang.String r1, java.lang.Throwable r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.mCode = r3
            return
    }

    public PluginError(java.lang.Throwable r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mCode = r2
            return
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.mCode
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PluginError{code="
            r0.<init>(r1)
            int r1 = r2.mCode
            r0.append(r1)
            java.lang.String r1 = ", msg = "
            r0.append(r1)
            java.lang.String r1 = super.toString()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
