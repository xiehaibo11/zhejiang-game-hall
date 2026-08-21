package android.support.design.animation;

public class ImageMatrixProperty extends android.util.Property<android.widget.ImageView, android.graphics.Matrix> {
    private final android.graphics.Matrix matrix;

    public ImageMatrixProperty() {
            r2 = this;
            java.lang.Class<android.graphics.Matrix> r0 = android.graphics.Matrix.class
            java.lang.String r1 = "imageMatrixProperty"
            r2.<init>(r0, r1)
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r2.matrix = r0
            return
    }

    public android.graphics.Matrix get(android.widget.ImageView r2) {
            r1 = this;
            android.graphics.Matrix r0 = r1.matrix
            android.graphics.Matrix r2 = r2.getImageMatrix()
            r0.set(r2)
            android.graphics.Matrix r2 = r1.matrix
            return r2
    }

    @Override
    public android.graphics.Matrix get(android.widget.ImageView r1) {
            r0 = this;
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.graphics.Matrix r1 = r0.get(r1)
            return r1
    }

    public void set(android.widget.ImageView r1, android.graphics.Matrix r2) {
            r0 = this;
            r1.setImageMatrix(r2)
            return
    }

    @Override
    public void set(android.widget.ImageView r1, android.graphics.Matrix r2) {
            r0 = this;
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.graphics.Matrix r2 = (android.graphics.Matrix) r2
            r0.set(r1, r2)
            return
    }
}
