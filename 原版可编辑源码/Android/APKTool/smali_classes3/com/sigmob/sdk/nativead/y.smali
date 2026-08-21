.class public Lcom/sigmob/sdk/nativead/y;
.super Landroid/os/Handler;


# static fields
.field static final b:I = 0x15444


# instance fields
.field c:J

.field d:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    const-wide/16 v0, 0x64

    iput-wide v0, p0, Lcom/sigmob/sdk/nativead/y;->c:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/y;->d:Z

    return-void
.end method

.method public constructor <init>(Landroid/os/Looper;)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    const-wide/16 v0, 0x64

    iput-wide v0, p0, Lcom/sigmob/sdk/nativead/y;->c:J

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/y;->d:Z

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-wide v0, p0, Lcom/sigmob/sdk/nativead/y;->c:J

    const v2, 0x15444

    invoke-virtual {p0, v2, v0, v1}, Lcom/sigmob/sdk/nativead/y;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/y;->d:Z

    return-void
.end method

.method public b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/y;->d:Z

    return v0
.end method
