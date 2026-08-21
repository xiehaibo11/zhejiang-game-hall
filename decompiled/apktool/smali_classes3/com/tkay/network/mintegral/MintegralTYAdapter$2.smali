.class final Lcom/tkay/network/mintegral/MintegralTYAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYAdapter;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZLjava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/out/MBNativeHandler;

.field final synthetic b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Z

.field final synthetic g:Lcom/tkay/network/mintegral/MintegralTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeHandler;Lcom/mbridge/msdk/out/MBBidNativeHandler;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    iput-object p4, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->c:Landroid/content/Context;

    iput-object p5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->e:Ljava/lang/String;

    iput-boolean p7, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->f:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onAdFramesLoaded(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;)V
    .locals 1

    .line 271
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->k(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 272
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->l(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0, p1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    .line 275
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 276
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 277
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeHandler;->release()V

    return-void

    .line 278
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz p1, :cond_2

    .line 279
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 280
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidRelease()V

    :cond_2
    return-void
.end method

.method public final onAdLoaded(Ljava/util/List;I)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;I)V"
        }
    .end annotation

    const-string p2, "Mintegral no ad return "

    const-string v0, ""

    const/4 v1, 0x0

    if-eqz p1, :cond_7

    .line 220
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-gtz v2, :cond_0

    goto/16 :goto_2

    :cond_0
    const/4 v2, 0x0

    .line 236
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 237
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    move-object v9, v4

    check-cast v9, Lcom/mbridge/msdk/out/Campaign;

    const/4 v4, 0x1

    if-eqz v9, :cond_1

    .line 240
    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    xor-int/lit8 v10, v2, 0x1

    .line 241
    new-instance v2, Lcom/tkay/network/mintegral/MintegralTYNativeAd;

    iget-object v6, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->c:Landroid/content/Context;

    iget-object v7, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->d:Ljava/lang/String;

    iget-object v8, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->e:Ljava/lang/String;

    move-object v5, v2

    invoke-direct/range {v5 .. v10}, Lcom/tkay/network/mintegral/MintegralTYNativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Z)V

    .line 242
    iget-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iget-object v5, v5, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    .line 1295
    iput-object v5, v2, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->e:Ljava/lang/String;

    .line 243
    iget-boolean v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->f:Z

    .line 2291
    iput-boolean v5, v2, Lcom/tkay/network/mintegral/MintegralTYNativeAd;->h:Z

    .line 244
    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    move v2, v4

    goto :goto_0

    :cond_2
    if-nez v2, :cond_3

    .line 249
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 250
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->h(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 253
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->i(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 254
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 255
    invoke-interface {v3, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 256
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p2}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->j(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    .line 260
    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    if-eqz p1, :cond_5

    .line 261
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 262
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeHandler;->release()V

    return-void

    .line 263
    :cond_5
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz p1, :cond_6

    .line 264
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 265
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidRelease()V

    :cond_6
    return-void

    .line 221
    :cond_7
    :goto_2
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_8

    .line 222
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->g:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    :cond_8
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    if-eqz p1, :cond_9

    .line 226
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 227
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->a:Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeHandler;->release()V

    return-void

    .line 228
    :cond_9
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    if-eqz p1, :cond_a

    .line 229
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 230
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;->b:Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidRelease()V

    :cond_a
    return-void
.end method

.method public final onLoggingImpression(I)V
    .locals 0

    return-void
.end method
