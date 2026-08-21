package android.support.v7.widget;

interface CardViewImpl {
    android.content.res.ColorStateList getBackgroundColor(android.support.v7.widget.CardViewDelegate r1);

    float getElevation(android.support.v7.widget.CardViewDelegate r1);

    float getMaxElevation(android.support.v7.widget.CardViewDelegate r1);

    float getMinHeight(android.support.v7.widget.CardViewDelegate r1);

    float getMinWidth(android.support.v7.widget.CardViewDelegate r1);

    float getRadius(android.support.v7.widget.CardViewDelegate r1);

    void initStatic();

    void initialize(android.support.v7.widget.CardViewDelegate r1, android.content.Context r2, android.content.res.ColorStateList r3, float r4, float r5, float r6);

    void onCompatPaddingChanged(android.support.v7.widget.CardViewDelegate r1);

    void onPreventCornerOverlapChanged(android.support.v7.widget.CardViewDelegate r1);

    void setBackgroundColor(android.support.v7.widget.CardViewDelegate r1, android.content.res.ColorStateList r2);

    void setElevation(android.support.v7.widget.CardViewDelegate r1, float r2);

    void setMaxElevation(android.support.v7.widget.CardViewDelegate r1, float r2);

    void setRadius(android.support.v7.widget.CardViewDelegate r1, float r2);

    void updatePadding(android.support.v7.widget.CardViewDelegate r1);
}
