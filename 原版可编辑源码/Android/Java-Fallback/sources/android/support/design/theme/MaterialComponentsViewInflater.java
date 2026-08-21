package android.support.design.theme;

public class MaterialComponentsViewInflater extends android.support.v7.app.AppCompatViewInflater {
    public MaterialComponentsViewInflater() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected android.support.v7.widget.AppCompatButton createButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.design.button.MaterialButton r0 = new android.support.design.button.MaterialButton
            r0.<init>(r2, r3)
            return r0
    }
}
