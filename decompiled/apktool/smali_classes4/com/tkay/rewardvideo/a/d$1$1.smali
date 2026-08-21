.class final Lcom/tkay/rewardvideo/a/d$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/a/d$1;->onRewardVideoAutoLoaded(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/rewardvideo/a/d$1;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/a/d$1;Ljava/lang/String;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/d$1$1;->b:Lcom/tkay/rewardvideo/a/d$1;

    iput-object p2, p0, Lcom/tkay/rewardvideo/a/d$1$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 47
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d$1$1;->b:Lcom/tkay/rewardvideo/a/d$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d$1;->a:Lcom/tkay/rewardvideo/a/d;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/d;->a(Lcom/tkay/rewardvideo/a/d;)Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 48
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d$1$1;->b:Lcom/tkay/rewardvideo/a/d$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d$1;->a:Lcom/tkay/rewardvideo/a/d;

    invoke-static {v0}, Lcom/tkay/rewardvideo/a/d;->a(Lcom/tkay/rewardvideo/a/d;)Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/d$1$1;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;->onRewardVideoAutoLoaded(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
