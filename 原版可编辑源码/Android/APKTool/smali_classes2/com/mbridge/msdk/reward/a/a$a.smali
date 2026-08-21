.class public final Lcom/mbridge/msdk/reward/a/a$a;
.super Ljava/lang/Object;
.source "RewardVideoController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/a/a;

.field private final b:Lcom/mbridge/msdk/reward/adapter/d;

.field private final c:I

.field private final d:Z


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/adapter/d;IZ)V
    .locals 0

    .line 2651
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$a;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 2652
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2653
    iput-object p2, p0, Lcom/mbridge/msdk/reward/a/a$a;->b:Lcom/mbridge/msdk/reward/adapter/d;

    .line 2654
    iput p3, p0, Lcom/mbridge/msdk/reward/a/a$a;->c:I

    .line 2655
    iput-boolean p4, p0, Lcom/mbridge/msdk/reward/a/a$a;->d:Z

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 2660
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$a;->b:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 2661
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Z)V

    .line 2663
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "adSource="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a$a;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " CommonCancelTimeTask mIsDevCall\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a$a;->d:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardVideoController"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2664
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$a;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$a;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$a;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v5

    const-string v3, "v3 is timeout"

    const-string v6, ""

    const-string v7, ""

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2665
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a$a;->a:Lcom/mbridge/msdk/reward/a/a;

    const-string v1, "v3 is timeout"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;)V

    return-void
.end method
