package org.bouncycastle.jce.provider;

public class PKIXPolicyNode implements java.security.cert.PolicyNode {
    protected java.util.List children;
    protected boolean critical;
    protected int depth;
    protected java.util.Set expectedPolicies;
    protected java.security.cert.PolicyNode parent;
    protected java.util.Set policyQualifiers;
    protected java.lang.String validPolicy;

    public PKIXPolicyNode(java.util.List r1, int r2, java.util.Set r3, java.security.cert.PolicyNode r4, java.util.Set r5, java.lang.String r6, boolean r7) {
            r0 = this;
            r0.<init>()
            r0.children = r1
            r0.depth = r2
            r0.expectedPolicies = r3
            r0.parent = r4
            r0.policyQualifiers = r5
            r0.validPolicy = r6
            r0.critical = r7
            return
    }

    public void addChild(org.bouncycastle.jce.provider.PKIXPolicyNode r2) {
            r1 = this;
            java.util.List r0 = r1.children
            r0.add(r2)
            r2.setParent(r1)
            return
    }

    public java.lang.Object clone() {
            r1 = this;
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = r1.copy()
            return r0
    }

    public org.bouncycastle.jce.provider.PKIXPolicyNode copy() {
            r9 = this;
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            java.util.Set r0 = r9.expectedPolicies
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.String r1 = new java.lang.String
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            r1.<init>(r2)
            r3.add(r1)
            goto Lb
        L20:
            java.util.HashSet r5 = new java.util.HashSet
            r5.<init>()
            java.util.Set r0 = r9.policyQualifiers
            java.util.Iterator r0 = r0.iterator()
        L2b:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L40
            java.lang.String r1 = new java.lang.String
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            r1.<init>(r2)
            r5.add(r1)
            goto L2b
        L40:
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r9.depth
            r4 = 0
            java.lang.String r6 = new java.lang.String
            java.lang.String r0 = r9.validPolicy
            r6.<init>(r0)
            boolean r7 = r9.critical
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.util.List r0 = r9.children
            java.util.Iterator r0 = r0.iterator()
        L5d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L74
            java.lang.Object r1 = r0.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = r1.copy()
            r1.setParent(r8)
            r8.addChild(r1)
            goto L5d
        L74:
            return r8
    }

    @Override
    public java.util.Iterator getChildren() {
            r1 = this;
            java.util.List r0 = r1.children
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    @Override
    public int getDepth() {
            r1 = this;
            int r0 = r1.depth
            return r0
    }

    @Override
    public java.util.Set getExpectedPolicies() {
            r1 = this;
            java.util.Set r0 = r1.expectedPolicies
            return r0
    }

    @Override
    public java.security.cert.PolicyNode getParent() {
            r1 = this;
            java.security.cert.PolicyNode r0 = r1.parent
            return r0
    }

    @Override
    public java.util.Set getPolicyQualifiers() {
            r1 = this;
            java.util.Set r0 = r1.policyQualifiers
            return r0
    }

    @Override
    public java.lang.String getValidPolicy() {
            r1 = this;
            java.lang.String r0 = r1.validPolicy
            return r0
    }

    public boolean hasChildren() {
            r1 = this;
            java.util.List r0 = r1.children
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public boolean isCritical() {
            r1 = this;
            boolean r0 = r1.critical
            return r0
    }

    public void removeChild(org.bouncycastle.jce.provider.PKIXPolicyNode r2) {
            r1 = this;
            java.util.List r0 = r1.children
            r0.remove(r2)
            return
    }

    public void setCritical(boolean r1) {
            r0 = this;
            r0.critical = r1
            return
    }

    public void setParent(org.bouncycastle.jce.provider.PKIXPolicyNode r1) {
            r0 = this;
            r0.parent = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r0 = r1.toString(r0)
            return r0
    }

    public java.lang.String toString(java.lang.String r6) {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r0.append(r6)
            java.lang.String r1 = r5.validPolicy
            r0.append(r1)
            java.lang.String r1 = " {\n"
            r0.append(r1)
            r1 = 0
        L13:
            java.util.List r2 = r5.children
            int r2 = r2.size()
            if (r1 >= r2) goto L3e
            java.util.List r2 = r5.children
            java.lang.Object r2 = r2.get(r1)
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r4 = "    "
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            int r1 = r1 + 1
            goto L13
        L3e:
            r0.append(r6)
            java.lang.String r6 = "}\n"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
    }
}
