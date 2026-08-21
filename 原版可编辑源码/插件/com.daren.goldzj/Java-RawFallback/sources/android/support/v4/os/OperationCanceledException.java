package android.support.v4.os;

public class OperationCanceledException extends java.lang.RuntimeException {
    public OperationCanceledException() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public OperationCanceledException(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L3
            goto L5
        L3:
            java.lang.String r1 = "The operation has been canceled."
        L5:
            r0.<init>(r1)
            return
    }
}
