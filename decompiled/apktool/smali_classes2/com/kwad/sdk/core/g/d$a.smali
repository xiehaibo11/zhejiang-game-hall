.class final Lcom/kwad/sdk/core/g/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/hardware/SensorEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/g/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field private apU:Ljava/util/Random;

.field private final auU:[F

.field private auV:Z

.field private final auW:[F

.field final synthetic auX:Lcom/kwad/sdk/core/g/d;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/g/d;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x3

    new-array v0, p1, [F

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/kwad/sdk/core/g/d$a;->auU:[F

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/g/d$a;->auV:Z

    new-array p1, p1, [F

    fill-array-data p1, :array_1

    iput-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auW:[F

    const-class p1, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {p1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/components/DevelopMangerComponents;

    if-eqz p1, :cond_0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/g/d$a;->auV:Z

    :cond_0
    return-void

    :array_0
    .array-data 4
        0x0
        0x0
        0x411ccccd    # 9.8f
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x0
        0x0
    .end array-data
.end method

.method private CM()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/g/d$a;->apU:Ljava/util/Random;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/g/d$a;->apU:Ljava/util/Random;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/g/d$a;->apU:Ljava/util/Random;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/g/d$a;->auU:[F

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/g/d$a;->a([F)V

    :cond_1
    return-void
.end method

.method private a([F)V
    .locals 7

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/g/d$a;->b([F)V

    const/4 v0, 0x0

    aget v1, p1, v0

    const/4 v2, 0x1

    aget v2, p1, v2

    const/4 v3, 0x2

    aget p1, p1, v3

    mul-float/2addr v1, v1

    mul-float/2addr v2, v2

    add-float/2addr v1, v2

    mul-float/2addr p1, p1

    add-float/2addr v1, p1

    float-to-double v1, v1

    invoke-static {v1, v2}, Ljava/lang/Math;->sqrt(D)D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Math;->abs(D)D

    move-result-wide v1

    invoke-static {}, Lcom/kwad/sdk/core/g/d;->CK()D

    move-result-wide v3

    sub-double v3, v1, v3

    invoke-static {v3, v4}, Ljava/lang/Math;->abs(D)D

    move-result-wide v3

    invoke-static {}, Lcom/kwad/sdk/core/g/d;->CL()D

    move-result-wide v5

    cmpg-double p1, v3, v5

    if-gtz p1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/g/d;->CK()D

    move-result-wide v3

    sub-double/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Math;->abs(D)D

    move-result-wide v1

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-static {p1}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/d;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-static {p1}, Lcom/kwad/sdk/core/g/d;->b(Lcom/kwad/sdk/core/g/d;)F

    move-result p1

    float-to-double v3, p1

    cmpl-double p1, v1, v3

    if-ltz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-static {p1}, Lcom/kwad/sdk/core/g/d;->c(Lcom/kwad/sdk/core/g/d;)Lcom/kwad/sdk/core/g/b;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/d;Z)Z

    iget-object p1, p0, Lcom/kwad/sdk/core/g/d$a;->auX:Lcom/kwad/sdk/core/g/d;

    invoke-static {p1}, Lcom/kwad/sdk/core/g/d;->c(Lcom/kwad/sdk/core/g/d;)Lcom/kwad/sdk/core/g/b;

    move-result-object p1

    invoke-interface {p1, v1, v2}, Lcom/kwad/sdk/core/g/b;->a(D)V

    :cond_1
    return-void
.end method

.method private b([F)V
    .locals 7

    const/4 v0, 0x0

    aget v1, p1, v0

    const v2, 0x3f19999a    # 0.6f

    mul-float/2addr v1, v2

    iget-object v3, p0, Lcom/kwad/sdk/core/g/d$a;->auW:[F

    aget v4, v3, v0

    const v5, 0x3ecccccc    # 0.39999998f

    mul-float/2addr v4, v5

    add-float/2addr v1, v4

    aput v1, p1, v0

    const/4 v1, 0x1

    aget v4, p1, v1

    mul-float/2addr v4, v2

    aget v6, v3, v1

    mul-float/2addr v6, v5

    add-float/2addr v4, v6

    aput v4, p1, v1

    const/4 v1, 0x2

    aget v4, p1, v1

    mul-float/2addr v4, v2

    aget v2, v3, v1

    mul-float/2addr v2, v5

    add-float/2addr v4, v2

    aput v4, p1, v1

    const/4 v1, 0x3

    invoke-static {p1, v0, v3, v0, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-void
.end method


# virtual methods
.method public final onAccuracyChanged(Landroid/hardware/Sensor;I)V
    .locals 0

    return-void
.end method

.method public final onSensorChanged(Landroid/hardware/SensorEvent;)V
    .locals 0

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/g/d$a;->a([F)V

    iget-boolean p1, p0, Lcom/kwad/sdk/core/g/d$a;->auV:Z

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/core/g/d$a;->CM()V

    :cond_0
    return-void
.end method
