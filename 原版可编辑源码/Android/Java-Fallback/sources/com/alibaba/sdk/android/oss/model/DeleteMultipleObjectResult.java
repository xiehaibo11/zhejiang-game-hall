package com.alibaba.sdk.android.oss.model;

public class DeleteMultipleObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.util.List<java.lang.String> deletedObjects;
    private java.util.List<java.lang.String> failedObjects;
    private boolean isQuiet;

    public DeleteMultipleObjectResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public void addDeletedObject(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.deletedObjects
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.deletedObjects = r0
        Lb:
            java.util.List<java.lang.String> r0 = r1.deletedObjects
            r0.add(r2)
            return
    }

    public void addFailedObjects(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.failedObjects
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.failedObjects = r0
        Lb:
            java.util.List<java.lang.String> r0 = r1.failedObjects
            r0.add(r2)
            return
    }

    public void clear() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.deletedObjects
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            java.util.List<java.lang.String> r0 = r1.failedObjects
            if (r0 == 0) goto Le
            r0.clear()
        Le:
            return
    }

    public java.util.List<java.lang.String> getDeletedObjects() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.deletedObjects
            return r0
    }

    public java.util.List<java.lang.String> getFailedObjects() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.failedObjects
            return r0
    }

    public boolean getQuiet() {
            r1 = this;
            boolean r0 = r1.isQuiet
            return r0
    }

    public void setQuiet(boolean r1) {
            r0 = this;
            r0.isQuiet = r1
            return
    }
}
