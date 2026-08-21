.class final Lcom/tkay/network/toutiao/TTTYAdapter$2$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYAdapter$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Landroid/graphics/Bitmap;

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V
    .locals 0

    .line 332
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->d:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iput-boolean p2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->a:Z

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->b:Landroid/graphics/Bitmap;

    iput p4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDrawVfLoad(Ljava/util/List;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtObject;",
            ">;)V"
        }
    .end annotation

    .line 340
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 341
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v6, v2

    check-cast v6, Lcom/bykv/vk/openvk/TTNtObject;

    .line 342
    new-instance v2, Lcom/tkay/network/toutiao/TTTYNativeAd;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->d:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v4, v3, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->d:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v3, v3, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v5, v3, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    iget-boolean v7, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->a:Z

    iget-object v8, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->b:Landroid/graphics/Bitmap;

    iget v9, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->c:I

    move-object v3, v2

    invoke-direct/range {v3 .. v9}, Lcom/tkay/network/toutiao/TTTYNativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtObject;ZLandroid/graphics/Bitmap;I)V

    .line 343
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 346
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 347
    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 348
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->d:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {v1, p1, v0}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Lcom/tkay/network/toutiao/TTTYAdapter;Ljava/util/List;[Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 335
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;->d:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
