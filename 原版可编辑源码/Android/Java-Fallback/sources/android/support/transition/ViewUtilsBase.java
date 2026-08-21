package android.support.transition;

class ViewUtilsBase {
    private float[] mMatrixValues;

    ViewUtilsBase() {
            r0 = this;
            r0.<init>()
            return
    }

    public void clearNonTransitionAlpha(android.view.View r3) {
            r2 = this;
            int r0 = r3.getVisibility()
            if (r0 != 0) goto Lc
            int r0 = android.support.transition.R.id.save_non_transition_alpha
            r1 = 0
            r3.setTag(r0, r1)
        Lc:
            return
    }

    public float getTransitionAlpha(android.view.View r2) {
            r1 = this;
            int r0 = android.support.transition.R.id.save_non_transition_alpha
            java.lang.Object r0 = r2.getTag(r0)
            java.lang.Float r0 = (java.lang.Float) r0
            if (r0 == 0) goto L14
            float r2 = r2.getAlpha()
            float r0 = r0.floatValue()
            float r2 = r2 / r0
            return r2
        L14:
            float r2 = r2.getAlpha()
            return r2
    }

    public void saveNonTransitionAlpha(android.view.View r3) {
            r2 = this;
            int r0 = android.support.transition.R.id.save_non_transition_alpha
            java.lang.Object r0 = r3.getTag(r0)
            if (r0 != 0) goto L15
            int r0 = android.support.transition.R.id.save_non_transition_alpha
            float r1 = r3.getAlpha()
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r3.setTag(r0, r1)
        L15:
            return
    }

    public void setAnimationMatrix(android.view.View r10, android.graphics.Matrix r11) {
            r9 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r1 = 2
            r2 = 0
            if (r11 == 0) goto L5f
            boolean r3 = r11.isIdentity()
            if (r3 == 0) goto Ld
            goto L5f
        Ld:
            float[] r3 = r9.mMatrixValues
            if (r3 != 0) goto L17
            r3 = 9
            float[] r3 = new float[r3]
            r9.mMatrixValues = r3
        L17:
            r11.getValues(r3)
            r11 = 3
            r11 = r3[r11]
            float r4 = r11 * r11
            float r0 = r0 - r4
            double r4 = (double) r0
            double r4 = java.lang.Math.sqrt(r4)
            float r0 = (float) r4
            r4 = 0
            r5 = r3[r4]
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r5 >= 0) goto L2f
            r5 = -1
            goto L30
        L2f:
            r5 = 1
        L30:
            float r5 = (float) r5
            float r0 = r0 * r5
            double r5 = (double) r11
            double r7 = (double) r0
            double r5 = java.lang.Math.atan2(r5, r7)
            double r5 = java.lang.Math.toDegrees(r5)
            float r11 = (float) r5
            r4 = r3[r4]
            float r4 = r4 / r0
            r5 = 4
            r5 = r3[r5]
            float r5 = r5 / r0
            r0 = r3[r1]
            r1 = 5
            r1 = r3[r1]
            r10.setPivotX(r2)
            r10.setPivotY(r2)
            r10.setTranslationX(r0)
            r10.setTranslationY(r1)
            r10.setRotation(r11)
            r10.setScaleX(r4)
            r10.setScaleY(r5)
            goto L80
        L5f:
            int r11 = r10.getWidth()
            int r11 = r11 / r1
            float r11 = (float) r11
            r10.setPivotX(r11)
            int r11 = r10.getHeight()
            int r11 = r11 / r1
            float r11 = (float) r11
            r10.setPivotY(r11)
            r10.setTranslationX(r2)
            r10.setTranslationY(r2)
            r10.setScaleX(r0)
            r10.setScaleY(r0)
            r10.setRotation(r2)
        L80:
            return
    }

    public void setLeftTopRightBottom(android.view.View r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            r1.setLeft(r2)
            r1.setTop(r3)
            r1.setRight(r4)
            r1.setBottom(r5)
            return
    }

    public void setTransitionAlpha(android.view.View r2, float r3) {
            r1 = this;
            int r0 = android.support.transition.R.id.save_non_transition_alpha
            java.lang.Object r0 = r2.getTag(r0)
            java.lang.Float r0 = (java.lang.Float) r0
            if (r0 == 0) goto L13
            float r0 = r0.floatValue()
            float r0 = r0 * r3
            r2.setAlpha(r0)
            goto L16
        L13:
            r2.setAlpha(r3)
        L16:
            return
    }

    public void transformMatrixToGlobal(android.view.View r3, android.graphics.Matrix r4) {
            r2 = this;
            android.view.ViewParent r0 = r3.getParent()
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L1c
            android.view.View r0 = (android.view.View) r0
            r2.transformMatrixToGlobal(r0, r4)
            int r1 = r0.getScrollX()
            int r1 = -r1
            float r1 = (float) r1
            int r0 = r0.getScrollY()
            int r0 = -r0
            float r0 = (float) r0
            r4.preTranslate(r1, r0)
        L1c:
            int r0 = r3.getLeft()
            float r0 = (float) r0
            int r1 = r3.getTop()
            float r1 = (float) r1
            r4.preTranslate(r0, r1)
            android.graphics.Matrix r3 = r3.getMatrix()
            boolean r0 = r3.isIdentity()
            if (r0 != 0) goto L36
            r4.preConcat(r3)
        L36:
            return
    }

    public void transformMatrixToLocal(android.view.View r3, android.graphics.Matrix r4) {
            r2 = this;
            android.view.ViewParent r0 = r3.getParent()
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L1a
            android.view.View r0 = (android.view.View) r0
            r2.transformMatrixToLocal(r0, r4)
            int r1 = r0.getScrollX()
            float r1 = (float) r1
            int r0 = r0.getScrollY()
            float r0 = (float) r0
            r4.postTranslate(r1, r0)
        L1a:
            int r0 = r3.getLeft()
            float r0 = (float) r0
            int r1 = r3.getTop()
            float r1 = (float) r1
            r4.postTranslate(r0, r1)
            android.graphics.Matrix r3 = r3.getMatrix()
            boolean r0 = r3.isIdentity()
            if (r0 != 0) goto L3f
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            boolean r3 = r3.invert(r0)
            if (r3 == 0) goto L3f
            r4.postConcat(r0)
        L3f:
            return
    }
}
