package org.json.simple.parser;

public class ParseException extends java.lang.Exception {
    public static final int ERROR_UNEXPECTED_CHAR = 0;
    public static final int ERROR_UNEXPECTED_EXCEPTION = 2;
    public static final int ERROR_UNEXPECTED_TOKEN = 1;
    private static final long serialVersionUID = -7880698968187728548L;
    private int errorType;
    private int position;
    private java.lang.Object unexpectedObject;

    public ParseException(int r3) {
            r2 = this;
            r0 = -1
            r1 = 0
            r2.<init>(r0, r3, r1)
            return
    }

    public ParseException(int r1, int r2, java.lang.Object r3) {
            r0 = this;
            r0.<init>()
            r0.position = r1
            r0.errorType = r2
            r0.unexpectedObject = r3
            return
    }

    public ParseException(int r2, java.lang.Object r3) {
            r1 = this;
            r0 = -1
            r1.<init>(r0, r2, r3)
            return
    }

    public int getErrorType() {
            r1 = this;
            int r0 = r1.errorType
            return r0
    }

    public int getPosition() {
            r1 = this;
            int r0 = r1.position
            return r0
    }

    public java.lang.Object getUnexpectedObject() {
            r1 = this;
            java.lang.Object r0 = r1.unexpectedObject
            return r0
    }

    public void setErrorType(int r1) {
            r0 = this;
            r0.errorType = r1
            return
    }

    public void setPosition(int r1) {
            r0 = this;
            r0.position = r1
            return
    }

    public void setUnexpectedObject(java.lang.Object r1) {
            r0 = this;
            r0.unexpectedObject = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r4.errorType
            java.lang.String r2 = "."
            if (r1 == 0) goto L36
            r3 = 1
            if (r1 == r3) goto L29
            r3 = 2
            if (r1 == r3) goto L14
            java.lang.String r1 = "Unkown error at position "
            goto L42
        L14:
            java.lang.String r1 = "Unexpected exception at position "
            r0.append(r1)
            int r1 = r4.position
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            java.lang.Object r1 = r4.unexpectedObject
            r0.append(r1)
            goto L4d
        L29:
            java.lang.String r1 = "Unexpected token "
            r0.append(r1)
            java.lang.Object r1 = r4.unexpectedObject
            r0.append(r1)
            java.lang.String r1 = " at position "
            goto L42
        L36:
            java.lang.String r1 = "Unexpected character ("
            r0.append(r1)
            java.lang.Object r1 = r4.unexpectedObject
            r0.append(r1)
            java.lang.String r1 = ") at position "
        L42:
            r0.append(r1)
            int r1 = r4.position
            r0.append(r1)
            r0.append(r2)
        L4d:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
