.class public Lcom/bianfeng/h5library/utils/H5libGsonUtils;
.super Ljava/lang/Object;
.source "H5libGsonUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static toJson(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
