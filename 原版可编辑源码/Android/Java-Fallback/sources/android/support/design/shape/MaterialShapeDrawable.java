package android.support.design.shape;

public class MaterialShapeDrawable extends android.graphics.drawable.Drawable implements android.support.v4.graphics.drawable.TintAwareDrawable {
    private int alpha;
    private final android.support.design.shape.ShapePath[] cornerPaths;
    private final android.graphics.Matrix[] cornerTransforms;
    private final android.graphics.Matrix[] edgeTransforms;
    private float interpolation;
    private final android.graphics.Matrix matrix;
    private final android.graphics.Paint paint;
    private android.graphics.Paint.Style paintStyle;
    private final android.graphics.Path path;
    private final android.graphics.PointF pointF;
    private float scale;
    private final float[] scratch;
    private final float[] scratch2;
    private final android.graphics.Region scratchRegion;
    private int shadowColor;
    private int shadowElevation;
    private boolean shadowEnabled;
    private int shadowRadius;
    private final android.support.design.shape.ShapePath shapePath;
    private android.support.design.shape.ShapePathModel shapedViewModel;
    private float strokeWidth;
    private android.graphics.PorterDuffColorFilter tintFilter;
    private android.content.res.ColorStateList tintList;
    private android.graphics.PorterDuff.Mode tintMode;
    private final android.graphics.Region transparentRegion;
    private boolean useTintColorForShadow;

    public MaterialShapeDrawable() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public MaterialShapeDrawable(android.support.design.shape.ShapePathModel r6) {
            r5 = this;
            r5.<init>()
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r5.paint = r0
            r0 = 4
            android.graphics.Matrix[] r1 = new android.graphics.Matrix[r0]
            r5.cornerTransforms = r1
            android.graphics.Matrix[] r1 = new android.graphics.Matrix[r0]
            r5.edgeTransforms = r1
            android.support.design.shape.ShapePath[] r1 = new android.support.design.shape.ShapePath[r0]
            r5.cornerPaths = r1
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r5.matrix = r1
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r5.path = r1
            android.graphics.PointF r1 = new android.graphics.PointF
            r1.<init>()
            r5.pointF = r1
            android.support.design.shape.ShapePath r1 = new android.support.design.shape.ShapePath
            r1.<init>()
            r5.shapePath = r1
            android.graphics.Region r1 = new android.graphics.Region
            r1.<init>()
            r5.transparentRegion = r1
            android.graphics.Region r1 = new android.graphics.Region
            r1.<init>()
            r5.scratchRegion = r1
            r1 = 2
            float[] r2 = new float[r1]
            r5.scratch = r2
            float[] r1 = new float[r1]
            r5.scratch2 = r1
            r1 = 0
            r5.shapedViewModel = r1
            r2 = 0
            r5.shadowEnabled = r2
            r5.useTintColorForShadow = r2
            r3 = 1065353216(0x3f800000, float:1.0)
            r5.interpolation = r3
            r4 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r5.shadowColor = r4
            r4 = 5
            r5.shadowElevation = r4
            r4 = 10
            r5.shadowRadius = r4
            r4 = 255(0xff, float:3.57E-43)
            r5.alpha = r4
            r5.scale = r3
            r3 = 0
            r5.strokeWidth = r3
            android.graphics.Paint$Style r3 = android.graphics.Paint.Style.FILL_AND_STROKE
            r5.paintStyle = r3
            android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.SRC_IN
            r5.tintMode = r3
            r5.tintList = r1
            r5.shapedViewModel = r6
        L76:
            if (r2 >= r0) goto L96
            android.graphics.Matrix[] r6 = r5.cornerTransforms
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r6[r2] = r1
            android.graphics.Matrix[] r6 = r5.edgeTransforms
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r6[r2] = r1
            android.support.design.shape.ShapePath[] r6 = r5.cornerPaths
            android.support.design.shape.ShapePath r1 = new android.support.design.shape.ShapePath
            r1.<init>()
            r6[r2] = r1
            int r2 = r2 + 1
            goto L76
        L96:
            return
    }

    private float angleOfCorner(int r6, int r7, int r8) {
            r5 = this;
            int r0 = r6 + (-1)
            int r0 = r0 + 4
            int r0 = r0 % 4
            android.graphics.PointF r1 = r5.pointF
            r5.getCoordinatesOfCorner(r0, r7, r8, r1)
            android.graphics.PointF r0 = r5.pointF
            float r0 = r0.x
            android.graphics.PointF r1 = r5.pointF
            float r1 = r1.y
            int r2 = r6 + 1
            int r2 = r2 % 4
            android.graphics.PointF r3 = r5.pointF
            r5.getCoordinatesOfCorner(r2, r7, r8, r3)
            android.graphics.PointF r2 = r5.pointF
            float r2 = r2.x
            android.graphics.PointF r3 = r5.pointF
            float r3 = r3.y
            android.graphics.PointF r4 = r5.pointF
            r5.getCoordinatesOfCorner(r6, r7, r8, r4)
            android.graphics.PointF r6 = r5.pointF
            float r6 = r6.x
            android.graphics.PointF r7 = r5.pointF
            float r7 = r7.y
            float r0 = r0 - r6
            float r1 = r1 - r7
            float r2 = r2 - r6
            float r3 = r3 - r7
            double r6 = (double) r1
            double r0 = (double) r0
            double r6 = java.lang.Math.atan2(r6, r0)
            float r6 = (float) r6
            double r7 = (double) r3
            double r0 = (double) r2
            double r7 = java.lang.Math.atan2(r7, r0)
            float r7 = (float) r7
            float r6 = r6 - r7
            r7 = 0
            int r7 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r7 >= 0) goto L51
            double r6 = (double) r6
            r0 = 4618760256179416344(0x401921fb54442d18, double:6.283185307179586)
            double r6 = r6 + r0
            float r6 = (float) r6
        L51:
            return r6
    }

    private float angleOfEdge(int r4, int r5, int r6) {
            r3 = this;
            int r0 = r4 + 1
            int r0 = r0 % 4
            android.graphics.PointF r1 = r3.pointF
            r3.getCoordinatesOfCorner(r4, r5, r6, r1)
            android.graphics.PointF r4 = r3.pointF
            float r4 = r4.x
            android.graphics.PointF r1 = r3.pointF
            float r1 = r1.y
            android.graphics.PointF r2 = r3.pointF
            r3.getCoordinatesOfCorner(r0, r5, r6, r2)
            android.graphics.PointF r5 = r3.pointF
            float r5 = r5.x
            android.graphics.PointF r6 = r3.pointF
            float r6 = r6.y
            float r5 = r5 - r4
            float r6 = r6 - r1
            double r0 = (double) r6
            double r4 = (double) r5
            double r4 = java.lang.Math.atan2(r0, r4)
            float r4 = (float) r4
            return r4
    }

    private void appendCornerPath(int r5, android.graphics.Path r6) {
            r4 = this;
            float[] r0 = r4.scratch
            android.support.design.shape.ShapePath[] r1 = r4.cornerPaths
            r1 = r1[r5]
            float r1 = r1.startX
            r2 = 0
            r0[r2] = r1
            float[] r0 = r4.scratch
            android.support.design.shape.ShapePath[] r1 = r4.cornerPaths
            r1 = r1[r5]
            float r1 = r1.startY
            r3 = 1
            r0[r3] = r1
            android.graphics.Matrix[] r0 = r4.cornerTransforms
            r0 = r0[r5]
            float[] r1 = r4.scratch
            r0.mapPoints(r1)
            if (r5 != 0) goto L2b
            float[] r0 = r4.scratch
            r1 = r0[r2]
            r0 = r0[r3]
            r6.moveTo(r1, r0)
            goto L34
        L2b:
            float[] r0 = r4.scratch
            r1 = r0[r2]
            r0 = r0[r3]
            r6.lineTo(r1, r0)
        L34:
            android.support.design.shape.ShapePath[] r0 = r4.cornerPaths
            r0 = r0[r5]
            android.graphics.Matrix[] r1 = r4.cornerTransforms
            r5 = r1[r5]
            r0.applyToPath(r5, r6)
            return
    }

    private void appendEdgePath(int r8, android.graphics.Path r9) {
            r7 = this;
            int r0 = r8 + 1
            int r0 = r0 % 4
            float[] r1 = r7.scratch
            android.support.design.shape.ShapePath[] r2 = r7.cornerPaths
            r2 = r2[r8]
            float r2 = r2.endX
            r3 = 0
            r1[r3] = r2
            float[] r1 = r7.scratch
            android.support.design.shape.ShapePath[] r2 = r7.cornerPaths
            r2 = r2[r8]
            float r2 = r2.endY
            r4 = 1
            r1[r4] = r2
            android.graphics.Matrix[] r1 = r7.cornerTransforms
            r1 = r1[r8]
            float[] r2 = r7.scratch
            r1.mapPoints(r2)
            float[] r1 = r7.scratch2
            android.support.design.shape.ShapePath[] r2 = r7.cornerPaths
            r2 = r2[r0]
            float r2 = r2.startX
            r1[r3] = r2
            float[] r1 = r7.scratch2
            android.support.design.shape.ShapePath[] r2 = r7.cornerPaths
            r2 = r2[r0]
            float r2 = r2.startY
            r1[r4] = r2
            android.graphics.Matrix[] r1 = r7.cornerTransforms
            r0 = r1[r0]
            float[] r1 = r7.scratch2
            r0.mapPoints(r1)
            float[] r0 = r7.scratch
            r1 = r0[r3]
            float[] r2 = r7.scratch2
            r3 = r2[r3]
            float r1 = r1 - r3
            double r5 = (double) r1
            r0 = r0[r4]
            r1 = r2[r4]
            float r0 = r0 - r1
            double r0 = (double) r0
            double r0 = java.lang.Math.hypot(r5, r0)
            float r0 = (float) r0
            android.support.design.shape.ShapePath r1 = r7.shapePath
            r2 = 0
            r1.reset(r2, r2)
            android.support.design.shape.EdgeTreatment r1 = r7.getEdgeTreatmentForIndex(r8)
            float r2 = r7.interpolation
            android.support.design.shape.ShapePath r3 = r7.shapePath
            r1.getEdgePath(r0, r2, r3)
            android.support.design.shape.ShapePath r0 = r7.shapePath
            android.graphics.Matrix[] r1 = r7.edgeTransforms
            r8 = r1[r8]
            r0.applyToPath(r8, r9)
            return
    }

    private void getCoordinatesOfCorner(int r3, int r4, int r5, android.graphics.PointF r6) {
            r2 = this;
            r0 = 1
            r1 = 0
            if (r3 == r0) goto L19
            r0 = 2
            if (r3 == r0) goto L13
            r4 = 3
            if (r3 == r4) goto Le
            r6.set(r1, r1)
            goto L1d
        Le:
            float r3 = (float) r5
            r6.set(r1, r3)
            goto L1d
        L13:
            float r3 = (float) r4
            float r4 = (float) r5
            r6.set(r3, r4)
            goto L1d
        L19:
            float r3 = (float) r4
            r6.set(r3, r1)
        L1d:
            return
    }

    private android.support.design.shape.CornerTreatment getCornerTreatmentForIndex(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L1e
            r0 = 2
            if (r2 == r0) goto L17
            r0 = 3
            if (r2 == r0) goto L10
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.CornerTreatment r2 = r2.getTopLeftCorner()
            return r2
        L10:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.CornerTreatment r2 = r2.getBottomLeftCorner()
            return r2
        L17:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.CornerTreatment r2 = r2.getBottomRightCorner()
            return r2
        L1e:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.CornerTreatment r2 = r2.getTopRightCorner()
            return r2
    }

    private android.support.design.shape.EdgeTreatment getEdgeTreatmentForIndex(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L1e
            r0 = 2
            if (r2 == r0) goto L17
            r0 = 3
            if (r2 == r0) goto L10
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.EdgeTreatment r2 = r2.getTopEdge()
            return r2
        L10:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.EdgeTreatment r2 = r2.getLeftEdge()
            return r2
        L17:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.EdgeTreatment r2 = r2.getBottomEdge()
            return r2
        L1e:
            android.support.design.shape.ShapePathModel r2 = r1.shapedViewModel
            android.support.design.shape.EdgeTreatment r2 = r2.getRightEdge()
            return r2
    }

    private void getPath(int r3, int r4, android.graphics.Path r5) {
            r2 = this;
            r2.getPathForSize(r3, r4, r5)
            float r0 = r2.scale
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto Lc
            return
        Lc:
            android.graphics.Matrix r0 = r2.matrix
            r0.reset()
            android.graphics.Matrix r0 = r2.matrix
            float r1 = r2.scale
            int r3 = r3 / 2
            float r3 = (float) r3
            int r4 = r4 / 2
            float r4 = (float) r4
            r0.setScale(r1, r1, r3, r4)
            android.graphics.Matrix r3 = r2.matrix
            r5.transform(r3)
            return
    }

    private static int modulateAlpha(int r1, int r2) {
            int r0 = r2 >>> 7
            int r2 = r2 + r0
            int r1 = r1 * r2
            int r1 = r1 >>> 8
            return r1
    }

    private void setCornerPathAndTransform(int r5, int r6, int r7) {
            r4 = this;
            android.graphics.PointF r0 = r4.pointF
            r4.getCoordinatesOfCorner(r5, r6, r7, r0)
            float r0 = r4.angleOfCorner(r5, r6, r7)
            android.support.design.shape.CornerTreatment r1 = r4.getCornerTreatmentForIndex(r5)
            float r2 = r4.interpolation
            android.support.design.shape.ShapePath[] r3 = r4.cornerPaths
            r3 = r3[r5]
            r1.getCornerPath(r0, r2, r3)
            int r0 = r5 + (-1)
            int r0 = r0 + 4
            int r0 = r0 % 4
            float r6 = r4.angleOfEdge(r0, r6, r7)
            r7 = 1070141403(0x3fc90fdb, float:1.5707964)
            float r6 = r6 + r7
            android.graphics.Matrix[] r7 = r4.cornerTransforms
            r7 = r7[r5]
            r7.reset()
            android.graphics.Matrix[] r7 = r4.cornerTransforms
            r7 = r7[r5]
            android.graphics.PointF r0 = r4.pointF
            float r0 = r0.x
            android.graphics.PointF r1 = r4.pointF
            float r1 = r1.y
            r7.setTranslate(r0, r1)
            android.graphics.Matrix[] r7 = r4.cornerTransforms
            r5 = r7[r5]
            double r6 = (double) r6
            double r6 = java.lang.Math.toDegrees(r6)
            float r6 = (float) r6
            r5.preRotate(r6)
            return
    }

    private void setEdgeTransform(int r5, int r6, int r7) {
            r4 = this;
            float[] r0 = r4.scratch
            android.support.design.shape.ShapePath[] r1 = r4.cornerPaths
            r1 = r1[r5]
            float r1 = r1.endX
            r2 = 0
            r0[r2] = r1
            float[] r0 = r4.scratch
            android.support.design.shape.ShapePath[] r1 = r4.cornerPaths
            r1 = r1[r5]
            float r1 = r1.endY
            r3 = 1
            r0[r3] = r1
            android.graphics.Matrix[] r0 = r4.cornerTransforms
            r0 = r0[r5]
            float[] r1 = r4.scratch
            r0.mapPoints(r1)
            float r6 = r4.angleOfEdge(r5, r6, r7)
            android.graphics.Matrix[] r7 = r4.edgeTransforms
            r7 = r7[r5]
            r7.reset()
            android.graphics.Matrix[] r7 = r4.edgeTransforms
            r7 = r7[r5]
            float[] r0 = r4.scratch
            r1 = r0[r2]
            r0 = r0[r3]
            r7.setTranslate(r1, r0)
            android.graphics.Matrix[] r7 = r4.edgeTransforms
            r5 = r7[r5]
            double r6 = (double) r6
            double r6 = java.lang.Math.toDegrees(r6)
            float r6 = (float) r6
            r5.preRotate(r6)
            return
    }

    private void updateTintFilter() {
            r3 = this;
            android.content.res.ColorStateList r0 = r3.tintList
            if (r0 == 0) goto L22
            android.graphics.PorterDuff$Mode r1 = r3.tintMode
            if (r1 != 0) goto L9
            goto L22
        L9:
            int[] r1 = r3.getState()
            r2 = 0
            int r0 = r0.getColorForState(r1, r2)
            android.graphics.PorterDuffColorFilter r1 = new android.graphics.PorterDuffColorFilter
            android.graphics.PorterDuff$Mode r2 = r3.tintMode
            r1.<init>(r0, r2)
            r3.tintFilter = r1
            boolean r1 = r3.useTintColorForShadow
            if (r1 == 0) goto L21
            r3.shadowColor = r0
        L21:
            return
        L22:
            r0 = 0
            r3.tintFilter = r0
            return
    }

    @Override
    public void draw(android.graphics.Canvas r10) {
            r9 = this;
            android.graphics.Paint r0 = r9.paint
            android.graphics.PorterDuffColorFilter r1 = r9.tintFilter
            r0.setColorFilter(r1)
            android.graphics.Paint r0 = r9.paint
            int r0 = r0.getAlpha()
            android.graphics.Paint r1 = r9.paint
            int r2 = r9.alpha
            int r2 = modulateAlpha(r0, r2)
            r1.setAlpha(r2)
            android.graphics.Paint r1 = r9.paint
            float r2 = r9.strokeWidth
            r1.setStrokeWidth(r2)
            android.graphics.Paint r1 = r9.paint
            android.graphics.Paint$Style r2 = r9.paintStyle
            r1.setStyle(r2)
            int r1 = r9.shadowElevation
            if (r1 <= 0) goto L3a
            boolean r2 = r9.shadowEnabled
            if (r2 == 0) goto L3a
            android.graphics.Paint r2 = r9.paint
            int r3 = r9.shadowRadius
            float r3 = (float) r3
            r4 = 0
            float r1 = (float) r1
            int r5 = r9.shadowColor
            r2.setShadowLayer(r3, r4, r1, r5)
        L3a:
            android.support.design.shape.ShapePathModel r1 = r9.shapedViewModel
            if (r1 == 0) goto L53
            int r1 = r10.getWidth()
            int r2 = r10.getHeight()
            android.graphics.Path r3 = r9.path
            r9.getPath(r1, r2, r3)
            android.graphics.Path r1 = r9.path
            android.graphics.Paint r2 = r9.paint
            r10.drawPath(r1, r2)
            goto L65
        L53:
            r4 = 0
            r5 = 0
            int r1 = r10.getWidth()
            float r6 = (float) r1
            int r1 = r10.getHeight()
            float r7 = (float) r1
            android.graphics.Paint r8 = r9.paint
            r3 = r10
            r3.drawRect(r4, r5, r6, r7, r8)
        L65:
            android.graphics.Paint r10 = r9.paint
            r10.setAlpha(r0)
            return
    }

    public float getInterpolation() {
            r1 = this;
            float r0 = r1.interpolation
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = -3
            return r0
    }

    public android.graphics.Paint.Style getPaintStyle() {
            r1 = this;
            android.graphics.Paint$Style r0 = r1.paintStyle
            return r0
    }

    public void getPathForSize(int r4, int r5, android.graphics.Path r6) {
            r3 = this;
            r6.rewind()
            android.support.design.shape.ShapePathModel r0 = r3.shapedViewModel
            if (r0 != 0) goto L8
            return
        L8:
            r0 = 0
            r1 = r0
        La:
            r2 = 4
            if (r1 >= r2) goto L16
            r3.setCornerPathAndTransform(r1, r4, r5)
            r3.setEdgeTransform(r1, r4, r5)
            int r1 = r1 + 1
            goto La
        L16:
            if (r0 >= r2) goto L21
            r3.appendCornerPath(r0, r6)
            r3.appendEdgePath(r0, r6)
            int r0 = r0 + 1
            goto L16
        L21:
            r6.close()
            return
    }

    public float getScale() {
            r1 = this;
            float r0 = r1.scale
            return r0
    }

    public int getShadowElevation() {
            r1 = this;
            int r0 = r1.shadowElevation
            return r0
    }

    public int getShadowRadius() {
            r1 = this;
            int r0 = r1.shadowRadius
            return r0
    }

    public android.support.design.shape.ShapePathModel getShapedViewModel() {
            r1 = this;
            android.support.design.shape.ShapePathModel r0 = r1.shapedViewModel
            return r0
    }

    public float getStrokeWidth() {
            r1 = this;
            float r0 = r1.strokeWidth
            return r0
    }

    public android.content.res.ColorStateList getTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tintList
            return r0
    }

    @Override
    public android.graphics.Region getTransparentRegion() {
            r3 = this;
            android.graphics.Rect r0 = r3.getBounds()
            android.graphics.Region r1 = r3.transparentRegion
            r1.set(r0)
            int r1 = r0.width()
            int r0 = r0.height()
            android.graphics.Path r2 = r3.path
            r3.getPath(r1, r0, r2)
            android.graphics.Region r0 = r3.scratchRegion
            android.graphics.Path r1 = r3.path
            android.graphics.Region r2 = r3.transparentRegion
            r0.setPath(r1, r2)
            android.graphics.Region r0 = r3.transparentRegion
            android.graphics.Region r1 = r3.scratchRegion
            android.graphics.Region$Op r2 = android.graphics.Region.Op.DIFFERENCE
            r0.op(r1, r2)
            android.graphics.Region r0 = r3.transparentRegion
            return r0
    }

    public boolean isPointInTransparentRegion(int r2, int r3) {
            r1 = this;
            android.graphics.Region r0 = r1.getTransparentRegion()
            boolean r2 = r0.contains(r2, r3)
            return r2
    }

    public boolean isShadowEnabled() {
            r1 = this;
            boolean r0 = r1.shadowEnabled
            return r0
    }

    @Override
    public void setAlpha(int r1) {
            r0 = this;
            r0.alpha = r1
            r0.invalidateSelf()
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.paint
            r0.setColorFilter(r2)
            r1.invalidateSelf()
            return
    }

    public void setInterpolation(float r1) {
            r0 = this;
            r0.interpolation = r1
            r0.invalidateSelf()
            return
    }

    public void setPaintStyle(android.graphics.Paint.Style r1) {
            r0 = this;
            r0.paintStyle = r1
            r0.invalidateSelf()
            return
    }

    public void setScale(float r1) {
            r0 = this;
            r0.scale = r1
            r0.invalidateSelf()
            return
    }

    public void setShadowColor(int r1) {
            r0 = this;
            r0.shadowColor = r1
            r1 = 0
            r0.useTintColorForShadow = r1
            r0.invalidateSelf()
            return
    }

    public void setShadowElevation(int r1) {
            r0 = this;
            r0.shadowElevation = r1
            r0.invalidateSelf()
            return
    }

    public void setShadowEnabled(boolean r1) {
            r0 = this;
            r0.shadowEnabled = r1
            r0.invalidateSelf()
            return
    }

    public void setShadowRadius(int r1) {
            r0 = this;
            r0.shadowRadius = r1
            r0.invalidateSelf()
            return
    }

    public void setShapedViewModel(android.support.design.shape.ShapePathModel r1) {
            r0 = this;
            r0.shapedViewModel = r1
            r0.invalidateSelf()
            return
    }

    public void setStrokeWidth(float r1) {
            r0 = this;
            r0.strokeWidth = r1
            r0.invalidateSelf()
            return
    }

    @Override
    public void setTint(int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = android.content.res.ColorStateList.valueOf(r1)
            r0.setTintList(r1)
            return
    }

    @Override
    public void setTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.tintList = r1
            r0.updateTintFilter()
            r0.invalidateSelf()
            return
    }

    @Override
    public void setTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.tintMode = r1
            r0.updateTintFilter()
            r0.invalidateSelf()
            return
    }

    public void setUseTintColorForShadow(boolean r1) {
            r0 = this;
            r0.useTintColorForShadow = r1
            r0.invalidateSelf()
            return
    }
}
