package net.grandcentrix.tray.core;

public class ItemNotFoundException extends TrayException {
    public ItemNotFoundException() {
    }

    public ItemNotFoundException(String detailMessage) {
        super(detailMessage);
    }

    public ItemNotFoundException(String detailMessage, Object... args) {
        super(detailMessage, args);
    }

    public ItemNotFoundException(String detailMessage, Throwable throwable) {
        super(detailMessage, throwable);
    }

    public ItemNotFoundException(Throwable throwable) {
        super(throwable);
    }
}
