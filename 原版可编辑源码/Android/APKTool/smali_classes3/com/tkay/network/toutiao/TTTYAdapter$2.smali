.class final Lcom/tkay/network/toutiao/TTTYAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:I

.field final synthetic e:Lcom/tkay/network/toutiao/TTTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->c:Ljava/util/Map;

    iput p5, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->d:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 16

    move-object/from16 v1, p0

    .line 103
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v2

    .line 105
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v3, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 106
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v4, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 110
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const/4 v6, 0x4

    const/4 v9, 0x2

    const/4 v10, 0x3

    const/4 v11, 0x1

    if-eqz v0, :cond_c

    const-string v12, "key_width"

    .line 113
    invoke-interface {v0, v12}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 114
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    invoke-interface {v0, v12}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 118
    :goto_0
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const-string v13, "tt_image_height"

    invoke-interface {v12, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_1

    .line 119
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    invoke-interface {v12, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    goto :goto_1

    .line 120
    :cond_1
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const-string v13, "key_height"

    invoke-interface {v12, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_2

    .line 121
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    invoke-interface {v12, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    goto :goto_1

    :cond_2
    const/4 v12, 0x0

    .line 124
    :goto_1
    iget-object v13, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const-string v14, "tt_can_interrupt_video"

    invoke-interface {v13, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    .line 125
    iget-object v14, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const-string v15, "tt_video_play_btn_bitmap"

    invoke-interface {v14, v15}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    .line 126
    iget-object v15, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    const-string v5, "tt_video_play_btn_SIZE"

    invoke-interface {v15, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v0, :cond_3

    if-eqz v12, :cond_3

    .line 130
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    double-to-int v3, v7

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 132
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 135
    :goto_2
    :try_start_1
    invoke-virtual {v12}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v7
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    double-to-int v0, v7

    move v4, v0

    goto :goto_4

    :catchall_1
    move-exception v0

    .line 137
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_4

    .line 140
    :cond_3
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    if-ne v0, v11, :cond_4

    const/16 v0, 0x2b2

    const/16 v3, 0x184

    :goto_3
    move v4, v3

    move v3, v0

    goto :goto_4

    .line 143
    :cond_4
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    if-ne v0, v9, :cond_5

    const/16 v0, 0xe4

    const/16 v3, 0x96

    goto :goto_3

    .line 146
    :cond_5
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    if-ne v0, v10, :cond_6

    const/16 v0, 0x500

    const/16 v3, 0x2d0

    goto :goto_3

    .line 149
    :cond_6
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    if-ne v0, v6, :cond_7

    const/16 v0, 0x4b0

    const/16 v3, 0x274

    goto :goto_3

    .line 152
    :cond_7
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    const/4 v7, 0x5

    if-ne v0, v7, :cond_8

    const/16 v3, 0x280

    const/16 v4, 0x280

    .line 158
    :cond_8
    :goto_4
    instance-of v0, v13, Ljava/lang/Boolean;

    if-eqz v0, :cond_9

    .line 159
    invoke-virtual {v13}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    goto :goto_5

    :cond_9
    move v0, v11

    .line 162
    :goto_5
    instance-of v7, v14, Landroid/graphics/Bitmap;

    if-eqz v7, :cond_a

    .line 163
    check-cast v14, Landroid/graphics/Bitmap;

    move-object v8, v14

    goto :goto_6

    :cond_a
    const/4 v8, 0x0

    .line 166
    :goto_6
    instance-of v7, v5, Ljava/lang/Integer;

    if-eqz v7, :cond_b

    .line 167
    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    goto :goto_7

    :cond_b
    const/4 v5, 0x0

    goto :goto_7

    :cond_c
    move v0, v11

    const/4 v5, 0x0

    const/4 v8, 0x0

    .line 176
    :goto_7
    iget-object v7, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    invoke-interface {v2, v7}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v2

    .line 177
    new-instance v7, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v12, v12, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    iget-object v13, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->c:Ljava/util/Map;

    iget-object v14, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->b:Ljava/util/Map;

    invoke-direct {v7, v12, v13, v14}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 198
    iget v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->d:I

    invoke-static {v12, v10}, Ljava/lang/Math;->min(II)I

    move-result v12

    invoke-virtual {v7, v12}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setAdCount(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 199
    invoke-virtual {v7, v11}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setSupportDeepLink(Z)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 201
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v12, v12, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    const-string v13, "0"

    invoke-static {v13, v12}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_d

    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v12, v12, Lcom/tkay/network/toutiao/TTTYAdapter;->b:Ljava/lang/String;

    invoke-static {v13, v12}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_d

    .line 202
    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {v5}, Lcom/tkay/network/toutiao/TTTYAdapter;->b(Lcom/tkay/network/toutiao/TTTYAdapter;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "load Native Express Ad"

    invoke-static {v5, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 204
    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    int-to-float v3, v3

    invoke-static {v5, v3}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;F)I

    move-result v3

    int-to-float v3, v3

    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    int-to-float v4, v4

    invoke-static {v5, v4}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;F)I

    move-result v4

    int-to-float v4, v4

    invoke-virtual {v7, v3, v4}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 205
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;

    invoke-direct {v4, v1, v0}, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;Z)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadNtExpressVn(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    return-void

    .line 228
    :cond_d
    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v12, v12, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    const-string v14, "1"

    invoke-static {v14, v12}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_e

    iget-object v12, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v12, v12, Lcom/tkay/network/toutiao/TTTYAdapter;->b:Ljava/lang/String;

    invoke-static {v13, v12}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_e

    .line 229
    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {v5}, Lcom/tkay/network/toutiao/TTTYAdapter;->b(Lcom/tkay/network/toutiao/TTTYAdapter;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "load Native Express Video"

    invoke-static {v5, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 231
    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    int-to-float v3, v3

    invoke-static {v5, v3}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;F)I

    move-result v3

    int-to-float v3, v3

    iget-object v5, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    int-to-float v4, v4

    invoke-static {v5, v4}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Landroid/content/Context;F)I

    move-result v4

    int-to-float v4, v4

    invoke-virtual {v7, v3, v4}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 232
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$2;

    invoke-direct {v4, v1, v0}, Lcom/tkay/network/toutiao/TTTYAdapter$2$2;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;Z)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadExpressDrawVf(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    return-void

    :cond_e
    if-lez v3, :cond_f

    if-lez v4, :cond_f

    .line 260
    invoke-virtual {v7, v3, v4}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setImageAcceptedSize(II)Lcom/bykv/vk/openvk/VfSlot$Builder;

    goto :goto_8

    :cond_f
    const/16 v3, 0x140

    const/16 v4, 0x280

    .line 262
    invoke-virtual {v7, v4, v3}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setImageAcceptedSize(II)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 265
    :goto_8
    iget-object v3, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v3, v3, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    const/4 v4, -0x1

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v12

    packed-switch v12, :pswitch_data_0

    goto :goto_9

    :pswitch_0
    const-string v12, "4"

    invoke-virtual {v3, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    move v4, v6

    goto :goto_9

    :pswitch_1
    const-string v12, "3"

    invoke-virtual {v3, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    move v4, v10

    goto :goto_9

    :pswitch_2
    const-string v12, "2"

    invoke-virtual {v3, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    move v4, v9

    goto :goto_9

    :pswitch_3
    invoke-virtual {v3, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    move v4, v11

    goto :goto_9

    :pswitch_4
    invoke-virtual {v3, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    const/4 v4, 0x0

    :cond_10
    :goto_9
    if-eqz v4, :cond_15

    if-eq v4, v11, :cond_14

    if-eq v4, v9, :cond_13

    if-eq v4, v10, :cond_12

    if-eq v4, v6, :cond_11

    .line 380
    iget-object v0, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    const-string v2, ""

    const-string v3, "The Native type is not exit."

    invoke-virtual {v0, v2, v3}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 354
    :cond_11
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$7;

    invoke-direct {v4, v1, v0, v8, v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2$7;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadStream(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V

    return-void

    .line 331
    :cond_12
    invoke-virtual {v7, v9}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setNativeAdType(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 332
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;

    invoke-direct {v4, v1, v0, v8, v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2$6;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadNativeVn(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;)V

    return-void

    .line 309
    :cond_13
    invoke-virtual {v7, v11}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setNativeAdType(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 310
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$5;

    invoke-direct {v4, v1, v0, v8, v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2$5;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadNativeVn(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;)V

    return-void

    .line 288
    :cond_14
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$4;

    invoke-direct {v4, v1, v0, v8, v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2$4;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadDrawVfList(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$DrawVfListListener;)V

    return-void

    .line 267
    :cond_15
    invoke-virtual {v7}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v3

    new-instance v4, Lcom/tkay/network/toutiao/TTTYAdapter$2$3;

    invoke-direct {v4, v1, v0, v8, v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2$3;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;ZLandroid/graphics/Bitmap;I)V

    invoke-interface {v2, v3, v4}, Lcom/bykv/vk/openvk/TTVfNative;->loadVfList(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x30
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
