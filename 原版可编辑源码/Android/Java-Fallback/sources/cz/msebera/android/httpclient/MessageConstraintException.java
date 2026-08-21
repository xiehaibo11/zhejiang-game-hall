package cz.msebera.android.httpclient;

public class MessageConstraintException extends java.nio.charset.CharacterCodingException {
    private static final long serialVersionUID = 6077207720446368695L;
    private final java.lang.String message;

    public MessageConstraintException(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.message = r1
            return
    }

    @Override
    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }
}
