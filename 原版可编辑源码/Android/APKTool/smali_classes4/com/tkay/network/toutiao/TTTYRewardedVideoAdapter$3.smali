.class final Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 169
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    .line 171
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;

    move-result-object v0

    .line 172
    new-instance v1, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->b:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->c:Ljava/util/Map;

    invoke-direct {v1, v2, v3, v4}, Lcom/tkay/network/toutiao/TTTYCustomAdSlotBuilder;-><init>(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)V

    .line 173
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 174
    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v3, v3, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 178
    :try_start_0
    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->b:Ljava/util/Map;

    const-string v5, "personalized_template"

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 180
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    const-string v5, "1"

    invoke-static {v5, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 181
    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    int-to-float v2, v2

    invoke-static {v4, v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Landroid/content/Context;F)I

    move-result v2

    int-to-float v2, v2

    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->a:Landroid/content/Context;

    int-to-float v3, v3

    invoke-static {v4, v3}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Landroid/content/Context;F)I

    move-result v3

    int-to-float v3, v3

    invoke-virtual {v1, v2, v3}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 184
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 210
    :cond_0
    :goto_0
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->c:Ljava/util/Map;

    const/4 v3, 0x1

    if-eqz v2, :cond_3

    :try_start_1
    const-string v4, "ad_is_support_deep_link"

    .line 212
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setSupportDeepLink(Z)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 217
    :catch_0
    :try_start_2
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->c:Ljava/util/Map;

    const-string v4, "ad_orientation"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v3, :cond_2

    const/4 v4, 0x2

    if-eq v2, v4, :cond_1

    goto :goto_1

    .line 220
    :cond_1
    invoke-virtual {v1, v4}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setOrientation(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    goto :goto_1

    .line 223
    :cond_2
    invoke-virtual {v1, v3}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setOrientation(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 230
    :catch_1
    :cond_3
    :goto_1
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->u(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 231
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->v(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setUserID(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 234
    :cond_4
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->w(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    .line 235
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->x(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v2

    const-string v4, "{network_placement_id}"

    invoke-virtual {v2, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 236
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->y(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-object v6, v6, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    invoke-virtual {v5, v4, v6}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Ljava/lang/String;)Ljava/lang/String;

    .line 239
    :cond_5
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->z(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setMediaExtra(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 242
    :cond_6
    invoke-virtual {v1, v3}, Lcom/bykv/vk/openvk/VfSlot$Builder;->setAdCount(I)Lcom/bykv/vk/openvk/VfSlot$Builder;

    .line 244
    invoke-virtual {v1}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v1

    .line 245
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;->d:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->e:Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/TTVfNative;->loadRdVideoVr(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;)V

    return-void
.end method
