package com.kwad.sdk.crash.utils;

public class FileExistsException extends java.io.IOException {
    private static final long serialVersionUID = 1;

    public FileExistsException() {
            r0 = this;
            r0.<init>()
            return
    }

    public FileExistsException(java.io.File r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "File "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = " already exists"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            return
    }

    public FileExistsException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
