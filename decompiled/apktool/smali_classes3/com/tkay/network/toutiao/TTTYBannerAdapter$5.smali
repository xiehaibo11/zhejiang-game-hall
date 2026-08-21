.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Ljava/util/Map;Ljava/util/Map;Landroid/content/Context;)V
    .locals 0

    .line 212
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->c:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 215
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    .line 218
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    const-string v2, "size"

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 219
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, ""

    .line 223
    :goto_0
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    const-string v3, "layout_type"

    invoke-interface {v2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    if-eqz v2, :cond_1

    .line 224
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    goto :goto_1

    :cond_1
    move v2, v4

    .line 228
    :goto_1
    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    const-string v5, "media_size"

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 229
    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    goto :goto_2

    :cond_2
    move v3, v4

    :goto_2
    const/16 v5, 0x64

    const/4 v6, 0x1

    const/16 v7, 0x258

    if-ne v2, v6, :cond_4

    packed-switch v3, :pswitch_data_0

    :cond_3
    move v1, v4

    move v7, v1

    goto :goto_4

    :pswitch_0
    const/16 v1, 0x1f4

    goto :goto_4

    :pswitch_1
    const/16 v1, 0x190

    goto :goto_4

    :pswitch_2
    const/16 v1, 0x184

    goto :goto_4

    :pswitch_3
    const/16 v1, 0xc8

    goto :goto_4

    :pswitch_4
    const/16 v1, 0x11e

    goto :goto_4

    :pswitch_5
    const/16 v1, 0xfa

    goto :goto_4

    :pswitch_6
    const/16 v1, 0x96

    goto :goto_4

    :pswitch_7
    move v1, v5

    goto :goto_4

    :pswitch_8
    const/16 v1, 0x5a

    goto :goto_4

    .line 278
    :cond_4
    :try_start_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    const-string v2, "x"

    .line 279
    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 280
    aget-object v2, v1, v4

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 281
    :try_start_1
    aget-object v1, v1, v6

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move v7, v2

    goto :goto_4

    :catch_0
    move-exception v1

    move v7, v2

    goto :goto_3

    :catch_1
    move-exception v1

    move v7, v4

    .line 284
    :goto_3
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    move v1, v4

    :goto_4
    if-eqz v7, :cond_6

    if-nez v1, :cond_5

    goto :goto_5

    :cond_5
    move v5, v1

    goto :goto_6

    :cond_6
    :goto_5
    const/16 v7, 0x280

    .line 294
    :goto_6
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput v7, v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->d:I

    .line 295
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iput v5, v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->e:I

    .line 302
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    if-eqz v1, :cond_9

    const-string v2, "key_width"

    .line 303
    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 304
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    .line 306
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v1

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->c:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->density:F
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    float-to-double v8, v3

    div-double/2addr v1, v8

    double-to-int v1, v1

    goto :goto_7

    :catchall_0
    move-exception v1

    .line 308
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_7
    move v1, v4

    .line 312
    :goto_7
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    const-string v3, "key_height"

    invoke-interface {v2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 313
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 315
    :try_start_3
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2

    iget-object v5, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->c:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v5

    iget v4, v5, Landroid/util/DisplayMetrics;->density:F
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    float-to-double v4, v4

    div-double/2addr v2, v4

    double-to-int v4, v2

    goto :goto_8

    :catchall_1
    move-exception v2

    .line 317
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_8
    :goto_8
    move v10, v4

    move v4, v1

    move v1, v10

    goto :goto_9

    :cond_9
    move v1, v4

    .line 322
    :goto_9
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->c:Landroid/content/Context;

    invoke-interface {v0, v2}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v0

    .line 323
    new-instance v2, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v3, v3, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->a:Ljava/util/Map;

    iget-object v8, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->b:Ljava/util/Map;

    invoke-direct {v2, v3, v5, v8}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 325
    invoke-virtual {v2, v6}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setAdCount(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    if-gtz v4, :cond_a

    .line 351
    div-int/lit8 v7, v7, 0x2

    int-to-float v3, v7

    goto :goto_a

    :cond_a
    int-to-float v3, v4

    :goto_a
    if-gtz v1, :cond_b

    const/4 v1, 0x0

    goto :goto_b

    :cond_b
    int-to-float v1, v1

    :goto_b
    invoke-virtual {v2, v3, v1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 352
    invoke-virtual {v2}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v1

    .line 353
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;->d:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/TTVfNative;->loadBnExpressVb(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
