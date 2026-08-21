.class final Lcom/kwad/sdk/utils/ax$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/ax;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "d"
.end annotation


# instance fields
.field private aJs:Landroid/hardware/SensorEvent;

.field private timestamp:J


# direct methods
.method public constructor <init>(Landroid/hardware/SensorEvent;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/utils/ax$d;->aJs:Landroid/hardware/SensorEvent;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/ax$d;->timestamp:J

    return-void
.end method


# virtual methods
.method public final Jt()Landroid/hardware/SensorEvent;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/utils/ax$d;->aJs:Landroid/hardware/SensorEvent;

    return-object v0
.end method

.method public final getTimestamp()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/utils/ax$d;->timestamp:J

    return-wide v0
.end method
