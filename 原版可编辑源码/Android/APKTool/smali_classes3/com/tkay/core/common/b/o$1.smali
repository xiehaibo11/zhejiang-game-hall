.class final Lcom/tkay/core/common/b/o$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/o;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/BaseAd;

.field final synthetic b:Lcom/tkay/core/common/b/o;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/o;Lcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iput-object p2, p0, Lcom/tkay/core/common/b/o$1;->a:Lcom/tkay/core/api/BaseAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 51
    iget-object p1, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iget-object p1, p1, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_0

    .line 52
    iget-object p1, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iget-object p1, p1, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "load image fail:"

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "10011"

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 4

    .line 42
    iget-object p2, p0, Lcom/tkay/core/common/b/o$1;->a:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {p2}, Lcom/tkay/core/api/BaseAd;->getMainImageUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 43
    iget-object p1, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iget-object p1, p1, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_0

    .line 44
    iget-object p1, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iget-object p1, p1, Lcom/tkay/core/common/b/o;->a:Lcom/tkay/core/api/TYCustomLoadListener;

    const/4 p2, 0x1

    new-array p2, p2, [Lcom/tkay/core/api/BaseAd;

    const/4 v0, 0x0

    new-instance v1, Lcom/tkay/core/common/f/a/e;

    iget-object v2, p0, Lcom/tkay/core/common/b/o$1;->a:Lcom/tkay/core/api/BaseAd;

    iget-object v3, p0, Lcom/tkay/core/common/b/o$1;->b:Lcom/tkay/core/common/b/o;

    iget-object v3, v3, Lcom/tkay/core/common/b/o;->b:Ljava/util/Map;

    invoke-direct {v1, v2, v3}, Lcom/tkay/core/common/f/a/e;-><init>(Lcom/tkay/core/api/BaseAd;Ljava/util/Map;)V

    aput-object v1, p2, v0

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method
