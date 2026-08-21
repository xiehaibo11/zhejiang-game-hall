.class public final Lcom/mbridge/msdk/reward/adapter/d$e;
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
    name = "e"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V
    .locals 0

    .line 3980
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 3981
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "RewardMVVideoAdapter"

    .line 3988
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=====\u8d85\u65f6task \u5f00\u59cb\u6267\u884c mTtcIds:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "  RewardMVVideoAdapter.this.mExcludes:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3989
    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 3988
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3990
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->v(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, " mIsGetTtcExcIdsSuccess:"

    if-eqz v1, :cond_0

    .line 3992
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u8d85\u65f6task \u5df2\u7ecf\u6210\u529f\u83b7\u53d6ttcid excludeids mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3994
    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->u(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 3995
    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->v(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, "\u8d85\u65f6task\u4e0d\u505a\u5904\u7406"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 3992
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 3998
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u83b7\u53d6ttcid excludeids\u8d85\u65f6 mIsGetTtcExcIdsTimeout:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 4000
    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->u(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 4001
    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->v(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 3998
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 4002
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;Z)Z

    .line 4003
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 4004
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    .line 4005
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->b:Ljava/lang/String;

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v1, 0x2

    .line 4006
    iput v1, v0, Landroid/os/Message;->what:I

    .line 4007
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$e;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 4010
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
