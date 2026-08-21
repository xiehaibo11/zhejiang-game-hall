.class Lcom/tkay/banner/api/TYBannerView$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView;->controlShow()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/banner/api/TYBannerView;

.field final synthetic val$currentRefreshStatus:Z


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView;Z)V
    .locals 0

    .line 459
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iput-boolean p2, p0, Lcom/tkay/banner/api/TYBannerView$4;->val$currentRefreshStatus:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 462
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$300(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/a/a;

    move-result-object v0

    monitor-enter v0

    .line 463
    :try_start_0
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$100(Lcom/tkay/banner/api/TYBannerView;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 465
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$800(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/core/common/f/a;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_3

    .line 467
    iget-object v4, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v4}, Lcom/tkay/banner/api/TYBannerView;->access$400(Lcom/tkay/banner/api/TYBannerView;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 469
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->d()I

    move-result v4

    add-int/2addr v4, v3

    invoke-virtual {v1, v4}, Lcom/tkay/core/common/f/a;->a(I)V

    .line 470
    iget-object v3, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v3, v2}, Lcom/tkay/banner/api/TYBannerView;->access$102(Lcom/tkay/banner/api/TYBannerView;Z)Z

    .line 472
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    new-instance v4, Lcom/tkay/banner/api/TYBannerView$4$1;

    invoke-direct {v4, p0, v1}, Lcom/tkay/banner/api/TYBannerView$4$1;-><init>(Lcom/tkay/banner/api/TYBannerView$4;Lcom/tkay/core/common/f/a;)V

    invoke-virtual {v3, v4}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    goto :goto_2

    .line 480
    :cond_0
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-boolean v1, v1, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v1}, Lcom/tkay/banner/api/TYBannerView;->isShown()Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_0

    :cond_1
    move v2, v3

    goto :goto_1

    .line 481
    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/banner/b/a;->d()V

    .line 485
    :goto_1
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$600(Lcom/tkay/banner/api/TYBannerView;)Ljava/lang/String;

    goto :goto_2

    .line 489
    :cond_3
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$1000(Lcom/tkay/banner/api/TYBannerView;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$300(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/a/a;

    move-result-object v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$300(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/a/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/banner/a/a;->e()Z

    move-result v1

    if-nez v1, :cond_4

    .line 490
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1, v3}, Lcom/tkay/banner/api/TYBannerView;->access$200(Lcom/tkay/banner/api/TYBannerView;I)V

    .line 491
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-boolean v1, v1, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v1}, Lcom/tkay/banner/api/TYBannerView;->isShown()Z

    move-result v1

    if-eqz v1, :cond_4

    move v2, v3

    :cond_4
    :goto_2
    if-eqz v2, :cond_5

    .line 498
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object v1

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/banner/b/a;->c()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 499
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/banner/b/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 506
    :cond_5
    monitor-exit v0

    return-void

    .line 503
    :cond_6
    :try_start_1
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v1}, Lcom/tkay/banner/api/TYBannerView;->access$600(Lcom/tkay/banner/api/TYBannerView;)Ljava/lang/String;

    .line 504
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    .line 506
    monitor-exit v0

    throw v1
.end method
