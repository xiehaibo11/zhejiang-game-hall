.class final Lcom/tkay/rewardvideo/a/c$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/c;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

.field final synthetic d:Lcom/tkay/rewardvideo/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/c;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/c$6;->d:Lcom/tkay/rewardvideo/a/c;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/c$6;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/rewardvideo/a/c$6;->b:Lcom/tkay/core/api/TYAdInfo;

    iput-object p4, p0, Lcom/tkay/rewardvideo/a/c$6;->c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 44
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$6;->d:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    if-eqz v0, :cond_0

    .line 45
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$6;->d:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/c$6;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/c$6;->b:Lcom/tkay/core/api/TYAdInfo;

    iget-object v3, p0, Lcom/tkay/rewardvideo/a/c$6;->c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method
