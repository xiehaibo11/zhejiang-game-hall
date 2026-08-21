.class final Lcom/tkay/rewardvideo/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/c;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic b:Z

.field final synthetic c:Lcom/tkay/rewardvideo/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/c$1;->c:Lcom/tkay/rewardvideo/a/c;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/c$1;->a:Lcom/tkay/core/api/TYAdInfo;

    iput-boolean p3, p0, Lcom/tkay/rewardvideo/a/c$1;->b:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 32
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$1;->c:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    if-eqz v0, :cond_0

    .line 33
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/c$1;->c:Lcom/tkay/rewardvideo/a/c;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/c$1;->a:Lcom/tkay/core/api/TYAdInfo;

    iget-boolean v2, p0, Lcom/tkay/rewardvideo/a/c$1;->b:Z

    invoke-virtual {v0, v1, v2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    :cond_0
    return-void
.end method
