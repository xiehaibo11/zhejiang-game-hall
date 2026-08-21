package net.grandcentrix.tray.core;

/* JADX INFO: loaded from: classes4.dex */
public class WrongTypeException extends TrayRuntimeException {
    public WrongTypeException() {
    }

    public WrongTypeException(String detailMessage) {
        super(detailMessage);
    }

    public WrongTypeException(String detailMessage, Object... args) {
        super(detailMessage, args);
    }

    public WrongTypeException(String detailMessage, Throwable throwable) {
        super(detailMessage, throwable);
    }

    public WrongTypeException(Throwable throwable) {
        super(throwable);
    }
}
