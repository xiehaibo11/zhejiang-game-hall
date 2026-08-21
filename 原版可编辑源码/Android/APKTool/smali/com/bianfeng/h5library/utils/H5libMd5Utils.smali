.class public Lcom/bianfeng/h5library/utils/H5libMd5Utils;
.super Ljava/lang/Object;
.source "H5libMd5Utils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static md5(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 7
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
