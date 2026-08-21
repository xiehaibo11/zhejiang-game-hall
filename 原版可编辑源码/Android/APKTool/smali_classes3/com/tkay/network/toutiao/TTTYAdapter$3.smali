.class final Lcom/tkay/network/toutiao/TTTYAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;Ljava/util/List;ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Z

.field final synthetic c:Z

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;ZZ)V
    .locals 0

    .line 395
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->a:Landroid/content/Context;

    iput-boolean p3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->b:Z

    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->c:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRenderFail(Ljava/lang/String;I)V
    .locals 1

    .line 411
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2, p1}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderSuccess(Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation

    .line 398
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 399
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v6, v2

    check-cast v6, Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 400
    new-instance v2, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v5, v3, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    iget-boolean v7, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->b:Z

    iget-boolean v8, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->c:Z

    move-object v3, v2

    invoke-direct/range {v3 .. v8}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtExpressObject;ZZ)V

    .line 401
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 404
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 405
    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 406
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {v1, p1, v0}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Lcom/tkay/network/toutiao/TTTYAdapter;Ljava/util/List;[Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V

    return-void
.end method
