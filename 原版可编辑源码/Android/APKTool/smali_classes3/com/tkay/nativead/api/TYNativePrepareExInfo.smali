.class public Lcom/tkay/nativead/api/TYNativePrepareExInfo;
.super Lcom/tkay/nativead/api/TYNativePrepareInfo;


# instance fields
.field creativeClickViewList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNativePrepareInfo;-><init>()V

    return-void
.end method


# virtual methods
.method public getCreativeClickViewList()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation

    .line 14
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->creativeClickViewList:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 18
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->closeView:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 19
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->creativeClickViewList:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->closeView:Landroid/view/View;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 23
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->creativeClickViewList:Ljava/util/List;

    return-object v0
.end method

.method public setCreativeClickViewList(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 27
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareExInfo;->creativeClickViewList:Ljava/util/List;

    return-void
.end method
