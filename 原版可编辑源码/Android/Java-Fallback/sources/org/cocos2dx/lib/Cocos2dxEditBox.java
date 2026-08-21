package org.cocos2dx.lib;

public class Cocos2dxEditBox extends android.widget.EditText {
    public static final int kEndActionNext = 1;
    public static final int kEndActionReturn = 3;
    public static final int kEndActionUnknown = 0;
    private static final int kTextHorizontalAlignmentCenter = 1;
    private static final int kTextHorizontalAlignmentLeft = 0;
    private static final int kTextHorizontalAlignmentRight = 2;
    private static final int kTextVerticalAlignmentBottom = 2;
    private static final int kTextVerticalAlignmentCenter = 1;
    private static final int kTextVerticalAlignmentTop = 0;
    private java.lang.Boolean changedTextProgrammatically;
    int endAction;
    private final int kEditBoxInputFlagInitialCapsAllCharacters;
    private final int kEditBoxInputFlagInitialCapsSentence;
    private final int kEditBoxInputFlagInitialCapsWord;
    private final int kEditBoxInputFlagLowercaseAllCharacters;
    private final int kEditBoxInputFlagPassword;
    private final int kEditBoxInputFlagSensitive;
    private final int kEditBoxInputModeAny;
    private final int kEditBoxInputModeDecimal;
    private final int kEditBoxInputModeEmailAddr;
    private final int kEditBoxInputModeNumeric;
    private final int kEditBoxInputModePhoneNumber;
    private final int kEditBoxInputModeSingleLine;
    private final int kEditBoxInputModeUrl;
    private final int kKeyboardReturnTypeDefault;
    private final int kKeyboardReturnTypeDone;
    private final int kKeyboardReturnTypeGo;
    private final int kKeyboardReturnTypeNext;
    private final int kKeyboardReturnTypeSearch;
    private final int kKeyboardReturnTypeSend;
    private int mInputFlagConstraints;
    private int mInputModeConstraints;
    private int mMaxLength;
    private float mScaleX;

    public Cocos2dxEditBox(android.content.Context r7) {
            r6 = this;
            r6.<init>(r7)
            r7 = 0
            r6.kEditBoxInputModeAny = r7
            r0 = 1
            r6.kEditBoxInputModeEmailAddr = r0
            r1 = 2
            r6.kEditBoxInputModeNumeric = r1
            r2 = 3
            r6.kEditBoxInputModePhoneNumber = r2
            r3 = 4
            r6.kEditBoxInputModeUrl = r3
            r4 = 5
            r6.kEditBoxInputModeDecimal = r4
            r5 = 6
            r6.kEditBoxInputModeSingleLine = r5
            r6.kEditBoxInputFlagPassword = r7
            r6.kEditBoxInputFlagSensitive = r0
            r6.kEditBoxInputFlagInitialCapsWord = r1
            r6.kEditBoxInputFlagInitialCapsSentence = r2
            r6.kEditBoxInputFlagInitialCapsAllCharacters = r3
            r6.kEditBoxInputFlagLowercaseAllCharacters = r4
            r6.kKeyboardReturnTypeDefault = r7
            r6.kKeyboardReturnTypeDone = r0
            r6.kKeyboardReturnTypeSend = r1
            r6.kKeyboardReturnTypeSearch = r2
            r6.kKeyboardReturnTypeGo = r3
            r6.kKeyboardReturnTypeNext = r4
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r7)
            r6.changedTextProgrammatically = r0
            r6.endAction = r7
            return
    }

    public java.lang.Boolean getChangedTextProgrammatically() {
            r1 = this;
            java.lang.Boolean r0 = r1.changedTextProgrammatically
            return r0
    }

    public float getOpenGLViewScaleX() {
            r1 = this;
            float r0 = r1.mScaleX
            return r0
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 == r0) goto L8
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
        L8:
            android.content.Context r2 = r1.getContext()
            org.cocos2dx.lib.Cocos2dxActivity r2 = (org.cocos2dx.lib.Cocos2dxActivity) r2
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r2.getGLSurfaceView()
            r2.requestFocus()
            r2 = 1
            return r2
    }

    @Override
    public boolean onKeyPreIme(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyPreIme(r1, r2)
            return r1
    }

    public void setChangedTextProgrammatically(java.lang.Boolean r1) {
            r0 = this;
            r0.changedTextProgrammatically = r1
            return
    }

    public void setEditBoxViewRect(int r3, int r4, int r5, int r6) {
            r2 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r0.leftMargin = r3
            r0.topMargin = r4
            r0.width = r5
            r0.height = r6
            r3 = 51
            r0.gravity = r3
            r2.setLayoutParams(r0)
            return
    }

    public void setInputFlag(int r3) {
            r2 = this;
            if (r3 == 0) goto L29
            r0 = 1
            if (r3 == r0) goto L24
            r1 = 2
            if (r3 == r1) goto L1f
            r1 = 3
            if (r3 == r1) goto L1a
            r1 = 4
            if (r3 == r1) goto L15
            r1 = 5
            if (r3 == r1) goto L12
            goto L3a
        L12:
            r2.mInputFlagConstraints = r0
            goto L3a
        L15:
            r3 = 4096(0x1000, float:5.74E-42)
            r2.mInputFlagConstraints = r3
            goto L3a
        L1a:
            r3 = 16384(0x4000, float:2.2959E-41)
            r2.mInputFlagConstraints = r3
            goto L3a
        L1f:
            r3 = 8192(0x2000, float:1.148E-41)
            r2.mInputFlagConstraints = r3
            goto L3a
        L24:
            r3 = 524288(0x80000, float:7.34684E-40)
            r2.mInputFlagConstraints = r3
            goto L3a
        L29:
            r3 = 129(0x81, float:1.81E-43)
            r2.mInputFlagConstraints = r3
            android.graphics.Typeface r3 = android.graphics.Typeface.DEFAULT
            r2.setTypeface(r3)
            android.text.method.PasswordTransformationMethod r3 = new android.text.method.PasswordTransformationMethod
            r3.<init>()
            r2.setTransformationMethod(r3)
        L3a:
            int r3 = r2.mInputFlagConstraints
            int r0 = r2.mInputModeConstraints
            r3 = r3 | r0
            r2.setInputType(r3)
            return
    }

    public void setInputMode(int r3) {
            r2 = this;
            r0 = 0
            r2.setTextHorizontalAlignment(r0)
            r1 = 1
            r2.setTextVerticalAlignment(r1)
            switch(r3) {
                case 0: goto L27;
                case 1: goto L22;
                case 2: goto L1d;
                case 3: goto L19;
                case 4: goto L14;
                case 5: goto Lf;
                case 6: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L2f
        Lc:
            r2.mInputModeConstraints = r1
            goto L2f
        Lf:
            r3 = 12290(0x3002, float:1.7222E-41)
            r2.mInputModeConstraints = r3
            goto L2f
        L14:
            r3 = 17
            r2.mInputModeConstraints = r3
            goto L2f
        L19:
            r3 = 3
            r2.mInputModeConstraints = r3
            goto L2f
        L1d:
            r3 = 4098(0x1002, float:5.743E-42)
            r2.mInputModeConstraints = r3
            goto L2f
        L22:
            r3 = 33
            r2.mInputModeConstraints = r3
            goto L2f
        L27:
            r2.setTextVerticalAlignment(r0)
            r3 = 131073(0x20001, float:1.83672E-40)
            r2.mInputModeConstraints = r3
        L2f:
            int r3 = r2.mInputModeConstraints
            int r0 = r2.mInputFlagConstraints
            r3 = r3 | r0
            r2.setInputType(r3)
            return
    }

    public void setMaxLength(int r3) {
            r2 = this;
            r2.mMaxLength = r3
            r3 = 1
            android.text.InputFilter[] r3 = new android.text.InputFilter[r3]
            android.text.InputFilter$LengthFilter r0 = new android.text.InputFilter$LengthFilter
            int r1 = r2.mMaxLength
            r0.<init>(r1)
            r1 = 0
            r3[r1] = r0
            r2.setFilters(r3)
            return
    }

    public void setMultilineEnabled(boolean r2) {
            r1 = this;
            int r2 = r1.mInputModeConstraints
            r0 = 131072(0x20000, float:1.83671E-40)
            r2 = r2 | r0
            r1.mInputModeConstraints = r2
            return
    }

    public void setOpenGLViewScaleX(float r1) {
            r0 = this;
            r0.mScaleX = r1
            return
    }

    public void setReturnType(int r3) {
            r2 = this;
            r0 = 268435457(0x10000001, float:2.5243552E-29)
            if (r3 == 0) goto L3b
            r1 = 1
            if (r3 == r1) goto L34
            r1 = 2
            if (r3 == r1) goto L2d
            r1 = 3
            if (r3 == r1) goto L26
            r1 = 4
            if (r3 == r1) goto L1f
            r1 = 5
            if (r3 == r1) goto L18
            r2.setImeOptions(r0)
            goto L3e
        L18:
            r3 = 268435461(0x10000005, float:2.5243564E-29)
            r2.setImeOptions(r3)
            goto L3e
        L1f:
            r3 = 268435458(0x10000002, float:2.5243555E-29)
            r2.setImeOptions(r3)
            goto L3e
        L26:
            r3 = 268435459(0x10000003, float:2.5243558E-29)
            r2.setImeOptions(r3)
            goto L3e
        L2d:
            r3 = 268435460(0x10000004, float:2.524356E-29)
            r2.setImeOptions(r3)
            goto L3e
        L34:
            r3 = 268435462(0x10000006, float:2.5243567E-29)
            r2.setImeOptions(r3)
            goto L3e
        L3b:
            r2.setImeOptions(r0)
        L3e:
            return
    }

    public void setTextHorizontalAlignment(int r3) {
            r2 = this;
            int r0 = r2.getGravity()
            if (r3 == 0) goto Lc
            r1 = 1
            if (r3 == r1) goto L16
            r1 = 2
            if (r3 == r1) goto L11
        Lc:
            r3 = r0 & (-6)
            r3 = r3 | 3
            goto L1b
        L11:
            r3 = r0 & (-4)
            r3 = r3 | 5
            goto L1b
        L16:
            r3 = r0 & (-6)
            r3 = r3 & (-4)
            r3 = r3 | r1
        L1b:
            r2.setGravity(r3)
            return
    }

    public void setTextVerticalAlignment(int r5) {
            r4 = this;
            int r0 = r4.getGravity()
            float r1 = r4.mScaleX
            int r1 = org.cocos2dx.lib.Cocos2dxEditBoxHelper.getPadding(r1)
            r2 = 0
            if (r5 == 0) goto L2a
            r3 = 1
            if (r5 == r3) goto L24
            r3 = 2
            if (r5 == r3) goto L1f
            int r5 = r1 / 2
            r4.setPadding(r1, r2, r2, r5)
        L18:
            r5 = r0 & (-49)
            r5 = r5 & (-81)
            r5 = r5 | 16
            goto L35
        L1f:
            r5 = r0 & (-49)
            r5 = r5 | 80
            goto L35
        L24:
            int r5 = r1 / 2
            r4.setPadding(r1, r2, r2, r5)
            goto L18
        L2a:
            int r5 = r1 * 3
            int r5 = r5 / 4
            r4.setPadding(r1, r5, r2, r2)
            r5 = r0 & (-81)
            r5 = r5 | 48
        L35:
            r4.setGravity(r5)
            return
    }
}
