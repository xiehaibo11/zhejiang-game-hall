.class public abstract Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;
.super Landroid/app/Dialog;


# instance fields
.field private df:Lcom/bykv/vk/openvk/TTDislikeController;

.field private rg:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;I)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    return-void
.end method


# virtual methods
.method public abstract getLayoutId()I
.end method

.method public abstract getLayoutParams()Landroid/view/ViewGroup$LayoutParams;
.end method

.method public abstract getTTDislikeListViewIds()[I
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 32
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 34
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 36
    :try_start_0
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->getLayoutId()I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg:Landroid/view/View;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p1, :cond_0

    return-void

    .line 45
    :cond_0
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    .line 46
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg:Landroid/view/View;

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    :goto_0
    invoke-virtual {p0, v0, p1}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->setContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 48
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg()V

    return-void

    :catch_0
    const-string p1, "TTDislikeDialogAbstract"

    const-string v0, "getLayoutId\u5e03\u5c40\u6587\u4ef6id\u53ef\u80fd\u5f02\u5e38\uff0c\u8bf7\u68c0\u67e5"

    .line 41
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected rg()V
    .locals 5

    .line 52
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->df:Lcom/bykv/vk/openvk/TTDislikeController;

    if-nez v0, :cond_0

    return-void

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg:Landroid/view/View;

    if-nez v0, :cond_1

    return-void

    .line 58
    :cond_1
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->getTTDislikeListViewIds()[I

    move-result-object v0

    if-eqz v0, :cond_5

    .line 59
    array-length v1, v0

    if-lez v1, :cond_5

    .line 62
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_4

    aget v3, v0, v2

    .line 63
    iget-object v4, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg:Landroid/view/View;

    invoke-virtual {v4, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 67
    instance-of v4, v3, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    if-eqz v4, :cond_2

    .line 70
    check-cast v3, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;

    .line 71
    iget-object v4, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->df:Lcom/bykv/vk/openvk/TTDislikeController;

    invoke-virtual {v3, v4}, Lcom/bykv/vk/openvk/dislike/TTDislikeListView;->setDislikeInfo(Lcom/bykv/vk/openvk/TTDislikeController;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 68
    :cond_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "getTTDislikeListViewIds\u627e\u5230\u7684view\u7c7b\u578b\u5f02\u5e38\uff0c\u8bf7\u68c0\u67e5"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 65
    :cond_3
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "getTTDislikeListViewIds\u63d0\u4f9b\u7684id\u627e\u4e0d\u5230view\uff0c\u8bf7\u68c0\u67e5"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_4
    return-void

    .line 60
    :cond_5
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "dislike\u9009\u9879\u5217\u8868\u4e3a\u7a7a\uff0c\u8bf7\u8bbe\u7f6eTTDislikeListView"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public setDislikeModel(Lcom/bykv/vk/openvk/TTDislikeController;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->df:Lcom/bykv/vk/openvk/TTDislikeController;

    .line 78
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTDislikeDialogAbstract;->rg()V

    return-void
.end method

.method public show()V
    .locals 0

    .line 113
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    return-void
.end method

.method public startPersonalizePromptActivity()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method
