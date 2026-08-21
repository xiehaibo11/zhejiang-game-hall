package android.support.design.theme;

import android.content.Context;
import android.support.design.button.MaterialButton;
import android.support.v7.app.AppCompatViewInflater;
import android.support.v7.widget.AppCompatButton;
import android.util.AttributeSet;

public class MaterialComponentsViewInflater extends AppCompatViewInflater {
    @Override
    protected AppCompatButton createButton(Context context, AttributeSet attributeSet) {
        return new MaterialButton(context, attributeSet);
    }
}
