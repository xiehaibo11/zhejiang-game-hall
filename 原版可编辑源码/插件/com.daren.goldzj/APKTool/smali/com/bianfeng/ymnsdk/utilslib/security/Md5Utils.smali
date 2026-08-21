.class public Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;
.super Ljava/lang/Object;
.source "Md5Utils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static md5(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
