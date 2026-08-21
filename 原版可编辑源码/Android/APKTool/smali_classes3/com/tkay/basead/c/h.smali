.class public abstract Lcom/tkay/basead/c/h;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/hardware/SensorEventListener;


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2


# instance fields
.field public d:F

.field public e:F

.field public f:F

.field public g:J

.field private h:I

.field private i:J


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 11
    iput v0, p0, Lcom/tkay/basead/c/h;->d:F

    .line 12
    iput v0, p0, Lcom/tkay/basead/c/h;->e:F

    .line 13
    iput v0, p0, Lcom/tkay/basead/c/h;->f:F

    const-wide/16 v0, 0x0

    .line 14
    iput-wide v0, p0, Lcom/tkay/basead/c/h;->g:J

    const/4 v2, 0x0

    .line 16
    iput v2, p0, Lcom/tkay/basead/c/h;->h:I

    .line 17
    iput-wide v0, p0, Lcom/tkay/basead/c/h;->i:J

    const/16 v0, 0xa

    .line 26
    iput v0, p0, Lcom/tkay/basead/c/h;->h:I

    const-wide/16 v0, 0x1388

    .line 27
    iput-wide v0, p0, Lcom/tkay/basead/c/h;->i:J

    return-void
.end method


# virtual methods
.method public final a(IJ)V
    .locals 0

    .line 21
    iput p1, p0, Lcom/tkay/basead/c/h;->h:I

    .line 22
    iput-wide p2, p0, Lcom/tkay/basead/c/h;->i:J

    return-void
.end method

.method public abstract a()Z
.end method

.method public onAccuracyChanged(Landroid/hardware/Sensor;I)V
    .locals 0

    return-void
.end method

.method public onSensorChanged(Landroid/hardware/SensorEvent;)V
    .locals 8

    .line 33
    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    const/4 v0, 0x0

    .line 34
    aget v0, p1, v0

    neg-float v0, v0

    const/4 v1, 0x1

    .line 35
    aget v1, p1, v1

    neg-float v1, v1

    const/4 v2, 0x2

    .line 36
    aget p1, p1, v2

    neg-float p1, p1

    .line 37
    iget v2, p0, Lcom/tkay/basead/c/h;->d:F

    const/4 v3, 0x0

    cmpl-float v4, v2, v3

    if-eqz v4, :cond_0

    sub-float v2, v0, v2

    invoke-static {v2}, Ljava/lang/Math;->abs(F)F

    move-result v2

    iget v4, p0, Lcom/tkay/basead/c/h;->h:I

    int-to-float v4, v4

    cmpl-float v2, v2, v4

    if-gtz v2, :cond_2

    :cond_0
    iget v2, p0, Lcom/tkay/basead/c/h;->e:F

    cmpl-float v4, v2, v3

    if-eqz v4, :cond_1

    sub-float v2, v1, v2

    .line 38
    invoke-static {v2}, Ljava/lang/Math;->abs(F)F

    move-result v2

    iget v4, p0, Lcom/tkay/basead/c/h;->h:I

    int-to-float v4, v4

    cmpl-float v2, v2, v4

    if-gtz v2, :cond_2

    :cond_1
    iget v2, p0, Lcom/tkay/basead/c/h;->f:F

    cmpl-float v3, v2, v3

    if-eqz v3, :cond_3

    sub-float v2, p1, v2

    .line 39
    invoke-static {v2}, Ljava/lang/Math;->abs(F)F

    move-result v2

    iget v3, p0, Lcom/tkay/basead/c/h;->h:I

    int-to-float v3, v3

    cmpl-float v2, v2, v3

    if-lez v2, :cond_3

    .line 40
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 41
    iget-wide v4, p0, Lcom/tkay/basead/c/h;->g:J

    sub-long v4, v2, v4

    iget-wide v6, p0, Lcom/tkay/basead/c/h;->i:J

    cmp-long v4, v4, v6

    if-lez v4, :cond_3

    .line 42
    invoke-virtual {p0}, Lcom/tkay/basead/c/h;->a()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 43
    iput-wide v2, p0, Lcom/tkay/basead/c/h;->g:J

    .line 47
    :cond_3
    iput v0, p0, Lcom/tkay/basead/c/h;->d:F

    .line 48
    iput v1, p0, Lcom/tkay/basead/c/h;->e:F

    .line 49
    iput p1, p0, Lcom/tkay/basead/c/h;->f:F

    return-void
.end method
