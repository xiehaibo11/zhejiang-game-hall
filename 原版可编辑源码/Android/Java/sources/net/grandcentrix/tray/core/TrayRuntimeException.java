package net.grandcentrix.tray.core;

public class TrayRuntimeException extends RuntimeException {
    public TrayRuntimeException() {
    }

    public TrayRuntimeException(String detailMessage) {
        super(detailMessage);
    }

    public TrayRuntimeException(String detailMessage, Object... args) {
        super(String.format(detailMessage, args));
    }

    public TrayRuntimeException(String detailMessage, Throwable throwable) {
        super(detailMessage, throwable);
    }

    public TrayRuntimeException(Throwable throwable) {
        super(throwable);
    }
}
