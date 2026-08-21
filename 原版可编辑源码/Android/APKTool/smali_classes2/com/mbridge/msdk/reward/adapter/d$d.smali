.class public final Lcom/mbridge/msdk/reward/adapter/d$d;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "d"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V
    .locals 0

    .line 3914
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 3915
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const-string v0, "  mExcludes:"

    const-string v1, "RewardMVVideoAdapter"

    .line 3923
    :try_start_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "=====getTtcRunnable \u5f00\u59cb\u83b7\u53d6 mTtcIds:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3925
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 3926
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 3928
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v2

    .line 3929
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 3930
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/db/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)Ljava/lang/String;

    .line 3933
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)Ljava/lang/String;

    .line 3935
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "=====getTtcRunnable \u83b7\u53d6\u5b8c\u6bd5 mTtcIds:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3936
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->u(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, " mIsGetTtcExcIdsSuccess:"

    if-eqz v2, :cond_1

    .line 3938
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=====getTtcRunnable \u83b7\u53d6ttcid\u548cexcludeids\u8d85\u65f6 mIsGetTtcExcIdsTimeout\uff1a"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3940
    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->u(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3941
    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->v(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3938
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 3945
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "=====getTtcRunnable \u83b7\u53d6ttcid\u548cexcludeids\u6ca1\u6709\u8d85\u65f6 mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3947
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->u(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3948
    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->v(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 3945
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3950
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->w(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/d$e;

    move-result-object v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_2

    const-string v2, "=====getTtcRunnable \u5220\u9664 \u83b7\u53d6ttcid\u7684\u8d85\u65f6\u4efb\u52a1"

    .line 3951
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3952
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->w(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/d$e;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 3954
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v3, 0x1

    invoke-static {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Z)Z

    .line 3955
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "=====getTtcRunnable \u7ed9handler\u53d1\u9001\u6d88\u606f mTtcIds:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3956
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3955
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3957
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 3958
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    .line 3959
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->b:Ljava/lang/String;

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 3960
    iput v3, v0, Landroid/os/Message;->what:I

    .line 3961
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$d;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3965
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method
