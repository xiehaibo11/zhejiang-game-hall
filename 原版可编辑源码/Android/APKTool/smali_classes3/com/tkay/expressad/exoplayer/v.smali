.class public final Lcom/tkay/expressad/exoplayer/v;
.super Ljava/lang/Object;


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/v;


# instance fields
.field public final b:F

.field public final c:F

.field public final d:Z

.field private final e:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 31
    new-instance v0, Lcom/tkay/expressad/exoplayer/v;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/v;-><init>(F)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    return-void
.end method

.method public constructor <init>(F)V
    .locals 2

    const/high16 v0, 0x3f800000    # 1.0f

    const/4 v1, 0x0

    .line 50
    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/v;-><init>(FFZ)V

    return-void
.end method

.method public constructor <init>(FF)V
    .locals 1

    const/4 v0, 0x0

    .line 60
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/v;-><init>(FFZ)V

    return-void
.end method

.method public constructor <init>(FFZ)V
    .locals 4

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    cmpl-float v1, p1, v0

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lez v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    .line 72
    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    cmpl-float v0, p2, v0

    if-lez v0, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    .line 73
    :goto_1
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 74
    iput p1, p0, Lcom/tkay/expressad/exoplayer/v;->b:F

    .line 75
    iput p2, p0, Lcom/tkay/expressad/exoplayer/v;->c:F

    .line 76
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/v;->d:Z

    const/high16 p2, 0x447a0000    # 1000.0f

    mul-float/2addr p1, p2

    .line 77
    invoke-static {p1}, Ljava/lang/Math;->round(F)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/v;->e:I

    return-void
.end method


# virtual methods
.method public final a(J)J
    .locals 2

    .line 88
    iget v0, p0, Lcom/tkay/expressad/exoplayer/v;->e:I

    int-to-long v0, v0

    mul-long/2addr p1, v0

    return-wide p1
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 96
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 99
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/v;

    .line 100
    iget v2, p0, Lcom/tkay/expressad/exoplayer/v;->b:F

    iget v3, p1, Lcom/tkay/expressad/exoplayer/v;->b:F

    cmpl-float v2, v2, v3

    if-nez v2, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/v;->c:F

    iget v3, p1, Lcom/tkay/expressad/exoplayer/v;->c:F

    cmpl-float v2, v2, v3

    if-nez v2, :cond_2

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/v;->d:Z

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/v;->d:Z

    if-ne v2, p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 108
    iget v0, p0, Lcom/tkay/expressad/exoplayer/v;->b:F

    invoke-static {v0}, Ljava/lang/Float;->floatToRawIntBits(F)I

    move-result v0

    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 109
    iget v1, p0, Lcom/tkay/expressad/exoplayer/v;->c:F

    invoke-static {v1}, Ljava/lang/Float;->floatToRawIntBits(F)I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 110
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/v;->d:Z

    add-int/2addr v0, v1

    return v0
.end method
