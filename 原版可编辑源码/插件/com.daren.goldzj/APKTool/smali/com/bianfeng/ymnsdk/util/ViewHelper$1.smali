.class Lcom/bianfeng/ymnsdk/util/ViewHelper$1;
.super Ljava/lang/Object;
.source "ViewHelper.java"

# interfaces
.implements Landroid/os/Handler$Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/util/ViewHelper;->setLogoView(Landroid/app/Activity;Landroid/view/View;JLjava/util/Observer;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
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

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$logoView:Landroid/view/View;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$contentView:Landroid/view/View;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$callback:Ljava/util/Observer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 4

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$logoView:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 2
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$contentView:Landroid/view/View;

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$parent:Landroid/view/ViewGroup;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, p1, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 3
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;->val$callback:Ljava/util/Observer;

    const/4 v1, 0x0

    invoke-interface {p1, v1, v1}, Ljava/util/Observer;->update(Ljava/util/Observable;Ljava/lang/Object;)V

    return v0
.end method
