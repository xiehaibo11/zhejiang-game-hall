.class public Lcom/czhj/sdk/common/utils/TouchLocation;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field private final a:I

.field private final b:I


# direct methods
.method public constructor <init>(II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/czhj/sdk/common/utils/TouchLocation;->a:I

    iput p2, p0, Lcom/czhj/sdk/common/utils/TouchLocation;->b:I

    return-void
.end method

.method public static getTouchLocation(Landroid/view/View;Landroid/view/MotionEvent;)Lcom/czhj/sdk/common/utils/TouchLocation;
    .locals 3

    if-eqz p0, :cond_0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    float-to-int v0, v0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    const/4 v1, 0x2

    new-array v1, v1, [I

    invoke-virtual {p0, v1}, Landroid/view/View;->getLocationOnScreen([I)V

    const/4 p0, 0x0

    aget p0, v1, p0

    const/4 v2, 0x1

    aget v1, v1, v2

    new-instance v2, Lcom/czhj/sdk/common/utils/TouchLocation;

    sub-int/2addr v0, p0

    sub-int/2addr p1, v1

    invoke-direct {v2, v0, p1}, Lcom/czhj/sdk/common/utils/TouchLocation;-><init>(II)V

    return-object v2

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public getX()I
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/utils/TouchLocation;->a:I

    return v0
.end method

.method public getY()I
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/utils/TouchLocation;->b:I

    return v0
.end method
