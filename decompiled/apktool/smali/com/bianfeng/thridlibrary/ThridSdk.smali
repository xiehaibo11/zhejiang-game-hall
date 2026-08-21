.class public Lcom/bianfeng/thridlibrary/ThridSdk;
.super Ljava/lang/Object;
.source "ThridSdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getGson()Lcom/bianfeng/thridlibrary/GsonUtils;
    .locals 1

    .line 18
    invoke-static {}, Lcom/bianfeng/thridlibrary/GsonUtils;->getInstance()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getImageLoad()Lcom/bianfeng/thridlibrary/ImageLoadUtils;
    .locals 1

    .line 22
    invoke-static {}, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->getInstance()Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;
    .locals 1

    .line 26
    invoke-static {}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->getInstance()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/app/Activity;)V
    .locals 1

    .line 14
    invoke-static {}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->getInstance()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onInit(Landroid/app/Activity;)V

    return-void
.end method

.method public static onDestory()V
    .locals 1

    .line 34
    invoke-static {}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->getInstance()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onDestory()V

    return-void
.end method

.method public static onResume()V
    .locals 1

    .line 30
    invoke-static {}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->getInstance()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onResume()V

    return-void
.end method
