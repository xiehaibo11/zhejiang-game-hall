.class final Lcom/reyun/tracking/sdk/k;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const/16 v0, 0xa

    const/16 v1, 0xa

    :cond_0
    :goto_0
    if-ne v1, v0, :cond_1

    :try_start_0
    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->access$1400(I)I

    move-result v1

    if-ne v1, v0, :cond_0

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$1500()I

    move-result v2

    int-to-long v2, v2

    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method
