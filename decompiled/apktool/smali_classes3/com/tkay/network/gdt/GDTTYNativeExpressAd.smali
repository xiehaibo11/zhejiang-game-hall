.class public Lcom/tkay/network/gdt/GDTTYNativeExpressAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/qq/e/ads/nativ/NativeExpressAD;

.field b:Lcom/qq/e/ads/nativ/NativeExpressADView;

.field c:Lcom/tkay/network/gdt/a;

.field d:Ljava/lang/String;


# direct methods
.method protected constructor <init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V
    .locals 12

    move-object v0, p0

    move-object v2, p1

    move v1, p3

    move/from16 v3, p4

    move/from16 v7, p5

    move/from16 v8, p7

    .line 42
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    move-object/from16 v6, p8

    .line 44
    iput-object v6, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->d:Ljava/lang/String;

    .line 45
    new-instance v5, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;

    invoke-direct {v5, p0}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;-><init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;)V

    const/4 v9, -0x1

    if-lez v1, :cond_0

    .line 174
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    int-to-float v1, v1

    invoke-static {p1, v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v9

    :goto_0
    if-lez v3, :cond_1

    .line 177
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    int-to-float v3, v3

    invoke-static {p1, v3}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Landroid/content/Context;F)I

    move-result v3

    goto :goto_1

    :cond_1
    const/4 v3, -0x2

    .line 180
    :goto_1
    invoke-static/range {p8 .. p8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 181
    new-instance v4, Lcom/qq/e/ads/nativ/NativeExpressAD;

    new-instance v6, Lcom/qq/e/ads/nativ/ADSize;

    invoke-direct {v6, v1, v3}, Lcom/qq/e/ads/nativ/ADSize;-><init>(II)V

    move-object v10, p2

    invoke-direct {v4, p1, v6, p2, v5}, Lcom/qq/e/ads/nativ/NativeExpressAD;-><init>(Landroid/content/Context;Lcom/qq/e/ads/nativ/ADSize;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeExpressAD$NativeExpressADListener;)V

    iput-object v4, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    goto :goto_2

    :cond_2
    move-object v10, p2

    .line 184
    new-instance v11, Lcom/qq/e/ads/nativ/NativeExpressAD;

    new-instance v4, Lcom/qq/e/ads/nativ/ADSize;

    invoke-direct {v4, v1, v3}, Lcom/qq/e/ads/nativ/ADSize;-><init>(II)V

    move-object v1, v11

    move-object v2, p1

    move-object v3, v4

    move-object v4, p2

    move-object/from16 v6, p8

    invoke-direct/range {v1 .. v6}, Lcom/qq/e/ads/nativ/NativeExpressAD;-><init>(Landroid/content/Context;Lcom/qq/e/ads/nativ/ADSize;Ljava/lang/String;Lcom/qq/e/ads/nativ/NativeExpressAD$NativeExpressADListener;Ljava/lang/String;)V

    iput-object v11, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    .line 188
    :goto_2
    new-instance v1, Lcom/qq/e/ads/cfg/VideoOption$Builder;

    invoke-direct {v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;-><init>()V

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v7, v3, :cond_3

    move v4, v3

    goto :goto_3

    :cond_3
    move v4, v2

    .line 189
    :goto_3
    invoke-virtual {v1, v4}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v1

    if-ne v7, v3, :cond_4

    move v2, v3

    .line 190
    :cond_4
    invoke-virtual {v1, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setDetailPageMuted(Z)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v1

    move/from16 v2, p6

    .line 191
    invoke-virtual {v1, v2}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->setAutoPlayPolicy(I)Lcom/qq/e/ads/cfg/VideoOption$Builder;

    move-result-object v1

    .line 192
    invoke-virtual {v1}, Lcom/qq/e/ads/cfg/VideoOption$Builder;->build()Lcom/qq/e/ads/cfg/VideoOption;

    move-result-object v1

    .line 194
    iget-object v2, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    invoke-virtual {v2, v1}, Lcom/qq/e/ads/nativ/NativeExpressAD;->setVideoOption(Lcom/qq/e/ads/cfg/VideoOption;)V

    if-eq v8, v9, :cond_5

    .line 196
    iget-object v1, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    invoke-virtual {v1, v8}, Lcom/qq/e/ads/nativ/NativeExpressAD;->setMaxVideoDuration(I)V

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->mAdSourceType:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic b(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->mAdSourceType:Ljava/lang/String;

    return-object p1
.end method


# virtual methods
.method protected final a(Lcom/tkay/network/gdt/a;Lcom/qq/e/comm/constants/LoadAdParams;)V
    .locals 1

    .line 201
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    .line 202
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->d:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    .line 203
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    invoke-virtual {p1, v0, p2}, Lcom/qq/e/ads/nativ/NativeExpressAD;->loadAD(ILcom/qq/e/comm/constants/LoadAdParams;)V

    return-void

    .line 205
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    invoke-virtual {p1, v0}, Lcom/qq/e/ads/nativ/NativeExpressAD;->loadAD(I)V

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 240
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 241
    invoke-virtual {v0, v1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->setMediaListener(Lcom/qq/e/ads/nativ/NativeExpressMediaListener;)V

    .line 242
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {v0}, Lcom/qq/e/ads/nativ/NativeExpressADView;->destroy()V

    .line 244
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    .line 245
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    .line 246
    iput-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a:Lcom/qq/e/ads/nativ/NativeExpressAD;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 0

    .line 218
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    return-object p1
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public registerDownloadConfirmListener()V
    .locals 2

    .line 223
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    if-eqz v0, :cond_0

    .line 224
    new-instance v1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$2;-><init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;)V

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    :cond_0
    return-void
.end method
