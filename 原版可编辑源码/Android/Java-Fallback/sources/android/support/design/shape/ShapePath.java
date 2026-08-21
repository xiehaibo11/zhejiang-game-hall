package android.support.design.shape;

public class ShapePath {
    public float endX;
    public float endY;
    private final java.util.List<android.support.design.shape.ShapePath.PathOperation> operations;
    public float startX;
    public float startY;

    public static class PathArcOperation extends android.support.design.shape.ShapePath.PathOperation {
        private static final android.graphics.RectF rectF = null;
        public float bottom;
        public float left;
        public float right;
        public float startAngle;
        public float sweepAngle;
        public float top;

        static {
                android.graphics.RectF r0 = new android.graphics.RectF
                r0.<init>()
                android.support.design.shape.ShapePath.PathArcOperation.rectF = r0
                return
        }

        public PathArcOperation(float r1, float r2, float r3, float r4) {
                r0 = this;
                r0.<init>()
                r0.left = r1
                r0.top = r2
                r0.right = r3
                r0.bottom = r4
                return
        }

        @Override
        public void applyToPath(android.graphics.Matrix r6, android.graphics.Path r7) {
                r5 = this;
                android.graphics.Matrix r0 = r5.matrix
                r6.invert(r0)
                r7.transform(r0)
                android.graphics.RectF r0 = android.support.design.shape.ShapePath.PathArcOperation.rectF
                float r1 = r5.left
                float r2 = r5.top
                float r3 = r5.right
                float r4 = r5.bottom
                r0.set(r1, r2, r3, r4)
                android.graphics.RectF r0 = android.support.design.shape.ShapePath.PathArcOperation.rectF
                float r1 = r5.startAngle
                float r2 = r5.sweepAngle
                r3 = 0
                r7.arcTo(r0, r1, r2, r3)
                r7.transform(r6)
                return
        }
    }

    public static class PathLineOperation extends android.support.design.shape.ShapePath.PathOperation {
        private float x;
        private float y;

        public PathLineOperation() {
                r0 = this;
                r0.<init>()
                return
        }

        static float access$002(android.support.design.shape.ShapePath.PathLineOperation r0, float r1) {
                r0.x = r1
                return r1
        }

        static float access$102(android.support.design.shape.ShapePath.PathLineOperation r0, float r1) {
                r0.y = r1
                return r1
        }

        @Override
        public void applyToPath(android.graphics.Matrix r3, android.graphics.Path r4) {
                r2 = this;
                android.graphics.Matrix r0 = r2.matrix
                r3.invert(r0)
                r4.transform(r0)
                float r0 = r2.x
                float r1 = r2.y
                r4.lineTo(r0, r1)
                r4.transform(r3)
                return
        }
    }

    public static abstract class PathOperation {
        protected final android.graphics.Matrix matrix;

        public PathOperation() {
                r1 = this;
                r1.<init>()
                android.graphics.Matrix r0 = new android.graphics.Matrix
                r0.<init>()
                r1.matrix = r0
                return
        }

        public abstract void applyToPath(android.graphics.Matrix r1, android.graphics.Path r2);
    }

    public static class PathQuadOperation extends android.support.design.shape.ShapePath.PathOperation {
        public float controlX;
        public float controlY;
        public float endX;
        public float endY;

        public PathQuadOperation() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void applyToPath(android.graphics.Matrix r5, android.graphics.Path r6) {
                r4 = this;
                android.graphics.Matrix r0 = r4.matrix
                r5.invert(r0)
                r6.transform(r0)
                float r0 = r4.controlX
                float r1 = r4.controlY
                float r2 = r4.endX
                float r3 = r4.endY
                r6.quadTo(r0, r1, r2, r3)
                r6.transform(r5)
                return
        }
    }

    public ShapePath() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.operations = r0
            r0 = 0
            r1.reset(r0, r0)
            return
    }

    public ShapePath(float r2, float r3) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.operations = r0
            r1.reset(r2, r3)
            return
    }

    public void addArc(float r5, float r6, float r7, float r8, float r9, float r10) {
            r4 = this;
            android.support.design.shape.ShapePath$PathArcOperation r0 = new android.support.design.shape.ShapePath$PathArcOperation
            r0.<init>(r5, r6, r7, r8)
            r0.startAngle = r9
            r0.sweepAngle = r10
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r1 = r4.operations
            r1.add(r0)
            float r0 = r5 + r7
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 * r1
            float r7 = r7 - r5
            r5 = 1073741824(0x40000000, float:2.0)
            float r7 = r7 / r5
            float r9 = r9 + r10
            double r9 = (double) r9
            double r2 = java.lang.Math.toRadians(r9)
            double r2 = java.lang.Math.cos(r2)
            float r2 = (float) r2
            float r7 = r7 * r2
            float r0 = r0 + r7
            r4.endX = r0
            float r7 = r6 + r8
            float r7 = r7 * r1
            float r8 = r8 - r6
            float r8 = r8 / r5
            double r5 = java.lang.Math.toRadians(r9)
            double r5 = java.lang.Math.sin(r5)
            float r5 = (float) r5
            float r8 = r8 * r5
            float r7 = r7 + r8
            r4.endY = r7
            return
    }

    public void applyToPath(android.graphics.Matrix r4, android.graphics.Path r5) {
            r3 = this;
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r0 = r3.operations
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L17
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r2 = r3.operations
            java.lang.Object r2 = r2.get(r1)
            android.support.design.shape.ShapePath$PathOperation r2 = (android.support.design.shape.ShapePath.PathOperation) r2
            r2.applyToPath(r4, r5)
            int r1 = r1 + 1
            goto L7
        L17:
            return
    }

    public void lineTo(float r3, float r4) {
            r2 = this;
            android.support.design.shape.ShapePath$PathLineOperation r0 = new android.support.design.shape.ShapePath$PathLineOperation
            r0.<init>()
            android.support.design.shape.ShapePath.PathLineOperation.access$002(r0, r3)
            android.support.design.shape.ShapePath.PathLineOperation.access$102(r0, r4)
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r1 = r2.operations
            r1.add(r0)
            r2.endX = r3
            r2.endY = r4
            return
    }

    public void quadToPoint(float r2, float r3, float r4, float r5) {
            r1 = this;
            android.support.design.shape.ShapePath$PathQuadOperation r0 = new android.support.design.shape.ShapePath$PathQuadOperation
            r0.<init>()
            r0.controlX = r2
            r0.controlY = r3
            r0.endX = r4
            r0.endY = r5
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r2 = r1.operations
            r2.add(r0)
            r1.endX = r4
            r1.endY = r5
            return
    }

    public void reset(float r1, float r2) {
            r0 = this;
            r0.startX = r1
            r0.startY = r2
            r0.endX = r1
            r0.endY = r2
            java.util.List<android.support.design.shape.ShapePath$PathOperation> r1 = r0.operations
            r1.clear()
            return
    }
}
