.class public Lcom/tkay/network/toutiao/TTTYNativePatchAd;
.super Lcom/tkay/network/toutiao/TTTYNativeAd;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtObject;ZLandroid/graphics/Bitmap;I)V
    .locals 0

    .line 19
    invoke-direct/range {p0 .. p6}, Lcom/tkay/network/toutiao/TTTYNativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/bykv/vk/openvk/TTNtObject;ZLandroid/graphics/Bitmap;I)V

    return-void
.end method


# virtual methods
.method public getNativeType()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public setAdData(ZLandroid/graphics/Bitmap;I)V
    .locals 0

    .line 24
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdData(ZLandroid/graphics/Bitmap;I)V

    return-void
.end method
