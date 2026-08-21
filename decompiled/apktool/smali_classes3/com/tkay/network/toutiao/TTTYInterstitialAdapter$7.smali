.class final Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 301
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 305
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 308
    array-length v1, v0

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-lez v1, :cond_0

    .line 310
    :try_start_0
    aget-object v1, v0, v2

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 312
    :catch_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->J(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "size set invalidate width"

    invoke-static {v1, v4}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    move v1, v3

    .line 316
    :goto_0
    array-length v4, v0

    if-le v4, v3, :cond_1

    .line 318
    :try_start_1
    aget-object v0, v0, v3

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 320
    :catch_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->J(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    const-string v4, "size set invalidate height"

    invoke-static {v0, v4}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    move v0, v3

    .line 324
    :goto_1
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v4

    .line 329
    :try_start_2
    iget-object v5, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    if-eqz v5, :cond_2

    .line 330
    iget-object v5, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    const-string v6, "key_width"

    invoke-interface {v5, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    :cond_2
    move v5, v2

    .line 336
    :goto_2
    :try_start_3
    iget-object v6, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    if-eqz v6, :cond_3

    .line 337
    iget-object v6, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    const-string v7, "key_height"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    :catch_3
    :cond_3
    move v6, v2

    .line 342
    :goto_3
    iget-object v7, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    invoke-interface {v4, v7}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v4

    .line 343
    new-instance v7, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v8, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v8, v8, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a:Ljava/lang/String;

    iget-object v9, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->c:Ljava/util/Map;

    iget-object v10, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->a:Ljava/util/Map;

    invoke-direct {v7, v8, v9, v10}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 344
    iget-object v8, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    invoke-virtual {v8}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v8

    invoke-virtual {v8}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v8

    iget v8, v8, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 345
    iget-object v9, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v9

    iget v9, v9, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 346
    invoke-virtual {v7, v3}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setAdCount(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 371
    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget v3, v3, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b:I

    if-eqz v3, :cond_8

    .line 373
    :try_start_4
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "1"

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    :cond_4
    if-lez v5, :cond_5

    goto :goto_4

    :cond_5
    move v5, v8

    :goto_4
    if-lez v6, :cond_6

    goto :goto_5

    :cond_6
    move v6, v9

    .line 388
    :goto_5
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    int-to-float v1, v5

    invoke-static {v0, v1}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    int-to-float v2, v6

    invoke-static {v1, v2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v7, v0, v1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_6

    :catchall_0
    move-exception v0

    .line 391
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 393
    :cond_7
    :goto_6
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->f:I

    invoke-virtual {v7, v0}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setOrientation(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 394
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v0

    .line 395
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->k:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

    invoke-interface {v4, v0, v1}, Lcom/bykv/vk/openvk/TTVfNative;->loadFullVideoVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V

    return-void

    .line 397
    :cond_8
    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->b:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->density:F

    if-gtz v5, :cond_9

    .line 399
    invoke-static {v8, v9}, Ljava/lang/Math;->min(II)I

    move-result v5

    int-to-float v5, v5

    const/high16 v8, 0x41f00000    # 30.0f

    mul-float/2addr v8, v3

    sub-float/2addr v5, v8

    goto :goto_7

    :cond_9
    int-to-float v5, v5

    :goto_7
    div-float/2addr v5, v3

    float-to-int v5, v5

    if-gtz v6, :cond_a

    goto :goto_8

    :cond_a
    int-to-float v2, v6

    div-float/2addr v2, v3

    float-to-int v2, v2

    :goto_8
    if-nez v2, :cond_b

    .line 402
    div-int v1, v5, v1

    mul-int v2, v1, v0

    .line 404
    :cond_b
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->J(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "expressWidth: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", expressHeight: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    int-to-float v0, v5

    int-to-float v1, v2

    .line 405
    invoke-virtual {v7, v0, v1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 406
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v0

    .line 407
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;->d:Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    invoke-interface {v4, v0, v1}, Lcom/bykv/vk/openvk/TTVfNative;->loadItExpressVi(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    return-void
.end method
