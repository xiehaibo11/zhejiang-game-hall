package org.cocos2dx.lib;

public class Cocos2dxTextInputWrapper implements android.text.TextWatcher, android.widget.TextView.OnEditorActionListener {
    private static final java.lang.String TAG = "Cocos2dxTextInputWrapper";
    private final org.cocos2dx.lib.Cocos2dxGLSurfaceView mCocos2dxGLSurfaceView;
    private java.lang.String mOriginText;
    private java.lang.String mText;

    static {
            return
    }

    public Cocos2dxTextInputWrapper(org.cocos2dx.lib.Cocos2dxGLSurfaceView r1) {
            r0 = this;
            r0.<init>()
            r0.mCocos2dxGLSurfaceView = r1
            return
    }

    private boolean isFullScreenEdit() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r2.mCocos2dxGLSurfaceView
            org.cocos2dx.lib.Cocos2dxEditBox r0 = r0.getCocos2dxEditText()
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = "input_method"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.inputmethod.InputMethodManager r0 = (android.view.inputmethod.InputMethodManager) r0
            boolean r0 = r0.isFullscreenMode()
            return r0
    }

    @Override
    public void afterTextChanged(android.text.Editable r5) {
            r4 = this;
            boolean r0 = r4.isFullScreenEdit()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            r1 = 0
        L9:
            java.lang.String r2 = r4.mText
            int r2 = r2.length()
            if (r0 >= r2) goto L29
            int r2 = r5.length()
            if (r1 >= r2) goto L29
            java.lang.String r2 = r4.mText
            char r2 = r2.charAt(r0)
            char r3 = r5.charAt(r1)
            if (r2 == r3) goto L24
            goto L29
        L24:
            int r0 = r0 + 1
            int r1 = r1 + 1
            goto L9
        L29:
            java.lang.String r2 = r4.mText
            int r2 = r2.length()
            if (r0 >= r2) goto L39
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r4.mCocos2dxGLSurfaceView
            r2.deleteBackward()
            int r0 = r0 + 1
            goto L29
        L39:
            int r0 = r5.length()
            int r0 = r0 - r1
            if (r0 <= 0) goto L51
            int r0 = r5.length()
            java.lang.CharSequence r0 = r5.subSequence(r1, r0)
            java.lang.String r0 = r0.toString()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r1 = r4.mCocos2dxGLSurfaceView
            r1.insertText(r0)
        L51:
            java.lang.String r5 = r5.toString()
            r4.mText = r5
            return
    }

    @Override
    public void beforeTextChanged(java.lang.CharSequence r1, int r2, int r3, int r4) {
            r0 = this;
            java.lang.String r1 = r1.toString()
            r0.mText = r1
            return
    }

    @Override
    public boolean onEditorAction(android.widget.TextView r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r1.mCocos2dxGLSurfaceView
            org.cocos2dx.lib.Cocos2dxEditBox r4 = r4.getCocos2dxEditText()
            if (r4 != r2) goto L56
            boolean r4 = r1.isFullScreenEdit()
            if (r4 == 0) goto L56
            java.lang.String r4 = r1.mOriginText
            if (r4 == 0) goto L20
            int r4 = r4.length()
        L16:
            if (r4 <= 0) goto L20
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r1.mCocos2dxGLSurfaceView
            r0.deleteBackward()
            int r4 = r4 + (-1)
            goto L16
        L20:
            java.lang.CharSequence r2 = r2.getText()
            java.lang.String r2 = r2.toString()
            if (r2 == 0) goto L51
            java.lang.String r4 = ""
            int r4 = r2.compareTo(r4)
            if (r4 != 0) goto L34
            java.lang.String r2 = "\n"
        L34:
            int r4 = r2.length()
            int r4 = r4 + (-1)
            char r4 = r2.charAt(r4)
            r0 = 10
            if (r0 == r4) goto L51
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            r4.append(r0)
            java.lang.String r2 = r4.toString()
        L51:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r1.mCocos2dxGLSurfaceView
            r4.insertText(r2)
        L56:
            r2 = 6
            if (r3 != r2) goto L5e
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r1.mCocos2dxGLSurfaceView
            r2.requestFocus()
        L5e:
            r2 = 0
            return r2
    }

    @Override
    public void onTextChanged(java.lang.CharSequence r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }

    public void setOriginText(java.lang.String r1) {
            r0 = this;
            r0.mOriginText = r1
            return
    }
}
