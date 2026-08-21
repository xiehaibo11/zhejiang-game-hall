.class final Lcom/bianfeng/ymnsdk/util/ViewHelper$1;
.super Ljava/lang/Object;
.source "ViewHelper.java"

# interfaces
.implements Landroid/os/Handler$Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/util/ViewHelper;->setLogoView(Landroid/app/Activity;Landroid/view/View;JLjava/util/Observer;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$callback:Ljava/util/Observer;

.field final synthetic val$contentView:Landroid/view/View;

.field final synthetic val$logoView:Landroid/view/View;

.field final synthetic val$parent:Landroid/view/ViewGroup;


# direct methods
.method constructor <init>(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/View;Ljava/util/Observer;)V
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$logoView:Landroid/view/View;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$contentView:Landroid/view/View;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$callback:Ljava/util/Observer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 5
    .param p1, "msg"    # Landroid/os/Message;

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$logoView:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$contentView:Landroid/view/View;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v0, v1, v3}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 27
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$callback:Ljava/util/Observer;

    const/4 v2, 0x0

    invoke-interface {v0, v2, v2}, Ljava/util/Observer;->update(Ljava/util/Observable;Ljava/lang/Object;)V

    .line 28
    return v1
.end method
