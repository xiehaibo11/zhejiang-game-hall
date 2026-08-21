package android.support.design.shape;

public class ShapePathModel {
    private static final android.support.design.shape.CornerTreatment DEFAULT_CORNER_TREATMENT = null;
    private static final android.support.design.shape.EdgeTreatment DEFAULT_EDGE_TREATMENT = null;
    private android.support.design.shape.EdgeTreatment bottomEdge;
    private android.support.design.shape.CornerTreatment bottomLeftCorner;
    private android.support.design.shape.CornerTreatment bottomRightCorner;
    private android.support.design.shape.EdgeTreatment leftEdge;
    private android.support.design.shape.EdgeTreatment rightEdge;
    private android.support.design.shape.EdgeTreatment topEdge;
    private android.support.design.shape.CornerTreatment topLeftCorner;
    private android.support.design.shape.CornerTreatment topRightCorner;

    static {
            android.support.design.shape.CornerTreatment r0 = new android.support.design.shape.CornerTreatment
            r0.<init>()
            android.support.design.shape.ShapePathModel.DEFAULT_CORNER_TREATMENT = r0
            android.support.design.shape.EdgeTreatment r0 = new android.support.design.shape.EdgeTreatment
            r0.<init>()
            android.support.design.shape.ShapePathModel.DEFAULT_EDGE_TREATMENT = r0
            return
    }

    public ShapePathModel() {
            r1 = this;
            r1.<init>()
            android.support.design.shape.CornerTreatment r0 = android.support.design.shape.ShapePathModel.DEFAULT_CORNER_TREATMENT
            r1.topLeftCorner = r0
            r1.topRightCorner = r0
            r1.bottomRightCorner = r0
            r1.bottomLeftCorner = r0
            android.support.design.shape.EdgeTreatment r0 = android.support.design.shape.ShapePathModel.DEFAULT_EDGE_TREATMENT
            r1.topEdge = r0
            r1.rightEdge = r0
            r1.bottomEdge = r0
            r1.leftEdge = r0
            return
    }

    public android.support.design.shape.EdgeTreatment getBottomEdge() {
            r1 = this;
            android.support.design.shape.EdgeTreatment r0 = r1.bottomEdge
            return r0
    }

    public android.support.design.shape.CornerTreatment getBottomLeftCorner() {
            r1 = this;
            android.support.design.shape.CornerTreatment r0 = r1.bottomLeftCorner
            return r0
    }

    public android.support.design.shape.CornerTreatment getBottomRightCorner() {
            r1 = this;
            android.support.design.shape.CornerTreatment r0 = r1.bottomRightCorner
            return r0
    }

    public android.support.design.shape.EdgeTreatment getLeftEdge() {
            r1 = this;
            android.support.design.shape.EdgeTreatment r0 = r1.leftEdge
            return r0
    }

    public android.support.design.shape.EdgeTreatment getRightEdge() {
            r1 = this;
            android.support.design.shape.EdgeTreatment r0 = r1.rightEdge
            return r0
    }

    public android.support.design.shape.EdgeTreatment getTopEdge() {
            r1 = this;
            android.support.design.shape.EdgeTreatment r0 = r1.topEdge
            return r0
    }

    public android.support.design.shape.CornerTreatment getTopLeftCorner() {
            r1 = this;
            android.support.design.shape.CornerTreatment r0 = r1.topLeftCorner
            return r0
    }

    public android.support.design.shape.CornerTreatment getTopRightCorner() {
            r1 = this;
            android.support.design.shape.CornerTreatment r0 = r1.topRightCorner
            return r0
    }

    public void setAllCorners(android.support.design.shape.CornerTreatment r1) {
            r0 = this;
            r0.topLeftCorner = r1
            r0.topRightCorner = r1
            r0.bottomRightCorner = r1
            r0.bottomLeftCorner = r1
            return
    }

    public void setAllEdges(android.support.design.shape.EdgeTreatment r1) {
            r0 = this;
            r0.leftEdge = r1
            r0.topEdge = r1
            r0.rightEdge = r1
            r0.bottomEdge = r1
            return
    }

    public void setBottomEdge(android.support.design.shape.EdgeTreatment r1) {
            r0 = this;
            r0.bottomEdge = r1
            return
    }

    public void setBottomLeftCorner(android.support.design.shape.CornerTreatment r1) {
            r0 = this;
            r0.bottomLeftCorner = r1
            return
    }

    public void setBottomRightCorner(android.support.design.shape.CornerTreatment r1) {
            r0 = this;
            r0.bottomRightCorner = r1
            return
    }

    public void setCornerTreatments(android.support.design.shape.CornerTreatment r1, android.support.design.shape.CornerTreatment r2, android.support.design.shape.CornerTreatment r3, android.support.design.shape.CornerTreatment r4) {
            r0 = this;
            r0.topLeftCorner = r1
            r0.topRightCorner = r2
            r0.bottomRightCorner = r3
            r0.bottomLeftCorner = r4
            return
    }

    public void setEdgeTreatments(android.support.design.shape.EdgeTreatment r1, android.support.design.shape.EdgeTreatment r2, android.support.design.shape.EdgeTreatment r3, android.support.design.shape.EdgeTreatment r4) {
            r0 = this;
            r0.leftEdge = r1
            r0.topEdge = r2
            r0.rightEdge = r3
            r0.bottomEdge = r4
            return
    }

    public void setLeftEdge(android.support.design.shape.EdgeTreatment r1) {
            r0 = this;
            r0.leftEdge = r1
            return
    }

    public void setRightEdge(android.support.design.shape.EdgeTreatment r1) {
            r0 = this;
            r0.rightEdge = r1
            return
    }

    public void setTopEdge(android.support.design.shape.EdgeTreatment r1) {
            r0 = this;
            r0.topEdge = r1
            return
    }

    public void setTopLeftCorner(android.support.design.shape.CornerTreatment r1) {
            r0 = this;
            r0.topLeftCorner = r1
            return
    }

    public void setTopRightCorner(android.support.design.shape.CornerTreatment r1) {
            r0 = this;
            r0.topRightCorner = r1
            return
    }
}
