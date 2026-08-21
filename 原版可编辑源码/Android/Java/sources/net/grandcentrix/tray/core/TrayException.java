package net.grandcentrix.tray.core;

public class TrayException extends Exception {
    public TrayException() {
    }

    public TrayException(String detailMessage) {
        super(detailMessage);
    }

    public TrayException(String detailMessage, Object... args) {
        super(String.format(detailMessage, args));
    }

    public TrayException(String detailMessage, Throwable throwable) {
        super(detailMessage, throwable);
    }

    public TrayException(Throwable throwable) {
        super(throwable);
    }
}
