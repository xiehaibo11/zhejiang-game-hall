.class Lcom/sigmob/sdk/splash/i$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/hardware/SensorEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/splash/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/i;

.field private b:J


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAccuracyChanged(Landroid/hardware/Sensor;I)V
    .locals 0

    return-void
.end method

.method public onSensorChanged(Landroid/hardware/SensorEvent;)V
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/sigmob/sdk/splash/i$1;->b:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x7d0

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    return-void

    :cond_0
    iget-object v2, p1, Landroid/hardware/SensorEvent;->values:[F

    const/4 v3, 0x0

    aget v2, v2, v3

    iget-object v3, p1, Landroid/hardware/SensorEvent;->values:[F

    const/4 v4, 0x1

    aget v3, v3, v4

    iget-object p1, p1, Landroid/hardware/SensorEvent;->values:[F

    const/4 v4, 0x2

    aget p1, p1, v4

    const/high16 v5, 0x41700000    # 15.0f

    cmpl-float v2, v2, v5

    if-gtz v2, :cond_1

    cmpl-float v2, v3, v5

    if-gtz v2, :cond_1

    cmpl-float p1, p1, v5

    if-lez p1, :cond_2

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {p1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/views/v;

    move-result-object p1

    invoke-virtual {p1, v4}, Lcom/sigmob/sdk/base/views/v;->a(I)V

    iput-wide v0, p0, Lcom/sigmob/sdk/splash/i$1;->b:J

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {p1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/views/v;

    move-result-object p1

    new-instance v0, Lcom/sigmob/sdk/splash/i$1$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/splash/i$1$1;-><init>(Lcom/sigmob/sdk/splash/i$1;)V

    const-wide/16 v1, 0x190

    invoke-virtual {p1, v0, v1, v2}, Lcom/sigmob/sdk/base/views/v;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    return-void
.end method
