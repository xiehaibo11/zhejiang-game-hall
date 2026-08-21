package com.tkay.nativead.api;

public class TYNativePrepareInfo {
    android.view.View adFromView;
    android.view.View adLogoView;
    android.widget.FrameLayout.LayoutParams choiceViewLayoutParams;
    private final java.util.List<android.view.View> clickViewList;
    android.view.View closeView;
    android.view.View ctaView;
    android.view.View descView;
    private android.view.View domainView;
    android.view.View iconView;
    android.view.View mainImageView;
    android.view.View parentView;
    android.view.View titleView;
    private android.view.View warningView;

    public TYNativePrepareInfo() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.clickViewList = r0
            return
    }

    private synchronized void addClickView(android.view.View r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 != 0) goto L5
            monitor-exit(r1)
            return
        L5:
            java.util.List<android.view.View> r0 = r1.clickViewList     // Catch: java.lang.Throwable -> L1e
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L1c
            android.view.View r0 = r1.closeView     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L17
            android.view.View r0 = r1.closeView     // Catch: java.lang.Throwable -> L1e
            if (r0 != r2) goto L17
            monitor-exit(r1)
            return
        L17:
            java.util.List<android.view.View> r0 = r1.clickViewList     // Catch: java.lang.Throwable -> L1e
            r0.add(r2)     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r1)
            return
        L1e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public android.view.View getAdFromView() {
            r1 = this;
            android.view.View r0 = r1.adFromView
            return r0
    }

    public android.view.View getAdLogoView() {
            r1 = this;
            android.view.View r0 = r1.adLogoView
            return r0
    }

    public android.widget.FrameLayout.LayoutParams getChoiceViewLayoutParams() {
            r1 = this;
            android.widget.FrameLayout$LayoutParams r0 = r1.choiceViewLayoutParams
            return r0
    }

    public java.util.List<android.view.View> getClickViewList() {
            r1 = this;
            java.util.List<android.view.View> r0 = r1.clickViewList
            return r0
    }

    public android.view.View getCloseView() {
            r1 = this;
            android.view.View r0 = r1.closeView
            return r0
    }

    public android.view.View getCtaView() {
            r1 = this;
            android.view.View r0 = r1.ctaView
            return r0
    }

    public android.view.View getDescView() {
            r1 = this;
            android.view.View r0 = r1.descView
            return r0
    }

    public android.view.View getDomainView() {
            r1 = this;
            android.view.View r0 = r1.domainView
            return r0
    }

    public android.view.View getIconView() {
            r1 = this;
            android.view.View r0 = r1.iconView
            return r0
    }

    public android.view.View getMainImageView() {
            r1 = this;
            android.view.View r0 = r1.mainImageView
            return r0
    }

    public android.view.View getParentView() {
            r1 = this;
            android.view.View r0 = r1.parentView
            return r0
    }

    public android.view.View getTitleView() {
            r1 = this;
            android.view.View r0 = r1.titleView
            return r0
    }

    public android.view.View getWarningView() {
            r1 = this;
            android.view.View r0 = r1.warningView
            return r0
    }

    public void setAdFromView(android.view.View r1) {
            r0 = this;
            r0.adFromView = r1
            return
    }

    public void setAdLogoView(android.view.View r1) {
            r0 = this;
            r0.adLogoView = r1
            return
    }

    public void setChoiceViewLayoutParams(android.widget.FrameLayout.LayoutParams r1) {
            r0 = this;
            r0.choiceViewLayoutParams = r1
            return
    }

    public void setClickViewList(java.util.List<android.view.View> r2) {
            r1 = this;
            if (r2 == 0) goto L1c
            int r0 = r2.size()
            if (r0 <= 0) goto L1c
            java.util.Iterator r2 = r2.iterator()
        Lc:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1c
            java.lang.Object r0 = r2.next()
            android.view.View r0 = (android.view.View) r0
            r1.addClickView(r0)
            goto Lc
        L1c:
            return
    }

    public void setCloseView(android.view.View r1) {
            r0 = this;
            r0.closeView = r1
            return
    }

    public void setCtaView(android.view.View r1) {
            r0 = this;
            r0.ctaView = r1
            r0.addClickView(r1)
            return
    }

    public void setDescView(android.view.View r1) {
            r0 = this;
            r0.descView = r1
            r0.addClickView(r1)
            return
    }

    public void setDomainView(android.view.View r1) {
            r0 = this;
            r0.domainView = r1
            return
    }

    public void setIconView(android.view.View r1) {
            r0 = this;
            r0.iconView = r1
            r0.addClickView(r1)
            return
    }

    public void setMainImageView(android.view.View r1) {
            r0 = this;
            r0.mainImageView = r1
            r0.addClickView(r1)
            return
    }

    public void setParentView(android.view.View r1) {
            r0 = this;
            r0.parentView = r1
            return
    }

    public void setTitleView(android.view.View r1) {
            r0 = this;
            r0.titleView = r1
            r0.addClickView(r1)
            return
    }

    public void setWarningView(android.view.View r1) {
            r0 = this;
            r0.warningView = r1
            return
    }
}
